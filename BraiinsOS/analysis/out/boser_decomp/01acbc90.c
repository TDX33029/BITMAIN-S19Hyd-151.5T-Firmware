// FUN_01acbc90 @ 01acbc90 size=3640 calls_out=19 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_01acbc90(undefined4 *param_1,int *param_2,byte *******param_3,byte *******param_4,
                 undefined1 *param_5,uint param_6)

{
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined1 *puVar4;
  byte *******pppppppbVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  byte *******pppppppbVar11;
  undefined *extraout_r1;
  undefined *puVar12;
  int iVar13;
  byte *******pppppppbVar14;
  byte *******pppppppbVar15;
  int iVar16;
  byte *******pppppppbVar17;
  byte *******unaff_r7;
  byte *******pppppppbVar18;
  uint uVar19;
  undefined4 uVar20;
  int unaff_r11;
  bool bVar21;
  undefined1 uVar22;
  bool bVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  undefined4 local_ec;
  byte *******local_d8;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined *local_b0;
  uint local_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined1 local_94;
  byte *******local_93;
  undefined2 local_8f;
  undefined1 local_8d;
  undefined *local_8c;
  uint local_88;
  undefined1 local_84;
  undefined4 local_80;
  byte *******local_7c;
  undefined *puStack_78;
  uint uStack_74;
  undefined2 local_70 [2];
  byte *******local_6c;
  byte *******local_68;
  undefined4 local_64;
  byte *******local_60;
  byte *******local_5c;
  undefined4 local_58;
  byte *******local_54;
  undefined *local_50;
  undefined2 local_4c;
  byte *******local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  byte *******local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar16 = param_2[2];
  iVar9 = iVar16;
  if (*param_2 == iVar16) {
    FUN_01af7b44(param_2,iVar16,1,1,1);
    iVar9 = param_2[2];
  }
  *(undefined1 *)(param_2[1] + iVar9) = 0x2f;
  iVar9 = iVar16 + 1;
  param_2[2] = iVar9;
  if (*param_2 == iVar9) {
    FUN_01af7b44(param_2,iVar9,1,1,1);
    iVar9 = param_2[2];
  }
  pppppppbVar18 = (byte *******)0x0;
  *(undefined1 *)(param_2[1] + iVar9) = 0x2f;
  iVar9 = 0;
  param_2[2] = iVar16 + 2;
  local_80 = param_3;
  local_7c = param_4;
  do {
    puVar4 = (undefined1 *)FUN_01ac9ff4(&local_80);
    if ((int)puVar4 < 0x40) {
      if ((puVar4 == (undefined1 *)0x23 || puVar4 == (undefined1 *)0x2f) ||
         (puVar4 == (undefined1 *)0x3f)) break;
    }
    else if (puVar4 == (undefined1 *)0x40) {
      if (param_2[6] != 0) {
        uVar20 = 10;
        if (pppppppbVar18 == (byte *******)0x0) {
          uVar20 = 2;
        }
        (**(code **)(param_2[7] + 0x14))(param_2[6],uVar20);
      }
      unaff_r7 = local_7c;
      pppppppbVar18 = local_80;
      unaff_r11 = iVar9;
    }
    else if (puVar4 == (undefined1 *)0x5c) {
      if (((uint)param_5 & 0xff) != 2) break;
    }
    else if (puVar4 == &DAT_00110000) break;
    iVar9 = iVar9 + 1;
  } while( true );
  if (pppppppbVar18 == (byte *******)0x0) {
    local_d8 = (byte *******)param_2[2];
    goto LAB_01acc0a0;
  }
  if (unaff_r11 != 0) {
    if (0 < unaff_r11) {
      bVar23 = false;
      local_ec = 0x1d2fa78;
      bVar21 = false;
      bVar3 = 1;
LAB_01acbde4:
      iVar9 = unaff_r11;
      do {
        if (param_3 == param_4) {
LAB_01acc9cc:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2fb68);
        }
        pppppppbVar17 = param_3;
        while( true ) {
          param_3 = (byte *******)((int)pppppppbVar17 + 1);
          puVar4 = (undefined1 *)(uint)*(byte *)pppppppbVar17;
          if (0x7fffffff < (uint)(int)(char)*(byte *)pppppppbVar17) {
            uVar10 = *(byte *)((int)pppppppbVar17 + 1) & 0x3f;
            if (puVar4 < (undefined1 *)0xe0) {
              puVar4 = (undefined1 *)(uVar10 | ((uint)puVar4 & 0x1f) << 6);
              param_3 = (byte *******)((int)pppppppbVar17 + 2);
            }
            else {
              uVar10 = *(byte *)((int)pppppppbVar17 + 2) & 0x3f | uVar10 << 6;
              if (puVar4 < (undefined1 *)0xf0) {
                puVar4 = (undefined1 *)(uVar10 | ((uint)puVar4 & 0x1f) << 0xc);
                param_3 = (byte *******)((int)pppppppbVar17 + 3);
              }
              else {
                param_3 = pppppppbVar17 + 1;
                puVar4 = (undefined1 *)
                         (*(byte *)((int)pppppppbVar17 + 3) & 0x3f | uVar10 << 6 |
                         ((uint)puVar4 & 7) << 0x12);
              }
            }
          }
          if (((undefined1 *)0xd < puVar4) || ((1 << ((uint)puVar4 & 0xff) & 0x2600U) == 0)) break;
          pppppppbVar17 = param_3;
          if (param_3 == param_4) goto LAB_01acc9cc;
        }
        if (puVar4 == &DAT_00110000) goto LAB_01acc9cc;
        pppppppbVar14 = (byte *******)&DAT_00000001;
        if ((undefined1 *)0x7f < puVar4) {
          pppppppbVar14 = (byte *******)0x2;
        }
        if (((undefined1 *)0x7ff < puVar4) &&
           (pppppppbVar14 = (byte *******)&SUB_00000004, puVar4 < (undefined1 *)0x10000)) {
          pppppppbVar14 = (byte *******)&DAT_00000003;
        }
        pppppppbVar11 = (byte *******)((int)param_4 - (int)pppppppbVar17);
        if (pppppppbVar14 < pppppppbVar11) {
          if ((char)*(byte *)((int)pppppppbVar17 + (int)pppppppbVar14) < -0x40) goto LAB_01acca80;
        }
        else if (pppppppbVar14 != pppppppbVar11) goto LAB_01acca80;
        if (puVar4 == &DAT_00110000) goto LAB_01acc9cc;
        unaff_r11 = iVar9 + -1;
        if ((bool)(bVar3 & puVar4 == (undefined1 *)0x3a)) goto LAB_01acbf58;
        FUN_01acaf80(param_2[6],param_2[7],puVar4,param_3,param_4);
        local_b0 = &DAT_0056a988;
        local_b8 = pppppppbVar17;
        local_b4 = pppppppbVar14;
        FUN_01655840(&local_b8,param_2);
        bVar21 = (bool)(bVar23 ^ 1U | bVar21);
        bVar1 = iVar9 < 2;
        iVar9 = unaff_r11;
        if (bVar1) {
          if (!bVar23) {
            local_d8 = (byte *******)param_2[2];
          }
          pppppppbVar17 = (byte *******)param_2[2];
          goto LAB_01acc044;
        }
      } while( true );
    }
    local_d8 = (byte *******)param_2[2];
    param_4 = unaff_r7;
    param_3 = pppppppbVar18;
    goto LAB_01acc0a0;
  }
  local_b8 = pppppppbVar18;
  local_b4 = unaff_r7;
  puVar7 = (undefined1 *)FUN_01ac9ff4(&local_b8);
  puVar4 = puVar7 + -0x23;
  pppppppbVar17 = (byte *******)&local_58;
  if (((undefined1 *)0x1c < puVar4) ||
     (local_d8 = (byte *******)0x0, (1 << ((uint)puVar4 & 0xff) & 0x10001001U) == 0)) {
    if (puVar7 != &DAT_00110000) {
      puVar4 = (undefined1 *)((uint)param_5 & 0xff);
    }
    if (puVar7 != &DAT_00110000 && puVar4 != (undefined1 *)0x2) {
      local_d8 = (byte *******)0x0;
      param_4 = (byte *******)0x0;
      if (puVar7 == (undefined1 *)0x5c) goto LAB_01acc0a8;
    }
    local_d8 = (byte *******)param_2[2];
    param_4 = unaff_r7;
    param_3 = pppppppbVar18;
    goto LAB_01acc0a0;
  }
  param_4 = (byte *******)0x0;
  goto LAB_01acc0a8;
