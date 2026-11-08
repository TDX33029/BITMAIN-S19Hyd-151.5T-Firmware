// FUN_014c7400 @ 014c7400 size=2932 calls_out=18 calls_in=3
// strings: internal inconsistency

void FUN_014c7400(undefined4 *param_1,int *param_2,int param_3,undefined1 param_4,undefined1 param_5
                 ,uint param_6,char *param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint3 uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  int *piVar8;
  byte *pbVar9;
  int *piVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  undefined2 *puVar15;
  int extraout_r2;
  int *piVar16;
  byte *pbVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  uint *puVar21;
  int iVar22;
  int *piVar23;
  int *piVar24;
  int *piVar25;
  undefined4 uVar26;
  uint uVar27;
  int *piVar28;
  int *piVar29;
  undefined1 *puVar30;
  bool bVar31;
  undefined8 uVar32;
  int *local_e4;
  int *local_dc;
  int *local_d0;
  int *local_b0;
  undefined2 local_a4;
  byte local_a2;
  int *local_a0;
  int *local_9c;
  int *local_98;
  undefined4 local_94;
  int *local_90;
  int *local_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  int *local_60;
  int *local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  
  uVar26 = 0;
  local_a0 = (int *)&DAT_80000000;
  local_94._0_2_ = CONCAT11(param_4,param_5);
  local_8c = param_2 + param_3 * 0x12;
  if (param_3 != 0) {
    param_3 = param_3 * 0x48;
LAB_014c7444:
    param_2 = param_2 + 0x12;
    local_90 = param_2;
    iVar7 = FUN_014c7288(&local_a0);
    if (iVar7 == 0) goto code_r0x014c745c;
    piVar8 = (int *)thunk_FUN_01be5118(0x10);
    piVar19 = local_8c;
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,0x10);
    }
    piVar29 = (int *)&DAT_00000001;
    *piVar8 = iVar7;
    local_30 = (int *)&SUB_00000004;
    local_28 = (int *)&DAT_00000001;
    local_60 = local_a0;
    local_5c = local_9c;
    local_58 = local_98;
    local_54 = local_94;
    local_50 = local_90;
    local_4c = local_8c;
    local_2c = piVar8;
    if (local_90 != local_8c) {
      piVar10 = local_90;
      do {
        piVar29 = local_28;
        while( true ) {
          piVar10 = piVar10 + 0x12;
          local_50 = piVar10;
          iVar7 = FUN_014c7288(&local_60);
          if (iVar7 != 0) break;
          if (piVar10 == piVar19) goto LAB_014c7538;
        }
        if (piVar29 == local_30) {
          FUN_0132b898(&local_30,piVar29,1,4,4);
          piVar8 = local_2c;
        }
        piVar8[(int)piVar29] = iVar7;
        piVar29 = (int *)((int)piVar29 + 1);
        local_28 = piVar29;
      } while (piVar10 != piVar19);
    }
LAB_014c7538:
    if (local_60 != (int *)&DAT_80000000) {
      FUN_019bb7e0(local_60,local_5c);
    }
    piVar19 = local_30;
    piVar8 = local_2c;
    goto LAB_014c7550;
  }
LAB_014c7468:
  piVar29 = (int *)0x0;
  piVar19 = (int *)0x0;
  piVar8 = (int *)&SUB_00000004;
