// FUN_013d3da4 @ 013d3da4 size=1936 calls_out=15 calls_in=1
// strings: 

void FUN_013d3da4(undefined4 *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined *puVar12;
  uint *puVar13;
  int unaff_r4;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined8 uVar21;
  int local_1dc;
  uint local_1d8;
  int local_1d4;
  uint local_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined1 auStack_1b0 [44];
  undefined8 *local_184;
  uint local_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  uint local_168;
  undefined4 *local_164;
  uint local_160;
  uint uStack_15c;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  undefined8 local_140;
  int iStack_138;
  int iStack_134;
  int local_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  byte local_d4;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  undefined1 auStack_b0 [72];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 *local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  local_1dc = FUN_013d2518(param_2);
  if (local_1dc != 0x29) {
    FUN_013ff7ac(&local_1dc,&DAT_00568754,&DAT_01894f18);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x13d454c);
    (*pcVar1)();
  }
  iVar17 = *param_2;
  if (*(int *)(iVar17 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01894f08);
  }
  iVar4 = *(int *)(iVar17 + 0x1c);
  *(undefined4 *)(iVar17 + 0x10) = 0xffffffff;
  if (iVar4 != 0) {
    iVar14 = iVar4 + -1;
    *(int *)(iVar17 + 0x1c) = iVar14;
    puVar13 = (uint *)(*(int *)(iVar17 + 0x18) + iVar14 * 0x70);
    uVar18 = *puVar13;
    if (uVar18 == 0x80000000) {
      local_168 = puVar13[1];
      local_164 = (undefined4 *)puVar13[2];
      local_160 = puVar13[3];
      uStack_15c = puVar13[4];
      local_158 = puVar13[5];
      uStack_154 = puVar13[6];
      uStack_150 = puVar13[7];
      uStack_14c = puVar13[8];
      uStack_148 = puVar13[9];
      if (iVar14 == 0) {
        local_140._0_4_ = 0x80000001;
      }
      else {
        *(int *)(iVar17 + 0x1c) = iVar4 + -2;
        iVar4 = *(int *)(iVar17 + 0x18) + (iVar4 + -2) * 0x70;
        FUN_016dd1aa(&local_140,iVar4,0x70);
        if (-0x7fffffff < (int)(uint)local_140) {
          local_d0 = *(uint *)(iVar4 + 4);
          uStack_cc = *(uint *)(iVar4 + 8);
          uStack_c8 = *(uint *)(iVar4 + 0xc);
          uStack_c4 = *(uint *)(iVar4 + 0x10);
          local_c0 = *(uint *)(iVar4 + 0x14);
          uStack_bc = *(uint *)(iVar4 + 0x18);
          uStack_b8 = *(uint *)(iVar4 + 0x1c);
          uStack_b4 = *(uint *)(iVar4 + 0x20);
          FUN_016dd1aa(auStack_b0,iVar4 + 0x24,0x48);
          puVar9 = (undefined4 *)((uint)&local_168 | 4);
          local_68 = *puVar9;
          uStack_64 = puVar9[1];
          uStack_60 = puVar9[2];
          uStack_5c = puVar9[3];
          local_58 = puVar9[4];
          uStack_54 = puVar9[5];
          uStack_50 = puVar9[6];
          uStack_4c = puVar9[7];
          uVar15 = local_168;
          goto LAB_013d3fa0;
        }
      }
      uVar5 = (uint)local_140;
      uVar16 = *(uint *)(iVar17 + 0x50);
      uVar15 = FUN_013d2518(param_2);
      uVar18 = 1;
      if (0x7f < uVar15) {
        uVar18 = 2;
      }
      if ((0x7ff < uVar15) && (uVar18 = 4, uVar15 < 0x10000)) {
        uVar18 = 3;
      }
      if (CARRY4(uVar18,uVar16)) {
        puVar12 = &DAT_01894f38;
LAB_013d4508:
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(puVar12);
      }
      iVar4 = *(int *)(iVar17 + 0x58);
      if (iVar4 == -1) {
        puVar12 = &DAT_01894f28;
        goto LAB_013d4508;
      }
      iVar6 = *(int *)(iVar17 + 0x54);
      iVar14 = FUN_013d2518(param_2);
      iVar19 = param_2[2];
      local_1d8 = *(uint *)(iVar17 + 0x50);
      local_1d4 = *(int *)(iVar17 + 0x54);
      local_1d0 = *(uint *)(iVar17 + 0x58);
      iVar4 = iVar4 + 1;
      if (iVar14 == 10) {
        iVar6 = iVar6 + 1;
      }
      iVar20 = param_2[1];
      if (iVar14 == 10) {
        iVar4 = 1;
      }
      if (iVar19 < 0) {
        uVar7 = 0;
LAB_013d4278:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar7,iVar19);
      }
      if (iVar19 == 0) {
        iVar8 = 1;
        iVar14 = 0;
      }
      else {
        iVar8 = thunk_FUN_016d4a50(iVar19);
        if (iVar8 == 0) {
          uVar7 = 1;
          goto LAB_013d4278;
        }
        iVar14 = iVar19;
      }
      FUN_016dd1aa(iVar8,iVar20,iVar19);
      param_1[0xf] = iVar4;
      param_1[10] = local_1d8;
      param_1[0xb] = local_1d4;
      param_1[0xc] = local_1d0;
      param_1[0xd] = uVar18 + uVar16;
      param_1[7] = iVar14;
      param_1[8] = iVar8;
      param_1[9] = iVar19;
      param_1[0xe] = iVar6;
      *param_1 = 0x16;
      if (uVar5 == 0x80000000) {
        FUN_013d1d80(&local_140);
      }
      puVar9 = local_164;
      iVar4 = local_160 + 1;
      puVar11 = local_164;
      while (iVar4 = iVar4 + -1, iVar4 != 0) {
        FUN_013e7690(puVar11);
        puVar11 = puVar11 + 2;
      }
      if (local_168 != 0) {
        thunk_FUN_016d3fb4(puVar9);
      }
      goto LAB_013d41a4;
    }
    if (uVar18 != 0x80000001) {
      uVar5 = puVar13[0x1b];
      local_d0 = puVar13[1];
      uStack_cc = puVar13[2];
      uStack_c8 = puVar13[3];
      uStack_c4 = puVar13[4];
      local_c0 = puVar13[5];
      uStack_bc = puVar13[6];
      uStack_b8 = puVar13[7];
      uStack_b4 = puVar13[8];
      FUN_016dd1aa(auStack_b0,puVar13 + 9,0x48);
      uVar15 = 0x80000000;
      local_140._0_4_ = uVar18;
      local_d4 = (byte)uVar5;
LAB_013d3fa0:
      puVar13 = (uint *)((uint)&local_1d8 | 4);
      *puVar13 = local_d0;
      puVar13[1] = uStack_cc;
      puVar13[2] = uStack_c8;
      puVar13[3] = uStack_c4;
      puVar13[4] = local_c0;
      puVar13[5] = uStack_bc;
      puVar13[6] = uStack_b8;
      puVar13[7] = uStack_b4;
      local_1d8 = (uint)local_140;
      FUN_016dd1aa(auStack_1b0,auStack_b0,0x48);
      puVar9 = (undefined4 *)((uint)&local_168 | 4);
      *puVar9 = local_68;
      puVar9[1] = uStack_64;
      puVar9[2] = uStack_60;
      puVar9[3] = uStack_5c;
      puVar9[4] = local_58;
      puVar9[5] = uStack_54;
      puVar9[6] = uStack_50;
      puVar9[7] = uStack_4c;
      param_3[6] = *(uint *)(iVar17 + 0x50);
      iVar4 = *(int *)(iVar17 + 0x58);
      *(byte *)(iVar17 + 100) = local_d4 & 1;
      param_3[7] = *(int *)(iVar17 + 0x54);
      param_3[8] = iVar4;
      local_168 = uVar15;
      FUN_013d2d20(param_2);
      local_174 = *(uint *)(iVar17 + 0x50);
      uStack_170 = *(undefined4 *)(iVar17 + 0x54);
      uStack_16c = *(undefined4 *)(iVar17 + 0x58);
      if (uVar15 == 0x80000000) {
        local_140._0_4_ = *param_3;
        local_140._4_4_ = (uint *)param_3[1];
        iStack_138 = param_3[2];
        iStack_134 = param_3[3];
        local_130 = param_3[4];
        iStack_12c = param_3[5];
        iStack_128 = param_3[6];
        iStack_124 = param_3[7];
        iStack_120 = param_3[8];
        uVar21 = FUN_013f667c();
        local_140 = uVar21;
        puVar10 = (undefined8 *)thunk_FUN_016d4a50(8);
        if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,8);
        }
        *puVar10 = uVar21;
        FUN_013d6144(local_184);
        thunk_FUN_016d3fb4(local_184);
        local_184 = puVar10;
        goto LAB_013d4350;
      }
      local_48 = local_168;
      local_44 = local_164;
      local_40 = local_160;
      local_3c = uStack_15c;
      local_38 = local_158;
      uStack_34 = uStack_154;
      local_30 = param_3[6];
      uStack_2c = param_3[7];
      uStack_28 = param_3[8];
      local_140._0_4_ = *param_3;
      local_140._4_4_ = (uint *)param_3[1];
      iStack_138 = param_3[2];
      iStack_134 = param_3[3];
      local_130 = param_3[4];
      iStack_12c = param_3[5];
      iStack_128 = param_3[6];
      iStack_124 = param_3[7];
      iStack_120 = param_3[8];
      uVar21 = FUN_013f667c();
      uVar18 = local_40;
      local_140 = uVar21;
      if (local_40 == local_48) {
        FUN_01401514(&local_48);
      }
      puVar9 = local_44;
      uVar5 = local_48;
      *(undefined8 *)(local_44 + uVar18 * 2) = uVar21;
      local_40 = uVar18 + 1;
      if (uVar18 == 0xffffffff) {
        puVar13 = (uint *)thunk_FUN_016d4a50(0x18);
        if (puVar13 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x18);
        }
        uVar7 = 0;
        *puVar13 = local_3c;
        puVar13[1] = local_38;
        puVar13[2] = uStack_34;
        puVar13[3] = local_30;
        puVar13[4] = uStack_2c;
        puVar13[5] = uStack_28;
        if (uVar5 != 0) goto LAB_013d42dc;
      }
      else if (uVar18 == 0) {
        uVar7 = *local_44;
        puVar13 = (uint *)local_44[1];
LAB_013d42dc:
        thunk_FUN_016d3fb4(puVar9);
      }
      else {
        puVar13 = (uint *)thunk_FUN_016d4a50(0x24);
        if (puVar13 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x24);
        }
        *puVar13 = local_48;
        puVar13[1] = (uint)local_44;
        puVar13[2] = local_40;
        puVar13[3] = local_3c;
        uVar7 = 10;
        puVar13[4] = local_38;
        puVar13[5] = uStack_34;
        puVar13[6] = local_30;
        puVar13[7] = uStack_2c;
        puVar13[8] = uStack_28;
      }
      local_140._0_4_ = uVar7;
      local_140._4_4_ = puVar13;
      puVar10 = (undefined8 *)thunk_FUN_016d4a50(8);
      if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,8);
      }
      *(undefined4 *)puVar10 = uVar7;
      *(uint **)((int)puVar10 + 4) = puVar13;
      FUN_013d6144(local_184);
      thunk_FUN_016d3fb4(local_184);
      local_184 = puVar10;
