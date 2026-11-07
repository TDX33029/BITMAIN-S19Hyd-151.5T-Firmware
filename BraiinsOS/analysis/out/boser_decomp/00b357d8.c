// FUN_00b357d8 @ 00b357d8 size=2060 calls_out=16 calls_in=4
// strings: BUG: missing client statistics

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b357d8(uint *param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint uVar16;
  char *pcVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  byte bVar21;
  uint uVar22;
  undefined1 *puVar23;
  byte bVar24;
  char *pcVar25;
  int iVar26;
  int iVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 unaff_d8;
  double dVar31;
  undefined8 unaff_d14;
  double dVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  uint local_330;
  uint local_32c;
  undefined1 local_328;
  uint local_324;
  uint local_320;
  undefined1 local_31c;
  uint local_318;
  uint local_314;
  uint local_308;
  uint local_304;
  uint local_300;
  uint local_2fc;
  uint local_2f8;
  uint local_2f4;
  uint local_2bc;
  undefined1 auStack_2b8 [144];
  undefined4 local_228;
  undefined3 uStack_224;
  undefined1 auStack_220 [144];
  undefined1 auStack_190 [120];
  int local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  uint local_100 [4];
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint local_c8;
  uint local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  uint local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char *local_70;
  
  uVar22 = *param_2;
  pcVar17 = (char *)param_2[1];
  if (uVar22 == 2 && pcVar17 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_003f1b0a,0x1f,&DAT_01c179c8);
  }
  pcVar25 = (char *)0x0;
  bVar24 = 0;
  if (param_4 != 0) {
    iVar26 = 0;
    bVar24 = 0;
    do {
      pcVar17 = (char *)(param_3 + iVar26 * 0x28);
      iVar18 = *(int *)(pcVar17 + 0x24);
      if (iVar18 != 0) {
        pcVar17 = (char *)(*(int *)(pcVar17 + 0x20) + 0x1d4);
        do {
          pcVar1 = pcVar17 + 1;
          cVar3 = *pcVar17;
          pcVar17 = pcVar17 + 0x1d8;
          bVar21 = bVar24;
          if (bVar24 < (byte)(*pcVar1 + 1U)) {
            bVar21 = *pcVar1 + 1U;
          }
          if (cVar3 != '\0') {
            bVar24 = bVar21;
          }
          iVar18 = iVar18 + -1;
        } while (iVar18 != 0);
      }
      iVar26 = iVar26 + 1;
    } while (iVar26 != param_4);
  }
  iVar26 = param_3 + param_4 * 0x28;
  param_4 = param_4 * 0x28;
  while (pcVar25 == (char *)0x0 || pcVar25 == pcVar17) {
    if (param_4 == 0) goto LAB_00b35904;
    piVar2 = (int *)(param_3 + 0x24);
    param_4 = param_4 + -0x28;
    pcVar25 = *(char **)(param_3 + 0x20);
    param_3 = param_3 + 0x28;
    pcVar17 = pcVar25 + *piVar2 * 0x1d8;
  }
  if (*(int *)(pcVar25 + 0x20) == 2 && *(int *)(pcVar25 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("BUG: missing client statistics",0x1e,&DAT_01c1d098);
  }
  FUN_00a27844(local_100,pcVar25 + 0x108);
  if (local_88 == -0x7fffffff) {
LAB_00b35904:
    local_118 = -0x7fffffff;
  }
  else {
    puVar23 = auStack_2b8;
    pcVar25 = pcVar25 + 0x1d8;
    FUN_01bed4e2(puVar23,local_100,0x90);
    if (pcVar25 != pcVar17) {
      FUN_01bed4e2(auStack_190,auStack_2b8,0x90);
      uVar19 = (uint)((int)pcVar17 - (int)pcVar25) / 0x1d8;
      do {
        FUN_01bed4e2(local_100,auStack_190,0x90);
        local_70 = pcVar25;
        FUN_00a277a0(auStack_190,local_100,pcVar25);
        pcVar25 = pcVar25 + 0x1d8;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
      FUN_01bed4e2(auStack_2b8,auStack_190,0x90);
    }
    if (param_3 != iVar26) {
      puVar23 = auStack_220;
      FUN_01bed4e2(puVar23,auStack_2b8,0x90);
      iVar18 = 0;
      do {
        iVar10 = param_3 + iVar18 * 0x28;
        iVar27 = *(int *)(iVar10 + 0x24);
        if (iVar27 == 0) {
          puVar15 = puVar23;
        }
        else {
          pcVar17 = *(char **)(iVar10 + 0x20);
          FUN_01bed4e2(auStack_190,puVar23,0x90);
          do {
            FUN_01bed4e2(local_100,auStack_190,0x90);
            local_70 = pcVar17;
            FUN_00a277a0(auStack_190,local_100,pcVar17);
            pcVar17 = pcVar17 + 0x1d8;
            iVar27 = iVar27 + -1;
          } while (iVar27 != 0);
          puVar15 = auStack_190;
        }
        FUN_01bed4e2(local_100,puVar15,0x90);
        FUN_01bed4e2(puVar23,local_100,0x90);
        iVar18 = iVar18 + 1;
      } while (iVar18 != ((uint)(iVar26 - param_3) >> 3) * -0x33333333);
    }
    FUN_01bed4e2(local_100,puVar23,0x90);
    FUN_01bed4e2(auStack_2b8,local_100,0x90);
    FUN_01bed4e2(auStack_190,auStack_2b8,0x90);
  }
  uVar11 = FUN_01220064(param_5);
  FUN_01221990(local_100,uVar11);
  uVar8 = local_100[1];
  uVar19 = local_100[0];
  uVar5 = CONCAT44(local_100[3],local_100[2]);
  uVar11 = FUN_01220064(param_5);
  FUN_01221cb4(local_100,uVar11);
  uVar9 = local_100[1];
  uVar7 = local_100[0];
  uVar6 = CONCAT44(local_100[3],local_100[2]);
  uVar12 = FUN_01220aac(param_5);
  uVar13 = *(uint *)(param_5 + 0x288);
  uVar4 = (&DAT_00570c78)[uVar12 & 0xff];
  if (uVar13 != 0xb || *(int *)(param_5 + 0x28c) != 0) {
    iVar26 = 4;
    if ((uint)(uVar13 < 5) <= (uint)-*(int *)(param_5 + 0x28c)) {
      iVar26 = uVar13 - 5;
    }
                    /* WARNING: Could not recover jumptable at 0x00b35b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00b35b78 + *(int *)(&DAT_00b35b78 + iVar26 * 4)))();
    return;
  }
  FUN_00b621e8(auStack_220,param_2);
  iVar26 = local_118;
  local_2bc = 0;
  if (local_118 == -0x7fffffff) {
    local_2f4 = 0;
    local_2f8 = 0;
    uVar33 = 0;
    local_304 = 0;
    local_308 = 0;
    uVar34 = 0;
    local_2fc = 0;
    local_300 = 0;
    uVar35 = 0;
    dVar30 = 0.0;
    dVar31 = 0.0;
  }
  else {
    FUN_01bed4e2(local_100,auStack_190,0x78);
    uVar16 = local_dc;
    uVar14 = local_e0;
    uVar13 = local_e4;
    uVar12 = local_e8;
    local_88 = iVar26;
    local_84 = local_114;
    uStack_80 = uStack_110;
    uStack_7c = uStack_10c;
    uStack_78 = uStack_108;
    uStack_74 = uStack_104;
    local_2fc = local_f0;
    local_300 = local_ec;
    local_2f4 = local_a0;
    local_2f8 = local_9c;
    local_304 = local_c8;
    local_308 = local_c4;
    FUN_00a27b10(local_100);
    dVar28 = (double)FUN_01bf09c8(local_98,uStack_94,uStack_90,local_8c);
    uVar33 = FUN_01bf0b64(SUB84(dVar28,0),(int)((ulonglong)dVar28 >> 0x20));
    if (dVar28 < 0.0) {
      uVar33 = 0;
    }
    if (1.844674407370955e+19 < dVar28) {
      uVar33 = 0xffffffffffffffff;
    }
    dVar29 = (double)FUN_01bf09c8(local_c0,local_bc,local_b8,local_b4);
    uVar34 = FUN_01bf0b64(SUB84(dVar29,0),(int)((ulonglong)dVar29 >> 0x20));
    if (dVar29 < 0.0) {
      uVar34 = 0;
    }
    if (1.844674407370955e+19 < dVar29) {
      uVar34 = 0xffffffffffffffff;
    }
    dVar30 = (double)FUN_01bf09c8(uVar12,uVar13,uVar14,uVar16);
    uVar35 = FUN_01bf0b64(SUB84(dVar30,0),(int)((ulonglong)dVar30 >> 0x20));
    dVar32 = dVar30 + dVar29 + dVar28;
    if (dVar30 < 0.0) {
      uVar35 = 0;
    }
    if (1.844674407370955e+19 < dVar30) {
      uVar35 = 0xffffffffffffffff;
    }
    dVar30 = 0.0;
    dVar31 = 0.0;
    if (dVar32 != 0.0) {
      dVar30 = dVar28 / dVar32;
      dVar31 = dVar29 / dVar32;
    }
  }
  local_318 = (uint)uVar35;
  local_314 = (uint)((ulonglong)uVar34 >> 0x20);
  uVar14 = param_2[2];
  uVar13 = param_2[3];
  uVar12 = param_2[4];
  uVar16 = param_2[5];
  uVar20 = param_2[0x12];
  if ((uVar22 & 1) == 0) {
    uVar16 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
  }
  iVar26 = FUN_012fc0a4(uVar14,uVar13,uVar12,uVar16,local_100);
  uVar12 = 0x27 - iVar26;
  uVar22 = 1;
  if ((iVar26 != 0x27) && (uVar22 = FUN_01298504(uVar12,1), local_2bc = uVar12, uVar22 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,uVar12);
  }
  FUN_01bed4e2(uVar22,(int)local_100 + iVar26,uVar12);
  if (*(int *)(param_5 + 0x80) == 2 && *(int *)(param_5 + 0x84) == 0) {
    local_100[1] = 0;
    local_100[0] = 2;
  }
  else {
    FUN_00b60b28(local_100,(int *)(param_5 + 0x80),param_2);
  }
  FUN_01bed4e2(param_1 + 0x28,auStack_220,0x58);
  *(byte *)(param_1 + 0x52) = bVar24;
  param_1[0x3e] = local_318;
  param_1[0x40] = local_2fc;
  param_1[0x41] = local_300;
  param_1[0x43] = local_314;
  param_1[0x44] = local_304;
  param_1[0x45] = local_308;
  *(undefined8 *)(param_1 + 0x48) = uVar33;
  param_1[0x4a] = local_2f4;
  param_1[0x4b] = local_2f8;
  param_1[0x42] = (uint)uVar34;
  param_1[0x4e] = local_2bc;
  param_1[0x4f] = uVar22;
  param_1[0x50] = uVar12;
  param_1[0x51] = uVar20;
  param_1[0x3f] = (uint)((ulonglong)uVar35 >> 0x20);
  *(double *)(param_1 + 0x46) = dVar31;
  *(double *)(param_1 + 0x4c) = dVar30;
  *param_1 = local_100[0];
  param_1[1] = local_100[1];
  param_1[2] = local_100[2];
  param_1[3] = local_100[3];
  param_1[4] = local_f0;
  param_1[5] = local_ec;
  param_1[6] = local_e8;
  param_1[7] = local_e4;
  param_1[8] = local_e0;
  param_1[9] = local_dc;
  param_1[10] = uStack_d8;
  param_1[0xb] = uStack_d4;
  param_1[0xc] = uStack_d0;
  param_1[0xd] = uStack_cc;
  param_1[0xe] = 2;
  param_1[0xf] = 0;
  param_1[0x12] = local_320;
  param_1[0x13] = local_324;
  param_1[0x16] = local_228;
  param_1[0x18] = local_32c;
  param_1[0x19] = local_330;
  *(undefined8 *)(param_1 + 0x10) = unaff_d14;
  *(undefined8 *)(param_1 + 0x14) = unaff_d8;
  *(undefined8 *)(param_1 + 0x1e) = uVar5;
  param_1[0x1c] = 2 - uVar19;
  param_1[0x1d] = -(uVar8 + (2 < uVar19));
  *(undefined8 *)(param_1 + 0x24) = uVar6;
  *(uint *)((int)param_1 + 0x5b) = CONCAT31(uStack_224,local_228._3_1_);
  param_1[0x22] = 2 - uVar7;
  param_1[0x23] = -(uVar9 + (2 < uVar7));
  *(undefined1 *)((int)param_1 + 0x149) = uVar4;
  *(undefined1 *)((int)param_1 + 0x5f) = local_328;
  *(undefined1 *)(param_1 + 0x1a) = local_31c;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x26) = 2;
  return;
}

