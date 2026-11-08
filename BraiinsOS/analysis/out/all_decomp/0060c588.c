// FUN_0060c588 @ 0060c588 size=1696 calls_out=3 calls_in=2
// strings: 

void FUN_0060c588(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined4 *puVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 *puVar25;
  uint uVar26;
  undefined4 *puVar27;
  uint uVar28;
  undefined4 *puVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  uint uVar32;
  undefined4 uVar33;
  int iVar34;
  undefined4 uVar35;
  undefined4 *puVar36;
  ulonglong uVar37;
  uint local_190;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar37 = FUN_01846088(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar37 & 0xffffffff);
  uVar5 = uVar37 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar37 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar5 = uVar37;
  }
  iVar4 = (int)(uVar5 >> 0x20);
  if (param_2 < 0x1001) {
    uVar6 = param_2 - (param_2 >> 1);
    if (0x3f < uVar6) {
      uVar6 = 0x40;
    }
  }
  else {
    uVar6 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar34 = (uVar6 & 1) + (uVar6 >> 1);
    uVar6 = (1 << iVar34) + (param_2 >> iVar34) >> 1;
  }
  uVar32 = 1;
  uVar12 = 0;
  uVar28 = 0;
  do {
    uVar9 = 0;
    bVar8 = 0;
    local_190 = 1;
    if (uVar12 < param_2) {
      iVar34 = param_1 + uVar12 * 0x18;
      local_190 = param_2 - uVar12;
      if (local_190 < uVar6) {
LAB_0060c6b0:
        if (param_5 == 0) {
          if (uVar6 <= local_190) {
            local_190 = uVar6;
          }
          local_190 = local_190 << 1;
        }
        else {
          if (0x1f < local_190) {
            local_190 = 0x20;
          }
          FUN_0060f104(iVar34,local_190,param_3,param_4,0,0);
          local_190 = local_190 << 1 | 1;
        }
      }
      else {
        if (local_190 < 2) {
          uVar17 = local_190;
        }
        else {
          uVar26 = *(uint *)(iVar34 + 0x20);
          uVar9 = *(uint *)(iVar34 + 0xc);
          uVar20 = *(uint *)(iVar34 + 0x24);
          if (uVar9 < uVar20 || uVar20 - uVar9 < (uint)(*(uint *)(iVar34 + 8) <= uVar26)) {
            uVar17 = 2;
            if (local_190 != 2) {
              puVar13 = (uint *)(param_1 + 0x38 + uVar12 * 0x18);
              uVar23 = uVar26;
              uVar18 = uVar20;
              do {
                uVar7 = *puVar13;
                uVar10 = puVar13[1];
                if (uVar10 <= uVar18 && (uint)(uVar23 <= uVar7) <= uVar10 - uVar18)
                goto LAB_0060c7dc;
                uVar17 = uVar17 + 1;
                puVar13 = puVar13 + 6;
                uVar23 = uVar7;
                uVar18 = uVar10;
              } while (local_190 != uVar17);
              goto LAB_0060c7d8;
            }
          }
          else if (local_190 == 2) {
            uVar17 = 2;
            uVar9 = 1;
LAB_0060c804:
            iVar34 = param_1 + -0xc + uVar17 * 0x18;
            iVar14 = param_1;
            do {
              uVar9 = uVar9 - 1;
              puVar27 = (undefined4 *)(iVar34 + uVar12 * 0x18);
              uVar19 = *puVar27;
              puVar21 = (undefined4 *)(iVar14 + uVar12 * 0x18);
              uVar22 = *puVar21;
              iVar14 = iVar14 + 0x18;
              uVar30 = puVar27[-1];
              uVar15 = puVar27[-2];
              uVar24 = puVar27[1];
              *puVar21 = puVar27[-3];
              uVar16 = puVar21[1];
              uVar31 = puVar21[2];
              uVar33 = puVar21[3];
              uVar35 = puVar21[4];
              puVar21[1] = uVar15;
              puVar27[-3] = uVar22;
              puVar27[-2] = uVar16;
              puVar21[3] = uVar19;
              uVar16 = puVar21[5];
              uVar15 = puVar27[2];
              puVar21[2] = uVar30;
              puVar27[-1] = uVar31;
              *puVar27 = uVar33;
              puVar21[4] = uVar24;
              puVar27[1] = uVar35;
              puVar21[5] = uVar15;
              puVar27[2] = uVar16;
              iVar34 = iVar34 + -0x18;
            } while (uVar9 != 0);
          }
          else {
            uVar17 = 2;
            puVar13 = (uint *)(param_1 + 0x38 + uVar12 * 0x18);
            uVar23 = uVar26;
            uVar18 = uVar20;
            do {
              uVar7 = *puVar13;
              uVar10 = puVar13[1];
              if (uVar18 < uVar10 || uVar10 - uVar18 < (uint)(uVar23 <= uVar7)) goto LAB_0060c7dc;
              uVar17 = uVar17 + 1;
              puVar13 = puVar13 + 6;
              uVar23 = uVar7;
              uVar18 = uVar10;
            } while (local_190 != uVar17);
LAB_0060c7d8:
            uVar17 = local_190;
LAB_0060c7dc:
            if (uVar17 < uVar6) goto LAB_0060c6b0;
            if (uVar20 <= uVar9 && (uint)(*(uint *)(iVar34 + 8) <= uVar26) <= uVar20 - uVar9) {
              uVar9 = uVar17 >> 1;
              if (uVar9 != 0) goto LAB_0060c804;
              uVar17 = 1;
            }
          }
        }
        local_190 = uVar17 << 1 | 1;
      }
      uVar26 = uVar12 - (uVar32 >> 1);
      uVar20 = uVar26 + uVar12;
      lVar2 = (uVar5 & 0xffffffff) * (ulonglong)uVar20;
      uVar17 = (local_190 >> 1) + uVar12 * 2;
      lVar3 = (ulonglong)uVar17 * (uVar5 & 0xffffffff);
      uVar9 = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
      uVar26 = iVar4 * uVar17 + (int)((ulonglong)lVar3 >> 0x20) ^
               (uint)CARRY4(uVar26,uVar12) * (int)uVar5 +
               uVar20 * iVar4 + (int)((ulonglong)lVar2 >> 0x20);
      if (uVar26 != 0) {
        uVar9 = LZCOUNT(uVar26);
      }
      bVar8 = (byte)uVar9;
      if (uVar28 < 2) goto LAB_0060c680;
LAB_0060c930:
      do {
        while( true ) {
          uVar26 = uVar28 - 1;
          if (abStack_67[uVar28] < uVar9) goto LAB_0060cbc0;
          uVar23 = local_170[uVar26];
          uVar20 = uVar23 >> 1;
          uVar17 = uVar20 + (uVar32 >> 1);
          uVar28 = uVar26;
          if ((param_4 < uVar17) || (((uVar23 | uVar32) & 1) != 0)) break;
          uVar32 = uVar17 * 2;
          if (uVar26 < 2) goto LAB_0060cbbc;
        }
        puVar27 = (undefined4 *)(param_1 + (uVar12 - uVar17) * 0x18);
        if ((uVar23 & 1) == 0) {
          FUN_0060f104(puVar27,uVar20,param_3,param_4,LZCOUNT(uVar20 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar32 & 1) == 0) {
          FUN_0060f104(puVar27 + uVar20 * 6,uVar32 >> 1,param_3,param_4,
                       LZCOUNT(uVar32 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar18 = uVar32 >> 1;
        if (1 < uVar23 && 1 < uVar32) {
          uVar32 = uVar20;
          if (uVar18 < uVar20) {
            uVar32 = uVar18;
          }
          if (uVar32 <= param_4) {
            puVar21 = puVar27 + uVar20 * 6;
            puVar11 = puVar27;
            if (uVar18 < uVar20) {
              puVar11 = puVar21;
            }
            FUN_016dd1aa(param_3,puVar11,uVar32 * 0x18);
            puVar36 = param_3 + uVar32 * 6;
            puVar11 = param_3;
            if (uVar18 < uVar20) {
              puVar29 = (undefined4 *)(param_1 + -0x18 + uVar12 * 0x18);
              puVar25 = puVar21;
              do {
                uVar23 = puVar36[-3];
                uVar32 = puVar25[-3];
                bVar1 = uVar23 - uVar32 < (uint)((uint)puVar25[-4] <= (uint)puVar36[-4]);
                uVar20 = (uint)(uVar32 < uVar23 || bVar1);
                uVar32 = (uint)(uVar32 >= uVar23 && !bVar1);
                puVar21 = puVar36 + -6;
                if (uVar32 != 0) {
                  puVar21 = puVar25 + -6;
                }
                uVar15 = puVar21[1];
                uVar16 = puVar21[2];
                uVar19 = puVar21[3];
                uVar22 = puVar21[4];
                uVar24 = puVar21[5];
                puVar36 = puVar36 + -6 + (uVar32 | uVar32 << 1) * 2;
                *puVar29 = *puVar21;
                puVar29[1] = uVar15;
                puVar29[2] = uVar16;
                puVar29[3] = uVar19;
                puVar29[4] = uVar22;
                puVar29[5] = uVar24;
                puVar25 = puVar25 + -6 + (uVar20 | uVar20 << 1) * 2;
              } while ((puVar25 != puVar27) && (puVar29 = puVar29 + -6, puVar36 != param_3));
            }
            else {
              puVar25 = puVar27;
              do {
                uVar32 = puVar11[3];
                uVar20 = puVar21[3];
                bVar1 = uVar20 - uVar32 < (uint)((uint)puVar11[2] <= (uint)puVar21[2]);
                uVar23 = (uint)(uVar32 < uVar20 || bVar1);
                uVar32 = (uint)(uVar32 >= uVar20 && !bVar1);
                puVar27 = puVar11;
                if (uVar32 != 0) {
                  puVar27 = puVar21;
                }
                uVar15 = puVar27[1];
                uVar16 = puVar27[2];
                uVar19 = puVar27[3];
                uVar22 = puVar27[4];
                uVar24 = puVar27[5];
                *puVar25 = *puVar27;
                puVar25[1] = uVar15;
                puVar25[2] = uVar16;
                puVar25[3] = uVar19;
                puVar25[4] = uVar22;
                puVar25[5] = uVar24;
                puVar27 = (undefined4 *)(uVar23 | uVar23 << 1);
                puVar25 = puVar25 + 6;
                puVar11 = puVar11 + (int)puVar27 * 2;
                if (puVar11 != puVar36) {
                  puVar21 = puVar21 + (uVar32 | uVar32 << 1) * 2;
                  puVar27 = (undefined4 *)(param_1 + uVar12 * 0x18);
                }
              } while (puVar11 != puVar36 && puVar21 != puVar27);
            }
            FUN_016dd1aa(puVar25,puVar11,(int)puVar36 - (int)puVar11);
          }
        }
        uVar32 = uVar17 * 2 | 1;
      } while (1 < uVar26);
LAB_0060cbbc:
      uVar28 = 1;
LAB_0060cbc0:
      abStack_67[uVar28 + 1] = (byte)uVar9;
      local_170[uVar28] = uVar32;
      uVar9 = uVar32;
      uVar32 = local_190;
    }
    else {
      if (1 < uVar28) goto LAB_0060c930;
LAB_0060c680:
      abStack_67[uVar28 + 1] = bVar8;
      local_170[uVar28] = uVar32;
      uVar9 = uVar32;
      uVar32 = local_190;
    }
    if (param_2 <= uVar12) {
      if ((uVar9 & 1) == 0) {
        FUN_0060f104(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar28 = uVar28 + 1;
    uVar12 = uVar12 + (uVar32 >> 1);
  } while( true );
}

