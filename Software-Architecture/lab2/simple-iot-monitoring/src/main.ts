import { Display } from "./Display";
import { HumiditySensor } from "./HumiditySensor";
import { SensorService } from "./SensorService";
import { TemperatureSensor } from "./TemperatureSensor";

const temperatureSensor = new TemperatureSensor();
const humiditySensor = new HumiditySensor();
const service = new SensorService(
    temperatureSensor,
    humiditySensor
);
const display = new Display();

display.showTemperature(service.getTemperature());
display.showHumidity(service.getHumidity());