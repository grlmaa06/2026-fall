"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.SensorService = void 0;
class SensorService {
    constructor(sensor) {
        this.sensor = sensor;
    }
    getTemperature() {
        return this.sensor.readTemperature();
    }
}
exports.SensorService = SensorService;
