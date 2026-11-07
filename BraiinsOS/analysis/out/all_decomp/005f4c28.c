// FUN_005f4c28 @ 005f4c28 size=3200 calls_out=15 calls_in=2
// strings: 

void FUN_005f4c28(undefined4 param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  undefined4 extraout_r2;
  int iVar13;
  int iVar14;
  undefined4 extraout_r3;
  undefined4 uVar15;
  int unaff_r4;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  undefined *puVar21;
  uint uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  uint *puVar26;
  undefined *puVar27;
  bool bVar28;
  bool bVar29;
  undefined *local_1bc;
  uint local_190;
  uint local_18c;
  int local_17c;
  uint *local_178;
  uint local_174;
  uint local_170;
  int local_16c;
  uint local_168;
  uint local_164;
  int local_160;
  uint local_15c;
  uint uStack_158;
  int *local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  byte abStack_144 [255];
  byte local_45;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined1 local_2c;
  undefined4 local_28;
  
  uVar16 = *(uint *)(param_2 + 8);
  bVar2 = *(byte *)(param_2 + 0x147);
  FUN_005ff9d4(&local_17c,uVar16);
  uVar19 = *(uint *)(param_2 + 0x38);
  uVar3 = 0;
  bVar29 = 0x3ffffffe < uVar19;
  bVar28 = uVar19 == 0x3fffffff;
  uVar10 = uVar19 * 4;
  if (uVar19 < 0x40000000) {
    bVar29 = 0x7ffffffb < uVar10;
    bVar28 = uVar10 == 0x7ffffffc;
  }
  if (bVar29 && !bVar28) {
LAB_005f4c64:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar3,uVar10);
  }
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  if (uVar10 == 0) {
    iVar4 = 4;
    uVar22 = 0;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(uVar10);
    if (iVar4 == 0) {
      uVar3 = 4;
      goto LAB_005f4c64;
    }
    uVar22 = uVar19;
  }
  FUN_016dd1aa(iVar4,uVar3,uVar10);
  piVar5 = *(int **)(param_2 + 0x3c);
  uVar3 = extraout_r2;
  uVar15 = extraout_r3;
  if (piVar5 != (int *)0x0) {
    do {
      iVar9 = *piVar5;
      bVar28 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar28);
    *piVar5 = iVar9 + 1;
    if (iVar9 < 0) {
LAB_005f5854:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x5f5854);
      (*pcVar1)();
    }
    uVar3 = *(undefined4 *)(param_2 + 0x40);
    uVar15 = *(undefined4 *)(param_2 + 0x44);
  }
  local_148 = bVar2 + 1;
  local_16c = 4;
  local_2c = *(undefined1 *)(param_2 + 0x160);
  uVar24 = *(undefined4 *)(param_2 + 0x148);
  uVar25 = *(undefined4 *)(param_2 + 0x14c);
  local_168 = 0;
  local_170 = 0;
  local_164 = uVar22;
  local_160 = iVar4;
  local_15c = uVar19;
  uStack_158 = uVar16;
  local_154 = piVar5;
  uStack_150 = uVar3;
  uStack_14c = uVar15;
  FUN_016dd1aa(abStack_144,param_2 + 0x48,0xff);
  iVar9 = *(int *)(param_2 + 4);
  uVar10 = *(uint *)(param_2 + 0x2c);
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_190 = local_174;
  iVar18 = *(int *)(param_2 + 0x10);
  uVar19 = *(uint *)(param_2 + 0x14);
  iVar20 = *(int *)(param_2 + 0x28);
  local_1bc = &DAT_01857148;
  iVar4 = iVar9;
  local_18c = 0;
  local_45 = bVar2;
  local_44 = uVar24;
  local_40 = uVar25;
