// FUN_00c70788 @ 00c70788 size=568 calls_out=3 calls_in=0
// strings: Error | context | sourceboard-controlUnsupported serial speed/dev/uart_transBUG: UartTrans lock failedFailed to configure magic baudrateFailed to configure baudrateFailed to read terminal attributesFailed to write terminal attributes | sourceboard-controlUnsupported serial speed/dev/uart_transBUG: UartTrans lock failedFailed to configure magic baudrateFailed to configure baudrateFailed to read terminal attributesFailed to write terminal attributes

undefined4 FUN_00c70788(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 *local_4c;
  char local_48;
  char local_47;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined4 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_48 = (**(code **)(param_2[1] + 0xc))(*param_2,"Error",5);
  local_47 = '\0';
  local_4c = param_2;
  local_44 = param_1;
  FUN_00fb2258(&local_4c,"context",7,&local_44,FUN_00c09808);
  puVar1 = local_4c;
  if (local_48 != '\0') {
    return 1;
  }
  if ((*(byte *)((int)local_4c + 10) & 0x80) == 0) {
    puVar3 = &DAT_0041950f;
    if (local_47 == '\0') {
      puVar3 = &DAT_00414a79;
    }
    uVar5 = 3;
    if (local_47 != '\0') {
      uVar5 = 2;
    }
    iVar2 = (**(code **)(local_4c[1] + 0xc))(*local_4c,puVar3,uVar5);
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
    iVar2 = FUN_00603f68(*(undefined4 *)(param_1 + 8),puVar1);
  }
  else {
    if ((local_47 == '\0') &&
       (iVar2 = (**(code **)(local_4c[1] + 0xc))(*local_4c,&DAT_00414a7e,3), iVar2 != 0)) {
      return 1;
    }
    local_28 = puVar1[2];
    local_24 = puVar1[3];
    local_38 = &local_31;
    local_40 = *puVar1;
    local_3c = puVar1[1];
    local_30 = &local_40;
    local_2c = &DAT_01880dc4;
    local_31 = 1;
    iVar2 = FUN_00fb1f64(local_30,
                         "sourceboard-controlUnsupported serial speed/dev/uart_transBUG: UartTrans lock failedFailed to configure magic baudrateFailed to configure baudrateFailed to read terminal attributesFailed to write terminal attributes"
                         ,6);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_40,&DAT_00414a7c,2);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00603f68(*(undefined4 *)(param_1 + 8),&local_30);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
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

