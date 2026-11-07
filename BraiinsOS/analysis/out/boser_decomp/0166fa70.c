// FUN_0166fa70 @ 0166fa70 size=1616 calls_out=11 calls_in=5
// strings: 

void FUN_0166fa70(int *param_1,undefined4 ****param_2,uint param_3)

{
  undefined1 uVar1;
  undefined4 ****ppppuVar2;
  undefined4 ****ppppuVar3;
  undefined4 ***pppuVar4;
  char cVar5;
  undefined4 ****ppppuVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 ***pppuStack_164;
  uint uStack_160;
  int local_15c;
  uint uStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  undefined4 ****local_148;
  uint local_144;
  undefined4 ***pppuStack_140;
  uint uStack_13c;
  int local_138;
  uint uStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  undefined2 local_124;
  undefined1 local_122;
  undefined4 ****local_120;
  uint uStack_11c;
  undefined2 local_118;
  undefined1 local_116;
  undefined2 local_114;
  undefined1 local_112;
  undefined4 local_110;
  uint uStack_10c;
  undefined4 ***pppuStack_108;
  uint uStack_104;
  int local_100;
  uint local_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int local_e8;
  undefined4 ****local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  uint uStack_d8;
  int iStack_d4;
  uint local_d0;
  int iStack_cc;
  int iStack_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int iStack_b8;
  int iStack_b4;
  undefined4 local_b0;
  uint local_ac;
  undefined4 ***local_a8;
  uint uStack_a4;
  int local_a0;
  uint local_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  undefined4 ****local_88;
  uint local_84;
  undefined1 local_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  uint uStack_7c;
  int local_78;
  uint local_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  undefined4 ****local_5c;
  uint local_58;
  undefined4 ***local_54;
  undefined3 local_50;
  undefined1 uStack_4d;
  undefined3 uStack_4c;
  
  FUN_01344b5c(&local_88,param_2,param_3,1,0);
  if ((char)local_70 == '\x05') {
    FUN_0166f88c(&local_e8,param_2,param_3,local_88,local_84 & 0xff);
    if (local_e8 != -0x7ffffff6) {
      piVar9 = (int *)((uint)&local_e8 | 4);
      iVar10 = *piVar9;
      iVar16 = piVar9[1];
      iVar18 = piVar9[2];
      iVar20 = piVar9[3];
      iVar7 = piVar9[4];
      iVar11 = piVar9[5];
      iVar17 = piVar9[6];
      iVar19 = piVar9[7];
      iVar21 = piVar9[8];
      param_1[10] = local_c0;
      param_1[0xb] = local_bc;
      param_1[0xc] = iStack_b8;
      param_1[0xd] = iStack_b4;
      param_1[1] = iVar10;
      param_1[2] = iVar16;
      param_1[3] = iVar18;
      param_1[4] = iVar20;
      param_1[5] = iVar7;
      param_1[6] = iVar11;
      param_1[7] = iVar17;
      param_1[8] = iVar19;
      param_1[9] = iVar21;
      *param_1 = local_e8;
      return;
    }
  }
  else {
    iStack_d4 = CONCAT13(uStack_7d,CONCAT12(uStack_7e,CONCAT11(uStack_7f,local_80)));
    local_110 = local_88;
    uStack_10c = local_84;
    uStack_104 = uStack_7c;
    local_100 = local_78;
    local_fc = local_74;
    local_dc = local_88;
    uStack_d8 = local_84;
    local_d0 = uStack_7c;
    iStack_cc = local_78;
    iStack_c8 = local_74;
    local_c4 = local_70;
    local_e4 = param_2;
    local_e0 = param_3;
  }
  puVar8 = (undefined4 *)((uint)&local_e8 | 4);
  local_148 = (undefined4 ****)*puVar8;
  local_144 = puVar8[1];
  pppuStack_140 = (undefined4 ***)puVar8[2];
  uStack_13c = puVar8[3];
  local_138 = puVar8[4];
  uStack_134 = puVar8[5];
  iStack_130 = puVar8[6];
  iStack_12c = puVar8[7];
  iStack_128 = puVar8[8];
  local_80 = SUB41(&pppuStack_140,0);
  uStack_7f = (undefined1)((uint)&pppuStack_140 >> 8);
  uStack_7e = (undefined1)((uint)&pppuStack_140 >> 0x10);
  uStack_7d = (undefined1)((uint)&pppuStack_140 >> 0x18);
  local_b0 = local_148;
  local_ac = local_144;
  local_a8 = pppuStack_140;
  uStack_a4 = uStack_13c;
  local_a0 = local_138;
  local_9c = uStack_134;
  iStack_98 = iStack_130;
  iStack_94 = iStack_12c;
  iStack_90 = iStack_128;
  local_88 = local_148;
  local_84 = local_144;
  FUN_01346304(&local_e8,&local_88,&LAB_01345a54);
  uVar13 = local_e0;
  ppppuVar2 = local_e4;
  iVar7 = local_e8;
  if (local_e8 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_e8,&DAT_01d07228,&DAT_01d071a8);
  }
  local_80 = SUB41(local_dc,0);
  uStack_7f = (undefined1)((uint)local_dc >> 8);
  uStack_7e = (undefined1)((uint)local_dc >> 0x10);
  uStack_7d = (undefined1)((uint)local_dc >> 0x18);
  uStack_7c = uStack_d8;
  local_78 = iStack_d4;
  local_74 = local_d0;
  local_70 = iStack_cc;
  iStack_6c = iStack_c8;
  iStack_68 = local_c4;
  local_84 = local_e0;
  local_88 = local_e4;
  local_110 = local_e4;
  uStack_10c = local_e0;
  pppuStack_108 = local_dc;
  uStack_104 = uStack_d8;
  local_100 = iStack_d4;
  local_fc = local_d0;
  iStack_f8 = iStack_cc;
  iStack_f4 = iStack_c8;
  iStack_f0 = local_c4;
  pppuStack_164 = local_dc;
  uStack_160 = uStack_d8;
  local_15c = iStack_d4;
  uStack_158 = local_d0;
  iStack_154 = iStack_cc;
  iStack_150 = iStack_c8;
  iStack_14c = local_c4;
  if (iStack_d4 == 0) {
    DataMemoryBarrier(0xb);
    if (DAT_01d4ef2c != 0) {
      local_148 = (undefined4 ****)&DAT_01d4ef04;
      local_88 = &local_148;
      FUN_019a768c(&DAT_01d4ef2c,1,&local_88,&DAT_01d06f80,&DAT_01d293e0);
    }
    local_b0 = DAT_01d4ef08;
    local_54 = &local_a8;
    local_ac = DAT_01d4ef0c;
    local_a8 = DAT_01d4ef10;
    uStack_a4 = DAT_01d4ef14;
    local_a0 = DAT_01d4ef18;
    local_9c = DAT_01d4ef1c;
    iStack_98 = DAT_01d4ef20;
    iStack_94 = DAT_01d4ef24;
    iStack_90 = DAT_01d4ef28;
    pppuStack_140 = &pppuStack_164;
    local_148 = ppppuVar2;
    local_144 = uVar13;
    local_5c = local_b0;
    local_58 = local_ac;
    FUN_0134400c(&local_88,&local_5c,&local_148);
    ppppuVar3 = local_88;
    if (local_88 == (undefined4 ****)&DAT_80000000) {
      uVar13 = local_84 & 0xff;
      DataMemoryBarrier(0xb);
      if (DAT_01d4ef2c != 0) {
        local_148 = (undefined4 ****)&DAT_01d4ef04;
        local_88 = &local_148;
        FUN_019a768c(&DAT_01d4ef2c,1,&local_88,&DAT_01d06f80,&DAT_01d293e0);
      }
      local_88 = DAT_01d4ef08;
      local_84 = DAT_01d4ef0c;
      uStack_7c = DAT_01d4ef14;
      local_78 = DAT_01d4ef18;
      local_80 = SUB41(DAT_01d4ef10,0);
      uStack_7f = (undefined1)((uint)DAT_01d4ef10 >> 8);
      uStack_7e = (undefined1)((uint)DAT_01d4ef10 >> 0x10);
      uStack_7d = (undefined1)((uint)DAT_01d4ef10 >> 0x18);
      local_74 = DAT_01d4ef1c;
      local_70 = DAT_01d4ef20;
      iStack_6c = DAT_01d4ef24;
      iStack_68 = DAT_01d4ef28;
      FUN_0166f928(&local_e8,param_2,param_3,&local_88,uVar13);
      if (local_e8 != -0x7ffffff6) {
        local_110 = local_e4;
        uStack_10c = local_e0;
        pppuStack_108 = local_dc;
        uStack_104 = uStack_d8;
        local_100 = iStack_d4;
        local_fc = local_d0;
        iStack_f8 = iStack_cc;
        iStack_f4 = iStack_c8;
        iStack_f0 = local_c4;
        iStack_ec = local_c0;
        param_1[0xb] = local_bc;
        param_1[0xc] = iStack_b8;
        param_1[0xd] = iStack_b4;
        param_1[1] = (int)local_e4;
        param_1[2] = local_e0;
        param_1[3] = (int)local_dc;
        param_1[4] = uStack_d8;
        param_1[5] = iStack_d4;
        param_1[6] = local_d0;
        param_1[7] = iStack_cc;
        param_1[8] = iStack_c8;
        param_1[9] = local_c4;
        param_1[10] = local_c0;
        *param_1 = local_e8;
        goto LAB_01670010;
      }
    }
    else {
      FUN_01bed4e2((uint)&local_50 | 7,&uStack_7c,0x1c);
      local_e4 = ppppuVar3;
      _local_50 = CONCAT13(local_80,local_84._1_3_);
      uStack_4c = (undefined3)
                  (CONCAT13(uStack_7d,CONCAT12(uStack_7e,CONCAT11(uStack_7f,local_80))) >> 8);
      local_e0 = CONCAT31(local_e0._1_3_,(undefined1)local_84);
      FUN_01bed4e2((int)&local_e0 + 1,&local_50,0x23);
    }
    local_110 = local_e4;
    uStack_10c = local_e0;
    pppuStack_108 = local_dc;
    uStack_104 = uStack_d8;
    local_100 = iStack_d4;
    local_fc = local_d0;
    iStack_f8 = iStack_cc;
    iStack_f4 = iStack_c8;
    iStack_f0 = local_c4;
    iStack_ec = local_c0;
    param_1[1] = (int)local_e4;
    param_1[2] = local_e0;
    param_1[3] = (int)local_dc;
    param_1[4] = uStack_d8;
    param_1[5] = iStack_d4;
    param_1[6] = local_d0;
    param_1[7] = iStack_cc;
    param_1[8] = iStack_c8;
    param_1[9] = local_c4;
    param_1[10] = local_c0;
    *param_1 = -0x7ffffff6;
LAB_01670010:
    FUN_019bb7e0(iVar7,ppppuVar2);
    return;
  }
  FUN_01344b5c(&local_e8,local_e4,local_e0,1,1);
  pppuVar4 = local_dc;
  uVar14 = local_e0;
  ppppuVar3 = local_e4;
  cVar5 = (char)local_d0;
  if ((char)local_d0 == '\x05') {
    if (-1 < (int)uVar13) {
      uVar1 = local_e4._0_1_;
      if (uVar13 == 0) {
        iVar10 = 1;
        uVar14 = 0;
      }
      else {
        uVar12 = 1;
        iVar10 = FUN_01298504(uVar13,1);
        if (iVar10 == 0) goto LAB_0166fea8;
        uVar14 = uVar13;
      }
      FUN_01bed4e2(iVar10,ppppuVar2,uVar13);
      *param_1 = -0x80000000;
      param_1[1] = uVar14;
      param_1[2] = iVar10;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 5) = uVar1;
      param_1[3] = uVar13;
      param_1[4] = local_e8;
      goto LAB_01670010;
    }
  }
  else {
    local_110 = (undefined4 ****)CONCAT22(CONCAT11(local_110._3_1_,local_e0._3_1_),local_e0._1_2_);
    FUN_01bed4e2(&local_88,(int)&local_dc + 1,0xb);
    local_b0._0_3_ = (undefined3)(local_d0 >> 8);
    ppppuVar6 = local_b0;
    local_114 = (undefined2)local_110;
    local_112 = local_110._2_1_;
    local_120 = local_88;
    uStack_11c = local_84;
    local_b0._0_2_ = (undefined2)(local_d0 >> 8);
    local_118 = CONCAT11(uStack_7f,local_80);
    local_b0._2_1_ = (undefined1)(local_d0 >> 0x18);
    local_116 = uStack_7e;
    local_124 = (undefined2)local_b0;
    local_122 = local_b0._2_1_;
    local_b0 = ppppuVar6;
    if (-1 < (int)uVar13) {
      if (uVar13 == 0) {
        iVar10 = 1;
        uVar15 = 0;
      }
      else {
        uVar12 = 1;
        iVar10 = FUN_01298504(uVar13,1);
        if (iVar10 == 0) goto LAB_0166fea8;
        uVar15 = uVar13;
      }
      FUN_01bed4e2(iVar10,ppppuVar2,uVar13);
      *(undefined2 *)((int)param_1 + 0x19) = local_114;
      *(undefined1 *)((int)param_1 + 0x1b) = local_112;
      FUN_01bed4e2((int)param_1 + 0x1d,&local_120,0xb);
      *(char *)(param_1 + 7) = (char)pppuVar4;
      *(char *)(param_1 + 6) = (char)uVar14;
      *param_1 = -0x7ffffff6;
      param_1[1] = uVar15;
      param_1[2] = iVar10;
      param_1[3] = uVar13;
      param_1[4] = local_e8;
      *(char *)(param_1 + 10) = cVar5;
      param_1[5] = (int)ppppuVar3;
      *(undefined2 *)((int)param_1 + 0x29) = local_124;
      *(undefined1 *)((int)param_1 + 0x2b) = local_122;
      goto LAB_01670010;
    }
  }
  uVar12 = 0;
LAB_0166fea8:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar12,uVar13);
}