LAB_005f4dbc:
  for (; uVar22 = local_168, iVar4 != iVar9 + uVar16 * 0x14; iVar4 = iVar4 + 0x14) {
    if (local_18c == uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01857438);
    }
    if (local_18c != 1) {
      iVar11 = *(int *)(iVar4 + 8);
      uVar3 = *(undefined4 *)(iVar4 + 0xc);
      puVar17 = (uint *)(iVar9 + local_18c * 0x14);
      uVar6 = *puVar17;
      if (uVar6 == 0) {
        uVar23 = 0;
        if (*(uint *)(iVar4 + 0x10) < 2) goto LAB_005f4f40;
LAB_005f502c:
        if (local_168 == local_170) {
          FUN_005fd37c(&local_170);
        }
        *(uint *)(local_16c + uVar22 * 4) = uVar23;
        uVar6 = uVar22 + 1;
        if (uVar6 == local_170) {
          local_168 = uVar6;
          FUN_005fd37c(&local_170);
        }
        *(undefined4 *)(local_16c + uVar6 * 4) = uVar3;
        uVar6 = uVar22 + 2;
        uVar23 = *puVar17;
        local_28 = 0;
        local_168 = uVar6;
        if (uVar23 == 0) goto LAB_005f51bc;
        if (uVar23 < uVar19) {
          iVar14 = 0;
          do {
            pbVar12 = (byte *)(iVar18 + uVar23 * 9);
            uVar23 = *(uint *)(pbVar12 + 5);
            bVar2 = abStack_144[*pbVar12];
            *(byte *)((int)&local_28 + iVar14) = bVar2;
            uVar7 = local_28;
            if (iVar14 + 1 == 4) {
              if (uVar6 == local_170) {
                FUN_005fd37c(&local_170);
              }
              *(uint *)(local_16c + uVar6 * 4) = uVar7;
              local_168 = uVar6 + 1;
              local_28 = 0;
              iVar13 = 0;
              uVar7 = local_168;
              if (uVar23 == 0) goto LAB_005f516c;
            }
            else {
              iVar13 = iVar14 + 1;
              uVar7 = uVar6;
              if (uVar23 == 0) goto LAB_005f5130;
            }
            uVar6 = uVar7;
            iVar14 = iVar13;
            if (uVar19 <= uVar23) {
              puVar27 = &DAT_01894598;
              local_174 = uVar19;
              goto LAB_005f5848;
            }
          } while( true );
        }
        puVar27 = &DAT_01894598;
        local_174 = uVar19;
      }
      else {
        iVar14 = -1;
        uVar23 = uVar6;
        do {
          iVar13 = iVar14;
          if (uVar19 <= uVar23) {
            puVar27 = &DAT_01894598;
            local_174 = uVar19;
            goto LAB_005f5848;
          }
          uVar23 = *(uint *)(iVar18 + uVar23 * 9 + 5);
          iVar14 = iVar13 + 1;
        } while (uVar23 != 0);
        if ((*(uint *)(iVar4 + 0x10) < 2) || (uVar23 = iVar13 + 2, 0x7f < uVar23)) {
LAB_005f4f40:
          if (local_168 == local_170) {
            FUN_005fd37c(&local_170);
          }
          uVar6 = uVar22 + 1;
          *(undefined4 *)(local_16c + uVar22 * 4) = 0xff;
          if (uVar6 == local_170) {
            local_168 = uVar6;
            FUN_005fd37c(&local_170);
          }
          *(undefined4 *)(local_16c + uVar6 * 4) = uVar3;
          iVar14 = local_45 + 1;
          uVar6 = uVar22 + 2;
          local_168 = uVar6;
          if (local_170 - uVar6 <= (uint)local_45) {
            FUN_005fd500(&local_170,uVar6,iVar14);
          }
          do {
            *(undefined4 *)(local_16c + local_168 * 4) = 1;
            local_168 = local_168 + 1;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
          if (local_168 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_0033d5a0,0x47,&DAT_01856f78);
          }
          uVar23 = *puVar17;
          while (uVar23 != 0) {
            if (uVar19 <= uVar23) {
              puVar27 = &DAT_01894598;
              local_174 = uVar19;
              goto LAB_005f5848;
            }
            pbVar12 = (byte *)(iVar18 + uVar23 * 9);
            uVar23 = uVar6 + abStack_144[*pbVar12];
            if (local_168 <= uVar23) {
              puVar27 = &DAT_01856f88;
              local_174 = local_168;
              goto LAB_005f5848;
            }
            uVar7 = *(uint *)(pbVar12 + 5);
            *(undefined4 *)(local_16c + uVar23 * 4) = *(undefined4 *)(pbVar12 + 1);
            uVar23 = uVar7;
          }
          goto LAB_005f51bc;
        }
        if ((iVar14 != 0) || (uVar23 = 1, iVar11 != 0)) goto LAB_005f502c;
        if (uVar6 < uVar19) {
          pbVar12 = (byte *)(iVar18 + uVar6 * 9);
          uVar15 = *(undefined4 *)(pbVar12 + 1);
          bVar2 = abStack_144[*pbVar12];
          if (local_168 == local_170) {
            FUN_005fd37c(&local_170);
          }
          uVar6 = uVar22 + 1;
          *(uint *)(local_16c + uVar22 * 4) = (uint)bVar2 << 8 | 0xfe;
          if (uVar6 == local_170) {
            local_168 = uVar6;
            FUN_005fd37c(&local_170);
          }
          *(undefined4 *)(local_16c + uVar6 * 4) = uVar3;
          uVar6 = uVar22 + 2;
          if (uVar6 == local_170) {
            local_168 = uVar6;
            FUN_005fd37c(&local_170);
          }
          *(undefined4 *)(local_16c + uVar6 * 4) = uVar15;
          local_168 = uVar22 + 3;
          goto LAB_005f5314;
        }
        puVar27 = &DAT_01894598;
        uVar23 = uVar6;
        local_174 = uVar19;
      }
      goto LAB_005f5848;
    }
    if (local_174 < 2) {
      local_18c = 1;
      goto LAB_005f578c;
    }
    local_178[1] = 1;
    local_18c = local_18c + 1;
  }
  if (local_174 == 0) {
    local_1bc = &DAT_01857108;
    local_18c = *(uint *)(param_2 + 0x150);
    local_190 = 0;
LAB_005f578c:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(local_18c,local_190,local_1bc);
  }
  puVar27 = &DAT_01857018;
  puVar21 = &DAT_01857048;
  puVar17 = local_178;
  do {
    puVar26 = puVar17 + 1;
    uVar10 = *puVar17;
    if (uVar10 != 1) {
      if (local_168 < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar10,local_168,local_168,&DAT_018570f8);
      }
      if (local_168 == uVar10) {
        uVar23 = 0;
        local_174 = 0;
        puVar27 = &DAT_01894518;
LAB_005f5848:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar23,local_174,puVar27);
      }
      uVar16 = local_168 - uVar10;
      pbVar12 = (byte *)(local_16c + uVar10 * 4);
      bVar2 = *pbVar12;
      uVar10 = (uint)bVar2;
      if (uVar10 == 0xfe) {
        if (uVar16 == 1) {
          uVar23 = 1;
          local_174 = 1;
          puVar27 = &DAT_01857058;
          goto LAB_005f5848;
        }
        uVar23 = *(uint *)(pbVar12 + 4);
        if (local_174 <= uVar23) {
          puVar27 = &DAT_01857068;
          goto LAB_005f5848;
        }
        *(uint *)(pbVar12 + 4) = local_178[uVar23];
        if (uVar16 < 3) {
          uVar23 = 2;
          local_174 = 2;
          puVar27 = &DAT_01857078;
          goto LAB_005f5848;
        }
        uVar23 = *(uint *)(pbVar12 + 8);
        if (local_174 <= uVar23) {
          puVar27 = &DAT_01857088;
          goto LAB_005f5848;
        }
        *(uint *)(pbVar12 + 8) = local_178[uVar23];
      }
      else if (uVar10 == 0xff) {
        if (uVar16 == 1) {
          uVar23 = 1;
          local_174 = 1;
          puVar27 = &DAT_01857098;
          goto LAB_005f5848;
        }
        uVar23 = *(uint *)(pbVar12 + 4);
        if (local_174 <= uVar23) {
          puVar27 = &DAT_018570a8;
          goto LAB_005f5848;
        }
        uVar6 = uVar16 - 2;
        *(uint *)(pbVar12 + 4) = local_178[uVar23];
        if (uVar6 < local_148) {
          uVar19 = 0;
          uVar16 = local_148;
          puVar21 = &DAT_018570c8;
          goto LAB_005f56b4;
        }
        if (local_148 != 0) {
          iVar4 = local_148 << 2;
          puVar17 = (uint *)(pbVar12 + 8);
          do {
            uVar23 = *puVar17;
            if (local_174 <= uVar23) {
              puVar27 = &DAT_018570b8;
              goto LAB_005f5848;
            }
            iVar4 = iVar4 + -4;
            *puVar17 = local_178[uVar23];
            puVar17 = puVar17 + 1;
          } while (iVar4 != 0);
        }
      }
      else {
        uVar19 = uVar10 & 3;
        if ((bVar2 & 3) != 0) {
          uVar19 = 1;
        }
        if (uVar16 == 1) {
          uVar23 = 1;
          local_174 = 1;
          puVar27 = &DAT_01857008;
          goto LAB_005f5848;
        }
        uVar23 = *(uint *)(pbVar12 + 4);
        if (local_174 <= uVar23) goto LAB_005f5848;
        uVar19 = (bVar2 >> 2) + uVar19 + 2;
        *(uint *)(pbVar12 + 4) = local_178[uVar23];
        if (uVar16 < uVar19) {
          uVar6 = uVar16;
LAB_005f56b4:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar19,uVar16,uVar6,puVar21);
        }
        uVar6 = uVar16 - uVar19;
        if (uVar6 < uVar10) {
          uVar19 = 0;
          uVar16 = uVar10;
          puVar21 = &DAT_01857038;
          goto LAB_005f56b4;
        }
        if (uVar10 != 0) {
          iVar4 = uVar10 << 2;
          puVar17 = (uint *)(pbVar12 + uVar19 * 4);
          do {
            uVar23 = *puVar17;
            if (local_174 <= uVar23) {
              puVar27 = &DAT_01857028;
              goto LAB_005f5848;
            }
            iVar4 = iVar4 + -4;
            *puVar17 = local_178[uVar23];
            puVar17 = puVar17 + 1;
          } while (iVar4 != 0);
        }
      }
    }
    puVar17 = puVar26;
  } while (puVar26 != local_178 + local_174);
  local_18c = *(uint *)(param_2 + 0x150);
  if (local_174 <= local_18c) {
    local_1bc = &DAT_01857108;
    goto LAB_005f578c;
  }
  uVar10 = *(uint *)(param_2 + 0x154);
  local_3c = local_178[local_18c];
  if (local_174 <= uVar10) {
    local_1bc = &DAT_01857118;
    local_18c = uVar10;
    goto LAB_005f578c;
  }
  local_38 = local_178[uVar10];
  local_18c = *(uint *)(param_2 + 0x158);
  if (local_174 <= local_18c) {
    local_1bc = &DAT_01857128;
    goto LAB_005f578c;
  }
  uVar10 = *(uint *)(param_2 + 0x15c);
  local_34 = local_178[local_18c];
  if (local_174 <= uVar10) {
    local_1bc = &DAT_01857138;
    local_18c = uVar10;
    goto LAB_005f578c;
  }
  local_30 = local_178[uVar10];
  if (local_168 < local_170) {
    if (local_168 == 0) {
      thunk_FUN_016d3fb4(local_16c);
      iVar4 = 4;
    }
    else {
      iVar9 = local_168 << 2;
      iVar4 = thunk_FUN_016d4ea4(local_16c,iVar9);
      if (iVar4 == 0) goto LAB_005f55d4;
    }
    local_170 = uVar22;
    local_16c = iVar4;
  }
  uVar10 = local_15c;
  if (local_15c < local_164) {
    if (local_15c == 0) {
      thunk_FUN_016d3fb4(local_160);
      iVar4 = 4;
    }
    else {
      iVar9 = local_15c << 2;
      iVar4 = thunk_FUN_016d4ea4(local_160,iVar9);
      if (iVar4 == 0) {
LAB_005f55d4:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,iVar9);
      }
    }
    local_164 = uVar10;
    local_160 = iVar4;
  }
  FUN_016dd1aa(param_1,&local_170,0x148);
  if (local_17c == 0) {
    return;
  }
  if (local_178 == (uint *)0x0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar10 = *(byte *)((int)local_178 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar16 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar9 = uVar16 - 0x10, uVar16 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar16 = (uint)(*(byte *)((int)local_178 + -3) >> 5);
  iVar20 = *(int *)(iVar4 + 8) + 0x10;
  iVar18 = iVar9 * uVar10 + iVar9 + -4;
  iVar9 = iVar20 + iVar18;
  if (4 < uVar16) {
    if (uVar16 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar16 = *(uint *)(iVar9 + -4);
    if (uVar16 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar9 - (int)local_178) < uVar16) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar9 - uVar16) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar20 + iVar18) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar16 = 1 << uVar10;
  *(undefined1 *)((int)local_178 + -3) = 0xff;
  *(undefined2 *)((int)local_178 + -2) = 0;
  do {
    uVar22 = *(uint *)(iVar4 + 0x10);
    uVar19 = *(uint *)(iVar4 + 0xc) | uVar22;
    if ((uVar16 & uVar19) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar22 == 0) || (uVar19 + uVar16 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar4,uVar10);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar3 = *puVar8;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar8 = uVar3;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar16 + uVar22;
      return;
    }
    puVar17 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar19 = *puVar17;
      if (uVar22 != uVar19) goto LAB_016d409c;
      bVar28 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar28);
    *puVar17 = uVar16 + uVar22;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar22 == uVar19) {
      return;
    }
  } while( true );
