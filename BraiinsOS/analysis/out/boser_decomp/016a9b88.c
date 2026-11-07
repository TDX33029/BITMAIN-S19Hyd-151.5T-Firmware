// FUN_016a9b88 @ 016a9b88 size=3632 calls_out=8 calls_in=4
// strings: 

void FUN_016a9b88(uint *param_1,uint *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  byte *pbVar23;
  undefined *puVar24;
  uint uVar25;
  uint *puVar26;
  uint uVar27;
  uint *puVar28;
  uint *puVar29;
  uint uVar30;
  uint *puVar31;
  uint *puVar32;
  uint *puVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  bool bVar37;
  ulonglong uVar38;
  undefined8 uVar39;
  uint *local_78;
  uint *local_74;
  uint local_50;
  uint local_34;
  uint *local_30;
  code *local_2c;
  
  uVar38 = FUN_016b394c(param_2,param_3);
  uVar3 = (uint)(uVar38 >> 0x20);
  if ((uVar38 & 1) == 0) {
    puVar33 = *(uint **)(param_3 + 0xc);
    puVar28 = *(uint **)(param_3 + 0x10);
    puVar32 = *(uint **)(param_3 + 0x14);
    if (puVar28 < puVar32) {
      iVar36 = *(int *)(param_3 + 8);
      uVar34 = param_2[0x57] & 0x1f;
      uVar4 = param_2[1];
      puVar19 = (uint *)(iVar36 + (int)puVar33);
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      uVar7 = param_2[4];
      uVar8 = param_2[5];
      puVar9 = (uint *)param_2[0x60];
      uVar10 = param_2[0x16];
      uVar11 = param_2[0x5c];
      uVar12 = param_2[0x5d];
      uVar13 = param_2[0x5e];
      uVar14 = param_2[0x59];
      uVar15 = param_2[0x5a];
      uVar16 = param_2[0x61];
      cVar1 = *(char *)(param_3 + 0x18);
      uVar22 = *param_2;
      uVar27 = uVar16 << 2;
      uVar25 = param_2[0x15];
      local_50 = 0;
      puVar29 = puVar28;
      local_78 = param_1;
      do {
        if (puVar33 <= puVar29) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(puVar29,puVar33,&DAT_01d0845c);
        }
        puVar26 = (uint *)(iVar36 + (int)puVar29);
        uVar3 = uVar3 + *(byte *)((int)param_2 + (byte)*puVar26 + 0x5c);
        if (uVar10 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar3,uVar10,&DAT_01d0828c);
        }
        uVar3 = *(uint *)(uVar25 + uVar3 * 4);
        if (uVar22 < uVar3) {
LAB_016a9f70:
          puVar28 = (uint *)((int)puVar29 + 1);
        }
        else {
          puVar28 = puVar32;
          if (((uVar3 == 0) || (uVar3 < uVar5)) || (uVar6 < uVar3)) {
            if ((uVar3 == 0) || (uVar3 < uVar7)) {
              if (uVar3 == 0) {
                if (local_50 != 0) {
                  puVar29 = local_74;
                }
                *param_1 = local_50 ^ 1;
                param_1[1] = (uint)puVar29;
                param_1[2] = (uint)local_78;
                return;
              }
LAB_016a9f5c:
              if (uVar4 == uVar3) {
                local_30 = (uint *)((uint)CONCAT21((short)((uint)local_30 >> 0x10),(byte)*puVar26)
                                   << 8);
                local_2c = (code *)puVar29;
                FUN_016cc61c(&local_30);
                uVar3 = FUN_016c2dec();
                *param_1 = 2;
                param_1[1] = uVar3;
                return;
              }
              goto LAB_016a9f70;
            }
            if (uVar8 < uVar3) goto LAB_016a9f5c;
            local_34 = uVar3 - uVar7 >> uVar34;
            if (uVar16 == 0) goto LAB_016aa944;
            if (*puVar9 <= local_34) goto LAB_016aa8a4;
            uVar20 = local_34 << 3 | 4;
            if (uVar27 <= uVar20) goto LAB_016aa950;
            uVar30 = (uint)*(byte *)((int)puVar9 + uVar20);
            uVar20 = local_34 << 3 | 5;
            uVar17 = uVar20 + uVar30;
            if ((CARRY4(uVar20,uVar30)) || (uVar27 < uVar17)) goto LAB_016aa864;
            if (3 < uVar30) goto LAB_016aa8f0;
            pbVar23 = (byte *)((int)puVar9 + uVar20);
            puVar18 = puVar26;
            switch(uVar30) {
            case 0:
              goto switchD_016a9e24_caseD_0;
            case 1:
              uVar20 = (uint)*pbVar23;
              uVar17 = (int)puVar33 - (int)puVar29;
              if (uVar17 < 4) {
                while (uVar20 != (byte)*puVar18) {
                  puVar18 = (uint *)((int)puVar18 + 1);
                  uVar17 = uVar17 - 1;
                  if (uVar17 == 0) goto LAB_016aa65c;
                }
              }
              else {
                uVar30 = uVar20 * 0x1010101;
                if ((~(0x1010100 - (*puVar26 ^ uVar30) | *puVar26 ^ uVar30) & 0x80808080) == 0) {
                  uVar35 = 4 - ((uint)puVar26 & 3);
                  puVar18 = (uint *)((int)puVar26 + uVar35);
                  if (uVar17 < 9) {
                    if (uVar17 <= uVar35) goto LAB_016aa65c;
                    iVar21 = (int)puVar33 + ((((uint)puVar26 & 3) - 4) - (int)puVar29);
                    while (uVar20 != (byte)*puVar18) {
                      puVar18 = (uint *)((int)puVar18 + 1);
                      iVar21 = iVar21 + -1;
                      if (iVar21 == 0) goto LAB_016aa65c;
                    }
                  }
                  else {
                    for (; puVar18 <= puVar19 + -2; puVar18 = puVar18 + 2) {
                      uVar17 = ~(0x1010100 - (*puVar18 ^ uVar30) | *puVar18 ^ uVar30);
                      bVar37 = (uVar17 & 0x80808080) != 0;
                      if (!bVar37) {
                        uVar17 = ~(0x1010100 - (puVar18[1] ^ uVar30) | puVar18[1] ^ uVar30);
                      }
                      if (bVar37 || (uVar17 & 0x80808080) != 0) break;
                    }
                    if (puVar19 <= puVar18) goto LAB_016aa65c;
                    while (uVar20 != (byte)*puVar18) {
                      puVar18 = (uint *)((int)puVar18 + 1);
                      if (puVar18 == puVar19) goto LAB_016aa65c;
                    }
                  }
                }
                else {
                  while (uVar20 != (byte)*puVar18) {
                    puVar18 = (uint *)((int)puVar18 + 1);
                    uVar17 = uVar17 - 1;
                    if (uVar17 == 0) goto LAB_016aa65c;
                  }
                }
              }
              break;
            case 2:
              uVar20 = (uint)*pbVar23;
              uVar30 = (int)puVar33 - (int)puVar29;
              uVar17 = (uint)pbVar23[1];
              if (uVar30 < 4) {
                while (uVar20 != (byte)*puVar18 && uVar17 != (byte)*puVar18) {
                  puVar18 = (uint *)((int)puVar18 + 1);
                  uVar30 = uVar30 - 1;
                  if (uVar30 == 0) goto LAB_016aa65c;
                }
              }
              else {
                uVar35 = *puVar26 ^ uVar20 * 0x1010101;
                if (((~(0x1010100 - uVar35 | uVar35) & 0x80808080) == 0) &&
                   (uVar35 = *puVar26 ^ uVar17 * 0x1010101,
                   (~(0x1010100 - uVar35 | uVar35) & 0x80808080) == 0)) {
                  puVar18 = (uint *)((uint)puVar26 & 0xfffffffc);
                  do {
                    puVar18 = puVar18 + 1;
                    if (puVar19 + -1 < puVar18) break;
                    uVar30 = *puVar18 ^ uVar20 * 0x1010101;
                    uVar30 = ~(0x1010100 - uVar30 | uVar30);
                    bVar37 = (uVar30 & 0x80808080) == 0;
                    if (bVar37) {
                      uVar30 = *puVar18 ^ uVar17 * 0x1010101;
                      uVar30 = ~(0x1010100 - uVar30 | uVar30);
                    }
                  } while (bVar37 && (uVar30 & 0x80808080) == 0);
                  if (puVar19 <= puVar18) goto LAB_016aa65c;
                  while (uVar20 != (byte)*puVar18 && uVar17 != (byte)*puVar18) {
                    puVar18 = (uint *)((int)puVar18 + 1);
                    if (puVar18 == puVar19) goto LAB_016aa65c;
                  }
                }
                else {
                  while (uVar20 != (byte)*puVar18 && uVar17 != (byte)*puVar18) {
                    uVar30 = uVar30 - 1;
                    puVar18 = (uint *)((int)puVar18 + 1);
                    if (uVar30 == 0) goto LAB_016aa65c;
                  }
                }
              }
              break;
            case 3:
              uVar39 = FUN_00655b94(*pbVar23,pbVar23[1],pbVar23[2],puVar26,
                                    (int)puVar33 - (int)puVar29);
              iVar21 = (int)((ulonglong)uVar39 >> 0x20);
              if ((int)uVar39 == 1) goto LAB_016aa514;
              goto LAB_016aa65c;
            }
            iVar21 = (int)puVar18 - (int)puVar26;
LAB_016aa514:
            puVar28 = (uint *)(iVar21 + (int)puVar29);
            goto LAB_016a9f74;
          }
          local_74 = (uint *)0x0;
          if (uVar13 != 1) {
            uVar17 = uVar3 - uVar5 >> uVar34;
            uVar20 = uVar17 << 1;
            if (uVar15 <= uVar17 * 2) goto LAB_016aa978;
            uVar20 = uVar20 | 1;
            if (uVar15 <= uVar20) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar20,uVar15,&DAT_01d0860c);
            }
            uVar17 = *(uint *)(uVar14 + uVar17 * 8);
            uVar20 = *(uint *)(uVar14 + uVar20 * 4);
            if ((CARRY4(uVar20,uVar17)) || (uVar12 < uVar20 + uVar17)) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(uVar17,uVar20 + uVar17,uVar12,&DAT_01d0867c);
            }
            if (uVar20 == 0) goto LAB_016aa960;
            local_74 = *(uint **)(uVar11 + uVar17 * 4);
          }
          if (cVar1 != '\0') {
            *param_1 = 0;
            param_1[1] = (uint)local_74;
            param_1[2] = (uint)puVar29;
            return;
          }
          local_50 = 1;
          local_78 = puVar29;
          if ((uVar3 < uVar7) || (uVar8 < uVar3)) goto LAB_016a9f70;
          local_34 = uVar3 - uVar7 >> uVar34;
          if (uVar16 == 0) {
LAB_016aa944:
            puVar24 = &DAT_01d09968;
            goto LAB_016aa968;
          }
          if (*puVar9 <= local_34) {
LAB_016aa8a4:
            local_30 = &local_34;
            local_2c = FUN_012fd02c;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_00587011,&local_30,&DAT_01d082dc);
          }
          uVar20 = local_34 << 3 | 4;
          if (uVar27 <= uVar20) {
LAB_016aa950:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar20,uVar27,&DAT_01d082bc);
          }
          uVar30 = (uint)*(byte *)((int)puVar9 + uVar20);
          uVar20 = local_34 << 3 | 5;
          uVar17 = uVar20 + uVar30;
          if ((CARRY4(uVar20,uVar30)) || (uVar27 < uVar17)) {
LAB_016aa864:
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(uVar20,uVar17,uVar27,&DAT_01d082cc);
          }
          if (3 < uVar30) {
LAB_016aa8f0:
            local_2c = FUN_012fd02c;
            local_30 = &local_34;
            local_34 = uVar30;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005af82d,&local_30,&DAT_01d082fc);
          }
          pbVar23 = (byte *)((int)puVar9 + uVar20);
          puVar18 = puVar26;
          switch(uVar30) {
          case 0:
switchD_016a9e24_caseD_0:
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_004ce59c,0x3d,&DAT_01d082ec);
          case 1:
            uVar20 = (uint)*pbVar23;
            uVar17 = (int)puVar33 - (int)puVar29;
            puVar31 = puVar33;
            if (uVar17 < 4) {
              while (uVar20 != (byte)*puVar18) {
                puVar31 = (uint *)((int)puVar31 + -1);
                puVar18 = (uint *)((int)puVar18 + 1);
                if (puVar29 == puVar31) goto LAB_016aa5d0;
              }
            }
            else {
              uVar30 = uVar20 * 0x1010101;
              if ((~(0x1010100 - (*puVar26 ^ uVar30) | *puVar26 ^ uVar30) & 0x80808080) == 0) {
                uVar35 = 4 - ((uint)puVar26 & 3);
                puVar18 = (uint *)((int)puVar26 + uVar35);
                if (uVar17 < 9) {
                  if (uVar17 <= uVar35) {
                    local_50 = 1;
                    goto LAB_016aa65c;
                  }
                  puVar31 = (uint *)((int)puVar33 + (((uint)puVar26 & 3) - 4));
                  while (uVar20 != (byte)*puVar18) {
                    puVar31 = (uint *)((int)puVar31 + -1);
                    puVar18 = (uint *)((int)puVar18 + 1);
                    if (puVar29 == puVar31) goto LAB_016aa5d0;
                  }
                }
                else {
                  for (; puVar18 <= puVar19 + -2; puVar18 = puVar18 + 2) {
                    uVar17 = ~(0x1010100 - (*puVar18 ^ uVar30) | *puVar18 ^ uVar30);
                    bVar37 = (uVar17 & 0x80808080) == 0;
                    if (bVar37) {
                      uVar17 = ~(0x1010100 - (puVar18[1] ^ uVar30) | puVar18[1] ^ uVar30);
                    }
                    if (!bVar37 || (uVar17 & 0x80808080) != 0) break;
                  }
                  if (puVar19 <= puVar18) goto LAB_016aa5d0;
                  while (uVar20 != (byte)*puVar18) {
                    puVar18 = (uint *)((int)puVar18 + 1);
                    if (puVar18 == puVar19) goto LAB_016aa5d0;
                  }
                }
              }
              else {
                while (uVar20 != (byte)*puVar18) {
                  puVar31 = (uint *)((int)puVar31 + -1);
                  puVar18 = (uint *)((int)puVar18 + 1);
                  if (puVar29 == puVar31) goto LAB_016aa5d0;
                }
              }
            }
            break;
          case 2:
            uVar20 = (uint)*pbVar23;
            uVar17 = (uint)pbVar23[1];
            puVar31 = puVar33;
            if ((uint)((int)puVar33 - (int)puVar29) < 4) {
              while (uVar20 != (byte)*puVar18 && uVar17 != (byte)*puVar18) {
                puVar31 = (uint *)((int)puVar31 + -1);
                puVar18 = (uint *)((int)puVar18 + 1);
                if (puVar29 == puVar31) goto LAB_016aa5d0;
              }
            }
            else {
              uVar30 = *puVar26 ^ uVar20 * 0x1010101;
              if (((~(0x1010100 - uVar30 | uVar30) & 0x80808080) == 0) &&
                 (uVar30 = *puVar26 ^ uVar17 * 0x1010101,
                 (~(0x1010100 - uVar30 | uVar30) & 0x80808080) == 0)) {
                puVar18 = (uint *)((uint)puVar26 & 0xfffffffc);
                do {
                  puVar18 = puVar18 + 1;
                  if (puVar19 + -1 < puVar18) break;
                  uVar30 = *puVar18;
                  uVar35 = uVar30 ^ uVar20 * 0x1010101;
                  bVar37 = (~(0x1010100 - uVar35 | uVar35) & 0x80808080) == 0;
                  if (bVar37) {
                    uVar30 = uVar30 ^ uVar17 * 0x1010101;
                    uVar30 = ~(0x1010100 - uVar30 | uVar30);
                  }
                } while (bVar37 && (uVar30 & 0x80808080) == 0);
                if (puVar19 <= puVar18) goto LAB_016aa5d0;
                while (uVar20 != (byte)*puVar18 && uVar17 != (byte)*puVar18) {
                  puVar18 = (uint *)((int)puVar18 + 1);
                  if (puVar18 == puVar19) goto LAB_016aa5d0;
                }
              }
              else {
                while (uVar20 != (byte)*puVar18 && uVar17 != (byte)*puVar18) {
                  puVar31 = (uint *)((int)puVar31 + -1);
                  puVar18 = (uint *)((int)puVar18 + 1);
                  if (puVar29 == puVar31) goto LAB_016aa5d0;
                }
              }
            }
            break;
          case 3:
            uVar39 = FUN_00655b94(*pbVar23,pbVar23[1],pbVar23[2],puVar26,(int)puVar33 - (int)puVar29
                                 );
            iVar21 = (int)((ulonglong)uVar39 >> 0x20);
            if ((int)uVar39 == 1) goto LAB_016aa404;
