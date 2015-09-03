package mvctest.config

import org.springframework.context.annotation.Configuration
import org.springframework.format.FormatterRegistry
import org.springframework.web.servlet.config.annotation.WebMvcConfigurerAdapter

@Configuration
class WebConfig extends WebMvcConfigurerAdapter {
  override def addFormatters(registry: FormatterRegistry): Unit = {
    registry.addConverter(classOf[Any], classOf[Option[Any]], new TypeToOptionOfTypeConverter[Any])
  }
}
