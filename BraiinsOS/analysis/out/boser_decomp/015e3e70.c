// FUN_015e3e70 @ 015e3e70 size=388 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_015e3e70(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
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
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_006666fc(&local_d8,param_1[0xb],param_1[0xc]);
  local_7c = param_1[1];
  local_70 = param_1[4];
  local_68 = param_1[6];
  local_80 = *param_1;
  local_78 = param_1[2];
  uStack_74 = param_1[3];
  local_6c = param_1[5];
  local_cc = param_1[0xd];
  local_c8 = CONCAT31(local_c8._1_3_,*(undefined1 *)(param_1 + 0xe));
  if (param_1[7] == -0x80000000) {
    local_30 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_30,param_1[8],param_1[9]);
  }
  local_58 = local_d8;
  uStack_54 = uStack_d4;
  uStack_50 = uStack_d0;
  uStack_4c = local_cc;
  uStack_48 = local_c8;
  uStack_64 = local_30;
  uStack_60 = uStack_2c;
  uStack_5c = uStack_28;
  FUN_006666fc(&local_40,param_1[0x11],param_1[0x12]);
  FUN_006666fc(&local_30,param_1[0x14],param_1[0x15]);
  local_d8 = local_80;
  uStack_d4 = local_7c;
  uStack_d0 = local_78;
  local_cc = uStack_74;
  local_c8 = local_70;
  uStack_c4 = local_6c;
  uStack_c0 = local_68;
  uStack_bc = uStack_64;
  uStack_b8 = uStack_60;
  uStack_b4 = uStack_5c;
  local_b0 = local_58;
  uStack_ac = uStack_54;
  uStack_a8 = uStack_50;
  uStack_a4 = uStack_4c;
  uStack_a0 = uStack_48;
  uStack_9c = uStack_44;
  local_98 = local_40;
  uStack_94 = uStack_3c;
  uStack_90 = uStack_38;
  uStack_8c = local_30;
  uStack_88 = uStack_2c;
  uStack_84 = uStack_28;
  iVar1 = thunk_FUN_01be5118(0x58);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x58);
  }
  FUN_01bed4e2(iVar1,&local_d8,0x58);
  return CONCAT44(&DAT_01cfd758,iVar1);
}

