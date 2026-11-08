// FUN_00f05324 @ 00f05324 size=248 calls_out=1 calls_in=0
// strings: Error | context | sourceboard-controlUnsupported serial speed/dev/uart_transBUG: UartTrans lock failedFailed to configure magic baudrateFailed to configure baudrateFailed to read terminal attributesFailed to write terminal attributes

byte FUN_00f05324(int param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *local_1c;
  byte local_18;
  byte local_17;
  int local_14;
  
  local_18 = (**(code **)(param_2[1] + 0xc))(*param_2,"Error",5);
  local_17 = 0;
  local_1c = param_2;
  local_14 = param_1;
  uVar2 = FUN_00fb2258(&local_1c,"context",7,&local_14,FUN_00f21124);
  FUN_00fb2258(uVar2,
               "sourceboard-controlUnsupported serial speed/dev/uart_transBUG: UartTrans lock failedFailed to configure magic baudrateFailed to configure baudrateFailed to read terminal attributesFailed to write terminal attributes"
               ,6,param_1 + 8,FUN_00730148);
  if (local_17 != 1 || (local_18 & 1) != 0) {
    return (local_17 | local_18) & 1;
  }
  if ((*(byte *)((int)local_1c + 10) & 0x80) == 0) {
    bVar1 = (**(code **)(local_1c[1] + 0xc))(*local_1c," }",2);
    return bVar1 & 1;
  }
  bVar1 = (**(code **)(local_1c[1] + 0xc))(*local_1c,"}",1);
  return bVar1 & 1;
}

