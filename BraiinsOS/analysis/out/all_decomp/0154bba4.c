// FUN_0154bba4 @ 0154bba4 size=3408 calls_out=25 calls_in=0
// strings: internal error: entered unreachable code: Caught by `PeerMisbehaved::UnsolicitedEncryptedExtension`

void FUN_0154bba4(int *param_1,undefined4 *param_2,int *param_3,uint *param_4)

{
  char cVar1;
  bool bVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  char *pcVar8;
  undefined **ppuVar9;
  undefined4 uVar10;
  code *pcVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  byte *pbVar18;
  ushort *puVar19;
  undefined4 *puVar20;
  short *psVar21;
  uint uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  short sVar25;
  byte *pbVar26;
  int local_1d8;
  int iStack_1d4;
  int iStack_1d0;
  uint local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  int local_1b0;
  int local_1ac;
  int local_198;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 auStack_12c [4];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 auStack_10c [20];
  undefined2 local_f8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  
  if ((0x80000000 < *param_4) || ((undefined1 *)param_4[3] != &DAT_80000010)) {
    FUN_015622b4(&local_170,param_4,&DAT_0040c784,1,&DAT_0040c0b9,1);
    param_1[2] = local_168;
    param_1[3] = local_164;
    param_1[4] = local_160;
    param_1[5] = iStack_15c;
    param_1[6] = iStack_158;
    param_1[7] = iStack_154;
    *param_1 = local_170;
    param_1[1] = local_16c;
    goto LAB_0154bf08;
  }
  piVar6 = param_2 + 0x4e;
  FUN_0151eddc(piVar6,param_4);
  psVar3 = (short *)param_2[0x59];
  iVar4 = param_2[0x5a];
  iVar13 = *param_3;
  puVar19 = (ushort *)(param_4[5] + 0x10);
  local_168 = 0;
  local_170 = 0;
  iVar17 = param_4[6] * 0x14;
  do {
    iVar14 = iVar17;
    if (iVar14 == 0) break;
    uVar10 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)puVar19[-8]) {
    case '\0':
      uVar10 = 0xb;
      break;
    case '\x02':
      uVar10 = 0x23;
      break;
    case '\x03':
      uVar10 = 0xff01;
      break;
    case '\x04':
      uVar10 = 0x10;
      break;
    case '\x05':
      uVar10 = 0x33;
      break;
    case '\x06':
      uVar10 = 0x29;
      break;
    case '\a':
      uVar10 = 0x17;
      break;
    case '\b':
      uVar10 = 5;
      break;
    case '\t':
      uVar10 = 0x14;
      break;
    case '\n':
      uVar10 = 0x13;
      break;
    case '\v':
      uVar10 = 0x2b;
      break;
    case '\f':
      uVar10 = 0x39;
      break;
    case '\r':
      uVar10 = 0xffa5;
      break;
    case '\x0e':
      uVar10 = 0x2a;
      break;
    case '\x0f':
      uVar10 = 0xfe0d;
      break;
    case '\x10':
                    /* WARNING: Could not recover jumptable at 0x0154bca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_0154bca4 + *(int *)(&DAT_0154bca4 + (uint)*puVar19 * 4)))();
      return;
    }
    iVar5 = FUN_0156a7f8(&local_170,uVar10);
    puVar19 = puVar19 + 10;
    iVar17 = iVar14 + -0x14;
  } while (iVar5 == 0);
  FUN_0156bc34(&local_170);
  iVar17 = 0x1a0001;
  if (iVar14 != 0) {
    iVar17 = 0x100001;
    uVar23 = 4;
    goto LAB_0154bec4;
  }
  uVar12 = param_4[6];
  if (uVar12 == 0) {
    uVar10 = param_2[0x56];
    pbVar7 = (byte *)0x0;
    uVar16 = param_2[0x57];
  }
  else {
    uVar23 = 0x46;
    if (iVar4 == 0) goto LAB_0154bec4;
    pbVar18 = (byte *)param_4[5];
    iVar4 = iVar4 << 2;
    iVar14 = uVar12 * 0x14;
    pbVar7 = pbVar18;
    do {
      pbVar26 = pbVar7 + 0x14;
      sVar25 = 0xb;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*pbVar7) {
      case 1:
        sVar25 = 0;
        break;
      case 2:
        sVar25 = 0x17;
        break;
      case 3:
        sVar25 = 0x26;
        break;
      case 4:
        sVar25 = 0x10;
        break;
      case 5:
        sVar25 = 0x22;
        break;
      case 6:
        sVar25 = 0x18;
        break;
      case 7:
        sVar25 = 0x15;
        break;
      case 8:
        sVar25 = 5;
        break;
      case 9:
        sVar25 = 0x13;
        break;
      case 10:
        sVar25 = 0x12;
        break;
      case 0xb:
        sVar25 = 0x1a;
        break;
      case 0xc:
        sVar25 = 0x23;
        break;
      case 0xd:
        sVar25 = 0x27;
        break;
      case 0xe:
        sVar25 = 0x19;
        break;
      case 0xf:
        sVar25 = 0x28;
        break;
      case 0x10:
        sVar25 = *(short *)(pbVar7 + 0x10);
        if (sVar25 != 0x2a) break;
        iVar5 = iVar4;
        psVar21 = psVar3 + 1;
        while ((psVar21[-1] != 0x2a || (*psVar21 != *(short *)(pbVar7 + 0x12)))) {
          psVar21 = psVar21 + 2;
          iVar5 = iVar5 + -4;
          if (iVar5 == 0) goto LAB_0154bec4;
        }
        goto LAB_0154c134;
      }
      iVar5 = iVar4;
      psVar21 = psVar3;
      while (*psVar21 != sVar25) {
        psVar21 = psVar21 + 2;
        iVar5 = iVar5 + -4;
        uVar24 = 0x46;
        if (iVar5 == 0) goto LAB_0154c1d0;
      }
LAB_0154c134:
      pbVar7 = pbVar26;
    } while (pbVar26 != pbVar18 + uVar12 * 0x14);
    puVar19 = (ushort *)(pbVar18 + 0x10);
    uVar24 = 2;
    do {
      uVar22 = (uint)(byte)puVar19[-8];
      if ((1 << uVar22 & 0xf79fU) == 0) {
        if (uVar22 != 0x10) goto LAB_0154c1d0;
        uVar15 = *puVar19 - 0x18;
        uVar22 = (uVar15 & 0xffff) >> 1;
        if ((((uVar15 * 0x8000 & 0xffff | uVar22) < 6) && ((1 << (uVar22 & 0xff) & 0x23U) != 0)) ||
           ((uVar22 = *puVar19 - 0xb, uVar22 < 0x1c && ((1 << (uVar22 & 0xff) & 0x8001401U) != 0))))
        goto LAB_0154c1d0;
      }
      else if ((1 << uVar22 & 0xff72U) == 0) goto LAB_0154c1d0;
      puVar19 = puVar19 + 10;
      iVar14 = iVar14 + -0x14;
    } while (iVar14 != 0);
    uVar10 = param_2[0x56];
    pbVar7 = (byte *)0x0;
    uVar16 = param_2[0x57];
    if (uVar12 != 0) {
      iVar4 = uVar12 * 0x14;
      do {
        uVar12 = (uint)*pbVar18;
        if ((10 < uVar12 - 5 && 3 < uVar12) &&
           ((uVar12 != 0x10 || (*(short *)(pbVar18 + 0x10) == 0x10)))) {
          pbVar7 = (byte *)0x0;
          if (uVar12 == 4) {
            pbVar7 = pbVar18 + 4;
          }
          break;
        }
        iVar4 = iVar4 + -0x14;
        pbVar18 = pbVar18 + 0x14;
      } while (iVar4 != 0);
    }
  }
  FUN_01563e2c(&local_170,iVar13,uVar10,uVar16,pbVar7);
  if (local_170 != -0x7fffffd7) {
    *param_1 = local_170;
    param_1[1] = local_16c;
    param_1[2] = local_168;
    param_1[3] = local_164;
    param_1[4] = local_160;
    param_1[5] = iStack_15c;
    param_1[6] = iStack_158;
    param_1[7] = iStack_154;
    goto LAB_0154bf08;
  }
  pbVar7 = (byte *)0x0;
  if (param_4[6] != 0) {
    iVar4 = param_4[6] * 0x14;
    pbVar18 = (byte *)param_4[5];
    do {
      uVar12 = (uint)*pbVar18;
      if (((1 << uVar12 & 0xfbffU) == 0) &&
         ((uVar12 != 0x10 || (*(short *)(pbVar18 + 0x10) == 0x12)))) {
        pbVar7 = (byte *)0x0;
        if (uVar12 == 10) {
          pbVar7 = pbVar18 + 1;
        }
        break;
      }
      iVar4 = iVar4 + -0x14;
      pbVar18 = pbVar18 + 0x14;
    } while (iVar4 != 0);
  }
  iVar4 = *(int *)(param_2[0x47] + 0x88);
  iVar4 = (**(code **)(iVar4 + 0x14))
                    (*(int *)(param_2[0x47] + 0x84) + (*(int *)(iVar4 + 8) - 1U & 0xfffffff8) + 8);
  if (pbVar7 == (byte *)0x0) {
    if (iVar4 == 0) goto LAB_0154c31c;
LAB_0154c2c8:
    local_1b4 = -0x7ffffffd;
    local_16c = 0x60001;
    local_170 = -0x7fffffff;
    local_1b8 = 0x8000001b;
    local_f8 = 4;
    FUN_01525ed4(iVar13,&local_170,*(char *)(iVar13 + 0x31) == '\x02');
LAB_0154c414:
    *(undefined2 *)((int)param_1 + 6) = local_1b4._2_2_;
    *(undefined1 *)(iVar13 + 0x255) = 1;
    *(undefined2 *)(param_1 + 1) = 3;
    *param_1 = -0x7fffffe5;
    goto LAB_0154bf08;
  }
  if (iVar4 == 0) {
    if (*pbVar7 == 1) goto LAB_0154ca68;
  }
  else if (*pbVar7 != 1) goto LAB_0154c2c8;
LAB_0154c31c:
  pbVar7 = (byte *)0x0;
  if (param_4[6] != 0) {
    iVar4 = param_4[6] * 0x14;
    pbVar18 = (byte *)param_4[5];
    do {
      uVar12 = (uint)*pbVar18;
      if (((1 << uVar12 & 0xfdffU) == 0) &&
         ((uVar12 != 0x10 || (*(short *)(pbVar18 + 0x10) == 0x13)))) {
        pbVar7 = (byte *)0x0;
        if (uVar12 == 9) {
          pbVar7 = pbVar18 + 1;
        }
        break;
      }
      iVar4 = iVar4 + -0x14;
      pbVar18 = pbVar18 + 0x14;
    } while (iVar4 != 0);
  }
  iVar4 = *(int *)(param_2[0x47] + 0xa4);
  iVar4 = (**(code **)(iVar4 + 0x20))
                    (*(int *)(param_2[0x47] + 0xa0) + (*(int *)(iVar4 + 8) - 1U & 0xfffffff8) + 8);
  if (pbVar7 == (byte *)0x0) {
    if (iVar4 != 0) {
LAB_0154c3cc:
      local_1b4 = -0x7ffffffd;
      local_16c = 0x60001;
      local_170 = -0x7fffffff;
      local_1b8 = 0x8000001b;
      local_f8 = 4;
      FUN_01525ed4(iVar13,&local_170,*(char *)(iVar13 + 0x31) == '\x02');
      goto LAB_0154c414;
    }
  }
  else if (iVar4 == 0) {
    if (*pbVar7 == 1) {
LAB_0154ca68:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("internal error: entered unreachable code: Caught by `PeerMisbehaved::UnsolicitedEncryptedExtension`"
                   ,199,&DAT_018a8f98);
    }
  }
  else if (*pbVar7 != 1) goto LAB_0154c3cc;
  iVar4 = param_3[1];
  cVar1 = *(char *)(iVar4 + 8);
  FUN_01505754(&local_170,param_4[5],param_4[6]);
  local_1b0 = local_16c;
  local_1b8 = CONCAT31(local_1b8._1_3_,cVar1);
  local_1b4 = local_170;
  local_1ac = local_168;
  if (local_170 == -0x80000000) {
    if (cVar1 == '\x04') {
      local_1d8 = -0x80000000;
    }
    else {
LAB_0154c544:
      local_1d8 = -0x80000000;
      FUN_0154cd2c(&local_1b4);
    }
  }
  else {
    if (cVar1 == '\0' || cVar1 == '\x03') {
      local_170 = -0x7fffffff;
      local_16c = 0x1a0001;
      local_f8 = 4;
      FUN_01525ed4(iVar13,&local_170,*(char *)(iVar13 + 0x31) == '\x02');
      *(undefined1 *)(iVar13 + 0x255) = 1;
      *(undefined1 *)(param_1 + 1) = 0x4a;
      *param_1 = (int)&DAT_8000001c;
      FUN_0154ccdc(&local_1b8);
      goto LAB_0154bf08;
    }
    if (cVar1 != '\x04') goto LAB_0154c544;
    FUN_0154cd7c(&local_38,&local_170);
    local_1d8 = local_38;
    iStack_1d4 = iStack_34;
    iStack_1d0 = iStack_30;
  }
  if (*(char *)(iVar13 + 0x259) == '\0') {
LAB_0154c5f0:
    if (param_2[0x1f] != -0x80000000) {
      FUN_016dd1aa(&local_1b8,param_2 + 0x10,0x48);
      if (*(char *)(iVar13 + 0x254) != '\0') {
        iVar17 = FUN_0150568c(param_4[5],param_4[6],0x19);
        pcVar8 = (char *)(iVar4 + 4);
        if (iVar17 == 0) {
          *pcVar8 = '\x04';
          *(undefined1 *)(iVar13 + 0x254) = 0;
        }
        else {
          if (*pcVar8 != '\x01') {
            FUN_01560e78(pcVar8,&DAT_0041319b,&DAT_018a7958);
                    /* WARNING: Does not return */
            pcVar11 = (code *)software_udf(0xfdee,0x154ca98);
            (*pcVar11)();
          }
          *pcVar8 = '\x02';
          if (*(char *)(iVar13 + 0x254) != '\0') goto LAB_0154c880;
        }
        FUN_01556f4c(param_2[0x24],param_2 + 0x25,iVar13);
      }
