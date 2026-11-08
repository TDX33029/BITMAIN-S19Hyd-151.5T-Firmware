// FUN_016c7c18 @ 016c7c18 size=2832 calls_out=4 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016c7c18(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 *****param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  int *****pppppiVar8;
  undefined3 *puVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  byte *pbVar17;
  int *****pppppiVar18;
  uint uVar19;
  int *****pppppiVar20;
  uint uVar21;
  undefined4 *****pppppuVar22;
  undefined4 uVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 *****pppppuVar26;
  byte bVar27;
  uint uVar28;
  uint uVar29;
  undefined4 *****local_1a4;
  undefined4 *****local_1a0;
  int *****local_19c;
  uint local_198;
  undefined4 *****local_194;
  int *****local_190;
  int *****local_18c;
  undefined4 local_180;
  byte *local_17c;
  uint local_178;
  undefined2 local_15c;
  undefined1 local_15a;
  undefined1 *local_158;
  undefined1 local_154;
  undefined4 *****local_138;
  int *****local_134;
  undefined4 *****local_130;
  uint local_12c;
  undefined4 *****local_128;
  undefined4 local_124;
  int *****local_120;
  int *****local_11c;
  undefined4 local_118;
  byte *local_114;
  uint local_110;
  undefined4 *****local_f8;
  int *****pppppiStack_f4;
  undefined4 *****pppppuStack_f0;
  uint uStack_ec;
  undefined4 *****local_e8;
  undefined4 uStack_e4;
  int *****pppppiStack_e0;
  int *****pppppiStack_dc;
  undefined2 local_d4;
  undefined1 local_d2;
  undefined4 *****local_d0;
  int *****local_cc;
  undefined4 *****local_c8;
  uint local_c4;
  undefined4 *****local_c0;
  byte local_bc;
  undefined2 local_bb;
  undefined1 local_b9;
  int *****local_b8;
  int *****local_b4;
  undefined4 local_b0;
  byte *local_ac;
  uint local_a8;
  byte *local_8c;
  uint local_88;
  uint local_84;
  undefined2 local_80;
  undefined1 local_7e;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined4 local_78 [9];
  int *****local_54;
  undefined4 *****local_50;
  undefined4 *****local_4c;
  undefined4 *****local_48;
  int *****local_44;
  undefined4 *****local_40;
  uint local_3c;
  undefined4 *****local_38;
  byte local_34;
  undefined2 local_33;
  undefined1 local_31;
  int *****local_30;
  int *****local_2c;
  
  uVar16 = param_2[1];
  uVar28 = param_2[2];
  if (uVar16 <= uVar28) goto switchD_016c8284_default;
  iVar24 = *param_2;
  uVar19 = uVar28 + 1;
  param_2[2] = uVar19;
  bVar27 = *(byte *)(iVar24 + uVar28);
  if (((~bVar27 & 0x1f) == 0) || (uVar16 <= uVar19)) goto switchD_016c8284_default;
  bVar2 = *(byte *)(iVar24 + uVar19);
  uVar29 = (uint)bVar2;
  uVar19 = uVar28 + 2;
  param_2[2] = uVar19;
  if ((char)bVar2 < '\0') {
    switch(uVar29) {
    case 0x81:
      if (uVar16 <= uVar19) goto switchD_016c8284_default;
      bVar2 = *(byte *)(iVar24 + uVar19);
      uVar29 = (uint)bVar2;
      uVar19 = uVar28 + 3;
      param_2[2] = uVar19;
      if ((uint)(int)(char)bVar2 < 0x80000000) goto switchD_016c8284_default;
      goto LAB_016c7c6c;
    case 0x82:
      if (uVar16 <= uVar19) goto switchD_016c8284_default;
      uVar29 = uVar28 + 3;
      param_2[2] = uVar29;
      if (uVar16 <= uVar29) goto switchD_016c8284_default;
      cVar6 = *(char *)(iVar24 + uVar19);
      uVar19 = uVar28 + 4;
      uVar7 = *(undefined1 *)(iVar24 + uVar29);
      param_2[2] = uVar19;
      if (cVar6 == '\0') goto switchD_016c8284_default;
      uVar29 = (uint)CONCAT11(cVar6,uVar7);
      break;
    case 0x83:
      if (uVar16 <= uVar19) goto switchD_016c8284_default;
      bVar2 = *(byte *)(iVar24 + uVar19);
      uVar19 = uVar28 + 3;
      param_2[2] = uVar19;
      if (uVar16 <= uVar19) goto switchD_016c8284_default;
      uVar29 = uVar28 + 4;
      param_2[2] = uVar29;
      if (uVar16 <= uVar29) goto switchD_016c8284_default;
      bVar3 = *(byte *)(iVar24 + uVar19);
      uVar19 = uVar28 + 5;
      bVar4 = *(byte *)(iVar24 + uVar29);
      param_2[2] = uVar19;
      if (bVar2 == 0) goto switchD_016c8284_default;
      uVar29 = (uint)bVar3 << 8 | (uint)bVar2 << 0x10 | (uint)bVar4;
      break;
    case 0x84:
      if (uVar16 <= uVar19) goto switchD_016c8284_default;
      bVar2 = *(byte *)(iVar24 + uVar19);
      uVar19 = uVar28 + 3;
      param_2[2] = uVar19;
      if (uVar16 <= uVar19) goto switchD_016c8284_default;
      bVar3 = *(byte *)(iVar24 + uVar19);
      uVar29 = uVar28 + 4;
      param_2[2] = uVar29;
      if (uVar16 <= uVar29) goto switchD_016c8284_default;
      uVar19 = uVar28 + 5;
      param_2[2] = uVar19;
      if (uVar16 <= uVar19) goto switchD_016c8284_default;
      bVar4 = *(byte *)(iVar24 + uVar19);
      uVar19 = uVar28 + 6;
      bVar5 = *(byte *)(iVar24 + uVar29);
      param_2[2] = uVar19;
      if (bVar2 == 0) goto switchD_016c8284_default;
      uVar29 = (uint)bVar3 << 0x10 | (uint)bVar2 << 0x18 | (uint)bVar5 << 8 | (uint)bVar4;
      break;
    default:
      goto switchD_016c8284_default;
    }
    if (0xfffe < uVar29) goto switchD_016c8284_default;
  }
