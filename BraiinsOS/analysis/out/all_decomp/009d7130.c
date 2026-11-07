// FUN_009d7130 @ 009d7130 size=1768 calls_out=3 calls_in=2
// strings: 

void FUN_009d7130(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  code *pcVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  undefined4 *puVar21;
  uint uVar22;
  code *pcVar23;
  int iVar24;
  uint uVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  uint uVar28;
  bool bVar29;
  ulonglong uVar30;
  undefined4 *local_174;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar30 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar30 & 0xffffffff);
  uVar2 = uVar30 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar30 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar30;
  }
  if (param_2 < 0x1001) {
    uVar4 = param_2 - (param_2 >> 1);
    if (0x3f < uVar4) {
      uVar4 = 0x40;
    }
  }
  else {
    uVar4 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar24 = (uVar4 & 1) + (uVar4 >> 1);
    uVar4 = (1 << iVar24) + (param_2 >> iVar24) >> 1;
  }
  uVar16 = 0;
  uVar14 = 0;
  uVar25 = 1;
LAB_009d7200:
  uVar10 = 0;
  uVar28 = 1;
  puVar5 = (undefined4 *)(param_1 + uVar16 * 8);
  if (uVar16 < param_2) {
    uVar28 = param_2 - uVar16;
    if (uVar4 <= uVar28) {
      if (1 < uVar28) {
        uVar7 = *puVar5;
        iVar24 = puVar5[1];
        uVar13 = puVar5[2];
        pcVar23 = *(code **)(puVar5[3] + 0x28);
        uVar10 = (*pcVar23)(uVar13);
        uVar11 = (**(code **)(iVar24 + 0x28))(uVar7);
        if (uVar11 <= uVar10) {
          uVar12 = 2;
          if (uVar28 != 2) {
            iVar24 = 0;
            do {
              uVar7 = puVar5[iVar24 * 2 + 4];
              pcVar17 = *(code **)(puVar5[iVar24 * 2 + 5] + 0x28);
              uVar12 = (*pcVar17)(uVar7);
              uVar15 = (*pcVar23)(uVar13);
              if (uVar12 < uVar15) goto LAB_009d73d0;
              iVar24 = iVar24 + 1;
              pcVar23 = pcVar17;
              uVar13 = uVar7;
            } while ((param_2 - 2) - uVar16 != iVar24);
            goto LAB_009d73c4;
          }
          goto LAB_009d7478;
        }
        if (uVar28 != 2) {
          iVar24 = 0;
          do {
            uVar7 = puVar5[iVar24 * 2 + 4];
            pcVar17 = *(code **)(puVar5[iVar24 * 2 + 5] + 0x28);
            uVar12 = (*pcVar17)(uVar7);
            uVar15 = (*pcVar23)(uVar13);
            if (uVar15 <= uVar12) goto LAB_009d73d0;
            iVar24 = iVar24 + 1;
            pcVar23 = pcVar17;
            uVar13 = uVar7;
          } while ((param_2 - 2) - uVar16 != iVar24);
LAB_009d73c4:
          uVar12 = uVar28;
          goto LAB_009d73d8;
        }
        uVar12 = 2;
        uVar28 = 1;
        goto LAB_009d7410;
      }
      uVar12 = uVar28;
      goto LAB_009d7478;
    }
    goto LAB_009d7238;
  }
  goto LAB_009d74e4;
LAB_009d73d0:
  uVar12 = iVar24 + 2;
LAB_009d73d8:
  if (uVar12 < uVar4) {
LAB_009d7238:
    if (param_5 == 0) {
      if (uVar4 <= uVar28) {
        uVar28 = uVar4;
      }
      uVar28 = uVar28 << 1;
    }
    else {
      if (0x1f < uVar28) {
        uVar28 = 0x20;
      }
      FUN_009ce3cc(puVar5,uVar28,param_3,param_4,0,0);
      uVar28 = uVar28 << 1 | 1;
    }
  }
  else {
    if (uVar10 < uVar11) {
      uVar28 = uVar12 >> 1;
      if (uVar28 == 0) {
        uVar12 = 1;
      }
      else {
LAB_009d7410:
        iVar24 = uVar16 * 8 + uVar12 * 8;
        iVar20 = 0;
        iVar18 = 0;
        do {
          puVar8 = (undefined4 *)(param_1 + -8 + iVar24 + iVar20 * 8);
          uVar7 = *puVar8;
          puVar27 = puVar5 + iVar18 * 2;
          iVar18 = iVar18 + 1;
          *puVar8 = *puVar27;
          uVar13 = puVar8[1];
          *(undefined4 *)(param_1 + -4 + iVar24 + iVar20 * 8) = puVar5[iVar20 * -2 + 1];
          iVar20 = iVar20 + -1;
          *puVar27 = uVar7;
          puVar27[1] = uVar13;
        } while (-iVar20 != uVar28);
      }
    }
LAB_009d7478:
    uVar28 = uVar12 << 1 | 1;
  }
  uVar10 = uVar16 - (uVar25 >> 1);
  uVar11 = uVar16 + (uVar28 >> 1);
  uVar12 = uVar11 + uVar16;
  lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar12;
  lVar3 = uVar2 * CONCAT14(CARRY4(uVar10,uVar16),uVar10 + uVar16);
  uVar11 = (uint)CARRY4(uVar11,uVar16) * (int)uVar2 +
           uVar12 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
           (uint)((ulonglong)lVar3 >> 0x20);
  uVar10 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
  if (uVar11 != 0) {
    uVar10 = LZCOUNT(uVar11);
  }