LAB_0154c880:
      FUN_01504dd8(&local_170,*(undefined4 *)(local_198 + 0xc),*(undefined4 *)(local_198 + 0x10));
      local_38 = local_170;
      iStack_34 = local_16c;
      iStack_30 = local_168;
      FUN_0151d184(iVar13 + 0x228);
      *(int *)(iVar13 + 0x228) = local_38;
      *(int *)(iVar13 + 0x22c) = iStack_34;
      *(int *)(iVar13 + 0x230) = iStack_30;
      *(undefined1 *)(iVar13 + 0x25d) = 2;
      uVar16 = param_2[0x47];
      local_128 = param_2[0x49];
      uStack_124 = param_2[0x4a];
      uStack_120 = param_2[0x4b];
      uStack_11c = param_2[0x4c];
      uStack_118 = param_2[0x4d];
      local_78 = *param_2;
      uStack_74 = param_2[1];
      local_70 = param_2[2];
      uStack_6c = param_2[3];
      uStack_68 = param_2[4];
      local_64 = param_2[5];
      uStack_60 = param_2[6];
      uStack_5c = param_2[7];
      uStack_58 = param_2[8];
      uStack_54 = param_2[9];
      local_50 = param_2[10];
      uStack_4c = param_2[0xb];
      uStack_48 = param_2[0xc];
      uStack_44 = param_2[0xd];
      uStack_40 = param_2[0xe];
      uStack_3c = param_2[0xf];
      uVar10 = param_2[0x48];
      local_170 = *piVar6;
      local_16c = param_2[0x4f];
      local_168 = param_2[0x50];
      local_164 = param_2[0x51];
      local_160 = param_2[0x52];
      iStack_15c = param_2[0x53];
      iStack_158 = param_2[0x54];
      FUN_016dd1aa(auStack_10c,param_2 + 0x22,0x94);
      iStack_154 = local_1d8;
      iStack_150 = iStack_1d4;
      iStack_14c = iStack_1d0;
      local_148 = 0x80000002;
      local_114 = uVar16;
      local_110 = uVar10;
      iVar4 = FUN_01547e3c(0x138,4);
      FUN_016dd1aa(iVar4,&local_170,0x138);
      *param_1 = -0x7fffffd7;
      param_1[1] = iVar4;
      param_1[2] = (int)&DAT_018a7d4c;
      FUN_01544360(&local_1b8);
