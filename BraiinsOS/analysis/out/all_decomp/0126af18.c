// FUN_0126af18 @ 0126af18 size=7916 calls_out=8 calls_in=2
// strings: 

void FUN_0126af18(int *param_1,int param_2,ushort *param_3,uint param_4,uint *param_5,uint param_6)

{
  int iVar1;
  ushort uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ushort *puVar22;
  ushort *puVar23;
  uint uVar24;
  uint uVar25;
  undefined1 uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  bool bVar30;
  bool bVar31;
  ulonglong uVar32;
  undefined8 uVar33;
  uint local_a0;
  uint local_74;
  uint local_6c;
  uint local_64;
  uint local_5c;
  uint local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  byte local_38;
  uint local_30 [3];
  
  iVar29 = param_2 + 0xa00;
  local_38 = *(byte *)(param_2 + 0x28ec);
  uVar19 = (uint)*(byte *)(param_2 + 0x2900);
  uVar5 = param_2 + 0x2300;
  iVar6 = param_2 + 0x200;
  iVar7 = param_2 + 0x1680;
  iVar8 = param_2 + 0xe80;
  local_74 = 0;
  local_6c = 0;
  puVar23 = param_3;
  uVar28 = param_4;
  local_48 = *(uint *)(param_2 + 0x28dc);
  local_44 = *(uint *)(param_2 + 0x28c0);
  local_40 = *(uint *)(param_2 + 0x28d4);
  uVar24 = *(uint *)(param_2 + 0x28d8);
switchD_0126bdf8_caseD_3:
  local_3c = uVar24;
  uVar24 = local_3c;
  uVar13 = local_40;
  uVar26 = (undefined1)uVar19;
  switch(uVar19 & 0xff) {
  case 0:
    FUN_016dd606(&local_48,0,0x11);
    uVar19 = 1;
    *(undefined4 *)(param_2 + 0x28c4) = 0;
    *(undefined4 *)(param_2 + 0x28c8) = 0;
    *(undefined4 *)(param_2 + 0x28cc) = 1;
    *(undefined4 *)(param_2 + 0x28d0) = 1;
    uVar24 = local_3c;
    goto switchD_0126bdf8_caseD_3;
  case 1:
    if (uVar28 != 0) {
      uVar28 = uVar28 - 1;
      uVar19 = 2;
      *(uint *)(param_2 + 0x28c4) = (uint)(byte)*puVar23;
      puVar23 = (ushort *)((int)puVar23 + 1);
      goto switchD_0126bdf8_caseD_3;
    }
    break;
  case 2:
    if (uVar28 != 0) {
      puVar22 = (ushort *)((int)puVar23 + 1);
      bVar3 = (byte)*puVar23;
      uVar19 = 3;
      uVar28 = uVar28 - 1;
      uVar13 = *(uint *)(param_2 + 0x28c4);
      *(uint *)(param_2 + 0x28c8) = (uint)bVar3;
      uVar15 = (uint)bVar3 | uVar13 << 8;
      puVar23 = puVar22;
      if ((uVar13 & 0xf) != 8 ||
          (((uVar13 >> 4) + 8 & 0x10) != 0 ||
          (uVar15 != (uVar15 / 0x1f) * 0x20 - uVar15 / 0x1f || (bVar3 & 0x20) != 0))) {
        uVar19 = 0x1d;
      }
      goto switchD_0126bdf8_caseD_3;
    }
    break;
  case 3:
    if (local_44 < 3) {
      if (uVar28 == 0) break;
      uVar28 = uVar28 - 1;
      local_48 = local_48 | (uint)(byte)*puVar23 << (local_44 & 0xff);
      local_44 = local_44 | 8;
      puVar23 = (ushort *)((int)puVar23 + 1);
    }
    uVar15 = (local_48 & 7) >> 1;
    local_44 = local_44 - 3;
    uVar13 = local_48 >> 3;
    *(char *)(param_2 + 0x28eb) = (char)uVar15;
    uVar19 = 0x19;
    *(byte *)(param_2 + 0x28ea) = (byte)local_48 & 1;
    local_48 = uVar13;
    switch(uVar15) {
    case 0:
      uVar19 = 4;
      break;
    case 1:
      *(undefined4 *)(param_2 + 0x28e4) = 0x200120;
      FUN_016dd606(param_2 + 0x2780,8,0x90);
      FUN_016dd606(param_2 + 0x2810,9,0x70);
      FUN_016dd606(param_2 + 0x2880,7,0x18);
      *(undefined4 *)(param_2 + 0x2898) = 0x8080808;
      *(undefined4 *)(param_2 + 0x289c) = 0x8080808;
      FUN_016dd606(param_2 + 0x28a0,5,0x20);
      uVar33 = FUN_0126ced8(param_2,&local_48);
      uVar19 = (uint)((ulonglong)uVar33 >> 0x20);
      uVar24 = (uint)uVar33 & 0xff;
      if (uVar24 != 1) {
        if (uVar24 != 2) {
LAB_0126c804:
          local_74 = 0xff;
          goto LAB_0126c80c;
        }
        uVar26 = 3;
        goto LAB_0126c780;
      }
      uVar24 = local_3c;
      break;
    case 2:
      uVar19 = 8;
      local_3c = 0;
      uVar24 = local_3c;
    }
    goto switchD_0126bdf8_caseD_3;
  case 4:
    uVar19 = 5;
    local_3c = 0;
    local_48 = local_48 >> (local_44 & 7);
    local_44 = local_44 & 0xfffffff8;
    uVar24 = local_3c;
    goto switchD_0126bdf8_caseD_3;
  case 5:
    uVar13 = local_44;
    uVar19 = local_48;
    uVar24 = local_3c;
    if (local_3c < 5) {
      uVar24 = 4;
    }
    for (; uVar24 != local_3c; local_3c = local_3c + 1) {
      if (uVar13 == 0) {
        if (uVar28 == 0) {
LAB_0126c760:
          uVar26 = 5;
          goto LAB_0126c864;
        }
        puVar22 = (ushort *)((int)puVar23 + 1);
        uVar28 = uVar28 - 1;
        *(byte *)(param_2 + 0x28e0 + local_3c) = (byte)*puVar23;
        uVar13 = 0;
      }
      else {
        puVar22 = puVar23;
        if (uVar13 < 8) {
          if (uVar28 == 0) goto LAB_0126c760;
          puVar22 = (ushort *)((int)puVar23 + 1);
          uVar28 = uVar28 - 1;
          uVar19 = uVar19 | (uint)(byte)*puVar23 << (uVar13 & 0xff);
          uVar13 = uVar13 | 8;
        }
        *(char *)(param_2 + 0x28e0 + local_3c) = (char)uVar19;
        uVar19 = uVar19 >> 8;
        uVar13 = uVar13 - 8;
        local_48 = uVar19;
        local_44 = uVar13;
      }
      puVar23 = puVar22;
    }
    uVar24 = (uint)*(ushort *)(param_2 + 0x28e0);
    uVar19 = 0x1f;
    if ((*(ushort *)(param_2 + 0x28e2) ^ *(ushort *)(param_2 + 0x28e0)) == 0xffff) {
      uVar19 = 0x14;
      if (uVar24 != 0) {
        uVar19 = 0x11;
        if (uVar13 == 0) {
          uVar19 = 6;
        }
      }
    }
    goto switchD_0126bdf8_caseD_3;
  case 6:
    uVar19 = 0x14;
    if (local_3c != 0) {
      uVar19 = 7;
      if (param_6 == local_6c) goto LAB_0126c72c;
    }
    goto switchD_0126bdf8_caseD_3;
  case 7:
    if (uVar28 != 0) {
      uVar13 = param_6 - local_6c;
      if (uVar28 < param_6 - local_6c) {
        uVar13 = uVar28;
      }
      if (local_3c < uVar13) {
        uVar13 = local_3c;
      }
      uVar15 = uVar13 + local_6c;
      if ((CARRY4(uVar13,local_6c)) || (param_6 < uVar15)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(local_6c,uVar15,param_6,&DAT_0188b29c);
      }
      FUN_016dd1aa((int)param_5 + local_6c,puVar23,uVar13);
      uVar28 = uVar28 - uVar13;
      uVar19 = 6;
      puVar23 = (ushort *)((int)puVar23 + uVar13);
      local_6c = uVar15;
      uVar24 = uVar24 - uVar13;
      goto switchD_0126bdf8_caseD_3;
    }
    break;
  case 8:
    if (local_3c < 3) {
      do {
        local_30[2] = 4;
        local_30[1] = 5;
        local_30[0] = 5;
        uVar19 = local_30[local_3c];
        puVar22 = puVar23;
        if (local_44 < uVar19) {
          do {
            if (uVar28 == 0) {
              uVar26 = 8;
              uVar28 = 0;
              goto LAB_0126c864;
            }
            puVar23 = (ushort *)((int)puVar22 + 1);
            uVar24 = local_44 + 8;
            uVar28 = uVar28 - 1;
            local_48 = local_48 | (uint)(byte)*puVar22 << (local_44 & 0x1f);
            puVar22 = puVar23;
            local_44 = uVar24;
          } while (uVar24 < uVar19);
        }
        else {
          uVar24 = local_44;
        }
        uVar2 = (ushort)local_48;
        iVar16 = local_3c * 2;
        local_48 = local_48 >> (uVar19 & 0x1f);
        iVar1 = local_3c * 2;
        local_3c = local_3c + 1;
        *(ushort *)(param_2 + 0x28e4 + iVar1) =
             *(short *)(&DAT_003b573c + iVar16) + (uVar2 & ~(ushort)(-1 << (uVar19 & 0x1f)));
        local_44 = uVar24 - uVar19;
      } while (local_3c != 3);
      local_3c = 3;
    }
    FUN_016dd606(param_2 + 0x28ed,0,0x13);
    uVar19 = 0x1b;
    if (*(ushort *)(param_2 + 0x28e6) < 0x1f) {
      uVar19 = 9;
    }
    local_3c = 0;
    uVar24 = local_3c;
    if (0x11e < *(ushort *)(param_2 + 0x28e4)) {
      uVar19 = 0x1b;
    }
    goto switchD_0126bdf8_caseD_3;
  case 9:
    do {
      if (local_3c < *(ushort *)(param_2 + 0x28e8)) {
        if (local_44 < 3) {
          if (uVar28 != 0) {
            uVar28 = uVar28 - 1;
            local_48 = local_48 | (uint)(byte)*puVar23 << (local_44 & 0xff);
            local_44 = local_44 | 8;
            puVar23 = (ushort *)((int)puVar23 + 1);
            goto LAB_0126b4d0;
          }
          uVar9 = 2;
          uVar28 = 0;
        }
        else {
LAB_0126b4d0:
          local_44 = local_44 - 3;
          uVar19 = local_48 >> 3;
          if (0x12 < local_3c) {
            local_48 = uVar19;
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(local_3c,0x13,&DAT_0188b30c);
          }
          uVar24 = (uint)(byte)(&DAT_003b5742)[local_3c];
          if (0x12 < uVar24) {
            local_48 = uVar19;
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar24,0x13,&DAT_0188b31c);
          }
          local_3c = local_3c + 1;
          uVar9 = 0;
          *(byte *)(param_2 + 0x28ed + uVar24) = (byte)local_48 & 7;
          local_48 = uVar19;
        }
        uVar32 = CONCAT44(0xfc,uVar9);
      }
      else {
        *(undefined2 *)(param_2 + 0x28e8) = 0x13;
        uVar32 = FUN_0126ced8(param_2,&local_48);
        if (((uint)uVar32 & 0xff) == 3) {
          uVar26 = 9;
          goto LAB_0126c804;
        }
      }
      uVar19 = (uint)(uVar32 >> 0x20);
    } while ((uVar32 & 0xff) == 0);
    uVar24 = local_3c;
    if (((uint)uVar32 & 0xff) != 1) {
      uVar26 = 9;
      goto LAB_0126c780;
    }
    goto switchD_0126bdf8_caseD_3;
  case 10:
    goto switchD_0126b018_caseD_a;
  case 0xb:
    uVar24 = (uint)local_38;
    uVar19 = local_48;
    for (; local_44 < uVar24; local_44 = local_44 + 8) {
      if (uVar28 == 0) {
        uVar26 = 0xb;
        local_48 = uVar19;
        goto LAB_0126c860;
      }
      uVar28 = uVar28 - 1;
      uVar19 = uVar19 | (uint)(byte)*puVar23 << (local_44 & 0x1f);
      puVar23 = (ushort *)((int)puVar23 + 1);
    }
    local_44 = local_44 - uVar24;
    local_48 = uVar19 >> (uVar24 & 0x1f);
    local_30[2] = 0xb;
    local_30[1] = 3;
    local_30[0] = 3;
    uVar26 = 0;
    if (local_40 == 0x10) {
      uVar26 = *(undefined1 *)(param_2 + (local_3c - 1 & 0x1ff));
    }
    uVar24 = local_30[local_40 & 2] + (uVar19 & ~(-1 << (uVar24 & 0x1f))) + local_3c;
    uVar19 = local_3c & 0x1ff;
    uVar13 = uVar24 & 0x1ff;
    if (uVar13 < uVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar19,uVar13,0x200,&DAT_0188b2fc);
    }
    FUN_016dd606(param_2 + uVar19,uVar26,uVar13 - uVar19);
    uVar19 = 10;
    goto switchD_0126bdf8_caseD_3;
  case 0xc:
    if (3 < uVar28) {
      puVar11 = &switchD_0126b018::switchdataD_0126b01c;
      do {
        puVar10 = (uint *)(param_6 - local_6c);
        if (puVar10 < (uint *)0x2) break;
        bVar30 = uVar28 == 0xe;
        if (0xd < uVar28) {
          puVar11 = (uint *)0x102;
          bVar30 = puVar10 == (uint *)0x102;
        }
        if ((0xd < uVar28 && puVar11 <= puVar10) && !bVar30) {
          uVar19 = 0xc;
          local_a0 = (uint)local_38;
          uVar15 = local_40;
          uVar21 = local_44;
          uVar13 = local_48;
          if (0xd < uVar28) goto LAB_0126c300;
          uVar24 = local_3c;
          local_a0._0_1_ = local_38;
          goto LAB_0126c6e8;
        }
        puVar22 = puVar23;
        if (local_44 < 0xf) {
          puVar22 = puVar23 + 1;
          uVar28 = uVar28 - 2;
          local_48 = local_48 | (uint)*puVar23 << (local_44 & 0xff);
          local_44 = local_44 | 0x10;
        }
        local_3c = (uint)*(short *)(iVar6 + (local_48 & 0x3ff) * 2);
        if ((int)local_3c < 0) {
          uVar19 = 10;
          do {
            uVar24 = uVar19;
            uVar19 = (local_48 >> (uVar24 & 0x1f) & 1) + ~local_3c;
            if (0x23f < uVar19) {
              local_3c = 0x7fff;
              break;
            }
            local_3c = (uint)*(short *)(iVar29 + uVar19 * 2);
            uVar19 = uVar24 + 1;
          } while ((int)local_3c < 0);
          uVar24 = uVar24 + 1 & 0xff;
        }
        else {
          uVar24 = local_3c >> 9;
        }
        local_44 = local_44 - uVar24;
        uVar19 = 0x15;
        local_48 = local_48 >> (uVar24 & 0x1f);
        puVar23 = puVar22;
        if ((local_3c & 0x100) != 0) {
          uVar24 = local_3c;
          goto switchD_0126bdf8_caseD_3;
        }
        if (local_44 < 0xf) {
          puVar23 = puVar22 + 1;
          uVar28 = uVar28 - 2;
          local_48 = local_48 | (uint)*puVar22 << (local_44 & 0xff);
          local_44 = local_44 | 0x10;
        }
        uVar24 = (uint)*(short *)(iVar6 + (local_48 & 0x3ff) * 2);
        if ((int)uVar24 < 0) {
          uVar13 = 10;
          do {
            uVar15 = uVar13;
            uVar24 = (local_48 >> (uVar15 & 0x1f) & 1) + ~uVar24;
            if (0x23f < uVar24) {
              uVar24 = 0x7fff;
              break;
            }
            uVar24 = (uint)*(short *)(iVar29 + uVar24 * 2);
            uVar13 = uVar15 + 1;
          } while ((int)uVar24 < 0);
          uVar13 = uVar15 + 1 & 0xff;
        }
        else {
          uVar13 = uVar24 >> 9;
        }
        local_44 = local_44 - uVar13;
        local_48 = local_48 >> (uVar13 & 0x1f);
        if (param_6 <= local_6c) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(local_6c,param_6,&DAT_0188b28c);
        }
        *(char *)((int)param_5 + local_6c) = (char)local_3c;
        uVar13 = local_6c + 1;
        if ((uVar24 & 0x100) != 0) {
          local_6c = uVar13;
          goto switchD_0126bdf8_caseD_3;
        }
        if (param_6 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar13,param_6,&DAT_0188b28c);
        }
        local_6c = local_6c + 2;
        *(char *)((int)param_5 + uVar13) = (char)uVar24;
        puVar11 = param_5;
      } while (3 < uVar28);
    }
    if (local_44 < 0xf) {
      if (uVar28 < 2) {
        bVar30 = uVar28 == 0;
        puVar22 = puVar23;
        do {
          uVar2 = *(ushort *)(iVar6 + (local_48 & 0x3ff) * 2);
          uVar19 = (uint)(short)uVar2;
          if ((int)uVar19 < 0) {
            if (10 < local_44) {
              uVar24 = 0xb;
              do {
                uVar19 = (local_48 >> (uVar24 - 1 & 0x1f) & 1) + ~uVar19;
                if (8 < uVar19 >> 6) {
LAB_0126cde8:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(uVar19,0x240,&DAT_0188b33c);
                }
                uVar19 = (uint)*(short *)(iVar29 + uVar19 * 2);
                if (uVar19 < 0x80000000) goto LAB_0126c24c;
                uVar24 = uVar24 + 1;
              } while (uVar24 <= local_44);
            }
          }
          else {
            if (0x1ff < uVar2) {
              uVar19 = uVar19 >> 9;
            }
            if (0x1ff < uVar2 && uVar19 <= local_44) {
LAB_0126c24c:
              uVar13 = local_44;
              puVar23 = puVar22;
              break;
            }
          }
          if (bVar30) {
            uVar26 = 0xc;
            goto LAB_0126c864;
          }
          puVar23 = (ushort *)((int)puVar22 + 1);
          uVar13 = local_44 + 8;
          bVar30 = true;
          uVar28 = 0;
          bVar31 = local_44 < 7;
          local_48 = local_48 | (uint)(byte)*puVar22 << (local_44 & 0xff);
          puVar22 = puVar23;
          local_44 = uVar13;
        } while (bVar31);
      }
      else {
        uVar28 = uVar28 - 2;
        local_48 = local_48 | (uint)*puVar23 << (local_44 & 0xff);
        uVar13 = local_44 | 0x10;
        puVar23 = puVar23 + 1;
      }
    }
    else {
      uVar13 = local_44;
    }
    uVar24 = (uint)*(short *)(iVar6 + (local_48 & 0x3ff) * 2);
    if ((int)uVar24 < 0) {
      uVar19 = 10;
      do {
        uVar15 = uVar19;
        uVar19 = (local_48 >> (uVar15 & 0x1f) & 1) + ~uVar24;
        if (0x23f < uVar19) {
          uVar24 = 0x7fff;
          break;
        }
        uVar24 = (uint)*(short *)(iVar29 + uVar19 * 2);
        uVar19 = uVar15 + 1;
      } while ((int)uVar24 < 0);
      uVar15 = uVar15 + 1 & 0xff;
    }
    else {
      uVar15 = uVar24 >> 9;
      uVar24 = uVar24 & 0x1ff;
    }
    uVar19 = 0xd;
    local_48 = local_48 >> (uVar15 & 0x1f);
    local_44 = uVar13 - uVar15;
    goto switchD_0126bdf8_caseD_3;
  case 0xd:
    uVar19 = 0x15;
    if (local_3c < 0x100) {
      if (param_6 == local_6c) goto LAB_0126c72c;
      if (param_6 <= local_6c) {
LAB_0126ce58:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(local_6c,param_6,&DAT_0188b28c);
      }
      uVar19 = 0xc;
      *(char *)((int)param_5 + local_6c) = (char)local_3c;
      local_6c = local_6c + 1;
    }
    goto switchD_0126bdf8_caseD_3;
  case 0xe:
    uVar24 = (uint)local_38;
    puVar22 = puVar23;
    if (local_44 < uVar24) {
      do {
        if (uVar28 == 0) {
          uVar26 = 0xe;
          goto LAB_0126c860;
        }
        puVar23 = (ushort *)((int)puVar22 + 1);
        uVar13 = local_44 + 8;
        uVar28 = uVar28 - 1;
        local_48 = local_48 | (uint)(byte)*puVar22 << (local_44 & 0x1f);
        puVar22 = puVar23;
        local_44 = uVar13;
      } while (uVar13 < uVar24);
    }
    else {
      uVar13 = local_44;
    }
    uVar19 = 0xf;
    uVar15 = local_48 & ~(-1 << (uVar24 & 0x1f));
    local_48 = local_48 >> (uVar24 & 0x1f);
    local_44 = uVar13 - uVar24;
    uVar24 = local_3c + uVar15;
    goto switchD_0126bdf8_caseD_3;
  case 0xf:
    if (local_44 < 0xf) {
      if (uVar28 < 2) {
        bVar30 = uVar28 == 0;
        puVar22 = puVar23;
        do {
          uVar2 = *(ushort *)(iVar8 + (local_48 & 0x3ff) * 2);
          uVar19 = (uint)(short)uVar2;
          if ((int)uVar19 < 0) {
            if (10 < local_44) {
              uVar13 = 0xb;
              do {
                uVar19 = (local_48 >> (uVar13 - 1 & 0x1f) & 1) + ~uVar19;
                if (8 < uVar19 >> 6) goto LAB_0126cde8;
                uVar19 = (uint)*(short *)(iVar7 + uVar19 * 2);
                if (uVar19 < 0x80000000) goto LAB_0126c188;
                uVar13 = uVar13 + 1;
              } while (uVar13 <= local_44);
            }
          }
          else {
            if (0x1ff < uVar2) {
              uVar19 = uVar19 >> 9;
            }
            if (0x1ff < uVar2 && uVar19 <= local_44) {
LAB_0126c188:
              uVar13 = local_44;
              puVar23 = puVar22;
              break;
            }
          }
          if (bVar30) {
            uVar26 = 0xf;
            goto LAB_0126c864;
          }
          puVar23 = (ushort *)((int)puVar22 + 1);
          uVar13 = local_44 + 8;
          uVar28 = 0;
          bVar31 = local_44 < 7;
          local_48 = local_48 | (uint)(byte)*puVar22 << (local_44 & 0xff);
          bVar30 = true;
          puVar22 = puVar23;
          local_44 = uVar13;
        } while (bVar31);
      }
      else {
        uVar28 = uVar28 - 2;
        local_48 = local_48 | (uint)*puVar23 << (local_44 & 0xff);
        uVar13 = local_44 | 0x10;
        puVar23 = puVar23 + 1;
      }
    }
    else {
      uVar13 = local_44;
    }
    uVar15 = (uint)*(short *)(iVar8 + (local_48 & 0x3ff) * 2);
    if ((int)uVar15 < 0) {
      uVar19 = 10;
      do {
        uVar21 = uVar19;
        uVar19 = (local_48 >> (uVar21 & 0x1f) & 1) + ~uVar15;
        if (0x23f < uVar19) {
          uVar15 = 0x7fff;
          break;
        }
        uVar15 = (uint)*(short *)(iVar7 + uVar19 * 2);
        uVar19 = uVar21 + 1;
      } while ((int)uVar15 < 0);
      uVar21 = uVar21 + 1 & 0xff;
    }
    else {
      uVar21 = uVar15 >> 9;
      uVar15 = uVar15 & 0x1ff;
    }
    uVar19 = 0x22;
    local_48 = local_48 >> (uVar21 & 0x1f);
    local_44 = uVar13 - uVar21;
    if (uVar15 < 0x1e) {
      uVar19 = 0x10;
      local_38 = UnsignedSaturate((char)((uVar15 & 0xff) >> 1) + -1,0x10);
      UnsignedSaturate(0,0x10);
      UnsignedSaturate(0,0x10);
      UnsignedSaturate(0,0x10);
      if (uVar15 < 4) {
        uVar19 = 0x16;
      }
      local_40 = (uint)*(ushort *)(&DAT_003b5756 + uVar15 * 2);
    }
    goto switchD_0126bdf8_caseD_3;
  case 0x10:
    uVar13 = (uint)local_38;
    if (local_44 < uVar13) {
      uVar26 = 0x10;
      if (uVar28 != 0) {
        iVar16 = 1 - uVar28;
        uVar28 = local_44;
        puVar22 = puVar23;
        while( true ) {
          puVar23 = (ushort *)((int)puVar22 + 1);
          local_48 = local_48 | (uint)(byte)*puVar22 << (uVar28 & 0x1f);
          local_44 = uVar28 + 8;
          if (uVar13 <= local_44) break;
          iVar16 = iVar16 + 1;
          uVar28 = uVar28 + 8;
          puVar22 = puVar23;
          if (iVar16 == 1) {
            local_44 = uVar28;
            goto LAB_0126c7f0;
          }
        }
        uVar28 = -iVar16;
        goto LAB_0126c138;
      }
LAB_0126c7f0:
      uVar28 = 0;
      goto LAB_0126c864;
    }
