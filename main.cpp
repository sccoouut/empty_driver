#include <ntddk.h>

DRIVER_UNLOAD DriverUnload;
void DriverUnload(PDRIVER_OBJECT) {
	DbgPrintEx(0, 0, "[Empty Driver] Unloaded\r\n");
}

extern "C" DRIVER_INITIALIZE DriverEntry;
extern "C" NTSTATUS DriverEntry(PDRIVER_OBJECT drv_obj, PUNICODE_STRING) {
	drv_obj->DriverUnload = DriverUnload;

	DbgPrintEx(0, 0, "[Empty Driver] Loaded\r\n");
	return STATUS_SUCCESS;
}
