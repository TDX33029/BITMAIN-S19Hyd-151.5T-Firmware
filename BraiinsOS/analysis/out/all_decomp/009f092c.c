// FUN_009f092c @ 009f092c size=2932 calls_out=5 calls_in=2
// strings: 

void FUN_009f092c(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint uVar18;
  byte *pbVar19;
  int iVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 *puVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 *puVar28;
  uint uVar29;
  undefined4 *puVar30;
  uint uVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  bool bVar34;
  ulonglong uVar35;
  uint local_1d0;
  uint local_1b0 [66];
  byte abStack_a7 [67];
  byte *local_64;
  int local_60;
  undefined1 local_5c;
  undefined2 local_48;
  byte local_46;
  byte *local_44;
  int local_40;
  undefined1 local_3c;
  undefined2 local_28;
  undefined1 local_26;
  
  uVar35 = FUN_01846088(0,0x40000000,param_2,0);
  lVar3 = (ulonglong)param_2 * (uVar35 & 0xffffffff);
  uVar4 = uVar35 + 1;
  if ((int)lVar3 == 0 &&
      (int)(uVar35 >> 0x20) * param_2 + (int)((ulonglong)lVar3 >> 0x20) == 0x40000000) {
    uVar4 = uVar35;
  }
  if (param_2 < 0x1001) {
    uVar7 = param_2 - (param_2 >> 1);
    if (0x3f < uVar7) {
      uVar7 = 0x40;
    }
  }
  else {
    uVar7 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar11 = (uVar7 & 1) + (uVar7 >> 1);
    uVar7 = (1 << iVar11) + (param_2 >> iVar11) >> 1;
  }
  uVar18 = 0;
  uVar31 = 0;
  uVar27 = 1;
  do {
    uVar23 = 0;
    local_1d0 = 1;
    if (uVar18 < param_2) {
      local_1d0 = param_2 - uVar18;
      iVar11 = param_1 + uVar18 * 0x1c;
      if (local_1d0 < uVar7) {
LAB_009f0a48:
        if (param_5 == 0) {
          if (uVar7 <= local_1d0) {
            local_1d0 = uVar7;
          }
          local_1d0 = local_1d0 << 1;
        }
        else {
          if (0x1f < local_1d0) {
            local_1d0 = 0x20;
          }
          FUN_009fdef8(iVar11,local_1d0,param_3,param_4,0,0);
          local_1d0 = local_1d0 << 1 | 1;
        }
      }
      else {
        uVar23 = local_1d0;
        if (1 < local_1d0) {
          uVar14 = *(uint *)(iVar11 + 8);
          uVar15 = *(uint *)(iVar11 + 0x24);
          uVar23 = uVar14;
          if (uVar15 < uVar14) {
            uVar23 = uVar15;
          }
          iVar8 = FUN_016dd50a(*(undefined4 *)(iVar11 + 0x20),*(undefined4 *)(iVar11 + 4),uVar23);
          if (iVar8 == 0) {
            iVar8 = uVar15 - uVar14;
          }
          if (0 < iVar8 == iVar8 < 0) {
            if (*(byte *)(iVar11 + 0x28) != *(byte *)(iVar11 + 0xc)) {
              if (*(byte *)(iVar11 + 0x28) < *(byte *)(iVar11 + 0xc)) goto LAB_009f0cfc;
              goto LAB_009f0af8;
            }
            local_64 = *(byte **)(iVar11 + 0x30);
            local_60 = *(int *)(iVar11 + 0x34);
            local_46 = 0;
            uVar23 = 0;
            if (local_60 != 0) {
              local_46 = *local_64;
            }
            local_44 = *(byte **)(iVar11 + 0x14);
            local_40 = *(int *)(iVar11 + 0x18);
            if (local_60 != 0) {
              local_46 = local_46 == 0x2f;
            }
            if (local_40 != 0) {
              uVar23 = *local_44 - 0x2f;
            }
            local_5c = 6;
            if (local_40 != 0) {
              uVar23 = (uint)(uVar23 == 0);
            }
            local_48 = 0x201;
            local_26 = (undefined1)uVar23;
            local_3c = 6;
            local_28 = 0x201;
            cVar6 = FUN_015f776c(&local_64,&local_44);
            if (-1 < cVar6) goto LAB_009f0af8;
LAB_009f0cfc:
            uVar23 = 2;
            bVar34 = true;
            if (local_1d0 != 2) {
              pbVar19 = (byte *)(param_1 + 0x28 + uVar18 * 0x1c);
              do {
                uVar15 = *(uint *)(pbVar19 + -4);
                uVar16 = *(uint *)(pbVar19 + 0x18);
                uVar14 = uVar15;
                if (uVar16 < uVar15) {
                  uVar14 = uVar16;
                }
                iVar8 = FUN_016dd50a(*(undefined4 *)(pbVar19 + 0x14),*(undefined4 *)(pbVar19 + -8),
                                     uVar14);
                if (iVar8 == 0) {
                  iVar8 = uVar16 - uVar15;
                }
                if (0 < iVar8 == iVar8 < 0) {
                  if (pbVar19[0x1c] == *pbVar19) {
                    local_64 = *(byte **)(pbVar19 + 0x24);
                    local_60 = *(int *)(pbVar19 + 0x28);
                    uVar14 = 0;
                    local_44 = *(byte **)(pbVar19 + 8);
                    local_40 = *(int *)(pbVar19 + 0xc);
                    if (local_60 != 0) {
                      uVar14 = LZCOUNT(*local_64 - 0x2f);
                    }
                    puVar9 = &local_48;
                    local_48 = 0x201;
                    if (local_60 != 0) {
                      uVar14 = uVar14 >> 5;
                    }
                    local_46 = (byte)uVar14;
                    if (local_40 != 0) {
                      puVar9 = (undefined2 *)(*local_44 - 0x2f);
                    }
                    local_5c = 6;
                    local_26 = local_40 != 0 && puVar9 == (undefined2 *)0x0;
                    local_3c = 6;
                    local_28 = 0x201;
                    cVar6 = FUN_015f776c(&local_64,&local_44);
                    if ((uint)(int)cVar6 < 0x80000000) goto LAB_009f0e38;
                  }
                  else if (*pbVar19 <= pbVar19[0x1c]) goto LAB_009f0e38;
                }
                else if (((char)((0 < iVar8) - (iVar8 < 0)) == '\x02') || (-1 < iVar8))
                goto LAB_009f0e38;
                uVar23 = uVar23 + 1;
                pbVar19 = pbVar19 + 0x1c;
              } while (local_1d0 != uVar23);
              goto LAB_009f0e34;
            }
          }
          else {
            if (((char)((0 < iVar8) - (iVar8 < 0)) != '\x02') && (iVar8 < 0)) goto LAB_009f0cfc;
LAB_009f0af8:
            uVar23 = 2;
            bVar34 = false;
            if (local_1d0 != 2) {
              pbVar19 = (byte *)(param_1 + 0x28 + uVar18 * 0x1c);
              do {
                uVar16 = *(uint *)(pbVar19 + -4);
                uVar15 = *(uint *)(pbVar19 + 0x18);
                uVar14 = uVar16;
                if (uVar15 < uVar16) {
                  uVar14 = uVar15;
                }
                iVar8 = FUN_016dd50a(*(undefined4 *)(pbVar19 + 0x14),*(undefined4 *)(pbVar19 + -8),
                                     uVar14);
                if (iVar8 == 0) {
                  iVar8 = uVar15 - uVar16;
                }
                if (0 < iVar8 == iVar8 < 0) {
                  if (pbVar19[0x1c] == *pbVar19) {
                    local_64 = *(byte **)(pbVar19 + 0x24);
                    local_60 = *(int *)(pbVar19 + 0x28);
                    uVar14 = 0;
                    local_44 = *(byte **)(pbVar19 + 8);
                    local_40 = *(int *)(pbVar19 + 0xc);
                    if (local_60 != 0) {
                      uVar14 = LZCOUNT(*local_64 - 0x2f);
                    }
                    puVar9 = &local_48;
                    local_48 = 0x201;
                    if (local_60 != 0) {
                      uVar14 = uVar14 >> 5;
                    }
                    local_46 = (byte)uVar14;
                    if (local_40 != 0) {
                      puVar9 = (undefined2 *)(*local_44 - 0x2f);
                    }
                    local_5c = 6;
                    local_26 = local_40 != 0 && puVar9 == (undefined2 *)0x0;
                    local_3c = 6;
                    local_28 = 0x201;
                    cVar6 = FUN_015f776c(&local_64,&local_44);
                    if (cVar6 < '\0') {
                      bVar34 = false;
                      goto LAB_009f0e38;
                    }
                  }
                  else if (pbVar19[0x1c] < *pbVar19) goto LAB_009f0e38;
                }
                else if (((char)((0 < iVar8) - (iVar8 < 0)) != '\x02') && (iVar8 < 0))
                goto LAB_009f0e38;
                uVar23 = uVar23 + 1;
                pbVar19 = pbVar19 + 0x1c;
              } while (local_1d0 != uVar23);
LAB_009f0e34:
              uVar23 = local_1d0;
            }
          }
LAB_009f0e38:
          if (uVar23 < uVar7) goto LAB_009f0a48;
          bVar34 = !bVar34;
          uVar14 = uVar7;
          if (!bVar34) {
            uVar14 = uVar23 >> 1;
            bVar34 = uVar14 == 0;
          }
          if (!bVar34) {
            iVar12 = param_1 + -0xc + uVar23 * 0x1c;
            iVar11 = uVar18 * 0x1c;
            iVar8 = param_1;
            do {
              iVar20 = iVar12 + iVar11;
              puVar32 = (undefined4 *)(iVar8 + iVar11);
              uVar22 = *puVar32;
              iVar8 = iVar8 + 0x1c;
              uVar14 = uVar14 - 1;
              *puVar32 = *(undefined4 *)(iVar20 + -0x10);
              *(undefined4 *)(iVar20 + -0x10) = uVar22;
              uVar22 = puVar32[1];
              puVar32[1] = *(undefined4 *)(iVar20 + -0xc);
              *(undefined4 *)(iVar20 + -0xc) = uVar22;
              uVar22 = puVar32[2];
              puVar32[2] = *(undefined4 *)(iVar20 + -8);
              *(undefined4 *)(iVar20 + -8) = uVar22;
              uVar22 = puVar32[3];
              puVar32[3] = *(undefined4 *)(iVar20 + -4);
              *(undefined4 *)(iVar20 + -4) = uVar22;
              uVar22 = *(undefined4 *)(iVar12 + iVar11);
              *(undefined4 *)(iVar12 + iVar11) = puVar32[4];
              iVar12 = iVar12 + -0x1c;
              puVar32[4] = uVar22;
              uVar22 = puVar32[5];
              puVar32[5] = *(undefined4 *)(iVar20 + 4);
              *(undefined4 *)(iVar20 + 4) = uVar22;
              uVar22 = *(undefined4 *)(iVar20 + 8);
              *(undefined4 *)(iVar20 + 8) = puVar32[6];
              puVar32[6] = uVar22;
            } while (uVar14 != 0);
          }
        }
        local_1d0 = uVar23 << 1 | 1;
      }
      uVar23 = uVar18 - (uVar27 >> 1);
      uVar14 = uVar18 + (local_1d0 >> 1);
      uVar15 = uVar14 + uVar18;
      lVar3 = (uVar4 & 0xffffffff) * (ulonglong)uVar15;
      lVar5 = uVar4 * CONCAT14(CARRY4(uVar23,uVar18),uVar23 + uVar18);
      uVar14 = (uint)CARRY4(uVar14,uVar18) * (int)uVar4 +
               uVar15 * (int)(uVar4 >> 0x20) + (int)((ulonglong)lVar3 >> 0x20) ^
               (uint)((ulonglong)lVar5 >> 0x20);
      uVar23 = LZCOUNT((uint)lVar3 ^ (uint)lVar5) + 0x20;
      if (uVar14 != 0) {
        uVar23 = LZCOUNT(uVar14);
      }
    }
    if (1 < uVar31) {
      do {
        while( true ) {
          uVar14 = uVar31 - 1;
          if (abStack_a7[uVar31] < uVar23) goto LAB_009f1444;
          uVar21 = local_1b0[uVar14];
          uVar15 = uVar21 >> 1;
          uVar16 = uVar15 + (uVar27 >> 1);
          uVar31 = uVar14;
          if ((uVar16 <= param_4) && (((uVar21 | uVar27) & 1) == 0)) break;
          puVar32 = (undefined4 *)(param_1 + (uVar18 - uVar16) * 0x1c);
          if ((uVar21 & 1) == 0) {
            FUN_009fdef8(puVar32,uVar15,param_3,param_4,LZCOUNT(uVar15 | 1) << 1 ^ 0x3e,0);
          }
          if ((uVar27 & 1) == 0) {
            FUN_009fdef8(puVar32 + uVar15 * 7,uVar27 >> 1,param_3,param_4,
                         LZCOUNT(uVar27 >> 1 | 1) << 1 ^ 0x3e,0);
          }
          uVar29 = uVar27 >> 1;
          if (1 < uVar21 && 1 < uVar27) {
            uVar27 = uVar15;
            if (uVar29 < uVar15) {
              uVar27 = uVar29;
            }
            if (uVar27 <= param_4) {
              puVar25 = puVar32 + uVar15 * 7;
              puVar13 = puVar32;
              if (uVar29 < uVar15) {
                puVar13 = puVar25;
              }
              FUN_016dd1aa(param_3,puVar13,uVar27 * 0x1c);
              puVar33 = param_3 + uVar27 * 7;
              puVar13 = param_3;
              if (uVar29 < uVar15) {
                puVar10 = (undefined4 *)(param_1 + -0x1c + uVar18 * 0x1c);
                do {
                  uVar15 = puVar25[-5];
                  uVar21 = puVar33[-5];
                  uVar27 = uVar15;
                  if (uVar21 < uVar15) {
                    uVar27 = uVar21;
                  }
                  uVar27 = FUN_016dd50a(puVar33[-6],puVar25[-6],uVar27);
                  if (uVar27 == 0) {
                    uVar27 = uVar21 - uVar15;
                  }
                  puVar28 = puVar33 + -7;
                  puVar30 = puVar25 + -7;
                  uVar15 = 0;
                  puVar17 = puVar28;
                  if ((char)((0 < (int)uVar27) - ((int)uVar27 < 0)) != '\x02') {
                    if (0 < (int)uVar27 == (int)uVar27 < 0) {
                      bVar1 = *(byte *)(puVar25 + -4);
                      bVar2 = *(byte *)(puVar33 + -4);
                      if (bVar2 == bVar1) {
                        local_64 = (byte *)puVar33[-2];
                        local_60 = puVar33[-1];
                        uVar27 = 0;
                        local_44 = (byte *)puVar25[-2];
                        local_40 = puVar25[-1];
                        if (local_60 != 0) {
                          uVar27 = LZCOUNT(*local_64 - 0x2f);
                        }
                        puVar9 = &local_48;
                        local_48 = 0x201;
                        if (local_60 != 0) {
                          uVar27 = uVar27 >> 5;
                        }
                        local_46 = (byte)uVar27;
                        if (local_40 != 0) {
                          puVar9 = (undefined2 *)(*local_44 - 0x2f);
                        }
                        local_5c = 6;
                        local_26 = local_40 != 0 && puVar9 == (undefined2 *)0x0;
                        local_3c = 6;
                        local_28 = 0x201;
                        cVar6 = FUN_015f776c(&local_64,&local_44);
                        uVar15 = (uint)(cVar6 < '\0');
                        if (cVar6 < '\0') {
                          puVar17 = puVar30;
                        }
                      }
                      else {
                        uVar15 = (uint)(bVar2 < bVar1);
                        if (bVar2 < bVar1) goto LAB_009f1220;
                      }
                    }
                    else {
                      uVar15 = uVar27 >> 0x1f;
                      if (0x7fffffff < uVar27) {
LAB_009f1220:
                        puVar17 = puVar30;
                      }
                    }
                  }
                  uVar22 = puVar17[1];
                  uVar24 = puVar17[2];
                  *puVar10 = *puVar17;
                  puVar10[1] = uVar22;
                  puVar10[2] = uVar24;
                  uVar22 = puVar17[4];
                  uVar24 = puVar17[5];
                  uVar26 = puVar17[6];
                  puVar10[3] = puVar17[3];
                  puVar10[4] = uVar22;
                  puVar10[5] = uVar24;
                  puVar10[6] = uVar26;
                  puVar33 = puVar28 + uVar15 * 7;
                  puVar25 = puVar30 + (uVar15 ^ 1) * 7;
                } while ((puVar25 != puVar32) && (puVar10 = puVar10 + -7, puVar33 != param_3));
                puVar17 = puVar25;
              }
              else {
                do {
                  uVar21 = puVar13[2];
                  uVar15 = puVar25[2];
                  uVar27 = uVar21;
                  if (uVar15 < uVar21) {
                    uVar27 = uVar15;
                  }
                  uVar27 = FUN_016dd50a(puVar25[1],puVar13[1],uVar27);
                  if (uVar27 == 0) {
                    uVar27 = uVar15 - uVar21;
                  }
                  uVar15 = 0;
                  puVar10 = puVar13;
                  if ((char)((0 < (int)uVar27) - ((int)uVar27 < 0)) == '\x02') {
                    uVar21 = 1;
                  }
                  else if (0 < (int)uVar27 == (int)uVar27 < 0) {
                    bVar34 = *(byte *)(puVar13 + 3) <= *(byte *)(puVar25 + 3);
                    if (*(byte *)(puVar25 + 3) == *(byte *)(puVar13 + 3)) {
                      local_60 = puVar25[6];
                      local_46 = false;
                      local_64 = (byte *)puVar25[5];
                      local_26 = false;
                      local_44 = (byte *)puVar13[5];
                      local_40 = puVar13[6];
                      if (local_60 != 0) {
                        local_46 = *local_64 == 0x2f;
                      }
                      local_5c = 6;
                      local_48 = 0x201;
                      if (local_40 != 0) {
                        local_26 = *local_44 == 0x2f;
                      }
                      local_3c = 6;
                      local_28 = 0x201;
                      cVar6 = FUN_015f776c(&local_64,&local_44);
                      uVar27 = (uint)cVar6;
                      uVar21 = (uint)(uVar27 < 0x80000000);
                      uVar15 = (uint)((int)uVar27 < 0);
                      if ((int)uVar27 < 0) {
                        puVar10 = puVar25;
                      }
                    }
                    else {
                      uVar15 = (uint)!bVar34;
                      uVar21 = (uint)bVar34;
                      if (!bVar34) goto LAB_009f1408;
                    }
                  }
                  else {
                    uVar15 = uVar27 >> 0x1f;
                    uVar21 = ~uVar27 >> 0x1f;
                    if (0x7fffffff < uVar27) {
LAB_009f1408:
                      puVar10 = puVar25;
                    }
                  }
                  uVar22 = puVar10[1];
                  uVar24 = puVar10[2];
                  puVar17 = puVar32 + 7;
                  *puVar32 = *puVar10;
                  puVar32[1] = uVar22;
                  puVar32[2] = uVar24;
                  uVar22 = puVar10[4];
                  uVar24 = puVar10[5];
                  uVar26 = puVar10[6];
                  puVar13 = puVar13 + uVar21 * 7;
                  bVar34 = puVar13 != puVar33;
                  puVar32[3] = puVar10[3];
                  puVar32[4] = uVar22;
                  puVar32[5] = uVar24;
                  puVar32[6] = uVar26;
                  if (bVar34) {
                    uVar21 = uVar15;
                  }
                  puVar10 = (undefined4 *)(uVar21 * 7);
                  if (bVar34) {
                    puVar25 = puVar25 + uVar21 * 7;
                    puVar10 = (undefined4 *)(param_1 + uVar18 * 0x1c);
                  }
                  puVar32 = puVar17;
                } while (bVar34 && puVar25 != puVar10);
              }
              FUN_016dd1aa(puVar17,puVar13,(int)puVar33 - (int)puVar13);
            }
          }
          uVar27 = uVar16 * 2 | 1;
          if (uVar14 < 2) goto LAB_009f143c;
        }
        uVar27 = uVar16 * 2;
      } while (1 < uVar14);
LAB_009f143c:
      uVar31 = 1;
    }
LAB_009f1444:
    abStack_a7[uVar31 + 1] = (byte)uVar23;
    local_1b0[uVar31] = uVar27;
    if (param_2 <= uVar18) {
      if ((uVar27 & 1) == 0) {
        FUN_009fdef8(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar31 = uVar31 + 1;
    uVar18 = uVar18 + (local_1d0 >> 1);
    uVar27 = local_1d0;
  } while( true );
}

