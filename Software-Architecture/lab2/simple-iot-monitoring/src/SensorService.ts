import { TemperatureSensor } from "./TemperatureSensor";

export class SensorService {
    constructor(private sensor: TemperatureSensor) {}

    getTemperature(): number {
        return this.sensor.readTemperature();
    }
}