// FUN_01292dc4 @ 01292dc4 size=1448 calls_out=9 calls_in=1
// strings: 

void FUN_01292dc4(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  char cVar12;
  int unaff_r4;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  undefined4 uVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  undefined *puVar24;
  uint *puVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_58;
  int local_54;
  int local_4c;
  byte *local_48;
  byte *local_44;
  int local_40;
  byte *local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  byte *local_2c;
  undefined4 local_28;
  
  FUN_015ec424(&local_80,&DAT_003b6d73,0x1a);
  if (local_80 == -0x80000000) {
    local_54 = local_78;
    local_58 = local_7c;
    FUN_012951d4(&local_4c,&local_58);
    local_68 = (int)local_48;
    local_64 = (int)local_44;
    local_60 = local_40;
    if (local_4c == -0x7ffffffb) goto LAB_01292ea0;
    FUN_01295124(&local_80,&local_4c,&DAT_003b6d73,0x1a);
    if (local_80 != -0x7ffffffb) {
      *param_1 = local_80;
      param_1[1] = local_7c;
      param_1[2] = local_78;
      param_1[3] = local_74;
      param_1[4] = iStack_70;
      param_1[5] = iStack_6c;
      return;
    }
  }
  else {
    local_68 = local_80;
    local_64 = local_7c;
    local_60 = local_78;
LAB_01292ea0:
    local_7c = local_68;
    local_78 = local_64;
    local_74 = local_60;
  }
  iVar4 = local_78;
  iVar9 = local_7c;
  uVar26 = FUN_010ceb84(local_78,local_74);
  local_44 = (byte *)((ulonglong)uVar26 >> 0x20);
  local_48 = (byte *)uVar26;
  pbVar15 = (byte *)0x0;
  pbVar17 = local_48;
  do {
    pbVar13 = pbVar15;
    if (pbVar17 == local_48 + (int)local_44) goto LAB_01292fbc;
    pbVar18 = pbVar17 + 1;
    uVar20 = (uint)*pbVar17;
    if ((uint)(int)(char)*pbVar17 < 0x80000000) {
LAB_01292f4c:
      pbVar15 = pbVar18 + ((int)pbVar13 - (int)pbVar17);
      pbVar17 = pbVar18;
    }
    else {
      if (uVar20 < 0xe0) {
        uVar20 = pbVar17[1] & 0x3f | (uVar20 & 0x1f) << 6;
        pbVar18 = pbVar17 + 2;
        goto LAB_01292f4c;
      }
      uVar14 = pbVar17[2] & 0x3f | (pbVar17[1] & 0x3f) << 6;
      if (uVar20 < 0xf0) {
        uVar20 = uVar14 | (uVar20 & 0x1f) << 0xc;
        pbVar15 = pbVar17 + 3 + ((int)pbVar13 - (int)pbVar17);
        pbVar17 = pbVar17 + 3;
      }
      else {
        uVar20 = pbVar17[3] & 0x3f | uVar14 << 6 | (uVar20 & 7) << 0x12;
        pbVar15 = pbVar17 + 4 + ((int)pbVar13 - (int)pbVar17);
        pbVar17 = pbVar17 + 4;
      }
    }
  } while ((uVar20 == 0x2e) || (uVar20 - 0x30 < 10));
  if (pbVar13 == (byte *)0x0) {
    local_44 = (byte *)0x0;
  }
  else if (pbVar13 < local_44) {
    if ((char)local_48[(int)pbVar13] < -0x40) {
LAB_0129335c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(local_48,local_44,0,pbVar13,&DAT_018adf70);
    }
    local_44 = pbVar13;
  }
  else if (pbVar13 != local_44) goto LAB_0129335c;
LAB_01292fbc:
  local_28 = CONCAT22(local_28._2_2_,1);
  local_34 = 1;
  local_30 = 0;
  local_38 = 0x2e;
  local_40 = 0;
  local_4c = 0x2e;
  local_3c = local_44;
  local_2c = local_44;
  uVar27 = FUN_015bb1b4(&local_4c);
  iVar8 = (int)(uVar27 >> 0x20);
  pcVar5 = (char *)uVar27;
  iVar21 = 0x1f;
  if (pcVar5 == (char *)0x0) {
    puVar24 = &UNK_003b6d8d;
  }
  else {
    uVar28 = FUN_015bb1b4(&local_4c);
    iVar22 = (int)(uVar28 >> 0x20);
    pcVar6 = (char *)uVar28;
    if (pcVar6 == (char *)0x0) {
      puVar24 = &UNK_003b6dac;
    }
    else {
      uVar29 = FUN_015bb1b4(&local_4c);
      iVar11 = (int)(uVar29 >> 0x20);
      pcVar7 = (char *)uVar29;
      if (pcVar7 == (char *)0x0) {
        puVar24 = &UNK_003b6dcb;
      }
      else {
        iVar21 = 0x1d;
        puVar24 = &UNK_003b6e24;
        if (iVar8 != 0) {
          if (iVar8 == 1) {
            cVar12 = *pcVar5;
            if ((cVar12 == '+') || (cVar12 == '-')) goto LAB_01293094;
          }
          else {
            cVar12 = *pcVar5;
          }
          if (cVar12 == '+') {
            uVar27 = CONCAT44(iVar8 + -1,pcVar5 + 1);
          }
          iVar8 = (int)(uVar27 >> 0x20);
          if (uVar27 < 0x300000000) {
            if (iVar8 == 0) {
              uVar20 = 0;
            }
            else {
              uVar20 = *(byte *)uVar27 - 0x30;
              if (9 < uVar20) goto LAB_01293094;
              if (iVar8 != 1) {
                uVar14 = ((byte *)uVar27)[1] - 0x30;
                if (9 < uVar14) goto LAB_01293094;
                uVar20 = uVar14 + uVar20 * 10;
              }
            }
LAB_01293184:
            puVar24 = &UNK_003b6e07;
            if (iVar22 != 0) {
              if (iVar22 == 1) {
                cVar12 = *pcVar6;
                if ((cVar12 == '+') || (cVar12 == '-')) goto LAB_01293094;
              }
              else {
                cVar12 = *pcVar6;
              }
              if (cVar12 == '+') {
                uVar28 = CONCAT44(iVar22 + -1,pcVar6 + 1);
              }
              iVar8 = (int)(uVar28 >> 0x20);
              if (uVar28 < 0x300000000) {
                if (iVar8 == 0) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = *(byte *)uVar28 - 0x30;
                  if (9 < uVar14) goto LAB_01293094;
                  if (iVar8 != 1) {
                    uVar23 = ((byte *)uVar28)[1] - 0x30;
                    if (9 < uVar23) goto LAB_01293094;
                    uVar14 = uVar23 + uVar14 * 10;
                  }
                }
LAB_01293260:
                puVar24 = &DAT_003b6dea;
                if (iVar11 != 0) {
                  if (iVar11 == 1) {
                    cVar12 = *pcVar7;
                    if ((cVar12 == '+') || (cVar12 == '-')) goto LAB_01293094;
                  }
                  else {
                    cVar12 = *pcVar7;
                  }
                  uVar23 = 0;
                  if (cVar12 == '+') {
                    uVar29 = CONCAT44(iVar11 + -1,pcVar7 + 1);
                  }
                  if (uVar29 < 0x500000000) {
                    while( true ) {
                      iVar8 = (int)(uVar29 >> 0x20);
                      if (iVar8 == 0) break;
                      uVar19 = *(byte *)uVar29 - 0x30;
                      if (9 < uVar19) goto LAB_01293094;
                      uVar29 = CONCAT44(iVar8 + -1,(byte *)uVar29 + 1);
                      uVar23 = uVar19 + uVar23 * 10;
                    }
LAB_012932d8:
                    *param_1 = -0x7ffffffb;
                    param_1[1] = (uVar23 & 0xffff) + (uVar20 & 0xff) * 0x10000 | uVar14 << 0x18;
                    goto joined_r0x012932f0;
                  }
                  do {
                    iVar8 = (int)(uVar29 >> 0x20);
                    if (iVar8 == 0) goto LAB_012932d8;
                    uVar23 = (uVar23 & 0xffff) * 4 + (uVar23 & 0xffff);
                    if (uVar23 >> 0xf != 0) break;
                    uVar19 = *(byte *)uVar29 - 0x30;
                    if (9 < uVar19) break;
                    uVar29 = CONCAT44(iVar8 + -1,(byte *)uVar29 + 1);
                    uVar23 = (uVar23 * 2 & 0xffff) + (uVar19 & 0xffff);
                  } while (uVar23 >> 0x10 == 0);
                }
              }
              else {
                uVar14 = 0;
                do {
                  iVar8 = (int)(uVar28 >> 0x20);
                  if (iVar8 == 0) goto LAB_01293260;
                  uVar14 = (uVar14 & 0xff) * 4 + (uVar14 & 0xff);
                  if (uVar14 >> 7 != 0) break;
                  uVar23 = *(byte *)uVar28 - 0x30;
                  if (9 < uVar23) break;
                  uVar14 = (uVar14 * 2 & 0xff) + (uVar23 & 0xff);
                  uVar28 = CONCAT44(iVar8 + -1,(byte *)uVar28 + 1);
                } while (uVar14 >> 8 == 0);
              }
            }
          }
          else {
            uVar20 = 0;
            do {
              iVar8 = (int)(uVar27 >> 0x20);
              if (iVar8 == 0) goto LAB_01293184;
              uVar20 = (uVar20 & 0xff) * 4 + (uVar20 & 0xff);
              if (uVar20 >> 7 != 0) break;
              uVar14 = *(byte *)uVar27 - 0x30;
              if (9 < uVar14) break;
              uVar27 = CONCAT44(iVar8 + -1,(byte *)uVar27 + 1);
              uVar20 = (uVar20 * 2 & 0xff) + (uVar14 & 0xff);
            } while (uVar20 >> 8 == 0);
          }
        }
      }
    }
  }
