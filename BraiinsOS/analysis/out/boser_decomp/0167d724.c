// FUN_0167d724 @ 0167d724 size=6120 calls_out=8 calls_in=5
// strings: 

/* WARNING: Type propagation algorithm not settling */

uint FUN_0167d724(uint *param_1,int *param_2,int *param_3)

{
  uint3 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  undefined *puVar17;
  uint *puVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  byte *pbVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  bool bVar38;
  bool bVar39;
  ulonglong uVar40;
  undefined8 uVar41;
  int local_68;
  uint local_64;
  undefined4 local_5c;
  code *local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined1 local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint *local_34;
  code *local_30;
  uint *local_2c;
  code *local_28;
  
  uVar26 = param_2[4];
  uVar32 = param_2[5];
  *param_3 = 0;
  if (uVar32 < uVar26) {
    return 0;
  }
  iVar20 = *param_2;
  if ((iVar20 - 1U < 2) || ((char)param_1[0x13] == '\x02')) {
    if (param_3[3] == 1) {
      uVar31 = param_3[4];
      if (param_3[5] != 0) {
        uVar27 = param_3[6];
        uVar26 = FUN_016ac924(param_1,uVar31);
        if (uVar27 < uVar26) {
          uVar26 = param_1[0x5e];
          iVar20 = 0;
          param_3[5] = 1;
          param_3[6] = uVar27 + 1;
          if (uVar26 != 1) {
            uVar12 = param_1[0x5a];
            uVar26 = uVar31 - param_1[2] >> (param_1[0x57] & 0x1f);
            uVar32 = uVar26 << 1;
            if (uVar12 <= uVar26 * 2) goto LAB_0167eecc;
            uVar32 = uVar32 | 1;
            if (uVar12 <= uVar32) goto LAB_0167eee8;
            uVar31 = param_1[0x5d];
            uVar26 = *(uint *)(param_1[0x59] + uVar26 * 8);
            uVar32 = *(uint *)(param_1[0x59] + uVar32 * 4);
            uVar12 = uVar32 + uVar26;
            if ((CARRY4(uVar32,uVar26)) || (uVar31 < uVar12)) goto LAB_0167ee48;
            if (uVar32 <= uVar27) goto LAB_0167ef04;
            iVar20 = *(int *)(param_1[0x5c] + uVar26 * 4 + uVar27 * 4);
          }
          iVar13 = param_3[7];
          *param_3 = 1;
          goto LAB_0167e1e0;
        }
      }
      uVar26 = param_3[7] + 1;
      param_3[7] = uVar26;
      if (uVar32 < uVar26) {
        return 0;
      }
    }
    else {
      param_3[7] = uVar26;
      uVar40 = FUN_016b394c(param_1,param_2);
      uVar31 = (uint)(uVar40 >> 0x20);
      if ((uVar40 & 1) != 0) {
        return uVar31;
      }
    }
    if (uVar26 < uVar32) {
      uVar27 = param_2[3];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      uVar5 = param_1[7];
      uVar22 = param_1[0x61];
      uVar6 = param_1[0x57] & 0x1f;
      puVar7 = (uint *)param_1[0x60];
      uVar12 = uVar22 << 2;
      uVar8 = param_1[0x16];
      uVar16 = *param_1;
      uVar35 = param_1[4];
      uVar36 = param_1[5];
      uVar33 = param_1[6];
      iVar20 = param_2[2];
      uVar19 = param_1[0x15];
      puVar9 = (uint *)(iVar20 + uVar27);
      do {
        if (uVar27 <= uVar26) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar26,uVar27,&DAT_01d0753c);
        }
        bVar15 = *(byte *)(iVar20 + uVar26);
        uVar31 = uVar31 + *(byte *)((int)param_1 + bVar15 + 0x5c);
        if (uVar8 <= uVar31) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar31,uVar8,&DAT_01d0828c);
        }
        uVar31 = *(uint *)(uVar19 + uVar31 * 4);
        if (uVar16 < uVar31) {
LAB_0167d95c:
          uVar26 = uVar26 + 1;
        }
        else {
          param_3[3] = 1;
          param_3[4] = uVar31;
          if (uVar31 == 0) {
LAB_0167da74:
            if ((uVar31 != 0 && uVar3 <= uVar31) && (uVar31 <= uVar4)) {
              uVar32 = param_1[0x5e];
              param_3[5] = 1;
              iVar20 = 0;
              param_3[6] = 1;
              if (uVar32 != 1) {
                uVar12 = param_1[0x5a];
                uVar31 = uVar31 - uVar3 >> uVar6;
                uVar32 = uVar31 << 1;
                if (uVar12 <= uVar31 * 2) goto LAB_0167eecc;
                uVar32 = uVar32 | 1;
                if (uVar12 <= uVar32) goto LAB_0167eee8;
                uVar31 = *(uint *)(param_1[0x59] + uVar31 * 8);
                uVar32 = *(uint *)(param_1[0x59] + uVar32 * 4);
                if ((CARRY4(uVar32,uVar31)) || (param_1[0x5d] < uVar32 + uVar31)) goto LAB_0167ee3c;
                if (uVar32 == 0) goto LAB_0167eef8;
                iVar20 = *(int *)(param_1[0x5c] + uVar31 * 4);
              }
              *param_3 = 1;
              param_3[1] = iVar20;
              param_3[2] = uVar26;
              return 0;
            }
            if ((uVar31 == 0) || (uVar31 < uVar35)) {
              if (uVar31 == 0) {
                return 0;
              }
            }
            else if (uVar31 <= uVar36) {
              local_34 = (uint *)(uVar31 - uVar35 >> uVar6);
              if (uVar22 == 0) goto LAB_0167ee9c;
              if ((uint *)*puVar7 <= local_34) goto LAB_0167edd0;
              uVar10 = (int)local_34 << 3 | 4;
              if (uVar12 <= uVar10) {
LAB_0167eeb0:
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar10,uVar12,&DAT_01d082bc);
              }
              puVar18 = (uint *)(uint)*(byte *)((int)puVar7 + uVar10);
              uVar10 = (int)local_34 << 3 | 5;
              uVar14 = uVar10 + (int)puVar18;
              if ((CARRY4(uVar10,(uint)puVar18)) || (uVar12 < uVar14)) {
LAB_0167edc0:
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(uVar10,uVar14,uVar12,&DAT_01d082cc);
              }
              if ((uint *)0x3 < puVar18) goto LAB_0167ee0c;
              pbVar23 = (byte *)((int)puVar7 + uVar10);
              uVar10 = uVar26 + 1;
              switch(puVar18) {
              case (uint *)0x0:
                goto switchD_0167da1c_caseD_0;
              case (uint *)0x1:
                uVar14 = uVar27 - uVar10;
                if (uVar14 != 0) {
                  uVar34 = (uint)*pbVar23;
                  puVar18 = (uint *)(iVar20 + uVar10);
                  if (uVar14 < 4) {
                    while (uVar34 != (byte)*puVar18) {
                      puVar18 = (uint *)((int)puVar18 + 1);
                      uVar14 = uVar14 - 1;
                      if (uVar14 == 0) goto LAB_0167e214;
                    }
                  }
                  else {
                    uVar28 = uVar34 * 0x1010101;
                    if ((~(0x1010100 - (*puVar18 ^ uVar28) | *puVar18 ^ uVar28) & 0x80808080) == 0)
                    {
                      uVar37 = (uint)puVar18 & 3;
                      uVar21 = 4 - uVar37;
                      puVar18 = (uint *)((int)puVar18 + uVar21);
                      if (uVar14 < 9) {
                        if (uVar21 < uVar14) {
                          iVar13 = ((uVar27 - 5) + uVar37) - uVar26;
                          while (uVar34 != (byte)*puVar18) {
                            puVar18 = (uint *)((int)puVar18 + 1);
                            iVar13 = iVar13 + -1;
                            if (iVar13 == 0) goto LAB_0167e214;
                          }
                          goto LAB_0167e038;
                        }
                      }
                      else {
                        for (; puVar18 <= puVar9 + -2; puVar18 = puVar18 + 2) {
                          uVar14 = ~(0x1010100 - (*puVar18 ^ uVar28) | *puVar18 ^ uVar28);
                          bVar38 = (uVar14 & 0x80808080) != 0;
                          if (!bVar38) {
                            uVar14 = ~(0x1010100 - (puVar18[1] ^ uVar28) | puVar18[1] ^ uVar28);
                          }
                          if (bVar38 || (uVar14 & 0x80808080) != 0) break;
                        }
                        if (puVar18 < puVar9) {
                          while (uVar34 != (byte)*puVar18) {
                            puVar18 = (uint *)((int)puVar18 + 1);
                            if (puVar18 == puVar9) goto LAB_0167e214;
                          }
                          goto LAB_0167e038;
                        }
                      }
                      break;
                    }
                    while (uVar34 != (byte)*puVar18) {
                      puVar18 = (uint *)((int)puVar18 + 1);
                      uVar14 = uVar14 - 1;
                      if (uVar14 == 0) goto LAB_0167e214;
                    }
                  }
LAB_0167e038:
                  iVar13 = (int)puVar18 - (iVar20 + uVar10);
                  goto LAB_0167e0ec;
                }
                break;
              case (uint *)0x2:
                if (uVar27 != uVar10) {
                  uVar14 = (uint)*pbVar23;
                  uVar34 = (uint)pbVar23[1];
                  puVar18 = (uint *)(iVar20 + uVar10);
                  uVar28 = uVar27 - uVar10;
                  if (uVar28 < 4) {
                    while (uVar14 != (byte)*puVar18 && uVar34 != (byte)*puVar18) {
                      puVar18 = (uint *)((int)puVar18 + 1);
                      uVar28 = uVar28 - 1;
                      if (uVar28 == 0) goto LAB_0167e214;
                    }
                  }
                  else {
                    uVar21 = *puVar18 ^ uVar14 * 0x1010101;
                    if (((~(0x1010100 - uVar21 | uVar21) & 0x80808080) == 0) &&
                       (uVar21 = *puVar18 ^ uVar34 * 0x1010101,
                       (~(0x1010100 - uVar21 | uVar21) & 0x80808080) == 0)) {
                      puVar18 = (uint *)((uint)puVar18 & 0xfffffffc);
                      do {
                        puVar18 = puVar18 + 1;
                        if (puVar9 + -1 < puVar18) break;
                        uVar28 = *puVar18 ^ uVar14 * 0x1010101;
                        uVar28 = ~(0x1010100 - uVar28 | uVar28);
                        bVar38 = (uVar28 & 0x80808080) == 0;
                        if (bVar38) {
                          uVar28 = *puVar18 ^ uVar34 * 0x1010101;
                          uVar28 = ~(0x1010100 - uVar28 | uVar28);
                        }
                      } while (bVar38 && (uVar28 & 0x80808080) == 0);
                      if (puVar9 <= puVar18) break;
                      while (uVar14 != (byte)*puVar18 && uVar34 != (byte)*puVar18) {
                        puVar18 = (uint *)((int)puVar18 + 1);
                        if (puVar18 == puVar9) goto LAB_0167e214;
                      }
                    }
                    else {
                      while (uVar14 != (byte)*puVar18 && uVar34 != (byte)*puVar18) {
                        puVar18 = (uint *)((int)puVar18 + 1);
                        uVar28 = uVar28 - 1;
                        if (uVar28 == 0) goto LAB_0167e214;
                      }
                    }
                  }
                  goto LAB_0167e038;
                }
                break;
              case (uint *)0x3:
                goto switchD_0167da1c_caseD_3;
              }
LAB_0167e214:
              param_3[7] = uVar32;
              break;
            }
            uVar1 = CONCAT21(local_5c._2_2_,bVar15);
            local_58 = (code *)uVar26;
            goto LAB_0167eda0;
          }
          bVar39 = uVar31 <= uVar33;
          bVar38 = uVar33 == uVar31;
          if (!bVar39 || bVar38) {
            bVar39 = uVar5 <= uVar31;
            bVar38 = uVar31 == uVar5;
          }
          if (bVar39 && !bVar38) goto LAB_0167da74;
          if ((uVar31 < uVar35) || (uVar36 < uVar31)) goto LAB_0167d95c;
          local_34 = (uint *)(uVar31 - uVar35 >> uVar6);
          if (uVar22 == 0) goto LAB_0167ee9c;
          if ((uint *)*puVar7 <= local_34) goto LAB_0167edd0;
          uVar10 = (int)local_34 << 3 | 4;
          if (uVar12 <= uVar10) goto LAB_0167eeb0;
          puVar18 = (uint *)(uint)*(byte *)((int)puVar7 + uVar10);
          uVar10 = (int)local_34 << 3 | 5;
          uVar14 = uVar10 + (int)puVar18;
          if ((CARRY4(uVar10,(uint)puVar18)) || (uVar12 < uVar14)) goto LAB_0167edc0;
          if ((uint *)0x3 < puVar18) goto LAB_0167ee0c;
          pbVar23 = (byte *)((int)puVar7 + uVar10);
          uVar10 = uVar26 + 1;
          switch(puVar18) {
          case (uint *)0x0:
            goto switchD_0167da1c_caseD_0;
          case (uint *)0x1:
            uVar14 = uVar27 - uVar10;
            if (uVar14 == 0) goto LAB_0167e214;
            uVar34 = (uint)*pbVar23;
            puVar18 = (uint *)(iVar20 + uVar10);
            if (uVar14 < 4) {
              while (uVar34 != (byte)*puVar18) {
                puVar18 = (uint *)((int)puVar18 + 1);
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_0167e214;
              }
            }
            else {
              uVar28 = uVar34 * 0x1010101;
              if ((~(0x1010100 - (*puVar18 ^ uVar28) | *puVar18 ^ uVar28) & 0x80808080) == 0) {
                uVar37 = (uint)puVar18 & 3;
                uVar21 = 4 - uVar37;
                puVar18 = (uint *)((int)puVar18 + uVar21);
                if (uVar14 < 9) {
                  if (uVar14 <= uVar21) goto LAB_0167e214;
                  iVar13 = ((uVar27 - 5) + uVar37) - uVar26;
                  while (uVar34 != (byte)*puVar18) {
                    puVar18 = (uint *)((int)puVar18 + 1);
                    iVar13 = iVar13 + -1;
                    if (iVar13 == 0) goto LAB_0167e214;
                  }
                }
                else {
                  for (; puVar18 <= puVar9 + -2; puVar18 = puVar18 + 2) {
                    uVar14 = ~(0x1010100 - (*puVar18 ^ uVar28) | *puVar18 ^ uVar28);
                    bVar38 = (uVar14 & 0x80808080) != 0;
                    if (!bVar38) {
                      uVar14 = ~(0x1010100 - (puVar18[1] ^ uVar28) | puVar18[1] ^ uVar28);
                    }
                    if (bVar38 || (uVar14 & 0x80808080) != 0) break;
                  }
                  if (puVar9 <= puVar18) goto LAB_0167e214;
                  while (uVar34 != (byte)*puVar18) {
                    puVar18 = (uint *)((int)puVar18 + 1);
                    if (puVar18 == puVar9) goto LAB_0167e214;
                  }
                }
              }
              else {
                while (uVar34 != (byte)*puVar18) {
                  puVar18 = (uint *)((int)puVar18 + 1);
                  uVar14 = uVar14 - 1;
                  if (uVar14 == 0) goto LAB_0167e214;
                }
              }
            }
LAB_0167e0d0:
            iVar13 = (int)puVar18 - (iVar20 + uVar10);
            break;
          case (uint *)0x2:
            if (uVar27 != uVar10) {
              uVar14 = (uint)*pbVar23;
              uVar34 = (uint)pbVar23[1];
              puVar18 = (uint *)(iVar20 + uVar10);
              uVar28 = uVar27 - uVar10;
              if (uVar28 < 4) {
                while (uVar14 != (byte)*puVar18 && uVar34 != (byte)*puVar18) {
                  puVar18 = (uint *)((int)puVar18 + 1);
                  uVar28 = uVar28 - 1;
                  if (uVar28 == 0) goto LAB_0167e214;
                }
              }
              else {
                uVar21 = *puVar18 ^ uVar14 * 0x1010101;
                if (((~(0x1010100 - uVar21 | uVar21) & 0x80808080) == 0) &&
                   (uVar21 = *puVar18 ^ uVar34 * 0x1010101,
                   (~(0x1010100 - uVar21 | uVar21) & 0x80808080) == 0)) {
                  puVar18 = (uint *)((uint)puVar18 & 0xfffffffc);
                  do {
                    puVar18 = puVar18 + 1;
                    if (puVar9 + -1 < puVar18) break;
                    uVar28 = *puVar18 ^ uVar14 * 0x1010101;
                    uVar28 = ~(0x1010100 - uVar28 | uVar28);
                    bVar38 = (uVar28 & 0x80808080) == 0;
                    if (bVar38) {
                      uVar28 = *puVar18 ^ uVar34 * 0x1010101;
                      uVar28 = ~(0x1010100 - uVar28 | uVar28);
                    }
                  } while (bVar38 && (uVar28 & 0x80808080) == 0);
                  if (puVar9 <= puVar18) goto LAB_0167e214;
                  while (uVar14 != (byte)*puVar18 && uVar34 != (byte)*puVar18) {
                    puVar18 = (uint *)((int)puVar18 + 1);
                    if (puVar18 == puVar9) goto LAB_0167e214;
                  }
                }
                else {
                  while (uVar14 != (byte)*puVar18 && uVar34 != (byte)*puVar18) {
                    puVar18 = (uint *)((int)puVar18 + 1);
                    uVar28 = uVar28 - 1;
                    if (uVar28 == 0) goto LAB_0167e214;
                  }
                }
              }
              goto LAB_0167e0d0;
            }
            goto LAB_0167e214;
          case (uint *)0x3:
switchD_0167da1c_caseD_3:
            uVar41 = FUN_00655b94(*pbVar23,pbVar23[1],pbVar23[2],iVar20 + uVar26 + 1,
                                  uVar27 - (uVar26 + 1));
            iVar13 = (int)((ulonglong)uVar41 >> 0x20);
            if ((int)uVar41 != 1) goto LAB_0167e214;
          }