LAB_0126c138:
    uVar19 = 0x16;
    uVar15 = local_48 & ~(-1 << (uVar13 & 0x1f));
    local_48 = local_48 >> (uVar13 & 0x1f);
    local_44 = local_44 - uVar13;
    local_40 = local_40 + uVar15;
    goto switchD_0126bdf8_caseD_3;
  case 0x11:
    if (local_44 < 8) {
      if (uVar28 == 0) break;
      uVar28 = uVar28 - 1;
      local_48 = local_48 | (uint)(byte)*puVar23 << (local_44 & 0xff);
      local_44 = local_44 | 8;
      puVar23 = (ushort *)((int)puVar23 + 1);
    }
    local_40 = local_48 & 0xff;
    uVar19 = 0x12;
    local_48 = local_48 >> 8;
    local_44 = local_44 - 8;
    goto switchD_0126bdf8_caseD_3;
  case 0x12:
    if (param_6 == local_6c) {
LAB_0126c72c:
      local_74 = 2;
      local_6c = param_6;
LAB_0126c80c:
      goto switchD_0126b018_caseD_18;
    }
    if (param_6 <= local_6c) goto LAB_0126ce58;
    uVar19 = 0x11;
    *(char *)((int)param_5 + local_6c) = (char)local_40;
    if (local_44 == 0) {
      uVar19 = 6;
    }
    if (local_3c - 1 == 0) {
      uVar19 = 6;
    }
    local_6c = local_6c + 1;
    uVar24 = local_3c - 1;
    goto switchD_0126bdf8_caseD_3;
  case 0x13:
    do {
      uVar19 = local_3c;
      if (param_6 == local_6c) {
        uVar26 = 0x13;
        goto LAB_0126c72c;
      }
      uVar15 = param_6 - local_6c;
      uVar24 = uVar15;
      if (local_3c < uVar15) {
        uVar24 = local_3c;
      }
      FUN_0126d328(param_5,param_6,local_6c - uVar13,local_6c,uVar24);
      local_3c = uVar19 - uVar24;
      local_6c = uVar24 + local_6c;
    } while (uVar15 < uVar19);
    uVar19 = 0xc;
    uVar24 = local_3c;
    goto switchD_0126bdf8_caseD_3;
  case 0x14:
    uVar19 = 3;
    if (*(char *)(param_2 + 0x28ea) != '\0') {
      uVar28 = param_4 - uVar28;
      uVar24 = uVar28;
      if (local_44 >> 3 <= uVar28) {
        uVar24 = local_44 >> 3;
      }
      uVar13 = (local_44 & 0xfffffff8) + uVar24 * -8;
      uVar24 = uVar28 - uVar24;
      if (param_4 < uVar24) {
        local_44 = uVar13;
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar24,param_4,param_4,&DAT_0188b2dc);
      }
      local_3c = 0;
      uVar28 = param_4 - uVar24;
      uVar19 = 0x17;
      puVar23 = (ushort *)((int)param_3 + uVar24);
      local_48 = local_48 >> (local_44 & 7) & ~(-1 << (uVar13 & 0x18));
      local_44 = uVar13;
      uVar24 = local_3c;
    }
    goto switchD_0126bdf8_caseD_3;
  case 0x15:
    uVar19 = 0x14;
    uVar24 = local_3c & 0x1ff;
    if (uVar24 != 0x100) {
      uVar19 = 0x21;
      if (uVar24 >> 1 < 0x8f) {
        uVar24 = local_3c - 1 & 0x1f;
        uVar19 = 0xe;
        local_38 = (&DAT_00565cf0)[uVar24];
        uVar24 = (uint)*(ushort *)(&DAT_003b56fc + uVar24 * 2);
        if (local_38 == 0) {
          uVar19 = 0xf;
        }
      }
    }
    goto switchD_0126bdf8_caseD_3;
  case 0x16:
    uVar19 = 0x1e;
    if (local_40 <= local_6c) {
      if (local_40 <= param_6) {
        uVar13 = local_3c + local_6c;
        if (uVar13 <= param_6) {
          uVar19 = local_6c - local_40;
          bVar31 = local_6c <= uVar19;
          bVar30 = uVar19 == local_6c;
          if (bVar31) {
            uVar19 = -local_40;
            bVar30 = local_3c == uVar19;
          }
          if ((!bVar31 || local_3c < uVar19) || bVar30) {
            FUN_0126d768(param_5,param_6,local_6c,local_40,local_3c);
            uVar19 = 0xc;
            local_6c = uVar13;
            uVar24 = local_3c;
            goto switchD_0126bdf8_caseD_3;
          }
        }
        uVar19 = 0x13;
        if (local_3c == 0) {
          uVar19 = 0xc;
        }
      }
    }
    goto switchD_0126bdf8_caseD_3;
  case 0x17:
    uVar15 = *(uint *)(param_2 + 0x28cc);
    uVar24 = local_3c;
    uVar13 = local_44;
    uVar19 = local_48;
    if (local_3c < 5) {
      uVar24 = 4;
    }
    while (uVar24 != local_3c) {
      if (uVar13 == 0) {
        if (uVar28 == 0) {
LAB_0126c74c:
          uVar26 = 0x17;
          goto LAB_0126c860;
        }
        puVar22 = (ushort *)((int)puVar23 + 1);
        uVar28 = uVar28 - 1;
        uVar15 = (uint)(byte)*puVar23 | uVar15 << 8;
        uVar13 = 0;
      }
      else {
        if (uVar13 < 8) {
          if (uVar28 == 0) goto LAB_0126c74c;
          uVar28 = uVar28 - 1;
          uVar21 = uVar13 & 0xff;
          uVar13 = uVar13 | 8;
          uVar21 = uVar19 | (uint)(byte)*puVar23 << uVar21;
          puVar23 = (ushort *)((int)puVar23 + 1);
        }
        else {
          uVar21 = uVar19;
        }
        uVar19 = uVar21 >> 8;
        uVar13 = uVar13 - 8;
        uVar15 = uVar21 & 0xff | uVar15 << 8;
        puVar22 = puVar23;
        local_48 = uVar19;
        local_44 = uVar13;
      }
      local_3c = local_3c + 1;
      *(uint *)(param_2 + 0x28cc) = uVar15;
      puVar23 = puVar22;
    }
    uVar19 = 0x18;
    uVar24 = local_3c;
    goto switchD_0126bdf8_caseD_3;
  case 0x18:
    goto switchD_0126b018_caseD_18;
  default:
    local_74 = 0xff;
    goto LAB_0126c80c;
  }
