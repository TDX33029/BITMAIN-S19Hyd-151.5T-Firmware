// FUN_01b95884 @ 01b95884 size=12400 calls_out=4 calls_in=1
// strings: 

int FUN_01b95884(int param_1,int *param_2,uint *param_3,uint *param_4,int param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  byte *pbVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  uint *puVar18;
  undefined4 *puVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined4 uVar30;
  byte *pbVar31;
  uint uVar32;
  bool bVar33;
  int local_70;
  uint *local_6c;
  uint *local_64;
  uint *local_60;
  uint *local_5c;
  uint *local_58;
  uint local_50;
  uint local_3c;
  uint local_38;
  uint *local_34;
  
  iVar9 = *(int *)(param_1 + 0x5c);
  iVar10 = *(int *)(param_1 + 0xc0);
  iVar11 = *(int *)(param_1 + 4);
  uVar30 = *(undefined4 *)(param_1 + 0xb8);
  uVar27 = *(uint *)(param_1 + 0xcc);
  iVar24 = *(int *)(param_1 + 200);
  uVar2 = FUN_01b951dc(param_1,(byte *)((int)param_4 + (param_5 - iVar11)),uVar30);
  puVar12 = (uint *)(iVar11 + uVar2);
  pbVar13 = (byte *)((int)param_4 + param_5);
  puVar14 = (uint *)(pbVar13 + -8);
  uVar15 = *param_3;
  puVar20 = param_4;
  if (param_4 == puVar12) {
    puVar20 = (uint *)((int)param_4 + 1);
  }
  local_38 = param_3[1];
  iVar3 = FUN_01b951dc(param_1,(int)puVar20 - iVar11,uVar30);
  uVar4 = ((int)puVar20 - iVar11) - iVar3;
  local_50 = local_38;
  local_3c = uVar15;
  if (uVar27 < 2) {
    local_5c = (uint *)local_38;
    if (iVar24 == 6) {
      if (uVar4 < local_38) {
        local_5c = (uint *)0x0;
      }
      else {
        local_38 = 0;
      }
      if (uVar4 < uVar15) {
        uVar15 = 0;
        local_34 = param_4;
      }
      else {
        local_3c = 0;
        local_34 = param_4;
      }
LAB_01b97cec:
      puVar21 = local_5c;
      bVar33 = uVar15 != 0;
      if ((uint *)((int)puVar20 + 3) < puVar14) {
        local_64 = puVar20 + 0x20;
        iVar24 = -iVar10;
        uVar26 = iVar24 + 0x40;
        lVar1 = (ulonglong)*puVar20 * 0xbf9b0000;
        uVar27 = puVar20[1] * -0x40650000 + *puVar20 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20)
        ;
        uVar4 = iVar10 - 0x20;
        uVar28 = 0x20 - iVar10;
        uVar16 = (uint)lVar1 >> (uVar26 & 0xff) | uVar27 << (uVar4 & 0xff) |
                 uVar27 >> (uVar28 & 0xff);
        lVar1 = (ulonglong)*(uint *)((int)puVar20 + 1) * 0xbf9b0000;
        uVar27 = *(int *)((int)puVar20 + 5) * -0x40650000 +
                 *(uint *)((int)puVar20 + 1) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        uVar32 = (uint)lVar1 >> (uVar26 & 0xff) | uVar27 << (uVar4 & 0xff) |
                 uVar27 >> (uVar28 & 0xff);
        uVar27 = *(uint *)(iVar9 + uVar16 * 4);
        local_58 = (uint *)0x2;
        puVar18 = (uint *)((int)puVar20 + 2);
        puVar22 = (uint *)((int)puVar20 + 3);
        puVar8 = (uint *)((int)puVar20 + 1);
        while( true ) {
          puVar5 = puVar22;
          puVar23 = puVar18;
          puVar18 = (uint *)((int)puVar23 - uVar15);
          uVar25 = *puVar18;
          iVar3 = (int)puVar20 - iVar11;
          *(int *)(iVar9 + uVar16 * 4) = iVar3;
          if (*puVar23 == uVar25 && bVar33) break;
          if (uVar27 < uVar2) {
            uVar16 = *puVar20 ^ 1;
          }
          else {
            uVar16 = *(uint *)(iVar11 + uVar27);
          }
          local_6c = (uint *)((int)puVar8 - iVar11);
          if (uVar16 == *puVar20) {
            *(uint **)(iVar9 + uVar32 * 4) = local_6c;
            puVar8 = puVar20;
            local_6c = (uint *)iVar3;
LAB_01b98088:
            puVar22 = (uint *)(iVar11 + uVar27);
            uVar27 = (int)puVar8 - (int)puVar22;
            local_5c = (uint *)(uVar27 + 3);
            puVar20 = puVar22;
            goto LAB_01b980a0;
          }
          uVar27 = *(uint *)(iVar9 + uVar32 * 4);
          lVar1 = (ulonglong)*puVar23 * 0xbf9b0000;
          uVar16 = puVar23[1] * -0x40650000 + *puVar23 * -0x30e44324 +
                   (int)((ulonglong)lVar1 >> 0x20);
          uVar16 = (uint)lVar1 >> (uVar26 & 0xff) | uVar16 << (uVar4 & 0xff) |
                   uVar16 >> (uVar28 & 0xff);
          *(uint **)(iVar9 + uVar32 * 4) = local_6c;
          if (uVar27 < uVar2) {
            uVar32 = *puVar8 ^ 1;
          }
          else {
            uVar32 = *(uint *)(iVar11 + uVar27);
          }
          if (uVar32 == *puVar8) {
            if (local_58 < 5) {
              *(int *)(iVar9 + uVar16 * 4) = (int)puVar23 - iVar11;
            }
            goto LAB_01b98088;
          }
          uVar27 = *(uint *)(iVar9 + uVar16 * 4);
          lVar1 = (ulonglong)*puVar5 * 0xbf9b0000;
          uVar32 = puVar5[1] * -0x40650000 + *puVar5 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20)
          ;
          uVar32 = (uint)lVar1 >> (uVar26 & 0xff) | uVar32 << (uVar4 & 0xff) |
                   uVar32 >> (uVar28 & 0xff);
          puVar18 = (uint *)((int)puVar23 + (int)local_58);
          puVar22 = (uint *)((int)puVar5 + (int)local_58);
          if (local_64 <= puVar18) {
            HintPreloadData(puVar5 + 0x10);
            local_58 = (uint *)((int)local_58 + 1);
            HintPreloadData(puVar5 + 0x20);
            local_64 = local_64 + 0x20;
          }
          if (puVar14 <= puVar22) goto LAB_01b97d08;
          puVar20 = puVar23;
          puVar8 = puVar5;
        }
        uVar27 = (uint)(*(byte *)((int)puVar23 + -1) == *(byte *)((int)puVar18 + -1));
        puVar23 = (uint *)((int)puVar23 - uVar27);
        puVar18 = (uint *)((int)puVar18 - uVar27);
        pbVar31 = (byte *)(uVar27 + 4);
        *(int *)(iVar9 + uVar32 * 4) = (int)puVar8 - iVar11;
        local_5c = (uint *)0x1;
        uVar27 = uVar15;
        local_6c = (uint *)iVar3;
        goto LAB_01b97e64;
      }
      goto LAB_01b97d08;
    }
    if (iVar24 != 7) {
      if (iVar24 != 5) {
        if (uVar4 < local_38) {
          local_50 = 0;
        }
        else {
          local_38 = 0;
        }
        if (uVar4 < uVar15) {
          uVar15 = 0;
        }
        else {
          local_3c = 0;
        }
        uVar27 = 0x20 - iVar10;
        local_34 = param_4;
LAB_01b971f0:
        bVar33 = uVar15 != 0;
        if ((uint *)((int)puVar20 + 3) < puVar14) {
          local_58 = puVar20 + 0x20;
          uVar28 = 2;
          uVar4 = *puVar20 * -0x61c8864f >> (uVar27 & 0xff);
          uVar26 = (uint)(*(int *)((int)puVar20 + 1) * -0x61c8864f) >> (uVar27 & 0xff);
          uVar32 = *(uint *)(iVar9 + uVar4 * 4);
          puVar21 = (uint *)((int)puVar20 + 2);
          puVar8 = (uint *)((int)puVar20 + 3);
          puVar18 = (uint *)((int)puVar20 + 1);
          while( true ) {
            puVar23 = puVar8;
            puVar22 = puVar21;
            puVar21 = (uint *)((int)puVar22 - uVar15);
            uVar16 = *puVar21;
            iVar10 = (int)puVar20 - iVar11;
            *(int *)(iVar9 + uVar4 * 4) = iVar10;
            if (uVar16 == *puVar22 && bVar33) break;
            if (uVar32 < uVar2) {
              uVar4 = *puVar20 ^ 1;
            }
            else {
              uVar4 = *(uint *)(iVar11 + uVar32);
            }
            local_5c = (uint *)((int)puVar18 - iVar11);
            if (uVar4 == *puVar20) {
              *(uint **)(iVar9 + uVar26 * 4) = local_5c;
              puVar18 = puVar20;
              local_5c = (uint *)iVar10;
LAB_01b974b8:
              puVar8 = (uint *)(iVar11 + uVar32);
              uVar4 = (int)puVar18 - (int)puVar8;
              local_58 = (uint *)(uVar4 + 3);
              puVar20 = puVar8;
              goto LAB_01b974d0;
            }
            uVar32 = *(uint *)(iVar9 + uVar26 * 4);
            uVar4 = *puVar22 * -0x61c8864f >> (uVar27 & 0xff);
            *(uint **)(iVar9 + uVar26 * 4) = local_5c;
            if (uVar32 < uVar2) {
              uVar26 = *puVar18 ^ 1;
            }
            else {
              uVar26 = *(uint *)(iVar11 + uVar32);
            }
            if (uVar26 == *puVar18) {
              if (uVar28 < 5) {
                *(int *)(iVar9 + uVar4 * 4) = (int)puVar22 - iVar11;
              }
              goto LAB_01b974b8;
            }
            puVar21 = (uint *)((int)puVar22 + uVar28);
            uVar32 = *(uint *)(iVar9 + uVar4 * 4);
            uVar26 = *puVar23 * -0x61c8864f >> (uVar27 & 0xff);
            puVar8 = (uint *)((int)puVar23 + uVar28);
            if (local_58 <= puVar21) {
              uVar28 = uVar28 + 1;
              HintPreloadData(puVar23 + 0x10);
              HintPreloadData(puVar23 + 0x20);
              local_58 = local_58 + 0x20;
            }
            if (puVar14 <= puVar8) goto LAB_01b959e4;
            puVar20 = puVar22;
            puVar18 = puVar23;
          }
          uVar4 = (uint)(*(byte *)((int)puVar22 + -1) == *(byte *)((int)puVar21 + -1));
          puVar22 = (uint *)((int)puVar22 - uVar4);
          puVar21 = (uint *)((int)puVar21 - uVar4);
          pbVar31 = (byte *)(uVar4 + 4);
          *(int *)(iVar9 + uVar26 * 4) = (int)puVar18 - iVar11;
          local_58 = (uint *)0x1;
          uVar4 = uVar15;
          local_5c = (uint *)iVar10;
          goto LAB_01b972d4;
        }
        goto LAB_01b959e4;
      }
      if (uVar4 < local_38) {
        local_50 = 0;
      }
      else {
        local_38 = 0;
      }
      if (uVar4 < uVar15) {
        uVar15 = 0;
      }
      else {
        local_3c = 0;
      }
      iVar10 = -iVar10;
      uVar27 = iVar10 + 0x40;
      local_34 = param_4;
LAB_01b976e8:
      bVar33 = uVar15 != 0;
      if ((uint *)((int)puVar20 + 3) < puVar14) {
        local_60 = puVar20 + 0x20;
        lVar1 = (ulonglong)*puVar20 * 0xbb000000;
        uVar4 = puVar20[1] * -0x45000000 + *puVar20 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        uVar26 = 0x20 - uVar27;
        uVar32 = iVar10 + 0x20;
        uVar25 = (uint)lVar1 >> (uVar27 & 0xff) | uVar4 << (uVar26 & 0xff) |
                 uVar4 >> (uVar32 & 0xff);
        uVar16 = 2;
        lVar1 = (ulonglong)*(uint *)((int)puVar20 + 1) * 0xbb000000;
        uVar4 = *(int *)((int)puVar20 + 5) * -0x45000000 + *(uint *)((int)puVar20 + 1) * -0x30e44324
                + (int)((ulonglong)lVar1 >> 0x20);
        uVar28 = (uint)lVar1 >> (uVar27 & 0xff) | uVar4 << (uVar26 & 0xff) |
                 uVar4 >> (uVar32 & 0xff);
        uVar4 = *(uint *)(iVar9 + uVar25 * 4);
        puVar21 = (uint *)((int)puVar20 + 2);
        puVar18 = (uint *)((int)puVar20 + 1);
        puVar8 = (uint *)((int)puVar20 + 3);
        while( true ) {
          puVar22 = puVar21;
          iVar24 = (int)puVar20 - iVar11;
          uVar29 = *(uint *)((int)puVar22 - uVar15);
          *(int *)(iVar9 + uVar25 * 4) = iVar24;
          if (*puVar22 == uVar29 && bVar33) break;
          if (uVar4 < uVar2) {
            uVar25 = *puVar20 ^ 1;
          }
          else {
            uVar25 = *(uint *)(iVar11 + uVar4);
          }
          local_64 = (uint *)((int)puVar18 - iVar11);
          if (uVar25 == *puVar20) {
            *(uint **)(iVar9 + uVar28 * 4) = local_64;
            puVar18 = puVar20;
            local_64 = (uint *)iVar24;
LAB_01b97a5c:
            puVar8 = (uint *)(iVar11 + uVar4);
            uVar4 = (int)puVar18 - (int)puVar8;
            local_58 = (uint *)(uVar4 + 3);
            puVar21 = puVar8;
            goto LAB_01b97a74;
          }
          uVar4 = *(uint *)(iVar9 + uVar28 * 4);
          lVar1 = (ulonglong)*puVar22 * 0xbb000000;
          uVar25 = puVar22[1] * -0x45000000 + *puVar22 * -0x30e44324 +
                   (int)((ulonglong)lVar1 >> 0x20);
          uVar25 = (uint)lVar1 >> (uVar27 & 0xff) | uVar25 << (uVar26 & 0xff) |
                   uVar25 >> (uVar32 & 0xff);
          *(uint **)(iVar9 + uVar28 * 4) = local_64;
          if (uVar4 < uVar2) {
            uVar28 = *puVar18 ^ 1;
          }
          else {
            uVar28 = *(uint *)(iVar11 + uVar4);
          }
          if (uVar28 == *puVar18) {
            if (uVar16 < 5) {
              *(int *)(iVar9 + uVar25 * 4) = (int)puVar22 - iVar11;
            }
            goto LAB_01b97a5c;
          }
          puVar21 = (uint *)((int)puVar22 + uVar16);
          uVar4 = *(uint *)(iVar9 + uVar25 * 4);
          lVar1 = (ulonglong)*puVar8 * 0xbb000000;
          uVar28 = puVar8[1] * -0x45000000 + *puVar8 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20)
          ;
          uVar28 = (uint)lVar1 >> (uVar27 & 0xff) | uVar28 << (uVar26 & 0xff) |
                   uVar28 >> (uVar32 & 0xff);
          puVar23 = (uint *)((int)puVar8 + uVar16);
          if (local_60 <= puVar21) {
            uVar16 = uVar16 + 1;
            HintPreloadData(puVar8 + 0x10);
            HintPreloadData(puVar8 + 0x20);
            local_60 = local_60 + 0x20;
          }
          if (puVar14 <= puVar23) goto LAB_01b95f50;
          puVar20 = puVar22;
          puVar18 = puVar8;
          puVar8 = puVar23;
        }
        uVar4 = (uint)(*(byte *)((int)puVar22 + -1) == *(byte *)((int)puVar22 + (-1 - uVar15)));
        puVar20 = (uint *)((int)puVar22 - uVar4);
        puVar22 = (uint *)((int)puVar22 + (-uVar4 - uVar15));
        pbVar31 = (byte *)(uVar4 + 4);
        *(int *)(iVar9 + uVar28 * 4) = (int)puVar18 - iVar11;
        local_58 = (uint *)0x1;
        uVar4 = uVar15;
        local_64 = (uint *)iVar24;
        goto LAB_01b97834;
      }
      goto LAB_01b95f50;
    }
    if (uVar4 < local_38) {
      local_5c = (uint *)0x0;
    }
    else {
      local_38 = 0;
    }
    if (uVar4 < uVar15) {
      uVar15 = 0;
      local_34 = param_4;
    }
    else {
      local_3c = 0;
      local_34 = param_4;
    }