LAB_0154ca38:
      FUN_015430a0(param_4);
      FUN_0154d3b4(param_2 + 0x55);
      thunk_FUN_016d3fb4(param_2);
      return;
    }
    iVar4 = FUN_0150568c(param_4[5],param_4[6],0x19);
    uVar23 = 10;
    if (iVar4 == 0) {
      if (*(char *)(iVar13 + 0x25d) == '\x03') {
        *(undefined1 *)(iVar13 + 0x25d) = 0;
      }
      if (*(char *)((int)param_2 + 0x16e) == '\0') {
        uVar10 = param_2[0x47];
        local_148 = param_2[0x49];
        uStack_144 = param_2[0x4a];
        uStack_140 = param_2[0x4b];
        uStack_13c = param_2[0x4c];
        uStack_138 = param_2[0x4d];
        local_98 = *param_2;
        uStack_94 = param_2[1];
        uStack_90 = param_2[2];
        uStack_8c = param_2[3];
        uStack_88 = param_2[4];
        local_84 = param_2[5];
        uStack_80 = param_2[6];
        uStack_7c = param_2[7];
        local_78 = param_2[8];
        uStack_74 = param_2[9];
        local_70 = param_2[10];
        uStack_6c = param_2[0xb];
        uStack_68 = param_2[0xc];
        local_64 = param_2[0xd];
        uStack_60 = param_2[0xe];
        uStack_5c = param_2[0xf];
        uVar16 = param_2[0x48];
        local_170 = *piVar6;
        local_16c = param_2[0x4f];
        local_168 = param_2[0x50];
        local_164 = param_2[0x51];
        local_160 = param_2[0x52];
        iStack_15c = param_2[0x53];
        iStack_158 = param_2[0x54];
        FUN_016dd1aa(auStack_12c,param_2 + 0x22,0x94);
        iStack_154 = local_1d8;
        iStack_150 = iStack_1d4;
        iStack_14c = iStack_1d0;
        local_134 = uVar10;
        local_130 = uVar16;
        iVar4 = FUN_01547e3c(0x118,4);
        FUN_016dd1aa(iVar4,&local_170,0x118);
        ppuVar9 = &PTR_FUN_018a7e50;
      }
      else {
        uVar10 = param_2[0x47];
        local_148 = param_2[0x49];
        uStack_144 = param_2[0x4a];
        uStack_140 = param_2[0x4b];
        uStack_13c = param_2[0x4c];
        uStack_138 = param_2[0x4d];
        local_98 = *param_2;
        uStack_94 = param_2[1];
        uStack_90 = param_2[2];
        uStack_8c = param_2[3];
        uStack_88 = param_2[4];
        local_84 = param_2[5];
        uStack_80 = param_2[6];
        uStack_7c = param_2[7];
        local_78 = param_2[8];
        uStack_74 = param_2[9];
        local_70 = param_2[10];
        uStack_6c = param_2[0xb];
        uStack_68 = param_2[0xc];
        local_64 = param_2[0xd];
        uStack_60 = param_2[0xe];
        uStack_5c = param_2[0xf];
        uVar16 = param_2[0x48];
        local_170 = *piVar6;
        local_16c = param_2[0x4f];
        local_168 = param_2[0x50];
        local_164 = param_2[0x51];
        local_160 = param_2[0x52];
        iStack_15c = param_2[0x53];
        iStack_158 = param_2[0x54];
        FUN_016dd1aa(auStack_12c,param_2 + 0x22,0x94);
        iStack_154 = local_1d8;
        iStack_150 = iStack_1d4;
        iStack_14c = iStack_1d0;
        local_134 = uVar10;
        local_130 = uVar16;
        iVar4 = FUN_01547e3c(0x118,4);
        FUN_016dd1aa(iVar4,&local_170,0x118);
        ppuVar9 = (undefined **)&DAT_018a7e78;
      }
      *param_1 = -0x7fffffd7;
      param_1[1] = iVar4;
      param_1[2] = (int)ppuVar9;
      goto LAB_0154ca38;
    }
  }
  else {
    FUN_015057bc(&local_1c8,param_4[5],param_4[6]);
    if (local_1c8 != 0x80000000) {
      if ((*(uint *)(iVar13 + 0x90) & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar13 + 0x94));
      }
      *(uint *)(iVar13 + 0x90) = local_1c8;
      *(undefined4 *)(iVar13 + 0x94) = uStack_1c4;
      *(undefined4 *)(iVar13 + 0x98) = uStack_1c0;
      goto LAB_0154c5f0;
    }
    local_16c = 0x190001;
    local_170 = -0x7fffffff;
    local_f8 = 4;
    FUN_01525ed4(iVar13,&local_170,*(char *)(iVar13 + 0x31) == '\x02');
    uVar23 = 0x21;
    *(undefined1 *)(iVar13 + 0x255) = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar23;
  *param_1 = (int)&DAT_8000001c;
  FUN_0154cd2c(&local_1d8);
