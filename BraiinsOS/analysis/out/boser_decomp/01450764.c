// FUN_01450764 @ 01450764 size=1824 calls_out=9 calls_in=1
// strings: 

undefined4 FUN_01450764(int param_1,uint param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 *puVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  bool bVar18;
  ulonglong uVar19;
  undefined4 local_b8;
  uint local_b4;
  undefined1 auStack_b0 [72];
  undefined1 *local_68;
  uint local_64;
  undefined4 uStack_60;
  
  uVar2 = param_2 - 0xac00;
  if (uVar2 < 0x2ba4) {
    uVar6 = (short)((uVar2 & 0xffff) >> 2) * 0x4925;
    local_b4 = (uVar2 & 0xffff) / 0x24c;
    puVar13 = (uint *)(param_1 + 0x48);
    uVar7 = *puVar13;
    if (uVar7 < 0x12) {
      iVar4 = param_1 + 4;
      uVar16 = 0x11;
      puVar17 = puVar13;
    }
    else {
      iVar4 = *(int *)(param_1 + 8);
      puVar17 = (uint *)(param_1 + 4);
      uVar16 = uVar7;
      uVar7 = *(uint *)(param_1 + 4);
    }
    uVar6 = uVar2 + ((uVar6 >> 0x11) * 8 - (uVar6 >> 0x11)) * -4;
    if (uVar7 == uVar16) {
      FUN_01448a38(param_1);
      puVar17 = (uint *)(param_1 + 4);
      uVar7 = *puVar17;
      iVar4 = *(int *)(param_1 + 8);
    }
    *(uint *)(iVar4 + uVar7 * 4) =
         ((uint)((short)((uVar2 + local_b4 * -0x24c & 0xffff) >> 2) * 0x4925) >> 0x11) + 0x1161;
    *puVar17 = *puVar17 + 1;
    local_b4 = local_b4 | 0x1100;
    if ((uVar6 & 0xffff) == 0) {
      uVar3 = 1;
    }
    else {
      uVar2 = *puVar13;
      if (uVar2 < 0x12) {
        iVar4 = param_1 + 4;
        uVar16 = 0x11;
        uVar7 = uVar2;
      }
      else {
        puVar13 = (uint *)(param_1 + 4);
        iVar4 = *(int *)(param_1 + 8);
        uVar7 = *puVar13;
        uVar16 = uVar2;
      }
      if (uVar7 == uVar16) {
        FUN_01448a38(param_1);
        puVar13 = (uint *)(param_1 + 4);
        uVar7 = *puVar13;
        iVar4 = *(int *)(param_1 + 8);
      }
      *(uint *)(iVar4 + uVar7 * 4) = uVar6 + 0x11a7 & 0xffff;
      *puVar13 = *puVar13 + 1;
      uVar3 = 2;
    }
  }
  else if (param_3 < 2) {
    uVar3 = 0;
    local_b4 = param_2;
  }
  else {
    uVar6 = param_3 & 0xffff;
    bVar18 = param_3 == 0x10000;
    uVar2 = param_3 >> 0x10;
    if (0xffff < param_3) {
      bVar18 = uVar6 == 1;
    }
    if ((0xffff < param_3 && uVar6 != 0) && !bVar18) {
      uVar7 = 0xff00fffd;
      if (0xffef07ff < (uVar2 ^ 0xffefd800)) {
        uVar7 = uVar2 | 0xff000000;
      }
      puVar13 = (uint *)(param_1 + 0x48);
      uVar2 = *puVar13;
      if ((uVar6 ^ 0xffefd800) < 0xffef0800) {
        uVar6 = 0xfffd;
      }
      uVar19 = (ulonglong)uVar6;
      if (uVar2 < 0x12) {
        iVar4 = param_1 + 4;
        uVar16 = 0x11;
        uVar6 = uVar2;
      }
      else {
        puVar13 = (uint *)(param_1 + 4);
        iVar4 = *(int *)(param_1 + 8);
        uVar6 = *puVar13;
        uVar16 = uVar2;
      }
      if (uVar6 == uVar16) {
        FUN_01448a38(param_1);
        puVar13 = (uint *)(param_1 + 4);
        uVar6 = *puVar13;
        iVar4 = *(int *)(param_1 + 8);
      }
      *(uint *)(iVar4 + uVar6 * 4) = uVar7;
      *puVar13 = *puVar13 + 1;
      goto LAB_01450918;
    }
    if (uVar6 < 2) {
      uVar6 = *(uint *)(param_1 + 0x68);
      uVar7 = uVar2 & 0xfff;
      if (uVar7 < uVar6) {
        uVar3 = *(undefined4 *)(param_1 + 100);
LAB_01450d7c:
        uVar19 = FUN_01450ea0(param_1,uVar2,uVar7,uVar3,uVar6);
      }
      else {
        iVar4 = *(int *)(param_1 + 0x70);
        uVar16 = iVar4 + uVar6;
        if (uVar7 < uVar16) {
          uVar3 = *(undefined4 *)(param_1 + 0x6c);
          uVar12 = uVar6;
        }
        else {
          uVar6 = *(uint *)(param_1 + 0x78);
          uVar12 = uVar6 + uVar16;
          if (uVar7 < uVar12) {
            uVar3 = *(undefined4 *)(param_1 + 0x74);
            uVar7 = uVar7 - uVar16;
            goto LAB_01450d7c;
          }
          uVar3 = *(undefined4 *)(param_1 + 0x7c);
          iVar4 = *(int *)(param_1 + 0x80);
        }
        uVar19 = FUN_01447dac(param_1,uVar2,uVar7 - uVar12,uVar3,iVar4);
      }
      goto LAB_01450918;
    }
    iVar4 = 0;
    if (uVar6 != 3) {
      if ((uVar6 ^ 0xffefd800) < 0xffef0800) {
        uVar6 = 0xfffd;
      }
      uVar19 = (ulonglong)uVar6;
      goto LAB_01450918;
    }
    do {
      *(uint *)((int)&local_68 + iVar4 * 2) = (uint)*(ushort *)((int)&DAT_0049e0ce + iVar4);
      iVar4 = iVar4 + 2;
    } while (iVar4 != 0x22);
    FUN_01bed4e2(auStack_b0,&local_68,0x44);
    FUN_01448d9c(param_1,auStack_b0);
    local_b4 = 0x635;
    uVar3 = 0x11;
  }
  uVar19 = CONCAT44(uVar3,local_b4);
LAB_01450918:
  local_b8 = (undefined4)(uVar19 >> 0x20);
  local_b4 = (uint)uVar19;
  puVar17 = (uint *)(param_1 + 4);
  puVar13 = (uint *)(param_1 + 0x48);
  puVar14 = (undefined4 *)(param_1 + 0x4c);
  do {
    local_68 = (undefined1 *)*puVar14;
    local_64 = *(uint *)(param_1 + 0x50);
    uStack_60 = *(undefined4 *)(param_1 + 0x54);
    *puVar14 = &DAT_00110000;
    if ((local_68 == &DAT_00110000) && (FUN_014511f0(&local_68,param_1), local_68 == &DAT_00110000))
    goto LAB_01450c48;
    uVar2 = local_64;
    puVar1 = local_68;
    puVar5 = puVar17;
    if ((local_64 & 0xffffff00) == 0xd800) {
      uVar6 = *puVar13;
      if (uVar6 < 0x12) {
        uVar7 = 0x11;
        puVar5 = puVar13;
        puVar11 = puVar17;
      }
      else {
        uVar7 = uVar6;
        uVar6 = *(uint *)(param_1 + 4);
        puVar11 = *(uint **)(param_1 + 8);
      }
      if (uVar6 == uVar7) {
        FUN_01448a38(param_1);
        uVar6 = *(uint *)(param_1 + 4);
        puVar11 = *(uint **)(param_1 + 8);
        puVar5 = puVar17;
      }
      puVar11[uVar6] = (uint)puVar1 | uVar2 << 0x18;
    }
    else {
      if (local_64 != 2) {
        *puVar14 = local_68;
        *(uint *)(param_1 + 0x50) = local_64;
        *(undefined4 *)(param_1 + 0x54) = uStack_60;
LAB_01450c48:
        uVar19 = FUN_01448f94(param_1,local_b8,&DAT_01cf930c);
        iVar4 = (int)(uVar19 >> 0x20);
        puVar13 = (uint *)uVar19;
        if (0x1ffffffff < uVar19) {
          uVar3 = *(undefined4 *)(param_1 + 0x60);
          iVar15 = 0;
          do {
            FUN_01447554((int)puVar13 + iVar15,uVar3);
            iVar15 = iVar15 + 4;
          } while (iVar4 * 4 != iVar15);
          if (uVar19 < 0x1500000000) {
            puVar5 = puVar13 + 1;
            iVar15 = 0;
            puVar17 = puVar5;
            do {
              uVar6 = *puVar17;
              uVar7 = puVar17[-1];
              uVar2 = uVar6 >> 0x18;
              if (uVar2 < uVar7 >> 0x18) {
                iVar9 = iVar15;
                do {
                  *(uint *)((int)puVar5 + iVar9) = uVar7;
                  if (iVar9 == 0) {
                    puVar11 = puVar13;
                    goto LAB_01450cec;
                  }
                  iVar10 = iVar9 + -4;
                  uVar7 = *(uint *)((int)puVar5 + iVar9 + -8);
                  iVar9 = iVar10;
                } while (uVar2 < uVar7 >> 0x18);
                puVar11 = (uint *)((int)puVar5 + iVar10);
LAB_01450cec:
                *puVar11 = uVar6;
              }
              puVar17 = puVar17 + 1;
              iVar15 = iVar15 + 4;
            } while (puVar17 != puVar13 + iVar4);
          }
          else {
            FUN_014482f0(puVar13,iVar4);
          }
        }
        return local_b4;
      }
      puVar11 = puVar17;
      if ((int)local_68 < 0xf73) {
        uVar2 = 0xff00fffd;
        switch(local_68) {
        case (undefined1 *)0x340:
          uVar2 = 0xe6000300;
          break;
        case (undefined1 *)0x341:
          uVar2 = 0xe6000301;
          break;
        case (undefined1 *)0x343:
          uVar2 = 0xe6000313;
          break;
        case (undefined1 *)0x344:
          uVar2 = *puVar13;
          if (uVar2 < 0x12) {
            uVar7 = 0x11;
            uVar6 = uVar2;
            puVar8 = puVar17;
            puVar11 = puVar13;
          }
          else {
            uVar6 = *(uint *)(param_1 + 4);
            puVar8 = *(uint **)(param_1 + 8);
            uVar7 = uVar2;
          }
          if (uVar6 == uVar7) {
            FUN_01448a38(param_1);
            uVar6 = *(uint *)(param_1 + 4);
            puVar8 = *(uint **)(param_1 + 8);
            puVar11 = puVar17;
          }
          puVar8[uVar6] = 0xe6000308;
          uVar2 = 0xe6000301;
          goto LAB_01450b78;
        }
      }
      else {
        puVar8 = puVar17;
        if (local_68 == (undefined1 *)0xf73) {
          uVar2 = *puVar13;
          if (uVar2 < 0x12) {
            uVar7 = 0x11;
            uVar6 = uVar2;
            puVar11 = puVar13;
          }
          else {
            uVar6 = *(uint *)(param_1 + 4);
            puVar8 = *(uint **)(param_1 + 8);
            uVar7 = uVar2;
          }
          if (uVar6 == uVar7) {
            FUN_01448a38(param_1);
            uVar6 = *(uint *)(param_1 + 4);
            puVar8 = *(uint **)(param_1 + 8);
            puVar11 = puVar17;
          }
          uVar2 = 0x82000f72;
        }
        else {
          if (local_68 != (undefined1 *)0xf75) {
            uVar2 = 0xff00fffd;
            if (local_68 == (undefined1 *)0xf81) {
              uVar2 = *puVar13;
              if (uVar2 < 0x12) {
                uVar7 = 0x11;
                uVar6 = uVar2;
                puVar8 = puVar13;
              }
              else {
                uVar6 = *(uint *)(param_1 + 4);
                puVar11 = *(uint **)(param_1 + 8);
                uVar7 = uVar2;
              }
              if (uVar6 == uVar7) {
                FUN_01448a38(param_1);
                uVar6 = *(uint *)(param_1 + 4);
                puVar11 = *(uint **)(param_1 + 8);
                puVar8 = puVar17;
              }
              puVar11[uVar6] = 0x81000f71;
              *puVar8 = *puVar8 + 1;
              uVar2 = 0x82000f80;
            }
            goto switchD_014509bc_caseD_342;
          }
          uVar2 = *puVar13;
          if (uVar2 < 0x12) {
            uVar7 = 0x11;
            uVar6 = uVar2;
            puVar11 = puVar13;
          }
          else {
            uVar6 = *(uint *)(param_1 + 4);
            puVar8 = *(uint **)(param_1 + 8);
            uVar7 = uVar2;
          }
          if (uVar6 == uVar7) {
            FUN_01448a38(param_1);
            uVar6 = *(uint *)(param_1 + 4);
            puVar8 = *(uint **)(param_1 + 8);
            puVar11 = puVar17;
          }
          uVar2 = 0x84000f74;
        }
        puVar8[uVar6] = 0x81000f71;
LAB_01450b78:
        *puVar11 = *puVar11 + 1;
      }
switchD_014509bc_caseD_342:
      uVar6 = *puVar13;
      if (uVar6 < 0x12) {
        uVar7 = 0x11;
        puVar5 = puVar13;
        puVar11 = puVar17;
      }
      else {
        uVar7 = uVar6;
        uVar6 = *(uint *)(param_1 + 4);
        puVar11 = *(uint **)(param_1 + 8);
      }
      if (uVar6 == uVar7) {
        FUN_01448a38(param_1);
        uVar6 = *(uint *)(param_1 + 4);
        puVar11 = *(uint **)(param_1 + 8);
        puVar5 = puVar17;
      }
      puVar11[uVar6] = uVar2;
    }
    *puVar5 = *puVar5 + 1;
  } while( true );
}