LAB_01b9832c:
    puVar21 = local_5c;
    bVar33 = uVar15 != 0;
    if ((uint *)((int)puVar20 + 3) < puVar14) {
      local_64 = puVar20 + 0x20;
      iVar24 = -iVar10;
      uVar26 = iVar24 + 0x40;
      lVar1 = (ulonglong)*puVar20 * 0xbfa56300;
      uVar27 = puVar20[1] * -0x405a9d00 + *puVar20 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
      uVar4 = iVar10 - 0x20;
      uVar28 = 0x20 - iVar10;
      uVar16 = (uint)lVar1 >> (uVar26 & 0xff) | uVar27 << (uVar4 & 0xff) | uVar27 >> (uVar28 & 0xff)
      ;
      lVar1 = (ulonglong)*(uint *)((int)puVar20 + 1) * 0xbfa56300;
      uVar27 = *(int *)((int)puVar20 + 5) * -0x405a9d00 + *(uint *)((int)puVar20 + 1) * -0x30e44324
               + (int)((ulonglong)lVar1 >> 0x20);
      uVar32 = (uint)lVar1 >> (uVar26 & 0xff) | uVar27 << (uVar4 & 0xff) | uVar27 >> (uVar28 & 0xff)
      ;
      uVar27 = *(uint *)(iVar9 + uVar16 * 4);
      local_58 = (uint *)0x2;
      puVar18 = (uint *)((int)puVar20 + 2);
      puVar22 = (uint *)((int)puVar20 + 3);
      puVar8 = (uint *)((int)puVar20 + 1);
      while( true ) {
        puVar5 = puVar22;
        puVar23 = puVar18;
        puVar18 = (uint *)((int)puVar23 - uVar15);
        uVar25 = *puVar18;
        iVar3 = (int)puVar20 - iVar11;
        *(int *)(iVar9 + uVar16 * 4) = iVar3;
        if (*puVar23 == uVar25 && bVar33) break;
        if (uVar27 < uVar2) {
          uVar16 = *puVar20 ^ 1;
        }
        else {
          uVar16 = *(uint *)(iVar11 + uVar27);
        }
        local_6c = (uint *)((int)puVar8 - iVar11);
        if (uVar16 == *puVar20) {
          *(uint **)(iVar9 + uVar32 * 4) = local_6c;
          puVar8 = puVar20;
          local_6c = (uint *)iVar3;
LAB_01b98770:
          puVar22 = (uint *)(iVar11 + uVar27);
          uVar27 = (int)puVar8 - (int)puVar22;
          local_5c = (uint *)(uVar27 + 3);
          puVar20 = puVar22;
          goto LAB_01b98788;
        }
        uVar27 = *(uint *)(iVar9 + uVar32 * 4);
        lVar1 = (ulonglong)*puVar23 * 0xbfa56300;
        uVar16 = puVar23[1] * -0x405a9d00 + *puVar23 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20)
        ;
        uVar16 = (uint)lVar1 >> (uVar26 & 0xff) | uVar16 << (uVar4 & 0xff) |
                 uVar16 >> (uVar28 & 0xff);
        *(uint **)(iVar9 + uVar32 * 4) = local_6c;
        if (uVar27 < uVar2) {
          uVar32 = *puVar8 ^ 1;
        }
        else {
          uVar32 = *(uint *)(iVar11 + uVar27);
        }
        if (uVar32 == *puVar8) {
          if (local_58 < 5) {
            *(int *)(iVar9 + uVar16 * 4) = (int)puVar23 - iVar11;
          }
          goto LAB_01b98770;
        }
        uVar27 = *(uint *)(iVar9 + uVar16 * 4);
        lVar1 = (ulonglong)*puVar5 * 0xbfa56300;
        uVar32 = puVar5[1] * -0x405a9d00 + *puVar5 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        uVar32 = (uint)lVar1 >> (uVar26 & 0xff) | uVar32 << (uVar4 & 0xff) |
                 uVar32 >> (uVar28 & 0xff);
        puVar18 = (uint *)((int)puVar23 + (int)local_58);
        puVar22 = (uint *)((int)puVar5 + (int)local_58);
        if (local_64 <= puVar18) {
          HintPreloadData(puVar5 + 0x10);
          local_58 = (uint *)((int)local_58 + 1);
          HintPreloadData(puVar5 + 0x20);
          local_64 = local_64 + 0x20;
        }
        if (puVar14 <= puVar22) goto LAB_01b97d08;
        puVar20 = puVar23;
        puVar8 = puVar5;
      }
      uVar27 = (uint)(*(byte *)((int)puVar23 + -1) == *(byte *)((int)puVar18 + -1));
      puVar23 = (uint *)((int)puVar23 - uVar27);
      puVar18 = (uint *)((int)puVar18 - uVar27);
      pbVar31 = (byte *)(uVar27 + 4);
      *(int *)(iVar9 + uVar32 * 4) = (int)puVar8 - iVar11;
      local_5c = (uint *)0x1;
      uVar27 = uVar15;
      local_6c = (uint *)iVar3;
      goto LAB_01b9846c;
    }
