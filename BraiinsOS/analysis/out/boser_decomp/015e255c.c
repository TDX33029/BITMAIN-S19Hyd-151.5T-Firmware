// FUN_015e255c @ 015e255c size=376 calls_out=4 calls_in=1
// strings: 

undefined8 FUN_015e255c(undefined4 *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
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
  
  FUN_006666fc(&local_c8,param_1[0xb],param_1[0xc]);
  local_6c = param_1[1];
  local_5c = param_1[5];
  local_58 = param_1[6];
  local_70 = *param_1;
  local_68 = param_1[2];
  uStack_64 = param_1[3];
  local_60 = param_1[4];
  local_bc = param_1[0xd];
  local_b8 = CONCAT31(local_b8._1_3_,*(undefined1 *)(param_1 + 0xe));
  if (param_1[7] == -0x80000000) {
    local_30 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_30,param_1[8],param_1[9]);
  }
  local_48 = local_c8;
  uStack_44 = uStack_c4;
  uStack_40 = uStack_c0;
  uStack_3c = local_bc;
  uStack_38 = local_b8;
  uStack_54 = local_30;
  uStack_50 = uStack_2c;
  uStack_4c = uStack_28;
  uVar1 = *(undefined2 *)((int)param_1 + 0x4e);
  uVar2 = *(undefined2 *)(param_1 + 0x13);
  FUN_006666fc(&local_30,param_1[0x11],param_1[0x12]);
  local_78 = *(undefined2 *)(param_1 + 0x14);
  local_c8 = local_70;
  uStack_c4 = local_6c;
  uStack_c0 = local_68;
  local_bc = uStack_64;
  local_b8 = local_60;
  uStack_b4 = local_5c;
  uStack_b0 = local_58;
  uStack_ac = uStack_54;
  uStack_a8 = uStack_50;
  uStack_a4 = uStack_4c;
  local_a0 = local_48;
  uStack_9c = uStack_44;
  uStack_98 = uStack_40;
  uStack_94 = uStack_3c;
  uStack_90 = uStack_38;
  uStack_8c = uStack_34;
  uStack_88 = local_30;
  uStack_84 = uStack_2c;
  uStack_80 = uStack_28;
  local_7c = uVar2;
  local_7a = uVar1;
  iVar3 = thunk_FUN_01be5118(0x58);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x58);
  }
  FUN_01bed4e2(iVar3,&local_c8,0x58);
  return CONCAT44(&DAT_01cfd4d8,iVar3);
}

