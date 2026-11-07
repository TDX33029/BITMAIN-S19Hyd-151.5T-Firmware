// FUN_0160ad0c @ 0160ad0c size=2940 calls_out=11 calls_in=1
// strings: \'failed to read field complete headersfailed to read headersfailed to decode field's raw header valueincomplete multipart streamfailed to read streamfailed to lock multipart stateContent-Type is not multipart/form-datafailed to decode Content-Typemultipart boundary not found in Content-Type

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0160ad0c(int *param_1,uint param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  byte *pbVar12;
  uint uVar13;
  uint *puVar14;
  code *pcVar15;
  int iVar16;
  int iVar17;
  uint unaff_r5;
  byte *pbVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  bool bVar25;
  ulonglong uVar26;
  undefined *local_cc;
  uint local_a0;
  uint local_9c;
  uint local_80;
  byte *local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  int local_60;
  uint local_5c;
  uint local_54;
  code *local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  int local_30;
  uint local_2c;
  int local_28;
  
  bVar25 = (param_2 & 1) != 0;
  uVar22 = 4;
  pbVar4 = &DAT_0056ee18;
  if (bVar25) {
    uVar22 = 8;
    pbVar4 = &DAT_00570fc0;
  }
  iVar5 = -4;
  if (bVar25) {
    iVar5 = -8;
  }
  bVar1 = *pbVar4;
  local_7c = param_3;
LAB_0160ad58:
  uVar19 = param_4;
  if (uVar19 < 0x40) {
    uVar6 = 1;
    iVar16 = 1;
    pbVar18 = pbVar4;
    uVar20 = (uint)bVar1;
    do {
      if (uVar6 == 0) {
        if (pbVar18 == pbVar4 + uVar22) goto LAB_0160ae90;
      }
      else {
        if ((uint)((int)(pbVar4 + uVar22) - (int)pbVar18) <= uVar6) goto LAB_0160ae90;
        pbVar18 = pbVar18 + uVar6;
        uVar6 = 0;
      }
      iVar16 = iVar16 << 1;
      uVar20 = (uint)*pbVar18 + uVar20 * 2;
      pbVar18 = pbVar18 + 1;
    } while( true );
  }
  FUN_0160cbd4(&local_78,pbVar4,uVar22);
  uVar20 = local_38;
  uVar26 = (ulonglong)unaff_r5 << 0x20;
  local_2c = 0;
  local_30 = 1;
  if (local_38 <= uVar19) {
    uVar26 = (*local_48)(&local_78,&local_30,local_7c,uVar19,local_3c,local_38);
  }
  unaff_r5 = (uint)(uVar26 >> 0x20);
  if (local_40 != 0 && uVar20 != 0) {
    thunk_FUN_01be4678(local_3c);
  }
  if ((uVar26 & 1) != 0) goto LAB_0160ae30;
  goto LAB_0160af58;
LAB_0160ae90:
  if (uVar19 < uVar22) goto LAB_0160af58;
  uVar6 = 0;
  pbVar18 = local_7c;
  do {
    pbVar12 = pbVar18 + 1;
    uVar6 = (uint)*pbVar18 + uVar6 * 2;
    pbVar18 = pbVar12;
  } while (pbVar12 < local_7c + uVar22);
  pbVar18 = local_7c;
  while ((uVar20 != uVar6 || (iVar7 = FUN_015fc218(pbVar18,pbVar4,uVar22), iVar7 == 0))) {
    if (local_7c + iVar5 + uVar19 <= pbVar18) goto LAB_0160af58;
    bVar2 = *pbVar18;
    pbVar12 = pbVar18 + uVar22;
    pbVar18 = pbVar18 + 1;
    uVar6 = (uint)*pbVar12 + (uVar6 - iVar16 * (uint)bVar2) * 2;
  }
  unaff_r5 = (int)pbVar18 - (int)local_7c;
LAB_0160ae30:
  uVar20 = unaff_r5 + uVar22;
  if (uVar19 < uVar20) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar20,uVar19,uVar19,&DAT_01d05e70);
  }
  param_4 = uVar19 - uVar20;
  pbVar18 = local_7c + uVar20;
  if (unaff_r5 == 0) goto LAB_0160af20;
  uVar6 = unaff_r5 - 1;
  if (uVar19 <= uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar6,uVar19,&DAT_01d05e80);
  }
  pbVar12 = local_7c + uVar6;
  uVar6 = *pbVar12 - 9;
  if ((uVar6 < 0x18) && ((1 << (uVar6 & 0xff) & 0x80001bU) != 0)) goto LAB_0160af20;
  local_7c = pbVar18;
  if (*pbVar12 == 0x3b) goto LAB_0160af20;
  goto LAB_0160ad58;
  while (iVar7 = iVar16 + uVar19, uVar19 = uVar19 + 1, iVar7 != -2) {
LAB_0160af9c:
    if ((0x17 < pbVar18[uVar22 + uVar19 + 1] - 9) ||
       ((1 << (pbVar18[uVar22 + uVar19 + 1] - 9 & 0xff) & 0x80001bU) == 0)) {
      pbVar18 = pbVar4 + uVar19;
      if (*pbVar18 == 0x22) {
        uVar19 = iVar5 + ~uVar19;
        puVar11 = (uint *)(pbVar18 + 1);
        uVar26 = FUN_0160b908(puVar11,uVar19);
        uVar22 = (uint)(uVar26 >> 0x20);
        if ((uVar26 & 1) == 0) goto LAB_0160b024;
        if (uVar22 == 0) goto LAB_0160b004;
        bVar25 = false;
        goto LAB_0160b5d0;
      }
      break;
    }
  }
  iVar7 = 0;
  pbVar18 = pbVar4;
  do {
    iVar17 = iVar16 + iVar7;
    if ((0x17 < *pbVar18 - 9) || ((1 << (*pbVar18 - 9 & 0xff) & 0x80001bU) == 0)) {
      puVar11 = (uint *)(pbVar4 + iVar7);
      uVar19 = iVar5 - iVar7;
      iVar17 = iVar17 + 1;
      if (uVar19 < 4) {
        iVar5 = 0;
        goto LAB_0160b630;
      }
      uVar22 = *puVar11;
      if (((~(0x1010100 - (uVar22 ^ 0x3b3b3b3b) | uVar22) & 0x80808080) != 0) ||
         ((~(0x1010100 - (uVar22 ^ 0x20202020) | uVar22) & 0x80808080) != 0)) {
        iVar5 = 0;
        goto LAB_0160b72c;
      }
      puVar14 = (uint *)((uint)puVar11 & 0xfffffffc);
      goto LAB_0160b6c0;
    }
    iVar7 = iVar7 + 1;
    pbVar18 = pbVar18 + 1;
  } while (iVar17 != -2);
