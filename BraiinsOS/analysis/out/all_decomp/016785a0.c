// FUN_016785a0 @ 016785a0 size=2712 calls_out=11 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x01678a6c) */

void FUN_016785a0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  byte **ppbVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  code *pcVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  char *pcVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  double dVar24;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  undefined4 *local_c0;
  byte *local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  int local_98;
  uint uStack_94;
  uint local_90;
  uint local_8c;
  int *local_88;
  undefined4 *local_84;
  undefined4 local_80;
  undefined *local_7c;
  uint local_78;
  uint uStack_74;
  byte **local_70;
  undefined4 *local_6c;
  char *local_68;
  int local_64;
  int local_60;
  uint local_5c;
  undefined8 local_58;
  int *local_50;
  undefined4 *local_4c;
  undefined4 local_44;
  undefined *local_40;
  undefined4 local_3c;
  int local_38;
  char **local_34;
  
  pbVar5 = *(byte **)(param_2 + 8);
  uVar18 = *(uint *)(param_2 + 0xc);
  local_a8 = pbVar5;
  local_a4 = uVar18;
  FUN_01679184(&local_60);
  if (local_60 != 3) {
    local_cc = (uint)local_58;
    local_c0 = local_4c;
    piVar16 = local_50;
    uVar22 = local_58._4_4_;
    goto LAB_01678628;
  }
  pcVar20 = *(char **)(param_2 + 8);
  uVar21 = *(uint *)(param_2 + 0xc);
  FUN_01678354(&local_60);
  puVar4 = local_4c;
  piVar15 = local_50;
  uVar19 = local_5c;
  if (local_60 == 3) {
LAB_01678bdc:
    iVar6 = *(int *)(param_2 + 8);
    *(byte **)(param_2 + 8) = pbVar5;
    uVar22 = iVar6 - (int)pbVar5;
    *(uint *)(param_2 + 0xc) = uVar18;
    if (uVar18 < uVar22) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ad9c8);
    }
    *(byte **)(param_2 + 8) = pbVar5 + uVar22;
    *(uint *)(param_2 + 0xc) = uVar18 - uVar22;
    iVar23 = 0;
    uVar19 = 0;
    local_58 = (double)((ulonglong)local_58 & 0xffffffff00000000);
    local_5c = 1;
    local_60 = 0;
    local_c8 = 1;
    uVar21 = uVar19;
LAB_01678c58:
    do {
      uVar11 = uVar22 - uVar19;
      pbVar13 = pbVar5 + uVar19;
      if (uVar11 < 8) {
        if (uVar22 == uVar19) break;
        pbVar9 = (byte *)0x0;
        while (pbVar13[-(int)pbVar9] != 0x5f) {
          pbVar9 = pbVar9 + -1;
          if (pbVar5 + (uVar19 - iVar6) == pbVar9) goto LAB_01678e28;
        }
        uVar14 = -(int)pbVar9;
      }
      else {
        uVar10 = ((uint)(pbVar13 + 3) & 0xfffffffc) - (int)pbVar13;
        if (uVar10 == 0) {
          uVar10 = 0;
          do {
            uVar17 = *(uint *)(pbVar13 + uVar10);
            uVar14 = *(uint *)((int)(pbVar13 + uVar10) + 4) ^ 0x5f5f5f5f;
            if (((0x1010100 - (uVar17 ^ 0x5f5f5f5f) | uVar17) & 0x80808080 &
                (0x1010100 - uVar14 | uVar14)) != 0x80808080) break;
            uVar10 = uVar10 + 8;
LAB_01678cf4:
          } while (uVar10 <= uVar11 - 8);
          if (uVar11 == uVar10) {
            uVar19 = uVar21;
            goto LAB_01678e2c;
          }
          iVar12 = 0;
          while (pbVar13[iVar12 + uVar10] != 0x5f) {
            iVar12 = iVar12 + 1;
            if ((uVar22 - uVar10) - uVar19 == iVar12) goto LAB_01678e28;
          }
          uVar14 = iVar12 + uVar10;
        }
        else {
          uVar14 = 0;
          while (pbVar13[uVar14] != 0x5f) {
            uVar14 = uVar14 + 1;
            if (uVar10 == uVar14) goto LAB_01678cf4;
          }
        }
      }
      uVar14 = uVar14 + uVar19;
      uVar19 = uVar14 + 1;
      if ((uVar14 < uVar22) && (pbVar5[uVar14] == 0x5f)) {
        uVar14 = uVar14 - uVar21;
        if ((uint)(local_60 - iVar23) < uVar14) {
          FUN_0166e728(&local_60,iVar23,uVar14,1,1);
          local_c8 = local_5c;
          iVar23 = (uint)local_58;
        }
        FUN_016dd1aa(local_c8 + iVar23,pbVar5 + uVar21,uVar14);
        iVar23 = iVar23 + uVar14;
        local_58 = (double)CONCAT44(local_58._4_4_,iVar23);
        uVar21 = uVar19;
        if (uVar22 < uVar19) goto LAB_01678e2c;
        goto LAB_01678c58;
      }
    } while (uVar19 <= uVar22);
