// FUN_008c8ec4 @ 008c8ec4 size=2984 calls_out=27 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008c8ec4(uint *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  code cVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  code *pcVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  code *pcVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  char *pcVar19;
  int iVar20;
  uint uVar21;
  undefined4 *unaff_r9;
  uint uVar22;
  code *pcVar23;
  code *pcVar24;
  bool bVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  undefined4 *local_9c;
  code *local_98;
  undefined4 *local_90;
  undefined4 *local_8c;
  code *local_88;
  uint local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  code *pcStack_6c;
  undefined4 uStack_68;
  uint local_64;
  code *local_60;
  code *local_5c;
  code *local_58;
  code *local_54;
  uint *local_50;
  undefined4 local_4c;
  code **local_48;
  undefined4 *local_44;
  code *local_40;
  code *local_3c;
  code *local_38;
  code *local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x20)) {
  case 0:
    puVar11 = (undefined4 *)*param_2;
    uVar9 = *puVar11;
    uVar5 = puVar11[1];
    iVar12 = puVar11[2] + 8;
    *(undefined1 *)(param_2 + 0x1f) = 0;
    param_2[1] = uVar9;
    param_2[2] = uVar5;
    param_2[3] = iVar12;
LAB_008c8f60:
    param_2[4] = uVar9;
    param_2[5] = uVar5;
    param_2[6] = iVar12;
    param_2[7] = 0x1c;
    param_2[8] = 4;
    *(undefined1 *)(param_2 + 0xf) = 0;
switchD_008c9120_caseD_0:
    *(undefined1 *)((int)param_2 + 0x3d) = 0;
    *(undefined1 *)(param_2 + 0x1e) = 0;
    param_2[10] = param_2[4];
    param_2[0xb] = param_2[5];
    param_2[0xc] = param_2[7];
    param_2[0xd] = param_2[8];
    param_2[9] = param_2[6];
    param_2[0x10] = param_2[6] + 0xc;
switchD_008c9120_caseD_3:
    iVar12 = FUN_007d67b8(param_2 + 0x10,param_3);
    if (iVar12 != 0) {
      param_2[0xe] = iVar12;
      if (*(char *)(param_2 + 0x1e) == '\x03') {
        cVar1 = *(char *)(param_2 + 0x1d);
        bVar25 = cVar1 == '\x03';
        if (bVar25) {
          cVar1 = *(char *)(param_2 + 0x14);
        }
        if (bVar25 && cVar1 == '\x04') {
          FUN_0163c790(param_2 + 0x15);
          if (param_2[0x16] != 0) {
            (**(code **)(param_2[0x16] + 0xc))(param_2[0x17]);
          }
        }
      }
      if (param_2[10] == 1) {
        uVar13 = *(int *)param_2[9] * param_2[0xb];
        if (0xff < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_0034b2fb,0x2e,&local_60,&DAT_0186b108,&DAT_0186afe8);
        }
      }
      else {
        uVar13 = (uint)*(byte *)((int *)param_2[9] + 1);
      }
      uVar26 = (**(code **)(*(int *)(param_2[0xe] + 0x20) + 0xc))
                         (*(undefined4 *)(param_2[0xe] + 0x1c),param_2[10],uVar13,param_2[0xc],
                          param_2[0xd]);
      *(undefined8 *)(param_2 + 0x10) = uVar26;
      goto LAB_008c906c;
    }
    uVar8 = 3;
LAB_008c9088:
    local_8c = param_2 + 0xf;
    *(undefined1 *)local_8c = uVar8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01864688);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01864688);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1f)) {
    case 0:
      uVar9 = param_2[1];
      uVar5 = param_2[2];
      iVar12 = param_2[3];
      goto LAB_008c8f60;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01864d9c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01864d9c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xf)) {
    case 0:
      goto switchD_008c9120_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018713e8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018713e8);
    case 3:
      goto switchD_008c9120_caseD_3;
    case 4:
      uVar26 = *(undefined8 *)(param_2 + 0x10);
      break;
    case 5:
      uVar26 = *(undefined8 *)(param_2 + 0x13);
      goto LAB_008c9308;
    }
