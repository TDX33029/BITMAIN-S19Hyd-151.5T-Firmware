// FUN_00f5df14 @ 00f5df14 size=380 calls_out=1 calls_in=5
// strings: 

undefined4 FUN_00f5df14(byte *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  byte local_31;
  uint local_30;
  uint *local_2c;
  code *local_28;
  
  pcVar5 = *(code **)(param_4 + 0xc);
  iVar1 = (*pcVar5)(param_3,"b\"",2);
  uVar4 = 1;
  if (iVar1 == 0) {
    if (param_2 != 0) {
      do {
        local_31 = *param_1;
        uVar2 = (uint)local_31;
        switch(uVar2) {
        case 0:
          puVar3 = &DAT_00408a0c;
          break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 0xb:
        case 0xc:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
          goto switchD_00f5df78_caseD_1;
        case 9:
          puVar3 = &DAT_00408a0a;
          break;
        case 10:
          puVar3 = &DAT_00408a06;
          break;
        case 0xd:
          puVar3 = &DAT_00408a08;
          break;
        case 0x22:
switchD_00f5df78_caseD_22:
          local_28 = FUN_00faaf34;
          puVar3 = &DAT_0057c678;
          local_30 = uVar2;
          local_2c = &local_30;
          goto LAB_00f5e0e0;
        default:
          if (uVar2 == 0x5c) goto switchD_00f5df78_caseD_22;
          goto switchD_00f5df78_caseD_1;
        }
        iVar1 = (*pcVar5)(param_3,puVar3,2);
        if (iVar1 != 0) {
          return 1;
        }
LAB_00f5e0f0:
        param_2 = param_2 + -1;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
    }
    uVar4 = (*pcVar5)(param_3,&DAT_004144ec,1);
  }
  return uVar4;
switchD_00f5df78_caseD_1:
  if (uVar2 - 0x20 < 0x5f) {
    local_28 = FUN_00faaf34;
    puVar3 = &DAT_00590e71;
    local_30 = uVar2;
    local_2c = &local_30;
  }
  else {
    local_2c = (uint *)&local_31;
    local_28 = FUN_00facb58;
    puVar3 = &DAT_00408a0e;
  }
LAB_00f5e0e0:
  iVar1 = FUN_00fa948c(param_3,param_4,puVar3,&local_2c);
  if (iVar1 != 0) {
    return 1;
  }
  goto LAB_00f5e0f0;
}

