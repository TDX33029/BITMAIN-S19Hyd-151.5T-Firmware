// FUN_0169e998 @ 0169e998 size=1652 calls_out=7 calls_in=1
// strings: 

undefined4 FUN_0169e998(int *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint *local_2c;
  uint **local_28;
  
  iVar24 = param_1[3];
  local_28 = &local_2c;
  uVar2 = iVar24 + 1;
  local_2c = param_2;
  if (iVar24 != -1) {
    uVar8 = param_1[1];
    if (7 < uVar8) {
      uVar8 = (uVar8 + 1 & 0xfffffff8) - (uVar8 + 1 >> 3);
    }
    if (uVar2 <= uVar8 >> 1) {
      FUN_0169e0d0(param_1,&local_28,FUN_0169f01c,0x18,FUN_0169f34c);
      return 0x80000001;
    }
    if (uVar2 < uVar8 + 1) {
      uVar2 = uVar8 + 1;
    }
    if (uVar2 < 0xf) {
      uVar8 = (uVar2 & 8) + 8;
      if (uVar2 < 4) {
        uVar8 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar2) goto LAB_0169ef84;
      iVar3 = (int)((ulonglong)(uVar2 << 3) * 0x24924925 >> 0x20);
      uVar8 = (0xffffffffU >> LZCOUNT((iVar3 + (uVar2 * 8 - iVar3 >> 1) >> 2) - 1)) + 1;
    }
    uVar2 = (uint)((ulonglong)uVar8 * 0x18);
    if ((int)((ulonglong)uVar8 * 0x18 >> 0x20) == 0) {
      uVar17 = uVar8 + 4;
      uVar14 = uVar2 + uVar17;
      if ((!CARRY4(uVar2,uVar17)) && (uVar14 < 0x7ffffff9)) {
        iVar3 = thunk_FUN_016d4a50(uVar14);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,uVar14);
        }
        puVar26 = (uint *)(iVar3 + uVar2);
        FUN_016dd606(puVar26,0xff,uVar17);
        uVar14 = uVar8 - 1;
        uVar2 = uVar14;
        if (7 < uVar14) {
          uVar2 = (uVar8 & 0xfffffff8) - (uVar8 >> 3);
        }
        if (iVar24 == 0) {
          iVar24 = 0;
        }
        else {
          uVar28 = param_2[2];
          uVar30 = param_2[3];
          uVar11 = uVar28 ^ 0x6e646f6d;
          uVar18 = uVar30 ^ 0x646f7261;
          uVar17 = *param_2 ^ 0x70736575;
          uVar10 = uVar11 + uVar17;
          uVar8 = uVar10 ^ (uVar11 << 0xd | uVar18 >> 0x13);
          uVar17 = uVar18 + (param_2[1] ^ 0x736f6d65) + (uint)CARRY4(uVar11,uVar17);
          uVar18 = uVar17 ^ (uVar18 << 0xd | uVar11 >> 0x13);
          puVar19 = (uint *)*param_1;
          uVar12 = param_2[1] ^ 0x6c796765;
          uVar11 = *param_2 ^ 0x6e657261;
          iVar3 = 0;
          uVar15 = ~*puVar19 & 0x80808080;
          puVar13 = puVar19;
          do {
            if (uVar15 == 0) {
              do {
                puVar13 = puVar13 + 1;
                iVar3 = iVar3 + 4;
              } while ((*puVar13 & 0x80808080) == 0x80808080);
              uVar15 = *puVar13 & 0x80808080 ^ 0x80808080;
            }
            uVar5 = iVar3 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                           (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3);
            uVar9 = puVar19[uVar5 * -6 + -5] ^ uVar30 ^ 0x74656462;
            uVar20 = puVar19[uVar5 * -6 + -6] ^ uVar28 ^ 0x79746573;
            uVar6 = uVar9 + uVar12 + (uint)CARRY4(uVar20,uVar11) ^ (uVar9 << 0x10 | uVar20 >> 0x10);
            uVar21 = uVar20 + uVar11 ^ (uVar20 << 0x10 | uVar9 >> 0x10);
            uVar4 = uVar21 + uVar17 ^ puVar19[uVar5 * -6 + -6];
            uVar16 = uVar6 + uVar10 + (uint)CARRY4(uVar21,uVar17);
            uVar22 = uVar20 + uVar11 + uVar8;
            uVar20 = uVar9 + uVar12 + uVar18 + (uint)CARRY4(uVar11,uVar8) +
                     (uint)CARRY4(uVar20,uVar11 + uVar8);
            uVar29 = uVar20 ^ (uVar18 << 0x11 | uVar8 >> 0xf);
            uVar25 = uVar22 ^ (uVar8 << 0x11 | uVar18 >> 0xf);
            uVar9 = uVar4 + uVar25;
            uVar27 = (uVar16 ^ puVar19[uVar5 * -6 + -5]) + uVar29 + (uint)CARRY4(uVar4,uVar25);
            uVar23 = uVar9 ^ (uVar25 << 0xd | uVar29 >> 0x13);
            uVar4 = uVar27 ^ (uVar29 << 0xd | uVar25 >> 0x13);
            uVar16 = (uVar6 << 0x15 | uVar21 >> 0xb) ^ uVar16;
            uVar25 = uVar16 ^ 0x8000000;
            uVar6 = (uVar21 << 0x15 | uVar6 >> 0xb) ^ uVar21 + uVar17;
            uVar29 = uVar6 + uVar20;
            uVar21 = uVar25 + uVar22 + (uint)CARRY4(uVar6,uVar20);
            uVar20 = (uVar6 << 0x10 | uVar25 >> 0x10) ^ uVar29;
            uVar25 = uVar21 + uVar4 + (uint)CARRY4(uVar29,uVar23);
            uVar21 = (uVar16 << 0x10 | uVar6 >> 0x10) ^ uVar21;
            uVar6 = uVar20 + uVar27;
            uVar16 = uVar25 ^ (uVar4 << 0x11 | uVar23 >> 0xf);
            uVar4 = uVar21 + uVar9 + (uint)CARRY4(uVar20,uVar27);
            uVar4 = uVar29 + uVar23 ^ (uVar23 << 0x11 | uVar4 >> 0xf);
            uVar6 = (uVar4 ^ 0x8000000) + uVar16 + (uint)CARRY4(uVar6,uVar4);
            uVar6 = uVar6 ^ (uVar16 << 0xd | uVar4 >> 0x13);
            uVar4 = uVar6 + uVar4 ^ (uVar4 << 0xd | uVar16 >> 0x13);
            uVar25 = uVar25 ^ 0xff;
            uVar6 = (uVar20 << 0x15 | uVar21 >> 0xb) ^ uVar6;
            uVar4 = (uVar21 << 0x15 | uVar20 >> 0xb) ^ uVar4;
            uVar6 = uVar6 + uVar25;
            uVar4 = uVar4 + uVar29 + uVar23 + (uint)CARRY4(uVar6,uVar25);
            uVar6 = uVar6 + uVar4 + (uint)CARRY4(uVar4,uVar6);
            uVar6 = uVar6 ^ (uVar6 << 0x11 | uVar4 >> 0xf);
            uVar4 = uVar4 + uVar6 ^ (uVar4 << 0x11 | uVar6 >> 0xf);
            uVar4 = (uVar4 << 0x10 | uVar6 >> 0x10) ^ uVar4;
            uVar6 = (uVar6 << 0x10 | uVar4 >> 0x10) ^ uVar6;
            uVar6 = uVar6 + uVar6;
            uVar4 = uVar4 + uVar6 + uVar4 + (uint)CARRY4(uVar6,uVar6);
            uVar6 = uVar6 + uVar4 + (uint)CARRY4(uVar4,uVar6);
            uVar6 = (uVar6 << 0xd | uVar4 >> 0x13) ^ uVar6;
            uVar4 = (uVar4 << 0xd | uVar6 >> 0x13) ^ uVar4 + uVar6;
            uVar4 = (uVar4 << 0x15 | uVar6 >> 0xb) ^ uVar4;
            uVar6 = (uVar6 << 0x15 | uVar4 >> 0xb) ^ uVar6;
            uVar6 = uVar6 + uVar6;
            uVar4 = uVar4 + uVar4 + uVar6 + (uint)CARRY4(uVar6,uVar6);
            uVar6 = uVar6 + uVar4 + (uint)CARRY4(uVar4,uVar6);
            uVar6 = (uVar6 << 0x11 | uVar4 >> 0xf) ^ uVar6;
            uVar4 = (uVar4 << 0x11 | uVar6 >> 0xf) ^ uVar4 + uVar6;
            uVar4 = (uVar4 << 0x10 | uVar6 >> 0x10) ^ uVar4;
            uVar6 = (uVar6 << 0x10 | uVar4 >> 0x10) ^ uVar6;
            uVar6 = uVar6 + uVar6;
            uVar4 = uVar4 + uVar4 + uVar6 + (uint)CARRY4(uVar6,uVar6);
            uVar4 = (uVar6 << 0xd | uVar4 >> 0x13) ^ uVar6 + uVar4 + (uint)CARRY4(uVar4,uVar6);
            uVar4 = (uVar4 << 0xd | uVar6 >> 0x13) ^ uVar4 + uVar6;
            uVar4 = (uVar4 << 0x15 | uVar6 >> 0xb) ^ uVar4;
            uVar6 = (uVar6 << 0x15 | uVar4 >> 0xb) ^ uVar6;
            uVar6 = uVar6 + uVar6;
            uVar4 = uVar4 + uVar4 + uVar6 + (uint)CARRY4(uVar6,uVar6);
            uVar4 = ((uVar4 >> 0x10 ^ uVar6) << 0x15 |
                    ((uVar4 << 0x10 | uVar6 >> 0x10) ^ uVar4) >> 0xb) ^
                    (uVar4 << 0x11 | uVar4 >> 0xf) ^ uVar4 + uVar4 + (uint)CARRY4(uVar4,uVar6) ^
                    uVar4 + uVar6;
            uVar9 = uVar14 & uVar4;
            uVar6 = *(uint *)((int)puVar26 + uVar9) & 0x80808080;
            if (uVar6 == 0) {
              iVar7 = 4;
              do {
                uVar9 = uVar9 + iVar7;
                iVar7 = iVar7 + 4;
                uVar9 = uVar9 & uVar14;
                uVar6 = *(uint *)((int)puVar26 + uVar9) & 0x80808080;
              } while (uVar6 == 0);
            }
            uVar9 = uVar9 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                           (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                    uVar14;
            if (-1 < *(char *)((int)puVar26 + uVar9)) {
              uVar9 = *puVar26 & 0x80808080;
              uVar9 = (uint)LZCOUNT((*puVar26 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                    (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3;
            }
            uVar15 = uVar15 - 1 & uVar15;
            bVar1 = (byte)(uVar4 >> 0x19);
            *(byte *)((int)puVar26 + uVar9) = bVar1;
            iVar24 = iVar24 + -1;
            *(byte *)((int)puVar26 + (uVar9 - 4 & uVar14) + 4) = bVar1;
            FUN_016dd1aa(puVar26 + ~uVar9 * 6,puVar19 + ~uVar5 * 6,0x18);
          } while (iVar24 != 0);
          iVar24 = param_1[3];
        }
        iVar3 = *param_1;
        iVar7 = param_1[1];
        *param_1 = (int)puVar26;
        param_1[1] = uVar14;
        param_1[2] = uVar2 - iVar24;
        param_1[3] = iVar24;
        if (iVar7 == 0) {
          return 0x80000001;
        }
        iVar24 = iVar7 * 0x18 + 0x18;
        if (iVar7 + iVar24 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4(iVar3 - iVar24);
        return 0x80000001;
      }
    }
  }
LAB_0169ef84:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

