// FUN_00656340 @ 00656340 size=3432 calls_out=14 calls_in=2
// strings: internal error: entered unreachable code | internal error: entered unreachable code

void FUN_00656340(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  uint *puVar17;
  int iVar18;
  int *piVar19;
  uint uVar20;
  int *piVar21;
  uint uVar22;
  int *piVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 uVar26;
  uint unaff_r11;
  undefined *puVar27;
  uint uVar28;
  bool bVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  int local_e0;
  uint local_dc;
  undefined *local_d8;
  code *local_d4;
  byte local_d0;
  code *local_cc;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8 [4];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  uint local_98;
  uint uStack_94;
  int iStack_90;
  int local_8c;
  int local_88;
  int iStack_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  byte *local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  int local_50;
  int iStack_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined2 local_2c;
  bool local_2a;
  undefined1 local_29 [5];
  
  if (*(char *)((int)param_2 + 0x17d) == '\0') {
    *param_1 = 0;
    return;
  }
  uVar12 = (uint)*(byte *)(param_2 + 0x5f);
  puVar25 = &local_68;
  if (uVar12 == 0) {
    if (*param_2 != -0x80000000) {
      if (param_2[3] != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_01304210(0,&DAT_0056ed00,param_2 + 3,0);
      }
      uVar12 = param_2[2];
      pbVar13 = (byte *)param_2[1];
      if (uVar12 != 0) {
        uVar22 = 1;
        pbVar10 = pbVar13 + uVar12;
        uVar8 = (uint)*pbVar13;
        bVar29 = false;
        local_c0 = 1;
        pbVar16 = pbVar13;
        local_c4 = uVar8;
        do {
          if (bVar29) {
            if (pbVar16 == pbVar10) goto LAB_00656cfc;
          }
          else {
            if ((uint)((int)pbVar10 - (int)pbVar16) <= uVar22) goto LAB_00656cfc;
            pbVar16 = pbVar16 + uVar22;
          }
          local_c0 = local_c0 << 1;
          uVar22 = 0;
          bVar29 = true;
          local_c4 = (uint)*pbVar16 + local_c4 * 2;
          pbVar16 = pbVar16 + 1;
        } while( true );
      }
      uVar8 = 0;
      puVar24 = (undefined4 *)0x0;
      unaff_r11 = 0;
      local_cc = (code *)&LAB_00664244;
      puVar25 = (undefined4 *)0x0;
      local_c0 = 1;
      iVar18 = 1;
      local_d8 = (undefined *)0x0;
      local_c4 = 0;
      local_bc._0_1_ = 0;
      local_d0 = 0;
      local_dc = 0;
      local_2c = 0;
      local_30 = 0;
      local_d4 = (code *)0x0;
      goto LAB_00656448;
    }
    iVar18 = param_2[0x4f];
    piVar21 = (int *)0x0;
    *param_1 = 0;
    if (iVar18 == -0x80000000) {
      uVar8 = 0;
      uVar22 = 0xffffffff;
    }
    else {
      uVar22 = param_2[0x51];
      uVar8 = param_2[0x55];
      FUN_00660fa8(&local_98);
      if (local_98 != 0x80000000) {
        local_60 = local_98;
        local_5c = uStack_94;
        local_50 = local_88;
        iStack_4c = iStack_84;
        local_d8 = *(undefined **)(local_80 + 0x10);
        iVar14 = *(int *)(local_80 + 0x1c);
        local_48 = local_80;
        iVar18 = *(int *)(local_80 + 0x24);
        iVar7 = *(int *)(local_8c + 0x10);
        local_64 = &DAT_00000001;
        local_68 = &DAT_00000001;
        local_38 = local_70;
        local_34 = local_6c;
        local_3c = local_74;
        local_40 = local_78;
        local_44 = local_7c;
        local_54 = local_8c;
        local_58 = iStack_90;
        piVar21 = (int *)thunk_FUN_01be5118(0x38);
        if (piVar21 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x38);
        }
        *piVar21 = (int)local_68;
        piVar21[1] = (int)local_64;
        piVar21[2] = local_60;
        piVar21[3] = local_5c;
        piVar21[4] = local_58;
        piVar21[5] = local_54;
        piVar21[6] = local_50;
        piVar21[7] = iStack_4c;
        piVar21[8] = local_48;
        piVar21[9] = local_44;
        piVar21[10] = local_40;
        piVar21[0xb] = local_3c;
        piVar21[0xc] = local_38;
        piVar21[0xd] = local_34;
        local_e0 = iVar7 * 8 + iStack_90 * 0xc + (int)local_d8 * 0xc + iVar14 * 4 + iVar18;
        if (local_7c != 0) {
          local_e0 = local_e0 + local_74;
        }
      }
    }
    local_c0 = (uint)(1 < uVar8);
    uVar8 = (uint)(uVar22 < 0x11);
    local_c4 = uVar8;
  }
  else {
    piVar21 = (int *)0x0;
    local_c0 = 0;
    local_c4 = 0;
    uVar8 = uVar12;
  }
  lVar30 = (ulonglong)uVar8 << 0x20;
  uVar8 = param_2[0x5d];
  if (uVar8 < 4) {
    uVar22 = 0;
    iVar18 = param_2[0x5b];
    uVar28 = 0;
    local_68 = (byte *)((uint)local_68 & 0xff000000);
    uVar15 = param_2[0x5c];
    puVar27 = &DAT_01c037c4;
LAB_0065668c:
    uVar11 = uVar15;
    if (uVar15 < uVar22) {
      uVar11 = uVar22;
    }
    do {
      uVar20 = uVar22;
      if (uVar20 == 0x100) {
        if (3 < uVar28) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c037b4);
        }
        uVar22 = (&switchD_006566f0::switchdataD_006566f4)[uVar28];
        lVar30 = (ulonglong)uVar22 << 0x20;
        uVar3 = (undefined1)local_68;
        switch(uVar28) {
        case 0:
          goto switchD_006566f0_caseD_0;
        case 1:
          lVar30 = thunk_FUN_01be5118(0xc,uVar22,&DAT_01c037d4);
          if ((int)lVar30 == 0) {
LAB_00656c70:
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0xc);
          }
          local_d8 = &DAT_01c03778;
          break;
        case 2:
          uVar1 = local_68._1_1_;
          lVar30 = thunk_FUN_01be5118(0xc,uVar22,&DAT_01c037d4);
          if ((int)lVar30 == 0) goto LAB_00656c70;
          *(undefined1 *)((int)lVar30 + 9) = uVar1;
          local_d8 = &DAT_01c0378c;
          break;
        case 3:
          uVar4 = (undefined2)local_68;
          uVar3 = local_68._2_1_;
          lVar30 = thunk_FUN_01be5118(0xc,uVar22,&DAT_01c037d4);
          iVar18 = (int)lVar30;
          if (iVar18 == 0) goto LAB_00656c70;
          *(undefined1 *)(iVar18 + 10) = uVar3;
          local_d8 = &DAT_01c037a0;
          *(undefined2 *)(iVar18 + 8) = uVar4;
          goto LAB_00656794;
        }
        *(undefined1 *)((int)lVar30 + 8) = uVar3;