LAB_005f5130:
  FUN_016dd606((int)&local_28 + iVar14 + 1,bVar2,3 - iVar14);
  uVar23 = local_28;
  if (uVar6 == local_170) {
    FUN_005fd37c(&local_170);
  }
  *(uint *)(local_16c + uVar6 * 4) = uVar23;
LAB_005f516c:
  uVar23 = *puVar17;
  while( true ) {
    local_168 = uVar6 + 1;
    uVar6 = local_168;
    if (uVar23 == 0) break;
    if (uVar19 <= uVar23) {
      puVar27 = &DAT_01894598;
      local_174 = uVar19;
      goto LAB_005f5848;
    }
    iVar14 = iVar18 + uVar23 * 9;
    uVar3 = *(undefined4 *)(iVar14 + 1);
    uVar23 = *(uint *)(iVar14 + 5);
    if (local_168 == local_170) {
      FUN_005fd37c(&local_170);
    }
    *(undefined4 *)(local_16c + uVar6 * 4) = uVar3;
  }
LAB_005f51bc:
  uVar6 = local_168;
  if (iVar11 != 0) {
    puVar17 = (uint *)(iVar9 + local_18c * 0x14 + 8);
    uVar7 = *puVar17;
    if (uVar7 == 0) {
      uVar23 = 0;
    }
    else {
      iVar11 = -1;
      uVar23 = uVar7;
      do {
        iVar14 = iVar11;
        if (uVar10 <= uVar23) goto LAB_005f583c;
        uVar23 = *(uint *)(iVar20 + uVar23 * 8 + 4);
        iVar11 = iVar14 + 1;
      } while (uVar23 != 0);
      if (iVar11 == 0) {
        if (uVar10 <= uVar7) {
          uVar23 = uVar7;
LAB_005f583c:
          puVar27 = &DAT_01857348;
          local_174 = uVar10;
          goto LAB_005f5848;
        }
        uVar23 = *(uint *)(iVar20 + uVar7 * 8);
        local_28 = uVar23 & 0x80000000;
        if (local_28 != 0) {
          FUN_015fef84(0,&DAT_00568f30,&local_28,0);
          goto LAB_005f5854;
        }
        if (local_168 == local_170) {
          FUN_005fd37c(&local_170);
        }
        *(uint *)(local_16c + uVar6 * 4) = uVar23 | 0x80000000;
        local_168 = uVar6 + 1;
LAB_005f5314:
        goto LAB_005f5318;
      }
      uVar23 = iVar14 + 2;
      local_28 = uVar23 & 0x80000000;
      if (local_28 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb3aac(0,&DAT_00568f30,&local_28,0);
      }
      local_28 = 0;
    }
    if (local_168 == local_170) {
      FUN_005fd37c(&local_170);
    }
    *(uint *)(local_16c + uVar6 * 4) = uVar23;
    uVar23 = *puVar17;
    while( true ) {
      uVar6 = uVar6 + 1;
      local_168 = uVar6;
      if (uVar23 == 0) break;
      if (uVar10 <= uVar23) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar23,uVar10,&DAT_01857348);
      }
      puVar8 = (undefined4 *)(iVar20 + uVar23 * 8);
      uVar3 = *puVar8;
      uVar23 = puVar8[1];
      if (uVar6 == local_170) {
        FUN_005fd500(&local_170,uVar6,1);
      }
      *(undefined4 *)(local_16c + uVar6 * 4) = uVar3;
    }
  }
LAB_005f5318:
  if (local_174 <= local_18c) {
    local_1bc = &DAT_01857158;
    goto LAB_005f578c;
  }
  local_178[local_18c] = uVar22;
  iVar4 = iVar4 + 0x14;
  local_18c = local_18c + 1;
  goto LAB_005f4dbc;
}

