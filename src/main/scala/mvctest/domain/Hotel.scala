package mvctest.domain

import javax.persistence.Id
import javax.persistence.GeneratedValue
import java.lang.Long
import javax.persistence.Entity
import scala.beans.BeanProperty
import org.hibernate.validator.constraints.NotEmpty

@Entity
class Hotel {
  
  @Id 
  @GeneratedValue 
  @BeanProperty
  var id: Long = _
  
  @BeanProperty
  @NotEmpty
  var name: String = _
  
  @BeanProperty
  @NotEmpty
  var address: String = _
  
  @BeanProperty
  @NotEmpty
  var zip: String = _
}