LAB_016c7c6c:
  if (((CARRY4(uVar19,uVar29)) || (uVar16 < uVar19 + uVar29)) ||
     (param_2[2] = uVar19 + uVar29, bVar27 != 0xa3)) {
switchD_016c8284_default:
    local_180 = 0x80000000;
    uVar15 = param_3[1];
    uVar23 = param_3[2];
    uVar25 = param_3[3];
    *param_1 = *param_3;
    param_1[1] = uVar15;
    param_1[2] = uVar23;
    param_1[3] = uVar25;
    uVar15 = param_3[5];
    uVar23 = param_3[6];
    uVar25 = param_3[7];
    param_1[4] = param_3[4];
    param_1[5] = uVar15;
    param_1[6] = uVar23;
    param_1[7] = uVar25;
    FUN_016c3a1c(&local_180);
    return;
  }
  pbVar17 = (byte *)(iVar24 + uVar19);
  local_180 = 0x8000002d;
  local_158 = &DAT_8000001d;
  local_154 = 0xb;
  local_17c = pbVar17;
  local_178 = uVar29;
  FUN_016c3c8c(&local_138,&local_158);
  if (uVar29 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = 1;
    if ((~*pbVar17 & 0x1f) != 0 && uVar29 != 1) {
      uVar19 = (uint)pbVar17[1];
      pppppuVar22 = param_4;
      if ((char)pbVar17[1] < '\0') {
        uVar16 = 2;
        switch(uVar19) {
        case 0x81:
          if (2 < uVar29) {
            uVar16 = 3;
            if (0x7fffffff < (uint)(int)(char)pbVar17[2]) {
              uVar19 = (uint)pbVar17[2];
              goto LAB_016c7d00;
            }
          }
          break;
        case 0x82:
          if ((2 < uVar29) && (uVar16 = 3, uVar29 != 3)) {
            uVar16 = 4;
            if (pbVar17[2] != 0) {
              uVar19 = (uint)CONCAT11(pbVar17[2],pbVar17[3]);
LAB_016c85ac:
              if (uVar19 < 0xffff) goto LAB_016c7d00;
            }
          }
          break;
        case 0x83:
          if (((2 < uVar29) && (uVar16 = 3, uVar29 != 3)) && (uVar16 = 4, 4 < uVar29)) {
            uVar16 = 5;
            if (pbVar17[2] != 0) {
              uVar19 = (uint)pbVar17[3] << 8 | (uint)pbVar17[2] << 0x10 | (uint)pbVar17[4];
              pppppuVar22 = (undefined4 *****)(uint)pbVar17[4];
              goto LAB_016c85ac;
            }
          }
          break;
        case 0x84:
          if ((2 < uVar29) && (uVar16 = 3, uVar29 != 3)) {
            uVar16 = 4;
            if ((4 < uVar29) && (uVar16 = 5, uVar29 != 5)) {
              if (pbVar17[2] != 0) {
                uVar16 = 6;
                uVar19 = (uint)pbVar17[3] << 0x10 | (uint)pbVar17[2] << 0x18 | (uint)pbVar17[4] << 8
                         | (uint)pbVar17[5];
                goto LAB_016c85ac;
              }
              uVar16 = 6;
            }
          }
        }
      }
      else {
        uVar16 = 2;
LAB_016c7d00:
        uVar12 = uVar19 + uVar16;
        if ((!CARRY4(uVar19,uVar16)) && (uVar12 <= uVar29)) {
          if (*pbVar17 == 0x30) {
            pbVar17 = pbVar17 + uVar16;
            local_118 = 0x8000002d;
            pppppuVar26 = &local_128;
            local_f8 = local_138;
            pppppiStack_f4 = local_134;
            pppppuStack_f0 = local_130;
            uStack_ec = local_12c;
            local_e8 = local_128;
            uStack_e4 = local_124;
            pppppiStack_e0 = local_120;
            pppppiStack_dc = local_11c;
            local_114 = pbVar17;
            local_110 = uVar19;
            if (uVar19 != 0) {
              puVar9 = (undefined3 *)((uint)&local_48 | 5);
              uVar16 = 0;
              local_18c = (int *****)&local_b8;
              local_190 = (int *****)&local_bb;
              do {
                FUN_016c3c8c(&local_d0,&local_158);
                local_120 = local_b4;
                pppppiVar20 = local_b8;
                bVar27 = local_bc;
                pppppuVar26 = local_d0;
                if (uVar19 <= uVar16) goto LAB_016c8068;
                uVar10 = uVar16 + 1;
                pbVar1 = pbVar17 + uVar16;
                if (((~*pbVar1 & 0x1f) == 0) || (uVar19 <= uVar10)) {
switchD_016c7f14_default:
                  uVar16 = uVar10;
LAB_016c8068:
                  local_b0 = 0x80000000;
                  local_d2 = local_b9;
                  local_d4 = local_bb;
                  local_19c = local_cc;
                  local_1a4 = local_c8;
                  local_198 = local_c4;
                  local_1a0 = local_c0;
                  pppppuVar22 = (undefined4 *****)(uint)local_bc;
                  FUN_016c3a1c(&local_b0);
                  local_194 = pppppuVar26;
                  if (pppppuVar26 != (undefined4 *****)0x8000002d) {
LAB_016c86b0:
                    local_15a = local_d2;
                    local_15c = local_d4;
                    local_190 = pppppiVar20;
                    local_18c = local_120;
                    goto LAB_016c86e0;
                  }
                }
                else {
                  pbVar11 = pbVar17 + uVar10;
                  uVar10 = uVar16 + 2;
                  uVar13 = (uint)*pbVar11;
                  if ((char)*pbVar11 < '\0') {
                    switch(uVar13) {
                    case 0x81:
                      if (uVar10 < uVar19) {
                        uVar16 = uVar16 + 3;
                        if (0x7fffffff < (uint)(int)(char)pbVar17[uVar10]) {
                          uVar13 = (uint)pbVar17[uVar10];
                          goto LAB_016c7e10;
                        }
                        goto LAB_016c8068;
                      }
                      break;
                    case 0x82:
                      if (uVar10 < uVar19) {
                        uVar13 = uVar16 + 3;
                        if (uVar13 < uVar19) {
                          uVar16 = uVar16 + 4;
                          if (pbVar17[uVar10] != 0) {
                            uVar13 = (uint)CONCAT11(pbVar17[uVar10],pbVar17[uVar13]);
LAB_016c8054:
                            if (uVar13 < 0xffff) goto LAB_016c7e10;
                          }
                        }
                        else {
LAB_016c80d8:
                          uVar16 = uVar16 + 3;
                        }
                        goto LAB_016c8068;
                      }
                      break;
                    case 0x83:
                      if (uVar10 < uVar19) {
                        uVar13 = uVar16 + 3;
                        if (uVar19 <= uVar13) goto LAB_016c80d8;
                        uVar14 = uVar16 + 4;
                        if (uVar14 < uVar19) {
                          uVar16 = uVar16 + 5;
                          if (pbVar17[uVar10] != 0) {
                            uVar13 = (uint)pbVar17[uVar13] << 8 | (uint)pbVar17[uVar10] << 0x10 |
                                     (uint)pbVar17[uVar14];
                            goto LAB_016c8054;
                          }
                        }
                        else {
LAB_016c8164:
                          uVar16 = uVar16 + 4;
                        }
                        goto LAB_016c8068;
                      }
                      break;
                    case 0x84:
                      if (uVar10 < uVar19) {
                        uVar13 = uVar16 + 3;
                        if (uVar19 <= uVar13) goto LAB_016c80d8;
                        uVar14 = uVar16 + 4;
                        if (uVar19 <= uVar14) goto LAB_016c8164;
                        uVar21 = uVar16 + 5;
                        if (uVar21 < uVar19) {
                          uVar16 = uVar16 + 6;
                          if (pbVar17[uVar10] != 0) {
                            uVar13 = (uint)pbVar17[uVar13] << 0x10 | (uint)pbVar17[uVar10] << 0x18 |
                                     (uint)pbVar17[uVar14] << 8 | (uint)pbVar17[uVar21];
                            goto LAB_016c8054;
                          }
                        }
                        else {
                          uVar16 = uVar21;
                        }
                        goto LAB_016c8068;
                      }
                    }
                    goto switchD_016c7f14_default;
                  }
                  uVar16 = uVar10;
LAB_016c7e10:
                  uVar28 = uVar16 + uVar13;
                  if ((CARRY4(uVar16,uVar13)) || (uVar19 < uVar28)) goto LAB_016c8068;
                  if (*pbVar1 != 0x30) {
                    uVar16 = uVar28;
                    goto LAB_016c8068;
                  }
                  local_ac = pbVar17 + uVar16;
                  local_b0 = 0x8000002d;
                  local_84 = 0;
                  local_a8 = uVar13;
                  local_8c = local_ac;
                  local_88 = uVar13;
                  FUN_016c607c(&local_48,&local_8c,6);
                  pppppuVar22 = local_40;
                  pppppiVar20 = local_44;
                  if (local_48 != (undefined4 *****)0x8000002d) {
                    local_198 = local_3c;
                    local_1a4 = local_40;
                    local_19c = local_44;
                    local_1a0 = local_38;
                    pppppuVar22 = (undefined4 *****)(uint)local_34;
LAB_016c85ec:
                    pppppiVar18 = local_2c;
                    pppppiVar20 = local_30;
                    local_194 = local_48;
                    local_80 = local_33;
                    local_7e = local_31;
LAB_016c8698:
                    local_d2 = local_7e;
                    local_d4 = local_80;
                    FUN_016c3a1c(&local_d0);
                    local_120 = pppppiVar18;
                    bVar27 = (byte)pppppuVar22;
                    goto LAB_016c86b0;
                  }
                  FUN_016c624c(&local_48,&local_8c);
                  pppppiVar8 = local_44;
                  if (local_48 != (undefined4 *****)0x8000002d) {
                    local_7e = local_31;
                    local_1a4 = local_40;
                    local_19c = (int *****)CONCAT31(*puVar9,local_44._0_1_);
                    local_198 = local_3c;
                    local_1a0 = local_38;
                    local_80 = local_33;
                    pppppuVar22 = (undefined4 *****)(uint)local_34;
                    pppppiVar18 = *(int ******)((int)puVar9 + 0x17);
                    pppppiVar20 = *(int ******)((int)puVar9 + 0x13);
                    local_194 = local_48;
                    goto LAB_016c8698;
                  }
                  FUN_016c607c(&local_48,&local_8c,4);
                  if (local_48 != (undefined4 *****)0x8000002d) {
                    local_198 = local_3c;
                    local_1a0 = local_38;
                    pppppuVar22 = (undefined4 *****)(uint)local_34;
                    local_80 = local_33;
                    local_7e = local_31;
                    local_1a4 = local_40;
                    local_19c = local_44;
                    pppppiVar18 = local_2c;
                    pppppiVar20 = local_30;
                    local_194 = local_48;
                    goto LAB_016c8698;
                  }
                  pppppiVar18 = (int *****)&local_48;
                  if ((pppppuVar22 != (undefined4 *****)0x3) || (*(short *)pppppiVar20 != 0x1d55)) {
switchD_016c80fc_caseD_10:
                    if (((uint)pppppiVar8 & 1) != 0) {
                      local_194 = (undefined4 *****)0x80000021;
                      goto LAB_016c8698;
                    }
                    if (local_84 == local_88) goto LAB_016c7eec;
LAB_016c8214:
                    pppppuVar22 = (undefined4 *****)(uint)local_bc;
                    local_d2 = local_b9;
                    local_19c = local_cc;
                    local_d4 = local_bb;
                    local_1a4 = local_c8;
                    local_198 = local_c4;
                    local_1a0 = local_c0;
                    local_120 = local_b4;
                    pppppiVar20 = local_b8;
                    pppppuVar26 = local_d0;
                    local_194 = local_d0;
                    uVar16 = uVar28;
                    bVar27 = local_bc;
                    if (local_d0 == (undefined4 *****)0x8000002d) goto LAB_016c80c8;
                    goto LAB_016c86b0;
                  }
                  pppppiVar18 = param_4 + 0x13;
                  switch(*(char *)((int)pppppiVar20 + 2)) {
                  case '\x0f':
                    pppppiVar18 = param_4 + 0x15;
                    break;
                  default:
                    goto switchD_016c80fc_caseD_10;
                  case '\x11':
                    pppppiVar18 = param_4 + 0x1b;
                    break;
                  case '\x13':
                    break;
                  case '\x1e':
                    pppppiVar18 = param_4 + 0x19;
                    break;
                  case '\x1f':
                    pppppiVar18 = param_4 + 0x1d;
                    break;
                  case '%':
                    pppppiVar18 = param_4 + 0x17;
                  }
                  if (*pppppiVar18 != (int ****)0x0) {
                    local_194 = (undefined4 *****)0x80000009;
                    goto LAB_016c8698;
                  }
                  local_78[0] = 0x80000000;
                  local_4c = (undefined4 *****)0x0;
                  local_50 = local_40;
                  local_54 = local_44;
                  if (*(char *)((int)pppppiVar20 + 2) != '\x0f') {
                    FUN_016c607c(&local_48,&local_54,0x30);
                    if (local_48 == (undefined4 *****)0x8000002d) {
                      if (local_4c == local_50) goto LAB_016c81f8;
                      local_48 = (undefined4 *****)&DAT_80000000;
                      local_2c = pppppiVar18;
                      local_30 = pppppiVar20;
                    }
                    else {
                      local_198 = local_3c;
                      local_1a0 = local_38;
                      local_7a = local_31;
                      local_7c = local_33;
                      pppppuVar22 = (undefined4 *****)(uint)local_34;
                      FUN_016c3a1c(local_78);
                      local_19c = local_44;
                      local_1a4 = local_40;
                    }
                    local_33 = local_7c;
                    local_31 = local_7a;
                    goto LAB_016c85ec;
                  }
LAB_016c81f8:
                  pppppuVar26 = local_40;
                  pppppiVar20 = local_44;
                  FUN_016c3a1c(local_78);
                  *pppppiVar18 = (int ****)pppppiVar20;
                  pppppiVar18[1] = (int ****)pppppuVar26;
                  if (local_84 != local_88) goto LAB_016c8214;
LAB_016c7eec:
                  FUN_016c3a1c(&local_d0);
                  local_120 = pppppiVar18;
                  pppppuVar26 = (undefined4 *****)0x8000002d;
                  uVar16 = uVar28;
                }
LAB_016c80c8:
              } while (uVar16 != uVar19);
            }
            bVar27 = (byte)uVar28;
            local_194 = (undefined4 *****)0x8000002d;
            local_19c = local_120;
            local_198 = uVar19;
            local_1a0 = pppppuVar22;
            local_1a4 = pppppuVar26;
LAB_016c86e0:
            FUN_016c3a1c(&local_f8);
            FUN_016c3a1c(&local_158);
            local_11c = local_18c;
            local_120 = local_190;
            local_138 = local_194;
            local_130 = local_1a4;
            local_12c = local_198;
            local_128 = local_1a0;
            goto joined_r0x016c843c;
          }
          uVar16 = uVar12;
        }
      }
    }
  }
  local_15a = local_124._3_1_;
  local_118 = 0x80000000;
  local_15c = local_124._1_2_;
  FUN_016c3a1c(&local_118);
  FUN_016c3a1c(&local_158);
  uVar12 = uVar16;
  bVar27 = (byte)local_124;
  local_19c = local_134;
joined_r0x016c843c:
  if (local_138 != (undefined4 *****)0x8000002d) {
    *(undefined2 *)((int)param_1 + 0x15) = local_15c;
    *(undefined1 *)((int)param_1 + 0x17) = local_15a;
    param_1[6] = local_120;
    param_1[7] = local_11c;
    *(byte *)(param_1 + 5) = bVar27;
    *param_1 = local_138;
    param_1[1] = local_19c;
    param_1[2] = local_130;
    param_1[3] = local_12c;
    param_1[4] = local_128;
    FUN_016c3a1c(param_3);
    return;
  }
  if (uVar12 == uVar29) {
    *param_1 = 0x8000002d;
    FUN_016c3a1c();
    return;
  }
  uVar15 = param_3[1];
  uVar23 = param_3[2];
  uVar25 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar15;
  param_1[2] = uVar23;
  param_1[3] = uVar25;
  uVar15 = param_3[5];
  uVar23 = param_3[6];
  uVar25 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar15;
  param_1[6] = uVar23;
  param_1[7] = uVar25;
  return;
}

