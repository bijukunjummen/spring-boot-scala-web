package mvctest.converters

import org.springframework.core.convert.converter.Converter

class TypeToOptionOfTypeConverter[T] extends Converter[T, Option[T]] {
  override def convert(source: T): Option[T] = {
    Some(source)
  }
}