LAB_016aa5d0:
            local_50 = 1;
            goto LAB_016aa65c;
          }
          iVar21 = (int)puVar18 - (int)puVar26;
LAB_016aa404:
          puVar28 = (uint *)(iVar21 + (int)puVar29);
          local_50 = 1;
        }
LAB_016a9f74:
        puVar29 = puVar28;
      } while (puVar28 < puVar32);
    }
    else {
      local_50 = 0;
    }
LAB_016aa65c:
    if (puVar32 < puVar33) {
      bVar2 = *(byte *)(*(int *)(param_3 + 8) + (int)puVar32);
      uVar3 = uVar3 + *(byte *)((int)param_2 + bVar2 + 0x5c);
      if (param_2[0x16] <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar3,param_2[0x16],&DAT_01d0828c);
      }
      uVar3 = *(uint *)(param_2[0x15] + uVar3 * 4);
      if (((uVar3 == 0) || (uVar3 < param_2[2])) || (param_2[3] < uVar3)) {
        if ((uVar3 == 0) || (param_2[1] != uVar3)) goto LAB_016aa75c;
        local_30 = (uint *)((uint)CONCAT21((short)((uint)local_30 >> 0x10),bVar2) << 8);
        local_2c = (code *)puVar32;
        uVar3 = FUN_016cc61c(&local_30);
        goto LAB_016a9bb8;
      }
      puVar33 = puVar32;
      if (param_2[0x5e] == 1) goto LAB_016aa724;
      uVar15 = param_2[0x5a];
      uVar3 = uVar3 - param_2[2] >> (param_2[0x57] & 0x1f);
      uVar20 = uVar3 << 1;
      if (uVar15 <= uVar3 * 2) goto LAB_016aa978;
      uVar20 = uVar20 | 1;
      if (uVar15 <= uVar20) goto LAB_016aa9b0;
      uVar3 = *(uint *)(param_2[0x59] + uVar3 * 8);
      uVar27 = *(uint *)(param_2[0x59] + uVar20 * 4);
      if ((CARRY4(uVar27,uVar3)) || (param_2[0x5d] < uVar27 + uVar3)) goto LAB_016aa8e4;
      if (uVar27 == 0) goto LAB_016aa960;
      uVar27 = param_2[0x5c];
