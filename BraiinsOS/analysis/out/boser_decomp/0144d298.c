// FUN_0144d298 @ 0144d298 size=3784 calls_out=13 calls_in=3
// strings: explicit panic | internal error: entered unreachable code

void FUN_0144d298(int *param_1,undefined4 param_2,byte *param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 char param_10)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  undefined *puVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  byte bVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  byte *pbVar30;
  uint *puVar31;
  bool bVar32;
  uint *local_4e4;
  uint local_4e0;
  uint *local_4bc;
  uint local_4a0;
  int local_49c;
  int local_498;
  int local_494;
  undefined4 local_490;
  uint local_48c;
  uint *local_488;
  uint local_98;
  undefined4 local_94;
  uint local_90;
  uint *local_8c;
  uint local_30;
  uint local_2c;
  char local_27;
  
  uVar5 = 0;
  local_494 = 0;
  local_498 = 1;
  local_49c = 0;
  local_490 = 0;
  local_98 = 0;
  local_94 = 0;
  local_30 = 0;
  if (param_4 != 0) {
    pbVar30 = param_3;
LAB_0144d2f8:
    uVar16 = (uint)param_3[uVar5];
    if (uVar16 - 0x61 < 0x1a) goto LAB_0144d318;
    if (uVar16 == 0x2e) {
      pbVar30 = param_3 + uVar5 + 1;
      goto LAB_0144d318;
    }
    FUN_0144a160(&local_2c,param_2,param_4,param_3 + (param_4 - (int)pbVar30),param_5,param_6,
                 param_7,param_8,param_9,1,&local_490,&local_94,pbVar30,
                 param_3 + (param_4 - (int)pbVar30));
    bVar32 = false;
    local_4e0 = local_2c;
    if ((local_2c != param_4) && (bVar32 = true, local_27 == '\0')) {
      if (local_98 < 0xfe) {
        puVar8 = &local_48c;
        uVar5 = local_98;
      }
      else {
        puVar8 = local_488;
        uVar5 = local_48c;
      }
      if (uVar5 == 0) {
LAB_0144d4f0:
        if (local_98 < 0xfe) {
          puVar8 = &local_48c;
          uVar16 = local_98;
        }
        else {
          puVar8 = local_488;
          uVar16 = local_48c;
        }
      }
      else {
        uVar16 = uVar5 - 1;
        if (puVar8[uVar5 - 1] != 0x2e) goto LAB_0144d4f0;
      }
      iVar14 = 0;
      iVar7 = uVar16 * -4;
      do {
        bVar32 = iVar7 != 0;
        if (bVar32) {
          iVar14 = *(int *)((int)puVar8 + (-4 - iVar7));
          iVar7 = iVar7 + 4;
        }
      } while (bVar32 && iVar14 != 0x2e);
      bVar32 = false;
      if (local_30 < 9) {
        local_4bc = &local_90;
        local_90 = local_30;
      }
      else {
        local_4bc = local_8c;
      }
      if (local_98 < 0xfe) {
        local_4e4 = &local_48c;
        local_48c = local_98;
      }
      else {
        local_4e4 = local_488;
      }
      puVar8 = local_4bc + local_90 * 3;
      bVar4 = false;
      do {
        iVar7 = local_494;
        puVar31 = local_4e4;
        uVar16 = 0;
        bVar3 = true;
        uVar5 = 0;
        if (local_48c != 0) {
          iVar14 = local_48c << 2;
          do {
            if (local_4e4[uVar16] == 0x2e) {
              uVar5 = local_48c - (uVar16 + 1);
              local_4e4 = local_4e4 + uVar16 + 1;
              bVar3 = false;
              goto LAB_0144d5d8;
            }
            uVar16 = uVar16 + 1;
            iVar14 = iVar14 + -4;
          } while (iVar14 != 0);
          bVar3 = true;
          uVar5 = local_48c;
          uVar16 = local_48c;
        }
LAB_0144d5d8:
        if (local_4bc == puVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01cf923c);
        }
        uVar23 = *local_4bc;
        pbVar30 = (byte *)local_4bc[1];
        uVar27 = local_4bc[2];
        if (bVar4) {
          if (bVar32) {
            if (local_49c == local_494) {
              FUN_01af7b44(&local_49c,local_494,1,1,1);
            }
            *(undefined1 *)(local_498 + local_494) = 0x2e;
            local_494 = iVar7 + 1;
            goto LAB_0144d644;
          }
          local_4e0 = local_4e0 + 1;
          if (local_4e0 != param_4) goto LAB_0144d644;
          goto LAB_0144d324;
        }
LAB_0144d644:
        if (uVar23 == 0) {
          if (uVar27 != 0) {
            uVar23 = 0;
            uVar16 = uVar27;
LAB_0144d6f8:
            if (0x19 < pbVar30[uVar23] - 0x41) goto code_r0x0144d708;
            if (bVar32) {
              pbVar11 = pbVar30;
              uVar27 = uVar23;
            }
            else {
              local_4e0 = uVar23 + local_4e0;
              if (param_4 < local_4e0) {
                puVar18 = &DAT_01cf924c;
                goto LAB_0144e140;
              }
              pbVar11 = param_3;
              uVar27 = local_4e0;
            }
            if ((uint)(local_49c - local_494) < uVar27) {
              FUN_01af7b44(&local_49c,local_494,uVar27,1,1);
            }
            iVar7 = local_494;
            FUN_01bed4e2(local_498 + local_494,pbVar11,uVar27);
            local_494 = iVar7 + uVar27;
            pbVar30 = pbVar30 + uVar23;
            do {
              iVar7 = local_494;
              bVar19 = *pbVar30;
              uVar23 = 2;
              bVar26 = bVar19;
              if (bVar19 - 0x41 < 0x1a) {
                bVar26 = bVar19 | 0x20;
              }
              if ((uint)(int)(char)bVar19 < 0x80000000) {
                uVar23 = 1;
              }
              if ((uint)(local_49c - local_494) < uVar23) {
                FUN_01af7b44(&local_49c,local_494,uVar23,1,1);
              }
              pbVar11 = (byte *)(local_498 + local_494);
              if (0x7fffffff < (uint)(int)(char)bVar19) {
                pbVar11[1] = bVar26 & 0xbf;
                bVar26 = bVar19 >> 6 | 0xc0;
              }
              local_494 = uVar23 + iVar7;
              uVar16 = uVar16 - 1;
              *pbVar11 = bVar26;
              pbVar30 = pbVar30 + 1;
            } while (uVar16 != 0);
            goto LAB_0144df58;
          }
LAB_0144d718:
          if (bVar32) {
            if ((uint)(local_49c - local_494) < uVar27) {
              FUN_01af7b44(&local_49c,local_494,uVar27,1,1);
            }
LAB_0144d734:
            iVar7 = local_494;
            FUN_01bed4e2(local_498 + local_494,pbVar30,uVar27);
            local_494 = iVar7 + uVar27;
LAB_0144df58:
            bVar32 = true;
            goto LAB_0144df5c;
          }
LAB_0144d89c:
          bVar32 = false;
          local_4e0 = local_4e0 + uVar27;
          if (local_4e0 != param_4) goto LAB_0144df5c;
          goto LAB_0144d328;
        }
        puVar9 = puVar31 + uVar16;
        iVar7 = uVar16 * 4;
        iVar14 = 0;
        do {
          if (iVar7 == iVar14) {
            if (bVar32) goto LAB_0144d7a0;
            if (param_4 < local_4e0) {
              puVar18 = &DAT_01cf927c;
              goto LAB_0144e140;
            }
            if ((uint)(local_49c - local_494) < local_4e0) {
              FUN_01af7b44(&local_49c,local_494,local_4e0,1,1);
            }
            iVar14 = local_494;
            FUN_01bed4e2(local_498 + local_494,param_3,local_4e0);
            local_494 = iVar14 + local_4e0;
            goto LAB_0144d7a0;
          }
          puVar15 = (uint *)((int)puVar31 + iVar14);
          iVar14 = iVar14 + 4;
        } while (*puVar15 < 0x80);
        if (uVar23 == 1) {
          if (uVar27 != 0) {
            uVar23 = 0;
            uVar16 = uVar27;
LAB_0144d68c:
            if (0x19 < pbVar30[uVar23] - 0x41) goto code_r0x0144d69c;
            if (bVar32) {
              pbVar11 = pbVar30;
              uVar27 = uVar23;
            }
            else {
              local_4e0 = uVar23 + local_4e0;
              if (param_4 < local_4e0) {
                puVar18 = &DAT_01cf925c;
                goto LAB_0144e140;
              }
              pbVar11 = param_3;
              uVar27 = local_4e0;
            }
            if ((uint)(local_49c - local_494) < uVar27) {
              FUN_01af7b44(&local_49c,local_494,uVar27,1,1);
            }
            iVar7 = local_494;
            FUN_01bed4e2(local_498 + local_494,pbVar11,uVar27);
            local_494 = iVar7 + uVar27;
            pbVar30 = pbVar30 + uVar23;
            do {
              iVar7 = local_494;
              bVar19 = *pbVar30;
              uVar23 = 2;
              bVar26 = bVar19;
              if (bVar19 - 0x41 < 0x1a) {
                bVar26 = bVar19 | 0x20;
              }
              if ((uint)(int)(char)bVar19 < 0x80000000) {
                uVar23 = 1;
              }
              if ((uint)(local_49c - local_494) < uVar23) {
                FUN_01af7b44(&local_49c,local_494,uVar23,1,1);
              }
              pbVar11 = (byte *)(local_498 + local_494);
              if (0x7fffffff < (uint)(int)(char)bVar19) {
                pbVar11[1] = bVar26 & 0xbf;
                bVar26 = bVar19 >> 6 | 0xc0;
              }
              local_494 = uVar23 + iVar7;
              uVar16 = uVar16 - 1;
              *pbVar11 = bVar26;
              pbVar30 = pbVar30 + 1;
            } while (uVar16 != 0);
            goto LAB_0144df58;
          }
LAB_0144d6ac:
          if (!bVar32) goto LAB_0144d89c;
          if ((uint)(local_49c - local_494) < uVar27) {
            FUN_01af7b44(&local_49c,local_494,uVar27,1,1);
          }
          goto LAB_0144d734;
        }
        if (!bVar32) {
          if (param_4 < local_4e0) {
            puVar18 = &DAT_01cf926c;
LAB_0144e140:
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,local_4e0,param_4,puVar18);
          }
          if ((uint)(local_49c - local_494) < local_4e0) {
            FUN_01af7b44(&local_49c,local_494,local_4e0,1,1);
          }
          iVar14 = local_494;
          FUN_01bed4e2(local_498 + local_494,param_3,local_4e0);
          local_494 = iVar14 + local_4e0;
        }
        if ((uint)(local_49c - local_494) < 4) {
          FUN_01af7b44(&local_49c,local_494,4,1,1);
        }
        iVar14 = local_494 + 4;
        uVar27 = 0;
        *(undefined4 *)(local_498 + local_494) = 0x2d2d6e78;
        uVar23 = uVar16 & 0x3fffffff;
        puVar15 = puVar31;
        local_494 = iVar14;
        while (puVar15 != puVar9) {
          puVar24 = puVar15 + 1;
          uVar20 = *puVar15;
          puVar15 = puVar24;
          if (uVar20 < 0x80) {
            iVar10 = iVar14;
            if (local_49c == iVar14) {
              FUN_01af7b44(&local_49c,iVar14,1,1,1);
              iVar10 = local_494;
            }
            iVar14 = iVar14 + 1;
            uVar27 = uVar27 + 1;
            *(char *)(local_498 + iVar10) = (char)uVar20;
            local_494 = iVar14;
          }
        }
        if (0xf0e < uVar23) {
          FUN_01449864();
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x144e178);
          (*pcVar1)();
        }
        if (uVar27 != 0) {
          iVar10 = iVar14;
          if (local_49c == iVar14) {
            FUN_01af7b44(&local_49c,iVar14,1,1,1);
            iVar10 = local_494;
          }
          iVar14 = iVar14 + 1;
          *(undefined1 *)(local_498 + iVar10) = 0x2d;
          local_494 = iVar14;
        }
        bVar32 = true;
        if (uVar27 < uVar23) {
          uVar12 = 0x80;
          local_4a0 = 0x48;
          iVar10 = 0;
          uVar20 = uVar27;
          do {
            iVar6 = 0;
            puVar15 = puVar31;
            do {
              iVar28 = iVar6;
              puVar15 = puVar15 + 1;
              if (iVar7 == iVar28) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb0cc(&DAT_01cf929c);
              }
              uVar22 = *(uint *)((int)puVar31 + iVar28);
              iVar6 = iVar28 + 4;
            } while (uVar22 < uVar12);
            if ((uint *)((int)puVar31 + iVar28 + 4) != puVar9) {
              uVar17 = (uVar16 * 4 + -4) - iVar28 >> 2;
              do {
                uVar29 = *puVar15;
                uVar21 = uVar29;
                if (uVar22 < uVar29) {
                  uVar21 = uVar22;
                }
                if (uVar12 <= uVar29) {
                  uVar22 = uVar21;
                }
                uVar17 = uVar17 - 1;
                puVar15 = puVar15 + 1;
              } while (uVar17 != 0);
            }
            uVar17 = (uVar22 - uVar12) * (uVar20 + 1) + iVar10;
            puVar15 = puVar31;
            while (puVar15 != puVar9) {
              puVar24 = puVar15 + 1;
              uVar12 = *puVar15;
              if (uVar12 < uVar22) {
                uVar17 = uVar17 + 1;
              }
              puVar15 = puVar24;
              if (uVar12 == uVar22) {
                uVar12 = 0x1a;
                if (0x24 < local_4a0 + 0x1a) {
                  uVar12 = 0x24 - local_4a0;
                }
                if (0x23 < local_4a0) {
                  uVar12 = 1;
                }
                uVar21 = uVar17;
                if (uVar17 < uVar12) {
                }
                else {
                  uVar29 = 0x48;
                  do {
                    if (uVar12 == 0x24) {
                    /* WARNING: Subroutine does not return */
                      FUN_013079d0(&DAT_01cf92ac);
                    }
                    iVar10 = uVar21 - uVar12;
                    uVar21 = FUN_01bf1250(iVar10,0x24 - uVar12);
                    uVar12 = (iVar10 - uVar21 * (0x24 - uVar12)) + uVar12;
                    iVar10 = 0x61;
                    if (0x19 < uVar12) {
                      iVar10 = 0x16;
                    }
                    if (0x23 < uVar12) goto LAB_0144e0b4;
                    uVar12 = iVar10 + uVar12;
                    uVar25 = 2;
                    if (uVar12 < 0x80) {
                      uVar25 = 1;
                    }
                    iVar10 = iVar14;
                    if ((uint)(local_49c - iVar14) < uVar25) {
                      FUN_01af7b44(&local_49c,iVar14,uVar25,1,1);
                      iVar10 = local_494;
                    }
                    iVar14 = uVar25 + iVar14;
                    bVar19 = (byte)uVar12;
                    if (0x7f < uVar12) {
                      ((byte *)(local_498 + iVar10))[1] = bVar19 & 0x3f | 0x80;
                      bVar19 = 0xc2;
                    }
                    *(byte *)(local_498 + iVar10) = bVar19;
                    uVar12 = 0x1a;
                    if (uVar29 < local_4a0 + 0x1a) {
                      uVar12 = uVar29 - local_4a0;
                    }
                    if (uVar29 <= local_4a0) {
                      uVar12 = 1;
                    }
                    uVar29 = uVar29 + 0x24;
                    local_494 = iVar14;
                  } while (uVar12 <= uVar21);
                }
                iVar10 = 0x61;
                bVar32 = uVar21 == 0x1a;
                if (0x19 < uVar21) {
                  iVar10 = 0x16;
                  bVar32 = uVar21 == 0x23;
                }
                if (0x22 < uVar21 && !bVar32) {
LAB_0144e0b4:
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0ec("explicit panic",0xe,&DAT_01cf92bc);
                }
                uVar21 = iVar10 + uVar21;
                uVar12 = 2;
                if (uVar21 < 0x80) {
                  uVar12 = 1;
                }
                iVar10 = iVar14;
                if ((uint)(local_49c - iVar14) < uVar12) {
                  FUN_01af7b44(&local_49c,iVar14,uVar12,1,1);
                  iVar10 = local_494;
                }
                iVar14 = uVar12 + iVar14;
                bVar19 = (byte)uVar21;
                if (0x7f < uVar21) {
                  ((byte *)(local_498 + iVar10))[1] = bVar19 & 0x3f | 0x80;
                  bVar19 = 0xc2;
                }
                *(byte *)(local_498 + iVar10) = bVar19;
                local_494 = iVar14;
                if (0xfffffffe < uVar20) {
                    /* WARNING: Subroutine does not return */
                  FUN_012ffdf4(&DAT_01cf92cc);
                }
                uVar13 = 2;
                if (uVar20 == uVar27) {
                  uVar13 = 700;
                }
                iVar10 = FUN_01bf1250(uVar17,uVar13);
                iVar6 = FUN_01bf1250(iVar10,uVar20 + 1);
                uVar12 = iVar6 + iVar10;
                uVar17 = 0;
                iVar10 = 0;
                if (uVar12 < 0x1c8) {
                  uVar21 = uVar12;
                }
                else {
                  do {
                    iVar10 = iVar10 + 0x24;
                    uVar21 = uVar12 / 0x23;
                    bVar32 = 0x3e57 < uVar12;
                    uVar12 = uVar21;
                  } while (bVar32);
                }
                iVar6 = FUN_01bf1250(uVar21 * 0x24 & 0xffff,uVar21 + 0x26 & 0xffff);
                local_4a0 = iVar10 + iVar6;
                uVar20 = uVar20 + 1;
              }
            }
            uVar12 = uVar22 + 1;
            iVar10 = uVar17 + 1;
          } while (uVar20 < uVar23);
