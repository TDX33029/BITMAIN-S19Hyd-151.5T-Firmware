// FUN_019bb830 @ 019bb830 size=1444 calls_out=6 calls_in=3
// strings: 

undefined4 FUN_019bb830(byte *param_1,uint param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  byte *pbVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  uint uVar20;
  byte *pbVar21;
  byte *pbVar22;
  char *pcVar23;
  uint in_fpscr;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined *local_64;
  int local_50;
  char *local_4c;
  uint local_3c;
  
  if (param_2 < 0x10) {
    uVar11 = 0;
    if (param_2 != 0) {
      pbVar2 = param_1;
      uVar8 = param_2;
      do {
        if (-0x41 < (char)*pbVar2) {
          uVar11 = uVar11 + 1;
        }
        uVar8 = uVar8 - 1;
        pbVar2 = pbVar2 + 1;
      } while (uVar8 != 0);
    }
  }
  else {
    uVar11 = FUN_012fa650(param_1,param_2);
  }
  if (param_4 < 0x10) {
    uVar8 = 0;
    if (param_4 != 0) {
      pbVar2 = param_3;
      uVar9 = param_4;
      do {
        if (-0x41 < (char)*pbVar2) {
          uVar8 = uVar8 + 1;
        }
        uVar9 = uVar9 - 1;
        pbVar2 = pbVar2 + 1;
      } while (uVar9 != 0);
    }
  }
  else {
    uVar8 = FUN_012fa650(param_3,param_4);
  }
  if (uVar11 == 0) {
    if (uVar8 == 0) {
      return 0;
    }
  }
  else if (uVar8 != 0) {
    uVar9 = uVar11;
    if (uVar11 < uVar8) {
      uVar9 = uVar8;
    }
    uVar15 = uVar9 >> 1;
    local_4c = &DAT_00000001;
    uVar9 = (uVar9 >> 1) - 1;
    uVar12 = 0;
    uVar20 = uVar8 + uVar11;
    if (uVar15 == 0) {
      uVar9 = 0;
    }
    if ((int)uVar20 < 0) {
LAB_019bb92c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar12,uVar20);
    }
    if (uVar20 == 0) {
      uVar1 = 0;
    }
    else {
      uVar12 = 1;
      local_4c = (char *)FUN_012985ec(uVar20,1);
      uVar1 = uVar20;
      if (local_4c == (char *)0x0) goto LAB_019bb92c;
    }
    if (uVar20 < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d282c4);
    }
    uVar12 = 0;
    if (param_2 != 0) {
      pbVar2 = param_1 + param_2;
      pbVar22 = param_3 + param_4;
      pcVar3 = local_4c + uVar11;
      uVar4 = uVar15 - 1;
      if (uVar15 == 0) {
        uVar4 = 0;
      }
      local_64 = &DAT_01d282d4;
      local_50 = 0;
      uVar15 = 0;
      pbVar16 = param_1;
      do {
        uVar4 = uVar4 + 1;
        pbVar17 = pbVar16 + 1;
        uVar14 = uVar4;
        if (uVar8 < uVar4) {
          uVar14 = uVar8;
        }
        puVar19 = (undefined1 *)(uint)*pbVar16;
        if (0x7fffffff < (uint)(int)(char)*pbVar16) {
          if (puVar19 < (undefined1 *)0xe0) {
            puVar19 = (undefined1 *)(pbVar16[1] & 0x3f | ((uint)puVar19 & 0x1f) << 6);
            pbVar17 = pbVar16 + 2;
          }
          else {
            uVar10 = pbVar16[2] & 0x3f | (pbVar16[1] & 0x3f) << 6;
            pbVar17 = pbVar16 + 3;
            if (puVar19 < (undefined1 *)0xf0) {
              puVar19 = (undefined1 *)(uVar10 | ((uint)puVar19 & 0x1f) << 0xc);
            }
            else {
              puVar19 = (undefined1 *)(*pbVar17 & 0x3f | uVar10 << 6 | ((uint)puVar19 & 7) << 0x12);
              if (puVar19 == &DAT_00110000) break;
              pbVar17 = pbVar16 + 4;
            }
          }
        }
        uVar10 = uVar15 - uVar9;
        if (uVar15 < uVar9) {
          uVar10 = 0;
        }
        if (uVar9 + 1 + uVar15 != 0) {
          uVar5 = 0;
          pbVar16 = param_3;
          do {
            if (pbVar16 == pbVar22) break;
            pbVar21 = pbVar16 + 1;
            puVar18 = (undefined1 *)(uint)*pbVar16;
            if (0x7fffffff < (uint)(int)(char)*pbVar16) {
              if (puVar18 < (undefined1 *)0xe0) {
                puVar18 = (undefined1 *)(pbVar16[1] & 0x3f | ((uint)puVar18 & 0x1f) << 6);
                pbVar21 = pbVar16 + 2;
              }
              else {
                pbVar21 = pbVar16 + 3;
                uVar13 = pbVar16[2] & 0x3f | (pbVar16[1] & 0x3f) << 6;
                if (puVar18 < (undefined1 *)0xf0) {
                  puVar18 = (undefined1 *)(uVar13 | ((uint)puVar18 & 0x1f) << 0xc);
                }
                else {
                  puVar18 = (undefined1 *)
                            (*pbVar21 & 0x3f | uVar13 << 6 | ((uint)puVar18 & 7) << 0x12);
                  if (puVar18 == &DAT_00110000) break;
                  pbVar21 = pbVar16 + 4;
                }
              }
            }
            if ((uVar10 <= uVar5) && (puVar19 == puVar18)) {
              if (uVar8 <= uVar5) {
LAB_019bbdd4:
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar5,uVar8,local_64);
              }
              if (pcVar3[uVar5] == '\0') {
                if (uVar11 <= uVar15) {
                  local_64 = &DAT_01d282e4;
                  uVar5 = uVar15;
                  uVar8 = uVar11;
                  goto LAB_019bbdd4;
                }
                local_4c[uVar15] = '\x01';
                pcVar3[uVar5] = '\x01';
                local_50 = local_50 + 1;
                break;
              }
            }
            uVar5 = uVar5 + 1;
            pbVar16 = pbVar21;
          } while (uVar14 != uVar5);
        }
        uVar15 = uVar15 + 1;
        pbVar16 = pbVar17;
      } while (pbVar17 != pbVar2);
      if (local_50 != 0) {
        local_3c = 0;
        pcVar7 = pcVar3;
        pcVar23 = local_4c;
        do {
          if (param_1 == pbVar2) break;
          puVar19 = (undefined1 *)(uint)*param_1;
          pbVar16 = param_1 + 1;
          if (0x7fffffff < (uint)(int)(char)*param_1) {
            if (puVar19 < (undefined1 *)0xe0) {
              puVar19 = (undefined1 *)(param_1[1] & 0x3f | ((uint)puVar19 & 0x1f) << 6);
              pbVar16 = param_1 + 2;
            }
            else {
              uVar9 = param_1[2] & 0x3f | (param_1[1] & 0x3f) << 6;
              if (puVar19 < (undefined1 *)0xf0) {
                puVar19 = (undefined1 *)(uVar9 | ((uint)puVar19 & 0x1f) << 0xc);
                pbVar16 = param_1 + 3;
              }
              else {
                puVar19 = (undefined1 *)
                          (param_1[3] & 0x3f | uVar9 << 6 | ((uint)puVar19 & 7) << 0x12);
                if (puVar19 == &DAT_00110000) break;
                pbVar16 = param_1 + 4;
              }
            }
          }
          param_1 = pbVar16;
          if (*pcVar23 == '\x01') {
LAB_019bbc6c:
            do {
              do {
                do {
                  pbVar16 = param_3;
                  pcVar6 = pcVar7;
                  pcVar7 = local_4c + uVar20;
                  param_3 = pbVar16;
                } while (pcVar6 == local_4c + uVar20);
                pcVar7 = pcVar6 + 1;
                param_3 = pbVar22;
              } while (pbVar16 == pbVar22);
              param_3 = pbVar16 + 1;
              puVar18 = (undefined1 *)(uint)*pbVar16;
              if (0x7fffffff < (uint)(int)(char)*pbVar16) {
                if (puVar18 < (undefined1 *)0xe0) {
                  puVar18 = (undefined1 *)(pbVar16[1] & 0x3f | ((uint)puVar18 & 0x1f) << 6);
                  param_3 = pbVar16 + 2;
                }
                else {
                  uVar9 = pbVar16[2] & 0x3f | (pbVar16[1] & 0x3f) << 6;
                  if (puVar18 < (undefined1 *)0xf0) {
                    puVar18 = (undefined1 *)(uVar9 | ((uint)puVar18 & 0x1f) << 0xc);
                    param_3 = pbVar16 + 3;
                  }
                  else {
                    param_3 = pbVar16 + 4;
                    puVar18 = (undefined1 *)
                              (pbVar16[3] & 0x3f | uVar9 << 6 | ((uint)puVar18 & 7) << 0x12);
                    if (puVar18 == &DAT_00110000) goto LAB_019bbc6c;
                  }
                }
              }
            } while (*pcVar6 != '\x01');
            if (puVar19 != puVar18) {
              local_3c = local_3c + 1;
            }
          }
          pcVar23 = pcVar23 + 1;
        } while (pcVar23 != pcVar3);
        dVar24 = (double)VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
        dVar25 = (double)VectorUnsignedToFloat(local_50,(byte)(in_fpscr >> 0x16) & 3);
        dVar26 = (double)VectorUnsignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
        dVar27 = (double)VectorUnsignedToFloat
                                   (local_50 - (local_3c >> 1),(byte)(in_fpscr >> 0x16) & 3);
        uVar12 = SUB84((dVar25 / dVar26 + dVar25 / dVar24 + dVar27 / dVar25) / 3.0,0);
      }
    }
    FUN_019bb7e0(uVar1,local_4c);
    return uVar12;
  }
  return 0;
}

