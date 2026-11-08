// FUN_008a5df0 @ 008a5df0 size=928 calls_out=2 calls_in=0
// strings: Error | context | sourceboard-controlUnsupported serial speed/dev/uart_transBUG: UartTrans lock failedFailed to configure magic baudrateFailed to configure baudrateFailed to read terminal attributesFailed to write terminal attributes | Error | inner | sourceboard-controlUnsupported serial speed/dev/uart_transBUG: UartTrans lock failedFailed to configure magic baudrateFailed to configure baudrateFailed to read terminal attributesFailed to write terminal attributes

undefined4 FUN_008a5df0(int param_1,int *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined4 uVar8;
  code *pcVar9;
  int *local_58;
  char local_54;
  char local_53;
  int local_50;
  int local_4c;
  int local_48;
  undefined1 *local_44;
  undefined1 local_3d;
  int *local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int **local_28;
  byte local_24;
  char local_23;
  
  local_54 = (**(code **)(param_2[1] + 0xc))(*param_2,"Error",5);
  local_53 = '\0';
  local_58 = param_2;
  local_50 = param_1;
  FUN_00fb2258(&local_58,"context",7,&local_50,FUN_008a3f60);
  piVar1 = local_58;
  if (local_54 != '\0') {
    return 1;
  }
  if ((*(byte *)((int)local_58 + 10) & 0x80) == 0) {
    puVar6 = &DAT_0041950f;
    if (local_53 == '\0') {
      puVar6 = &DAT_00414a79;
    }
    uVar8 = 3;
    if (local_53 != '\0') {
      uVar8 = 2;
    }
    iVar3 = (**(code **)(local_58[1] + 0xc))(*local_58,puVar6,uVar8);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = (**(code **)(piVar1[1] + 0xc))
                      (*piVar1,
                       "sourceboard-controlUnsupported serial speed/dev/uart_transBUG: UartTrans lock failedFailed to configure magic baudrateFailed to configure baudrateFailed to read terminal attributesFailed to write terminal attributes"
                       ,6);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_00414a7c,2);
    if (iVar3 != 0) {
      return 1;
    }
    local_4c = param_1 + 8;
    uVar2 = (**(code **)(piVar1[1] + 0xc))(*piVar1,"Error",5);
    local_38 = (undefined *)((uint)local_38._2_2_ << 0x10);
    local_38 = (undefined *)CONCAT31(local_38._1_3_,uVar2);
    local_3c = piVar1;
    FUN_00fb2258(&local_3c,"inner",5,&local_4c,FUN_008abe50);
    uVar4 = (uint)local_38 & 0xff;
    if (local_38._1_1_ == '\x01' && uVar4 == 0) {
      if ((*(byte *)((int)local_3c + 10) & 0x80) == 0) {
        iVar3 = (**(code **)(local_3c[1] + 0xc))(*local_3c," }",2);
        if (iVar3 != 0) {
          return 1;
        }
        goto LAB_008a611c;
      }
      uVar4 = (**(code **)(local_3c[1] + 0xc))(*local_3c,"}",1);
    }
    else if (local_38._1_1_ != '\0') {
      return 1;
    }
  }
  else {
    if ((local_53 == '\0') &&
       (iVar3 = (**(code **)(local_58[1] + 0xc))(*local_58,&DAT_00414a7e,3), iVar3 != 0)) {
      return 1;
    }
    local_34 = piVar1[2];
    local_30 = piVar1[3];
    local_44 = &local_3d;
    local_4c = *piVar1;
    local_48 = piVar1[1];
    local_3c = &local_4c;
    local_38 = &DAT_01880dc4;
    local_3d = 1;
    iVar3 = FUN_00fb1f64(local_3c,
                         "sourceboard-controlUnsupported serial speed/dev/uart_transBUG: UartTrans lock failedFailed to configure magic baudrateFailed to configure baudrateFailed to read terminal attributesFailed to write terminal attributes"
                         ,6);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_00fb1f64(&local_4c,&DAT_00414a7c,2);
    if (iVar3 != 0) {
      return 1;
    }
    local_2c = param_1 + 8;
    local_24 = FUN_00fb1f64(&local_4c,"Error",5);
    local_28 = &local_3c;
    local_23 = '\0';
    FUN_00fb2258(&local_28,"inner",5,&local_2c,FUN_008abe50);
    uVar4 = (uint)local_24;
    if (local_23 == '\x01' && uVar4 == 0) {
      if ((*(byte *)((int)local_28 + 10) & 0x80) == 0) {
        piVar5 = *local_28;
        uVar8 = 2;
        pcVar9 = (code *)local_28[1][3];
        pcVar7 = " }";
      }
      else {
        piVar5 = *local_28;
        uVar8 = 1;
        pcVar9 = (code *)local_28[1][3];
        pcVar7 = "}";
      }
      uVar4 = (*pcVar9)(piVar5,pcVar7,uVar8);
    }
    else if (local_23 != '\0') {
      return 1;
    }
    if (uVar4 != 0) {
      return 1;
    }
    uVar4 = (**(code **)(local_38 + 0xc))(local_3c,&DAT_00414a81,2);
  }
  if (uVar4 != 0) {
    return 1;
  }
LAB_008a611c:
  if ((*(byte *)((int)piVar1 + 10) & 0x80) == 0) {
    iVar3 = *piVar1;
    uVar8 = 2;
    pcVar9 = *(code **)(piVar1[1] + 0xc);
    pcVar7 = " }";
  }
  else {
    iVar3 = *piVar1;
    uVar8 = 1;
    pcVar9 = *(code **)(piVar1[1] + 0xc);
    pcVar7 = "}";
  }
  uVar8 = (*pcVar9)(iVar3,pcVar7,uVar8);
  return uVar8;
}