LAB_00656794:
        *(undefined4 *)lVar30 = 1;
        ((undefined4 *)lVar30)[1] = 1;
        goto switchD_006566f0_caseD_0;
      }
      if (uVar11 == uVar20) goto LAB_0065703c;
      uVar22 = uVar20 + 1;
    } while (*(char *)(iVar18 + uVar20) == '\0');
    if (uVar20 < 0x80) goto code_r0x006566c4;
    lVar30 = (ulonglong)uVar15 << 0x20;
  }
switchD_006566f0_caseD_0:
  puVar27 = (undefined *)((ulonglong)lVar30 >> 0x20);
  piVar23 = (int *)lVar30;
  uVar22 = param_2[0x4c];
  piVar19 = (int *)0x0;
  if ((*(char *)((int)param_2 + 0x137) == '\x01') && (uVar22 < 4)) {
    piVar9 = param_2 + 4;
    puVar27 = (undefined *)0x0;
    uVar28 = 0;
    local_68 = (byte *)((uint)local_68 & 0xff000000);
    uVar15 = 0;
    do {
      puVar17 = (uint *)((int)param_2 + (uVar15 >> 3 & 0xfffffff0) + 0x110);
      local_b8[3] = puVar17[3];
      local_b8[0] = *puVar17;
      local_9c = 0;
      local_a0 = 0;
      local_a4 = 0;
      local_a8 = 0;
      local_b8[2] = puVar17[2];
      local_b8[1] = puVar17[1];
      if ((*(uint *)((int)local_b8 + ((uVar15 & 0x60) >> 3)) >> (uVar15 & 0x1f) & 1) != 0) {
        if (2 < uVar28) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar28,3,&DAT_01c03758);
        }
        local_29[uVar28 - 0x3f] = (char)uVar15;
        uVar28 = uVar28 + 1;
      }
      bVar29 = uVar15 != 0xff;
      uVar15 = uVar15 + 1;
    } while (bVar29);
    piVar19 = (int *)0x0;
    uVar3 = (undefined1)local_68;
    uVar1 = local_68._1_1_;
    switch(uVar28) {
    case 0:
      break;
    case 1:
      uVar26 = 0xc;
      uVar1 = *(undefined1 *)((int)piVar9 + ((uint)local_68 & 0xff));
      piVar19 = (int *)thunk_FUN_01be5118(0xc);
      if (piVar19 == (int *)0x0) {
LAB_00656c60:
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,uVar26);
      }
      *(undefined1 *)((int)piVar19 + 9) = uVar1;
      puVar27 = &UNK_01c0370c;
      *(undefined1 *)(piVar19 + 2) = uVar3;
      *piVar19 = 1;
      piVar19[1] = 1;
      break;
    case 2:
      uVar26 = 0x10c;
      piVar19 = (int *)thunk_FUN_01be5118(0x10c);
      if (piVar19 == (int *)0x0) goto LAB_00656c60;
      *piVar19 = 1;
      piVar19[1] = 1;
      FUN_01bed4e2(piVar19 + 2,piVar9,0x100);
      *(undefined1 *)((int)piVar19 + 0x109) = uVar1;
      puVar27 = &UNK_01c03720;
      *(undefined1 *)(piVar19 + 0x42) = uVar3;
      break;
    case 3:
      uVar26 = 0x10c;
      uVar5 = local_68._2_1_;
      piVar19 = (int *)thunk_FUN_01be5118(0x10c);
      if (piVar19 == (int *)0x0) goto LAB_00656c60;
      *piVar19 = 1;
      piVar19[1] = 1;
      FUN_01bed4e2(piVar19 + 2,piVar9,0x100);
      *(undefined1 *)((int)piVar19 + 0x10a) = uVar5;
      puVar27 = &DAT_01c03734;
      *(undefined1 *)((int)piVar19 + 0x109) = uVar1;
      *(undefined1 *)(piVar19 + 0x42) = uVar3;
      break;
    default:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c03748);
    }
  }
  if (piVar23 == (int *)0x0) {
    if (piVar19 == (int *)0x0) {
      if (uVar12 == 0) {
        *param_1 = piVar21;
        param_1[1] = &DAT_01c037e4;
        param_1[2] = local_e0;
        return;
      }
      *param_1 = 0;
    }
    else {
      if (((local_c0 & local_c4) == 1) && (2 < uVar22)) {
        *param_1 = piVar21;
        param_1[1] = &DAT_01c037e4;
        param_1[2] = local_e0;
        DataMemoryBarrier(0xb);
        do {
          iVar18 = *piVar19;
          bVar29 = (bool)hasExclusiveAccess(piVar19);
        } while (!bVar29);
        *piVar19 = iVar18 + -1;
        if (iVar18 != 1) {
          return;
        }
        goto LAB_00656af0;
      }
      *param_1 = piVar19;
      param_1[1] = puVar27;
      param_1[2] = 0;
    }
    if (piVar21 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar18 = *piVar21;
      bVar29 = (bool)hasExclusiveAccess(piVar21);
    } while (!bVar29);
    *piVar21 = iVar18 + -1;
  }
  else {
    local_c0 = local_c4 & 2 < uVar8 & local_c0;
    if (piVar19 == (int *)0x0) {
      if (local_c0 != 0) {
        *param_1 = piVar21;
        param_1[1] = &DAT_01c037e4;
        param_1[2] = local_e0;
        DataMemoryBarrier(0xb);
        do {
          iVar18 = *piVar23;
          bVar29 = (bool)hasExclusiveAccess(piVar23);
        } while (!bVar29);
        *piVar23 = iVar18 + -1;
        if (iVar18 != 1) {
          return;
        }
        piVar19 = piVar23;
        puVar27 = local_d8;
LAB_00656af0:
        DataMemoryBarrier(0xb);
        goto LAB_00656c3c;
      }
      *param_1 = piVar23;
      param_1[1] = local_d8;
      param_1[2] = 0;
    }
    else {
      if ((local_c0 & 2 < uVar22) != 0) {
        *param_1 = piVar21;
        param_1[1] = &DAT_01c037e4;
        param_1[2] = local_e0;
        DataMemoryBarrier(0xb);
        do {
          iVar18 = *piVar19;
          bVar29 = (bool)hasExclusiveAccess(piVar19);
        } while (!bVar29);
        *piVar19 = iVar18 + -1;
        if (iVar18 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018531c0(piVar19);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar18 = *piVar23;
          bVar29 = (bool)hasExclusiveAccess(piVar23);
        } while (!bVar29);
        *piVar23 = iVar18 + -1;
        if (iVar18 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018531c0(piVar23,local_d8);
          return;
        }
        return;
      }
      if ((uVar8 < uVar22) ||
         (*(ushort *)(param_2 + 0x5e) <= (ushort)((short)param_2[0x4d] + 0x32U))) {
        *param_1 = piVar23;
        param_1[1] = local_d8;
        param_1[2] = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar18 = *piVar19;
          bVar29 = (bool)hasExclusiveAccess(piVar19);
        } while (!bVar29);
        *piVar19 = iVar18 + -1;
        if (iVar18 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018531c0(piVar19);
        }
      }
      else {
        *param_1 = piVar19;
        param_1[1] = puVar27;
        param_1[2] = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar18 = *piVar23;
          bVar29 = (bool)hasExclusiveAccess(piVar23);
        } while (!bVar29);
        *piVar23 = iVar18 + -1;
        if (iVar18 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018531c0(piVar23,local_d8);
        }
      }
    }
    if (piVar21 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar18 = *piVar21;
      bVar29 = (bool)hasExclusiveAccess(piVar21);
    } while (!bVar29);
    *piVar21 = iVar18 + -1;
  }
  if (iVar18 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  puVar27 = &DAT_01c037e4;
  piVar19 = piVar21;
LAB_00656c3c:
  FUN_018531c0(piVar19,puVar27);
  return;
code_r0x006566c4:
  if (uVar28 == 3) {
    uVar11 = 3;
    uVar15 = 3;
    puVar27 = &DAT_01c037d4;
LAB_0065703c:
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar11,uVar15,puVar27);
  }
  local_29[uVar28 - 0x3f] = (char)uVar20;
  uVar28 = uVar28 + 1;
  goto LAB_0065668c;