LAB_013d4350:
      iVar4 = thunk_FUN_016d4a50(0x48);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x48);
      }
      FUN_016dd1aa(iVar4,auStack_1b0,0x48);
      local_140._0_4_ = 9;
      if (local_1d0 == local_1d8) {
        local_140._4_4_ = (uint *)iVar4;
        FUN_01401514(&local_1d8);
      }
      puVar9 = (undefined4 *)(local_1d4 + local_1d0 * 8);
      *puVar9 = 9;
      puVar9[1] = iVar4;
      param_1[1] = local_1d8;
      param_1[2] = local_1d4;
      param_1[3] = local_1d0 + 1;
      param_1[4] = uStack_1cc;
      param_1[5] = local_1c8;
      param_1[6] = uStack_1c4;
      param_1[7] = uStack_1c0;
      param_1[8] = uStack_1bc;
      param_1[9] = uStack_1b8;
      *param_1 = 0x22;
      *(int *)(iVar17 + 0x10) = *(int *)(iVar17 + 0x10) + 1;
      return;
    }
  }
  uVar15 = *(uint *)(iVar17 + 0x50);
  uVar5 = FUN_013d2518(param_2);
  uVar18 = 1;
  if (0x7f < uVar5) {
    uVar18 = 2;
  }
  if ((0x7ff < uVar5) && (uVar18 = 4, uVar5 < 0x10000)) {
    uVar18 = 3;
  }
  if (CARRY4(uVar18,uVar15)) {
    puVar12 = &DAT_01894f38;
  }
  else {
    iVar4 = *(int *)(iVar17 + 0x58);
    if (iVar4 != -1) {
      iVar14 = *(int *)(iVar17 + 0x54);
      iVar6 = FUN_013d2518(param_2);
      iVar20 = param_2[2];
      local_140._0_4_ = *(uint *)(iVar17 + 0x50);
      local_140._4_4_ = *(uint **)(iVar17 + 0x54);
      iStack_138 = *(undefined4 *)(iVar17 + 0x58);
      iVar4 = iVar4 + 1;
      iVar19 = param_2[1];
      if (iVar6 == 10) {
        iVar14 = iVar14 + 1;
        iVar4 = 1;
      }
      if (iVar20 < 0) {
        uVar7 = 0;
LAB_013d3e9c:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar7,iVar20);
      }
      if (iVar20 == 0) {
        iVar6 = 0;
        iVar8 = 1;
      }
      else {
        iVar8 = thunk_FUN_016d4a50(iVar20);
        if (iVar8 == 0) {
          uVar7 = 1;
          goto LAB_013d3e9c;
        }
        iVar6 = iVar20;
      }
      FUN_016dd1aa(iVar8,iVar19,iVar20);
      param_1[0xf] = iVar4;
      param_1[7] = iVar6;
      param_1[10] = (uint)local_140;
      param_1[0xb] = local_140._4_4_;
      param_1[0xc] = iStack_138;
      param_1[0xd] = uVar18 + uVar15;
      param_1[8] = iVar8;
      param_1[9] = iVar20;
      param_1[0xe] = iVar14;
      *param_1 = 0x16;
LAB_013d41a4:
      iVar14 = param_3[1];
      iVar4 = param_3[2] + 1;
      *(int *)(iVar17 + 0x10) = *(int *)(iVar17 + 0x10) + 1;
      iVar17 = iVar14;
      while (iVar4 = iVar4 + -1, iVar4 != 0) {
        FUN_013e7690(iVar17);
        iVar17 = iVar17 + 8;
      }
      if (*param_3 == 0) {
        return;
      }
      if (iVar14 == 0) {
        return;
      }
      iVar17 = FUN_016d3bc8();
      uVar18 = *(byte *)(iVar14 + -3) & 0x1f;
      if (((*(byte *)(iVar17 + 0x14) & 0x1f) != 0) ||
         (uVar5 = *(uint *)(iVar17 + 0x14) & 0xfffff000, iVar4 = uVar5 - 0x10, uVar5 == 0)) {
        iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar17 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar5 = (uint)(*(byte *)(iVar14 + -3) >> 5);
      iVar19 = *(int *)(iVar17 + 8) + 0x10;
      iVar6 = iVar4 * uVar18 + iVar4 + -4;
      iVar4 = iVar19 + iVar6;
      if (4 < uVar5) {
        if (uVar5 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar5 = *(uint *)(iVar4 + -4);
        if (uVar5 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar4 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar4 - iVar14) < uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar4 - uVar5) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar19 + iVar6) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar17 + 0x14);
      uVar5 = 1 << uVar18;
      *(undefined1 *)(iVar14 + -3) = 0xff;
      *(undefined2 *)(iVar14 + -2) = 0;
      do {
        uVar16 = *(uint *)(iVar17 + 0x10);
        uVar15 = *(uint *)(iVar17 + 0xc) | uVar16;
        if ((uVar5 & uVar15) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar16 == 0) || (uVar15 + uVar5 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar17,uVar18);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar9 = (undefined4 *)FUN_016d2bc8();
          uVar7 = *puVar9;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar9 = uVar7;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar17 + 0x10) = uVar5 + uVar16;
          return;
        }
        puVar13 = (uint *)(iVar17 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar13);
          uVar15 = *puVar13;
          if (uVar16 != uVar15) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar13);
        } while (!bVar3);
        *puVar13 = uVar5 + uVar16;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar16 == uVar15) {
          return;
        }
      } while( true );
    }
    puVar12 = &DAT_01894f28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa444(puVar12);
}

