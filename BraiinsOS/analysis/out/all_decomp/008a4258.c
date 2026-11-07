// FUN_008a4258 @ 008a4258 size=548 calls_out=2 calls_in=0
// strings: Error | context | sourceboard-controlUnsupported serial speed/dev/uart_transBUG: UartTrans lock failedFailed to configure magic baudrateFailed to configure baudrateFailed to read terminal attributesFailed to write terminal attributes | sourceboard-controlUnsupported serial speed/dev/uart_transBUG: UartTrans lock failedFailed to configure magic baudrateFailed to configure baudrateFailed to read terminal attributesFailed to write terminal attributes

undefined4 FUN_008a4258(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 *local_34;
  char local_30;
  char local_2f;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 local_19;
  
  local_30 = (**(code **)(param_2[1] + 0xc))(*param_2,"Error",5);
  local_2f = '\0';
  local_34 = param_2;
  local_2c = param_1;
  FUN_00fb2258(&local_34,"context",7,&local_2c,FUN_008a3f60);
  puVar1 = local_34;
  if (local_30 != '\0') {
    return 1;
  }
  if ((*(byte *)((int)local_34 + 10) & 0x80) == 0) {
    puVar3 = &DAT_0041950f;
    if (local_2f == '\0') {
      puVar3 = &DAT_00414a79;
    }
    uVar5 = 3;
    if (local_2f != '\0') {
      uVar5 = 2;
    }
    iVar2 = (**(code **)(local_34[1] + 0xc))(*local_34,puVar3,uVar5);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(puVar1[1] + 0xc))
                      (*puVar1,
                       "sourceboard-controlUnsupported serial speed/dev/uart_transBUG: UartTrans lock failedFailed to configure magic baudrateFailed to configure baudrateFailed to read terminal attributesFailed to write terminal attributes"
                       ,6);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_00414a7c,2);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_0056a840,8);
  }
  else {
    if ((local_2f == '\0') &&
       (iVar2 = (**(code **)(local_34[1] + 0xc))(*local_34,&DAT_00414a7e,3), iVar2 != 0)) {
      return 1;
    }
    local_20 = &local_19;
    local_28 = *puVar1;
    local_24 = puVar1[1];
    local_19 = 1;
    iVar2 = FUN_00fb1f64(&local_28,
                         "sourceboard-controlUnsupported serial speed/dev/uart_transBUG: UartTrans lock failedFailed to configure magic baudrateFailed to configure baudrateFailed to read terminal attributesFailed to write terminal attributes"
                         ,6);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_28,&DAT_00414a7c,2);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_28,&DAT_0056a840,8);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_28,&DAT_00414a81,2);
  }
  if (iVar2 != 0) {
    return 1;
  }
  if ((*(byte *)((int)puVar1 + 10) & 0x80) == 0) {
    uVar5 = *puVar1;
    uVar6 = 2;
    pcVar7 = *(code **)(puVar1[1] + 0xc);
    pcVar4 = " }";
  }
  else {
    uVar5 = *puVar1;
    uVar6 = 1;
    pcVar7 = *(code **)(puVar1[1] + 0xc);
    pcVar4 = "}";
  }
  uVar5 = (*pcVar7)(uVar5,pcVar4,uVar6);
  return uVar5;
}