LAB_0144dd58:
          bVar32 = true;
        }
LAB_0144df5c:
        local_4bc = local_4bc + 3;
        bVar4 = true;
        local_48c = uVar5;
      } while (!bVar3);
      bVar32 = false;
      bVar4 = true;
      goto LAB_0144d330;
    }
    goto LAB_0144d328;
  }
LAB_0144d324:
  bVar32 = false;
LAB_0144d328:
  bVar4 = false;
LAB_0144d330:
  if (8 < local_30) {
    FUN_01af7af8(local_30,local_8c,4,0xc);
  }
  if (0xfd < local_98) {
    FUN_01af7af8(local_98,local_488,4,4);
  }
  iVar10 = local_494;
  iVar14 = local_498;
  iVar7 = local_49c;
  if (bVar32) {
    if (bVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf928c);
    }
LAB_0144d374:
    *param_1 = -0x7fffffff;
  }
  else {
    if (bVar4) {
      if ((param_10 == '\0') ||
         (iVar6 = FUN_014498ac(local_498,local_494,param_10 == '\x01'), iVar6 != 0)) {
        param_1[1] = iVar14;
        param_1[2] = iVar10;
        *param_1 = iVar7;
        return;
      }
      *param_1 = -0x7fffffff;
      if (iVar7 == -0x80000000) {
        return;
      }
      goto LAB_0144d420;
    }
    if ((param_10 != '\0') && (iVar7 = FUN_014498ac(param_3,param_4,param_10 == '\x01'), iVar7 == 0)
       ) goto LAB_0144d374;
    *param_1 = -0x80000000;
    param_1[1] = (int)param_3;
    param_1[2] = param_4;
  }
  iVar7 = local_49c;
  iVar14 = local_498;