LAB_01acbf58:
  local_d8 = (byte *******)param_2[2];
  if (iVar9 == 1) {
    pppppppbVar17 = local_d8;
    if (!bVar21 && !bVar23) {
      param_4 = unaff_r7;
      param_3 = pppppppbVar18;
      goto LAB_01acc0a0;
    }
    goto LAB_01acc044;
  }
  pppppppbVar14 = local_d8;
  if ((byte *******)*param_2 == local_d8) {
    FUN_01af7b44(param_2,local_d8,1,1,1);
    pppppppbVar14 = (byte *******)param_2[2];
  }
  pppppppbVar17 = (byte *******)((int)local_d8 + 1);
  *(byte *)((int)pppppppbVar14 + param_2[1]) = 0x3a;
  bVar23 = true;
  param_2[2] = (int)pppppppbVar17;
  bVar3 = 0;
  if (iVar9 < 2) goto LAB_01acc044;
  goto LAB_01acbde4;
LAB_01acc044:
  pppppppbVar14 = pppppppbVar17;
  if ((byte *******)*param_2 == pppppppbVar17) {
    FUN_01af7b44(param_2,pppppppbVar17,1,1,1);
    pppppppbVar14 = (byte *******)param_2[2];
  }
  *(byte *)((int)pppppppbVar14 + param_2[1]) = 0x40;
  param_2[2] = (int)((int)pppppppbVar17 + 1);
  param_4 = unaff_r7;
  param_3 = pppppppbVar18;
