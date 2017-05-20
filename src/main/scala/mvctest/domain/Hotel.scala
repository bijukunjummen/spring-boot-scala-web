package mvctest.domain

import javax.persistence.Id
import javax.persistence.GeneratedValue
import java.lang.Long
import javax.persistence.Entity

import scala.beans.BeanProperty
import org.hibernate.validator.constraints.NotEmpty

import scala.annotation.meta.field

@Entity
class Hotel(@(Id @field) @(GeneratedValue @field) @BeanProperty var id: Long,
            @BeanProperty @(NotEmpty @field) var name: String,
            @BeanProperty @(NotEmpty @field) var address: String,
            @BeanProperty @(NotEmpty @field) var zip: String) {

  def this() = this(null, null, null, null)
}