LAB_014c7550:
  iVar7 = (int)(ZEXT48(piVar29) * 3);
  if (((int)(ZEXT48(piVar29) * 3 >> 0x20) != 0) || (iVar7 < 0)) {
LAB_014c758c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar26,iVar7);
  }
  if (iVar7 == 0) {
    pbVar9 = &DAT_00000001;
    local_b0 = (int *)0x0;
  }
  else {
    uVar26 = 1;
    pbVar9 = (byte *)FUN_01298504(iVar7,1);
    local_b0 = piVar29;
    if (pbVar9 == (byte *)0x0) goto LAB_014c758c;
  }
  if (piVar29 == (int *)0x0) {
    *param_1 = 1;
    param_1[1] = 0x80000000;
  }
  else {
    piVar10 = (int *)0x0;
    pbVar12 = pbVar9;
    do {
      piVar20 = piVar8 + (int)piVar10;
      piVar10 = (int *)((int)piVar10 + 1);
      uVar3 = *(undefined2 *)(*piVar20 + 0x29);
      pbVar12[2] = *(byte *)(*piVar20 + 0x2b);
      *(undefined2 *)pbVar12 = uVar3;
      pbVar12 = pbVar12 + 3;
    } while (piVar29 != piVar10);
    pbVar12 = pbVar9;
    if (piVar29 != (int *)&DAT_00000001) {
      uVar13 = ((int)piVar29 * 3 - 3U) / 3;
      pbVar17 = pbVar9;
      pbVar14 = pbVar9;
      do {
        pbVar11 = pbVar14 + 3;
        bVar31 = *pbVar11 < *pbVar17;
        pbVar12 = pbVar11;
        if ((*pbVar17 == *pbVar11) && (bVar31 = pbVar14[4] < pbVar17[1], pbVar17[1] == pbVar14[4]))
        {
          if ((pbVar17[2] != 0) && (pbVar14[5] < pbVar17[2])) {
            pbVar12 = pbVar17;
          }
        }
        else if (bVar31) {
          pbVar12 = pbVar17;
        }
        uVar13 = uVar13 - 1;
        pbVar17 = pbVar12;
        pbVar14 = pbVar11;
      } while (uVar13 != 0);
    }
    pbVar14 = (byte *)(param_7 + 1);
    if (*param_7 == '\0') {
      pbVar14 = pbVar12;
    }
    uVar32 = thunk_FUN_01bee35a(*param_7,pbVar14,0x2c0);
    puVar15 = (undefined2 *)((ulonglong)uVar32 >> 0x20);
    puVar21 = (uint *)((int)uVar32 + extraout_r2);
    local_a4 = *puVar15;
    local_a2 = *(byte *)(puVar15 + 1);
    local_70 = (int *)CONCAT22(CONCAT11(local_70._3_1_,(char)(param_6 >> 0x10)),(short)param_6);
    if ((char)puVar21[4] == '\0') {
      FUN_019ae6ac(&local_60);
      *puVar21 = (uint)local_60;
      puVar21[1] = (uint)local_5c;
      puVar21[2] = (uint)local_58;
      puVar21[3] = (uint)local_54;
      *(undefined1 *)(puVar21 + 4) = 1;
    }
    local_88 = *puVar21;
    uStack_84 = puVar21[1];
    uStack_80 = puVar21[2];
    uStack_7c = puVar21[3];
    *puVar21 = local_88 + 1;
    puVar21[1] = uStack_84 + (0xfffffffe < local_88);
    local_98 = &DAT_0056d238;
    local_94 = (int *)0x0;
    local_90 = (int *)0x0;
    piVar10 = (int *)0x0;
    local_78 = 0;
    local_a0 = piVar8;
    local_9c = piVar8 + (int)piVar29;
    local_8c = piVar10;
    uVar13 = FUN_014c0974(&local_a0);
    if ((uVar13 & 1) == 0) {
      if ((local_94 != (int *)0x0) && (local_94 + (int)((int)local_94 + 1) != (int *)0xfffffffb)) {
        thunk_FUN_01be4678((int)local_98 - ((int)local_94 * 4 + 4));
      }
      piVar20 = (int *)0x80000002;
      if (piVar29 != (int *)0x0) {
        piVar16 = (int *)(uint)(byte)local_a4;
        piVar18 = (int *)(uint)local_a4._1_1_;
        iVar7 = (int)piVar29 * 4;
        uVar27 = (uint)local_a2;
        uVar13 = (param_6 & 0xffffff) >> 0x10;
        iVar22 = 0;
        do {
          uVar4 = *(uint3 *)(*(int *)((int)piVar8 + iVar22) + 0x29);
          piVar24 = (int *)(uint)uVar4;
          piVar10 = (int *)((uint)piVar24 & 0xff);
          if (piVar16 == piVar10) {
            piVar24 = (int *)(uVar4 >> 8 & 0xff);
          }
          if ((piVar16 == piVar10 && piVar18 == piVar24) &&
             (uVar27 == *(byte *)(*(int *)((int)piVar8 + iVar22) + 0x2b))) {
            piVar24 = (int *)((param_6 & 0xffffff) >> 8 & 0xff);
            piVar20 = (int *)(param_6 & 0xff);
            if (piVar16 != piVar20) {
              cVar5 = (piVar16 >= piVar20 && piVar16 != piVar20) - (piVar16 < piVar20);
LAB_014c79d4:
              if (cVar5 == '\0') {
                piVar20 = (int *)&SUB_00000004;
                piVar29 = (int *)0x0;
                piVar10 = piVar29;
                goto LAB_014c7c50;
              }
              if (cVar5 != '\x01') {
                iVar22 = iVar7;
                piVar23 = piVar8;
                goto LAB_014c7adc;
              }
            }
            else {
              if (piVar18 != piVar24) {
                cVar5 = (piVar18 >= piVar24 && piVar18 != piVar24) - (piVar18 < piVar24);
                goto LAB_014c79d4;
              }
              if (uVar27 == 0) {
                cVar5 = '\0';
                if (uVar13 != 0) {
                  cVar5 = -1;
                }
                goto LAB_014c79d4;
              }
              if (uVar13 != 0) {
                cVar5 = (uVar27 >= uVar13 && uVar27 != uVar13) - (uVar27 < uVar13);
                goto LAB_014c79d4;
              }
            }
            local_94 = (int *)&local_a4;
            local_98 = &local_70;
            local_a0 = piVar8;
            local_9c = piVar8 + (int)piVar29;
            local_90 = local_94;
            iVar7 = FUN_014c41b8(&local_a0);
            if (iVar7 == 0) {
              piVar20 = (int *)&SUB_00000004;
              piVar29 = (int *)0x0;
              piVar10 = (int *)0x0;
            }
            else {
              piVar16 = (int *)FUN_01298504(0x10,4);
              if (piVar16 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00664620(4,0x10);
              }
              *piVar16 = iVar7;
              local_28 = (int *)&DAT_00000001;
              local_30 = (int *)&SUB_00000004;
              local_60 = local_a0;
              local_5c = local_9c;
              local_58 = local_98;
              local_54 = local_94;
              local_50 = local_90;
              iVar7 = 0;
              piVar29 = (int *)0x2;
              local_2c = piVar16;
              while( true ) {
                piVar18 = piVar29;
                piVar29 = (int *)((int)piVar18 + -1);
                iVar22 = FUN_014c41b8(&local_60);
                piVar20 = local_2c;
                piVar10 = local_30;
                if (iVar22 == 0) break;
                if (piVar29 == local_30) {
                  FUN_0132b898(&local_30,piVar29,1,4,4);
                  piVar16 = local_2c;
                }
                *(int *)((int)piVar16 + iVar7 + 4) = iVar22;
                iVar7 = iVar7 + 4;
                piVar29 = (int *)((int)piVar18 + 1);
                local_28 = piVar18;
              }
              if (&DAT_00000001 < piVar29) {
                piVar16 = local_2c;
                if (&DAT_00000014 < piVar29) {
                  FUN_014c2120(local_2c,piVar29);
                }
                else {
                  do {
                    FUN_014c19b0(piVar20,piVar16 + 1);
                    iVar7 = iVar7 + -4;
                    piVar16 = piVar16 + 1;
                  } while (iVar7 != 0);
                }
              }
            }
            goto LAB_014c7c50;
          }
          iVar22 = iVar22 + 4;
        } while (iVar7 != iVar22);
      }
LAB_014c78bc:
      FUN_0132b958(0,1,1,3);
    }
    else {
      piVar29 = (int *)thunk_FUN_01be5118(0xc);
      if (piVar29 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xc);
      }
      *(short *)piVar29 = (short)(uVar13 >> 8);
      *(char *)((int)piVar29 + 2) = (char)(uVar13 >> 0x18);
      local_28 = (int *)&DAT_00000001;
      local_30 = (int *)&SUB_00000004;
      local_60 = local_a0;
      local_5c = local_9c;
      local_58 = local_98;
      local_54 = local_94;
      local_50 = local_90;
      local_4c = local_8c;
      local_48 = local_88;
      uStack_44 = uStack_84;
      local_40 = uStack_80;
      uStack_3c = uStack_7c;
      uStack_38 = local_78;
      uStack_34 = uStack_74;
      iVar7 = 3;
      local_2c = piVar29;
      while (piVar10 = local_28, uVar13 = FUN_014c0974(&local_60), (uVar13 & 1) != 0) {
        if (piVar10 == local_30) {
          FUN_0132b898(&local_30,piVar10,1,1,3);
          piVar29 = local_2c;
        }
        puVar15 = (undefined2 *)((int)piVar29 + iVar7);
        *puVar15 = (short)(uVar13 >> 8);
        local_28 = (int *)((int)piVar10 + 1);
        iVar7 = iVar7 + 3;
        *(char *)(puVar15 + 1) = (char)(uVar13 >> 0x18);
      }
      if ((local_54 != (int *)0x0) && (local_54 + (int)((int)local_54 + 1) != (int *)0xfffffffb)) {
        thunk_FUN_01be4678((int)local_58 - ((int)local_54 * 4 + 4));
      }
      piVar20 = local_30;
    }
    *param_1 = 1;
    param_1[1] = piVar20;
    param_1[2] = piVar29;
    param_1[3] = piVar10;
  }
  goto LAB_014c7920;