LAB_01b97d08:
    if (local_3c == 0) {
      bVar33 = false;
    }
    if (bVar33) {
      local_38 = local_3c;
    }
    else if (uVar15 == 0) {
      uVar15 = local_3c;
    }
    local_50 = (uint)local_5c;
  }
  else {
    uVar27 = uVar27 + 1;
    local_60 = (uint *)local_38;
    if (iVar24 == 6) {
      if (uVar4 < local_38) {
        local_60 = (uint *)0x0;
      }
      else {
        local_38 = 0;
      }
      if (uVar4 < uVar15) {
        uVar15 = 0;
        local_34 = param_4;
      }
      else {
        local_3c = 0;
        local_34 = param_4;
      }
LAB_01b9655c:
      puVar21 = local_60;
      bVar33 = uVar15 != 0;
      puVar18 = (uint *)((int)((int)puVar20 + uVar27) + 1);
      if (puVar18 < puVar14) {
        local_6c = puVar20 + 0x20;
        iVar24 = -iVar10;
        uVar32 = iVar24 + 0x40;
        lVar1 = (ulonglong)*puVar20 * 0xbf9b0000;
        uVar4 = puVar20[1] * -0x40650000 + *puVar20 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        uVar26 = iVar10 - 0x20;
        uVar16 = 0x20 - iVar10;
        uVar25 = (uint)lVar1 >> (uVar32 & 0xff) | uVar4 << (uVar26 & 0xff) |
                 uVar4 >> (uVar16 & 0xff);
        lVar1 = (ulonglong)*(uint *)((int)puVar20 + 1) * 0xbf9b0000;
        uVar4 = *(int *)((int)puVar20 + 5) * -0x40650000 + *(uint *)((int)puVar20 + 1) * -0x30e44324
                + (int)((ulonglong)lVar1 >> 0x20);
        uVar28 = (uint)lVar1 >> (uVar32 & 0xff) | uVar4 << (uVar26 & 0xff) |
                 uVar4 >> (uVar16 & 0xff);
        uVar4 = *(uint *)(iVar9 + uVar25 * 4);
        puVar8 = (uint *)((int)puVar20 + uVar27);
        puVar22 = (uint *)((int)puVar20 + 1);
        local_5c = (uint *)uVar27;
        while( true ) {
          puVar23 = puVar8;
          puVar8 = (uint *)((int)puVar23 - uVar15);
          uVar29 = *puVar8;
          iVar3 = (int)puVar20 - iVar11;
          *(int *)(iVar9 + uVar25 * 4) = iVar3;
          if (*puVar23 == uVar29 && bVar33) break;
          if (uVar4 < uVar2) {
            uVar25 = *puVar20 ^ 1;
          }
          else {
            uVar25 = *(uint *)(iVar11 + uVar4);
          }
          local_70 = (int)puVar22 - iVar11;
          if (uVar25 == *puVar20) {
            *(int *)(iVar9 + uVar28 * 4) = local_70;
            puVar22 = puVar20;
            local_70 = iVar3;
LAB_01b969e8:
            puVar18 = (uint *)(iVar11 + uVar4);
            uVar4 = (int)puVar22 - (int)puVar18;
            local_60 = (uint *)(uVar4 + 3);
            puVar20 = puVar18;
            goto LAB_01b96a00;
          }
          uVar4 = *(uint *)(iVar9 + uVar28 * 4);
          lVar1 = (ulonglong)*puVar23 * 0xbf9b0000;
          uVar25 = puVar23[1] * -0x40650000 + *puVar23 * -0x30e44324 +
                   (int)((ulonglong)lVar1 >> 0x20);
          uVar25 = (uint)lVar1 >> (uVar32 & 0xff) | uVar25 << (uVar26 & 0xff) |
                   uVar25 >> (uVar16 & 0xff);
          *(int *)(iVar9 + uVar28 * 4) = local_70;
          if (uVar4 < uVar2) {
            uVar28 = *puVar22 ^ 1;
          }
          else {
            uVar28 = *(uint *)(iVar11 + uVar4);
          }
          if (uVar28 == *puVar22) {
            if (local_5c < 5) {
              *(int *)(iVar9 + uVar25 * 4) = (int)puVar23 - iVar11;
            }
            goto LAB_01b969e8;
          }
          uVar4 = *(uint *)(iVar9 + uVar25 * 4);
          lVar1 = (ulonglong)*puVar18 * 0xbf9b0000;
          uVar28 = puVar18[1] * -0x40650000 + *puVar18 * -0x30e44324 +
                   (int)((ulonglong)lVar1 >> 0x20);
          uVar28 = (uint)lVar1 >> (uVar32 & 0xff) | uVar28 << (uVar26 & 0xff) |
                   uVar28 >> (uVar16 & 0xff);
          puVar8 = (uint *)((int)puVar23 + (int)local_5c);
          puVar5 = (uint *)((int)puVar18 + (int)local_5c);
          if (local_6c <= puVar8) {
            HintPreloadData(puVar18 + 0x10);
            local_5c = (uint *)((int)local_5c + 1);
            HintPreloadData(puVar18 + 0x20);
            local_6c = local_6c + 0x20;
          }
          if (puVar14 <= puVar5) goto LAB_01b96580;
          puVar20 = puVar23;
          puVar22 = puVar18;
          puVar18 = puVar5;
        }
        uVar4 = (uint)(*(byte *)((int)puVar23 + -1) == *(byte *)((int)puVar8 + -1));
        puVar23 = (uint *)((int)puVar23 - uVar4);
        puVar8 = (uint *)((int)puVar8 - uVar4);
        pbVar31 = (byte *)(uVar4 + 4);
        *(int *)(iVar9 + uVar28 * 4) = (int)puVar22 - iVar11;
        local_60 = (uint *)0x1;
        uVar4 = uVar15;
        local_70 = iVar3;
        goto LAB_01b96700;
      }
      goto LAB_01b96580;
    }
    if (iVar24 == 7) {
      if (uVar4 < local_38) {
        local_60 = (uint *)0x0;
      }
      else {
        local_38 = 0;
      }
      if (uVar4 < uVar15) {
        uVar15 = 0;
        local_34 = param_4;
      }
      else {
        local_3c = 0;
        local_34 = param_4;
      }
LAB_01b96bbc:
      puVar21 = local_60;
      bVar33 = uVar15 != 0;
      puVar18 = (uint *)((int)((int)puVar20 + uVar27) + 1);
      if (puVar18 < puVar14) {
        local_6c = puVar20 + 0x20;
        iVar24 = -iVar10;
        uVar32 = iVar24 + 0x40;
        lVar1 = (ulonglong)*puVar20 * 0xbfa56300;
        uVar4 = puVar20[1] * -0x405a9d00 + *puVar20 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        uVar26 = iVar10 - 0x20;
        uVar16 = 0x20 - iVar10;
        uVar25 = (uint)lVar1 >> (uVar32 & 0xff) | uVar4 << (uVar26 & 0xff) |
                 uVar4 >> (uVar16 & 0xff);
        lVar1 = (ulonglong)*(uint *)((int)puVar20 + 1) * 0xbfa56300;
        uVar4 = *(int *)((int)puVar20 + 5) * -0x405a9d00 + *(uint *)((int)puVar20 + 1) * -0x30e44324
                + (int)((ulonglong)lVar1 >> 0x20);
        uVar28 = (uint)lVar1 >> (uVar32 & 0xff) | uVar4 << (uVar26 & 0xff) |
                 uVar4 >> (uVar16 & 0xff);
        uVar4 = *(uint *)(iVar9 + uVar25 * 4);
        puVar8 = (uint *)((int)puVar20 + uVar27);
        puVar22 = (uint *)((int)puVar20 + 1);
        local_5c = (uint *)uVar27;
        while( true ) {
          puVar23 = puVar8;
          puVar8 = (uint *)((int)puVar23 - uVar15);
          uVar29 = *puVar8;
          iVar3 = (int)puVar20 - iVar11;
          *(int *)(iVar9 + uVar25 * 4) = iVar3;
          if (*puVar23 == uVar29 && bVar33) break;
          if (uVar4 < uVar2) {
            uVar25 = *puVar20 ^ 1;
          }
          else {
            uVar25 = *(uint *)(iVar11 + uVar4);
          }
          local_70 = (int)puVar22 - iVar11;
          if (uVar25 == *puVar20) {
            *(int *)(iVar9 + uVar28 * 4) = local_70;
            puVar22 = puVar20;
            local_70 = iVar3;
LAB_01b96f24:
            puVar18 = (uint *)(iVar11 + uVar4);
            uVar4 = (int)puVar22 - (int)puVar18;
            local_60 = (uint *)(uVar4 + 3);
            puVar20 = puVar18;
            goto LAB_01b96f3c;
          }
          uVar4 = *(uint *)(iVar9 + uVar28 * 4);
          lVar1 = (ulonglong)*puVar23 * 0xbfa56300;
          uVar25 = puVar23[1] * -0x405a9d00 + *puVar23 * -0x30e44324 +
                   (int)((ulonglong)lVar1 >> 0x20);
          uVar25 = (uint)lVar1 >> (uVar32 & 0xff) | uVar25 << (uVar26 & 0xff) |
                   uVar25 >> (uVar16 & 0xff);
          *(int *)(iVar9 + uVar28 * 4) = local_70;
          if (uVar4 < uVar2) {
            uVar28 = *puVar22 ^ 1;
          }
          else {
            uVar28 = *(uint *)(iVar11 + uVar4);
          }
          if (uVar28 == *puVar22) {
            if (local_5c < 5) {
              *(int *)(iVar9 + uVar25 * 4) = (int)puVar23 - iVar11;
            }
            goto LAB_01b96f24;
          }
          uVar4 = *(uint *)(iVar9 + uVar25 * 4);
          lVar1 = (ulonglong)*puVar18 * 0xbfa56300;
          uVar28 = puVar18[1] * -0x405a9d00 + *puVar18 * -0x30e44324 +
                   (int)((ulonglong)lVar1 >> 0x20);
          uVar28 = (uint)lVar1 >> (uVar32 & 0xff) | uVar28 << (uVar26 & 0xff) |
                   uVar28 >> (uVar16 & 0xff);
          puVar8 = (uint *)((int)puVar23 + (int)local_5c);
          puVar5 = (uint *)((int)puVar18 + (int)local_5c);
          if (local_6c <= puVar8) {
            HintPreloadData(puVar18 + 0x10);
            local_5c = (uint *)((int)local_5c + 1);
            HintPreloadData(puVar18 + 0x20);
            local_6c = local_6c + 0x20;
          }
          if (puVar14 <= puVar5) goto LAB_01b96580;
          puVar20 = puVar23;
          puVar22 = puVar18;
          puVar18 = puVar5;
        }
        uVar4 = (uint)(*(byte *)((int)puVar23 + -1) == *(byte *)((int)puVar8 + -1));
        puVar23 = (uint *)((int)puVar23 - uVar4);
        puVar8 = (uint *)((int)puVar8 - uVar4);
        pbVar31 = (byte *)(uVar4 + 4);
        *(int *)(iVar9 + uVar28 * 4) = (int)puVar22 - iVar11;
        local_60 = (uint *)0x1;
        uVar4 = uVar15;
        local_70 = iVar3;
        goto LAB_01b96d00;
      }
LAB_01b96580:
      if (local_3c == 0) {
        bVar33 = false;
      }
      if (bVar33) {
        local_38 = local_3c;
      }
      else if (uVar15 == 0) {
        uVar15 = local_3c;
      }
      local_50 = (uint)local_60;
    }
    else {
      if (iVar24 != 5) {
        if (uVar4 < local_38) {
          local_50 = 0;
        }
        else {
          local_38 = 0;
        }
        if (uVar4 < uVar15) {
          uVar15 = 0;
        }
        else {
          local_3c = 0;
        }
        uVar4 = 0x20 - iVar10;
        local_34 = param_4;
LAB_01b959bc:
        bVar33 = uVar15 != 0;
        puVar21 = (uint *)((int)((int)puVar20 + uVar27) + 1);
        if (puVar21 < puVar14) {
          local_5c = puVar20 + 0x20;
          uVar26 = *puVar20 * -0x61c8864f >> (uVar4 & 0xff);
          uVar32 = (uint)(*(int *)((int)puVar20 + 1) * -0x61c8864f) >> (uVar4 & 0xff);
          uVar16 = *(uint *)(iVar9 + uVar26 * 4);
          puVar18 = (uint *)((int)puVar20 + uVar27);
          uVar28 = uVar27;
          puVar8 = (uint *)((int)puVar20 + 1);
          while( true ) {
            puVar23 = puVar21;
            puVar22 = puVar18;
            puVar21 = (uint *)((int)puVar22 - uVar15);
            uVar25 = *puVar21;
            iVar10 = (int)puVar20 - iVar11;
            *(int *)(iVar9 + uVar26 * 4) = iVar10;
            if (uVar25 == *puVar22 && bVar33) break;
            if (uVar16 < uVar2) {
              uVar26 = *puVar20 ^ 1;
            }
            else {
              uVar26 = *(uint *)(iVar11 + uVar16);
            }
            local_60 = (uint *)((int)puVar8 - iVar11);
            if (uVar26 == *puVar20) {
              *(uint **)(iVar9 + uVar32 * 4) = local_60;
              puVar8 = puVar20;
              local_60 = (uint *)iVar10;
LAB_01b95cf8:
              puVar18 = (uint *)(iVar11 + uVar16);
              uVar26 = (int)puVar8 - (int)puVar18;
              local_5c = (uint *)(uVar26 + 3);
              puVar20 = puVar18;
              goto LAB_01b95d10;
            }
            uVar16 = *(uint *)(iVar9 + uVar32 * 4);
            uVar26 = *puVar22 * -0x61c8864f >> (uVar4 & 0xff);
            *(uint **)(iVar9 + uVar32 * 4) = local_60;
            if (uVar16 < uVar2) {
              uVar32 = *puVar8 ^ 1;
            }
            else {
              uVar32 = *(uint *)(iVar11 + uVar16);
            }
            if (uVar32 == *puVar8) {
              if (uVar28 < 5) {
                *(int *)(iVar9 + uVar26 * 4) = (int)puVar22 - iVar11;
              }
              goto LAB_01b95cf8;
            }
            puVar18 = (uint *)((int)puVar22 + uVar28);
            uVar16 = *(uint *)(iVar9 + uVar26 * 4);
            uVar32 = *puVar23 * -0x61c8864f >> (uVar4 & 0xff);
            puVar21 = (uint *)((int)puVar23 + uVar28);
            if (local_5c <= puVar18) {
              uVar28 = uVar28 + 1;
              HintPreloadData(puVar23 + 0x10);
              HintPreloadData(puVar23 + 0x20);
              local_5c = local_5c + 0x20;
            }
            if (puVar14 <= puVar21) goto LAB_01b959e4;
            puVar20 = puVar22;
            puVar8 = puVar23;
          }
          uVar26 = (uint)(*(byte *)((int)puVar22 + -1) == *(byte *)((int)puVar21 + -1));
          puVar22 = (uint *)((int)puVar22 - uVar26);
          puVar21 = (uint *)((int)puVar21 - uVar26);
          pbVar31 = (byte *)(uVar26 + 4);
          *(int *)(iVar9 + uVar32 * 4) = (int)puVar8 - iVar11;
          local_5c = (uint *)0x1;
          uVar26 = uVar15;
          local_60 = (uint *)iVar10;
          goto LAB_01b95b14;
        }
LAB_01b959e4:
        if (local_3c == 0) {
          bVar33 = false;
        }
        if (bVar33) {
          local_38 = local_3c;
        }
        else if (uVar15 == 0) {
          uVar15 = local_3c;
        }
        uVar2 = local_38;
        if (local_50 != 0) {
          uVar2 = local_50;
        }
        goto LAB_01b95a20;
      }
      if (uVar4 < local_38) {
        local_50 = 0;
      }
      else {
        local_38 = 0;
      }
      if (uVar4 < uVar15) {
        uVar15 = 0;
      }
      else {
        local_3c = 0;
      }
      iVar10 = -iVar10;
      uVar4 = iVar10 + 0x40;
      local_34 = param_4;
LAB_01b95f28:
      bVar33 = uVar15 != 0;
      puVar21 = (uint *)((int)((int)puVar20 + uVar27) + 1);
      if (puVar21 < puVar14) {
        local_64 = puVar20 + 0x20;
        lVar1 = (ulonglong)*puVar20 * 0xbb000000;
        uVar26 = puVar20[1] * -0x45000000 + *puVar20 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20)
        ;
        uVar28 = 0x20 - uVar4;
        uVar16 = iVar10 + 0x20;
        uVar29 = (uint)lVar1 >> (uVar4 & 0xff) | uVar26 << (uVar28 & 0xff) |
                 uVar26 >> (uVar16 & 0xff);
        lVar1 = (ulonglong)*(uint *)((int)puVar20 + 1) * 0xbb000000;
        uVar26 = *(int *)((int)puVar20 + 5) * -0x45000000 +
                 *(uint *)((int)puVar20 + 1) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        uVar25 = (uint)lVar1 >> (uVar4 & 0xff) | uVar26 << (uVar28 & 0xff) |
                 uVar26 >> (uVar16 & 0xff);
        uVar32 = *(uint *)(iVar9 + uVar29 * 4);
        puVar18 = (uint *)((int)puVar20 + uVar27);
        uVar26 = uVar27;
        puVar8 = (uint *)((int)puVar20 + 1);
        while( true ) {
          puVar23 = puVar21;
          puVar22 = puVar18;
          puVar21 = (uint *)((int)puVar22 - uVar15);
          iVar24 = (int)puVar20 - iVar11;
          uVar7 = *puVar21;
          *(int *)(iVar9 + uVar29 * 4) = iVar24;
          if (*puVar22 == uVar7 && bVar33) break;
          if (uVar32 < uVar2) {
            uVar29 = *puVar20 ^ 1;
          }
          else {
            uVar29 = *(uint *)(iVar11 + uVar32);
          }
          local_6c = (uint *)((int)puVar8 - iVar11);
          if (uVar29 == *puVar20) {
            *(uint **)(iVar9 + uVar25 * 4) = local_6c;
            puVar8 = puVar20;
            local_6c = (uint *)iVar24;
LAB_01b962cc:
            puVar5 = (uint *)(iVar11 + uVar32);
            uVar26 = (int)puVar8 - (int)puVar5;
            local_5c = (uint *)(uVar26 + 3);
            puVar23 = puVar5;
            goto LAB_01b962e4;
          }
          uVar32 = *(uint *)(iVar9 + uVar25 * 4);
          lVar1 = (ulonglong)*puVar22 * 0xbb000000;
          uVar29 = puVar22[1] * -0x45000000 + *puVar22 * -0x30e44324 +
                   (int)((ulonglong)lVar1 >> 0x20);
          uVar29 = (uint)lVar1 >> (uVar4 & 0xff) | uVar29 << (uVar28 & 0xff) |
                   uVar29 >> (uVar16 & 0xff);
          *(uint **)(iVar9 + uVar25 * 4) = local_6c;
          if (uVar32 < uVar2) {
            uVar25 = *puVar8 ^ 1;
          }
          else {
            uVar25 = *(uint *)(iVar11 + uVar32);
          }
          if (uVar25 == *puVar8) {
            if (uVar26 < 5) {
              *(int *)(iVar9 + uVar29 * 4) = (int)puVar22 - iVar11;
            }
            goto LAB_01b962cc;
          }
          puVar18 = (uint *)((int)puVar22 + uVar26);
          uVar32 = *(uint *)(iVar9 + uVar29 * 4);
          lVar1 = (ulonglong)*puVar23 * 0xbb000000;
          uVar25 = puVar23[1] * -0x45000000 + *puVar23 * -0x30e44324 +
                   (int)((ulonglong)lVar1 >> 0x20);
          uVar25 = (uint)lVar1 >> (uVar4 & 0xff) | uVar25 << (uVar28 & 0xff) |
                   uVar25 >> (uVar16 & 0xff);
          puVar21 = (uint *)((int)puVar23 + uVar26);
          if (local_64 <= puVar18) {
            uVar26 = uVar26 + 1;
            HintPreloadData(puVar23 + 0x10);
            HintPreloadData(puVar23 + 0x20);
            local_64 = local_64 + 0x20;
          }
          if (puVar14 <= puVar21) goto LAB_01b95f50;
          puVar20 = puVar22;
          puVar8 = puVar23;
        }
        uVar26 = (uint)(*(byte *)((int)puVar22 + -1) == *(byte *)((int)puVar22 + (-1 - uVar15)));
        puVar20 = (uint *)((int)puVar22 - uVar26);
        puVar22 = (uint *)((int)puVar22 + (-uVar26 - uVar15));
        pbVar31 = (byte *)(uVar26 + 4);
        *(int *)(iVar9 + uVar25 * 4) = (int)puVar8 - iVar11;
        local_5c = (uint *)0x1;
        puVar18 = (uint *)&DAT_00000001;
        uVar26 = uVar15;
        local_6c = (uint *)iVar24;
        goto LAB_01b960a8;
      }
LAB_01b95f50:
      if (local_3c == 0) {
        bVar33 = false;
      }
      if (bVar33) {
        local_38 = local_3c;
      }
      else if (uVar15 == 0) {
        uVar15 = local_3c;
      }
    }
  }
  uVar2 = local_50;
  if (local_50 == 0) {
    uVar2 = local_38;
  }