LAB_00656cfc:
  if (uVar12 != 1) {
    uVar22 = (uint)pbVar13[1];
    local_29[0] = (byte)(&DAT_004d0188)[uVar8] <= (byte)(&DAT_004d0188)[uVar22];
    if ((bool)local_29[0]) {
      uVar15 = uVar22;
    }
    else {
      uVar15 = uVar8;
      uVar8 = uVar22;
    }
    local_2a = !(bool)local_29[0];
    uVar22 = (uint)(byte)local_29[0];
    local_58 = 2;
    local_5c = 0xff;
    local_60 = 0;
    local_bc = (uint)!(bool)local_29[0];
    local_68 = pbVar13;
    local_64 = pbVar10;
    do {
      uVar2 = CONCAT44(local_68,local_60);
      if (local_58 == 0) {
        uVar31 = (ulonglong)local_5c;
        if (local_5c != 0) {
          local_5c = local_5c - 1;
          uVar31 = (ulonglong)local_5c;
          if (local_68 != local_64) {
            local_68 = local_68 + 1;
            local_60 = local_60 + 1;
            uVar31 = uVar2;
          }
        }
      }
      else {
        local_58 = 0;
        uVar31 = FUN_0160d040(&local_68);
      }
      pbVar16 = (byte *)(uVar31 >> 0x20);
      uVar28 = (uint)uVar31;
      if (pbVar16 == (byte *)0x0) {
        if (local_bc == uVar22) {
          FUN_0066197c(1,&local_2a,local_29,&DAT_01d09768);
LAB_006570c0:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(local_bc,uVar12,&DAT_01d097a8);
        }
        if (uVar12 <= local_bc) goto LAB_006570c0;
        local_d0 = pbVar13[local_bc];
        uVar8 = 0;
        if ((byte)(&DAT_004d0188)[local_d0] < 0xfb) {
          if (uVar12 <= uVar22) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar22,uVar12,&DAT_01d09798);
          }
          local_d4 = FUN_015fc818;
          local_cc = FUN_015fc9fc;
          local_dc = (uint)local_d0 << 0x10 | uVar22 << 8 | (uint)pbVar13[uVar22] << 0x18 | local_bc
          ;
        }
        else {
          local_cc = FUN_015fc2a4;
          local_d4 = (code *)0x0;
        }
        local_d8 = (undefined *)0x0;
        unaff_r11 = 0;
        do {
          pbVar16 = pbVar13 + uVar8;
          uVar8 = uVar8 + 1;
          uVar28 = *pbVar16 & 0x3f;
          uVar22 = 1 << uVar28;
          uVar15 = 1 >> (0x20 - uVar28 & 0xff);
          if (-1 < (int)(uVar28 - 0x20)) {
            uVar22 = 0;
            uVar15 = 1 << (uVar28 - 0x20 & 0xff);
          }
          unaff_r11 = uVar15 | unaff_r11;
          local_d8 = (undefined *)(uVar22 | (uint)local_d8);
        } while (uVar12 != uVar8);
        uVar32 = FUN_015fc15c(pbVar13,uVar12,0);
        uVar33 = FUN_015fc15c(pbVar13,uVar12,1);
        if ((uint)uVar33 < (uint)uVar32) {
          uVar33 = uVar32;
        }
        puVar25 = (undefined4 *)uVar33;
        uVar33 = FUN_015fc05c(pbVar13,uVar12,(int)((ulonglong)uVar33 >> 0x20),puVar25);
        puVar24 = (undefined4 *)((ulonglong)uVar33 >> 0x20);
        uVar8 = (uint)uVar33;
        goto LAB_00657008;
      }
      uVar11 = (uint)*pbVar16;
      if ((byte)(&DAT_004d0188)[uVar11] < (byte)(&DAT_004d0188)[uVar8]) {
        local_29[0] = (undefined1)local_bc;
        if (0xff < uVar28) {
          puVar27 = &DAT_01d09788;
LAB_00657098:
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533467,0x2b,&local_98,&DAT_01c03e48,puVar27);
        }
        uVar20 = uVar28;
        uVar15 = uVar8;
        uVar8 = uVar11;
        uVar22 = local_bc;
        local_2a = (bool)(char)uVar31;
      }
      else {
        uVar20 = local_bc;
        if (uVar11 == uVar8) goto LAB_00656eb4;
        if ((byte)(&DAT_004d0188)[uVar11] < (byte)(&DAT_004d0188)[uVar15]) {
          if (0xff < uVar28) {
            puVar27 = &DAT_01d09778;
            goto LAB_00657098;
          }
          uVar15 = uVar11;
          uVar22 = uVar28;
          local_29[0] = (char)uVar31;
        }
      }