code_r0x014c745c:
  param_3 = param_3 + -0x48;
  if (param_3 == 0) goto LAB_014c7468;
  goto LAB_014c7444;
LAB_014c7adc:
  do {
    piVar10 = (int *)*piVar23;
    piVar28 = (int *)(uint)*(byte *)((int)piVar10 + 0x29);
    bVar31 = piVar28 < piVar20 || piVar28 == piVar20;
    if ((piVar28 != piVar20) ||
       (piVar25 = (int *)(uint)*(byte *)((int)piVar10 + 0x2a),
       bVar31 = piVar25 < piVar24 || piVar25 == piVar24, piVar25 != piVar24)) {
      if (bVar31) goto LAB_014c7b30;
    }
    else if (uVar13 == 0) {
      if (*(byte *)((int)piVar10 + 0x2b) == 0) {
LAB_014c7b30:
        bVar31 = piVar16 < piVar28;
        if ((piVar28 == piVar16) &&
           (bVar31 = piVar18 < (int *)(uint)*(byte *)((int)piVar10 + 0x2a),
           (int *)(uint)*(byte *)((int)piVar10 + 0x2a) == piVar18)) {
          if ((*(byte *)((int)piVar10 + 0x2b) != 0) && (uVar27 < *(byte *)((int)piVar10 + 0x2b))) {
LAB_014c7b74:
            if ((char)piVar10[0x10] != '\0') {
              piVar20 = (int *)0x80000003;
              goto LAB_014c78bc;
            }
          }
        }
        else if (bVar31) goto LAB_014c7b74;
      }
    }
    else if (*(byte *)((int)piVar10 + 0x2b) <= uVar13) goto LAB_014c7b30;
    iVar22 = iVar22 + -4;
    piVar23 = piVar23 + 1;
  } while (iVar22 != 0);
  piVar29 = piVar8;
  while( true ) {
    iVar22 = *piVar29;
    piVar10 = (int *)(uint)*(byte *)(iVar22 + 0x29);
    bVar31 = piVar10 == piVar16;
    if (bVar31) {
      piVar10 = (int *)(uint)*(byte *)(iVar22 + 0x2a);
    }
    if ((bVar31 && piVar10 == piVar18) && (uVar27 == *(byte *)(iVar22 + 0x2b))) break;
    iVar7 = iVar7 + -4;
    piVar29 = piVar29 + 1;
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("internal inconsistency",0x16,&DAT_01cf9c04);
    }
  }
  piVar20 = (int *)thunk_FUN_01be5118(4);
  if (piVar20 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,4);
  }
  *piVar20 = iVar22;
  piVar29 = (int *)&DAT_00000001;
  piVar10 = piVar29;
