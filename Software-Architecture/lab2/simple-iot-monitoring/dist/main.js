"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
const Display_1 = require("./Display");
const SensorService_1 = require("./SensorService");
const TemperatureSensor_1 = require("./TemperatureSensor");
const sensor = new TemperatureSensor_1.TemperatureSensor();
const service = new SensorService_1.SensorService(sensor);
const display = new Display_1.Display();
display.showTemperature(service.getTemperature());