LAB_016aa834:
      uVar4 = 0;
      puVar28 = *(uint **)(uVar27 + uVar3 * 4);
    }
    else {
      uVar4 = FUN_016c2c08(*(byte *)((int)param_2 + 0x15b) + 1);
      uVar27 = (uVar4 & 0xffff) >> 8;
      if ((uVar4 & 1) != 0) {
        uVar27 = uVar4 >> 0x10;
      }
      uVar27 = uVar27 + uVar3;
      if (param_2[0x16] <= uVar27) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar27,param_2[0x16],&DAT_01d2f26c);
      }
      uVar3 = *(uint *)(param_2[0x15] + uVar27 * 4);
      if (((uVar3 == 0) || (uVar3 < param_2[2])) || (param_2[3] < uVar3)) {
LAB_016aa75c:
        if (local_50 == 0) {
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
          puVar28 = local_74;
          puVar33 = local_78;
        }
      }
      else {
        if (param_2[0x5e] != 1) {
          uVar15 = param_2[0x5a];
          uVar3 = uVar3 - param_2[2] >> (param_2[0x57] & 0x1f);
          uVar20 = uVar3 << 1;
          if (uVar15 <= uVar3 * 2) {
LAB_016aa978:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar20,uVar15,&DAT_01d0866c);
          }
          uVar20 = uVar20 | 1;
          if (uVar15 <= uVar20) {
LAB_016aa9b0:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar20,uVar15,&DAT_01d0860c);
          }
          uVar3 = *(uint *)(param_2[0x59] + uVar3 * 8);
          uVar27 = *(uint *)(param_2[0x59] + uVar20 * 4);
          if ((CARRY4(uVar27,uVar3)) || (param_2[0x5d] < uVar27 + uVar3)) {
LAB_016aa8e4:
                    /* WARNING: Subroutine does not return */
            FUN_012faff4();
          }
          if (uVar27 == 0) {
LAB_016aa960:
            puVar24 = &DAT_01d085fc;
LAB_016aa968:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(0,0,puVar24);
          }
          uVar27 = param_2[0x5c];
          goto LAB_016aa834;
        }
LAB_016aa724:
        uVar4 = 0;
        puVar28 = (uint *)0x0;
      }
    }
    *param_1 = uVar4;
    param_1[1] = (uint)puVar28;
    param_1[2] = (uint)puVar33;
  }
  else {
LAB_016a9bb8:
    uVar3 = FUN_016c2dec(uVar3);
    *param_1 = 2;
    param_1[1] = uVar3;
  }
  return;
}