LAB_0126c860:
  uVar28 = 0;
LAB_0126c864:
  local_74._0_1_ = -4;
  bVar30 = true;
  uVar24 = 0;
  cVar4 = (char)local_74;
  goto LAB_0126c868;
LAB_0126c300:
  do {
    if (uVar21 < 0xf) {
      uVar28 = uVar28 - 2;
      uVar13 = uVar13 | (uint)*puVar23 << (uVar21 & 0xff);
      uVar21 = uVar21 | 0x10;
      puVar23 = puVar23 + 1;
    }
    uVar24 = (uint)*(short *)(iVar6 + (uVar13 & 0x3ff) * 2);
    if ((int)uVar24 < 0) {
      uVar25 = 10;
      do {
        uVar20 = uVar25;
        uVar24 = (uVar13 >> (uVar20 & 0x1f) & 1) + ~uVar24;
        if (0x23f < uVar24) {
          uVar24 = 0x7fff;
          break;
        }
        uVar24 = (uint)*(short *)(iVar29 + uVar24 * 2);
        uVar25 = uVar20 + 1;
      } while ((int)uVar24 < 0);
      uVar25 = uVar20 + 1 & 0xff;
    }
    else {
      uVar25 = uVar24 >> 9;
    }
    uVar21 = uVar21 - uVar25;
    uVar13 = uVar13 >> (uVar25 & 0x1f);
    uVar25 = local_6c;
    uVar20 = uVar24;
    if ((uVar24 & 0x100) != 0) break;
    if (uVar21 < 0xf) {
      uVar28 = uVar28 - 2;
      uVar13 = uVar13 | (uint)*puVar23 << (uVar21 & 0xff);
      uVar21 = uVar21 | 0x10;
      puVar23 = puVar23 + 1;
    }
    uVar20 = (uint)*(short *)(iVar6 + (uVar13 & 0x3ff) * 2);
    if ((int)uVar20 < 0) {
      uVar25 = 10;
      do {
        uVar27 = uVar25;
        uVar25 = (uVar13 >> (uVar27 & 0x1f) & 1) + ~uVar20;
        if (0x23f < uVar25) {
          uVar20 = 0x7fff;
          break;
        }
        uVar20 = (uint)*(short *)(iVar29 + uVar25 * 2);
        uVar25 = uVar27 + 1;
      } while ((int)uVar20 < 0);
      uVar25 = uVar27 + 1 & 0xff;
    }
    else {
      uVar25 = uVar20 >> 9;
    }
    if (param_6 <= local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(local_6c,param_6,&DAT_0188b28c);
    }
    uVar21 = uVar21 - uVar25;
    uVar13 = uVar13 >> (uVar25 & 0x1f);
    *(char *)((int)param_5 + local_6c) = (char)uVar24;
    uVar25 = local_6c + 1;
    if ((uVar20 & 0x100) != 0) break;
    if (param_6 <= uVar25) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar25,param_6,&DAT_0188b28c);
    }
    local_6c = local_6c + 2;
    *(char *)((int)param_5 + uVar25) = (char)uVar20;
    bVar3 = (byte)local_a0;
    if ((param_6 - local_6c < 0x103) || (uVar28 < 0xe)) goto LAB_0126c6e4;
  } while( true );
  uVar24 = uVar20 & 0x1ff;
  local_6c = uVar25;
  if (uVar24 == 0x100) {
    uVar24 = 0x100;
    uVar19 = 0x14;
    goto LAB_0126c6e8;
  }
  if (uVar24 >> 1 < 0x8f) {
    puVar22 = puVar23;
    if (uVar21 < 0xf) {
      puVar22 = puVar23 + 1;
      uVar24 = (uint)*puVar23;
    }
    uVar20 = uVar20 - 1 & 0x1f;
    if (uVar21 < 0xf) {
      uVar28 = uVar28 - 2;
      uVar13 = uVar13 | uVar24 << (uVar21 & 0xff);
      uVar21 = uVar21 | 0x10;
    }
    uVar27 = (uint)(byte)(&DAT_00565cf0)[uVar20];
    uVar24 = (uint)*(ushort *)(&DAT_003b56fc + uVar20 * 2);
    puVar23 = puVar22;
    if (uVar27 != 0) {
      uVar21 = uVar21 - uVar27;
      uVar27 = uVar27 & 0x1f;
      uVar14 = uVar13 & ~(-1 << uVar27);
      uVar13 = uVar13 >> uVar27;
      if (uVar21 < 0xf) {
        puVar23 = puVar22 + 1;
        uVar27 = (uint)*puVar22;
      }
      uVar24 = uVar14 + uVar24;
      if (uVar21 < 0xf) {
        uVar28 = uVar28 - 2;
        uVar13 = uVar13 | uVar27 << (uVar21 & 0xff);
        uVar21 = uVar21 | 0x10;
      }
    }
    uVar27 = (uint)*(short *)(iVar8 + (uVar13 & 0x3ff) * 2);
    if ((int)uVar27 < 0) {
      uVar14 = 10;
      do {
        uVar12 = uVar14;
        uVar27 = (uVar13 >> (uVar12 & 0x1f) & 1) + ~uVar27;
        if (0x23f < uVar27) {
          uVar27 = 0x7fff;
          break;
        }
        uVar27 = (uint)*(short *)(iVar7 + uVar27 * 2);
        uVar14 = uVar12 + 1;
      } while ((int)uVar27 < 0);
      uVar14 = uVar12 + 1 & 0xff;
    }
    else {
      uVar14 = uVar27 >> 9;
    }
    uVar21 = uVar21 - uVar14;
    uVar13 = uVar13 >> (uVar14 & 0x1f);
    if ((uVar27 & 0x1ff) < 0x1e) {
      bVar3 = UnsignedSaturate((char)((uVar27 & 0xff) >> 1) + -1,0x10);
      UnsignedSaturate(0,0x10);
      UnsignedSaturate(0,0x10);
      UnsignedSaturate(0,0x10);
      local_a0 = (uint)bVar3;
      uVar15 = (uint)*(ushort *)(&DAT_003b5756 + (uVar27 & 0x1ff) * 2);
      if ((uVar27 & 0xff) < 4) {
        uVar20 = uVar15;
      }
      else {
        if (uVar21 < 0xf) {
          if (uVar28 < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,2,uVar28,&DAT_0188b32c);
          }
          uVar28 = uVar28 - 2;
          uVar13 = uVar13 | (uint)*puVar23 << (uVar21 & 0xff);
          uVar21 = uVar21 | 0x10;
          puVar23 = puVar23 + 1;
        }
        uVar21 = uVar21 - local_a0;
        uVar20 = uVar13 & ~(-1 << local_a0);
        uVar13 = uVar13 >> local_a0;
        uVar15 = uVar20 + uVar15;
      }
      uVar26 = 0x1e;
      if ((uVar15 <= param_6) && (uVar15 <= uVar25)) {
        uVar27 = uVar25 - uVar15;
        if (uVar24 == 3) {
          if (uVar25 < 0xfffffffd) {
            uVar14 = uVar25 + 3;
            if (uVar14 <= param_6) {
              uVar14 = uVar27 + 2;
            }
            if (uVar14 < param_6) {
              if (uVar27 < param_6) {
                uVar20 = uVar27 + 1;
              }
              if (uVar27 < param_6 && uVar20 < param_6) {
                puVar17 = (undefined1 *)((int)param_5 + uVar25);
                *puVar17 = *(undefined1 *)((int)param_5 + uVar27);
                puVar17[1] = *(undefined1 *)((int)param_5 + uVar20);
                puVar17[2] = *(undefined1 *)((int)param_5 + uVar14);
              }
            }
          }
        }
        else {
          FUN_0126d328(param_5,param_6,uVar27,uVar25,uVar24);
        }
        local_6c = uVar25 + uVar24;
        uVar25 = param_6 - local_6c;
        bVar30 = uVar25 == 0x103;
        if (0x102 < uVar25) {
          bVar30 = uVar28 == 0xd;
        }
        if ((0x102 >= uVar25 || uVar28 < 0xd) || bVar30) goto LAB_0126c6e4;
        goto LAB_0126c300;
      }
    }
    else {
      uVar26 = 0x22;
      bVar3 = (&DAT_00565cf0)[uVar20];
    }
    local_a0._0_1_ = bVar3;
  }
  else {
    uVar26 = 0x21;
  }
  local_38 = (byte)local_a0;
  local_74 = 0xff;
  local_48 = uVar13;
  local_44 = uVar21;
  local_40 = uVar15;
  local_3c = uVar24;
  goto switchD_0126b018_caseD_18;
