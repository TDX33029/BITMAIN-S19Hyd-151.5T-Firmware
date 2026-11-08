// FUN_012cb96c @ 012cb96c size=2592 calls_out=7 calls_in=2
// strings: 

void FUN_012cb96c(uint *param_1,uint *param_2,uint param_3,int param_4)

{
  undefined1 uVar1;
  byte bVar2;
  uint *puVar3;
  byte *pbVar4;
  uint uVar5;
  undefined1 *puVar6;
  byte bVar7;
  byte bVar8;
  uint *puVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  bool bVar18;
  undefined1 local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined1 auStack_3a [2];
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  
  puVar16 = (uint *)((int)param_2 + param_3);
  puVar9 = param_2;
  if (param_4 != 0) {
    if (param_3 == 0) goto LAB_012cbde8;
    if (3 < param_3) {
      uVar15 = *param_2;
      uVar11 = param_3;
      if ((((~(0x1010100 - (uVar15 ^ 0x5c5c5c5c) | uVar15) & 0x80808080) == 0) &&
          ((~(0x1010100 - (uVar15 ^ 0xa0a0a0a) | uVar15) & 0x80808080) == 0)) &&
         ((~(0x1010100 - (uVar15 ^ 0x22222222) | uVar15) & 0x80808080) == 0)) {
        puVar9 = (uint *)((uint)param_2 & 0xfffffffc);
        while (puVar9 = puVar9 + 1, puVar9 <= puVar16 + -1) {
          uVar15 = *puVar9;
          uVar11 = ~(0x1010100 - (uVar15 ^ 0x5c5c5c5c) | uVar15);
          bVar18 = (uVar11 & 0x80808080) != 0;
          if (!bVar18) {
            uVar11 = ~(0x1010100 - (uVar15 ^ 0xa0a0a0a) | uVar15);
          }
          if ((bVar18 || (uVar11 & 0x80808080) != 0) ||
             ((~(0x1010100 - (uVar15 ^ 0x22222222) | uVar15) & 0x80808080) != 0)) break;
        }
        if (puVar9 < puVar16) {
          do {
            bVar7 = (byte)*puVar9;
            if ((bVar7 == 10) || (bVar7 == 0x22 || bVar7 == 0x5c)) goto LAB_012cba54;
            puVar9 = (uint *)((int)puVar9 + 1);
          } while (puVar9 != puVar16);
        }
      }
      else {
        do {
          bVar7 = (byte)*puVar9;
          if ((bVar7 == 10) || (bVar7 == 0x22 || bVar7 == 0x5c)) goto LAB_012cba54;
          puVar9 = (uint *)((int)puVar9 + 1);
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      goto LAB_012cbde8;
    }
    bVar7 = (byte)*param_2;
    if (((bVar7 != 10) && (bVar7 != 0x22)) && (bVar7 != 0x5c)) {
      if (param_3 == 1) goto LAB_012cbde8;
      puVar9 = (uint *)((int)param_2 + 1);
      bVar7 = *(byte *)puVar9;
      if ((bVar7 != 10) && (bVar7 != 0x22 && bVar7 != 0x5c)) {
        if (param_3 == 2) goto LAB_012cbde8;
        bVar7 = *(byte *)((int)param_2 + 2);
        if ((bVar7 != 10) && (bVar7 != 0x22)) goto LAB_012cbdb8;
        goto LAB_012cbdc0;
      }
    }
    goto LAB_012cba54;
  }
  if (param_3 == 0) goto LAB_012cbde8;
  if (3 < param_3) {
    uVar15 = *param_2;
    uVar11 = param_3;
    if (((~(0x1010100 - (uVar15 ^ 0x5c5c5c5c) | uVar15) & 0x80808080) == 0) &&
       ((~(0x1010100 - (uVar15 ^ 0xa0a0a0a) | uVar15) & 0x80808080) == 0)) {
      puVar9 = (uint *)((uint)param_2 & 0xfffffffc);
      do {
        puVar9 = puVar9 + 1;
        if ((puVar16 + -1 < puVar9) ||
           (uVar11 = *puVar9, (~(0x1010100 - (uVar11 ^ 0x5c5c5c5c) | uVar11) & 0x80808080) != 0))
        break;
      } while ((~(0x1010100 - (uVar11 ^ 0xa0a0a0a) | uVar11) & 0x80808080) == 0);
      if (puVar9 < puVar16) {
        do {
          if ((byte)*puVar9 == 10 || (byte)*puVar9 == 0x5c) goto LAB_012cba54;
          puVar9 = (uint *)((int)puVar9 + 1);
        } while (puVar9 != puVar16);
      }
    }
    else {
      do {
        if ((byte)*puVar9 == 10 || (byte)*puVar9 == 0x5c) goto LAB_012cba54;
        puVar9 = (uint *)((int)puVar9 + 1);
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    goto LAB_012cbde8;
  }
  if (((byte)*param_2 == 10) || ((byte)*param_2 == 0x5c)) {
LAB_012cba54:
    local_48 = param_3 * 2;
    if ((int)local_48 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,local_48);
    }
    uVar11 = (int)puVar9 - (int)param_2;
    if (local_48 != 0) {
      local_44 = thunk_FUN_016d4a50(local_48);
      goto joined_r0x012cba84;
    }
    local_44 = 1;
    local_48 = 0;
  }
  else {
    if (param_3 == 1) goto LAB_012cbde8;
    puVar9 = (uint *)((int)param_2 + 1);
    if (*(byte *)puVar9 == 10 || *(byte *)puVar9 == 0x5c) goto LAB_012cba54;
    if (param_3 == 2) goto LAB_012cbde8;
    bVar7 = *(byte *)((int)param_2 + 2);
    if (bVar7 != 10) {
LAB_012cbdb8:
      if (bVar7 != 0x5c) {
LAB_012cbde8:
        *param_1 = 0x80000000;
        param_1[1] = (uint)param_2;
        param_1[2] = param_3;
        return;
      }
    }
LAB_012cbdc0:
    uVar11 = 2;
    local_44 = thunk_FUN_016d4a50(param_3 << 1);
    local_48 = param_3 << 1;
joined_r0x012cba84:
    if (local_44 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_3 << 1);
    }
  }
  local_40 = 0;
  if (uVar11 == 0) {
    FUN_016dd1aa(local_44,param_2,0);
    local_40 = uVar11;
    goto LAB_012cbe48;
  }
  if (uVar11 < param_3) {
    if (-0x41 < (char)*(byte *)((int)param_2 + uVar11)) goto LAB_012cbd34;
  }
  else if (uVar11 == param_3) {
LAB_012cbd34:
    if (local_48 < uVar11) {
      FUN_012bdb54(&local_48,0,uVar11,1,1);
      uVar15 = local_40;
      FUN_016dd1aa(local_44 + local_40,param_2,uVar11);
      local_40 = uVar15 + uVar11;
      if (uVar11 < param_3) goto LAB_012cbd68;
LAB_012cbe44:
      if (uVar11 == param_3) goto LAB_012cbe48;
    }
    else {
      FUN_016dd1aa(local_44,param_2,uVar11);
      local_40 = uVar11;
      if (uVar11 == 0) goto LAB_012cbe48;
      if (param_3 <= uVar11) goto LAB_012cbe44;
LAB_012cbd68:
      if (-0x41 < (char)*(byte *)((int)param_2 + uVar11)) {
LAB_012cbe48:
        if (uVar11 != param_3) {
          param_2 = (uint *)((int)param_2 + uVar11);
          puVar9 = (uint *)((uint)&local_38 | 2);
          do {
            uVar15 = local_40;
            uVar11 = (uint)(byte)*param_2;
            puVar3 = (uint *)((int)param_2 + 1);
            if (-1 < (char)(byte)*param_2) {
joined_r0x012cbfa8:
              param_2 = puVar3;
              if (uVar11 == 10) goto LAB_012cbeb0;
LAB_012cbea0:
              if (uVar11 == 0x22) {
                if (param_4 == 0) {
                  bVar18 = true;
                  uVar13 = 1;
                  goto LAB_012cc134;
                }
                if (local_48 - local_40 < 2) {
                  FUN_012bdb54(&local_48,local_40,2,1,1);
                }
                uVar11 = local_40;
                if (local_48 == local_40) {
                  FUN_012bdb54(&local_48,local_40,1,1,1);
                }
                *(undefined1 *)(local_44 + local_40) = 0x5c;
                local_40 = uVar11 + 1;
                if (local_48 == local_40) {
                  FUN_012bdb54(&local_48,local_40,1,1,1);
                }
                *(undefined1 *)(local_44 + local_40) = 0x22;
                local_40 = uVar11 + 2;
              }
              else {
                if (uVar11 == 0x5c) goto LAB_012cbeb0;
                bVar18 = true;
                if (uVar11 < 0x80) {
                  uVar13 = 1;
                }
                else {
                  uVar13 = 2;
                  bVar18 = false;
                  if ((0x7ff < uVar11) && (uVar13 = 4, uVar11 < 0x10000)) {
                    uVar13 = 3;
                  }
                }
LAB_012cc134:
                if (local_48 - local_40 < uVar13) {
                  FUN_012bdb54(&local_48,local_40,uVar13,1,1);
                  pbVar4 = (byte *)(local_44 + local_40);
                  if (!bVar18) goto LAB_012cc158;
LAB_012cbe70:
                  *pbVar4 = (byte)uVar11;
                }
                else {
                  pbVar4 = (byte *)(local_44 + local_40);
                  if (bVar18) goto LAB_012cbe70;
LAB_012cc158:
                  bVar7 = (byte)uVar11 & 0x3f | 0x80;
                  bVar8 = (byte)(uVar11 >> 6);
                  if (uVar11 < 0x800) {
                    bVar8 = bVar8 | 0xc0;
                    pbVar4[1] = bVar7;
LAB_012cc1ec:
                    *pbVar4 = bVar8;
                  }
                  else {
                    bVar2 = bVar8 & 0x3f | 0x80;
                    bVar8 = (byte)(uVar11 >> 0xc);
                    if (uVar11 >> 0x10 == 0) {
                      pbVar4[1] = bVar2;
                      bVar8 = bVar8 | 0xe0;
                      pbVar4[2] = bVar7;
                      goto LAB_012cc1ec;
                    }
                    pbVar4[3] = bVar7;
                    pbVar4[2] = bVar2;
                    pbVar4[1] = bVar8 & 0x3f | 0x80;
                    *pbVar4 = (byte)(uVar11 >> 0x12) | 0xf0;
                  }
                }
                local_40 = uVar13 + uVar15;
              }
              goto LAB_012cbe7c;
            }
            uVar13 = *(byte *)((int)param_2 + 1) & 0x3f;
            if (uVar11 < 0xe0) {
              uVar11 = uVar13 | (uVar11 & 0x1f) << 6;
              puVar3 = (uint *)((int)param_2 + 2);
              goto joined_r0x012cbfa8;
            }
            uVar13 = *(byte *)((int)param_2 + 2) & 0x3f | uVar13 << 6;
            if (0xef < uVar11) {
              uVar11 = *(byte *)((int)param_2 + 3) & 0x3f | uVar13 << 6 | (uVar11 & 7) << 0x12;
              puVar3 = param_2 + 1;
              goto joined_r0x012cbfa8;
            }
            uVar11 = uVar13 | (uVar11 & 0x1f) << 0xc;
            param_2 = (uint *)((int)param_2 + 3);
            if (uVar11 != 10) goto LAB_012cbea0;
LAB_012cbeb0:
            uVar13 = 2;
            local_4c = 0x5c;
            uVar1 = local_4c;
            local_4c = 0x5c;
            uVar17 = 0;
            uVar12 = 0;
            uVar15 = 0;
            uVar14 = 0x72;
            switch(uVar11) {
            case 10:
              uVar14 = 0x6e;
              break;
            case 0xb:
            case 0xc:
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x19:
            case 0x1a:
            case 0x1b:
            case 0x1c:
            case 0x1d:
            case 0x1e:
            case 0x1f:
            case 0x20:
            case 0x21:
            case 0x23:
            case 0x24:
            case 0x25:
            case 0x26:
              goto switchD_012cbee0_caseD_b;
            case 0xd:
              break;
            case 0x22:
            case 0x27:
switchD_012cbee0_caseD_22:
              uVar5 = uVar11;
              local_4c = uVar1;
              goto LAB_012cc05c;
            default:
              if (uVar11 == 0x5c) goto switchD_012cbee0_caseD_22;
switchD_012cbee0_caseD_b:
              if (uVar11 - 0x20 < 0x5f) {
                uVar5 = (int)(char)(&DAT_003b7579)[uVar11] & 0x7f;
                uVar14 = (undefined1)uVar5;
                if ((char)(&DAT_003b7579)[uVar11] < 0) {
                  if (uVar5 == 0) {
                    uVar12 = 0;
                    uVar13 = 4;
                    uVar15 = 0;
                    uVar17 = (uint)CONCAT11((&DAT_00563e90)[uVar11 & 0xf],
                                            (&DAT_00563e90)[uVar11 >> 4]);
                    uVar14 = 0x78;
                    break;
                  }
                  local_4c = uVar1;
                }
                else {
                  uVar13 = 1;
                  uVar5 = 0;
                  local_4c = uVar14;
                }
LAB_012cc05c:
                uVar17 = 0;
                uVar12 = 0;
                uVar15 = 0;
                uVar14 = (char)uVar5;
              }
              else {
                local_35 = (&DAT_00563e90)[uVar11 >> 0x14];
                uVar1 = (&DAT_00563e90)[uVar11 & 0xf];
                local_34 = (&DAT_00563e90)[uVar11 >> 0x10];
                uVar15 = ((uint)LZCOUNT(uVar11 | 1) >> 2) - 2;
                puVar6 = (undefined1 *)((uint)&local_38 | (uint)LZCOUNT(uVar11 | 1) >> 2);
                local_31 = (&DAT_00563e90)[uVar11 >> 4];
                local_36 = 0;
                local_38 = 0;
                local_33 = (&DAT_00563e90)[uVar11 >> 0xc];
                uVar13 = 10;
                local_32 = (&DAT_00563e90)[uVar11 >> 8];
                *puVar6 = 0x7b;
                puVar6[-1] = 0x75;
                *(undefined1 *)((int)&local_38 + uVar15) = 0x5c;
                local_2f = 0x7d;
                local_4c = (undefined1)local_38;
                local_30 = uVar1;
                uVar12 = puVar9[1];
                uVar17 = *puVar9;
                uVar14 = local_38._1_1_;
              }
            }
            uVar11 = uVar13 - uVar15 & 0xff;
            if (local_48 - local_40 < uVar11) {
              FUN_012bdb54(&local_48,local_40,uVar11,1,1);
            }
            if (uVar13 <= uVar15) {
              uVar13 = uVar15;
            }
            *puVar9 = uVar17;
            puVar9[1] = uVar12;
            local_38 = CONCAT11(uVar14,local_4c);
            uVar11 = local_40;
            for (; local_40 = uVar11, (uVar13 & 0xff) != uVar15; uVar15 = uVar15 + 1) {
              uVar1 = *(undefined1 *)((int)&local_38 + uVar15);
              if (local_48 == uVar11) {
                FUN_012bdb54(&local_48,uVar11,1,1,1);
              }
              *(undefined1 *)(local_44 + local_40) = uVar1;
              uVar11 = uVar11 + 1;
            }
LAB_012cbe7c:
          } while (param_2 != puVar16);
        }
        uVar11 = local_40;
        if (local_40 < local_48) {
          if (local_40 == 0) {
            thunk_FUN_016d3fb4(local_44);
            uVar15 = 1;
          }
          else {
            uVar15 = thunk_FUN_016d4ea4(local_44,local_40);
            if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,uVar11);
            }
          }
          local_48 = uVar11;
          local_44 = uVar15;
        }
        *param_1 = local_48;
        param_1[1] = local_44;
        param_1[2] = local_40;
        return;
      }
    }
    puVar10 = &DAT_0188d3c4;
    uVar15 = uVar11;
    uVar11 = param_3;
    goto LAB_012cbd88;
  }
  puVar10 = &DAT_0188d3b4;
  uVar15 = 0;
LAB_012cbd88:
                    /* WARNING: Subroutine does not return */
  FUN_00faa8ac(param_2,param_3,uVar15,uVar11,puVar10);
}

