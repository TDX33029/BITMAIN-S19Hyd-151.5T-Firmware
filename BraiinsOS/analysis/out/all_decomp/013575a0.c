// FUN_013575a0 @ 013575a0 size=1576 calls_out=10 calls_in=5
// strings: 

void FUN_013575a0(undefined4 *param_1,undefined4 **param_2,int param_3)

{
  undefined4 ***pppuVar1;
  undefined4 **ppuVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 ***pppuVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 ***local_170;
  undefined4 **local_16c;
  undefined4 ***local_168;
  undefined4 ***pppuStack_164;
  undefined4 **ppuStack_160;
  int local_15c;
  undefined4 ***pppuStack_158;
  undefined4 **ppuStack_154;
  int iStack_150;
  undefined4 ***pppuStack_14c;
  undefined2 local_144;
  undefined1 local_142;
  undefined4 **local_140;
  undefined4 uStack_13c;
  undefined3 uStack_138;
  undefined2 local_134;
  char local_132;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined2 local_110;
  undefined1 local_10e;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined4 local_e0;
  int local_dc;
  undefined4 ***local_d8;
  undefined4 **local_d4;
  int local_d0;
  undefined4 ***local_cc;
  undefined4 **ppuStack_c8;
  int iStack_c4;
  undefined4 ***local_c0;
  undefined4 ***local_b8;
  undefined4 **local_b4;
  undefined1 local_b0;
  undefined2 uStack_af;
  char cStack_ad;
  undefined4 ***local_ac;
  undefined4 **ppuStack_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 **ppuStack_9c;
  int iStack_98;
  undefined4 ***pppuStack_94;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 ***local_78;
  undefined4 **ppuStack_74;
  int local_70;
  undefined4 ***local_6c;
  undefined4 **ppuStack_68;
  int iStack_64;
  undefined4 ***pppuStack_60;
  undefined4 **local_5c;
  int iStack_58;
  undefined4 ***pppuStack_54;
  undefined4 uStack_50;
  undefined3 uStack_4c;
  
  FUN_0100c078(&local_b8,param_2,param_3,1,0);
  if ((char)local_a0 == '\x05') {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,param_3);
    }
    if (param_3 == 0) {
      iVar8 = 0;
      iVar5 = 1;
    }
    else {
      iVar5 = thunk_FUN_016d4a50(param_3);
      iVar8 = param_3;
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,param_3);
      }
    }
    FUN_016dd1aa(iVar5,param_2,param_3);
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined1 *)(param_1 + 5) = local_b4._0_1_;
    *param_1 = 0x80000000;
    param_1[1] = iVar8;
    param_1[2] = iVar5;
    param_1[3] = param_3;
    param_1[4] = local_b8;
    return;
  }
  local_80 = (undefined4 **)CONCAT22(CONCAT11(local_80._3_1_,cStack_ad),uStack_af);
  local_108 = CONCAT22(CONCAT11(local_108._3_1_,local_a0._3_1_),local_a0._1_2_);
  iStack_c4 = iStack_a4;
  local_cc = local_ac;
  local_d8 = local_b8;
  ppuStack_c8 = ppuStack_a8;
  local_c0 = local_a0;
  local_d0 = CONCAT31(CONCAT12(cStack_ad,uStack_af),local_b0);
  local_d4 = local_b4;
  local_170 = (undefined4 ***)param_2;
  local_16c = (undefined4 **)param_3;
  local_168 = &local_d8;
  local_e0 = param_2;
  local_dc = param_3;
  FUN_01009fa4(&local_b8,&local_170,&DAT_0100d474);
  cVar3 = cStack_ad;
  ppuVar2 = local_b4;
  pppuVar6 = local_b8;
  if (local_b8 == (undefined4 ***)&DAT_80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_b8,&DAT_01892124,&DAT_01892114);
  }
  local_78 = local_ac;
  ppuStack_74 = ppuStack_a8;
  local_70 = iStack_a4;
  local_6c = local_a0;
  ppuStack_68 = ppuStack_9c;
  iStack_64 = iStack_98;
  pppuStack_60 = pppuStack_94;
  iVar8 = CONCAT13(cStack_ad,CONCAT21(uStack_af,local_b0));
  local_80 = local_b4;
  local_170 = local_b8;
  local_16c = local_b4;
  pppuStack_164 = local_ac;
  ppuStack_160 = ppuStack_a8;
  local_15c = iStack_a4;
  pppuStack_158 = local_a0;
  ppuStack_154 = ppuStack_9c;
  iStack_150 = iStack_98;
  pppuStack_14c = pppuStack_94;
  if (iStack_a4 == 0) {
    DataMemoryBarrier(0xb);
    local_168 = (undefined4 ***)iVar8;
    if (DAT_018d8970 != 0) {
      local_80 = (undefined4 **)&DAT_018d8948;
      local_b8 = (undefined4 ***)&local_80;
      FUN_015eedc4(&DAT_018d8970,1,&local_b8,&DAT_01892190,&DAT_018ac9b8);
    }
    local_e0 = DAT_018d894c;
    local_dc = DAT_018d8950;
    local_d8 = DAT_018d8954;
    local_d4 = DAT_018d8958;
    local_d0 = DAT_018d895c;
    local_cc = DAT_018d8960;
    ppuStack_c8 = DAT_018d8964;
    iStack_c4 = DAT_018d8968;
    local_c0 = DAT_018d896c;
    local_78 = &pppuStack_164;
    local_7c = (int)local_168;
    local_80 = local_16c;
    local_5c = local_e0;
    iStack_58 = local_dc;
    pppuStack_54 = &local_d8;
    FUN_01008c48(&local_b8,&local_5c,&local_80);
    pppuVar6 = local_b8;
    uVar9 = (uint)local_b4 & 0xff;
    if (local_b8 == (undefined4 ***)&DAT_80000000) {
      DataMemoryBarrier(0xb);
      if (DAT_018d8970 != 0) {
        local_80 = (undefined4 **)&DAT_018d8948;
        local_b8 = (undefined4 ***)&local_80;
        FUN_015eedc4(&DAT_018d8970,1,&local_b8,&DAT_01892190,&DAT_018ac9b8);
      }
      local_80 = DAT_018d894c;
      local_7c = DAT_018d8950;
      local_78 = DAT_018d8954;
      ppuStack_74 = DAT_018d8958;
      local_70 = DAT_018d895c;
      local_6c = DAT_018d8960;
      ppuStack_68 = DAT_018d8964;
      iStack_64 = DAT_018d8968;
      pppuStack_60 = DAT_018d896c;
      FUN_0135bb1c(&local_b8,param_2,param_3,&local_80,uVar9);
      pppuVar6 = local_b8;
      FUN_016dd1aa(&local_108,&uStack_af,0x23);
      param_1[0xb] = local_8c;
      param_1[0xc] = uStack_88;
      param_1[0xd] = uStack_84;
      local_130 = local_108;
      uStack_12c = uStack_104;
      uStack_128 = uStack_100;
      uStack_124 = uStack_fc;
      local_120 = local_f8;
      uStack_11c = uStack_f4;
      uStack_118 = uStack_f0;
      uStack_114 = uStack_ec;
      local_110 = local_e8;
      local_10e = local_e6;
      *(undefined1 *)(param_1 + 2) = local_b0;
      param_1[1] = local_b4;
      FUN_016dd1aa((int)param_1 + 9,&local_130,0x23);
      *param_1 = pppuVar6;
      pppuVar6 = local_170;
    }
    else {
      uStack_50 = CONCAT13(local_b0,local_b4._1_3_);
      uStack_4c = (undefined3)(CONCAT13(cStack_ad,CONCAT21(uStack_af,local_b0)) >> 8);
      FUN_016dd1aa((uint)&uStack_50 | 7,&local_ac,0x1c);
      *(undefined1 *)(param_1 + 2) = local_b4._0_1_;
      param_1[1] = pppuVar6;
      FUN_016dd1aa((int)param_1 + 9,&uStack_50,0x23);
      *param_1 = 0x8000000a;
      pppuVar6 = local_170;
    }
    goto LAB_01357b1c;
  }
  local_7c = iVar8;
  FUN_0100c078(&local_b8,local_b4,iVar8,1,1);
  pppuVar1 = local_b8;
  if ((char)local_a0 == '\x05') {
    if (cVar3 < '\0') {
LAB_013579a4:
      uVar7 = 0;
LAB_013579a8:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar7,iVar8);
    }
    if (iVar8 == 0) {
      iVar4 = 1;
      iVar5 = 0;
    }
    else {
      iVar4 = thunk_FUN_016d4a50(iVar8);
      if (iVar4 == 0) {
LAB_01357b6c:
        uVar7 = 1;
        goto LAB_013579a8;
      }
      iVar5 = iVar8;
    }
    FUN_016dd1aa(iVar4,ppuVar2,iVar8);
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 5) = local_b4._0_1_;
    *param_1 = 0x80000000;
    param_1[1] = iVar5;
    param_1[2] = iVar4;
    param_1[3] = iVar8;
    param_1[4] = pppuVar1;
  }
  else {
    local_140 = (undefined4 **)CONCAT13(ppuStack_a8._0_1_,local_ac._1_3_);
    local_e0._0_3_ = CONCAT12(cStack_ad,uStack_af);
    local_7c._0_3_ = (undefined3)((uint)ppuStack_a8 >> 8);
    local_7c._3_1_ = (undefined1)iStack_a4;
    local_78._0_3_ = (undefined3)((uint)iStack_a4 >> 8);
    local_108._0_3_ = (undefined3)((uint)local_a0 >> 8);
    local_132 = cStack_ad;
    local_134 = uStack_af;
    uStack_138 = local_78._0_3_;
    uStack_13c = local_7c;
    local_142 = local_a0._3_1_;
    local_144 = local_a0._1_2_;
    local_80 = local_140;
    if (cVar3 < '\0') goto LAB_013579a4;
    if (iVar8 == 0) {
      iVar5 = 0;
      iVar4 = 1;
    }
    else {
      iVar4 = thunk_FUN_016d4a50(iVar8);
      if (iVar4 == 0) goto LAB_01357b6c;
      iVar5 = iVar8;
    }
    FUN_016dd1aa(iVar4,ppuVar2,iVar8);
    *(undefined1 *)((int)param_1 + 0x2b) = local_142;
    *param_1 = 0x8000000a;
    param_1[1] = iVar5;
    param_1[2] = iVar4;
    param_1[3] = iVar8;
    *(undefined1 *)(param_1 + 6) = local_b0;
    param_1[4] = pppuVar1;
    *(int *)((int)param_1 + 0x21) = uStack_13c;
    *(char *)(param_1 + 10) = (char)local_a0;
    *(undefined1 *)(param_1 + 7) = local_ac._0_1_;
    *(undefined2 *)((int)param_1 + 0x19) = local_134;
    *(char *)((int)param_1 + 0x1b) = local_132;
    *(undefined4 ***)((int)param_1 + 0x1d) = local_140;
    param_1[9] = CONCAT31(uStack_138,uStack_13c._3_1_);
    *(undefined2 *)((int)param_1 + 0x29) = local_144;
    param_1[5] = local_b4;
  }
LAB_01357b1c:
  if (pppuVar6 != (undefined4 ***)0x0) {
    thunk_FUN_016d3fb4(local_16c);
  }
  return;
}

