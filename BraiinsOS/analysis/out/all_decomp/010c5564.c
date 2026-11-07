// FUN_010c5564 @ 010c5564 size=796 calls_out=4 calls_in=0
// strings: ConnectError

undefined4 FUN_010c5564(ushort *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined1 *local_40;
  undefined *local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  
  puVar8 = (undefined1 *)*param_2;
  puVar9 = (undefined *)param_2[1];
  pcVar7 = *(code **)(puVar9 + 0xc);
  iVar2 = (*pcVar7)(puVar8,"ConnectError",0xc);
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
      iVar2 = (*pcVar7)(puVar8,"(\n",2);
      if (iVar2 == 0) {
        local_40 = (undefined1 *)CONCAT31(local_40._1_3_,1);
        local_30 = puVar8;
        local_2c = puVar9;
        local_28 = (undefined1 *)&local_40;
        iVar2 = FUN_00faa4e8(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x12),
                             &local_30,&DAT_01880dc4);
        if (iVar2 == 0) {
          uVar5 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
          goto LAB_010c56a0;
        }
      }
      goto LAB_010c5598;
    }
    iVar2 = (*pcVar7)(puVar8,"(",1);
    if (iVar2 != 0) goto LAB_010c5598;
    uVar5 = FUN_00faa4e8(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x12),puVar8,
                         puVar9);
LAB_010c56a0:
    uVar1 = *param_1;
    uVar3 = uVar5 | uVar1 != 2;
    if ((uVar1 != 2) && (uVar5 == 0)) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar2 = (*pcVar7)(puVar8,&DAT_0041950f,2);
        uVar3 = 1;
        if (iVar2 == 0) {
          if ((uVar1 & 1) == 0) {
            uVar3 = FUN_00fba14c(param_1 + 1,param_2);
          }
          else {
            uVar3 = FUN_00fb9eec(param_1 + 2,param_2);
          }
        }
      }
      else {
        local_38 = &local_31;
        local_28 = (undefined1 *)param_2[2];
        local_24 = param_2[3];
        local_2c = &DAT_01880dc4;
        local_31 = 1;
        if ((uVar1 & 1) == 0) {
          local_40 = puVar8;
          local_3c = puVar9;
          local_30 = (undefined1 *)&local_40;
          iVar2 = FUN_00fba14c(param_1 + 1,&local_30);
        }
        else {
          local_40 = puVar8;
          local_3c = puVar9;
          local_30 = (undefined1 *)&local_40;
          iVar2 = FUN_00fb9eec(param_1 + 2,&local_30);
        }
        if (iVar2 != 0) goto LAB_010c5598;
        uVar3 = FUN_00fb1f64(&local_40,&DAT_00414a81,2);
      }
    }
  }
  else {
LAB_010c5598:
    uVar3 = 1;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    if (uVar3 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar4 = (*pcVar7)(puVar8,&DAT_0041950f,2);
      if (iVar4 != 0) {
        return 1;
      }
      iVar2 = (**(code **)(*(int *)(param_1 + 0x16) + 0xc))(iVar2,param_2);
      if (iVar2 != 0) {
        return 1;
      }
      goto LAB_010c57c0;
    }
    local_38 = &local_31;
    local_31 = 1;
    local_2c = &DAT_01880dc4;
    local_28 = (undefined1 *)param_2[2];
    local_24 = param_2[3];
    local_40 = puVar8;
    local_3c = puVar9;
    local_30 = (undefined1 *)&local_40;
    iVar2 = (**(code **)(*(int *)(param_1 + 0x16) + 0xc))(iVar2,&local_30);
    if (iVar2 != 0) {
      return 1;
    }
    uVar3 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
  }
  if (uVar3 != 0) {
    return 1;
  }
LAB_010c57c0:
  uVar6 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
  return uVar6;
}

