// FUN_013d56b8 @ 013d56b8 size=2120 calls_out=15 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013d56b8(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int unaff_r4;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  int *piVar20;
  uint local_194;
  uint local_18c;
  int local_188;
  uint local_158;
  uint local_154;
  int local_150;
  uint local_14c;
  int local_148;
  int iStack_144;
  int iStack_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int iStack_12c;
  int local_128;
  int local_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  undefined4 local_110 [7];
  undefined4 local_f4 [7];
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  int local_c0;
  uint local_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int local_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int local_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  iVar5 = FUN_013d2518(param_2);
  if (iVar5 != 0x7b) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_003ceed0,0x24,&DAT_01894e08);
  }
  iVar17 = *param_2;
  iVar13 = *(int *)(iVar17 + 0x54);
  iVar14 = *(int *)(iVar17 + 0x58);
  piVar20 = (int *)(iVar17 + 0x50);
  iVar5 = *piVar20;
  uVar18 = param_3[2];
  if (uVar18 == 0) {
    local_68 = *piVar20;
    iStack_64 = *(int *)(iVar17 + 0x54);
    iStack_60 = *(int *)(iVar17 + 0x58);
    iVar13 = param_2[2];
    iVar5 = param_2[1];
    local_5c = local_68;
    iStack_58 = iStack_64;
    local_54 = iStack_60;
    if (iVar13 < 0) {
      uVar9 = 0;
LAB_013d579c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar9,iVar13);
    }
    if (iVar13 == 0) {
      iVar14 = 0;
      iVar17 = 1;
    }
    else {
      iVar17 = thunk_FUN_016d4a50(iVar13);
      if (iVar17 == 0) {
        uVar9 = 1;
        goto LAB_013d579c;
      }
      iVar14 = iVar13;
    }
    FUN_016dd1aa(iVar17,iVar5,iVar13);
    param_1[10] = local_68;
    param_1[0xb] = iStack_64;
    param_1[0xc] = iStack_60;
    param_1[0xd] = local_5c;
    param_1[0xe] = iStack_58;
    param_1[0xf] = local_54;
    param_1[7] = iVar14;
    param_1[8] = iVar17;
    iVar11 = param_3[1];
    param_1[9] = iVar13;
    *param_1 = 0x1b;
    goto LAB_013d59a8;
  }
  iVar11 = param_3[1];
  param_3[2] = uVar18 - 1;
  puVar12 = (uint *)(iVar11 + (uVar18 - 1) * 8);
  uVar15 = *puVar12;
  uVar6 = puVar12[1];
  local_158 = uVar15;
  local_154 = uVar6;
  if (uVar15 < 2) {
    local_68 = *piVar20;
    iStack_64 = *(int *)(iVar17 + 0x54);
    iStack_60 = *(int *)(iVar17 + 0x58);
    piVar19 = (int *)param_2[2];
    iVar5 = param_2[1];
    local_5c = local_68;
    iStack_58 = iStack_64;
    local_54 = iStack_60;
    if ((int)piVar19 < 0) {
LAB_013d58a8:
      uVar9 = 0;
LAB_013d58ac:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar9,piVar19);
    }
    if (piVar19 != (int *)0x0) {
      iVar17 = thunk_FUN_016d4a50(piVar19);
      if (iVar17 != 0) {
        piVar20 = piVar19;
        goto LAB_013d5930;
      }
LAB_013d5ffc:
      uVar9 = 1;
      goto LAB_013d58ac;
    }
    piVar20 = (int *)0x0;
    iVar17 = 1;
LAB_013d5930:
    FUN_016dd1aa(iVar17,iVar5,piVar19);
    param_1[10] = local_68;
    param_1[0xb] = iStack_64;
    param_1[0xc] = iStack_60;
    param_1[0xd] = local_5c;
    param_1[0xe] = iStack_58;
    param_1[0xf] = local_54;
    iVar5 = 0x1b;