LAB_014c7c50:
  FUN_0132b958(0,1,1,3);
  local_d0 = piVar20 + (int)piVar29;
  piVar16 = local_d0 + -1;
  bVar6 = (piVar29 != (int *)0x0 && piVar16 != (int *)0x0) & param_7[4];
  if (bVar6 == 1) {
    local_dc = (int *)thunk_FUN_01be5118(4);
    if (local_dc == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,4);
    }
    iVar7 = 0x48;
    local_d0 = local_dc + 1;
    *local_dc = *piVar16;
    local_e4 = (int *)&DAT_00000001;
    piVar16 = (int *)&DAT_00000001;
LAB_014c7cc8:
    uVar26 = 8;
    local_6c = FUN_01298504(iVar7,8);
    piVar29 = piVar16;
    if (local_6c == 0) {
LAB_014c7eac:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar26,iVar7);
    }
  }
  else {
    iVar7 = (int)piVar29 * 0x48;
    if (&UNK_01c71c71 < piVar29) {
      uVar26 = 0;
      goto LAB_014c7eac;
    }
    local_e4 = piVar10;
    local_dc = piVar20;
    if (iVar7 != 0) {
      piVar16 = piVar29;
      goto LAB_014c7cc8;
    }
    local_6c = 8;
    piVar16 = (int *)0x0;
  }
  iVar7 = 0;
  local_68 = 0;
  local_70 = piVar16;
  if (piVar29 != (int *)0x0) {
    puVar30 = (undefined1 *)(local_6c + 0x41);
    piVar29 = local_dc;
    do {
      piVar23 = piVar29 + 1;
      iVar22 = *piVar29;
      uVar26 = *(undefined4 *)(iVar22 + 0x30);
      uVar1 = *(undefined1 *)(iVar22 + 0x41);
      uVar2 = *(undefined1 *)(iVar22 + 0x40);
      FUN_006666fc(&local_30,*(undefined4 *)(iVar22 + 0x38),*(undefined4 *)(iVar22 + 0x3c));
      uVar13 = *(uint *)(iVar22 + 0x18);
      uVar27 = *(uint *)(iVar22 + 0x1c);
      piVar24 = *(int **)(iVar22 + 0x10);
      piVar28 = *(int **)(iVar22 + 0x14);
      FUN_014bf370(&local_a0,iVar22);
      piVar18 = local_98;
      piVar16 = local_9c;
      piVar29 = local_a0;
      local_60 = local_a0;
      local_5c = local_9c;
      local_58 = local_98;
      local_54 = local_94;
      local_40 = *(uint *)(iVar22 + 0x20);
      uStack_3c = *(uint *)(iVar22 + 0x24);
      uStack_38 = *(undefined4 *)(iVar22 + 0x28);
      uStack_34 = *(undefined4 *)(iVar22 + 0x2c);
      local_a0 = local_30;
      local_9c = local_2c;
      local_98 = local_28;
      *(int **)(puVar30 + -0x41) = piVar29;
      *(int **)(puVar30 + -0x3d) = piVar16;
      *(int **)(puVar30 + -0x39) = piVar18;
      *(int **)(puVar30 + -0x35) = local_94;
      *(int **)(puVar30 + -0x31) = piVar24;
      *(int **)(puVar30 + -0x2d) = piVar28;
      *(uint *)(puVar30 + -0x29) = uVar13;
      *(uint *)(puVar30 + -0x25) = uVar27;
      *(uint *)(puVar30 + -0x21) = local_40;
      *(uint *)(puVar30 + -0x1d) = uStack_3c;
      *(undefined4 *)(puVar30 + -0x19) = uStack_38;
      *(undefined4 *)(puVar30 + -0x15) = uStack_34;
      *(undefined4 *)(puVar30 + -0x11) = uVar26;
      *(int **)(puVar30 + -0xd) = local_30;
      *(int **)(puVar30 + -9) = local_2c;
      *(int **)(puVar30 + -5) = local_28;
      *puVar30 = uVar1;
      iVar7 = iVar7 + 1;
      puVar30[-1] = uVar2;
      puVar30 = puVar30 + 0x48;
      piVar29 = piVar23;
      local_90 = piVar24;
      local_8c = piVar28;
      local_50 = piVar24;
      local_4c = piVar28;
      local_48 = uVar13;
      uStack_44 = uVar27;
    } while (piVar23 != local_d0);
  }
  local_68 = iVar7;
  FUN_0132b958(local_e4,local_dc,4,4);
  param_1[1] = local_70;
  param_1[2] = local_6c;
  param_1[3] = local_68;
  *param_1 = 0;
  if (bVar6 != 0) {
    FUN_0132b958(piVar10,piVar20,4,4);
  }
LAB_014c7920:
  FUN_0132b958(local_b0,pbVar9,1,3);
  FUN_0132b958(piVar19,piVar8,4,4);
  return;
}

