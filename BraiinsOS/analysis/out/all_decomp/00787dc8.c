// FUN_00787dc8 @ 00787dc8 size=772 calls_out=4 calls_in=1
// strings: SnowError | InnerCodecErrorcoin_base_1coin_base_2merkle_branchclean_jobs

undefined4 FUN_00787dc8(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 **ppuVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined *puVar8;
  undefined1 *local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  
  ppuVar3 = &local_40;
  uVar1 = 2;
  if ((int)*param_1 < 0) {
    uVar1 = *param_1 ^ 0x80000000;
  }
  if (uVar1 == 0) {
    puVar6 = (undefined1 *)*param_2;
    iVar7 = param_2[1];
    pcVar5 = *(code **)(iVar7 + 0xc);
    iVar2 = (*pcVar5)(puVar6,"Io",2);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar5)(puVar6,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_015ed828(param_1 + 1,param_2);
      if (iVar2 != 0) {
        return 1;
      }
      puVar6 = (undefined1 *)*param_2;
      pcVar5 = *(code **)(param_2[1] + 0xc);
      goto LAB_007880a8;
    }
    iVar2 = (*pcVar5)(puVar6,"(\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_2c = &DAT_01880dc4;
    local_28 = (undefined1 *)param_2[2];
    local_24 = param_2[3];
    local_31 = 1;
    local_40 = puVar6;
    local_3c = iVar7;
    local_30 = (undefined1 *)&local_40;
    iVar2 = FUN_015ed828(param_1 + 1,&local_30);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
  }
  else if (uVar1 == 1) {
    puVar6 = (undefined1 *)*param_2;
    iVar7 = param_2[1];
    pcVar5 = *(code **)(iVar7 + 0xc);
    iVar2 = (*pcVar5)(puVar6,"SnowError",9);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
      iVar2 = (*pcVar5)(puVar6,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_38 = &local_31;
      local_2c = &DAT_01880dc4;
      local_28 = (undefined1 *)param_2[2];
      local_24 = param_2[3];
      local_31 = 1;
      local_40 = puVar6;
      local_3c = iVar7;
      local_30 = (undefined1 *)&local_40;
      iVar2 = FUN_00732498(param_1 + 1,&local_30);
      if (iVar2 != 0) {
        return 1;
      }
      goto LAB_00788098;
    }
    iVar2 = (*pcVar5)(puVar6,"(",1);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00732498(param_1 + 1,param_2);
  }
  else {
    puVar6 = (undefined1 *)*param_2;
    puVar8 = (undefined *)param_2[1];
    pcVar5 = *(code **)(puVar8 + 0xc);
    iVar2 = (*pcVar5)(puVar6,"InnerCodecErrorcoin_base_1coin_base_2merkle_branchclean_jobs",0xf);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar5)(puVar6,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_00faa4e8(param_1[1],param_1[2],puVar6,puVar8);
    }
    else {
      iVar2 = (*pcVar5)(puVar6,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_40 = (undefined1 *)CONCAT31(local_40._1_3_,1);
      local_30 = puVar6;
      local_2c = puVar8;
      local_28 = (undefined1 *)&local_40;
      iVar2 = FUN_00faa4e8(param_1[1],param_1[2],&local_30,&DAT_01880dc4);
      if (iVar2 != 0) {
        return 1;
      }
      ppuVar3 = &local_30;
LAB_00788098:
      iVar2 = FUN_00fb1f64(ppuVar3,&DAT_00414a81,2);
    }
  }
  if (iVar2 != 0) {
    return 1;
  }
LAB_007880a8:
  uVar4 = (*pcVar5)(puVar6,&DAT_00418e07,1);
  return uVar4;
}