LAB_01678e28:
    uVar19 = uVar21;
LAB_01678e2c:
    uVar22 = uVar22 - uVar19;
    if ((uint)(local_60 - iVar23) < uVar22) {
      FUN_0166e728(&local_60,iVar23,uVar22,1,1);
      iVar23 = (uint)local_58;
    }
    else {
    }
    uVar21 = local_5c;
    iVar6 = local_60;
    FUN_016dd1aa(local_5c + iVar23,pbVar5 + uVar19,uVar22);
    FUN_00fb63d8(&local_80,uVar21,iVar23 + uVar22);
    if (iVar6 != 0) {
      thunk_FUN_016d3fb4(uVar21);
    }
    if ((char)local_80 == '\x01') {
      local_58 = 0.0;
      local_60 = 0;
      uVar2 = local_80._1_1_;
      local_5c = 4;
      local_50 = (int *)thunk_FUN_016d4a50(1);
      if (local_50 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(1,1);
      }
      *(undefined1 *)local_50 = uVar2;
      local_58 = (double)CONCAT44((uint)local_58,local_5c);
    }
    else {
      local_58 = (double)CONCAT44(uStack_74,local_78);
      if (local_58 != INFINITY) {
        local_60 = 3;
        goto LAB_01678f44;
      }
      local_50 = (int *)0x0;
      uStack_9c = 0;
      local_a0 = 4;
      local_58 = 1.97626258336499e-323;
    }
    local_5c = 0;
    *(byte **)(param_2 + 8) = pbVar5;
    *(uint *)(param_2 + 0xc) = uVar18;
    local_60 = 2;
    local_4c = (undefined4 *)&DAT_018ad9f8;
  }
  else {
    uVar11 = (uint)local_58;
    local_98 = local_60;
    uStack_94 = local_5c;
    local_90 = (uint)local_58;
    local_8c = local_58._4_4_;
    local_88 = local_50;
    local_84 = local_4c;
    local_cc = (uint)local_58;
    uVar22 = local_58._4_4_;
    local_c4 = local_5c;
    piVar16 = local_50;
    puVar1 = local_4c;
    if (local_60 != 1) {
joined_r0x016788b8:
      local_5c = local_c4;
      local_c0 = puVar1;
      if (local_60 != 3) goto LAB_01678628;
      goto LAB_01678bdc;
    }
    *(char **)(param_2 + 8) = pcVar20;
    *(uint *)(param_2 + 0xc) = uVar21;
    local_cc = 4;
    if ((uVar21 == 0) || (*pcVar20 != '.')) {
      local_c4 = 0;
      piVar16 = (int *)0x0;
      local_c0 = (undefined4 *)0x0;
      uVar22 = 0;
joined_r0x016788e0:
      if (uVar19 != 0) {
        thunk_FUN_016d3fb4(uVar11);
      }
      if (piVar15 == (int *)0x0) {
        local_60 = 1;
        local_5c = local_c4;
        goto LAB_01678628;
      }
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)(piVar15);
      }
      iVar23 = puVar4[1];
      iVar6 = 1;
    }
    else {
      local_68 = pcVar20 + 1;
      local_64 = uVar21 - 1;
      *(char **)(param_2 + 8) = local_68;
      *(int *)(param_2 + 0xc) = local_64;
      FUN_01678464(&local_80);
      if (local_80 == 3) {
LAB_01678844:
        iVar6 = *(int *)(param_2 + 8);
        *(char **)(param_2 + 8) = pcVar20;
        *(uint *)(param_2 + 0xc) = uVar21;
        uVar22 = iVar6 - (int)pcVar20;
        if (uVar21 < uVar22) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ad9c8);
        }
        *(char **)(param_2 + 8) = pcVar20 + uVar22;
        *(uint *)(param_2 + 0xc) = uVar21 - uVar22;
        FUN_01678354(&local_60);
        puVar1 = local_4c;
        piVar16 = local_50;
        if (local_60 == 3) {
          local_60 = 3;
          local_c4 = 0;
          local_5c = 0;
          piVar16 = &local_60;
          goto LAB_01678b60;
        }
        local_cc = (uint)local_58;
        local_c0 = local_4c;
        if (local_60 == 1) {
          *(char **)(param_2 + 8) = pcVar20 + uVar22;
          *(uint *)(param_2 + 0xc) = uVar21 - uVar22;
          if (local_5c != 0) {
            thunk_FUN_016d3fb4((uint)local_58);
          }
          local_c4 = 0;
          if (piVar16 != (int *)0x0) {
            pcVar8 = (code *)*puVar1;
            if (pcVar8 != (code *)0x0) {
              (*pcVar8)(piVar16);
            }
            if (puVar1[1] != 0) {
              thunk_FUN_016d3fb4(piVar16);
            }
          }
          local_5c = 0;
          iVar6 = 3;
          uVar22 = uVar21;
        }
        else {
          local_c4 = local_5c & 0xffffff00;
          iVar6 = local_60;
          uVar22 = local_58._4_4_;
        }
      }
      else {
        local_34 = &local_68;
        local_40 = &DAT_0041440d;
        local_3c = 5;
        local_44 = 2;
        local_38 = param_2;
        FUN_00953084(&local_60,&local_80,&local_44);
        local_80 = local_60;
        local_7c = (undefined *)local_5c;
        local_78 = (uint)local_58;
        uStack_74 = local_58._4_4_;
        local_70 = (byte **)local_50;
        local_6c = local_4c;
        if (local_60 == 3) goto LAB_01678844;
        local_cc = (uint)local_58;
        piVar16 = local_50;
        if (local_60 == 1) {
          local_c0 = local_4c;
          uVar22 = local_58._4_4_;
          local_c4 = local_5c;
          goto joined_r0x016788e0;
        }
        local_c4 = local_5c & 0xffffff00;
        local_c0 = local_4c;
        uVar21 = local_58._4_4_;
LAB_01678b60:
        iVar6 = local_60;
        uVar22 = uVar21;
      }
      if (uVar19 != 0) {
        thunk_FUN_016d3fb4(uVar11);
      }
      local_c4 = local_5c & 0xff | local_c4;
      local_60 = iVar6;
      puVar1 = local_c0;
      if (piVar15 == (int *)0x0) goto joined_r0x016788b8;
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)(piVar15);
      }
      iVar23 = puVar4[1];
    }
    if (iVar23 != 0) {
      thunk_FUN_016d3fb4(piVar15);
    }
    local_5c = local_c4;
    local_60 = iVar6;
    if (iVar6 == 3) goto LAB_01678bdc;
