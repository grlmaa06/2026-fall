import { Display } from "./Display";
import { SensorService } from "./SensorService";
import { TemperatureSensor } from "./TemperatureSensor";

const sensor = new TemperatureSensor();
const service = new SensorService(sensor);
const display = new Display();

display.showTemperature(service.getTemperature());