LAB_01b95a20:
  *param_3 = uVar15;
  param_3[1] = uVar2;
  return (int)pbVar13 - (int)local_34;
  while( true ) {
    puVar20 = (uint *)((int)puVar18 + -1);
    puVar8 = (uint *)((int)puVar23 + -1);
    if (*(byte *)((int)puVar23 + -1) != *(byte *)((int)puVar18 + -1)) break;
LAB_01b980a0:
    puVar23 = puVar8;
    puVar18 = puVar20;
    pbVar31 = (byte *)((int)puVar22 + (4 - (int)puVar18));
    puVar21 = (uint *)uVar15;
    if (puVar23 <= local_34 || puVar18 <= puVar12) break;
  }
LAB_01b97e64:
  iVar3 = FUN_01b95220((byte *)((int)puVar23 + (int)pbVar31),(byte *)((int)puVar18 + (int)pbVar31),
                       pbVar13);
  pbVar31 = pbVar31 + iVar3;
  uVar15 = (int)puVar23 - (int)local_34;
  puVar18 = (uint *)(pbVar13 + -0x20);
  if (puVar18 < puVar23) {
    FUN_01b95138(param_2[3],local_34,puVar23,puVar18);
  }
  else {
    FUN_01b95058(param_2[3],local_34);
    if (0x10 < uVar15) {
      iVar3 = param_2[3];
      FUN_01b95058(iVar3 + 0x10,local_34 + 4);
      if (0x10 < (int)(uVar15 - 0x10)) {
        uVar4 = iVar3 + 0x20;
        do {
          FUN_01b95058(uVar4,local_34 + 8);
          FUN_01b95058(uVar4 + 0x10,local_34 + 0xc);
          uVar4 = uVar4 + 0x20;
          local_34 = local_34 + 8;
        } while (uVar4 < iVar3 + uVar15);
      }
    }
  }
  param_2[3] = param_2[3] + uVar15;
  piVar17 = (int *)param_2[1];
  if (0xffff < uVar15) {
    param_2[9] = 1;
    param_2[10] = (int)piVar17 - *param_2 >> 3;
  }
  *piVar17 = (int)local_5c;
  *(short *)(piVar17 + 1) = (short)uVar15;
  if ((byte *)0xffff < pbVar31 + -3) {
    param_2[9] = 2;
    param_2[10] = (int)piVar17 - *param_2 >> 3;
  }
  *(short *)((int)piVar17 + 6) = (short)(pbVar31 + -3);
  param_2[1] = (int)(piVar17 + 2);
  puVar20 = (uint *)((int)puVar23 + (int)pbVar31);
  uVar15 = uVar27;
  local_5c = puVar21;
  if (puVar20 <= puVar14) {
    iVar3 = (int)local_6c + 2;
    lVar1 = (ulonglong)*(uint *)(iVar11 + iVar3) * 0xbf9b0000;
    uVar4 = *(int *)(iVar11 + iVar3 + 4) * -0x40650000 + *(uint *)(iVar11 + iVar3) * -0x30e44324 +
            (int)((ulonglong)lVar1 >> 0x20);
    *(int *)(iVar9 + ((uint)lVar1 >> (uVar26 & 0xff) | uVar4 << (0x20 - uVar26 & 0xff) |
                     uVar4 >> (iVar24 + 0x20U & 0xff)) * 4) = iVar3;
    lVar1 = (ulonglong)*(uint *)((int)puVar20 + -2) * 0xbf9b0000;
    uVar4 = *(int *)((int)puVar20 + 2) * -0x40650000 + *(uint *)((int)puVar20 + -2) * -0x30e44324 +
            (int)((ulonglong)lVar1 >> 0x20);
    *(byte **)(iVar9 + ((uint)lVar1 >> (uVar26 & 0xff) | uVar4 << (0x20 - uVar26 & 0xff) |
                       uVar4 >> (iVar24 + 0x20U & 0xff)) * 4) =
         (byte *)((int)puVar20 + (-2 - iVar11));
    puVar8 = puVar20;
    if (puVar21 != (uint *)0x0) {
      do {
        local_5c = (uint *)uVar27;
        uVar15 = *puVar8;
        if (uVar15 != *(uint *)((int)puVar8 - (int)puVar21)) {
          puVar20 = puVar8;
          uVar15 = (uint)local_5c;
          local_5c = puVar21;
          break;
        }
        iVar3 = FUN_01b95220(puVar8 + 1,(byte *)((int)puVar8 + (4 - (int)puVar21)),pbVar13);
        uVar27 = puVar8[1] * -0x40650000 + uVar15 * -0x30e44324 +
                 (int)((ulonglong)uVar15 * 0xbf9b0000 >> 0x20);
        iVar6 = param_2[3];
        *(int *)(iVar9 + ((uint)((ulonglong)uVar15 * 0xbf9b0000) >> (uVar26 & 0xff) |
                          uVar27 << (0x20 - uVar26 & 0xff) | uVar27 >> (iVar24 + 0x20U & 0xff)) * 4)
             = (int)puVar8 - iVar11;
        puVar20 = (uint *)((int)puVar8 + iVar3 + 4);
        if (puVar18 < puVar8) {
          FUN_01b95138(iVar6,puVar8,puVar8,puVar18);
        }
        else {
          FUN_01b95058(iVar6,puVar8);
        }
        puVar19 = (undefined4 *)param_2[1];
        *(undefined2 *)(puVar19 + 1) = 0;
        *puVar19 = 1;
        if (0xffff < iVar3 + 1U) {
          param_2[9] = 2;
          param_2[10] = (int)puVar19 - *param_2 >> 3;
        }
        *(short *)((int)puVar19 + 6) = (short)(iVar3 + 1U);
        param_2[1] = (int)(puVar19 + 2);
        puVar8 = puVar20;
        uVar15 = (uint)puVar21;
        uVar27 = (uint)puVar21;
        puVar21 = local_5c;
      } while (puVar20 <= puVar14);
    }
  }
  local_34 = puVar20;
  goto LAB_01b97cec;
  while( true ) {
    puVar20 = (uint *)((int)puVar21 + -1);
    puVar18 = (uint *)((int)puVar22 + -1);
    if (*(byte *)((int)puVar22 + -1) != *(byte *)((int)puVar21 + -1)) break;
LAB_01b974d0:
    puVar22 = puVar18;
    puVar21 = puVar20;
    pbVar31 = (byte *)((int)puVar8 + (4 - (int)puVar21));
    local_50 = uVar15;
    if (puVar22 <= local_34 || puVar21 <= puVar12) break;
  }
