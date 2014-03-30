package mvctest.service

import org.springframework.data.repository.CrudRepository
import mvctest.domain.Hotel
import java.lang.Long

trait HotelRepository extends CrudRepository[Hotel, Long]