LAB_0167e0ec:
          uVar26 = iVar13 + uVar26 + 1;
        }
        param_3[7] = uVar26;
      } while (uVar26 < uVar32);
    }
    else {
      uVar27 = param_2[3];
    }
    if (uVar32 < uVar27) {
      uVar27 = param_1[0x16];
      bVar15 = *(byte *)(param_2[2] + uVar32);
      uVar31 = uVar31 + *(byte *)((int)param_1 + bVar15 + 0x5c);
      if (uVar27 <= uVar31) {
LAB_0167ee7c:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar31,uVar27,&DAT_01d0828c);
      }
      uVar26 = *(uint *)(param_1[0x15] + uVar31 * 4);
      if (((uVar26 != 0) && (param_1[2] <= uVar26)) && (uVar26 <= param_1[3])) {
        iVar20 = 0;
        uVar27 = uVar32;
        if (param_1[0x5e] != 1) {
          uVar12 = param_1[0x5a];
          uVar31 = uVar26 - param_1[2] >> (param_1[0x57] & 0x1f);
          uVar32 = uVar31 << 1;
          if (uVar12 <= uVar31 * 2) goto LAB_0167eecc;
          uVar32 = uVar32 | 1;
          if (uVar12 <= uVar32) goto LAB_0167eee8;
          uVar31 = *(uint *)(param_1[0x59] + uVar31 * 8);
          uVar32 = *(uint *)(param_1[0x59] + uVar32 * 4);
          if ((CARRY4(uVar32,uVar31)) || (param_1[0x5d] < uVar32 + uVar31)) goto LAB_0167ee3c;
          goto LAB_0167ea70;
        }
        goto LAB_0167ea80;
      }
      uVar31 = 0;
      if (uVar26 != 0) {
        uVar27 = param_1[1];
LAB_0167e9d8:
        uVar31 = 0;
        if (uVar27 == uVar26) {
          local_5c = (uint **)((uint)CONCAT21((short)((uint)local_5c >> 0x10),bVar15) << 8);
          local_58 = (code *)uVar32;
          uVar31 = FUN_016cc61c(&local_5c);
        }
      }
    }
    else {
      uVar32 = FUN_016c2c08(*(byte *)((int)param_1 + 0x15b) + 1);
      uVar12 = param_1[0x16];
      uVar26 = (uVar32 & 0xffff) >> 8;
      if ((uVar32 & 1) != 0) {
        uVar26 = uVar32 >> 0x10;
      }
      uVar26 = uVar26 + uVar31;
      if (uVar12 <= uVar26) {
LAB_0167eec0:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar26,uVar12,&DAT_01d2f26c);
      }
      uVar31 = 0;
      uVar26 = *(uint *)(param_1[0x15] + uVar26 * 4);
      if (((uVar26 != 0) && (param_1[2] <= uVar26)) && (uVar26 <= param_1[3])) {
        iVar20 = 0;
        if (param_1[0x5e] != 1) {
          uVar12 = param_1[0x5a];
          uVar31 = uVar26 - param_1[2] >> (param_1[0x57] & 0x1f);
          uVar32 = uVar31 << 1;
          if (uVar12 <= uVar31 * 2) goto LAB_0167eecc;
          uVar32 = uVar32 | 1;
          if (uVar12 <= uVar32) goto LAB_0167eee8;
          uVar31 = *(uint *)(param_1[0x59] + uVar31 * 8);
          uVar32 = *(uint *)(param_1[0x59] + uVar32 * 4);
          if ((CARRY4(uVar32,uVar31)) || (param_1[0x5d] < uVar32 + uVar31)) goto LAB_0167ee3c;
LAB_0167ea70:
          if (uVar32 == 0) {
LAB_0167eef8:
            puVar17 = &DAT_01d085fc;
LAB_0167eea4:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(0,0,puVar17);
          }
          iVar20 = *(int *)(param_1[0x5c] + uVar31 * 4);
        }
LAB_0167ea80:
        param_3[1] = iVar20;
        param_3[2] = uVar27;
LAB_0167ea88:
        *param_3 = 1;
        param_3[3] = 1;
        uVar31 = 0;
        param_3[4] = uVar26;
        goto LAB_0167ea98;
      }
    }
  }
  else {
    iVar13 = param_2[1];
    uVar12 = param_1[100];
    if (param_3[3] == 1) {
      uVar31 = param_3[4];
      if (param_3[5] != 0) {
        uVar27 = param_3[6];
        uVar26 = FUN_016ac924(param_1,uVar31);
        if (uVar27 < uVar26) {
          uVar26 = param_1[0x5e];
          iVar20 = 0;
          param_3[5] = 1;
          param_3[6] = uVar27 + 1;
          if (uVar26 != 1) {
            uVar12 = param_1[0x5a];
            uVar26 = uVar31 - param_1[2] >> (param_1[0x57] & 0x1f);
            uVar32 = uVar26 << 1;
            if (uVar12 <= uVar26 * 2) goto LAB_0167eecc;
            uVar32 = uVar32 | 1;
            if (uVar12 <= uVar32) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar32,uVar12,&DAT_01d0860c);
            }
            uVar31 = param_1[0x5d];
            uVar26 = *(uint *)(param_1[0x59] + uVar26 * 8);
            uVar32 = *(uint *)(param_1[0x59] + uVar32 * 4);
            uVar12 = uVar32 + uVar26;
            if ((CARRY4(uVar32,uVar26)) || (uVar31 < uVar12)) {
LAB_0167ee48:
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(uVar26,uVar12,uVar31,&DAT_01d0867c);
            }
            if (uVar32 <= uVar27) {
LAB_0167ef04:
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar27,uVar32,&DAT_01d085fc);
            }
            iVar20 = *(int *)(param_1[0x5c] + uVar26 * 4 + uVar27 * 4);
          }
          iVar13 = param_3[7];
          *param_3 = 1;
LAB_0167e1e0:
          param_3[1] = iVar20;
          param_3[2] = iVar13;
          return 0;
        }
      }
      uVar26 = param_3[7] + 1;
      param_3[7] = uVar26;
      if (uVar32 < uVar26) {
        return 0;
      }
    }
    else {
      param_3[7] = uVar26;
      uVar40 = FUN_016b394c(param_1,param_2);
      uVar31 = (uint)(uVar40 >> 0x20);
      if ((uVar40 & 1) != 0) {
        return uVar31;
      }
    }
    if (uVar26 < uVar32) {
      uVar4 = param_2[3];
      uVar5 = param_1[0x57];
      uVar36 = param_1[0x10];
      uVar6 = param_1[2];
      uVar8 = param_1[3];
      uVar16 = param_1[4];
      uVar19 = param_1[5];
      uVar22 = param_1[6];
      uVar33 = param_1[7];
      puVar7 = (uint *)param_1[0x60];
      uVar35 = param_1[0x61];
      iVar24 = param_2[2];
      iVar2 = param_2[6];
      uVar34 = *param_1;
      uVar14 = param_1[0x15];
      uVar27 = param_1[0x16];
      uVar3 = uVar35 << 2;
      uVar10 = param_1[0x11];
      puVar9 = (uint *)(iVar24 + uVar4);
LAB_0167e438:
      if (uVar4 <= uVar26) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar26,uVar4,&DAT_01d0753c);
      }
      bVar15 = *(byte *)(iVar24 + uVar26);
      uVar31 = uVar31 + *(byte *)((int)param_1 + bVar15 + 0x5c);
      if (uVar27 <= uVar31) goto LAB_0167ee7c;
      uVar31 = *(uint *)(uVar14 + uVar31 * 4);
      if (uVar34 < uVar31) {
LAB_0167e464:
        uVar28 = uVar26 + 1;
        param_3[7] = uVar28;
        goto LAB_0167e8e8;
      }
      param_3[3] = 1;
      param_3[4] = uVar31;
      if (uVar31 != 0) {
        bVar39 = uVar31 <= uVar22;
        bVar38 = uVar22 == uVar31;
        if (!bVar39 || bVar38) {
          bVar39 = uVar33 <= uVar31;
          bVar38 = uVar31 == uVar33;
        }
        if (!bVar39 || bVar38) {
          (**(code **)(uVar10 + 0x10))
                    (&local_68,uVar36 + 8 + (*(int *)(uVar10 + 8) - 1U & 0xfffffff8),iVar24,uVar4,
                     uVar26,uVar32);
          uVar28 = local_64;
          if (local_68 != 1) {
            return 0;
          }
          if (local_64 <= uVar26) goto LAB_0167e464;
          param_3[7] = local_64;
          if (uVar12 == 0) {
            bVar39 = uVar4 <= uVar32;
            bVar38 = uVar32 == uVar4;
            if (!bVar39 || bVar38) {
              bVar39 = uVar32 + 1 <= local_64;
              bVar38 = local_64 == uVar32 + 1;
            }
            local_40 = local_64;
            local_5c = (uint **)iVar20;
            local_58 = (code *)iVar13;
            local_54 = iVar24;
            local_50 = uVar4;
            local_48 = uVar32;
            local_44 = (char)iVar2;
            local_3c = uVar32;
            if (bVar39 && !bVar38) {
              local_30 = FUN_0065fd28;
              local_34 = &local_40;
              local_28 = FUN_012fd02c;
              local_2c = &local_38;
              local_38 = uVar4;
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_005a4e9e,&local_34,&DAT_01d08154);
            }
            local_4c = local_64;
            uVar40 = FUN_016b394c(param_1,&local_5c);
            uVar31 = (uint)(uVar40 >> 0x20);
            if ((uVar40 & 1) != 0) {
              return uVar31;
            }
          }
          goto LAB_0167e8e8;
        }
      }
      if ((uVar31 != 0 && uVar6 <= uVar31) && (uVar31 <= uVar8)) {
        param_3[5] = 1;
        param_3[6] = 1;
        iVar20 = 0;
        if (param_1[0x5e] != 1) {
          uVar12 = param_1[0x5a];
          uVar31 = uVar31 - uVar6 >> (uVar5 & 0x1f);
          uVar32 = uVar31 << 1;
          if (uVar12 <= uVar31 * 2) goto LAB_0167eecc;
          uVar32 = uVar32 | 1;
          if (uVar12 <= uVar32) goto LAB_0167eee8;
          uVar31 = *(uint *)(param_1[0x59] + uVar31 * 8);
          uVar32 = *(uint *)(param_1[0x59] + uVar32 * 4);
          if ((CARRY4(uVar32,uVar31)) || (param_1[0x5d] < uVar32 + uVar31)) goto LAB_0167ee3c;
          if (uVar32 == 0) goto LAB_0167eef8;
          iVar20 = *(int *)(param_1[0x5c] + uVar31 * 4);
        }
        *param_3 = 1;
        param_3[1] = iVar20;
        param_3[2] = uVar26;
        return 0;
      }
      if ((uVar31 == 0) || (uVar31 < uVar16)) {
        if (uVar31 == 0) {
          return 0;
        }
LAB_0167ed98:
        uVar1 = CONCAT21(local_5c._2_2_,bVar15);
        local_58 = (code *)uVar26;
LAB_0167eda0:
        local_5c = (uint **)((uint)uVar1 << 8);
        uVar26 = FUN_016cc61c(&local_5c);
        return uVar26;
      }
      if (uVar19 < uVar31) goto LAB_0167ed98;
      local_34 = (uint *)(uVar31 - uVar16 >> (uVar5 & 0x1f));
      if (uVar35 != 0) {
        if ((uint *)*puVar7 <= local_34) {
LAB_0167edd0:
          local_5c = &local_34;
          local_58 = FUN_012fd02c;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_00587011,&local_5c,&DAT_01d082dc);
        }
        uVar28 = (int)local_34 << 3 | 4;
        if (uVar3 <= uVar28) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar28,uVar3,&DAT_01d082bc);
        }
        puVar18 = (uint *)(uint)*(byte *)((int)puVar7 + uVar28);
        uVar28 = (int)local_34 << 3 | 5;
        if ((CARRY4(uVar28,(uint)puVar18)) || (uVar3 < uVar28 + (int)puVar18)) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar28,uVar28 + (int)puVar18,uVar3,&DAT_01d082cc);
        }
        if ((uint *)0x3 < puVar18) {
LAB_0167ee0c:
          local_58 = FUN_012fd02c;
          local_5c = &local_34;
          local_34 = puVar18;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005af82d,&local_5c,&DAT_01d082fc);
        }
        uVar21 = uVar26 + 1;
        pbVar23 = (byte *)((int)puVar7 + uVar28);
        uVar28 = uVar32;
        switch(puVar18) {
        case (uint *)0x0:
switchD_0167da1c_caseD_0:
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_004ce59c,0x3d,&DAT_01d082ec);
        case (uint *)0x1:
          uVar37 = uVar4 - uVar21;
          if (uVar37 != 0) {
            uVar29 = (uint)*pbVar23;
            puVar18 = (uint *)(iVar24 + uVar21);
            if (uVar37 < 4) {
              do {
                if (uVar29 == (byte)*puVar18) goto LAB_0167e8c8;
                puVar18 = (uint *)((int)puVar18 + 1);
                uVar37 = uVar37 - 1;
              } while (uVar37 != 0);
            }
            else {
              uVar21 = uVar29 * 0x1010101;
              if ((~(0x1010100 - (*puVar18 ^ uVar21) | *puVar18 ^ uVar21) & 0x80808080) == 0) {
                uVar25 = (uint)puVar18 & 3;
                uVar30 = 4 - uVar25;
                puVar18 = (uint *)((int)puVar18 + uVar30);
                if (uVar37 < 9) {
                  if (uVar30 < uVar37) {
                    iVar11 = ((uVar4 - 5) + uVar25) - uVar26;
                    do {
                      if (uVar29 == (byte)*puVar18) goto LAB_0167e8c8;
                      puVar18 = (uint *)((int)puVar18 + 1);
                      iVar11 = iVar11 + -1;
                    } while (iVar11 != 0);
                  }
                }
                else {
                  for (; puVar18 <= puVar9 + -2; puVar18 = puVar18 + 2) {
                    uVar26 = ~(0x1010100 - (*puVar18 ^ uVar21) | *puVar18 ^ uVar21);
                    bVar38 = (uVar26 & 0x80808080) == 0;
                    if (bVar38) {
                      uVar26 = ~(0x1010100 - (puVar18[1] ^ uVar21) | puVar18[1] ^ uVar21);
                    }
                    if (!bVar38 || (uVar26 & 0x80808080) != 0) break;
                  }
                  if (puVar18 < puVar9) {
                    do {
                      if (uVar29 == (byte)*puVar18) goto LAB_0167e8c8;
                      puVar18 = (uint *)((int)puVar18 + 1);
                    } while (puVar18 != puVar9);
                  }
                }
              }
              else {
                do {
                  if (uVar29 == (byte)*puVar18) goto LAB_0167e8c8;
                  puVar18 = (uint *)((int)puVar18 + 1);
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
            }
          }
          break;
        case (uint *)0x2:
          if (uVar4 != uVar21) {
            uVar29 = uVar4 - uVar21;
            uVar26 = (uint)*pbVar23;
            uVar37 = (uint)pbVar23[1];
            puVar18 = (uint *)(iVar24 + uVar21);
            if (uVar29 < 4) {
              do {
                if (uVar26 == (byte)*puVar18 || uVar37 == (byte)*puVar18) goto LAB_0167e8c8;
                puVar18 = (uint *)((int)puVar18 + 1);
                uVar29 = uVar29 - 1;
              } while (uVar29 != 0);
            }
            else {
              uVar21 = *puVar18 ^ uVar26 * 0x1010101;
              if (((~(0x1010100 - uVar21 | uVar21) & 0x80808080) == 0) &&
                 (uVar21 = *puVar18 ^ uVar37 * 0x1010101,
                 (~(0x1010100 - uVar21 | uVar21) & 0x80808080) == 0)) {
                puVar18 = (uint *)((uint)puVar18 & 0xfffffffc);
                do {
                  puVar18 = puVar18 + 1;
                  if (puVar9 + -1 < puVar18) break;
                  uVar21 = *puVar18 ^ uVar26 * 0x1010101;
                  uVar21 = ~(0x1010100 - uVar21 | uVar21);
                  bVar38 = (uVar21 & 0x80808080) == 0;
                  if (bVar38) {
                    uVar21 = *puVar18 ^ uVar37 * 0x1010101;
                    uVar21 = ~(0x1010100 - uVar21 | uVar21);
                  }
                } while (bVar38 && (uVar21 & 0x80808080) == 0);
                if (puVar18 < puVar9) {
                  do {
                    if (uVar26 == (byte)*puVar18 || uVar37 == (byte)*puVar18) goto LAB_0167e8c8;
                    puVar18 = (uint *)((int)puVar18 + 1);
                  } while (puVar18 != puVar9);
                }
              }
              else {
                do {
                  if (uVar26 == (byte)*puVar18 || uVar37 == (byte)*puVar18) goto LAB_0167e8c8;
                  puVar18 = (uint *)((int)puVar18 + 1);
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
          }
          break;
        case (uint *)0x3:
          uVar41 = FUN_00655b94(*pbVar23,pbVar23[1],pbVar23[2],iVar24 + uVar21,uVar4 - uVar21);
          if ((int)uVar41 == 1) {
            uVar28 = (int)((ulonglong)uVar41 >> 0x20) + uVar21;
          }
        }
        goto LAB_0167e8d0;
      }
LAB_0167ee9c:
      puVar17 = &DAT_01d09968;
      goto LAB_0167eea4;
    }
    uVar4 = param_2[3];
LAB_0167eab4:
    if (uVar32 < uVar4) {
      bVar15 = *(byte *)(param_2[2] + uVar32);
      uVar27 = param_1[0x16];
      uVar31 = uVar31 + *(byte *)((int)param_1 + bVar15 + 0x5c);
      if (uVar27 <= uVar31) goto LAB_0167ee7c;
      uVar26 = *(uint *)(param_1[0x15] + uVar31 * 4);
      if (((uVar26 != 0) && (param_1[2] <= uVar26)) && (uVar26 <= param_1[3])) {
        iVar20 = 0;
        uVar4 = uVar32;
        if (param_1[0x5e] != 1) {
          uVar32 = param_1[0x57];
          uVar31 = uVar26 - param_1[2];
          goto LAB_0167eb98;
        }
        goto LAB_0167ebec;
      }
      uVar31 = 0;
      if (uVar26 != 0) {
        uVar27 = param_1[1];
        goto LAB_0167e9d8;
      }
    }
    else {
      uVar32 = FUN_016c2c08(*(byte *)((int)param_1 + 0x15b) + 1);
      uVar12 = param_1[0x16];
      uVar26 = (uVar32 & 0xffff) >> 8;
      if ((uVar32 & 1) != 0) {
        uVar26 = uVar32 >> 0x10;
      }
      uVar26 = uVar26 + uVar31;
      if (uVar12 <= uVar26) goto LAB_0167eec0;
      uVar31 = 0;
      uVar26 = *(uint *)(param_1[0x15] + uVar26 * 4);
      if (((uVar26 != 0) && (param_1[2] <= uVar26)) && (uVar26 <= param_1[3])) {
        iVar20 = 0;
        if (param_1[0x5e] != 1) {
          uVar32 = param_1[0x57];
          uVar31 = uVar26 - param_1[2];
LAB_0167eb98:
          uVar12 = param_1[0x5a];
          uVar31 = uVar31 >> (uVar32 & 0x1f);
          uVar32 = uVar31 << 1;
          if (uVar12 <= uVar31 * 2) {
LAB_0167eecc:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar32,uVar12,&DAT_01d0866c);
          }
          uVar32 = uVar32 | 1;
          if (uVar12 <= uVar32) {
LAB_0167eee8:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar32,uVar12,&DAT_01d0860c);
          }
          uVar31 = *(uint *)(param_1[0x59] + uVar31 * 8);
          uVar32 = *(uint *)(param_1[0x59] + uVar32 * 4);
          if ((CARRY4(uVar32,uVar31)) || (param_1[0x5d] < uVar32 + uVar31)) {
LAB_0167ee3c:
                    /* WARNING: Subroutine does not return */
            FUN_012faff4();
          }
          if (uVar32 == 0) goto LAB_0167eef8;
          iVar20 = *(int *)(param_1[0x5c] + uVar31 * 4);
        }
LAB_0167ebec:
        param_3[1] = iVar20;
        param_3[2] = uVar4;
        goto LAB_0167ea88;
      }
    }
  }
  param_3[3] = 1;
  param_3[4] = uVar26;
  if (*param_3 == 0) {
    return uVar31;
  }
LAB_0167ea98:
  param_3[5] = 1;
  param_3[6] = 1;
  return uVar31;
LAB_0167e8c8:
  uVar28 = (int)puVar18 - iVar24;
LAB_0167e8d0:
  param_3[7] = uVar28;
LAB_0167e8e8:
  uVar26 = uVar28;
  if (uVar32 <= uVar28) goto LAB_0167eab4;
  goto LAB_0167e438;
}