LAB_0144d420:
  FUN_019bb7e0(iVar7,iVar14);
  return;
LAB_0144d318:
  uVar5 = uVar5 + 1;
  if (param_4 == uVar5) goto LAB_0144d324;
  goto LAB_0144d2f8;
LAB_0144d7a0:
  iVar14 = local_494;
  if (iVar7 == 0) goto LAB_0144dd58;
  uVar23 = *puVar31;
  uVar16 = 1;
  if (0x7f < uVar23) {
    uVar16 = 2;
  }
  if ((0x7ff < uVar23) && (uVar16 = 4, uVar23 < 0x10000)) {
    uVar16 = 3;
  }
  if ((uint)(local_49c - local_494) < uVar16) {
    FUN_01af7b44(&local_49c,local_494,uVar16,1,1);
  }
  pbVar30 = (byte *)(local_498 + local_494);
  if (uVar23 < 0x80) {
    *pbVar30 = (byte)uVar23;
  }
  else {
    bVar19 = (byte)uVar23 & 0x3f | 0x80;
    bVar26 = (byte)(uVar23 >> 6);
    if (uVar23 < 0x800) {
      bVar26 = bVar26 | 0xc0;
      pbVar30[1] = bVar19;
    }
    else {
      bVar2 = bVar26 & 0x3f | 0x80;
      bVar26 = (byte)(uVar23 >> 0xc);
      if (uVar23 >> 0x10 != 0) {
        pbVar30[3] = bVar19;
        pbVar30[2] = bVar2;
        pbVar30[1] = bVar26 & 0x3f | 0x80;
        *pbVar30 = (byte)(uVar23 >> 0x12) | 0xf0;
        goto LAB_0144d868;
      }
      pbVar30[1] = bVar2;
      bVar26 = bVar26 | 0xe0;
      pbVar30[2] = bVar19;
    }
    *pbVar30 = bVar26;
  }
LAB_0144d868:
  local_494 = uVar16 + iVar14;
  iVar7 = iVar7 + -4;
  puVar31 = puVar31 + 1;
  goto LAB_0144d7a0;
code_r0x0144d69c:
  uVar23 = uVar23 + 1;
  uVar16 = uVar16 - 1;
  if (uVar27 == uVar23) goto LAB_0144d6ac;
  goto LAB_0144d68c;
code_r0x0144d708:
  uVar23 = uVar23 + 1;
  uVar16 = uVar16 - 1;
  if (uVar27 == uVar23) goto LAB_0144d718;
  goto LAB_0144d6f8;
}