LAB_01b972d4:
  iVar10 = FUN_01b95220((byte *)((int)puVar22 + (int)pbVar31),(byte *)((int)puVar21 + (int)pbVar31),
                        pbVar13);
  pbVar31 = pbVar31 + iVar10;
  uVar15 = (int)puVar22 - (int)local_34;
  puVar21 = (uint *)(pbVar13 + -0x20);
  if (puVar21 < puVar22) {
    FUN_01b95138(param_2[3],local_34,puVar22,puVar21);
  }
  else {
    FUN_01b95058(param_2[3],local_34);
    if (0x10 < uVar15) {
      iVar10 = param_2[3];
      FUN_01b95058(iVar10 + 0x10,local_34 + 4);
      if (0x10 < (int)(uVar15 - 0x10)) {
        uVar26 = iVar10 + 0x20;
        do {
          FUN_01b95058(uVar26,local_34 + 8);
          FUN_01b95058(uVar26 + 0x10,local_34 + 0xc);
          uVar26 = uVar26 + 0x20;
          local_34 = local_34 + 8;
        } while (uVar26 < iVar10 + uVar15);
      }
    }
  }
  param_2[3] = param_2[3] + uVar15;
  piVar17 = (int *)param_2[1];
  if (0xffff < uVar15) {
    param_2[9] = 1;
    param_2[10] = (int)piVar17 - *param_2 >> 3;
  }
  *piVar17 = (int)local_58;
  *(short *)(piVar17 + 1) = (short)uVar15;
  if ((byte *)0xffff < pbVar31 + -3) {
    param_2[9] = 2;
    param_2[10] = (int)piVar17 - *param_2 >> 3;
  }
  *(short *)((int)piVar17 + 6) = (short)(pbVar31 + -3);
  param_2[1] = (int)(piVar17 + 2);
  puVar20 = (uint *)((int)puVar22 + (int)pbVar31);
  uVar15 = uVar4;
  if (puVar20 <= puVar14) {
    *(int *)(iVar9 + ((uint)(*(int *)(iVar11 + (int)local_5c + 2) * -0x61c8864f) >> (uVar27 & 0xff))
                     * 4) = (int)local_5c + 2;
    *(int *)(iVar9 + ((uint)(*(int *)((int)puVar20 + -2) * -0x61c8864f) >> (uVar27 & 0xff)) * 4) =
         (int)((int)puVar20 + -2) - iVar11;
    puVar18 = puVar20;
    uVar26 = local_50;
    if (local_50 != 0) {
      do {
        local_50 = uVar4;
        uVar15 = *puVar18;
        if (uVar15 != *(uint *)((int)puVar18 - uVar26)) {
          puVar20 = puVar18;
          uVar15 = local_50;
          local_50 = uVar26;
          break;
        }
        iVar10 = FUN_01b95220(puVar18 + 1,(byte *)((int)puVar18 + (4 - uVar26)),pbVar13);
        *(int *)(iVar9 + (uVar15 * -0x61c8864f >> (uVar27 & 0xff)) * 4) = (int)puVar18 - iVar11;
        puVar20 = (uint *)((int)puVar18 + iVar10 + 4);
        if (puVar21 < puVar18) {
          FUN_01b95138(param_2[3],puVar18,puVar18,puVar21);
        }
        else {
          FUN_01b95058(param_2[3],puVar18);
        }
        puVar19 = (undefined4 *)param_2[1];
        *(undefined2 *)(puVar19 + 1) = 0;
        *puVar19 = 1;
        if (0xffff < iVar10 + 1U) {
          param_2[9] = 2;
          param_2[10] = (int)puVar19 - *param_2 >> 3;
        }
        *(short *)((int)puVar19 + 6) = (short)(iVar10 + 1U);
        param_2[1] = (int)(puVar19 + 2);
        puVar18 = puVar20;
        uVar15 = uVar26;
        uVar4 = uVar26;
        uVar26 = local_50;
      } while (puVar20 <= puVar14);
    }
  }
  local_34 = puVar20;
  goto LAB_01b971f0;
  while( true ) {
    puVar21 = (uint *)((int)puVar22 + -1);
    puVar18 = (uint *)((int)puVar20 + -1);
    if (*(byte *)((int)puVar20 + -1) != *(byte *)((int)puVar22 + -1)) break;
LAB_01b97a74:
    puVar20 = puVar18;
    puVar22 = puVar21;
    pbVar31 = (byte *)((int)puVar8 + (4 - (int)puVar22));
    local_50 = uVar15;
    if (puVar20 <= local_34 || puVar22 <= puVar12) break;
  }
