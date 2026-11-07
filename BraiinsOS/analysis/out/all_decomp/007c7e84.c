// FUN_007c7e84 @ 007c7e84 size=1120 calls_out=7 calls_in=0
// strings: 

void FUN_007c7e84(undefined4 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 local_174;
  undefined4 local_14c;
  undefined4 *local_148;
  undefined4 local_144;
  int *local_140;
  undefined4 local_13c;
  int **local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  int local_120;
  int local_11c;
  int local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_e4;
  int *local_dc;
  undefined4 local_d8;
  undefined2 local_d4;
  int **local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_38;
  undefined4 **local_34;
  
  local_148 = (undefined4 *)thunk_FUN_016d4a50(0x90);
  if (local_148 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x90);
  }
  *(undefined2 *)(local_148 + 0x19) = 0x4b00;
  *(undefined2 *)(local_148 + 0x22) = 0x4c00;
  local_148[0x16] = 0x3ee353f8;
  *(undefined2 *)(local_148 + 0x10) = 0x4a00;
  local_148[0x20] = 0x40e00000;
  local_148[0x17] = 0x40e00000;
  local_148[0xe] = 0x40e00000;
  *(undefined2 *)(local_148 + 7) = 0x4800;
  local_148[0x15] = 0x3f61cac1;
  local_148[0xd] = 0x3ee4dd2f;
  iVar5 = 1;
  local_148[0x1e] = 0x3f4e978d;
  local_148[0x1f] = 0x3e2f1aa0;
  local_148[4] = 0x3e6c8b44;
  local_148[0x1b] = 3;
  local_148[0x12] = 3;
  local_148[9] = 3;
  *local_148 = 3;
  *(undefined1 *)(local_148 + 0x21) = 1;
  local_148[0x1c] = 0;
  *(undefined1 *)(local_148 + 0x18) = 1;
  local_148[0x13] = 0;
  *(undefined1 *)(local_148 + 0xf) = 1;
  local_148[0xc] = 0x3f2c49ba;
  local_148[10] = 0;
  *(undefined1 *)(local_148 + 6) = 1;
  local_148[3] = 0x3f178d50;
  local_148[5] = 0;
  local_148[1] = 0;
  local_144 = 4;
  local_14c = 4;
  DataMemoryBarrier(0xb);
  if (DAT_018ce2a8 != 0) {
    local_d0 = &local_140;
    local_140 = (int *)&DAT_018ce248;
    FUN_015eedc4(&DAT_018ce2a8,1,&local_d0,&DAT_0185eaac,&DAT_018ac9b8);
  }
  iVar6 = DAT_018ce270;
  uVar3 = DAT_018ce26c;
  if ((DAT_018ce270 != 0) && (iVar5 = thunk_FUN_016d4a50(DAT_018ce270), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar6);
  }
  FUN_016dd1aa(iVar5,uVar3,iVar6);
  local_e4 = DAT_018ce2a4;
  local_10c = DAT_018ce27c;
  local_114 = DAT_018ce274;
  local_110 = DAT_018ce278;
  local_f4 = DAT_018ce294;
  local_f0 = DAT_018ce298;
  local_13c = DAT_018ce24c;
  local_128 = DAT_018ce260;
  local_ec = DAT_018ce29c;
  local_e8 = DAT_018ce2a0;
  piVar4 = DAT_018ce248;
  if (DAT_018ce250 == -0x80000000) {
    local_130 = param_1;
    local_138 = (int **)&DAT_80000000;
    local_cc = 0x7c7fd8;
  }
  else {
    FUN_00835bfc(&local_d0,DAT_018ce254,DAT_018ce258);
    local_174 = DAT_018ce25c;
    local_130 = local_c8;
    local_138 = local_d0;
  }
  local_108 = DAT_018ce280;
  uStack_104 = DAT_018ce284;
  uStack_100 = DAT_018ce288;
  uStack_fc = DAT_018ce28c;
  uStack_f8 = DAT_018ce290;
  local_12c = local_174;
  DataMemoryBarrier(0xb);
  local_140 = piVar4;
  local_134 = local_cc;
  local_120 = iVar6;
  local_11c = iVar5;
  local_118 = iVar6;
  if (DAT_018dab30 != 0) {
    local_d0 = &local_dc;
    local_dc = &DAT_018dab30;
    FUN_015eedc4(&DAT_018dab30,1,&local_d0,&DAT_0185eae8,&DAT_018ac9b8);
  }
  local_d8 = DAT_018dab38;
  local_d4 = DAT_018dab3c;
  do {
    iVar5 = *DAT_018dab34;
    bVar2 = (bool)hasExclusiveAccess(DAT_018dab34);
  } while (!bVar2);
  *DAT_018dab34 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x7c82e0);
    (*pcVar1)();
  }
  local_dc = DAT_018dab34;
  DataMemoryBarrier(0xb);
  if (DAT_018cd4c8 != 0) {
    local_34 = &local_38;
    local_38 = &DAT_018cd430;
    FUN_015eedc4(&DAT_018cd4c8,1,&local_34,&DAT_0185ead4,&DAT_018ac9b8);
  }
  local_58 = DAT_018cd4a8;
  local_70 = DAT_018cd490;
  uStack_68 = DAT_018cd498;
  uStack_60 = DAT_018cd4a0;
  local_48 = DAT_018cd4b8;
  local_44 = DAT_018cd4bc;
  local_40 = DAT_018cd4c0;
  local_54 = DAT_018cd4ac;
  local_50 = DAT_018cd4b0;
  local_90 = DAT_018cd470;
  uStack_8c = DAT_018cd474;
  uStack_88 = DAT_018cd478;
  uStack_84 = DAT_018cd47c;
  local_80 = DAT_018cd480;
  uStack_7c = DAT_018cd484;
  uStack_78 = DAT_018cd488;
  uStack_74 = DAT_018cd48c;
  local_c0 = DAT_018cd440;
  uStack_bc = DAT_018cd444;
  local_b8 = DAT_018cd448;
  local_cc = DAT_018cd434;
  local_c8 = DAT_018cd438;
  local_d0 = DAT_018cd430;
  local_a0 = DAT_018cd460;
  uStack_9c = DAT_018cd464;
  local_98 = DAT_018cd468;
  local_b0 = DAT_018cd450;
  local_ac = DAT_018cd454;
  local_a8 = DAT_018cd458;
  FUN_007c839c(param_1,2,&local_14c,&local_140,&local_dc,&local_d0);
  return;
}

