// FUN_013d262c @ 013d262c size=1316 calls_out=12 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013d262c(undefined4 *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int unaff_r4;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined8 uVar17;
  int local_16c;
  int local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int local_120;
  int local_11c;
  int local_118;
  int iStack_114;
  int local_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  int iStack_100;
  int local_f8;
  int local_f4;
  int local_f0;
  undefined8 local_88;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 local_5c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar15 = *param_2;
  iVar4 = *(int *)(iVar15 + 0x10);
  iVar10 = *(int *)(iVar15 + 0x54);
  iVar11 = *(int *)(iVar15 + 0x58);
  param_3[6] = *(int *)(iVar15 + 0x50);
  param_3[7] = iVar10;
  param_3[8] = iVar11;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01894c08);
  }
  *(undefined4 *)(iVar15 + 0x10) = 0xffffffff;
  if (*(int *)(iVar15 + 0x1c) == 0) {
    local_f8 = -0x7fffffff;
LAB_013d26fc:
    local_88._0_4_ = *param_3;
    local_88._4_4_ = param_3[1];
    iStack_80 = param_3[2];
    iStack_7c = param_3[3];
    local_78 = param_3[4];
    iStack_74 = param_3[5];
    iStack_70 = param_3[6];
    iStack_6c = param_3[7];
    iStack_68 = param_3[8];
    local_15c = FUN_013f667c();
  }
  else {
    iVar4 = *(int *)(iVar15 + 0x1c) + -1;
    *(int *)(iVar15 + 0x1c) = iVar4;
    iVar4 = *(int *)(iVar15 + 0x18) + iVar4 * 0x70;
    FUN_016dd1aa(&local_f8,iVar4,0x70);
    if (local_f8 != -0x80000000) {
      if (local_f8 != -0x7fffffff) {
        FUN_016dd1aa(&local_88,iVar4 + 0x24,0x48);
        local_40 = *(undefined4 *)(iVar4 + 0x54);
        uStack_3c = *(undefined4 *)(iVar4 + 0x58);
        uStack_38 = *(undefined4 *)(iVar4 + 0x5c);
        uStack_34 = *(undefined4 *)(iVar4 + 0x60);
        uStack_30 = *(undefined4 *)(iVar4 + 100);
        uStack_2c = *(undefined4 *)(iVar4 + 0x68);
        iVar4 = param_2[2];
        if (iVar4 < 0) {
          uVar5 = 0;
LAB_013d26e8:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar5,iVar4);
        }
        iVar10 = param_2[1];
        if (iVar4 == 0) {
          iVar11 = 1;
          local_16c = 0;
        }
        else {
          iVar11 = thunk_FUN_016d4a50(iVar4);
          if (iVar11 == 0) {
            uVar5 = 1;
            goto LAB_013d26e8;
          }
          local_16c = iVar4;
        }
        FUN_016dd1aa(iVar11,iVar10,iVar4);
        param_1[10] = local_40;
        param_1[0xb] = uStack_3c;
        param_1[0xc] = uStack_38;
        param_1[0xd] = uStack_34;
        param_1[0xe] = uStack_30;
        param_1[0xf] = uStack_2c;
        param_1[7] = local_16c;
        param_1[8] = iVar11;
        param_1[9] = iVar4;
        *param_1 = 0x15;
        uVar9 = 1;
        if ((int)(uint)local_88 < 0) {
          uVar9 = (uint)local_88 ^ 0x80000000;
        }
        if (uVar9 != 0) {
          if (uVar9 == 1) {
            iVar4 = 4;
          }
          else {
            iVar4 = 8;
            local_88._0_4_ = local_88._4_4_;
          }
          if ((uint)local_88 != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)((int)&local_88 + iVar4));
          }
        }
        FUN_013d6144(local_5c);
        thunk_FUN_016d3fb4(local_5c);
        local_f0 = local_f0 + 1;
        iVar4 = local_f4;
        while (local_f0 = local_f0 + -1, local_f0 != 0) {
          FUN_013e7690(iVar4);
          iVar4 = iVar4 + 8;
        }
        if (local_f8 != 0) {
          thunk_FUN_016d3fb4(local_f4);
        }
        iVar10 = param_3[1];
        iVar11 = param_3[2] + 1;
        *(int *)(iVar15 + 0x10) = *(int *)(iVar15 + 0x10) + 1;
        iVar4 = iVar10;
        while (iVar11 = iVar11 + -1, iVar11 != 0) {
          FUN_013e7690(iVar4);
          iVar4 = iVar4 + 8;
        }
        if (*param_3 == 0) {
          return;
        }
        if (iVar10 == 0) {
          return;
        }
        iVar4 = FUN_016d3bc8();
        uVar9 = *(byte *)(iVar10 + -3) & 0x1f;
        if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
           (uVar13 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar11 = uVar13 - 0x10, uVar13 == 0)) {
          iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2)
                   << 4;
        }
        uVar13 = (uint)(*(byte *)(iVar10 + -3) >> 5);
        iVar7 = *(int *)(iVar4 + 8) + 0x10;
        iVar15 = iVar11 * uVar9 + iVar11 + -4;
        iVar11 = iVar7 + iVar15;
        if (4 < uVar13) {
          if (uVar13 != 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar1)();
          }
          uVar13 = *(uint *)(iVar11 + -4);
          if (uVar13 < 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar1)();
          }
          if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar1)();
          }
        }
        if ((uint)(iVar11 - iVar10) < uVar13) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar1)();
        }
        if (*(char *)(iVar11 - uVar13) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar1)();
        }
        if (*(char *)(iVar7 + iVar15) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar1)();
        }
        bVar2 = *(byte *)(iVar4 + 0x14);
        uVar13 = 1 << uVar9;
        *(undefined1 *)(iVar10 + -3) = 0xff;
        *(undefined2 *)(iVar10 + -2) = 0;
        do {
          uVar14 = *(uint *)(iVar4 + 0x10);
          uVar12 = *(uint *)(iVar4 + 0xc) | uVar14;
          if ((uVar13 & uVar12) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar1)();
          }
          if ((uVar14 == 0) || (uVar12 + uVar13 == (2 << (bVar2 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar4,uVar9);
            FUN_016dddc0(&DAT_018ddd48);
            if (unaff_r4 == 0) {
              return;
            }
            puVar8 = (undefined4 *)FUN_016d2bc8();
            uVar5 = *puVar8;
            FUN_016d6ac4(uStack_28,unaff_r4);
            *puVar8 = uVar5;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar4 + 0x10) = uVar13 + uVar14;
            return;
          }
          puVar16 = (uint *)(iVar4 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar16);
            uVar12 = *puVar16;
            if (uVar14 != uVar12) goto LAB_016d409c;
            bVar3 = (bool)hasExclusiveAccess(puVar16);
          } while (!bVar3);
          *puVar16 = uVar13 + uVar14;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar14 == uVar12) {
            return;
          }
        } while( true );
      }
      goto LAB_013d26fc;
    }
    local_120 = *(int *)(iVar4 + 4);
    local_11c = *(int *)(iVar4 + 8);
    local_118 = *(int *)(iVar4 + 0xc);
    iStack_114 = *(int *)(iVar4 + 0x10);
    local_110 = *(int *)(iVar4 + 0x14);
    iStack_10c = *(int *)(iVar4 + 0x18);
    local_108 = *(int *)(iVar15 + 0x50);
    iStack_104 = *(int *)(iVar15 + 0x54);
    iStack_100 = *(int *)(iVar15 + 0x58);
    local_88._0_4_ = *param_3;
    local_88._4_4_ = param_3[1];
    iStack_80 = param_3[2];
    iStack_7c = param_3[3];
    local_78 = param_3[4];
    iStack_74 = param_3[5];
    iStack_70 = param_3[6];
    iStack_6c = param_3[7];
    iStack_68 = param_3[8];
    uVar17 = FUN_013f667c();
    iVar4 = local_118;
    local_88 = uVar17;
    if (local_118 == local_120) {
      FUN_01401514(&local_120);
    }
    *(undefined8 *)(local_11c + iVar4 * 8) = uVar17;
    local_118 = iVar4 + 1;
    piVar6 = (int *)thunk_FUN_016d4a50(0x24);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x24);
    }
    *piVar6 = local_120;
    piVar6[1] = local_11c;
    piVar6[2] = local_118;
    piVar6[3] = iStack_114;
    piVar6[4] = local_110;
    piVar6[5] = iStack_10c;
    piVar6[6] = local_108;
    piVar6[7] = iStack_104;
    piVar6[8] = iStack_100;
    local_15c = CONCAT44(piVar6,10);
  }
  local_160 = 0x22;
  if (*(int *)(iVar15 + 0x1c) != 0) {
    iVar4 = *(int *)(iVar15 + 0x1c) + -1;
    *(int *)(iVar15 + 0x1c) = iVar4;
    iVar10 = *(int *)(iVar15 + 0x18) + iVar4 * 0x70;
    FUN_016dd1aa(&local_f8,iVar10,0x70);
    iVar4 = local_f8;
    if (local_f8 != -0x7fffffff) {
      if (local_f8 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_01894bf8);
      }
      FUN_016dd1aa(&local_88,iVar10 + 0x24,0x48);
      local_40 = *(undefined4 *)(iVar10 + 0x54);
      uStack_3c = *(undefined4 *)(iVar10 + 0x58);
      uStack_38 = *(undefined4 *)(iVar10 + 0x5c);
      uStack_34 = *(undefined4 *)(iVar10 + 0x60);
      uStack_30 = *(undefined4 *)(iVar10 + 100);
      uStack_2c = *(undefined4 *)(iVar10 + 0x68);
      iVar10 = param_2[2];
      if (iVar10 < 0) {
        uVar5 = 0;
LAB_013d2850:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar5,iVar10);
      }
      iVar11 = param_2[1];
      if (iVar10 == 0) {
        iVar7 = 1;
        local_168 = 0;
      }
      else {
        iVar7 = thunk_FUN_016d4a50(iVar10);
        if (iVar7 == 0) {
          uVar5 = 1;
          goto LAB_013d2850;
        }
        local_168 = iVar10;
      }
      FUN_016dd1aa(iVar7,iVar11,iVar10);
      param_1[10] = local_40;
      param_1[0xb] = uStack_3c;
      param_1[0xc] = uStack_38;
      param_1[0xd] = uStack_34;
      param_1[0xe] = uStack_30;
      param_1[0xf] = uStack_2c;
      param_1[7] = local_168;
      *param_1 = 0x15;
      uVar9 = 1;
      param_1[8] = iVar7;
      if ((int)(uint)local_88 < 0) {
        uVar9 = (uint)local_88 ^ 0x80000000;
      }
      param_1[9] = iVar10;
      if (uVar9 != 0) {
        if (uVar9 == 1) {
          iVar10 = 4;
          uVar9 = (uint)local_88;
        }
        else {
          iVar10 = 8;
          uVar9 = local_88._4_4_;
        }
        if (uVar9 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)((int)&local_88 + iVar10));
        }
      }
      FUN_013d6144(local_5c);
      thunk_FUN_016d3fb4(local_5c);
      FUN_013d6144((uint)&local_160 | 4);
      *(int *)(iVar15 + 0x10) = *(int *)(iVar15 + 0x10) + 1;
      if (iVar4 == -0x80000000) {
        FUN_013d1d80(&local_f8);
        return;
      }
      if (iVar4 != -0x7fffffff) {
        iVar11 = local_f0 + 1;
        iVar10 = local_f4;
        while (iVar11 = iVar11 + -1, iVar11 != 0) {
          FUN_013e7690(iVar10);
          iVar10 = iVar10 + 8;
        }
        if (iVar4 != 0) {
          thunk_FUN_016d3fb4(local_f4);
          return;
        }
      }
      return;
    }
  }
  *param_1 = local_160;
  *(undefined8 *)(param_1 + 1) = local_15c;
  param_1[3] = uStack_154;
  param_1[4] = uStack_150;
  param_1[5] = local_14c;
  param_1[6] = uStack_148;
  param_1[7] = uStack_144;
  param_1[8] = uStack_140;
  param_1[9] = uStack_13c;
  param_1[10] = local_138;
  param_1[0xb] = uStack_134;
  param_1[0xc] = uStack_130;
  param_1[0xd] = uStack_12c;
  param_1[0xe] = uStack_128;
  param_1[0xf] = uStack_124;
  *(int *)(iVar15 + 0x10) = *(int *)(iVar15 + 0x10) + 1;
  return;
}

