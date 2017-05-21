package mvctest.web

import java.lang.Long
import javax.validation.Valid

import mvctest.domain.Hotel
import mvctest.service.HotelRepository
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.stereotype.Controller
import org.springframework.ui.Model
import org.springframework.validation.BindingResult
import org.springframework.web.bind.annotation._

@Controller
@RequestMapping(Array("/hotels"))
class HotelController @Autowired()(private val hotelRepository: HotelRepository) {

  @GetMapping
  def list(model: Model) = {
    val hotels = hotelRepository.findAll()
    model.addAttribute("hotels", hotels)
    "hotels/list"
  }

  @GetMapping(Array("/edit/{id}"))
  def edit(@PathVariable("id") id: Long, model: Model) = {
    model.addAttribute("hotel", hotelRepository.findOne(id))
    "hotels/edit"
  }

  @GetMapping(params = Array("form"))
  def createForm(model: Model) = {
    model.addAttribute("hotel", new Hotel())
    "hotels/create"
  }

  @PostMapping
  def create(@Valid hotel: Hotel, bindingResult: BindingResult) =
    if (bindingResult.hasErrors()) {
      "hotels/create"
    } else {
      hotelRepository.save(hotel)
      "redirect:/hotels"
    }


  @PostMapping(value = Array("/update"))
  def update(@Valid hotel: Hotel, bindingResult: BindingResult) =
    if (bindingResult.hasErrors()) {
      "hotels/edit"
    } else {
      hotelRepository.save(hotel)
      "redirect:/hotels"
    }


  @GetMapping(value = Array("/delete/{id}"))
  def delete(@PathVariable("id") id: Long) = {
    hotelRepository.delete(id)
    "redirect:/hotels"
  }

}