// FUN_015e4f48 @ 015e4f48 size=384 calls_out=4 calls_in=1
// strings: 

undefined8 FUN_015e4f48(int param_1)

{
  int iVar1;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  FUN_006666fc(&local_e0,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
  local_74 = *(undefined4 *)(param_1 + 0x14);
  local_68 = *(undefined4 *)(param_1 + 0x20);
  local_64 = *(undefined4 *)(param_1 + 0x24);
  local_60 = *(undefined4 *)(param_1 + 0x28);
  local_78 = *(undefined4 *)(param_1 + 0x10);
  local_70 = *(undefined4 *)(param_1 + 0x18);
  uStack_6c = *(undefined4 *)(param_1 + 0x1c);
  local_d4 = *(undefined4 *)(param_1 + 0x44);
  local_d0 = CONCAT31(local_d0._1_3_,*(undefined1 *)(param_1 + 0x48));
  if (*(int *)(param_1 + 0x2c) == -0x80000000) {
    local_38 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_38,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
  }
  local_50 = local_e0;
  uStack_4c = uStack_dc;
  uStack_48 = uStack_d8;
  uStack_44 = local_d4;
  uStack_40 = local_d0;
  uStack_5c = local_38;
  uStack_58 = uStack_34;
  uStack_54 = uStack_30;
  FUN_006666fc(&local_38,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  local_d4 = *(undefined4 *)(param_1 + 0xc);
  local_d0 = local_78;
  uStack_cc = local_74;
  uStack_c8 = local_70;
  uStack_c4 = uStack_6c;
  uStack_c0 = local_68;
  uStack_bc = local_64;
  uStack_b8 = local_60;
  uStack_b4 = uStack_5c;
  uStack_b0 = uStack_58;
  uStack_ac = uStack_54;
  local_a8 = local_50;
  uStack_a4 = uStack_4c;
  uStack_a0 = uStack_48;
  uStack_9c = uStack_44;
  uStack_98 = uStack_40;
  uStack_94 = uStack_3c;
  local_90 = *(undefined4 *)(param_1 + 0x50);
  uStack_8c = *(undefined4 *)(param_1 + 0x54);
  uStack_88 = *(undefined4 *)(param_1 + 0x58);
  uStack_84 = *(undefined4 *)(param_1 + 0x5c);
  local_80 = *(undefined1 *)(param_1 + 0x60);
  local_e0 = local_38;
  uStack_dc = uStack_34;
  uStack_d8 = uStack_30;
  local_2c = local_d4;
  iVar1 = thunk_FUN_01be5118(0x68);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x68);
  }
  FUN_01bed4e2(iVar1,&local_e0,0x68);
  return CONCAT44(&DAT_01cfd658,iVar1);
}