LAB_01acc0a0:
  pppppppbVar17 = (byte *******)&local_30;
  local_58 = param_3;
LAB_01acc0a8:
  *pppppppbVar17 = (byte ******)param_4;
  pppppppbVar17 = local_58;
  if (local_58 == (byte *******)0x0) {
    pppppppbVar18 = local_d8;
    goto LAB_01acc8ec;
  }
  iVar9 = param_2[2];
  pppppppbVar11 = (byte *******)((int)local_30 - (int)local_58);
  local_68 = local_30;
  local_6c = local_58;
  if (pppppppbVar11 == (byte *******)0x0) {
    iVar13 = 0;
    pppppppbVar14 = (byte *******)0x0;
LAB_01acc288:
    iVar13 = iVar13 + 1;
    pppppppbVar15 = (byte *******)&local_6c;
    do {
      iVar13 = iVar13 + -1;
      if (iVar13 == 0) break;
      puVar4 = (undefined1 *)FUN_01ac9ff4(pppppppbVar15);
    } while (puVar4 != &DAT_00110000);
    if (pppppppbVar14 != (byte *******)0x0) {
      if (pppppppbVar14 < pppppppbVar11) {
        bVar21 = false;
        if ((char)*(byte *)((int)pppppppbVar17 + (int)pppppppbVar14) < -0x40) goto LAB_01accaa8;
        local_5c = pppppppbVar14;
      }
      else {
        bVar21 = false;
        local_5c = pppppppbVar11;
        if (pppppppbVar14 != pppppppbVar11) {
LAB_01accaa8:
          local_ec = 0x1d2fab8;
LAB_01acca80:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(pppppppbVar17,pppppppbVar11,0,pppppppbVar14,local_ec);
        }
      }
      goto LAB_01acc300;
    }
    pppppppbVar18 = (byte *******)0x0;
    if (((uint)param_5 & 0xff) == 1) goto LAB_01acc8ec;
    bVar21 = false;
    local_5c = (byte *******)0x0;
LAB_01acc3e8:
    pppppppbVar15 = pppppppbVar17;
    do {
      if (pppppppbVar15 == (byte *******)((int)pppppppbVar17 + (int)local_5c)) {
        local_28 = 0;
        local_2c = 1;
        local_30 = (byte *******)0x0;
        local_50 = &DAT_005693f8;
        local_58 = pppppppbVar17;
        local_54 = local_5c;
        while( true ) {
          uVar25 = FUN_0165574c(&local_58);
          if ((int)uVar25 == 0) break;
          iVar13 = FUN_01acf830(&local_30,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
          if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533383,0x37,&local_40,&DAT_01d2fda8,&DAT_01d30334);
          }
        }
        local_40 = local_30;
        uStack_3c = local_2c;
        uStack_38 = local_28;
        FUN_01bed4e2((uint)&local_58 | 2,&local_40,0xc);
        uVar10 = 0;
        uVar22 = 0;
        local_b8 = local_58;
        local_b4 = local_54;
        local_b0 = local_50;
        local_ac = CONCAT22(local_ac._2_2_,local_4c);
        local_80 = local_58;
        local_7c = local_54;
        puStack_78 = local_50;
        uStack_74 = local_ac;
        pppppppbVar18 = (byte *******)local_70;
        local_70[0] = (undefined2)local_a8;
        pppppppbVar15 = local_6c;
        pppppppbVar14 = local_68;
        if (bVar21) goto LAB_01acc4e4;
        goto LAB_01acc4f8;
      }
      pppppppbVar18 = (byte *******)((int)pppppppbVar15 + 1);
      pppppppbVar14 = (byte *******)(uint)*(byte *)pppppppbVar15;
      if (0x7fffffff < (uint)(int)(char)*(byte *)pppppppbVar15) {
        uVar10 = *(byte *)((int)pppppppbVar15 + 1) & 0x3f;
        if (pppppppbVar14 < &DAT_000000e0) {
          pppppppbVar14 = (byte *******)(uVar10 | ((uint)pppppppbVar14 & 0x1f) << 6);
          pppppppbVar18 = (byte *******)((int)pppppppbVar15 + 2);
        }
        else {
          uVar10 = *(byte *)((int)pppppppbVar15 + 2) & 0x3f | uVar10 << 6;
          if (pppppppbVar14 < &DAT_000000f0) {
            pppppppbVar14 = (byte *******)(uVar10 | ((uint)pppppppbVar14 & 0x1f) << 0xc);
            pppppppbVar18 = (byte *******)((int)pppppppbVar15 + 3);
          }
          else {
            pppppppbVar18 = pppppppbVar15 + 1;
            pppppppbVar14 =
                 (byte *******)
                 (*(byte *)((int)pppppppbVar15 + 3) & 0x3f | uVar10 << 6 |
                 ((uint)pppppppbVar14 & 7) << 0x12);
          }
        }
      }
      if (pppppppbVar14 < &DAT_0000002f) {
        if ((&DAT_0000001a < (byte *)((int)pppppppbVar14 + -9)) ||
           ((1 << ((uint)((int)pppppppbVar14 + -9) & 0xff) & 0x4800013U) == 0)) {
          bVar23 = pppppppbVar14 == (byte *******)0x0;
          goto LAB_01acc4c4;
        }
        break;
      }
      if ((((byte *)((int)pppppppbVar14 + -0x2f) < &DAT_00000012) &&
          ((1 << ((uint)((int)pppppppbVar14 + -0x2f) & 0xff) & 0x3a801U) != 0)) ||
         ((byte *)((int)pppppppbVar14 + -0x5b) < &SUB_00000004)) break;
      bVar23 = pppppppbVar14 == (byte *******)&DAT_0000007c;
LAB_01acc4c4:
      pppppppbVar15 = pppppppbVar18;
    } while (!bVar23);
    pppppppbVar18 = (byte *******)&DAT_00000005;