LAB_01b97834:
  iVar24 = FUN_01b95220((byte *)((int)puVar20 + (int)pbVar31),(byte *)((int)puVar22 + (int)pbVar31),
                        pbVar13);
  pbVar31 = pbVar31 + iVar24;
  uVar15 = (int)puVar20 - (int)local_34;
  puVar21 = (uint *)(pbVar13 + -0x20);
  if (puVar21 < puVar20) {
    FUN_01b95138(param_2[3],local_34,puVar20,puVar21);
  }
  else {
    FUN_01b95058(param_2[3],local_34);
    if (0x10 < uVar15) {
      iVar24 = param_2[3];
      FUN_01b95058(iVar24 + 0x10,local_34 + 4);
      if (0x10 < (int)(uVar15 - 0x10)) {
        uVar26 = iVar24 + 0x20;
        do {
          FUN_01b95058(uVar26,local_34 + 8);
          FUN_01b95058(uVar26 + 0x10,local_34 + 0xc);
          uVar26 = uVar26 + 0x20;
          local_34 = local_34 + 8;
        } while (uVar26 < iVar24 + uVar15);
      }
    }
  }
  param_2[3] = param_2[3] + uVar15;
  piVar17 = (int *)param_2[1];
  if (0xffff < uVar15) {
    param_2[9] = 1;
    param_2[10] = (int)piVar17 - *param_2 >> 3;
  }
  *piVar17 = (int)local_58;
  *(short *)(piVar17 + 1) = (short)uVar15;
  if ((byte *)0xffff < pbVar31 + -3) {
    param_2[9] = 2;
    param_2[10] = (int)piVar17 - *param_2 >> 3;
  }
  *(short *)((int)piVar17 + 6) = (short)(pbVar31 + -3);
  param_2[1] = (int)(piVar17 + 2);
  puVar20 = (uint *)((int)puVar20 + (int)pbVar31);
  uVar15 = uVar4;
  if (puVar20 <= puVar14) {
    iVar24 = (int)local_64 + 2;
    lVar1 = (ulonglong)*(uint *)(iVar11 + iVar24) * 0xbb000000;
    uVar26 = *(int *)(iVar11 + iVar24 + 4) * -0x45000000 + *(uint *)(iVar11 + iVar24) * -0x30e44324
             + (int)((ulonglong)lVar1 >> 0x20);
    *(int *)(iVar9 + ((uint)lVar1 >> (uVar27 & 0xff) | uVar26 << (0x20 - uVar27 & 0xff) |
                     uVar26 >> (iVar10 + 0x20U & 0xff)) * 4) = iVar24;
    lVar1 = (ulonglong)*(uint *)((int)puVar20 + -2) * 0xbb000000;
    uVar26 = *(int *)((int)puVar20 + 2) * -0x45000000 + *(uint *)((int)puVar20 + -2) * -0x30e44324 +
             (int)((ulonglong)lVar1 >> 0x20);
    *(byte **)(iVar9 + ((uint)lVar1 >> (uVar27 & 0xff) | uVar26 << (0x20 - uVar27 & 0xff) |
                       uVar26 >> (iVar10 + 0x20U & 0xff)) * 4) =
         (byte *)((int)puVar20 + (-2 - iVar11));
    puVar18 = puVar20;
    uVar26 = local_50;
    if (local_50 != 0) {
      do {
        local_50 = uVar4;
        uVar15 = *puVar18;
        if (uVar15 != *(uint *)((int)puVar18 - uVar26)) {
          puVar20 = puVar18;
          uVar15 = local_50;
          local_50 = uVar26;
          break;
        }
        iVar24 = FUN_01b95220(puVar18 + 1,(byte *)((int)puVar18 + (4 - uVar26)),pbVar13);
        uVar4 = puVar18[1] * -0x45000000 + uVar15 * -0x30e44324 +
                (int)((ulonglong)uVar15 * 0xbb000000 >> 0x20);
        iVar3 = param_2[3];
        *(int *)(iVar9 + ((uint)((ulonglong)uVar15 * 0xbb000000) >> (uVar27 & 0xff) |
                          uVar4 << (0x20 - uVar27 & 0xff) | uVar4 >> (iVar10 + 0x20U & 0xff)) * 4) =
             (int)puVar18 - iVar11;
        puVar20 = (uint *)((int)puVar18 + iVar24 + 4);
        if (puVar21 < puVar18) {
          FUN_01b95138(iVar3,puVar18,puVar18,puVar21);
        }
        else {
          FUN_01b95058(iVar3,puVar18);
        }
        puVar19 = (undefined4 *)param_2[1];
        *(undefined2 *)(puVar19 + 1) = 0;
        *puVar19 = 1;
        if (0xffff < iVar24 + 1U) {
          param_2[9] = 2;
          param_2[10] = (int)puVar19 - *param_2 >> 3;
        }
        *(short *)((int)puVar19 + 6) = (short)(iVar24 + 1U);
        param_2[1] = (int)(puVar19 + 2);
        puVar18 = puVar20;
        uVar15 = uVar26;
        uVar4 = uVar26;
        uVar26 = local_50;
      } while (puVar20 <= puVar14);
    }
  }
  local_34 = puVar20;
  goto LAB_01b976e8;
  while( true ) {
    puVar20 = (uint *)((int)puVar18 + -1);
    puVar8 = (uint *)((int)puVar23 + -1);
    if (*(byte *)((int)puVar23 + -1) != *(byte *)((int)puVar18 + -1)) break;
LAB_01b98788:
    puVar23 = puVar8;
    puVar18 = puVar20;
    pbVar31 = (byte *)((int)puVar22 + (4 - (int)puVar18));
    puVar21 = (uint *)uVar15;
    if (puVar23 <= local_34 || puVar18 <= puVar12) break;
  }
LAB_01b9846c:
  iVar3 = FUN_01b95220((byte *)((int)puVar23 + (int)pbVar31),(byte *)((int)puVar18 + (int)pbVar31),
                       pbVar13);
  pbVar31 = pbVar31 + iVar3;
  uVar15 = (int)puVar23 - (int)local_34;
  puVar18 = (uint *)(pbVar13 + -0x20);
  if (puVar18 < puVar23) {
    FUN_01b95138(param_2[3],local_34,puVar23,puVar18);
  }
  else {
    FUN_01b95058(param_2[3],local_34);
    if (0x10 < uVar15) {
      iVar3 = param_2[3];
      FUN_01b95058(iVar3 + 0x10,local_34 + 4);
      if (0x10 < (int)(uVar15 - 0x10)) {
        uVar4 = iVar3 + 0x20;
        do {
          FUN_01b95058(uVar4,local_34 + 8);
          FUN_01b95058(uVar4 + 0x10,local_34 + 0xc);
          uVar4 = uVar4 + 0x20;
          local_34 = local_34 + 8;
        } while (uVar4 < iVar3 + uVar15);
      }
    }
  }
  param_2[3] = param_2[3] + uVar15;
  piVar17 = (int *)param_2[1];
  if (0xffff < uVar15) {
    param_2[9] = 1;
    param_2[10] = (int)piVar17 - *param_2 >> 3;
  }
  *piVar17 = (int)local_5c;
  *(short *)(piVar17 + 1) = (short)uVar15;
  if ((byte *)0xffff < pbVar31 + -3) {
    param_2[9] = 2;
    param_2[10] = (int)piVar17 - *param_2 >> 3;
  }
  *(short *)((int)piVar17 + 6) = (short)(pbVar31 + -3);
  param_2[1] = (int)(piVar17 + 2);
  puVar20 = (uint *)((int)puVar23 + (int)pbVar31);
  uVar15 = uVar27;
  local_5c = puVar21;
  if (puVar20 <= puVar14) {
    iVar3 = (int)local_6c + 2;
    lVar1 = (ulonglong)*(uint *)(iVar11 + iVar3) * 0xbfa56300;
    uVar4 = *(int *)(iVar11 + iVar3 + 4) * -0x405a9d00 + *(uint *)(iVar11 + iVar3) * -0x30e44324 +
            (int)((ulonglong)lVar1 >> 0x20);
    *(int *)(iVar9 + ((uint)lVar1 >> (uVar26 & 0xff) | uVar4 << (0x20 - uVar26 & 0xff) |
                     uVar4 >> (iVar24 + 0x20U & 0xff)) * 4) = iVar3;
    lVar1 = (ulonglong)*(uint *)((int)puVar20 + -2) * 0xbfa56300;
    uVar4 = *(int *)((int)puVar20 + 2) * -0x405a9d00 + *(uint *)((int)puVar20 + -2) * -0x30e44324 +
            (int)((ulonglong)lVar1 >> 0x20);
    *(byte **)(iVar9 + ((uint)lVar1 >> (uVar26 & 0xff) | uVar4 << (0x20 - uVar26 & 0xff) |
                       uVar4 >> (iVar24 + 0x20U & 0xff)) * 4) =
         (byte *)((int)puVar20 + (-2 - iVar11));
    puVar8 = puVar20;
    if (puVar21 != (uint *)0x0) {
      while( true ) {
        uVar4 = uVar27;
        uVar27 = *puVar8;
        puVar20 = puVar8;
        uVar15 = uVar4;
        local_5c = puVar21;
        if (uVar27 != *(uint *)((int)puVar8 - (int)puVar21)) break;
        iVar3 = FUN_01b95220(puVar8 + 1,(byte *)((int)puVar8 + (4 - (int)puVar21)),pbVar13);
        uVar15 = puVar8[1] * -0x405a9d00 + uVar27 * -0x30e44324 +
                 (int)((ulonglong)uVar27 * 0xbfa56300 >> 0x20);
        iVar6 = param_2[3];
        *(int *)(iVar9 + ((uint)((ulonglong)uVar27 * 0xbfa56300) >> (uVar26 & 0xff) |
                          uVar15 << (0x20 - uVar26 & 0xff) | uVar15 >> (iVar24 + 0x20U & 0xff)) * 4)
             = (int)puVar8 - iVar11;
        puVar20 = (uint *)((int)puVar8 + iVar3 + 4);
        if (puVar18 < puVar8) {
          FUN_01b95138(iVar6,puVar8,puVar8,puVar18);
        }
        else {
          FUN_01b95058(iVar6,puVar8);
        }
        puVar19 = (undefined4 *)param_2[1];
        *(undefined2 *)(puVar19 + 1) = 0;
        *puVar19 = 1;
        if (0xffff < iVar3 + 1U) {
          param_2[9] = 2;
          param_2[10] = (int)puVar19 - *param_2 >> 3;
        }
        *(short *)((int)puVar19 + 6) = (short)(iVar3 + 1U);
        param_2[1] = (int)(puVar19 + 2);
        if (puVar14 < puVar20) {
          uVar15 = (uint)puVar21;
          local_5c = (uint *)uVar4;
          break;
        }
        puVar8 = puVar20;
        uVar27 = (uint)puVar21;
        puVar21 = (uint *)uVar4;
      }
    }
  }
  local_34 = puVar20;
  goto LAB_01b9832c;
  while( true ) {
    puVar20 = (uint *)((int)puVar8 + -1);
    puVar22 = (uint *)((int)puVar23 + -1);
    if (*(byte *)((int)puVar23 + -1) != *(byte *)((int)puVar8 + -1)) break;
LAB_01b96a00:
    puVar23 = puVar22;
    puVar8 = puVar20;
    pbVar31 = (byte *)((int)puVar18 + (4 - (int)puVar8));
    puVar21 = (uint *)uVar15;
    if (puVar23 <= local_34 || puVar8 <= puVar12) break;
  }
