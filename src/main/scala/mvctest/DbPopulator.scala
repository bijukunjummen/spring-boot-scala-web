package mvctest

import mvctest.domain.Hotel
import mvctest.service.HotelRepository
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.boot.CommandLineRunner
import org.springframework.stereotype.Component

/**
  * Responsible for populating some initial data into the database..
  */

@Component
class DbPopulator @Autowired()(val hotelRepository: HotelRepository) extends CommandLineRunner {
  override def run(args: String*): Unit = {
    hotelRepository.save(new Hotel(null, "Hotel 1", "Address 1", "Zip 1"))
    hotelRepository.save(new Hotel(null, "Hotel 2", "Address 2", "Zip 2"))
    hotelRepository.save(new Hotel(null, "Hotel 3", "Address 3", "Zip 3"))
    hotelRepository.save(new Hotel(null, "Hotel 4", "Address 4", "Zip 4"))
  }
}