LAB_008c906c:
    uVar27 = (**(code **)((int)((ulonglong)uVar26 >> 0x20) + 0xc))((int)uVar26,param_3);
    local_98 = (code *)(uVar27 >> 0x20);
    uVar8 = 4;
    if ((uVar27 & 1) != 0) goto LAB_008c9088;
    uVar5 = param_2[0x10];
    puVar11 = (undefined4 *)param_2[0x11];
    pcVar10 = (code *)*puVar11;
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(uVar5);
    }
    if (puVar11[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
    if (local_98 != (code *)0x0) {
      pcVar19 = (char *)param_2[0xe];
      if (*pcVar19 != '\0') goto LAB_008c90fc;
LAB_008c96bc:
      bVar25 = (bool)hasExclusiveAccess(pcVar19);
      if (!bVar25) goto LAB_008c96cc;
      *pcVar19 = '\x01';
      DataMemoryBarrier(0xb);
LAB_008c96d4:
      local_8c = param_2 + 0xf;
      FUN_0128236c(pcVar19);
      FUN_0163af68(pcVar19,1,pcVar19);
      pcVar10 = (code *)&DAT_80000000;
      *(undefined1 *)local_8c = 1;
LAB_008c96fc:
      local_9c = param_2 + 4;
      local_90 = param_2 + 0x1f;
      FUN_008c89dc(local_9c);
      if (pcVar10 == (code *)&DAT_80000000) {
        pcVar24 = local_98;
LAB_008c9710:
        uVar13 = 1;
        *(undefined1 *)local_90 = 1;
        goto LAB_008c9720;
      }
      local_88 = (code *)0x0;
      pcVar24 = (code *)&DAT_00000004;
      pcVar23 = local_98 + (int)unaff_r9 * 0x10;
      local_38 = (code *)0x0;
      local_3c = (code *)&DAT_00000004;
      local_40 = (code *)0x0;
      local_60 = local_98;
      local_5c = local_98;
      local_58 = pcVar10;
      local_54 = pcVar23;
      if (unaff_r9 != (undefined4 *)0x0) {
        uVar13 = (int)unaff_r9 << 4;
        iVar12 = 0;
        local_88 = (code *)0x0;
        pcVar15 = local_98;
        local_5c = local_98;
LAB_008c97c0:
        uVar13 = uVar13 - 0x10;
        pcVar6 = pcVar15 + 0x10;
        uVar21 = *(uint *)pcVar15;
        if (uVar21 != 0x80000000) {
          uVar17 = *(uint *)(pcVar15 + 8);
          puVar18 = *(uint **)(pcVar15 + 4);
          if (uVar17 == 4) goto code_r0x008c97e4;
          local_28 = (undefined1)uVar17;
          uStack_27 = (undefined1)(uVar17 >> 8);
          uStack_26 = (undefined1)(uVar17 >> 0x10);
          uStack_25 = (undefined1)(uVar17 >> 0x18);
          local_2c = (code *)0x4;
          local_30 = (code *)0x6;
          local_5c = pcVar6;
          pcVar24 = (code *)FUN_008b971c(uVar17,&local_30);
          if (uVar21 != 0) {
            thunk_FUN_016d3fb4(puVar18);
          }
          if (pcVar23 != pcVar6) {
            uVar21 = 0;
            do {
              if (*(int *)(pcVar6 + uVar21 * 0x10) != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)(pcVar6 + (uVar21 * 4 + 1) * 4));
              }
              uVar21 = uVar21 + 1;
            } while (uVar13 >> 4 != uVar21);
          }
          if (pcVar10 != (code *)0x0) {
            thunk_FUN_016d3fb4(local_98);
          }
          if (local_40 != (code *)0x0) {
            thunk_FUN_016d3fb4(local_3c);
          }
          goto LAB_008c9710;
        }
        goto LAB_008c98a0;
      }
      goto LAB_008c98b0;
    }
    param_2[0x10] = 0;
    param_2[0x12] = 0;
    iVar12 = param_2[0xe];
    param_2[0x11] = 4;
    *(undefined1 *)((int)param_2 + 0x3d) = 1;
    do {
      uVar26 = (**(code **)(*(int *)(iVar12 + 0x20) + 0x10))(*(undefined4 *)(iVar12 + 0x1c));
      *(undefined8 *)(param_2 + 0x13) = uVar26;
LAB_008c9308:
      (**(code **)((int)((ulonglong)uVar26 >> 0x20) + 0xc))(&local_60,(int)uVar26,param_3);
      puVar4 = local_4c;
      puVar18 = local_50;
      pcVar23 = local_54;
      pcVar24 = local_58;
      pcVar10 = local_60;
      if (local_60 == (code *)&DAT_00000004) {
        uVar8 = 5;
        goto LAB_008c9088;
      }
      iVar12 = param_2[0x13];
      puVar11 = (undefined4 *)param_2[0x14];
      pcVar15 = (code *)*puVar11;
      uVar8 = local_4c._1_1_;
      unaff_r9 = (undefined4 *)((uint)local_4c & 0xff);
      local_98 = local_5c;
      if (pcVar15 != (code *)0x0) {
        (*pcVar15)(iVar12);
      }
      if (puVar11[1] != 0) {
        thunk_FUN_016d3fb4(iVar12);
      }
      if (pcVar10 == (code *)&SUB_00000002) {
        if (param_2[10] != 0) {
          iVar20 = param_2[0x12];
LAB_008c95b4:
          local_58 = (code *)(param_2 + 10);
          if (iVar20 == 1) goto LAB_008c95bc;
          local_60 = (code *)(param_2 + 0xc);
          local_54 = FUN_00813248;
          local_5c = FUN_00facd88;
          FUN_00600d2c(&local_30,&DAT_0034ffa6,&local_60);
          local_40 = local_30;
          local_3c = local_2c;
          local_98 = (code *)FUN_008c8bc8(&local_40);
          goto LAB_008c9650;
        }
        iVar12 = param_2[0xe];
        if (*(int *)(iVar12 + 0x14) != 1) goto LAB_008c95bc;
        break;
      }
      if (pcVar10 == (code *)0x3) goto LAB_008c9650;
      if (unaff_r9 != (undefined4 *)&SUB_00000002) {
        if (((uint)puVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0034b2c5,0x6d,&DAT_0186afc8);
        }
        if (*(int *)param_2[9] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faf2a4(&DAT_0186afd8);
        }
        iVar12 = FUN_018462e8(uVar8);
      }
      iVar20 = param_2[0x12];
      if (unaff_r9 == (undefined4 *)&SUB_00000002) {
        iVar12 = iVar20;
      }
      if (iVar20 == param_2[0x10]) {
        FUN_008cfc58(param_2 + 0x10);
      }
      puVar11 = (undefined4 *)(param_2[0x11] + iVar20 * 0x10);
      *puVar11 = pcVar24;
      puVar11[1] = pcVar23;
      puVar11[2] = puVar18;
      puVar11[3] = iVar12;
      iVar20 = iVar20 + 1;
      param_2[0x12] = iVar20;
      if (param_2[10] != 0) goto LAB_008c95b4;
      iVar12 = param_2[0xe];
    } while ((*(int *)(iVar12 + 0x14) != 1) || (iVar20 != *(int *)(iVar12 + 0x18)));
    local_80 = *(uint *)(iVar12 + 0x18);
    uVar13 = param_2[0x12];
    if (local_80 != uVar13) {
      local_74 = 0;
      local_78 = 4;
      local_7c = 0;
      uVar21 = 0;
      do {
        uVar17 = uVar21;
        if (local_80 == uVar17) goto LAB_008c94cc;
        if (uVar13 == uVar17) goto LAB_008c947c;
        uVar21 = uVar17 + 1;
      } while (uVar17 == *(uint *)(param_2[0x11] + uVar17 * 0x10 + 0xc));
      uVar13 = uVar17;
LAB_008c947c:
      local_70 = (code *)(uVar13 << 1);
      local_40 = (code *)&local_70;
      local_3c = FUN_00facd88;
      FUN_008c8c20(&local_60,&local_40);
      local_30 = local_60;
      local_2c = local_5c;
      local_28 = SUB41(local_58,0);
      uStack_27 = (undefined1)((uint)local_58 >> 8);
      uStack_26 = (undefined1)((uint)local_58 >> 0x10);
      uStack_25 = (undefined1)((uint)local_58 >> 0x18);
      FUN_00813460(&local_7c,&local_30);
      uVar13 = param_2[0x12];
LAB_008c94cc:
      uVar9 = local_74;
      uVar5 = local_78;
      local_64 = uVar13;
      FUN_008bc320(&local_30,local_78,local_74,&DAT_0041950f);
      local_50 = &local_80;
      local_58 = (code *)(param_2 + 0xc);
      local_60 = (code *)&local_64;
      local_44 = &DAT_006043a8;
      local_4c = &LAB_00fac484;
      local_54 = FUN_00facd88;
      local_5c = (code *)&LAB_00fac484;
      local_48 = &local_30;
      FUN_00600d2c(&local_40,&DAT_00350000,&local_60);
      if (local_30 != (code *)0x0) {
        thunk_FUN_016d3fb4(local_2c);
      }
      local_70 = local_40;
      pcStack_6c = local_3c;
      uStack_68 = local_38;
      local_98 = (code *)FUN_008c8bc8(&local_70);
      FUN_008cff08(uVar5,uVar9);
      if (local_7c != 0) {
        thunk_FUN_016d3fb4(uVar5);
      }
LAB_008c9650:
      iVar12 = param_2[0x12];
      if (iVar12 != 0) {
        puVar11 = (undefined4 *)(param_2[0x11] + 4);
        do {
          if (puVar11[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar11);
          }
          puVar11 = puVar11 + 4;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      if (param_2[0x10] != 0) {
        thunk_FUN_016d3fb4(param_2[0x11]);
      }
      *(undefined1 *)((int)param_2 + 0x3d) = 0;
      pcVar19 = (char *)param_2[0xe];
      if (*pcVar19 == '\0') goto LAB_008c96bc;
LAB_008c90fc:
      ClearExclusiveLocal();
LAB_008c96cc:
      FUN_01280da8(pcVar19);
      goto LAB_008c96d4;
    }
LAB_008c95bc:
    *(undefined1 *)((int)param_2 + 0x3d) = 0;
    local_60 = (code *)param_2[0x10];
    local_98 = (code *)param_2[0x11];
    unaff_r9 = (undefined4 *)param_2[0x12];
    local_5c = local_98;
    local_58 = (code *)unaff_r9;
    if (&DAT_00000001 < unaff_r9) {
      if (&DAT_00000014 < unaff_r9) {
        FUN_008b97d0(local_98,unaff_r9);
      }
      else {
        FUN_008c4190(local_98,unaff_r9);
      }
    }
    pcVar10 = local_60;
    local_8c = param_2 + 0xf;
    pcVar19 = (char *)param_2[0xe];
    *(undefined1 *)((int)param_2 + 0x3d) = 0;
    if (*pcVar19 == '\0') {
      bVar25 = (bool)hasExclusiveAccess(pcVar19);
      if (!bVar25) goto LAB_008c9a44;
      *pcVar19 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_008c9a44:
      FUN_01280da8(pcVar19);
    }
    FUN_0128236c(pcVar19);
    FUN_0163af68(pcVar19,1,pcVar19);
    *(undefined1 *)local_8c = 1;
    if (pcVar10 != (code *)0x80000001) goto LAB_008c96fc;
  }
  local_90 = param_2 + 0x1f;
  *(undefined1 *)local_90 = 3;
LAB_008c909c:
  *(undefined1 *)param_1 = 2;
  *(undefined1 *)(param_2 + 0x20) = 3;
  return;
code_r0x008c97e4:
  uVar7 = *puVar18;
  uVar22 = *(uint *)(pcVar15 + 0xc);
  uStack_26 = (undefined1)(uVar7 >> 0x18);
  uStack_27 = (undefined1)(uVar7 >> 0x10);
  uVar14 = (uVar7 & 0xff) >> 7 | (uVar7 & 0x40) << 2 | (uVar7 & 1) << 0x10;
  uVar17 = (uVar7 & 6) << 0x17;
  pcVar15 = (code *)(uVar14 | uVar17);
  local_28 = (undefined1)(uVar7 >> 8);
  local_2c._3_1_ = (undefined1)(uVar17 >> 0x18);
  uVar5 = CONCAT13(uStack_26,CONCAT12(uStack_27,CONCAT11(local_28,local_2c._3_1_)));
  local_2c._0_3_ = (undefined3)uVar14;
  local_70 = (code *)CONCAT13(local_70._3_1_,(undefined3)local_2c);
  local_2c = pcVar15;
  if (local_88 == local_40) {
    FUN_008cfd18(&local_40);
    pcVar24 = local_3c;
  }
  pcVar15 = pcVar24 + iVar12;
  *(uint *)pcVar15 = uVar22;
  *(undefined2 *)(pcVar15 + 4) = (undefined2)local_70;
  pcVar15[6] = local_70._2_1_;
  *(undefined4 *)(pcVar15 + 7) = uVar5;
  local_88 = local_88 + 1;
  local_38 = local_88;
  if (uVar21 != 0) {
    thunk_FUN_016d3fb4(puVar18);
  }
  iVar12 = iVar12 + 0xc;
  pcVar15 = pcVar6;
  if (pcVar6 == pcVar23) goto LAB_008c98a0;
  goto LAB_008c97c0;
LAB_008c98a0:
  local_5c = pcVar6;
LAB_008c98b0:
  if ((int)pcVar23 - (int)local_5c != 0) {
    pcVar24 = local_5c + 4;
    uVar13 = (uint)((int)pcVar23 - (int)local_5c) >> 4;
    do {
      if (*(uint *)(pcVar24 + -4) != 0) {
        thunk_FUN_016d3fb4(*(uint *)pcVar24);
      }
      pcVar24 = pcVar24 + 0x10;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (pcVar10 != (code *)0x0) {
    thunk_FUN_016d3fb4(local_98);
    local_88 = local_38;
  }
  pcVar24 = local_3c;
  pcVar10 = local_40;
  if ((code *)0x1 < local_88) {
    if (local_88 < (code *)0x15) {
      pcVar23 = local_3c + 0xc;
      iVar12 = 0;
      do {
        uVar13 = *(uint *)pcVar23;
        if (uVar13 < *(uint *)(pcVar23 + -0xc)) {
          uVar21 = *(uint *)(pcVar23 + 4);
          uVar17 = *(uint *)(pcVar23 + 8);
          iVar20 = iVar12;
          do {
            iVar16 = iVar20;
            pcVar15 = local_3c + iVar16;
            *(undefined4 *)(pcVar15 + 0xc) = *(undefined4 *)pcVar15;
            *(undefined4 *)(pcVar15 + 0x10) = *(undefined4 *)(pcVar15 + 4);
            *(undefined4 *)(pcVar15 + 0x14) = *(undefined4 *)(pcVar15 + 8);
            if (iVar16 == 0) {
              pcVar15 = local_3c;
              goto LAB_008c9ae0;
            }
            iVar20 = iVar16 + -0xc;
          } while (uVar13 < *(uint *)(local_3c + iVar16 + -0xc));
          pcVar15 = local_3c + iVar16;
LAB_008c9ae0:
          *(uint *)pcVar15 = uVar13;
          *(uint *)(pcVar15 + 4) = uVar21;
          *(uint *)(pcVar15 + 8) = uVar17;
        }
        pcVar23 = pcVar23 + 0xc;
        iVar12 = iVar12 + 0xc;
      } while (pcVar23 != local_3c + (int)local_88 * 0xc);
    }
    else {
      FUN_008b9600(local_3c,local_88);
    }
  }
  local_90 = param_2 + 0x1f;
  *(undefined1 *)local_90 = 1;
  if (pcVar10 == (code *)0x80000000) {
    uVar13 = 1;
LAB_008c9720:
    *param_1 = uVar13;
    param_1[1] = (uint)pcVar24;
    *(undefined1 *)(param_2 + 0x20) = 1;
    return;
  }
  if (pcVar10 != (code *)0x80000001) {
    if (local_88 == (code *)0x0) {
      local_88 = (code *)0x0;
    }
    else {
      pcVar23 = *(code **)(pcVar24 + 7);
      uVar3 = *(ushort *)(pcVar24 + 5);
      cVar2 = pcVar24[4];
      FUN_016dd52c(pcVar24,pcVar24 + 0xc,(int)local_88 * 0xc + -0xc);
      if ((byte)cVar2 != 2) {
        if (pcVar10 != (code *)0x0) {
          thunk_FUN_016d3fb4(pcVar24);
        }
        uVar13 = (uint)uVar3 << 0x10 | (uint)(byte)cVar2 << 8;
        pcVar24 = pcVar23;
        goto LAB_008c9720;
      }
      local_88 = local_88 + -1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00602938(0,local_88,&DAT_01863e48);
  }
  goto LAB_008c909c;
}

