// FUN_0181ae20 @ 0181ae20 size=3356 calls_out=2 calls_in=1
// strings: 

void FUN_0181ae20(uint param_1,ushort *param_2,int param_3,int *param_4,uint *param_5,
                 ushort *param_6)

{
  ushort uVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined4 uVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined2 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  ushort *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  uint uVar19;
  undefined1 *puVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  bool bVar24;
  uint local_a8;
  ushort *local_a4;
  ushort *local_a0;
  uint local_90;
  undefined1 *local_8c;
  ushort local_88 [2];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  ushort local_74 [8];
  ushort local_64;
  ushort local_62;
  ushort local_60;
  ushort local_5e;
  ushort local_5c;
  ushort local_5a;
  ushort local_58;
  ushort local_56;
  ushort local_54;
  ushort local_52;
  ushort local_50;
  ushort local_4e;
  ushort auStack_4c [5];
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  short local_30;
  short local_2e;
  uint local_2c;
  undefined1 auStack_28 [4];
  
  local_2c = DAT_018ddaf8;
  FUN_016dd606(local_74 + 4,0,0x20,0);
  if (param_3 != 0) {
    puVar7 = param_2;
    do {
      puVar15 = puVar7 + 1;
      local_74[*puVar7 + 4] = local_74[*puVar7 + 4] + 1;
      puVar7 = puVar15;
    } while (param_2 + param_3 != puVar15);
  }
  uVar19 = (uint)local_4e;
  if (uVar19 == 0) {
    if (local_50 == 0) {
      if (local_52 == 0) {
        if (local_54 == 0) {
          if (local_56 == 0) {
            if (local_58 == 0) {
              if (local_5a == 0) {
                if (local_5c == 0) {
                  if (local_5e == 0) {
                    if (local_60 == 0) {
                      if (local_62 == 0) {
                        if (local_64 == 0) {
                          if (local_74[7] == 0) {
                            if (local_74[6] == 0) {
                              if (local_74[5] == 0) {
                                puVar11 = (undefined2 *)*param_4;
                                *puVar11 = 0x140;
                                puVar11[1] = 0;
                                *param_4 = (int)(puVar11 + 4);
                                puVar11[2] = 0x140;
                                local_78 = (undefined1 *)0x1;
                                puVar11[3] = 0;
                                puVar12 = (undefined1 *)0x0;
LAB_0181af94:
                                uVar4 = 0;
                                *param_5 = (uint)local_78;
                                goto LAB_0181afa0;
                              }
                              puVar20 = (undefined1 *)0x1;
                              local_78 = (undefined1 *)(uint)(*param_5 != 0);
                            }
                            else {
                              puVar20 = (undefined1 *)0x2;
                              local_78 = (undefined1 *)*param_5;
                              if ((undefined1 *)0x1 < local_78) {
                                local_78 = (undefined1 *)0x2;
                              }
                              if (local_74[5] == 0) {
                                puVar17 = (undefined1 *)0x2;
                                goto LAB_0181b100;
                              }
                            }
                          }
                          else {
                            local_78 = (undefined1 *)*param_5;
                            if ((undefined1 *)0x2 < local_78) {
                              local_78 = (undefined1 *)0x3;
                            }
                            if (local_74[5] == 0) {
                              puVar20 = (undefined1 *)0x3;
                              goto LAB_0181b000;
                            }
                            puVar20 = (undefined1 *)0x3;
                          }
                        }
                        else {
                          local_78 = (undefined1 *)*param_5;
                          if ((undefined1 *)0x3 < local_78) {
                            local_78 = (undefined1 *)0x4;
                          }
                          if (local_74[5] == 0) {
                            puVar20 = (undefined1 *)0x4;
                            goto LAB_0181b000;
                          }
                          puVar20 = (undefined1 *)0x4;
                        }
                      }
                      else {
                        local_78 = (undefined1 *)*param_5;
                        if ((undefined1 *)0x4 < local_78) {
                          local_78 = (undefined1 *)0x5;
                        }
                        if (local_74[5] == 0) {
                          puVar20 = (undefined1 *)0x5;
                          goto LAB_0181b000;
                        }
                        puVar20 = (undefined1 *)0x5;
                      }
                    }
                    else {
                      local_78 = (undefined1 *)*param_5;
                      if ((undefined1 *)0x5 < local_78) {
                        local_78 = (undefined1 *)0x6;
                      }
                      if (local_74[5] == 0) {
                        puVar20 = (undefined1 *)0x6;
                        goto LAB_0181b000;
                      }
                      puVar20 = (undefined1 *)0x6;
                    }
                  }
                  else {
                    local_78 = (undefined1 *)*param_5;
                    if ((undefined1 *)0x6 < local_78) {
                      local_78 = (undefined1 *)0x7;
                    }
                    if (local_74[5] == 0) {
                      puVar20 = (undefined1 *)0x7;
                      goto LAB_0181b000;
                    }
                    puVar20 = (undefined1 *)0x7;
                  }
                }
                else {
                  local_78 = (undefined1 *)*param_5;
                  if ((undefined1 *)0x7 < local_78) {
                    local_78 = (undefined1 *)0x8;
                  }
                  if (local_74[5] == 0) {
                    puVar20 = (undefined1 *)0x8;
                    goto LAB_0181b000;
                  }
                  puVar20 = (undefined1 *)0x8;
                }
              }
              else {
                local_78 = (undefined1 *)*param_5;
                if ((undefined1 *)0x8 < local_78) {
                  local_78 = (undefined1 *)0x9;
                }
                if (local_74[5] == 0) {
                  puVar20 = (undefined1 *)0x9;
                  goto LAB_0181b000;
                }
                puVar20 = (undefined1 *)0x9;
              }
            }
            else {
              local_78 = (undefined1 *)*param_5;
              if ((undefined1 *)0x9 < local_78) {
                local_78 = (undefined1 *)0xa;
              }
              if (local_74[5] == 0) {
                puVar20 = (undefined1 *)0xa;
                goto LAB_0181b000;
              }
              puVar20 = (undefined1 *)0xa;
            }
          }
          else {
            local_78 = (undefined1 *)*param_5;
            if ((undefined1 *)0xa < local_78) {
              local_78 = (undefined1 *)0xb;
            }
            if (local_74[5] == 0) {
              puVar20 = (undefined1 *)0xb;
              goto LAB_0181b000;
            }
            puVar20 = (undefined1 *)0xb;
          }
        }
        else {
          local_78 = (undefined1 *)*param_5;
          if ((undefined1 *)0xb < local_78) {
            local_78 = (undefined1 *)0xc;
          }
          if (local_74[5] == 0) {
            puVar20 = (undefined1 *)0xc;
            goto LAB_0181b000;
          }
          puVar20 = (undefined1 *)0xc;
        }
      }
      else {
        local_78 = (undefined1 *)*param_5;
        if ((undefined1 *)0xc < local_78) {
          local_78 = (undefined1 *)0xd;
        }
        if (local_74[5] == 0) {
          puVar20 = (undefined1 *)0xd;
          goto LAB_0181b000;
        }
        puVar20 = (undefined1 *)0xd;
      }
    }
    else {
      local_78 = (undefined1 *)*param_5;
      if ((undefined1 *)0xd < local_78) {
        local_78 = (undefined1 *)0xe;
      }
      if (local_74[5] == 0) {
        puVar20 = (undefined1 *)0xe;
        goto LAB_0181b000;
      }
      puVar20 = (undefined1 *)0xe;
    }
LAB_0181b83c:
    if ((int)(local_74[5] - 3) < 0) {
      iVar14 = 2 - (uint)local_74[5];
      puVar17 = (undefined1 *)0x1;
      goto LAB_0181b104;
    }
  }
  else {
    local_78 = (undefined1 *)*param_5;
    if ((undefined1 *)0xe < local_78) {
      local_78 = (undefined1 *)0xf;
    }
    if (local_74[5] != 0) {
      puVar20 = (undefined1 *)0xf;
      goto LAB_0181b83c;
    }
    puVar20 = (undefined1 *)0xf;
LAB_0181b000:
    if (local_74[6] == 0) {
      if (puVar20 != (undefined1 *)0x3) {
        if (local_74[7] == 0) {
          if (puVar20 == (undefined1 *)0x4) goto LAB_0181b0fc;
          if (local_64 != 0) {
            puVar17 = (undefined1 *)0x4;
            goto LAB_0181b998;
          }
          if (puVar20 == (undefined1 *)0x5) goto LAB_0181b0fc;
          if (local_62 != 0) {
            puVar17 = (undefined1 *)0x5;
            goto LAB_0181b998;
          }
          if (puVar20 == (undefined1 *)0x6) goto LAB_0181b0fc;
          if (local_60 == 0) {
            puVar17 = puVar20;
            if (puVar20 == (undefined1 *)0x7) {
              puVar20 = (undefined1 *)0x7;
              goto LAB_0181b100;
            }
            if (local_5e == 0) {
              if (puVar20 == (undefined1 *)0x8) goto LAB_0181b0fc;
              if (local_5c == 0) {
                if (puVar20 == (undefined1 *)0x9) goto LAB_0181b0fc;
                if (local_5a == 0) {
                  if (puVar20 == (undefined1 *)0xa) goto LAB_0181b0fc;
                  if (local_58 == 0) {
                    if (puVar20 == (undefined1 *)0xb) goto LAB_0181b0fc;
                    if (local_56 == 0) {
                      if (puVar20 == (undefined1 *)0xc) {
                        puVar20 = (undefined1 *)0xc;
                        goto LAB_0181b100;
                      }
                      if (local_54 == 0) {
                        if (puVar20 != (undefined1 *)0xd) {
                          if (local_52 != 0) {
                            puVar17 = (undefined1 *)0xd;
                            goto LAB_0181b998;
                          }
                          if (puVar20 == (undefined1 *)0xf) {
                            if (local_50 != 0) {
                              puVar17 = (undefined1 *)0xe;
                              goto LAB_0181b998;
                            }
                          }
                          else {
                            puVar20 = (undefined1 *)0xe;
                          }
                        }
                        goto LAB_0181b0fc;
                      }
                      puVar17 = (undefined1 *)0xc;
                    }
                    else {
                      puVar17 = (undefined1 *)0xb;
                    }
                  }
                  else {
                    puVar17 = (undefined1 *)0xa;
                  }
                }
                else {
                  puVar17 = (undefined1 *)0x9;
                }
              }
              else {
                puVar17 = (undefined1 *)0x8;
              }
            }
            else {
              puVar17 = (undefined1 *)0x7;
            }
          }
          else {
            puVar17 = (undefined1 *)0x6;
          }
        }
        else {
          puVar17 = (undefined1 *)0x3;
        }
        goto LAB_0181b998;
      }
LAB_0181b0fc:
      puVar17 = puVar20;
    }
    else {
      puVar17 = (undefined1 *)0x2;
LAB_0181b998:
    }
LAB_0181b100:
    iVar14 = 2;
LAB_0181b104:
    iVar14 = iVar14 * 2 - (uint)local_74[6];
    if (-1 < iVar14) {
      iVar14 = iVar14 * 2 - (uint)local_74[7];
      if (-1 < iVar14) {
        iVar14 = iVar14 * 2 - (uint)local_64;
        if (-1 < iVar14) {
          iVar14 = iVar14 * 2 - (uint)local_62;
          if (-1 < iVar14) {
            iVar14 = iVar14 * 2 - (uint)local_60;
            if (-1 < iVar14) {
              iVar14 = iVar14 * 2 - (uint)local_5e;
              if (-1 < iVar14) {
                iVar14 = iVar14 * 2 - (uint)local_5c;
                if (-1 < iVar14) {
                  iVar14 = iVar14 * 2 - (uint)local_5a;
                  if (-1 < iVar14) {
                    iVar14 = iVar14 * 2 - (uint)local_58;
                    if (-1 < iVar14) {
                      iVar14 = iVar14 * 2 - (uint)local_56;
                      if (-1 < iVar14) {
                        iVar14 = iVar14 * 2 - (uint)local_54;
                        if (-1 < iVar14) {
                          iVar14 = iVar14 * 2 - (uint)local_52;
                          if ((((-1 < iVar14) && (iVar14 = iVar14 * 2 - (uint)local_50, -1 < iVar14)
                               ) && (uVar9 = iVar14 * 2, -1 < (int)(uVar9 - uVar19))) &&
                             ((uVar9 == uVar19 || (param_1 != 0 && puVar20 == (undefined1 *)0x1))))
                          {
                            iVar6 = (uint)local_74[5] + (uint)local_74[6];
                            iVar14 = iVar6 + (uint)local_74[7];
                            auStack_4c[3] = (short)iVar6;
                            iVar21 = iVar14 + (uint)local_64;
                            auStack_4c[2] = local_74[5];
                            iVar22 = iVar21 + (uint)local_62;
                            iVar6 = iVar22 + (uint)local_60;
                            auStack_4c[4] = (short)iVar14;
                            iVar14 = iVar6 + (uint)local_5e;
                            local_3c = (short)iVar14;
                            iVar14 = iVar14 + (uint)local_5c;
                            local_3a = (short)iVar14;
                            iVar14 = iVar14 + (uint)local_5a;
                            local_38 = (short)iVar14;
                            iVar14 = iVar14 + (uint)local_58;
                            local_36 = (short)iVar14;
                            iVar14 = iVar14 + (uint)local_56;
                            local_34 = (short)iVar14;
                            iVar14 = iVar14 + (uint)local_54;
                            local_32 = (short)iVar14;
                            puVar7 = (ushort *)(iVar14 + (uint)local_52);
                            if (local_78 < puVar17) {
                              local_78 = puVar17;
                            }
                            else {
                            }
                            bVar24 = param_3 != 0;
                            uVar5 = 0;
                            local_30 = (short)puVar7;
                            if (bVar24) {
                              puVar7 = param_2;
                            }
                            local_42 = (short)iVar21;
                            local_40 = (short)iVar22;
                            puVar15 = (ushort *)0x0;
                            if (bVar24) {
                              puVar15 = puVar7 + param_3;
                            }
                            local_3e = (short)iVar6;
                            local_2e = local_30 + local_50;
                            auStack_4c[1] = 0;
                            if (bVar24) {
                              do {
                                puVar8 = puVar7 + 1;
                                uVar19 = (uint)*puVar7;
                                if (uVar19 != 0) {
                                  uVar1 = auStack_4c[uVar19];
                                  auStack_4c[uVar19] = uVar1 + 1;
                                  param_6[uVar1] = uVar5;
                                }
                                uVar5 = uVar5 + 1;
                                puVar7 = puVar8;
                              } while (puVar15 != puVar8);
                            }
                            local_90 = 1 << ((uint)local_78 & 0xff);
                            local_a8 = param_1;
                            if (param_1 == 0) {
                              local_a0 = param_6;
                              local_a4 = param_6;
                              local_84 = 0x14;
                              bVar24 = false;
LAB_0181b384:
                              puVar18 = (undefined1 *)0x0;
                              iVar14 = *param_4;
                              uVar9 = local_90 - 1;
                              local_8c = (undefined1 *)0xffffffff;
                              puVar16 = puVar17;
                              uVar19 = 0;
                              local_80 = local_78;
                              local_7c = iVar14;
                              do {
                                uVar5 = *param_6;
                                uVar23 = (uint)uVar5;
                                if (uVar23 + 1 < local_84) {
                                  uVar2 = 0;
                                }
                                else if (uVar23 < local_84) {
                                  uVar5 = 0;
                                  uVar2 = 0x60;
                                }
                                else {
                                  uVar2 = (undefined1)local_a0[uVar23 - local_84];
                                  uVar5 = local_a4[uVar23 - local_84];
                                }
                                iVar6 = 1 << ((uint)puVar17 & 0xff);
                                iVar21 = 1 << ((uint)local_80 & 0xff);
                                puVar12 = (undefined1 *)
                                          (local_7c +
                                          ((iVar21 + (uVar19 >> ((uint)puVar18 & 0xff))) - iVar6) *
                                          4);
                                do {
                                  *puVar12 = uVar2;
                                  iVar21 = iVar21 - iVar6;
                                  puVar12[1] = (char)puVar17;
                                  *(ushort *)(puVar12 + 2) = uVar5;
                                  puVar12 = puVar12 + (-4 << ((uint)puVar17 & 0xff));
                                } while (iVar21 != 0);
                                uVar23 = 1 << ((uint)(puVar16 + -1) & 0xff);
                                if ((uVar19 & uVar23) == 0) {
LAB_0181b4d0:
                                  uVar13 = uVar23 + (uVar23 - 1 & uVar19);
                                }
                                else {
                                  do {
                                    uVar23 = uVar23 >> 1;
                                  } while ((uVar19 & uVar23) != 0);
                                  uVar13 = 0;
                                  if (uVar23 != 0) goto LAB_0181b4d0;
                                }
                                puVar12 = auStack_28 + (int)puVar16 * 2 + 0x24;
                                uVar5 = local_74[(int)(puVar16 + 4)];
                                local_74[(int)(puVar16 + 4)] = uVar5 - 1;
                                if ((ushort)(uVar5 - 1) == 0) {
                                  if (puVar20 == puVar16) {
                                    if (uVar13 != 0) {
                                      puVar12 = (undefined1 *)(local_7c + uVar13 * 4);
                                      *(undefined1 *)(local_7c + uVar13 * 4) = 0x40;
                                      puVar12[1] = (char)puVar17;
                                      *(undefined2 *)(puVar12 + 2) = 0;
                                    }
                                    *param_4 = iVar14 + local_90 * 4;
                                    goto LAB_0181af94;
                                  }
                                  puVar16 = (undefined1 *)(uint)param_2[param_6[1]];
                                }
                                if ((local_78 < puVar16) &&
                                   (puVar12 = (undefined1 *)(uVar13 & uVar9), puVar12 != local_8c))
                                {
                                  if (puVar18 == (undefined1 *)0x0) {
                                    puVar18 = local_78;
                                  }
                                  puVar17 = puVar16 + -(int)puVar18;
                                  puVar10 = puVar17;
                                  if ((puVar16 < puVar20) &&
                                     (iVar6 = (1 << ((uint)puVar17 & 0xff)) -
                                              (uint)local_74[(int)(puVar16 + 4)], 0 < iVar6)) {
                                    puVar10 = puVar17 + 1;
                                    if ((puVar18 + (int)puVar10 < puVar20) &&
                                       (iVar6 = iVar6 * 2 -
                                                (uint)local_74[(int)(puVar18 + (int)puVar10 + 4)],
                                       0 < iVar6)) {
                                      puVar10 = puVar17 + 2;
                                      if ((puVar18 + (int)puVar10 < puVar20) &&
                                         (iVar6 = iVar6 * 2 -
                                                  (uint)local_74[(int)(puVar18 + (int)puVar10 + 4)],
                                         0 < iVar6)) {
                                        puVar10 = puVar17 + 3;
                                        if ((puVar18 + (int)puVar10 < puVar20) &&
                                           (iVar6 = iVar6 * 2 -
                                                    (uint)local_74[(int)(puVar18 + (int)puVar10 + 4)
                                                                  ], 0 < iVar6)) {
                                          puVar10 = puVar17 + 4;
                                          if ((puVar18 + (int)puVar10 < puVar20) &&
                                             (iVar6 = iVar6 * 2 -
                                                      (uint)local_74[(int)(puVar18 + (int)puVar10 +
                                                                          4)], 0 < iVar6)) {
                                            puVar10 = puVar17 + 5;
                                            if ((puVar18 + (int)puVar10 < puVar20) &&
                                               (iVar6 = iVar6 * 2 -
                                                        (uint)local_74[(int)(puVar18 + (int)puVar10
                                                                            + 4)], 0 < iVar6)) {
                                              puVar10 = puVar17 + 6;
                                              if ((puVar18 + (int)puVar10 < puVar20) &&
                                                 (iVar6 = iVar6 * 2 -
                                                          (uint)local_74[(int)(puVar18 + (int)
                                                  puVar10 + 4)], 0 < iVar6)) {
                                                puVar10 = puVar17 + 7;
                                                if ((puVar18 + (int)puVar10 < puVar20) &&
                                                   (iVar6 = iVar6 * 2 -
                                                            (uint)local_74[(int)(puVar18 + (int)
                                                  puVar10 + 4)], 0 < iVar6)) {
                                                  puVar10 = puVar17 + 8;
                                                  if ((puVar18 + (int)puVar10 < puVar20) &&
                                                     (iVar6 = iVar6 * 2 -
                                                              (uint)local_74[(int)(puVar18 + (int)
                                                  puVar10 + 4)], 0 < iVar6)) {
                                                    puVar10 = puVar17 + 9;
                                                    if ((puVar18 + (int)puVar10 < puVar20) &&
                                                       (iVar6 = iVar6 * 2 -
                                                                (uint)local_74[(int)(puVar18 + (int)
                                                  puVar10 + 4)], 0 < iVar6)) {
                                                    puVar10 = puVar17 + 10;
                                                    if ((puVar18 + (int)puVar10 < puVar20) &&
                                                       (iVar6 = iVar6 * 2 -
                                                                (uint)local_74[(int)(puVar18 + (int)
                                                  puVar10 + 4)], 0 < iVar6)) {
                                                    puVar10 = puVar17 + 0xb;
                                                    if ((puVar18 + (int)puVar10 < puVar20) &&
                                                       (iVar6 = iVar6 * 2 -
                                                                (uint)local_74[(int)(puVar18 + (int)
                                                  puVar10 + 4)], 0 < iVar6)) {
                                                    puVar10 = puVar17 + 0xc;
                                                    if ((puVar18 + (int)puVar10 < puVar20) &&
                                                       (iVar6 = iVar6 * 2 -
                                                                (uint)local_74[(int)(puVar18 + (int)
                                                  puVar10 + 4)], 0 < iVar6)) {
                                                    puVar10 = puVar17 + 0xd;
                                                    if ((puVar18 + (int)puVar10 < puVar20) &&
                                                       (iVar6 = iVar6 * 2 -
                                                                (uint)local_74[(int)(puVar18 + (int)
                                                  puVar10 + 4)], 0 < iVar6)) {
                                                    puVar10 = puVar17 + 0xe;
                                                    if ((puVar18 + (int)puVar10 < puVar20) &&
                                                       (iVar6 = iVar6 * 2 -
                                                                (uint)local_74[(int)(puVar18 + (int)
                                                  puVar10 + 4)], 0 < iVar6)) {
                                                    puVar10 = puVar17 + 0xf;
                                                    if ((puVar18 + (int)puVar10 < puVar20) &&
                                                       (0 < (int)(iVar6 * 2 -
                                                                 (uint)local_74[(int)(puVar18 + (int
                                                  )puVar10 + 4)]))) {
                                                    puVar10 = puVar17 + 0x10;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  local_90 = local_90 + (1 << ((uint)puVar10 & 0xff));
                                  if (local_90 < 0x355) {
                                    uVar19 = 0;
                                  }
                                  else {
                                    uVar19 = local_a8 & 1;
                                  }
                                  if (uVar19 != 0) goto LAB_0181b320;
                                  bVar3 = bVar24;
                                  if (local_90 < 0x251) {
                                    bVar3 = false;
                                  }
                                  if (bVar3) goto LAB_0181b320;
                                  local_7c = local_7c + (4 << ((uint)local_80 & 0xff));
                                  *(char *)(iVar14 + (int)puVar12 * 4) = (char)puVar10;
                                  iVar6 = iVar14 + (int)puVar12 * 4;
                                  *(char *)(iVar6 + 1) = (char)local_78;
                                  *(short *)(iVar6 + 2) = (short)(local_7c - iVar14 >> 2);
                                  local_8c = puVar12;
                                  local_80 = puVar10;
                                }
                                else {
                                  puVar17 = puVar16 + -(int)puVar18;
                                }
                                param_6 = param_6 + 1;
                                uVar19 = uVar13;
                              } while( true );
                            }
                            puVar12 = local_78;
                            if (param_1 == 1) {
                              if (local_90 < 0x355) {
                                local_a0 = (ushort *)&DAT_00452f34;
                                local_a4 = (ushort *)&DAT_00452f74;
                                bVar24 = false;
                                local_84 = 0x101;
                                goto LAB_0181b384;
                              }
                            }
                            else {
                              bVar24 = param_1 == 2;
                              if (local_90 < 0x251 || !bVar24) {
                                local_a0 = &DAT_00452eb4;
                                local_a4 = &DAT_00452ef4;
                                local_a8 = 0;
                                local_84 = 0;
                                goto LAB_0181b384;
                              }
                            }
LAB_0181b320:
                            uVar4 = 1;
                            goto LAB_0181afa0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  puVar12 = (undefined1 *)(uint)local_74[5];
  uVar4 = 0xffffffff;
LAB_0181afa0:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar4,puVar12,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