LAB_013d598c:
    param_1[7] = (int)piVar20;
    param_1[8] = iVar17;
    param_1[9] = (int)piVar19;
    *param_1 = iVar5;
  }
  else {
    iVar7 = FUN_013d2d20(param_2);
    if (iVar7 == 0) {
      piVar19 = (int *)param_2[2];
LAB_013d5880:
      iVar7 = param_2[1];
      local_54 = *(int *)(iVar17 + 0x58);
      local_5c = *piVar20;
      iStack_58 = *(int *)(iVar17 + 0x54);
      local_68 = iVar5;
      iStack_64 = iVar13;
      iStack_60 = iVar14;
      if ((int)piVar19 < 0) goto LAB_013d58a8;
      if (piVar19 == (int *)0x0) {
        iVar17 = 1;
        piVar20 = (int *)0x0;
      }
      else {
        iVar17 = thunk_FUN_016d4a50(piVar19);
        if (iVar17 == 0) goto LAB_013d5ffc;
        piVar20 = piVar19;
      }
      FUN_016dd1aa(iVar17,iVar7,piVar19);
      param_1[10] = local_68;
      param_1[0xb] = iStack_64;
      param_1[0xc] = iStack_60;
      param_1[0xd] = local_5c;
      param_1[0xe] = iStack_58;
      param_1[0xf] = local_54;
      iVar5 = 0x1a;
      goto LAB_013d598c;
    }
    FUN_013d2168(param_2);
    piVar19 = (int *)*piVar20;
    piVar8 = (int *)param_2[2];
    if (piVar19 == piVar8) goto LAB_013d5880;
    FUN_013d6e98(&local_68,param_2);
    local_f4[0] = 0x19;
    local_110[0] = 5;
    FUN_013d73e0(&local_150,&local_68,local_110,local_f4);
    if ((int *)*piVar20 == piVar8) {
      iVar7 = param_2[1];
      local_54 = *(int *)(iVar17 + 0x58);
      local_5c = *piVar20;
      iStack_58 = *(int *)(iVar17 + 0x54);
      if ((int)piVar8 < 0) {
        uVar9 = 0;
        piVar8 = param_1;
        local_68 = iVar5;
        iStack_64 = iVar13;
        iStack_60 = iVar14;
LAB_013d584c:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar9,piVar8);
      }
      if (piVar8 == (int *)0x0) {
        iVar17 = 1;
        piVar20 = (int *)0x0;
        local_68 = iVar5;
        iStack_64 = iVar13;
        iStack_60 = iVar14;
      }
      else {
        local_68 = iVar5;
        iStack_64 = iVar13;
        iStack_60 = iVar14;
        iVar17 = thunk_FUN_016d4a50(piVar8);
        if (iVar17 == 0) {
          uVar9 = 1;
          goto LAB_013d584c;
        }
        piVar20 = piVar8;
      }
      FUN_016dd1aa(iVar17,iVar7,piVar8);
      param_1[10] = local_68;
      param_1[0xb] = iStack_64;
      param_1[0xc] = iStack_60;
      param_1[0xd] = local_5c;
      param_1[0xe] = iStack_58;
      param_1[0xf] = local_54;
      param_1[7] = (int)piVar20;
      param_1[8] = iVar17;
      param_1[9] = (int)piVar8;
      *param_1 = 0x1a;
LAB_013d5c50:
      if (local_150 != 0x22) {
LAB_013d5c60:
        if (local_134 != 0) {
          thunk_FUN_016d3fb4(local_130);
        }
      }
    }
    else {
      iVar7 = FUN_013d2518(param_2);
      if (iVar7 == 0x2c) {
        iVar7 = FUN_013d2d20(param_2);
        if ((iVar7 == 0) || (FUN_013d2168(param_2), (int *)*piVar20 == piVar8)) {
          iStack_cc = *piVar20;
          uStack_c8 = *(undefined4 *)(iVar17 + 0x54);
          local_c4 = *(undefined4 *)(iVar17 + 0x58);
          local_c0 = 0x1a;
          local_d8 = iVar5;
          iStack_d4 = iVar13;
          iStack_d0 = iVar14;
          FUN_013d1ce4(&local_68,param_2[1],piVar8,&local_d8,&local_c0);
          *param_1 = local_68;
          param_1[1] = iStack_64;
          param_1[2] = iStack_60;
          param_1[3] = local_5c;
          param_1[4] = iStack_58;
          param_1[5] = local_54;
          param_1[6] = iStack_50;
          param_1[7] = iStack_4c;
          param_1[8] = iStack_48;
          param_1[9] = iStack_44;
          param_1[10] = local_40;
          param_1[0xb] = iStack_3c;
          param_1[0xc] = iStack_38;
          param_1[0xd] = iStack_34;
          param_1[0xe] = iStack_30;
          param_1[0xf] = iStack_2c;
          goto LAB_013d5c50;
        }
        iVar7 = FUN_013d2518(param_2);
        if (iVar7 == 0x7d) {
          if (local_150 == 0x22) goto LAB_013d5aa4;
          param_1[2] = local_148;
          param_1[3] = iStack_144;
          param_1[4] = iStack_140;
          param_1[5] = local_13c;
          param_1[6] = local_138;
          param_1[7] = local_134;
          param_1[8] = local_130;
          param_1[9] = iStack_12c;
          param_1[10] = local_128;
          param_1[0xb] = local_124;
          param_1[0xc] = iStack_120;
          param_1[0xd] = iStack_11c;
          param_1[0xe] = iStack_118;
          param_1[0xf] = iStack_114;
          *param_1 = local_150;
          param_1[1] = local_14c;
        }
        else {
          if (local_150 == 0x22) {
            local_18c = local_14c;
LAB_013d5cc0:
            local_188 = local_150;
            bVar3 = local_150 == 0x22;
            FUN_013d6e98(&local_68,param_2);
            FUN_013d73e0(&local_c0,&local_68,local_110,local_f4);
            if (local_c0 == 0x22) {
              bVar4 = true;
              piVar19 = (int *)*piVar20;
              local_194 = local_bc;
              goto joined_r0x013d5d24;
            }
            param_1[2] = local_b8;
            param_1[3] = iStack_b4;
            param_1[4] = iStack_b0;
            param_1[5] = iStack_ac;
            param_1[6] = local_a8;
            param_1[7] = iStack_a4;
            param_1[8] = iStack_a0;
            param_1[9] = iStack_9c;
            param_1[10] = iStack_98;
            param_1[0xb] = local_94;
            param_1[0xc] = iStack_90;
            param_1[0xd] = iStack_8c;
            param_1[0xe] = iStack_88;
            param_1[0xf] = iStack_84;
            *param_1 = local_c0;
            param_1[1] = local_bc;
            goto LAB_013d5db4;
          }
          if (local_150 == 0x19) {
            if (*(char *)(iVar17 + 0x67) != '\0') {
              local_18c = 0;
              if (local_134 != 0) {
                thunk_FUN_016d3fb4(local_130);
              }
              goto LAB_013d5cc0;
            }
            *param_1 = 0x19;
            param_1[1] = local_14c;
            param_1[2] = local_148;
            param_1[3] = iStack_144;
            param_1[4] = iStack_140;
            param_1[5] = local_13c;
            param_1[6] = local_138;
            param_1[7] = local_134;
            param_1[8] = local_130;
            param_1[9] = iStack_12c;
            param_1[10] = local_128;
            param_1[0xb] = local_124;
            param_1[0xc] = iStack_120;
            param_1[0xd] = iStack_11c;
            param_1[0xe] = iStack_118;
            param_1[0xf] = iStack_114;
          }
          else {
            param_1[2] = local_148;
            param_1[3] = iStack_144;
            param_1[4] = iStack_140;
            param_1[5] = local_13c;
            param_1[6] = local_138;
            param_1[7] = local_134;
            param_1[8] = local_130;
            param_1[9] = iStack_12c;
            param_1[10] = local_128;
            param_1[0xb] = local_124;
            param_1[0xc] = iStack_120;
            param_1[0xd] = iStack_11c;
            param_1[0xe] = iStack_118;
            param_1[0xf] = iStack_114;
            *param_1 = local_150;
            param_1[1] = local_14c;
          }
        }
      }
      else {
        if (local_150 != 0x22) {
          param_1[2] = local_148;
          param_1[3] = iStack_144;
          param_1[4] = iStack_140;
          param_1[5] = local_13c;
          param_1[6] = local_138;
          param_1[7] = local_134;
          param_1[8] = local_130;
          param_1[9] = iStack_12c;
          param_1[10] = local_128;
          param_1[0xb] = local_124;
          param_1[0xc] = iStack_120;
          param_1[0xd] = iStack_11c;
          param_1[0xe] = iStack_118;
          param_1[0xf] = iStack_114;
          *param_1 = local_150;
          param_1[1] = local_14c;
          goto LAB_013d59a0;
        }
LAB_013d5aa4:
        bVar4 = false;
        local_188 = 0x22;
        bVar3 = false;
        piVar19 = (int *)*piVar20;
        local_18c = local_14c;
joined_r0x013d5d24:
        if ((piVar19 == piVar8) || (iVar7 = FUN_013d2518(param_2), iVar7 != 0x7d)) {
          local_5c = *piVar20;
          iStack_58 = *(int *)(iVar17 + 0x54);
          local_54 = *(int *)(iVar17 + 0x58);
          iVar17 = param_2[1];
          local_68 = iVar5;
          iStack_64 = iVar13;
          iStack_60 = iVar14;
          FUN_01401878(&local_c0,piVar8,1,1);
          if (local_c0 == 1) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(local_bc,local_b8);
          }
          FUN_016dd1aa(local_b8,iVar17,piVar8);
          param_1[10] = local_68;
          param_1[0xb] = iStack_64;
          param_1[0xc] = iStack_60;
          param_1[0xd] = local_5c;
          param_1[0xe] = iStack_58;
          param_1[0xf] = local_54;
          param_1[7] = local_bc;
          param_1[8] = local_b8;
          param_1[9] = (int)piVar8;
          *param_1 = 0x1a;
          if (!bVar4) goto LAB_013d59a0;
        }
        else {
          iVar7 = FUN_013d7580(param_2);
          if ((iVar7 != 0) && (iVar7 = FUN_013d2518(param_2), iVar7 == 0x3f)) {
            FUN_013d2d20(param_2);
          }
          local_6c = *(undefined4 *)(iVar17 + 0x58);
          iStack_74 = *piVar20;
          local_70 = *(undefined4 *)(iVar17 + 0x54);
          local_80 = iVar5;
          iStack_7c = iVar13;
          iStack_78 = iVar14;
          if (!(bool)(bVar4 & local_194 < local_18c)) {
                    /* WARNING: Could not recover jumptable at 0x013d5ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_013d5de0 + *(int *)(&DAT_013d5de0 + uVar15 * 4)))(uVar6);
            return;
          }
          local_c0 = 0x18;
          FUN_013d1ce4(&local_68,param_2[1],piVar8,&local_80,&local_c0);
          *param_1 = local_68;
          param_1[1] = iStack_64;
          param_1[2] = iStack_60;
          param_1[3] = local_5c;
          param_1[4] = iStack_58;
          param_1[5] = local_54;
          param_1[6] = iStack_50;
          param_1[7] = iStack_4c;
          param_1[8] = iStack_48;
          param_1[9] = iStack_44;
          param_1[10] = local_40;
          param_1[0xb] = iStack_3c;
          param_1[0xc] = iStack_38;
          param_1[0xd] = iStack_34;
          param_1[0xe] = iStack_30;
          param_1[0xf] = iStack_2c;
        }
LAB_013d5db4:
        iVar5 = 0;
        if (bVar3) {
          iVar5 = local_188;
        }
        if (bVar3 && iVar5 != 0x22) goto LAB_013d5c60;
      }
    }
  }
LAB_013d59a0:
  FUN_013d6144(&local_158);
LAB_013d59a8:
  iVar5 = iVar11;
  if (uVar18 < 2) {
    uVar18 = 1;
  }
  while (uVar18 = uVar18 - 1, uVar18 != 0) {
    FUN_013e7690(iVar5);
    iVar5 = iVar5 + 8;
  }
  if (*param_3 == 0) {
    return;
  }
  if (iVar11 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar18 = *(byte *)(iVar11 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar6 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar13 = uVar6 - 0x10, uVar6 == 0)) {
    iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar6 = (uint)(*(byte *)(iVar11 + -3) >> 5);
  iVar17 = *(int *)(iVar5 + 8) + 0x10;
  iVar14 = iVar13 * uVar18 + iVar13 + -4;
  iVar13 = iVar17 + iVar14;
  if (4 < uVar6) {
    if (uVar6 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar6 = *(uint *)(iVar13 + -4);
    if (uVar6 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar13 - iVar11) < uVar6) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 - uVar6) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar17 + iVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar6 = 1 << uVar18;
  *(undefined1 *)(iVar11 + -3) = 0xff;
  *(undefined2 *)(iVar11 + -2) = 0;
  do {
    uVar16 = *(uint *)(iVar5 + 0x10);
    uVar15 = *(uint *)(iVar5 + 0xc) | uVar16;
    if ((uVar6 & uVar15) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar16 == 0) || (uVar15 + uVar6 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar18);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar10 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar10;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar10 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar6 + uVar16;
      return;
    }
    puVar12 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar12);
      uVar15 = *puVar12;
      if (uVar16 != uVar15) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar12);
    } while (!bVar3);
    *puVar12 = uVar6 + uVar16;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar16 == uVar15) {
      return;
    }
  } while( true );
}

