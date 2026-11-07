// FUN_014c8084 @ 014c8084 size=1040 calls_out=3 calls_in=0
// strings: reqwest::Error | sourceboard-controlUnsupported serial speed/dev/uart_transBUG: UartTrans lock failedFailed to configure magic baudrateFailed to configure baudrateFailed to read terminal attributesFailed to write terminal attributes | sourceboard-controlUnsupported serial speed/dev/uart_transBUG: UartTrans lock failedFailed to configure magic baudrateFailed to configure baudrateFailed to read terminal attributesFailed to write terminal attributes

byte FUN_014c8084(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  char *pcVar6;
  undefined *puVar7;
  byte bVar8;
  undefined4 uVar9;
  code *pcVar10;
  int *piVar11;
  int iVar12;
  int *local_48;
  byte local_44;
  byte local_43;
  int local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  int *local_30;
  undefined *local_2c;
  int *local_28;
  int local_24;
  
  local_44 = (**(code **)(param_2[1] + 0xc))(*param_2,"reqwest::Error",0xe);
  piVar11 = (int *)*param_1;
  local_43 = 0;
  local_48 = param_2;
  FUN_00fb2258(&local_48,&DAT_005691b4,4,piVar11 + 0x12,&LAB_01446984);
  piVar1 = local_48;
  if (*piVar11 != 2) {
    bVar2 = 1;
    if (local_44 == 0) {
      iVar3 = piVar11[5];
      iVar12 = piVar11[6];
      if ((*(byte *)((int)local_48 + 10) & 0x80) == 0) {
        puVar7 = &DAT_0041950f;
        if (local_43 == 0) {
          puVar7 = &DAT_00414a79;
        }
        uVar9 = 3;
        if (local_43 != 0) {
          uVar9 = 2;
        }
        iVar4 = (**(code **)(local_48[1] + 0xc))(*local_48,puVar7,uVar9);
        bVar2 = 1;
        if (iVar4 == 0) {
          iVar4 = (**(code **)(piVar1[1] + 0xc))(*piVar1,"url",3);
          bVar2 = 1;
          if (iVar4 == 0) {
            iVar4 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_00414a7c,2);
            bVar2 = 1;
            if (iVar4 == 0) {
              bVar2 = FUN_00faa4e8(iVar3,iVar12,*piVar1,piVar1[1]);
            }
          }
        }
      }
      else {
        if (local_43 == 0) {
          iVar4 = (**(code **)(local_48[1] + 0xc))(*local_48,&DAT_00414a7e,3);
          bVar2 = 1;
          if (iVar4 != 0) goto LAB_014c8104;
        }
        local_28 = &local_40;
        local_30 = (int *)*piVar1;
        local_2c = (undefined *)piVar1[1];
        bVar2 = 1;
        local_40 = CONCAT31(local_40._1_3_,1);
        iVar4 = FUN_00fb1f64(&local_30,"url",3);
        if ((iVar4 == 0) && (iVar4 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar4 == 0)) {
          iVar3 = FUN_00faa4e8(iVar3,iVar12,&local_30,&DAT_01880dc4);
          if (iVar3 == 0) {
            bVar2 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
          }
          else {
            bVar2 = 1;
          }
        }
      }
    }
LAB_014c8104:
    local_43 = 1;
    local_44 = bVar2;
  }
  piVar1 = local_48;
  if (piVar11[0x17] == 0) {
    bVar8 = local_43 ^ 1;
    bVar2 = local_44;
LAB_014c8140:
    bVar5 = bVar8 ^ 1 | bVar2;
    if ((bVar8 & 1) == 0 && (bVar2 & 1) == 0) {
      if ((*(byte *)((int)local_48 + 10) & 0x80) == 0) {
        iVar3 = *local_48;
        uVar9 = 2;
        pcVar10 = *(code **)(local_48[1] + 0xc);
        pcVar6 = " }";
      }
      else {
        iVar3 = *local_48;
        uVar9 = 1;
        pcVar10 = *(code **)(local_48[1] + 0xc);
        pcVar6 = "}";
      }
      bVar2 = (*pcVar10)(iVar3,pcVar6,uVar9);
      return bVar2 & 1;
    }
  }
  else {
    if (local_44 == 0) {
      if ((*(byte *)((int)local_48 + 10) & 0x80) == 0) {
        puVar7 = &DAT_0041950f;
        if (local_43 == 0) {
          puVar7 = &DAT_00414a79;
        }
        uVar9 = 3;
        if (local_43 != 0) {
          uVar9 = 2;
        }
        iVar3 = (**(code **)(local_48[1] + 0xc))(*local_48,puVar7,uVar9);
        if (((iVar3 == 0) &&
            (iVar3 = (**(code **)(piVar1[1] + 0xc))
                               (*piVar1,
                                "sourceboard-controlUnsupported serial speed/dev/uart_transBUG: UartTrans lock failedFailed to configure magic baudrateFailed to configure baudrateFailed to read terminal attributesFailed to write terminal attributes"
                                ,6), iVar3 == 0)) &&
           (iVar3 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_00414a7c,2), iVar3 == 0)) {
          bVar2 = (**(code **)(piVar11[0x18] + 0xc))(piVar11[0x17],piVar1);
LAB_014c83a4:
          bVar8 = 0;
          goto LAB_014c8140;
        }
      }
      else if ((local_43 != 0) ||
              (iVar3 = (**(code **)(local_48[1] + 0xc))(*local_48,&DAT_00414a7e,3), iVar3 == 0)) {
        local_28 = (int *)piVar1[2];
        local_24 = piVar1[3];
        local_38 = &local_31;
        local_31 = 1;
        local_3c = piVar1[1];
        local_40 = *piVar1;
        local_30 = &local_40;
        local_2c = &DAT_01880dc4;
        iVar3 = FUN_00fb1f64(local_30,
                             "sourceboard-controlUnsupported serial speed/dev/uart_transBUG: UartTrans lock failedFailed to configure magic baudrateFailed to configure baudrateFailed to read terminal attributesFailed to write terminal attributes"
                             ,6);
        if ((iVar3 == 0) &&
           ((iVar3 = FUN_00fb1f64(&local_40,&DAT_00414a7c,2), iVar3 == 0 &&
            (iVar3 = (**(code **)(piVar11[0x18] + 0xc))(piVar11[0x17],&local_30), iVar3 == 0)))) {
          bVar2 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
          goto LAB_014c83a4;
        }
      }
    }
    bVar5 = 1;
  }
  return bVar5 & 1;
}