LAB_01293094:
  iVar8 = thunk_FUN_016d4a50(iVar21);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar21);
  }
  FUN_016dd1aa(iVar8,puVar24,iVar21);
  param_1[2] = iVar8;
  *param_1 = (int)&DAT_80000004;
  param_1[1] = iVar21;
  param_1[3] = iVar21;
joined_r0x012932f0:
  if (iVar9 == 0) {
    return;
  }
  if (iVar4 == 0) {
    return;
  }
  iVar9 = FUN_016d3bc8();
  uVar20 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
     (uVar14 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar8 = uVar14 - 0x10, uVar14 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar14 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar22 = *(int *)(iVar9 + 8) + 0x10;
  iVar21 = iVar8 * uVar20 + iVar8 + -4;
  iVar8 = iVar22 + iVar21;
  if (4 < uVar14) {
    if (uVar14 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar14 = *(uint *)(iVar8 + -4);
    if (uVar14 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar8 - iVar4) < uVar14) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar8 - uVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar22 + iVar21) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar9 + 0x14);
  uVar14 = 1 << uVar20;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar19 = *(uint *)(iVar9 + 0x10);
    uVar23 = *(uint *)(iVar9 + 0xc) | uVar19;
    if ((uVar14 & uVar23) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar19 == 0) || (uVar23 + uVar14 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar9,uVar20);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar10 = (undefined4 *)FUN_016d2bc8();
      uVar16 = *puVar10;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar10 = uVar16;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar9 + 0x10) = uVar14 + uVar19;
      return;
    }
    puVar25 = (uint *)(iVar9 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar25);
      uVar23 = *puVar25;
      if (uVar19 != uVar23) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar25);
    } while (!bVar3);
    *puVar25 = uVar14 + uVar19;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar19 == uVar23) {
      return;
    }
  } while( true );
}

