// FUN_01335860 @ 01335860 size=1368 calls_out=7 calls_in=1
// strings: 

undefined4 FUN_01335860(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint *local_40;
  undefined4 local_2c;
  undefined4 *local_28;
  
  iVar18 = param_1[3];
  local_28 = &local_2c;
  uVar2 = iVar18 + 1;
  local_2c = param_2;
  if (iVar18 != -1) {
    uVar15 = param_1[1];
    uVar5 = uVar15;
    if (7 < uVar15) {
      uVar5 = (uVar15 + 1 & 0xfffffff8) - (uVar15 + 1 >> 3);
    }
    if (uVar2 <= uVar5 >> 1) {
      FUN_01336020(param_1,&local_28,FUN_01335dc8,0x34,&LAB_01336018);
      return 0x80000001;
    }
    if (uVar2 < uVar5 + 1) {
      uVar2 = uVar5 + 1;
    }
    if (uVar2 < 0xf) {
      uVar5 = (uVar2 & 8) + 8;
      if (uVar2 < 4) {
        uVar5 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar2) goto LAB_01335d28;
      iVar3 = (int)((ulonglong)(uVar2 << 3) * 0x24924925 >> 0x20);
      uVar5 = (0xffffffffU >> LZCOUNT((iVar3 + (uVar2 * 8 - iVar3 >> 1) >> 2) - 1)) + 1;
    }
    uVar2 = (uint)((ulonglong)uVar5 * 0x34);
    if ((int)((ulonglong)uVar5 * 0x34 >> 0x20) == 0) {
      uVar12 = uVar5 + 4;
      uVar9 = uVar2 + uVar12;
      if ((!CARRY4(uVar2,uVar12)) && (uVar9 < 0x7ffffffd)) {
        iVar3 = thunk_FUN_016d4a50(uVar9);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,uVar9);
        }
        puVar19 = (uint *)(iVar3 + uVar2);
        FUN_016dd606(puVar19,0xff,uVar12);
        uVar9 = uVar5 - 1;
        uVar2 = uVar9;
        if (7 < uVar9) {
          uVar2 = (uVar5 & 0xfffffff8) - (uVar5 >> 3);
        }
        if (iVar18 == 0) {
          local_40 = (uint *)*param_1;
          iVar18 = 0;
        }
        else {
          local_40 = (uint *)*param_1;
          iVar17 = 0;
          uVar5 = ~*local_40 & 0x80808080;
          puVar14 = local_40;
          iVar3 = iVar18;
          do {
            if (uVar5 == 0) {
              do {
                puVar14 = puVar14 + 1;
                iVar17 = iVar17 + 4;
              } while ((*puVar14 & 0x80808080) == 0x80808080);
              uVar5 = *puVar14 & 0x80808080 ^ 0x80808080;
            }
            uVar12 = iVar17 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                             (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3);
            uVar7 = local_40[uVar12 * -0xd + -0xd] ^ 0x79746573;
            uVar10 = (uVar7 >> 0x10 | 0x64620000) ^ (0x919a8d9e < uVar7) + 0xdcdecbc7;
            uVar8 = (uVar7 << 0x10 | 0x7065) ^ uVar7 + 0x6e657261;
            uVar6 = uVar10 + 0xded7d4e2 + (uint)(0x28212039 < uVar8);
            uVar13 = (uVar10 << 0x15 | uVar8 >> 0xb) ^ uVar6;
            uVar4 = (0x3e60152f < uVar7) + 0x1671bdd1;
            uVar10 = (uVar8 << 0x15 | uVar10 >> 0xb) ^ uVar8 + 0xd7dedfc6;
            uVar22 = uVar4 ^ 0xff;
            uVar23 = uVar10 + uVar22;
            uVar20 = uVar13 + uVar7 + 0xc19fead0 + (uint)CARRY4(uVar10,uVar22);
            uVar11 = (uVar13 << 0x10 | uVar10 >> 0x10) ^ uVar20;
            uVar13 = (uVar10 << 0x10 | uVar13 >> 0x10) ^ uVar23;
            uVar22 = uVar8 + 0xd7dedfc6 ^ local_40[uVar12 * -0xd + -0xd];
            uVar4 = uVar4 ^ 0xe414a674;
            uVar8 = uVar7 + 0xc19fead0 ^ 0xf0de7325;
            uVar10 = uVar22 + uVar8;
            uVar6 = (uVar6 ^ 0x4000000) + uVar4 + (uint)CARRY4(uVar22,uVar8);
            uVar22 = uVar13 + uVar6;
            uVar7 = uVar6 ^ (uVar4 << 0xd | uVar8 >> 0x13);
            uVar16 = uVar11 + uVar10 + (uint)CARRY4(uVar13,uVar6);
            uVar10 = uVar10 ^ (uVar8 << 0xd | 0x1e4c);
            uVar6 = (uVar11 << 0x15 | uVar13 >> 0xb) ^ uVar16;
            uVar4 = (uVar13 << 0x15 | uVar11 >> 0xb) ^ uVar22;
            uVar4 = uVar7 + uVar20 + (uint)CARRY4(uVar10,uVar23);
            uVar4 = uVar4 + uVar4;
            uVar4 = uVar6 + uVar10 + uVar23 + (uint)CARRY4(uVar4,uVar4);
            uVar4 = (uVar6 << 0x10 | uVar4 >> 0x10) ^ uVar4;
            uVar4 = uVar4 ^ (uVar7 << 0x11 | uVar10 >> 0xf);
            uVar4 = uVar10 + uVar23 ^ (uVar10 << 0x11 | uVar7 >> 0xf);
            uVar4 = uVar4 + uVar16 + (uint)CARRY4(uVar4,uVar22);
            uVar4 = (uVar4 << 0x10 | uVar6 >> 0x10) ^ uVar4;
            uVar4 = (uVar4 << 0xd | uVar4 >> 0x13) ^ uVar4;
            uVar4 = uVar4 + uVar4;
            uVar4 = (uVar4 << 0xd | uVar4 >> 0x13) ^ uVar4 + uVar22;
            uVar4 = uVar4 + uVar4 + uVar22 + (uint)CARRY4(uVar4,uVar4);
            uVar4 = uVar4 + uVar4 + (uint)CARRY4(uVar4,uVar4);
            uVar4 = (uVar4 << 0x11 | uVar4 >> 0xf) ^ uVar4 + uVar4;
            uVar4 = (uVar4 << 0x15 | uVar4 >> 0xb) ^ uVar4;
            uVar4 = (uVar4 << 0x11 | uVar4 >> 0xf) ^ uVar4;
            uVar4 = (uVar4 << 0x15 | uVar4 >> 0xb) ^ uVar4;
            uVar4 = uVar4 + uVar4;
            uVar4 = (uVar4 << 0xd | uVar4 >> 0x13) ^ uVar4 + uVar4 + (uint)CARRY4(uVar4,uVar4);
            uVar4 = uVar4 + uVar4 + uVar4 + (uint)CARRY4(uVar4,uVar4);
            uVar4 = (uVar4 << 0xd | uVar4 >> 0x13) ^ uVar4 + uVar4;
            uVar4 = ((uVar4 >> 0x10 ^ uVar4) << 0x15 |
                    ((uVar4 << 0x10 | uVar4 >> 0x10) ^ uVar4) >> 0xb) ^
                    (uVar4 << 0x11 | uVar4 >> 0xf) ^ uVar4 + uVar4 + (uint)CARRY4(uVar4,uVar4) ^
                    uVar4 + uVar4;
            uVar6 = uVar9 & uVar4;
            uVar7 = *(uint *)((int)puVar19 + uVar6) & 0x80808080;
            if (uVar7 == 0) {
              iVar21 = 4;
              do {
                uVar6 = uVar6 + iVar21;
                iVar21 = iVar21 + 4;
                uVar6 = uVar6 & uVar9;
                uVar7 = *(uint *)((int)puVar19 + uVar6) & 0x80808080;
              } while (uVar7 == 0);
            }
            uVar6 = uVar6 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                           (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) &
                    uVar9;
            if (-1 < *(char *)((int)puVar19 + uVar6)) {
              uVar6 = *puVar19 & 0x80808080;
              uVar6 = (uint)LZCOUNT((*puVar19 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                    (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3;
            }
            uVar5 = uVar5 - 1 & uVar5;
            bVar1 = (byte)(uVar4 >> 0x19);
            *(byte *)((int)puVar19 + uVar6) = bVar1;
            iVar3 = iVar3 + -1;
            *(byte *)((int)puVar19 + (uVar6 - 4 & uVar9) + 4) = bVar1;
            FUN_016dd1aa(puVar19 + ~uVar6 * 0xd,local_40 + ~uVar12 * 0xd,0x34);
          } while (iVar3 != 0);
        }
        *param_1 = puVar19;
        param_1[1] = uVar9;
        param_1[2] = uVar2 - iVar18;
        if (uVar15 == 0) {
          return 0x80000001;
        }
        iVar18 = uVar15 * 0x34 + 0x34;
        if (uVar15 + iVar18 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4((int)local_40 - iVar18);
        return 0x80000001;
      }
    }
  }
LAB_01335d28:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