LAB_0126c6e4:
  local_a0._0_1_ = bVar3;
LAB_0126c6e8:
  local_38 = (byte)local_a0;
  local_48 = uVar13;
  local_44 = uVar21;
  local_40 = uVar15;
  goto switchD_0126bdf8_caseD_3;
switchD_0126b018_caseD_a:
  do {
    uVar13 = (uint)*(ushort *)(param_2 + 0x28e4);
    uVar24 = *(ushort *)(param_2 + 0x28e6) + uVar13;
    if (local_3c < uVar24) {
      if (local_44 < 0xf) {
        if (uVar28 < 2) {
          bVar30 = uVar28 == 0;
          puVar22 = puVar23;
          do {
            uVar2 = *(ushort *)(param_2 + 0x1b00 + (local_48 & 0x3ff) * 2);
            uVar24 = (uint)(short)uVar2;
            puVar23 = puVar22;
            if ((int)uVar24 < 0) {
              if (10 < local_44) {
                uVar13 = 0xb;
                do {
                  uVar19 = (local_48 >> (uVar13 - 1 & 0x1f) & 1) + ~uVar24;
                  if (8 < uVar19 >> 6) goto LAB_0126cde8;
                  uVar24 = (uint)*(short *)(uVar5 + uVar19 * 2);
                  uVar19 = uVar5;
                  if (uVar24 < 0x80000000) goto LAB_0126b354;
                  uVar13 = uVar13 + 1;
                } while (uVar13 <= local_44);
              }
            }
            else {
              if (0x1ff < uVar2) {
                uVar24 = uVar24 >> 9;
              }
              if (0x1ff < uVar2 && uVar24 <= local_44) {
LAB_0126b354:
                uVar24 = local_44;
                break;
              }
            }
            if (bVar30) {
              uVar32 = 0xfc00000002;
              goto LAB_0126b438;
            }
            puVar23 = (ushort *)((int)puVar22 + 1);
            uVar24 = local_44 + 8;
            uVar28 = 0;
            bVar31 = local_44 < 7;
            local_48 = local_48 | (uint)(byte)*puVar22 << (local_44 & 0xff);
            bVar30 = true;
            puVar22 = puVar23;
            local_44 = uVar24;
          } while (bVar31);
        }
        else {
          uVar28 = uVar28 - 2;
          local_48 = local_48 | (uint)*puVar23 << (local_44 & 0xff);
          uVar24 = local_44 | 0x10;
          puVar23 = puVar23 + 1;
        }
      }
      else {
        uVar24 = local_44;
      }
      local_40 = (uint)*(short *)(param_2 + 0x1b00 + (local_48 & 0x3ff) * 2);
      if ((int)local_40 < 0) {
        uVar13 = 10;
        do {
          uVar15 = uVar13;
          uVar19 = 1;
          uVar13 = (local_48 >> (uVar15 & 0x1f) & 1) + ~local_40;
          if (0x23f < uVar13) {
            local_40 = 0x7fff;
            break;
          }
          local_40 = (uint)*(short *)(uVar5 + uVar13 * 2);
          uVar13 = uVar15 + 1;
        } while ((int)local_40 < 0);
        uVar13 = uVar15 + 1 & 0xff;
      }
      else {
        uVar13 = local_40 >> 9;
        local_40 = local_40 & 0x1ff;
      }
      local_44 = uVar24 - uVar13;
      local_48 = local_48 >> (uVar13 & 0x1f);
      if (local_40 < 0x10) {
        uVar32 = (ulonglong)uVar19 << 0x20;
        *(char *)(param_2 + (local_3c & 0x1ff)) = (char)local_40;
        local_3c = local_3c + 1;
      }
      else {
        if (local_3c == 0) {
          uVar19 = 0x20;
        }
        uVar32 = CONCAT44(uVar19,1);
        if (local_3c != 0 || local_40 != 0x10) {
          uVar32 = 0xb00000001;
          local_30[0] = 0x70302;
          local_38 = *(byte *)((int)local_30 + (local_40 & 3));
        }
      }
    }
    else {
      if (local_3c != uVar24) {
        uVar19 = 0x1a;
        uVar24 = local_3c;
        goto switchD_0126bdf8_caseD_3;
      }
      if (0x120 < uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar13,0x120,&DAT_0188b2cc);
      }
      FUN_016dd1aa(param_2 + 0x2780,param_2);
      uVar19 = *(ushort *)(param_2 + 0x28e4) & 0x1ff;
      uVar24 = (uint)*(ushort *)(param_2 + 0x28e6) + (uint)*(ushort *)(param_2 + 0x28e4) & 0x1ff;
      if (uVar24 < uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar19,uVar24,0x200,&DAT_0188b2bc);
      }
      uVar13 = *(ushort *)(param_2 + 0x28e6) & 0x1f;
      if (uVar24 - uVar19 != uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb7204(uVar13,uVar24 - uVar19,&DAT_0188b2ac);
      }
      FUN_016dd1aa(param_2 + 0x28a0,param_2 + uVar19);
      *(char *)(param_2 + 0x28eb) = *(char *)(param_2 + 0x28eb) + -1;
      uVar32 = FUN_0126ced8(param_2,&local_48);
      if (((uint)uVar32 & 0xff) == 3) {
        uVar26 = 10;
        local_74 = 0xff;
        goto switchD_0126b018_caseD_18;
      }
    }
