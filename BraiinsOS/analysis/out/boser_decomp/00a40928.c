// FUN_00a40928 @ 00a40928 size=288 calls_out=4 calls_in=3
// strings: BOS_INDEX_URL must contain valid Unicodeevent open/boser/boser/src/system_upgrade/upgrade.rs:639open/boser/boser/src/system_upgrade/upgrade.rsevent open/boser/boser/src/system_upgrade/upgrade.rs:169event open/boser/boser/src/system_upgrade/upgrade.rs:185event open/boser/boser/src/system_upgrade/upgrade.rs:181

void FUN_00a40928(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int local_a0;
  int local_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  uint local_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar3 = param_2[1];
  if (*param_2 == 1) {
    if (iVar3 == -0x80000000) {
      *param_1 = 2;
      return;
    }
    iVar2 = FUN_00667978("BOS_INDEX_URL must contain valid Unicodeevent open/boser/boser/src/system_upgrade/upgrade.rs:639open/boser/boser/src/system_upgrade/upgrade.rsevent open/boser/boser/src/system_upgrade/upgrade.rs:169event open/boser/boser/src/system_upgrade/upgrade.rs:185event open/boser/boser/src/system_upgrade/upgrade.rs:181"
                         ,0x28);
    *param_1 = 3;
    param_1[1] = iVar2;
    if (iVar3 == -0x80000000) {
      return;
    }
    iVar2 = param_2[2];
  }
  else {
    iVar2 = param_2[2];
    local_a8 = 0;
    local_b0 = 0;
    local_a0 = 0;
    FUN_01ac814c(&local_70,&local_b0,iVar2,param_2[3]);
    if (local_70 == 2) {
      iVar1 = FUN_00b1c6e8(local_6c & 0xff);
      *param_1 = 3;
      param_1[1] = iVar1;
    }
    else {
      local_b0 = local_68;
      iStack_ac = iStack_64;
      local_a8 = iStack_60;
      iStack_a4 = iStack_5c;
      local_a0 = iStack_58;
      local_9c = local_54;
      iStack_98 = iStack_50;
      iStack_94 = iStack_4c;
      iStack_90 = iStack_48;
      iStack_8c = iStack_44;
      local_88 = local_40;
      iStack_84 = iStack_3c;
      iStack_80 = iStack_38;
      iStack_7c = iStack_34;
      iStack_78 = iStack_30;
      iStack_74 = iStack_2c;
      *param_1 = local_70;
      param_1[1] = local_6c;
      param_1[2] = local_68;
      param_1[3] = iStack_64;
      param_1[4] = iStack_60;
      param_1[5] = iStack_5c;
      param_1[6] = iStack_58;
      param_1[7] = local_54;
      param_1[8] = iStack_50;
      param_1[9] = iStack_4c;
      param_1[10] = iStack_48;
      param_1[0xb] = iStack_44;
      param_1[0xc] = local_40;
      param_1[0xd] = iStack_3c;
      param_1[0xe] = iStack_38;
      param_1[0xf] = iStack_34;
      param_1[0x10] = iStack_30;
      param_1[0x11] = iStack_2c;
    }
  }
  FUN_019bb7e0(iVar3,iVar2);
  return;
}