LAB_009d74e4:
  if (1 < uVar14) {
    do {
      while( true ) {
        uVar11 = uVar14 - 1;
        if (abStack_67[uVar14] < uVar10) goto LAB_009d77ac;
        uVar22 = local_170[uVar11];
        uVar12 = uVar22 >> 1;
        uVar15 = uVar12 + (uVar25 >> 1);
        uVar14 = uVar11;
        if ((param_4 < uVar15) || (((uVar22 | uVar25) & 1) != 0)) break;
        uVar25 = uVar15 * 2;
        if (uVar11 < 2) goto LAB_009d77a8;
      }
      puVar27 = (undefined4 *)(param_1 + (uVar16 - uVar15) * 8);
      if ((uVar22 & 1) == 0) {
        FUN_009ce3cc(puVar27,uVar12,param_3,param_4,LZCOUNT(uVar12 | 1) << 1 ^ 0x3e,0);
      }
      if ((uVar25 & 1) == 0) {
        FUN_009ce3cc(puVar27 + uVar12 * 2,uVar25 >> 1,param_3,param_4,
                     LZCOUNT(uVar25 >> 1 | 1) << 1 ^ 0x3e,0);
      }
      uVar19 = uVar25 >> 1;
      if (1 < uVar22 && 1 < uVar25) {
        uVar25 = uVar12;
        if (uVar19 < uVar12) {
          uVar25 = uVar19;
        }
        if (uVar25 <= param_4) {
          puVar8 = puVar27 + uVar12 * 2;
          puVar9 = puVar27;
          if (uVar19 < uVar12) {
            puVar9 = puVar8;
          }
          FUN_016dd1aa(param_3,puVar9,uVar25 << 3);
          puVar6 = param_3 + uVar25 * 2;
          puVar9 = param_3;
          if (uVar19 < uVar12) {
            local_174 = puVar8;
            puVar8 = (undefined4 *)(param_1 + -8 + uVar16 * 8);
            do {
              puVar26 = puVar6 + -2;
              puVar21 = local_174 + -2;
              uVar13 = *puVar21;
              iVar24 = local_174[-1];
              uVar25 = (**(code **)(puVar6[-1] + 0x28))(*puVar26);
              uVar12 = (**(code **)(iVar24 + 0x28))(uVar13);
              bVar29 = uVar25 < uVar12;
              puVar6 = puVar26;
              if (bVar29) {
                puVar6 = puVar21;
              }
              uVar13 = puVar6[1];
              *puVar8 = *puVar6;
              puVar8[1] = uVar13;
              puVar6 = puVar26 + (uint)bVar29 * 2;
              local_174 = puVar21 + (uint)!bVar29 * 2;
            } while ((local_174 != puVar27) && (puVar8 = puVar8 + -2, puVar6 != param_3));
          }
          else {
            local_174 = puVar27;
            do {
              uVar13 = *puVar9;
              iVar24 = puVar9[1];
              uVar25 = (**(code **)(puVar8[1] + 0x28))(*puVar8);
              uVar12 = (**(code **)(iVar24 + 0x28))(uVar13);
              bVar29 = uVar12 <= uVar25;
              puVar27 = puVar9;
              if (!bVar29) {
                puVar27 = puVar8;
              }
              uVar13 = puVar27[1];
              *local_174 = *puVar27;
              local_174[1] = uVar13;
              puVar9 = puVar9 + (uint)bVar29 * 2;
              local_174 = local_174 + 2;
              if (puVar9 != puVar6) {
                puVar8 = puVar8 + (uint)!bVar29 * 2;
              }
            } while (puVar9 != puVar6 && puVar8 != puVar5);
          }
          FUN_016dd1aa(local_174,puVar9,(int)puVar6 - (int)puVar9);
        }
      }
      uVar25 = uVar15 * 2 | 1;
    } while (1 < uVar11);
LAB_009d77a8:
    uVar14 = 1;
  }
LAB_009d77ac:
  abStack_67[uVar14 + 1] = (byte)uVar10;
  local_170[uVar14] = uVar25;
  if (param_2 <= uVar16) {
    if ((uVar25 & 1) == 0) {
      FUN_009ce3cc(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
    }
    return;
  }
  uVar14 = uVar14 + 1;
  uVar16 = uVar16 + (uVar28 >> 1);
  uVar25 = uVar28;
  goto LAB_009d7200;
}