LAB_0126b438:
    uVar19 = (uint)(uVar32 >> 0x20);
  } while ((uVar32 & 0xff) == 0);
  uVar24 = local_3c;
  if (((uint)uVar32 & 0xff) == 2) {
    uVar26 = 10;
LAB_0126c780:
    uVar24 = 0;
    if ((uVar19 & 0xff) == 1) {
      bVar30 = true;
      cVar4 = '\x01';
      if (param_6 == local_6c) {
        cVar4 = '\x02';
      }
    }
    else {
      bVar30 = true;
      local_74 = uVar19;
      cVar4 = (char)uVar19;
      if ((uVar19 & 0xff) != 0xfc) {
switchD_0126b018_caseD_18:
        uVar24 = param_4 - uVar28;
        if (local_44 >> 3 <= uVar24) {
          uVar24 = local_44 >> 3;
        }
        local_44 = local_44 + uVar24 * -8;
        bVar30 = (local_74 & 0xff) != 0;
        cVar4 = (char)local_74;
      }
    }
LAB_0126c868:
    local_74._0_1_ = cVar4;
    *(uint *)(param_2 + 0x28c0) = local_44;
    *(uint *)(param_2 + 0x28d4) = local_40;
    *(byte *)(param_2 + 0x28ec) = local_38;
    *(uint *)(param_2 + 0x28dc) = local_48 & ~(-1 << (local_44 & 0x1f));
    *(undefined1 *)(param_2 + 0x2900) = uVar26;
    *(uint *)(param_2 + 0x28d8) = local_3c;
    if (-1 < (char)local_74) {
      if (param_6 < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,local_6c,param_6,&DAT_0188b2ec);
      }
      uVar15 = local_6c & 0x7ffffffc;
      uVar13 = (uVar15 / 0x56c0) * 0x56c0;
      uVar21 = *(uint *)(param_2 + 0x28d0) & 0xffff;
      uVar19 = *(uint *)(param_2 + 0x28d0) >> 0x10;
      uVar5 = 0;
      if (uVar13 < 0x56c0) {
        uVar20 = 0;
        uVar25 = 0;
        uVar27 = 0;
        local_4c = 0;
        local_50 = 0;
        local_58 = 0;
        local_5c = 0;
      }
      else {
        uVar20 = 0;
        uVar25 = 0;
        uVar5 = 0;
        local_4c = 0;
        uVar27 = 0;
        local_50 = 0;
        local_58 = 0;
        local_5c = 0;
        puVar11 = param_5;
        local_64 = uVar13;
        do {
          iVar6 = 0;
          do {
            pbVar18 = (byte *)((int)puVar11 - iVar6);
            iVar6 = iVar6 + -4;
            local_4c = local_4c + *pbVar18;
            uVar27 = local_4c + uVar27;
            uVar25 = uVar25 + pbVar18[2];
            local_58 = local_58 + pbVar18[3];
            uVar20 = uVar25 + uVar20;
            local_5c = local_5c + pbVar18[1];
            local_50 = local_58 + local_50;
            uVar5 = local_5c + uVar5;
          } while (iVar6 != -0x56c0);
          local_50 = local_50 % 0xfff1;
          uVar20 = uVar20 % 0xfff1;
          uVar5 = uVar5 % 0xfff1;
          uVar27 = uVar27 % 0xfff1;
          uVar19 = (uVar19 + uVar21 * 0x56c0) % 0xfff1;
          local_58 = local_58 % 0xfff1;
          uVar25 = uVar25 % 0xfff1;
          local_5c = local_5c % 0xfff1;
          local_4c = local_4c % 0xfff1;
          puVar11 = puVar11 + 0x15b0;
          local_64 = local_64 - 0x56c0;
        } while (0x56bf < local_64);
      }
      uVar14 = local_6c & 3;
      if (uVar15 % 0x56c0 != 0) {
        puVar11 = param_5 + (uVar15 / 0x56c0) * 0x15b0;
        iVar6 = uVar13 - uVar15;
        do {
          iVar6 = iVar6 + 4;
          local_5c = local_5c + *(byte *)((int)puVar11 + 1);
          uVar25 = uVar25 + *(byte *)((int)puVar11 + 2);
          local_58 = local_58 + *(byte *)((int)puVar11 + 3);
          uVar20 = uVar25 + uVar20;
          local_4c = local_4c + (byte)*puVar11;
          local_50 = local_58 + local_50;
          uVar5 = local_5c + uVar5;
          uVar27 = local_4c + uVar27;
          puVar11 = puVar11 + 1;
        } while (iVar6 != 0);
        local_50 = local_50 % 0xfff1;
        uVar20 = uVar20 % 0xfff1;
        uVar5 = uVar5 % 0xfff1;
        uVar27 = uVar27 % 0xfff1;
        local_58 = local_58 % 0xfff1;
        uVar25 = uVar25 % 0xfff1;
        local_5c = local_5c % 0xfff1;
        local_4c = local_4c % 0xfff1;
      }
      uVar19 = ((((uVar15 % 0x56c0) * uVar21 + uVar19) % 0xfff1 + (uVar5 + uVar20) * 4 +
                (0xfff1 - local_58) * 3) - (local_5c + uVar25 * 2)) + (uVar27 + local_50) * 4 +
               0x2ffd3;
      local_4c = local_58 + uVar21 + uVar25 + local_5c + local_4c;
      if (uVar14 != 0) {
        pbVar18 = (byte *)((int)param_5 + uVar15);
        do {
          uVar14 = uVar14 - 1;
          local_4c = local_4c + *pbVar18;
          uVar19 = local_4c + uVar19;
          pbVar18 = pbVar18 + 1;
        } while (uVar14 != 0);
      }
      uVar19 = local_4c % 0xfff1 | (uVar19 % 0xfff1) * 0x10000;
      *(uint *)(param_2 + 0x28d0) = uVar19;
      if ((!bVar30) && (uVar19 != *(uint *)(param_2 + 0x28cc))) {
        local_74._0_1_ = -2;
      }
    }
    param_1[2] = local_6c;
    *(char *)(param_1 + 1) = (char)local_74;
    *param_1 = param_4 - (uVar24 + uVar28);
    return;
  }
  goto switchD_0126bdf8_caseD_3;
}