LAB_01678628:
    local_58 = (double)CONCAT44(uVar22,local_cc);
    local_50 = piVar16;
    local_4c = local_c0;
    if (local_60 == 1) {
      piVar15 = (int *)((uint)&local_60 | 4);
      local_80 = *piVar15;
      local_7c = (undefined *)piVar15[1];
      local_78 = piVar15[2];
      uStack_74 = piVar15[3];
      local_70 = (byte **)piVar15[4];
      *(byte **)(param_2 + 8) = pbVar5;
      *(uint *)(param_2 + 0xc) = uVar18;
      if (uVar18 == 0) {
LAB_016786a8:
        bVar7 = false;
        *(byte **)(param_2 + 8) = pbVar5;
        *(uint *)(param_2 + 0xc) = uVar18;
        pbVar13 = pbVar5;
        uVar22 = uVar18;
      }
      else {
        uVar22 = uVar18 - 1;
        *(uint *)(param_2 + 0xc) = uVar22;
        bVar7 = true;
        pbVar13 = pbVar5 + 1;
        piVar15 = (int *)(uint)*pbVar5;
        *(byte **)(param_2 + 8) = pbVar13;
        if ((piVar15 != (int *)&DAT_0000002b) && (piVar15 != (int *)&DAT_0000002d))
        goto LAB_016786a8;
      }
      if (uVar22 == 0) {
LAB_016786d8:
        *(byte **)(param_2 + 8) = pbVar13;
        *(uint *)(param_2 + 0xc) = uVar22;
LAB_016786e0:
        uStack_94 = 0;
        local_98 = 4;
        if (local_5c != 0) {
          thunk_FUN_016d3fb4();
        }
        if (piVar16 != (int *)0x0) {
          if ((code *)*local_c0 != (code *)0x0) {
            (*(code *)*local_c0)(piVar16);
          }
          if (local_c0[1] != 0) {
            thunk_FUN_016d3fb4(piVar16);
          }
        }
        iVar6 = 1;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[2] = 4;
        param_1[3] = 0;
        *param_1 = 1;
        param_1[1] = 0;
        goto LAB_01678f58;
      }
      uVar18 = 0;
      if (*pbVar13 == 0x69) {
        if (uVar22 == 1) goto LAB_016786d8;
        uVar18 = 1;
        if (pbVar13[1] != 0x6e) goto LAB_01678960;
        if (uVar22 == 2) goto LAB_016786d8;
        uVar18 = 2;
        if (pbVar13[2] != 0x66) goto LAB_01678960;
LAB_01678970:
        dVar24 = INFINITY;
      }
      else {
LAB_01678960:
        if ((uVar22 <= uVar18) && (2 < uVar22)) goto LAB_01678970;
        *(byte **)(param_2 + 8) = pbVar13;
        uVar18 = 0;
        *(uint *)(param_2 + 0xc) = uVar22;
        if (*pbVar13 == 0x6e) {
          if (uVar22 == 1) goto LAB_016786e0;
          uVar18 = 1;
          if (pbVar13[1] != 0x61) goto LAB_016789c0;
          if (uVar22 == 2) goto LAB_016786e0;
          uVar18 = 2;
          if (pbVar13[2] != 0x6e) goto LAB_016789c0;
        }
        else {
LAB_016789c0:
          if ((uVar18 < uVar22) || (uVar22 < 3)) goto LAB_016786e0;
        }
        dVar24 = NAN;
      }
      if (bVar7) {
        local_cc = (uint)piVar15 & 0xff;
      }
      *(byte **)(param_2 + 8) = pbVar13 + 3;
      *(uint *)(param_2 + 0xc) = uVar22 - 3;
      if (bVar7 && local_cc != 0x2b) {
        if (local_cc != 0x2d) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_004143c9,0x89,&DAT_018ad9d8);
        }
        dVar24 = -dVar24;
      }
      iVar6 = 3;
      param_1[4] = 0;
      param_1[5] = 0;
      *(double *)(param_1 + 2) = dVar24;
      *param_1 = 3;
      param_1[1] = 0;
      if (local_80 != 0) {
        thunk_FUN_016d3fb4(local_7c);
      }
      ppbVar3 = local_70;
      uVar18 = uStack_74;
      if (uStack_74 != 0) {
        if ((code *)*local_70 != (code *)0x0) {
          (*(code *)*local_70)(uStack_74);
        }
        if (ppbVar3[1] != (byte *)0x0) {
          thunk_FUN_016d3fb4(uVar18);
        }
      }
      goto LAB_01678f58;
    }
  }
LAB_01678f44:
  *param_1 = local_60;
  param_1[1] = local_5c;
  param_1[2] = (uint)local_58;
  param_1[3] = local_58._4_4_;
  param_1[4] = (int)local_50;
  param_1[5] = (int)local_4c;
  iVar6 = *param_1;
LAB_01678f58:
  if (iVar6 != 3) {
    local_70 = &local_a8;
    local_7c = &DAT_00414415;
    local_78 = 0x15;
    local_80 = 3;
    uStack_74 = param_2;
    FUN_00953084(&local_60,param_1,&local_80);
    *param_1 = local_60;
    param_1[1] = local_5c;
    param_1[2] = (uint)local_58;
    param_1[3] = local_58._4_4_;
    param_1[4] = (int)local_50;
    param_1[5] = (int)local_4c;
  }
  return;
}

