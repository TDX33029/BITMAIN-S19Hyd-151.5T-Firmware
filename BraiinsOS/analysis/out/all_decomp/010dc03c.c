// FUN_010dc03c @ 010dc03c size=2108 calls_out=8 calls_in=1
// strings: 

undefined4 FUN_010dc03c(int param_1,uint param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  bool bVar16;
  ulonglong uVar17;
  uint local_70;
  uint local_6c;
  undefined1 *local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar2 = param_2 - 0xac00;
  if (uVar2 < 0x2ba4) {
    uVar4 = (short)((uVar2 & 0xffff) >> 2) * 0x4925;
    local_70 = (uVar2 & 0xffff) / 0x24c;
    puVar11 = (uint *)(param_1 + 0x48);
    uVar7 = *puVar11;
    puVar15 = (uint *)(param_1 + 4);
    if (uVar7 < 0x12) {
      uVar6 = 0x11;
      puVar9 = puVar15;
      puVar8 = puVar11;
    }
    else {
      uVar6 = uVar7;
      puVar9 = *(uint **)(param_1 + 8);
      puVar8 = puVar15;
      uVar7 = *(uint *)(param_1 + 4);
    }
    uVar4 = uVar2 + ((uVar4 >> 0x11) * 8 - (uVar4 >> 0x11)) * -4;
    if (uVar7 == uVar6) {
      FUN_010d9b58(param_1);
      uVar7 = *(uint *)(param_1 + 4);
      puVar9 = *(uint **)(param_1 + 8);
      puVar8 = puVar15;
    }
    puVar9[uVar7] =
         ((uint)((short)((uVar2 + local_70 * -0x24c & 0xffff) >> 2) * 0x4925) >> 0x11) + 0x1161;
    *puVar8 = *puVar8 + 1;
    local_70 = local_70 | 0x1100;
    if ((uVar4 & 0xffff) == 0) {
      uVar3 = 1;
    }
    else {
      uVar2 = *puVar11;
      if (uVar2 < 0x12) {
        uVar6 = 0x11;
        uVar7 = uVar2;
        puVar9 = puVar15;
      }
      else {
        uVar7 = *(uint *)(param_1 + 4);
        puVar9 = *(uint **)(param_1 + 8);
        uVar6 = uVar2;
        puVar11 = puVar15;
      }
      if (uVar7 == uVar6) {
        FUN_010d9b58(param_1);
        uVar7 = *(uint *)(param_1 + 4);
        puVar9 = *(uint **)(param_1 + 8);
        puVar11 = puVar15;
      }
      puVar9[uVar7] = uVar4 + 0x11a7 & 0xffff;
      *puVar11 = *puVar11 + 1;
      uVar3 = 2;
    }
  }
  else if (param_3 < 2) {
    uVar3 = 0;
    local_70 = param_2;
  }
  else {
    uVar4 = param_3 & 0xffff;
    bVar16 = param_3 == 0x10000;
    uVar2 = param_3 >> 0x10;
    if (0xffff < param_3) {
      bVar16 = uVar4 == 1;
    }
    if ((0xffff < param_3 && uVar4 != 0) && !bVar16) {
      uVar7 = 0xff00fffd;
      if (0xffef07ff < (uVar2 ^ 0xffefd800)) {
        uVar7 = uVar2 | 0xff000000;
      }
      puVar11 = (uint *)(param_1 + 0x48);
      uVar2 = *puVar11;
      puVar15 = (uint *)(param_1 + 4);
      if ((uVar4 ^ 0xffefd800) < 0xffef0800) {
        uVar4 = 0xfffd;
      }
      uVar17 = (ulonglong)uVar4;
      if (uVar2 < 0x12) {
        uVar6 = 0x11;
        puVar9 = puVar15;
        uVar4 = uVar2;
      }
      else {
        puVar11 = puVar15;
        puVar9 = *(uint **)(param_1 + 8);
        uVar4 = *(uint *)(param_1 + 4);
        uVar6 = uVar2;
      }
      if (uVar4 == uVar6) {
        FUN_010d9b58(param_1);
        uVar4 = *(uint *)(param_1 + 4);
        puVar9 = *(uint **)(param_1 + 8);
        puVar11 = puVar15;
      }
      puVar9[uVar4] = uVar7;
      *puVar11 = *puVar11 + 1;
      goto LAB_010dc218;
    }
    if (uVar4 < 2) {
      uVar4 = *(uint *)(param_1 + 0x68);
      uVar7 = uVar2 & 0xfff;
      if (uVar7 < uVar4) {
        uVar3 = *(undefined4 *)(param_1 + 100);
LAB_010dc754:
        uVar17 = FUN_010dbc98(param_1,uVar2,uVar7,uVar3,uVar4);
      }
      else {
        iVar14 = *(int *)(param_1 + 0x70);
        uVar6 = iVar14 + uVar4;
        if (uVar7 < uVar6) {
          uVar3 = *(undefined4 *)(param_1 + 0x6c);
          uVar10 = uVar4;
        }
        else {
          uVar4 = *(uint *)(param_1 + 0x78);
          uVar10 = uVar4 + uVar6;
          if (uVar7 < uVar10) {
            uVar3 = *(undefined4 *)(param_1 + 0x74);
            uVar7 = uVar7 - uVar6;
            goto LAB_010dc754;
          }
          uVar3 = *(undefined4 *)(param_1 + 0x7c);
          iVar14 = *(int *)(param_1 + 0x80);
        }
        uVar17 = FUN_010dca00(param_1,uVar2,uVar7 - uVar10,uVar3,iVar14);
      }
      goto LAB_010dc218;
    }
    if (uVar4 != 3) {
      if ((uVar4 ^ 0xffefd800) < 0xffef0800) {
        uVar4 = 0xfffd;
      }
      uVar17 = (ulonglong)uVar4;
      goto LAB_010dc218;
    }
    local_30 = 0x633;
    local_34 = 0x648;
    local_38 = 0x20;
    local_4c = 0x20;
    local_60 = 0x20;
    local_28 = 0x645;
    local_64 = 0x649;
    local_40 = 0x64a;
    local_2c = 0x644;
    local_3c = 0x647;
    local_50 = 0x647;
    local_44 = 0x644;
    local_54 = 0x644;
    local_58 = 0x644;
    local_68 = (undefined1 *)0x644;
    local_48 = 0x639;
    local_5c = 0x627;
    FUN_010da4e0(param_1,&local_68);
    local_70 = 0x635;
    uVar3 = 0x11;
  }
  uVar17 = CONCAT44(uVar3,local_70);
LAB_010dc218:
  local_6c = (uint)(uVar17 >> 0x20);
  local_70 = (uint)uVar17;
  puVar15 = (uint *)(param_1 + 4);
  puVar11 = (uint *)(param_1 + 0x48);
LAB_010dc254:
  local_68 = *(undefined1 **)(param_1 + 0x4c);
  local_64 = *(uint *)(param_1 + 0x50);
  local_60 = *(undefined4 *)(param_1 + 0x54);
  *(undefined1 **)(param_1 + 0x4c) = &DAT_00110000;
  if ((local_68 == &DAT_00110000) && (FUN_010dc890(&local_68,param_1), local_68 == &DAT_00110000))
  goto LAB_010dc578;
  uVar2 = local_64;
  puVar1 = local_68;
  puVar9 = puVar15;
  if ((local_64 & 0xffffff00) == 0xd800) {
    uVar4 = *puVar11;
    if (uVar4 < 0x12) {
      puVar9 = puVar11;
      uVar7 = uVar4;
      puVar8 = puVar15;
      if (uVar4 == 0x11) {
LAB_010dc2c0:
        FUN_010d9b58(param_1);
        uVar7 = *(uint *)(param_1 + 4);
        puVar8 = *(uint **)(param_1 + 8);
        puVar9 = puVar15;
      }
    }
    else {
      uVar7 = *(uint *)(param_1 + 4);
      puVar8 = *(uint **)(param_1 + 8);
      if (uVar7 == uVar4) goto LAB_010dc2c0;
    }
    puVar8[uVar7] = (uint)puVar1 | uVar2 << 0x18;
  }
  else {
    if (local_64 != 2) {
      *(undefined1 **)(param_1 + 0x4c) = local_68;
      *(uint *)(param_1 + 0x50) = local_64;
      *(undefined4 *)(param_1 + 0x54) = local_60;
LAB_010dc578:
      uVar2 = *puVar11;
      if (0x11 < uVar2) {
        uVar2 = *(uint *)(param_1 + 4);
        puVar15 = *(uint **)(param_1 + 8);
      }
      if (uVar2 < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(local_6c,uVar2,uVar2,&DAT_01885828);
      }
      uVar4 = uVar2 - local_6c;
      if (1 < uVar4) {
        puVar8 = puVar15 + local_6c;
        puVar9 = *(uint **)(param_1 + 0x60);
        iVar14 = uVar4 * 4;
        puVar11 = puVar8;
        do {
          uVar7 = *puVar11;
          if (0xfeffffff < uVar7) {
            uVar10 = uVar7 & 0xffffff;
            uVar6 = 0xffff;
            if ((char)puVar9[0xb] != '\0') {
              uVar6 = 0xfff;
            }
            if (uVar6 < uVar10) {
              if (uVar10 < 0x110000) {
                if (uVar10 < puVar9[7]) {
                  uVar7 = FUN_010d3304(puVar9,uVar10);
                }
                else {
                  uVar7 = puVar9[5] - 2;
                }
              }
              else {
LAB_010dc5bc:
                uVar7 = puVar9[5] - 1;
              }
            }
            else {
              if (puVar9[2] <= uVar10 >> 6) goto LAB_010dc5bc;
              uVar7 = (uVar7 & 0x3f) + (uint)*(ushort *)(puVar9[1] + (uVar10 >> 6) * 2);
            }
            puVar5 = puVar9;
            if (uVar7 < puVar9[5]) {
              puVar5 = (uint *)(puVar9[4] + uVar7 * 4);
            }
            if ((*puVar5 & 0xffffff00) == 0xd800) {
              uVar10 = uVar10 | *puVar5 << 0x18;
            }
            *puVar11 = uVar10;
          }
          puVar11 = puVar11 + 1;
          iVar14 = iVar14 + -4;
        } while (iVar14 != 0);
        if (0x14 < uVar4) {
          FUN_010d3d58(puVar8,uVar4);
          return local_70;
        }
        puVar11 = puVar8 + 1;
        iVar14 = 0;
        do {
          uVar7 = *puVar11;
          uVar6 = puVar11[-1];
          uVar4 = uVar7 >> 0x18;
          if (uVar4 < uVar6 >> 0x18) {
            iVar12 = 0;
            do {
              *(uint *)((int)puVar11 + iVar12) = uVar6;
              if (iVar14 == iVar12) {
                puVar9 = puVar8;
                goto LAB_010dc690;
              }
              iVar13 = iVar12 + -4;
              uVar6 = *(uint *)((int)puVar11 + iVar12 + -8);
              iVar12 = iVar13;
            } while (uVar4 < uVar6 >> 0x18);
            puVar9 = (uint *)((int)puVar11 + iVar13);
LAB_010dc690:
            *puVar9 = uVar7;
          }
          puVar11 = puVar11 + 1;
          iVar14 = iVar14 + -4;
        } while (puVar11 != puVar15 + uVar2);
      }
      return local_70;
    }
    puVar8 = puVar15;
    puVar5 = puVar15;
    if ((int)local_68 < 0xf73) {
      uVar2 = 0xff00fffd;
      switch(local_68) {
      case (undefined1 *)0x340:
        uVar2 = 0xe6000300;
        uVar4 = *puVar11;
        goto joined_r0x010dc4e0;
      case (undefined1 *)0x341:
        uVar2 = 0xe6000301;
        uVar4 = *puVar11;
        break;
      default:
switchD_010dc304_caseD_342:
        uVar4 = *puVar11;
        break;
      case (undefined1 *)0x343:
        uVar2 = 0xe6000313;
        uVar4 = *puVar11;
        break;
      case (undefined1 *)0x344:
        uVar2 = *puVar11;
        if (uVar2 < 0x12) {
          uVar7 = 0x11;
          uVar4 = uVar2;
          puVar5 = puVar11;
        }
        else {
          uVar4 = *(uint *)(param_1 + 4);
          puVar8 = *(uint **)(param_1 + 8);
          uVar7 = uVar2;
        }
        if (uVar4 == uVar7) {
          FUN_010d9b58(param_1);
          uVar4 = *(uint *)(param_1 + 4);
          puVar8 = *(uint **)(param_1 + 8);
          puVar5 = puVar15;
        }
        uVar2 = 0xe6000301;
        uVar7 = 0xe6000308;
        goto LAB_010dc4c8;
      }
      if (uVar4 < 0x12) goto LAB_010dc4e4;
LAB_010dc494:
      uVar7 = uVar4;
      uVar4 = *(uint *)(param_1 + 4);
      puVar8 = *(uint **)(param_1 + 8);
    }
    else {
      if (local_68 == (undefined1 *)0xf73) {
        uVar2 = *puVar11;
        if (uVar2 < 0x12) {
          uVar7 = 0x11;
          uVar4 = uVar2;
          puVar5 = puVar11;
        }
        else {
          uVar4 = *(uint *)(param_1 + 4);
          puVar8 = *(uint **)(param_1 + 8);
          uVar7 = uVar2;
        }
        if (uVar4 == uVar7) {
          FUN_010d9b58(param_1);
          uVar4 = *(uint *)(param_1 + 4);
          puVar8 = *(uint **)(param_1 + 8);
          puVar5 = puVar15;
        }
        uVar7 = 0x81000f71;
        uVar2 = 0x82000f72;
      }
      else {
        if (local_68 != (undefined1 *)0xf75) {
          uVar2 = 0xff00fffd;
          if (local_68 == (undefined1 *)0xf81) {
            uVar2 = *puVar11;
            if (uVar2 < 0x12) {
              uVar7 = 0x11;
              uVar4 = uVar2;
              puVar5 = puVar11;
            }
            else {
              uVar4 = *(uint *)(param_1 + 4);
              puVar8 = *(uint **)(param_1 + 8);
              uVar7 = uVar2;
            }
            if (uVar4 == uVar7) {
              FUN_010d9b58(param_1);
              uVar4 = *(uint *)(param_1 + 4);
              puVar8 = *(uint **)(param_1 + 8);
              puVar5 = puVar15;
            }
            puVar8[uVar4] = 0x81000f71;
            *puVar5 = *puVar5 + 1;
            uVar2 = 0x82000f80;
          }
          goto switchD_010dc304_caseD_342;
        }
        uVar2 = *puVar11;
        if (uVar2 < 0x12) {
          uVar7 = 0x11;
          uVar4 = uVar2;
          puVar5 = puVar11;
        }
        else {
          uVar4 = *(uint *)(param_1 + 4);
          puVar8 = *(uint **)(param_1 + 8);
          uVar7 = uVar2;
        }
        if (uVar4 == uVar7) {
          FUN_010d9b58(param_1);
          uVar4 = *(uint *)(param_1 + 4);
          puVar8 = *(uint **)(param_1 + 8);
          puVar5 = puVar15;
        }
        uVar7 = 0x81000f71;
        uVar2 = 0x84000f74;
      }
LAB_010dc4c8:
      puVar8[uVar4] = uVar7;
      *puVar5 = *puVar5 + 1;
      uVar4 = *puVar11;
joined_r0x010dc4e0:
      if (0x11 < uVar4) goto LAB_010dc494;
LAB_010dc4e4:
      uVar7 = 0x11;
      puVar9 = puVar11;
      puVar8 = puVar15;
    }
    if (uVar4 == uVar7) {
      FUN_010d9b58(param_1);
      uVar4 = *(uint *)(param_1 + 4);
      puVar8 = *(uint **)(param_1 + 8);
      puVar9 = puVar15;
    }
    puVar8[uVar4] = uVar2;
  }
  *puVar9 = *puVar9 + 1;
  goto LAB_010dc254;
}