LAB_0154bf08:
  FUN_015430a0(param_4);
  piVar6 = (int *)param_2[0x47];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01561b24(param_2[0x47]);
  }
  if (param_2[0x1f] != -0x80000000) {
    FUN_01544360(param_2 + 0x10);
  }
  if ((*(char *)(param_2 + 0x49) == '\0') && ((param_2[0x4a] & 0x7fffffff) != 0)) {
    thunk_FUN_016d3fb4(param_2[0x4b]);
  }
  puVar20 = (undefined4 *)param_2[0x54];
  uVar10 = param_2[0x53];
  pcVar11 = (code *)*puVar20;
  if (pcVar11 != (code *)0x0) {
    (*pcVar11)(uVar10);
  }
  if (puVar20[1] != 0) {
    thunk_FUN_016d3fb4(uVar10);
  }
  if ((param_2[0x4e] & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(param_2[0x4f]);
  }
  FUN_01547e60(param_2 + 0x22);
  iVar4 = param_2[0x56];
  puVar20 = (undefined4 *)(iVar4 + 4);
  for (iVar17 = param_2[0x57]; iVar17 != 0; iVar17 = iVar17 + -1) {
    if (puVar20[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar20);
    }
    puVar20 = puVar20 + 3;
  }
  if (param_2[0x55] != 0) {
    thunk_FUN_016d3fb4(iVar4);
  }
  if (param_2[0x58] != 0) {
    thunk_FUN_016d3fb4(param_2[0x59]);
  }
  thunk_FUN_016d3fb4(param_2);
  return;
LAB_0154c1d0:
  uVar23 = uVar24;
LAB_0154bec4:
  local_170 = -0x7fffffff;
  local_f8 = 4;
  local_16c = iVar17;
  FUN_01525ed4(iVar13,&local_170,*(char *)(iVar13 + 0x31) == '\x02');
  *(undefined1 *)(param_1 + 1) = uVar23;
  *(undefined1 *)(iVar13 + 0x255) = 1;
  *param_1 = (int)&DAT_8000001c;
  goto LAB_0154bf08;
}