LAB_0160b004:
  bVar25 = false;
LAB_0160b008:
  uVar22 = 0;
  goto LAB_0160b00c;
  while( true ) {
    uVar22 = uVar22 + 1;
    if (uVar19 < uVar22) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar22,uVar19,uVar19,&DAT_01d05ea0);
    }
    uVar26 = FUN_0160b908((byte *)((int)puVar11 + uVar22),uVar19 - uVar22);
    if ((uVar26 & 1) == 0) goto LAB_0160b024;
    uVar22 = (int)(uVar26 >> 0x20) + uVar22;
    bVar25 = true;
    if (uVar22 == 0) break;
LAB_0160b5d0:
    if (uVar19 <= uVar22 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar22 - 1,uVar19,&DAT_01d05e90);
    }
    if (pbVar18[uVar22] != 0x5c) {
      if (uVar19 < uVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar22,uVar19,&DAT_01d05eb0);
      }
      goto LAB_0160b00c;
    }
  }
  goto LAB_0160b008;
  while( true ) {
    iVar5 = iVar5 + -1;
    iVar17 = iVar17 + 1;
    if (iVar17 == 0) break;
LAB_0160b630:
    if (pbVar18[-iVar5] == 0x20 || pbVar18[-iVar5] == 0x3b) goto LAB_0160b754;
  }
  goto LAB_0160b74c;
  while( true ) {
    uVar20 = *puVar14;
    uVar22 = ~(0x1010100 - (uVar20 ^ 0x3b3b3b3b) | uVar20);
    bVar25 = (uVar22 & 0x80808080) == 0;
    if (bVar25) {
      uVar22 = ~(0x1010100 - (uVar20 ^ 0x20202020) | uVar20);
    }
    if (!bVar25 || (uVar22 & 0x80808080) != 0) break;
LAB_0160b6c0:
    puVar14 = puVar14 + 1;
    if (puVar23 + -1 < puVar14) break;
  }
  if (puVar14 < puVar23) {
    do {
      if ((byte)*puVar14 == 0x20 || (byte)*puVar14 == 0x3b) goto LAB_0160b758;
      puVar14 = (uint *)((int)puVar14 + 1);
    } while (puVar14 != puVar23);
  }
  goto LAB_0160b74c;