LAB_01b96700:
  iVar3 = FUN_01b95220((byte *)((int)puVar23 + (int)pbVar31),(byte *)((int)puVar8 + (int)pbVar31),
                       pbVar13);
  pbVar31 = pbVar31 + iVar3;
  uVar15 = (int)puVar23 - (int)local_34;
  puVar18 = (uint *)(pbVar13 + -0x20);
  if (puVar18 < puVar23) {
    FUN_01b95138(param_2[3],local_34,puVar23,puVar18);
  }
  else {
    FUN_01b95058(param_2[3],local_34);
    if (0x10 < uVar15) {
      iVar3 = param_2[3];
      FUN_01b95058(iVar3 + 0x10,local_34 + 4);
      if (0x10 < (int)(uVar15 - 0x10)) {
        uVar26 = iVar3 + 0x20;
        do {
          FUN_01b95058(uVar26,local_34 + 8);
          FUN_01b95058(uVar26 + 0x10,local_34 + 0xc);
          uVar26 = uVar26 + 0x20;
          local_34 = local_34 + 8;
        } while (uVar26 < iVar3 + uVar15);
      }
    }
  }
  param_2[3] = param_2[3] + uVar15;
  piVar17 = (int *)param_2[1];
  if (0xffff < uVar15) {
    param_2[9] = 1;
    param_2[10] = (int)piVar17 - *param_2 >> 3;
  }
  *piVar17 = (int)local_60;
  *(short *)(piVar17 + 1) = (short)uVar15;
  if ((byte *)0xffff < pbVar31 + -3) {
    param_2[9] = 2;
    param_2[10] = (int)piVar17 - *param_2 >> 3;
  }
  *(short *)((int)piVar17 + 6) = (short)(pbVar31 + -3);
  param_2[1] = (int)(piVar17 + 2);
  puVar20 = (uint *)((int)puVar23 + (int)pbVar31);
  uVar15 = uVar4;
  local_60 = puVar21;
  if (puVar20 <= puVar14) {
    local_70 = local_70 + 2;
    lVar1 = (ulonglong)*(uint *)(iVar11 + local_70) * 0xbf9b0000;
    uVar26 = *(int *)(iVar11 + local_70 + 4) * -0x40650000 +
             *(uint *)(iVar11 + local_70) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
    *(int *)(iVar9 + ((uint)lVar1 >> (uVar32 & 0xff) | uVar26 << (0x20 - uVar32 & 0xff) |
                     uVar26 >> (iVar24 + 0x20U & 0xff)) * 4) = local_70;
    lVar1 = (ulonglong)*(uint *)((int)puVar20 + -2) * 0xbf9b0000;
    uVar26 = *(int *)((int)puVar20 + 2) * -0x40650000 + *(uint *)((int)puVar20 + -2) * -0x30e44324 +
             (int)((ulonglong)lVar1 >> 0x20);
    *(byte **)(iVar9 + ((uint)lVar1 >> (uVar32 & 0xff) | uVar26 << (0x20 - uVar32 & 0xff) |
                       uVar26 >> (iVar24 + 0x20U & 0xff)) * 4) =
         (byte *)((int)puVar20 + (-2 - iVar11));
    puVar8 = puVar20;
    if (puVar21 != (uint *)0x0) {
      while( true ) {
        uVar26 = uVar4;
        uVar4 = *puVar8;
        puVar20 = puVar8;
        uVar15 = uVar26;
        local_60 = puVar21;
        if (uVar4 != *(uint *)((int)puVar8 - (int)puVar21)) break;
        iVar3 = FUN_01b95220(puVar8 + 1,(byte *)((int)puVar8 + (4 - (int)puVar21)),pbVar13);
        uVar15 = puVar8[1] * -0x40650000 + uVar4 * -0x30e44324 +
                 (int)((ulonglong)uVar4 * 0xbf9b0000 >> 0x20);
        iVar6 = param_2[3];
        *(int *)(iVar9 + ((uint)((ulonglong)uVar4 * 0xbf9b0000) >> (uVar32 & 0xff) |
                          uVar15 << (0x20 - uVar32 & 0xff) | uVar15 >> (iVar24 + 0x20U & 0xff)) * 4)
             = (int)puVar8 - iVar11;
        puVar20 = (uint *)((int)puVar8 + iVar3 + 4);
        if (puVar18 < puVar8) {
          FUN_01b95138(iVar6,puVar8,puVar8,puVar18);
        }
        else {
          FUN_01b95058(iVar6,puVar8);
        }
        puVar19 = (undefined4 *)param_2[1];
        *(undefined2 *)(puVar19 + 1) = 0;
        *puVar19 = 1;
        if (0xffff < iVar3 + 1U) {
          param_2[9] = 2;
          param_2[10] = (int)puVar19 - *param_2 >> 3;
        }
        *(short *)((int)puVar19 + 6) = (short)(iVar3 + 1U);
        param_2[1] = (int)(puVar19 + 2);
        if (puVar14 < puVar20) {
          uVar15 = (uint)puVar21;
          local_60 = (uint *)uVar26;
          break;
        }
        puVar8 = puVar20;
        uVar4 = (uint)puVar21;
        puVar21 = (uint *)uVar26;
      }
    }
  }
  local_34 = puVar20;
  goto LAB_01b9655c;
  while( true ) {
    puVar20 = (uint *)((int)puVar8 + -1);
    puVar22 = (uint *)((int)puVar23 + -1);
    if (*(byte *)((int)puVar23 + -1) != *(byte *)((int)puVar8 + -1)) break;
LAB_01b96f3c:
    puVar23 = puVar22;
    puVar8 = puVar20;
    pbVar31 = (byte *)((int)puVar18 + (4 - (int)puVar8));
    puVar21 = (uint *)uVar15;
    if (puVar23 <= local_34 || puVar8 <= puVar12) break;
  }
LAB_01b96d00:
  iVar3 = FUN_01b95220((byte *)((int)puVar23 + (int)pbVar31),(byte *)((int)puVar8 + (int)pbVar31),
                       pbVar13);
  pbVar31 = pbVar31 + iVar3;
  uVar15 = (int)puVar23 - (int)local_34;
  puVar18 = (uint *)(pbVar13 + -0x20);
  if (puVar18 < puVar23) {
    FUN_01b95138(param_2[3],local_34,puVar23,puVar18);
  }
  else {
    FUN_01b95058(param_2[3],local_34);
    if (0x10 < uVar15) {
      iVar3 = param_2[3];
      FUN_01b95058(iVar3 + 0x10,local_34 + 4);
      if (0x10 < (int)(uVar15 - 0x10)) {
        uVar26 = iVar3 + 0x20;
        do {
          FUN_01b95058(uVar26,local_34 + 8);
          FUN_01b95058(uVar26 + 0x10,local_34 + 0xc);
          uVar26 = uVar26 + 0x20;
          local_34 = local_34 + 8;
        } while (uVar26 < iVar3 + uVar15);
      }
    }
  }
  param_2[3] = param_2[3] + uVar15;
  piVar17 = (int *)param_2[1];
  if (0xffff < uVar15) {
    param_2[9] = 1;
    param_2[10] = (int)piVar17 - *param_2 >> 3;
  }
  *piVar17 = (int)local_60;
  *(short *)(piVar17 + 1) = (short)uVar15;
  if ((byte *)0xffff < pbVar31 + -3) {
    param_2[9] = 2;
    param_2[10] = (int)piVar17 - *param_2 >> 3;
  }
  *(short *)((int)piVar17 + 6) = (short)(pbVar31 + -3);
  param_2[1] = (int)(piVar17 + 2);
  puVar20 = (uint *)((int)puVar23 + (int)pbVar31);
  uVar15 = uVar4;
  local_60 = puVar21;
  if (puVar20 <= puVar14) {
    local_70 = local_70 + 2;
    lVar1 = (ulonglong)*(uint *)(iVar11 + local_70) * 0xbfa56300;
    uVar26 = *(int *)(iVar11 + local_70 + 4) * -0x405a9d00 +
             *(uint *)(iVar11 + local_70) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
    *(int *)(iVar9 + ((uint)lVar1 >> (uVar32 & 0xff) | uVar26 << (0x20 - uVar32 & 0xff) |
                     uVar26 >> (iVar24 + 0x20U & 0xff)) * 4) = local_70;
    lVar1 = (ulonglong)*(uint *)((int)puVar20 + -2) * 0xbfa56300;
    uVar26 = *(int *)((int)puVar20 + 2) * -0x405a9d00 + *(uint *)((int)puVar20 + -2) * -0x30e44324 +
             (int)((ulonglong)lVar1 >> 0x20);
    *(byte **)(iVar9 + ((uint)lVar1 >> (uVar32 & 0xff) | uVar26 << (0x20 - uVar32 & 0xff) |
                       uVar26 >> (iVar24 + 0x20U & 0xff)) * 4) =
         (byte *)((int)puVar20 + (-2 - iVar11));
    puVar8 = puVar20;
    if (puVar21 != (uint *)0x0) {
      do {
        local_60 = (uint *)uVar4;
        uVar15 = *puVar8;
        if (uVar15 != *(uint *)((int)puVar8 - (int)puVar21)) {
          puVar20 = puVar8;
          uVar15 = (uint)local_60;
          local_60 = puVar21;
          break;
        }
        iVar3 = FUN_01b95220(puVar8 + 1,(byte *)((int)puVar8 + (4 - (int)puVar21)),pbVar13);
        uVar4 = puVar8[1] * -0x405a9d00 + uVar15 * -0x30e44324 +
                (int)((ulonglong)uVar15 * 0xbfa56300 >> 0x20);
        iVar6 = param_2[3];
        *(int *)(iVar9 + ((uint)((ulonglong)uVar15 * 0xbfa56300) >> (uVar32 & 0xff) |
                          uVar4 << (0x20 - uVar32 & 0xff) | uVar4 >> (iVar24 + 0x20U & 0xff)) * 4) =
             (int)puVar8 - iVar11;
        puVar20 = (uint *)((int)puVar8 + iVar3 + 4);
        if (puVar18 < puVar8) {
          FUN_01b95138(iVar6,puVar8,puVar8,puVar18);
        }
        else {
          FUN_01b95058(iVar6,puVar8);
        }
        puVar19 = (undefined4 *)param_2[1];
        *(undefined2 *)(puVar19 + 1) = 0;
        *puVar19 = 1;
        if (0xffff < iVar3 + 1U) {
          param_2[9] = 2;
          param_2[10] = (int)puVar19 - *param_2 >> 3;
        }
        *(short *)((int)puVar19 + 6) = (short)(iVar3 + 1U);
        param_2[1] = (int)(puVar19 + 2);
        puVar8 = puVar20;
        uVar15 = (uint)puVar21;
        uVar4 = (uint)puVar21;
        puVar21 = local_60;
      } while (puVar20 <= puVar14);
    }
  }
  local_34 = puVar20;
  goto LAB_01b96bbc;
  while( true ) {
    puVar20 = (uint *)((int)puVar21 + -1);
    puVar8 = (uint *)((int)puVar22 + -1);
    if (*(byte *)((int)puVar22 + -1) != *(byte *)((int)puVar21 + -1)) break;
LAB_01b95d10:
    puVar22 = puVar8;
    puVar21 = puVar20;
    pbVar31 = (byte *)((int)puVar18 + (4 - (int)puVar21));
    local_50 = uVar15;
    if (puVar22 <= local_34 || puVar21 <= puVar12) break;
  }
