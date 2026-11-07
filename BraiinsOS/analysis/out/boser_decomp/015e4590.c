// FUN_015e4590 @ 015e4590 size=348 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_015e4590(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_006666fc(&local_c0,param_1[0xb],param_1[0xc]);
  local_70 = *param_1;
  local_6c = param_1[1];
  local_58 = param_1[6];
  local_68 = param_1[2];
  local_64 = param_1[3];
  local_60 = param_1[4];
  local_5c = param_1[5];
  local_b4 = param_1[0xd];
  local_b0 = CONCAT31(local_b0._1_3_,*(undefined1 *)(param_1 + 0xe));
  if (param_1[7] == -0x80000000) {
    local_30 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_30,param_1[8],param_1[9]);
  }
  local_48 = local_c0;
  uStack_44 = uStack_bc;
  uStack_40 = uStack_b8;
  uStack_3c = local_b4;
  uStack_38 = local_b0;
  uStack_54 = local_30;
  uStack_50 = uStack_2c;
  uStack_4c = uStack_28;
  FUN_006666fc(&local_30,param_1[0x11],param_1[0x12]);
  local_c0 = local_70;
  uStack_bc = local_6c;
  uStack_b8 = local_68;
  local_b4 = local_64;
  local_b0 = local_60;
  uStack_ac = local_5c;
  uStack_a8 = local_58;
  uStack_a4 = uStack_54;
  uStack_a0 = uStack_50;
  uStack_9c = uStack_4c;
  local_98 = local_48;
  uStack_94 = uStack_44;
  uStack_90 = uStack_40;
  uStack_8c = uStack_3c;
  uStack_88 = uStack_38;
  uStack_84 = uStack_34;
  uStack_80 = local_30;
  uStack_7c = uStack_2c;
  uStack_78 = uStack_28;
  iVar1 = thunk_FUN_01be5118(0x50);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x50);
  }
  FUN_01bed4e2(iVar1,&local_c0,0x50);
  return CONCAT44(&DAT_01cfd6d8,iVar1);
}