LAB_0160b754:
  puVar14 = (uint *)(pbVar18 + -iVar5);
LAB_0160b758:
  uVar22 = (int)puVar14 - (int)puVar11;
  bVar25 = false;
  if (uVar19 < uVar22) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar22,uVar19,&DAT_01d05ec0);
  }
  goto LAB_0160b00c;
LAB_0160b354:
  local_9c = 0;
  uVar9 = uVar21;
  uVar13 = uVar21;
LAB_0160b46c:
  uVar9 = uVar9 - local_80;
  if ((uint)(local_30 - iVar16) < uVar9) {
    FUN_0132b898(&local_30,iVar16,uVar9,1,1);
    uVar6 = local_2c;
    iVar16 = local_28;
  }
  else {
  }
  FUN_01bed4e2(uVar6 + iVar16,uVar22 + local_80,uVar9);
  local_28 = iVar16 + uVar9;
  if (local_30 == local_28) {
    FUN_0132b898(&local_30,local_28,1,1,1);
  }
  *(undefined1 *)(local_2c + local_28) = 0x22;
  iVar16 = local_28 + 1;
  uVar6 = local_2c;
  local_80 = uVar13;
  local_28 = iVar16;
  goto LAB_0160b11c;
  while( true ) {
    if (local_3c <= local_68 - 1) goto LAB_0160b860;
    uVar9 = local_a0 + uVar8;
    if (local_44 <= local_a0 + uVar8) goto LAB_0160b870;
    iVar7 = uVar8 + local_a0;
    pcVar15 = (code *)(local_40 + uVar8);
    uVar8 = uVar8 - 1;
    if (*pcVar15 != local_48[iVar7]) break;
LAB_0160b414:
    if (uVar8 == 0xffffffff) {
      uVar24 = 0xffffffff;
      goto LAB_0160b468;
    }
  }
  local_a0 = local_a0 + local_60;
LAB_0160b44c:
  uVar8 = local_a0 + iVar5;
  if (local_44 <= uVar8) goto LAB_0160b534;
  goto LAB_0160b384;
  while (*(code *)(local_40 + uVar8) == local_48[uVar9]) {
LAB_0160b210:
    if (uVar8 <= uVar24) {
      uVar24 = 0;
LAB_0160b468:
      uVar9 = local_a0;
      uVar13 = local_a0 + local_3c;
      local_a0 = local_a0 + local_3c;
      goto LAB_0160b46c;
    }
    uVar8 = uVar8 - 1;
    if (local_3c <= uVar8) goto LAB_0160b860;
    uVar9 = uVar8 + local_a0;
    if (local_44 <= uVar9) {
      goto LAB_0160b870;
    }
  }
  local_a0 = local_a0 + local_60;
  uVar24 = local_3c - local_60;
LAB_0160b1f8:
  uVar8 = local_a0 + iVar5;
  if (local_44 <= uVar8) goto LAB_0160b534;
  goto LAB_0160b164;
LAB_0160b860:
  local_cc = &DAT_01d2e36c;
  uVar9 = uVar8;
  local_44 = local_3c;