LAB_01b95b14:
  iVar10 = FUN_01b95220((byte *)((int)puVar22 + (int)pbVar31),(byte *)((int)puVar21 + (int)pbVar31),
                        pbVar13);
  pbVar31 = pbVar31 + iVar10;
  uVar15 = (int)puVar22 - (int)local_34;
  puVar21 = (uint *)(pbVar13 + -0x20);
  if (puVar21 < puVar22) {
    FUN_01b95138(param_2[3],local_34,puVar22,puVar21);
  }
  else {
    FUN_01b95058(param_2[3],local_34);
    if (0x10 < uVar15) {
      iVar10 = param_2[3];
      FUN_01b95058(iVar10 + 0x10,local_34 + 4);
      if (0x10 < (int)(uVar15 - 0x10)) {
        uVar32 = iVar10 + 0x20;
        do {
          FUN_01b95058(uVar32,local_34 + 8);
          FUN_01b95058(uVar32 + 0x10,local_34 + 0xc);
          uVar32 = uVar32 + 0x20;
          local_34 = local_34 + 8;
        } while (uVar32 < iVar10 + uVar15);
      }
    }
  }
  param_2[3] = param_2[3] + uVar15;
  piVar17 = (int *)param_2[1];
  if (0xffff < uVar15) {
    param_2[9] = 1;
    param_2[10] = (int)piVar17 - *param_2 >> 3;
  }
  *piVar17 = (int)local_5c;
  *(short *)(piVar17 + 1) = (short)uVar15;
  if ((byte *)0xffff < pbVar31 + -3) {
    param_2[9] = 2;
    param_2[10] = (int)piVar17 - *param_2 >> 3;
  }
  *(short *)((int)piVar17 + 6) = (short)(pbVar31 + -3);
  param_2[1] = (int)(piVar17 + 2);
  puVar20 = (uint *)((int)puVar22 + (int)pbVar31);
  uVar15 = uVar26;
  if (puVar20 <= puVar14) {
    *(int *)(iVar9 + ((uint)(*(int *)(iVar11 + (int)local_60 + 2) * -0x61c8864f) >> (uVar4 & 0xff))
                     * 4) = (int)local_60 + 2;
    *(int *)(iVar9 + ((uint)(*(int *)((int)puVar20 + -2) * -0x61c8864f) >> (uVar4 & 0xff)) * 4) =
         (int)((int)puVar20 + -2) - iVar11;
    puVar18 = puVar20;
    uVar32 = local_50;
    if (local_50 != 0) {
      do {
        local_50 = uVar26;
        uVar15 = *puVar18;
        if (uVar15 != *(uint *)((int)puVar18 - uVar32)) {
          puVar20 = puVar18;
          uVar15 = local_50;
          local_50 = uVar32;
          break;
        }
        iVar10 = FUN_01b95220(puVar18 + 1,(byte *)((int)puVar18 + (4 - uVar32)),pbVar13);
        *(int *)(iVar9 + (uVar15 * -0x61c8864f >> (uVar4 & 0xff)) * 4) = (int)puVar18 - iVar11;
        puVar20 = (uint *)((int)puVar18 + iVar10 + 4);
        if (puVar21 < puVar18) {
          FUN_01b95138(param_2[3],puVar18,puVar18,puVar21);
        }
        else {
          FUN_01b95058(param_2[3],puVar18);
        }
        puVar19 = (undefined4 *)param_2[1];
        *(undefined2 *)(puVar19 + 1) = 0;
        *puVar19 = 1;
        if (0xffff < iVar10 + 1U) {
          param_2[9] = 2;
          param_2[10] = (int)puVar19 - *param_2 >> 3;
        }
        *(short *)((int)puVar19 + 6) = (short)(iVar10 + 1U);
        param_2[1] = (int)(puVar19 + 2);
        puVar18 = puVar20;
        uVar15 = uVar32;
        uVar26 = uVar32;
        uVar32 = local_50;
      } while (puVar20 <= puVar14);
    }
  }
  local_34 = puVar20;
  goto LAB_01b959bc;
  while( true ) {
    puVar18 = (uint *)(uint)*(byte *)((int)puVar22 + -1);
    puVar23 = (uint *)((int)puVar22 + -1);
    puVar8 = (uint *)((int)puVar20 + -1);
    if ((uint *)(uint)*(byte *)((int)puVar20 + -1) != puVar18) break;
LAB_01b962e4:
    puVar20 = puVar8;
    puVar22 = puVar23;
    pbVar31 = (byte *)((int)puVar5 + (4 - (int)puVar22));
    puVar18 = local_34;
    local_50 = uVar15;
    if (puVar20 <= local_34 || puVar22 <= puVar12) break;
  }
LAB_01b960a8:
  iVar24 = FUN_01b95220((byte *)((int)puVar20 + (int)pbVar31),(byte *)((int)puVar22 + (int)pbVar31),
                        pbVar13,puVar18,uVar7,puVar21);
  pbVar31 = pbVar31 + iVar24;
  uVar15 = (int)puVar20 - (int)local_34;
  puVar18 = (uint *)(pbVar13 + -0x20);
  if (puVar18 < puVar20) {
    FUN_01b95138(param_2[3],local_34,puVar20,puVar18);
  }
  else {
    FUN_01b95058(param_2[3],local_34);
    if (0x10 < uVar15) {
      iVar24 = param_2[3];
      FUN_01b95058(iVar24 + 0x10,local_34 + 4);
      if (0x10 < (int)(uVar15 - 0x10)) {
        uVar32 = iVar24 + 0x20;
        do {
          FUN_01b95058(uVar32,local_34 + 8);
          FUN_01b95058(uVar32 + 0x10,local_34 + 0xc);
          uVar32 = uVar32 + 0x20;
          local_34 = local_34 + 8;
        } while (uVar32 < iVar24 + uVar15);
      }
    }
  }
  param_2[3] = param_2[3] + uVar15;
  piVar17 = (int *)param_2[1];
  if (0xffff < uVar15) {
    param_2[9] = 1;
    param_2[10] = (int)piVar17 - *param_2 >> 3;
  }
  *piVar17 = (int)local_5c;
  *(short *)(piVar17 + 1) = (short)uVar15;
  if ((byte *)0xffff < pbVar31 + -3) {
    param_2[9] = 2;
    param_2[10] = (int)piVar17 - *param_2 >> 3;
  }
  *(short *)((int)piVar17 + 6) = (short)(pbVar31 + -3);
  param_2[1] = (int)(piVar17 + 2);
  puVar20 = (uint *)((int)puVar20 + (int)pbVar31);
  uVar15 = uVar26;
  if (puVar20 <= puVar14) {
    iVar24 = (int)local_6c + 2;
    lVar1 = (ulonglong)*(uint *)(iVar11 + iVar24) * 0xbb000000;
    uVar32 = *(int *)(iVar11 + iVar24 + 4) * -0x45000000 + *(uint *)(iVar11 + iVar24) * -0x30e44324
             + (int)((ulonglong)lVar1 >> 0x20);
    *(int *)(iVar9 + ((uint)lVar1 >> (uVar4 & 0xff) | uVar32 << (0x20 - uVar4 & 0xff) |
                     uVar32 >> (iVar10 + 0x20U & 0xff)) * 4) = iVar24;
    lVar1 = (ulonglong)*(uint *)((int)puVar20 + -2) * 0xbb000000;
    uVar32 = *(int *)((int)puVar20 + 2) * -0x45000000 + *(uint *)((int)puVar20 + -2) * -0x30e44324 +
             (int)((ulonglong)lVar1 >> 0x20);
    *(byte **)(iVar9 + ((uint)lVar1 >> (uVar4 & 0xff) | uVar32 << (0x20 - uVar4 & 0xff) |
                       uVar32 >> (iVar10 + 0x20U & 0xff)) * 4) =
         (byte *)((int)puVar20 + (-2 - iVar11));
    puVar8 = puVar20;
    uVar32 = local_50;
    if (local_50 != 0) {
      do {
        local_50 = uVar26;
        uVar15 = *puVar8;
        if (uVar15 != *(uint *)((int)puVar8 - uVar32)) {
          puVar20 = puVar8;
          uVar15 = local_50;
          local_50 = uVar32;
          break;
        }
        iVar24 = FUN_01b95220(puVar8 + 1,(byte *)((int)puVar8 + (4 - uVar32)),pbVar13,
                              *(uint *)((int)puVar8 - uVar32),uVar7,puVar21);
        uVar26 = puVar8[1] * -0x45000000 + uVar15 * -0x30e44324 +
                 (int)((ulonglong)uVar15 * 0xbb000000 >> 0x20);
        iVar3 = param_2[3];
        *(int *)(iVar9 + ((uint)((ulonglong)uVar15 * 0xbb000000) >> (uVar4 & 0xff) |
                          uVar26 << (0x20 - uVar4 & 0xff) | uVar26 >> (iVar10 + 0x20U & 0xff)) * 4)
             = (int)puVar8 - iVar11;
        puVar20 = (uint *)((int)puVar8 + iVar24 + 4);
        if (puVar18 < puVar8) {
          FUN_01b95138(iVar3,puVar8,puVar8,puVar18);
        }
        else {
          FUN_01b95058(iVar3,puVar8);
        }
        puVar19 = (undefined4 *)param_2[1];
        *(undefined2 *)(puVar19 + 1) = 0;
        *puVar19 = 1;
        if (0xffff < iVar24 + 1U) {
          param_2[9] = 2;
          param_2[10] = (int)puVar19 - *param_2 >> 3;
        }
        *(short *)((int)puVar19 + 6) = (short)(iVar24 + 1U);
        param_2[1] = (int)(puVar19 + 2);
        puVar8 = puVar20;
        uVar15 = uVar32;
        uVar26 = uVar32;
        uVar32 = local_50;
      } while (puVar20 <= puVar14);
    }
  }
  local_34 = puVar20;
  goto LAB_01b95f28;
}