LAB_00656eb4:
      local_bc = uVar20;
    } while( true );
  }
  local_cc = (code *)&LAB_015fc6c4;
  local_bc = 0;
  puVar24 = param_1;
LAB_00657008:
  iVar18 = FUN_01298504(uVar12,1);
  if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(1,uVar12);
  }
LAB_00656448:
  FUN_01bed4e2(iVar18,pbVar13,uVar12);
  puVar6 = (undefined4 *)thunk_FUN_01be5118(0x50);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x50);
  }
  *(undefined2 *)((int)puVar6 + 0x2e) = local_2c;
  puVar6[0xc] = local_c4;
  puVar6[0xd] = local_c0;
  *(undefined1 *)((int)puVar6 + 0x29) = (undefined1)local_bc;
  puVar6[0xe] = local_cc;
  *(byte *)(puVar6 + 10) = local_d0;
  puVar6[4] = local_d8;
  puVar6[8] = local_d4;
  puVar6[9] = local_dc;
  *(undefined4 *)((int)puVar6 + 0x2a) = local_30;
  puVar6[0x10] = 1;
  puVar6[0x11] = iVar18;
  puVar6[0x12] = uVar12;
  *puVar6 = 1;
  puVar6[1] = 1;
  puVar6[2] = uVar8;
  puVar6[3] = puVar24;
  puVar6[5] = unaff_r11;
  puVar6[6] = puVar25;
  puVar6[7] = 0;
  *param_1 = puVar6;
  param_1[1] = &DAT_01c036d8;
  param_1[2] = uVar12;
  return;
}