LAB_0160b870:
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(uVar9,local_44,local_cc);
LAB_0160af20:
  if (param_4 != 0) {
    uVar22 = 0;
    do {
      if ((0x17 < pbVar18[uVar22] - 9) || ((1 << (pbVar18[uVar22] - 9 & 0xff) & 0x80001bU) == 0)) {
        if (pbVar18[uVar22] == 0x3d) {
          pbVar4 = pbVar18 + uVar22 + 1;
          iVar5 = param_4 + ~uVar22;
          puVar23 = (uint *)(pbVar4 + iVar5);
          puVar11 = puVar23;
          if (iVar5 == 0) goto LAB_0160b004;
          iVar16 = (uVar20 - uVar19) + uVar22;
          uVar19 = 0;
          goto LAB_0160af9c;
        }
        break;
      }
      uVar22 = uVar22 + 1;
    } while ((uVar20 - uVar19) + uVar22 != 0);
  }
LAB_0160af58:
  *param_1 = -0x7fffffff;
  return;
  while (iVar5 = iVar5 + -1, iVar17 != iVar5) {
LAB_0160b72c:
    if (pbVar18[-iVar5] == 0x20 || pbVar18[-iVar5] == 0x3b) goto LAB_0160b754;
  }
LAB_0160b74c:
  bVar25 = false;
  uVar22 = uVar19;
