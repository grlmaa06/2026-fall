import { TemperatureSensor } from "./TemperatureSensor";
import { HumiditySensor } from "./HumiditySensor";

export class SensorService {
    constructor(
        private temperatureSensor: TemperatureSensor,
        private humiditySensor: HumiditySensor
    ) {}

    getTemperature(): number {
        return this.temperatureSensor.readTemperature();
    }

    getHumidity(): number {
        return this.humiditySensor.readHumidity();
    }
}