package mvctest.domain

import javax.persistence.Id
import javax.persistence.GeneratedValue
import java.lang.Long
import javax.persistence.Entity
import scala.beans.BeanProperty

@Entity
class Hotel {
  
  @Id 
  @GeneratedValue 
  @BeanProperty
  var id: Long = _
  
  @BeanProperty
  var name: String = _
  
  @BeanProperty
  var address: String = _
  
  @BeanProperty
  var zip: String = _
}