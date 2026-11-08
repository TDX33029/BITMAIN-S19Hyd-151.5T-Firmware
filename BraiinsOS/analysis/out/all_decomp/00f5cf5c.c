// FUN_00f5cf5c @ 00f5cf5c size=1116 calls_out=6 calls_in=4
// strings: 

/* WARNING: Removing unreachable block (ram,0x00f5d0f8) */

undefined8
FUN_00f5cf5c(byte *param_1,int param_2,byte *param_3,uint param_4,int param_5,int param_6,
            byte param_7)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  bool bVar16;
  byte local_1b9;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined1 auStack_190 [64];
  undefined4 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 auStack_100 [64];
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  local_1b9 = param_7;
  iVar12 = 0;
  FUN_016dd606(auStack_190,0,0x40);
  local_1b8 = 0x6a09e667;
  uStack_1b4 = 0xbb67ae85;
  uStack_1b0 = 0x3c6ef372;
  uStack_1ac = 0xa54ff53a;
  local_1a8 = 0x510e527f;
  uStack_1a4 = 0x9b05688c;
  uStack_1a0 = 0x1f83d9ab;
  uStack_19c = 0x5be0cd19;
  pbVar7 = (byte *)0x0;
  local_194 = 0;
  local_198 = 0;
  local_150 = 0;
  if (param_6 != 0) {
    pbVar7 = &local_1b9;
    local_98 = CONCAT31(local_98._1_3_,param_7);
    FUN_0159c478(&local_1b8,&local_98,1);
  }
  FUN_016dd1aa(&local_128,&local_1b8,0x70);
  FUN_0159c478(&local_128,param_1,param_2);
  FUN_016dd1aa(&local_98,&local_128,0x70);
  FUN_0159c570(&local_98,&local_128);
  local_148 = local_128;
  uStack_144 = uStack_124;
  uStack_140 = uStack_120;
  uStack_13c = uStack_11c;
  local_138 = local_118;
  uStack_134 = uStack_114;
  uStack_130 = uStack_110;
  uStack_12c = uStack_10c;
  FUN_016dd606(auStack_100,0,0x40);
  local_128 = 0x6a09e667;
  uStack_124 = 0xbb67ae85;
  uStack_120 = 0x3c6ef372;
  uStack_11c = 0xa54ff53a;
  local_118 = 0x510e527f;
  uStack_114 = 0x9b05688c;
  uStack_110 = 0x1f83d9ab;
  uStack_10c = 0x5be0cd19;
  local_104 = 0;
  local_108 = 0;
  local_c0 = 0;
  FUN_0159c478(&local_128,&local_148,0x20);
  FUN_016dd1aa(&local_98,&local_128,0x70);
  FUN_0159c570(&local_98,&local_b8);
  pbVar3 = param_1 + param_2;
  uVar13 = 1;
  local_98 = local_b8;
  uStack_94 = uStack_b4;
  uStack_90 = uStack_b0;
  uStack_8c = uStack_ac;
  local_88 = local_a8;
  uStack_84 = uStack_a4;
  uStack_80 = uStack_a0;
  uStack_7c = uStack_9c;
  uVar5 = 0;
  pbVar15 = pbVar7;
  pbVar9 = param_1;
  do {
    pbVar14 = pbVar15;
    if ((uVar13 & 1) != 0) {
      uVar13 = 1;
      pbVar14 = (byte *)0x0;
      if (pbVar15 != (byte *)0x0) goto LAB_00f5d1b0;
    }
    if (pbVar9 == pbVar3) goto LAB_00f5d198;
    uVar13 = 0;
    pbVar10 = pbVar9;
    pbVar9 = pbVar9 + 1;
    pbVar15 = pbVar14;
    while( true ) {
      if (param_4 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar5,param_4,&DAT_01886f00);
      }
      uVar8 = (uint)*pbVar10;
      pbVar14 = param_3;
      for (uVar6 = uVar5; uVar6 != 0; uVar6 = uVar6 - 1) {
        uVar11 = uVar8 + (uint)*pbVar14 * 0x100;
        uVar8 = uVar11 / 0x3a;
        *pbVar14 = (char)uVar11 + (char)uVar8 * -0x3a;
        pbVar14 = pbVar14 + 1;
      }
      if (uVar8 != 0) {
        do {
          if (param_4 == uVar5) goto LAB_00f5d2cc;
          bVar16 = 0x39 < uVar8;
          param_3[uVar5] = (char)uVar8 + (char)(uVar8 / 0x3a) * -0x3a;
          uVar5 = uVar5 + 1;
          uVar8 = uVar8 / 0x3a;
        } while (bVar16);
      }
      if (uVar13 != 2) break;
      pbVar14 = pbVar15;
LAB_00f5d198:
      if (iVar12 == 4) {
        uVar13 = param_4;
        if (param_4 < uVar5) {
          uVar13 = uVar5;
        }
        uVar8 = 1;
        iVar12 = 0;
        goto LAB_00f5d22c;
      }
      uVar13 = 2;
      pbVar15 = (byte *)((int)&local_98 + iVar12);
      iVar12 = iVar12 + 1;
LAB_00f5d1b0:
      pbVar10 = pbVar15;
      pbVar15 = pbVar14;
    }
  } while( true );
LAB_00f5d22c:
  pbVar15 = pbVar7;
  if ((uVar8 & 1) != 0) {
    uVar8 = 1;
    pbVar15 = (byte *)0x0;
    if (pbVar7 != (byte *)0x0) goto LAB_00f5d28c;
  }
  if (param_1 == pbVar3) goto LAB_00f5d278;
  uVar8 = 0;
  bVar1 = *param_1;
  param_1 = param_1 + 1;
  pbVar7 = pbVar15;
  do {
    if (bVar1 != 0) {
LAB_00f5d2d8:
      if (param_4 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar5,param_4,&DAT_01886ee0);
      }
      if (uVar5 == 0) {
        return 0;
      }
      uVar13 = 0;
      do {
        uVar8 = (uint)param_3[uVar13];
        if (0x39 < uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar8,0x3a,&DAT_01886ed0);
        }
        param_3[uVar13] = *(byte *)(param_5 + 0x80 + uVar8);
        uVar13 = uVar13 + 1;
      } while (uVar5 != uVar13);
      if (uVar5 == 1) {
        return 0x100000000;
      }
      uVar4 = 0;
      iVar12 = 0;
      do {
        iVar2 = iVar12 + uVar5;
        bVar1 = param_3[-iVar12];
        param_3[-iVar12] = param_3[iVar2 + -1];
        iVar12 = iVar12 + -1;
        param_3[iVar2 + -1] = bVar1;
      } while (-iVar12 != uVar5 >> 1);
      goto LAB_00f5d2d0;
    }
    if (param_4 == uVar5) {
LAB_00f5d2cc:
      uVar4 = 1;
LAB_00f5d2d0:
      return CONCAT44(uVar5,uVar4);
    }
    if (uVar13 == uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar13,param_4,&DAT_01886ef0);
    }
    param_3[uVar5] = 0;
    uVar5 = uVar5 + 1;
    if (uVar8 != 2) goto LAB_00f5d22c;
    pbVar15 = pbVar7;
LAB_00f5d278:
    if (iVar12 == 4) goto LAB_00f5d2d8;
    pbVar7 = (byte *)((int)&local_98 + iVar12);
    iVar12 = iVar12 + 1;
    uVar8 = 2;
LAB_00f5d28c:
    bVar1 = *pbVar7;
    pbVar7 = pbVar15;
  } while( true );
}