LAB_0160b00c:
  FUN_012fbd94(&local_78,puVar11,uVar22);
  uVar19 = local_70;
  uVar22 = local_74;
  if (local_78 == 1) {
LAB_0160b024:
    *param_1 = -0x7fffffff;
  }
  else {
    if (bVar25) {
      local_28 = 0;
      local_2c = 1;
      local_30 = 0;
      FUN_01306b30(&local_78,local_74,local_70,
                   "\\\"failed to read field complete headersfailed to read headersfailed to decode field\'s raw header valueincomplete multipart streamfailed to read streamfailed to lock multipart stateContent-Type is not multipart/form-datafailed to decode Content-Typemultipart boundary not found in Content-Type"
                   ,2);
      iVar5 = local_3c - 1;
      uVar20 = local_3c;
      if (local_3c < local_68) {
        uVar20 = local_68;
      }
      local_9c = local_6c;
      iVar16 = 0;
      local_a0 = local_5c;
      local_cc = &DAT_01d2e37c;
      local_80 = 0;
      uVar6 = 1;
      uVar21 = local_74;
      uVar24 = local_54;
LAB_0160b11c:
      if ((local_78 & 1) == 0) {
        if ((local_6c & 0x10000) == 0) {
          uVar8 = local_9c;
          do {
            if (uVar21 != 0) {
              if (uVar21 < local_44) {
                if ((char)local_48[uVar21] < -0x40) goto LAB_0160b838;
              }
              else if (uVar21 != local_44) {
LAB_0160b838:
                    /* WARNING: Subroutine does not return */
                FUN_012fb514(local_48,local_44,uVar21,local_44,&DAT_01d2e39c);
              }
            }
            if (uVar21 == local_44) {
              local_9c = 0;
              uVar9 = local_44;
              uVar13 = local_44;
              uVar21 = local_44;
              if ((uVar8 & 1) != 0) goto LAB_0160b46c;
              break;
            }
            pcVar15 = local_48 + uVar21;
            uVar9 = (uint)(byte)*pcVar15;
            if (0x7fffffff < (uint)(int)(char)*pcVar15) {
              if (uVar9 < 0xe0) {
                uVar9 = (byte)pcVar15[1] & 0x3f | (uVar9 & 0x1f) << 6;
              }
              else {
                uVar13 = (byte)pcVar15[2] & 0x3f | ((byte)pcVar15[1] & 0x3f) << 6;
                if (uVar9 < 0xf0) {
                  uVar9 = uVar13 | (uVar9 & 0x1f) << 0xc;
                }
                else {
                  uVar9 = (byte)pcVar15[3] & 0x3f | uVar13 << 6 | (uVar9 & 7) << 0x12;
                }
              }
            }
            if ((uVar8 & 1) != 0) goto LAB_0160b354;
            iVar7 = 1;
            if (0x7f < uVar9) {
              iVar7 = 2;
            }
            uVar8 = 1;
            if ((0x7ff < uVar9) && (iVar7 = 4, uVar9 < 0x10000)) {
              iVar7 = 3;
            }
            uVar21 = iVar7 + uVar21;
          } while( true );
        }
      }
      else {
        uVar8 = local_a0 + iVar5;
        if (uVar24 == 0xffffffff) {
          if (uVar8 < local_44) {
            uVar24 = local_9c & 0xff | local_6c & 0xffffff00;
LAB_0160b384:
            uVar9 = (byte)local_48[uVar8] & 0x3f;
            uVar8 = local_70 >> uVar9 | uVar24 << (0x20 - uVar9 & 0xff);
            if (-1 < (int)(uVar9 - 0x20)) {
              uVar8 = uVar24 >> (uVar9 - 0x20 & 0xff);
            }
            if ((uVar8 & 1) == 0) {
              local_a0 = local_a0 + local_3c;
            }
            else {
              uVar8 = local_68;
              do {
                uVar9 = uVar8;
                if (uVar20 == uVar9) {
                  uVar8 = local_68 - 1;
                  goto LAB_0160b414;
                }
                if (local_44 <= local_a0 + uVar9) {
                  uVar9 = local_a0 + local_68;
                  goto LAB_0160b824;
                }
                uVar8 = uVar9 + 1;
              } while (*(code *)(local_40 + uVar9) == local_48[uVar9 + local_a0]);
              local_a0 = (local_a0 - local_68) + uVar9 + 1;
            }
            goto LAB_0160b44c;
          }
        }
        else if (uVar8 < local_44) {
          uVar13 = local_9c & 0xff | local_6c & 0xffffff00;
LAB_0160b164:
          uVar9 = (byte)local_48[uVar8] & 0x3f;
          uVar8 = local_70 >> uVar9 | uVar13 << (0x20 - uVar9 & 0xff);
          if (-1 < (int)(uVar9 - 0x20)) {
            uVar8 = uVar13 >> (uVar9 - 0x20 & 0xff);
          }
          if ((uVar8 & 1) == 0) {
            local_a0 = local_a0 + local_3c;
          }
          else {
            uVar9 = local_68;
            if (local_68 < uVar24) {
              uVar9 = uVar24;
            }
            uVar8 = local_3c;
            if (local_3c < uVar9) {
              uVar8 = uVar9;
            }
            uVar3 = uVar9;
            do {
              uVar10 = uVar3;
              if (uVar8 == uVar10) {
                uVar8 = local_68;
                goto LAB_0160b210;
              }
              if (local_44 <= local_a0 + uVar10) {
                uVar9 = local_a0 + uVar9;
LAB_0160b824:
                local_cc = &DAT_01d2e38c;
                if (uVar9 < local_44) {
                  uVar9 = local_44;
                }
                goto LAB_0160b870;
              }
              uVar3 = uVar10 + 1;
            } while (*(code *)(local_40 + uVar10) == local_48[uVar10 + local_a0]);
            local_a0 = (local_a0 - local_68) + uVar10 + 1;
          }
          uVar24 = 0;
          goto LAB_0160b1f8;
        }
      }
LAB_0160b534:
      uVar19 = uVar19 - local_80;
      if ((uint)(local_30 - iVar16) < uVar19) {
        FUN_0132b898(&local_30,iVar16,uVar19,1,1);
        uVar6 = local_2c;
        iVar16 = local_28;
      }
      else {
      }
      FUN_01bed4e2(uVar6 + iVar16,uVar22 + local_80,uVar19);
      local_70 = iVar16 + uVar19;
      goto LAB_0160b588;
    }
    local_30 = -0x80000000;
    local_2c = local_74;
LAB_0160b588:
    *param_1 = local_30;
    param_1[1] = local_2c;
    param_1[2] = local_70;
  }
  return;
}