LAB_01acc4d8:
    if (!bVar21) goto LAB_01acc8ec;
    uVar10 = 3;
LAB_01acc4e4:
    uVar22 = (undefined1)uVar10;
    FUN_019bb7e0(local_64,local_60);
    if (uVar10 == 3) goto LAB_01acc8ec;
  }
  else {
    bVar23 = false;
    bVar21 = false;
    iVar13 = 0;
    pppppppbVar14 = (byte *******)0x0;
    pppppppbVar18 = local_58;
    do {
      pppppppbVar5 = (byte *******)((int)pppppppbVar18 + 1);
      puVar4 = (undefined1 *)(uint)*(byte *)pppppppbVar18;
      if (0x7fffffff < (uint)(int)(char)*(byte *)pppppppbVar18) {
        uVar10 = *(byte *)((int)pppppppbVar18 + 1) & 0x3f;
        if (puVar4 < (undefined1 *)0xe0) {
          puVar4 = (undefined1 *)(uVar10 | ((uint)puVar4 & 0x1f) << 6);
          pppppppbVar5 = (byte *******)((int)pppppppbVar18 + 2);
        }
        else {
          uVar10 = *(byte *)((int)pppppppbVar18 + 2) & 0x3f | uVar10 << 6;
          if (puVar4 < (undefined1 *)0xf0) {
            puVar4 = (undefined1 *)(uVar10 | ((uint)puVar4 & 0x1f) << 0xc);
            pppppppbVar5 = (byte *******)((int)pppppppbVar18 + 3);
          }
          else {
            puVar4 = (undefined1 *)
                     (*(byte *)((int)pppppppbVar18 + 3) & 0x3f | uVar10 << 6 |
                     ((uint)puVar4 & 7) << 0x12);
            pppppppbVar5 = pppppppbVar18 + 1;
          }
        }
      }
      pppppppbVar15 = (byte *******)&DAT_00000001;
      if (puVar4 < (undefined1 *)0x3f) {
        if (puVar4 < (undefined1 *)0xd) {
          if (puVar4 + -9 < (undefined1 *)0x2) {
LAB_01acc1cc:
            bVar21 = true;
            goto LAB_01acc240;
          }
        }
        else if (puVar4 < (undefined1 *)0x2f) {
          if (puVar4 == (undefined1 *)0xd) goto LAB_01acc1cc;
          if (puVar4 == (undefined1 *)0x23) break;
        }
        else {
          if (puVar4 == (undefined1 *)0x3a) {
            if (bVar23) goto LAB_01acc204;
            break;
          }
          if (puVar4 == (undefined1 *)0x2f) break;
        }
LAB_01acc22c:
        iVar13 = iVar13 + 1;
        if ((undefined1 *)0x7f < puVar4) {
          pppppppbVar15 = (byte *******)0x2;
        }
        if (((undefined1 *)0x7ff < puVar4) &&
           (pppppppbVar15 = (byte *******)&SUB_00000004, puVar4 < (undefined1 *)0x10000)) {
          pppppppbVar15 = (byte *******)&DAT_00000003;
        }
      }
      else if (puVar4 < (undefined1 *)0x5c) {
        if (puVar4 != (undefined1 *)0x5b) {
          if (puVar4 != (undefined1 *)0x3f) goto LAB_01acc22c;
          break;
        }
        iVar13 = iVar13 + 1;
        bVar23 = true;
      }
      else if (puVar4 == (undefined1 *)0x5c) {
        if (((uint)param_5 & 0xff) != 2) break;
LAB_01acc204:
        iVar13 = iVar13 + 1;
      }
      else {
        if (puVar4 != (undefined1 *)0x5d) {
          if (puVar4 != &DAT_00110000) goto LAB_01acc22c;
          break;
        }
        iVar13 = iVar13 + 1;
        bVar23 = false;
      }
LAB_01acc240:
      pppppppbVar14 = (byte *******)((int)pppppppbVar15 + (int)pppppppbVar14);
      pppppppbVar18 = pppppppbVar5;
    } while (pppppppbVar5 != local_30);
    if (!bVar21) goto LAB_01acc288;
    FUN_01ad0838(&local_64,&local_6c);
    bVar21 = true;
    pppppppbVar17 = local_60;
LAB_01acc300:
    if (((uint)param_5 & 0xff) != 1) {
      if ((local_5c == (byte *******)0x0) || (*(byte *)pppppppbVar17 != 0x5b)) goto LAB_01acc3e8;
      pppppppbVar18 = (byte *******)&SUB_00000004;
      if (((byte *)((int)pppppppbVar17 + (int)local_5c))[-1] == 0x5d) {
        if (((byte *)((int)local_5c + -1) == (byte *)0x0) ||
           ((char)*(byte *)((int)pppppppbVar17 + 1) < -0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(pppppppbVar17,local_5c,1,(byte *)((int)local_5c + -1),&DAT_01d2fd88);
        }
        pppppppbVar15 = (byte *******)&local_58;
        FUN_01acf484(pppppppbVar15,(byte *)((int)pppppppbVar17 + 1),(byte *)((int)local_5c + -2));
        pppppppbVar18 = (byte *******)((uint)local_58 >> 8 & 0xff);
        if ((char)local_58 != '\x01') {
          FUN_01bed4e2(&local_b8,(int)&local_58 + 2,0xf);
          local_80 = local_b8;
          local_7c = local_b4;
          puStack_78 = local_b0;
          uStack_74 = local_ac;
          local_70[0] = (undefined2)local_a8;
          uVar10 = 2;
          goto LAB_01acc344;
        }
      }
      goto LAB_01acc4d8;
    }
    if (local_5c == (byte *******)0x0) {
      pppppppbVar18 = (byte *******)0x0;
      goto LAB_01acc4d8;
    }
    pppppppbVar15 = (byte *******)&local_b8;
    FUN_01acf8a4(pppppppbVar15,pppppppbVar17);
    uVar10 = (uint)local_b8 & 0xff;
    pppppppbVar18 = (byte *******)((uint)local_b8 >> 8 & 0xff);
    if (uVar10 == 3) goto LAB_01acc4d8;
    FUN_01bed4e2(&local_80,(uint)pppppppbVar15 | 2,0x12);
LAB_01acc344:
    uVar22 = (undefined1)uVar10;
    pppppppbVar15 = local_6c;
    pppppppbVar14 = local_68;
    if (bVar21) goto LAB_01acc4e4;
  }
LAB_01acc4f8:
  FUN_01bed4e2((uint)&local_b8 | 2,&local_80,0x12);
  local_b8 = (byte *******)CONCAT31(CONCAT21(local_b8._2_2_,(char)pppppppbVar18),uVar22);
  local_7c = (byte *******)FUN_01ad0118;
  local_80 = (byte *******)&local_b8;
  iVar13 = FUN_012fa178(param_2,&DAT_01d2fdf8,&DAT_00590e5f,&local_80);
  if (iVar13 != 0) {
    puVar12 = &DAT_01d2fb98;
LAB_01acca58:
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_40,&DAT_01d2fce8,puVar12);
  }
  uVar19 = (uint)local_b8 & 0xff;
  uVar6 = param_2[2];
  uVar10 = uVar6;
  if (uVar19 == 0) {
    uVar10 = local_ac;
  }
  if (uVar19 == 0 && uVar10 == 0) {
    local_80 = pppppppbVar15;
    local_7c = pppppppbVar14;
    iVar13 = FUN_01acbbe8(":",1,&local_80);
    pppppppbVar18 = (byte *******)0x0;
    if (((uint)param_5 & 0xff) == 2 && iVar13 == 0) goto LAB_01acc568;
  }
  else {
LAB_01acc568:
    local_80 = pppppppbVar15;
    local_7c = pppppppbVar14;
    iVar13 = FUN_01ac9ff4(&local_80);
    if (iVar13 != 0x3a) {
      uVar20 = 0;
      puVar4 = param_5;
LAB_01acc844:
      uVar10 = local_ac;
      puVar8 = (undefined4 *)((uint)&local_b8 | 1);
      local_80 = (byte *******)*puVar8;
      local_7c._0_3_ = (undefined3)((uint)*(undefined4 *)((int)puVar8 + 3) >> 8);
      if (uVar19 == 0) {
        local_80._3_1_ = (undefined1)((uint)local_80 >> 0x18);
        uVar2 = CONCAT31(local_7c._0_3_,local_80._3_1_);
        uVar22 = 0x84;
        FUN_019bb7e0(uVar2);
        if (uVar10 != 0) {
          uVar10 = 1;
        }
        local_8c = extraout_r1;
        local_88 = uVar10;
      }
      else {
        local_8c = local_b0;
        local_88 = local_ac;
        pppppppbVar18 = local_80;
        uVar22 = (undefined1)local_a8;
        if (uVar19 == 1) {
          uVar10 = 2;
        }
        else {
          local_bc = local_b4._1_2_;
          uVar10 = 3;
          local_ba = local_b4._3_1_;
        }
      }
      local_8d = local_ba;
      local_94 = (undefined1)uVar10;
      local_8f = local_bc;
      local_93 = pppppppbVar18;
      local_84 = uVar22;
      if ((iVar16 + 2 == iVar9) || (pppppppbVar18 = (byte *******)0x0, uVar10 != 0)) {
        local_b8 = (byte *******)CONCAT31(local_b8._1_3_,1);
        iVar16 = param_2[2];
        uVar25 = FUN_01acb888(param_2,param_5,&local_b8,pppppppbVar15,pppppppbVar14);
        local_b8 = (byte *******)*param_2;
        local_b4 = (byte *******)param_2[1];
        local_b0 = (undefined *)param_2[2];
        local_ac = param_2[3];
        local_a8 = param_2[4];
        iStack_a4 = param_2[5];
        iStack_a0 = param_2[6];
        iStack_9c = param_2[7];
        iStack_98 = param_2[8];
        FUN_01accbb8(param_1,&local_b8,param_5,param_6,local_d8,iVar9,uVar6,&local_94,uVar20,puVar4,
                     iVar16,uVar25);
        return;
      }
      goto LAB_01acc8ec;
    }
    pppppppbVar18 = (byte *******)(uint)*(byte *)(param_2 + 8);
    bVar21 = false;
    puVar4 = (undefined1 *)0x0;
    pppppppbVar15 = local_80;
    pppppppbVar14 = local_7c;
    do {
      local_80 = pppppppbVar15;
      local_7c = pppppppbVar14;
      puVar7 = (undefined1 *)FUN_01ac9ff4(&local_80);
      if (puVar7 == &DAT_00110000) {
LAB_01acc614:
        if (bVar21) {
          iVar13 = param_2[1];
          if (param_6 != 0) {
            if (param_6 < uVar6) {
              if (*(char *)(iVar13 + param_6) < -0x40) goto LAB_01acc64c;
            }
            else if (param_6 != uVar6) {
LAB_01acc64c:
                    /* WARNING: Subroutine does not return */
              FUN_012fb514(iVar13,uVar6,0,param_6,&DAT_01d2fbb8);
            }
          }
          uVar24 = FUN_01ac9f18(iVar13,param_6);
          if (((uVar24 & 1) == 0) || (((uint)(uVar24 >> 0x20) & 0xffff) != ((uint)puVar4 & 0xffff)))
          {
            local_58 = (byte *******)CONCAT22(local_58._2_2_,(short)puVar4);
            local_7c = (byte *******)FUN_012fcf18;
            local_80 = (byte *******)&local_58;
            iVar13 = FUN_012fa178(param_2,&DAT_01d2fdf8,&DAT_005bdcec,&local_80);
            if (iVar13 != 0) {
              puVar12 = &DAT_01d2fba8;
              goto LAB_01acca58;
            }
            uVar19 = (uint)local_b8 & 0xff;
            uVar20 = 1;
            goto LAB_01acc844;
          }
        }
        else if (pppppppbVar18 == (byte *******)&DAT_00000001) {
          local_80 = pppppppbVar15;
          local_7c = pppppppbVar14;
          puVar7 = (undefined1 *)FUN_01ac9ff4(&local_80);
          if (puVar7 != &DAT_00110000) break;
        }
        uVar20 = 0;
        goto LAB_01acc844;
      }
      if ((undefined1 *)0x9 < puVar7 + -0x30) {
        if ((pppppppbVar18 != (byte *******)0x0) ||
           (((puVar7 + -0x23 < &DAT_0000001d &&
             ((1 << ((uint)(puVar7 + -0x23) & 0xff) & 0x10001001U) != 0)) ||
            (puVar7 == (undefined1 *)0x5c)))) goto LAB_01acc614;
        break;
      }
      bVar21 = true;
      puVar4 = puVar7 + -0x30 + (int)puVar4 * 10;
      pppppppbVar15 = local_80;
      pppppppbVar14 = local_7c;
    } while ((uint)puVar4 >> 0x10 == 0);
    pppppppbVar18 = (byte *******)0x2;
    if (uVar19 != 0) goto LAB_01acc8ec;
  }
  FUN_019bb7e0(local_b4,local_b0);
LAB_01acc8ec:
  iVar9 = *param_2;
  iVar16 = param_2[1];
  *param_1 = 2;
  *(char *)(param_1 + 1) = (char)pppppppbVar18;
  FUN_019bb7e0(iVar9,iVar16);
  return;
}

