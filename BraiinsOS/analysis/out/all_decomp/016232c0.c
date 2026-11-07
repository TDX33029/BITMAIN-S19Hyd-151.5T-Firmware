// FUN_016232c0 @ 016232c0 size=1536 calls_out=6 calls_in=4
// strings: 

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_016232c0(byte *param_1,uint param_2,byte *param_3,uint param_4)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  undefined4 uVar13;
  char *pcVar14;
  char *pcVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  char *pcVar20;
  byte *pbVar21;
  undefined1 *puVar22;
  byte *pbVar23;
  uint in_fpscr;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined *local_5c;
  int local_4c;
  char *local_48;
  
  if (param_2 < 0x10) {
    if (param_2 != 0) {
      uVar17 = 0;
      pbVar4 = param_1;
      uVar3 = param_2;
      do {
        if (-0x41 < (char)*pbVar4) {
          uVar17 = uVar17 + 1;
        }
        uVar3 = uVar3 - 1;
        pbVar4 = pbVar4 + 1;
      } while (uVar3 != 0);
      goto LAB_01623320;
    }
    uVar17 = 0;
    if (param_4 < 0x10) goto LAB_01623328;
LAB_0162360c:
    uVar3 = FUN_00fa9978(param_3,param_4);
  }
  else {
    uVar17 = FUN_00fa9978(param_1,param_2);
LAB_01623320:
    if (0xf < param_4) goto LAB_0162360c;
LAB_01623328:
    uVar3 = 0;
    if (param_4 != 0) {
      pbVar4 = param_3;
      uVar7 = param_4;
      do {
        if (-0x41 < (char)*pbVar4) {
          uVar3 = uVar3 + 1;
        }
        uVar7 = uVar7 - 1;
        pbVar4 = pbVar4 + 1;
      } while (uVar7 != 0);
    }
  }
  if (uVar17 == 0) {
    if (uVar3 == 0) {
      return 0;
    }
  }
  else if (uVar3 != 0) {
    uVar7 = uVar17;
    if (uVar17 < uVar3) {
      uVar7 = uVar3;
    }
    uVar8 = uVar7 >> 1;
    local_48 = &DAT_00000001;
    uVar7 = (uVar7 >> 1) - 1;
    uVar13 = 0;
    uVar10 = uVar3 + uVar17;
    if (uVar8 == 0) {
      uVar7 = 0;
    }
    if ((int)uVar10 < 0) {
LAB_0162339c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar13,uVar10);
    }
    if (uVar10 != 0) {
      uVar13 = 1;
      local_48 = (char *)FUN_016d38c8(uVar10,1);
      if (local_48 == (char *)0x0) goto LAB_0162339c;
    }
    if (uVar10 < uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018abae0);
    }
    if (param_2 == 0) {
      uVar13 = 0;
    }
    else {
      pbVar4 = param_1 + param_2;
      pbVar21 = param_3 + param_4;
      pcVar5 = local_48 + uVar17;
      uVar6 = uVar8 - 1;
      if (uVar8 == 0) {
        uVar6 = 0;
      }
      uVar8 = 0;
      local_5c = &DAT_018abaf0;
      local_4c = 0;
      pbVar23 = param_1;
      do {
        uVar6 = uVar6 + 1;
        pbVar11 = pbVar23 + 1;
        uVar19 = uVar6;
        if (uVar3 < uVar6) {
          uVar19 = uVar3;
        }
        puVar22 = (undefined1 *)(uint)*pbVar23;
        if (0x7fffffff < (uint)(int)(char)*pbVar23) {
          if (puVar22 < (undefined1 *)0xe0) {
            puVar22 = (undefined1 *)(pbVar23[1] & 0x3f | ((uint)puVar22 & 0x1f) << 6);
            pbVar11 = pbVar23 + 2;
          }
          else {
            pbVar11 = pbVar23 + 3;
            uVar18 = pbVar23[2] & 0x3f | (pbVar23[1] & 0x3f) << 6;
            if (puVar22 < (undefined1 *)0xf0) {
              puVar22 = (undefined1 *)(uVar18 | ((uint)puVar22 & 0x1f) << 0xc);
            }
            else {
              puVar22 = (undefined1 *)(*pbVar11 & 0x3f | uVar18 << 6 | ((uint)puVar22 & 7) << 0x12);
              if (puVar22 == &DAT_00110000) break;
              pbVar11 = pbVar23 + 4;
            }
          }
        }
        uVar18 = uVar8 - uVar7;
        if (uVar8 < uVar7) {
          uVar18 = 0;
        }
        if (uVar7 + 1 + uVar8 != 0) {
          uVar9 = 0;
          pbVar23 = param_3;
          do {
            if (pbVar23 == pbVar21) break;
            puVar16 = (undefined1 *)(uint)*pbVar23;
            pbVar2 = pbVar23 + 1;
            if (0x7fffffff < (uint)(int)(char)*pbVar23) {
              if (puVar16 < (undefined1 *)0xe0) {
                puVar16 = (undefined1 *)(pbVar23[1] & 0x3f | ((uint)puVar16 & 0x1f) << 6);
                pbVar2 = pbVar23 + 2;
              }
              else {
                uVar12 = pbVar23[2] & 0x3f | (pbVar23[1] & 0x3f) << 6;
                if (puVar16 < &DAT_000000f0) {
                  puVar16 = (undefined1 *)(uVar12 | ((uint)puVar16 & 0x1f) << 0xc);
                  pbVar2 = pbVar23 + 3;
                }
                else {
                  puVar16 = (undefined1 *)
                            (pbVar23[3] & 0x3f | uVar12 << 6 | ((uint)puVar16 & 7) << 0x12);
                  if (puVar16 == &DAT_00110000) break;
                  pbVar2 = pbVar23 + 4;
                }
              }
            }
            pbVar23 = pbVar2;
            if ((uVar18 <= uVar9) && (puVar22 == puVar16)) {
              if (uVar3 <= uVar9) {
LAB_01623898:
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar9,uVar3,local_5c);
              }
              if (pcVar5[uVar9] == '\0') {
                if (uVar17 <= uVar8) {
                  local_5c = &DAT_018abb00;
                  uVar9 = uVar8;
                  uVar3 = uVar17;
                  goto LAB_01623898;
                }
                local_48[uVar8] = '\x01';
                pcVar5[uVar9] = '\x01';
                local_4c = local_4c + 1;
                break;
              }
            }
            uVar9 = uVar9 + 1;
          } while (uVar19 != uVar9);
        }
        uVar8 = uVar8 + 1;
        pbVar23 = pbVar11;
      } while (pbVar11 != pbVar4);
      if (local_4c == 0) {
        uVar13 = 0;
      }
      else {
        uVar7 = 0;
        pcVar15 = pcVar5;
        pcVar20 = local_48;
        do {
          if (param_1 == pbVar4) break;
          pbVar23 = param_1 + 1;
          puVar22 = (undefined1 *)(uint)*param_1;
          if ((uint)(int)(char)*param_1 < 0x80000000) {
LAB_01623710:
            cVar1 = *pcVar20;
            param_1 = pbVar23;
          }
          else {
            if (puVar22 < (undefined1 *)0xe0) {
              puVar22 = (undefined1 *)(param_1[1] & 0x3f | ((uint)puVar22 & 0x1f) << 6);
              pbVar23 = param_1 + 2;
              goto LAB_01623710;
            }
            uVar8 = param_1[2] & 0x3f | (param_1[1] & 0x3f) << 6;
            if (puVar22 < &DAT_000000f0) {
              puVar22 = (undefined1 *)(uVar8 | ((uint)puVar22 & 0x1f) << 0xc);
              param_1 = param_1 + 3;
              cVar1 = *pcVar20;
            }
            else {
              puVar22 = (undefined1 *)(param_1[3] & 0x3f | uVar8 << 6 | ((uint)puVar22 & 7) << 0x12)
              ;
              if (puVar22 == &DAT_00110000) break;
              cVar1 = *pcVar20;
              param_1 = param_1 + 4;
            }
          }
          if (cVar1 == '\x01') {
LAB_01623750:
            do {
              do {
                do {
                  pbVar23 = param_3;
                  pcVar14 = pcVar15;
                  pcVar15 = pcVar5 + uVar3;
                  param_3 = pbVar23;
                } while (pcVar14 == pcVar5 + uVar3);
                pcVar15 = pcVar14 + 1;
                param_3 = pbVar21;
              } while (pbVar23 == pbVar21);
              param_3 = pbVar23 + 1;
              puVar16 = (undefined1 *)(uint)*pbVar23;
              if (0x7fffffff < (uint)(int)(char)*pbVar23) {
                if (puVar16 < (undefined1 *)0xe0) {
                  puVar16 = (undefined1 *)(pbVar23[1] & 0x3f | ((uint)puVar16 & 0x1f) << 6);
                  param_3 = pbVar23 + 2;
                }
                else {
                  uVar8 = pbVar23[2] & 0x3f | (pbVar23[1] & 0x3f) << 6;
                  if (puVar16 < (undefined1 *)0xf0) {
                    puVar16 = (undefined1 *)(uVar8 | ((uint)puVar16 & 0x1f) << 0xc);
                    param_3 = pbVar23 + 3;
                  }
                  else {
                    param_3 = pbVar23 + 4;
                    puVar16 = (undefined1 *)
                              (pbVar23[3] & 0x3f | uVar8 << 6 | ((uint)puVar16 & 7) << 0x12);
                    if (puVar16 == &DAT_00110000) goto LAB_01623750;
                  }
                }
              }
            } while (*pcVar14 != '\x01');
            if (puVar22 != puVar16) {
              uVar7 = uVar7 + 1;
            }
          }
          pcVar20 = pcVar20 + 1;
        } while (pcVar20 != pcVar5);
        dVar24 = (double)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
        dVar25 = (double)VectorUnsignedToFloat(local_4c,(byte)(in_fpscr >> 0x16) & 3);
        dVar26 = (double)VectorUnsignedToFloat(uVar17,(byte)(in_fpscr >> 0x16) & 3);
        dVar27 = (double)VectorUnsignedToFloat(local_4c - (uVar7 >> 1),(byte)(in_fpscr >> 0x16) & 3)
        ;
        uVar13 = SUB84((dVar25 / dVar26 + dVar25 / dVar24 + dVar27 / dVar25) / 3.0,0);
      }
      if (uVar10 == 0) {
        return uVar13;
      }
    }
    thunk_FUN_016d3fb4(local_48);
    return uVar13;
  }
  return 0;
}

