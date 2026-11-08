// FUN_010ff9fc @ 010ff9fc size=3120 calls_out=6 calls_in=1
// strings: 

undefined4
FUN_010ff9fc(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
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
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  bool bVar31;
  bool bVar32;
  
  uVar25 = param_1[3];
  uVar5 = uVar25 + 1;
  if (0xfffffffe < uVar25) goto LAB_01100574;
  uVar15 = param_1[1];
  uVar29 = uVar15 + 1;
  uVar22 = uVar15;
  if (7 < uVar15) {
    uVar22 = (uVar29 & 0xfffffff8) - (uVar29 >> 3);
  }
  if (uVar22 >> 1 < uVar5) {
    uVar22 = uVar22 + 1;
    if (uVar5 < uVar22) {
      uVar5 = uVar22;
    }
    if (uVar5 < 0xf) {
      uVar15 = (uVar5 & 8) + 8;
      if (uVar5 < 4) {
        uVar15 = 4;
      }
      uVar5 = uVar15 + 4;
      uVar22 = uVar5 + uVar15 * 0x10;
      if (uVar22 < uVar5) goto LAB_01100574;
    }
    else {
      bVar32 = 0x1ffffffe < uVar5;
      bVar31 = uVar5 == 0x1fffffff;
      if (uVar5 < 0x20000000) {
        iVar6 = (int)((ulonglong)(uVar5 << 3) * 0x24924925 >> 0x20);
        iVar3 = uVar5 * 8;
        uVar5 = 0xffffffff;
        uVar22 = LZCOUNT((iVar6 + ((uint)(iVar3 - iVar6) >> 1) >> 2) - 1);
        bVar32 = 0xffffffd < 0xffffffffU >> uVar22;
        bVar31 = 0xffffffffU >> uVar22 == 0xffffffe;
      }
      if (bVar32 && !bVar31) goto LAB_01100574;
      uVar5 = uVar5 >> (uVar22 & 0xff);
      uVar15 = uVar5 + 1;
      uVar5 = uVar5 + 5;
      uVar22 = uVar5 + uVar15 * 0x10;
      if (uVar22 < uVar5) goto LAB_01100574;
    }
    if (0x7ffffff8 < uVar22) {
LAB_01100574:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
    }
    iVar3 = thunk_FUN_016d4a50(uVar22);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,uVar22);
    }
    puVar27 = (uint *)(iVar3 + uVar15 * 0x10);
    FUN_016dd606(puVar27,0xff,uVar5);
    uVar22 = uVar15 - 1;
    uVar5 = uVar22;
    if (7 < uVar22) {
      uVar5 = (uVar15 & 0xfffffff8) - (uVar15 >> 3);
    }
    if (uVar25 == 0) {
      uVar25 = 0;
    }
    else {
      uVar29 = param_5 ^ 0x6e646f6d;
      uVar15 = param_6 ^ 0x646f7261;
      uVar12 = uVar29 + (param_3 ^ 0x70736575);
      uVar8 = uVar12 ^ (uVar29 << 0xd | uVar15 >> 0x13);
      uVar13 = uVar15 + (param_4 ^ 0x736f6d65) + (uint)CARRY4(uVar29,param_3 ^ 0x70736575);
      uVar29 = uVar13 ^ (uVar15 << 0xd | uVar29 >> 0x13);
      iVar3 = 0;
      param_3 = param_3 ^ 0x6e657261;
      puVar24 = (uint *)*param_1;
      uVar16 = ~*puVar24 & 0x80808080;
      uVar15 = uVar25;
      puVar11 = puVar24;
      do {
        if (uVar16 == 0) {
          do {
            puVar11 = puVar11 + 1;
            iVar3 = iVar3 + 4;
          } while ((*puVar11 & 0x80808080) == 0x80808080);
          uVar16 = *puVar11 & 0x80808080 ^ 0x80808080;
        }
        iVar6 = iVar3 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                       (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3);
        uVar7 = puVar24[iVar6 * -4 + -4];
        uVar4 = (puVar24 + iVar6 * -4 + -4)[1];
        uVar20 = uVar4 ^ param_6 ^ 0x74656462;
        uVar17 = uVar7 ^ param_5 ^ 0x79746573;
        uVar14 = uVar20 + (param_4 ^ 0x6c796765) + (uint)CARRY4(uVar17,param_3) ^
                 (uVar20 << 0x10 | uVar17 >> 0x10);
        uVar23 = uVar17 + param_3 ^ (uVar17 << 0x10 | uVar20 >> 0x10);
        uVar7 = uVar23 + uVar13 ^ uVar7;
        uVar9 = uVar14 + uVar12 + (uint)CARRY4(uVar23,uVar13);
        uVar26 = uVar17 + param_3 + uVar8;
        uVar21 = uVar20 + (param_4 ^ 0x6c796765) + uVar29 + (uint)CARRY4(param_3,uVar8) +
                 (uint)CARRY4(uVar17,param_3 + uVar8);
        uVar28 = uVar26 ^ (uVar8 << 0x11 | uVar29 >> 0xf);
        uVar20 = uVar21 ^ (uVar29 << 0x11 | uVar8 >> 0xf);
        uVar17 = uVar7 + uVar28;
        uVar4 = (uVar9 ^ uVar4) + uVar20 + (uint)CARRY4(uVar7,uVar28);
        uVar30 = uVar17 ^ (uVar28 << 0xd | uVar20 >> 0x13);
        uVar18 = uVar4 ^ (uVar20 << 0xd | uVar28 >> 0x13);
        uVar9 = (uVar14 << 0x15 | uVar23 >> 0xb) ^ uVar9;
        uVar28 = uVar9 ^ 0x8000000;
        uVar7 = (uVar23 << 0x15 | uVar14 >> 0xb) ^ uVar23 + uVar13;
        uVar20 = uVar7 + uVar21;
        uVar21 = uVar28 + uVar26 + (uint)CARRY4(uVar7,uVar21);
        uVar14 = uVar21 + uVar18 + (uint)CARRY4(uVar20,uVar30);
        uVar21 = (uVar9 << 0x10 | uVar7 >> 0x10) ^ uVar21;
        uVar23 = uVar14 ^ (uVar18 << 0x11 | uVar30 >> 0xf);
        uVar9 = (uVar7 << 0x10 | uVar28 >> 0x10) ^ uVar20;
        uVar7 = uVar9 + uVar4;
        uVar4 = uVar21 + uVar17 + (uint)CARRY4(uVar9,uVar4);
        uVar4 = uVar20 + uVar30 ^ (uVar30 << 0x11 | uVar18 >> 0xf);
        uVar7 = (uVar4 ^ 0x8000000) + uVar23 + (uint)CARRY4(uVar7,uVar4);
        uVar7 = uVar7 ^ (uVar23 << 0xd | uVar4 >> 0x13);
        uVar4 = uVar7 + uVar4 ^ (uVar4 << 0xd | uVar23 >> 0x13);
        uVar4 = (uVar21 << 0x15 | uVar9 >> 0xb) ^ uVar4;
        uVar7 = (uVar9 << 0x15 | uVar21 >> 0xb) ^ uVar7;
        uVar14 = uVar14 ^ 0xff;
        uVar7 = uVar7 + uVar14;
        uVar4 = uVar4 + uVar20 + uVar30 + (uint)CARRY4(uVar7,uVar14);
        uVar7 = uVar7 + uVar4 + (uint)CARRY4(uVar4,uVar7);
        uVar7 = uVar7 ^ (uVar7 << 0x11 | uVar4 >> 0xf);
        uVar4 = uVar4 + uVar7 ^ (uVar4 << 0x11 | uVar7 >> 0xf);
        uVar4 = (uVar4 << 0x10 | uVar7 >> 0x10) ^ uVar4;
        uVar7 = (uVar7 << 0x10 | uVar4 >> 0x10) ^ uVar7;
        uVar7 = uVar7 + uVar7;
        uVar4 = uVar4 + uVar7 + uVar4 + (uint)CARRY4(uVar7,uVar7);
        uVar7 = uVar7 + uVar4 + (uint)CARRY4(uVar4,uVar7);
        uVar7 = (uVar7 << 0xd | uVar4 >> 0x13) ^ uVar7;
        uVar4 = (uVar4 << 0xd | uVar7 >> 0x13) ^ uVar4 + uVar7;
        uVar4 = (uVar4 << 0x15 | uVar7 >> 0xb) ^ uVar4;
        uVar7 = (uVar7 << 0x15 | uVar4 >> 0xb) ^ uVar7;
        uVar7 = uVar7 + uVar7;
        uVar4 = uVar4 + uVar4 + uVar7 + (uint)CARRY4(uVar7,uVar7);
        uVar7 = uVar7 + uVar4 + (uint)CARRY4(uVar4,uVar7);
        uVar7 = (uVar7 << 0x11 | uVar4 >> 0xf) ^ uVar7;
        uVar4 = (uVar4 << 0x11 | uVar7 >> 0xf) ^ uVar4 + uVar7;
        uVar4 = (uVar4 << 0x10 | uVar7 >> 0x10) ^ uVar4;
        uVar7 = (uVar7 << 0x10 | uVar4 >> 0x10) ^ uVar7;
        uVar7 = uVar7 + uVar7;
        uVar4 = uVar4 + uVar4 + uVar7 + (uint)CARRY4(uVar7,uVar7);
        uVar4 = (uVar4 << 0x15 | uVar7 >> 0xb) ^ uVar4;
        uVar7 = (uVar7 << 0x15 | uVar4 >> 0xb) ^ uVar7;
        uVar7 = uVar7 + uVar7;
        uVar4 = (uVar4 << 0xd | uVar7 >> 0x13) ^ uVar4 + uVar7;
        uVar4 = uVar4 + uVar4 + uVar7 + (uint)CARRY4(uVar7,uVar7);
        uVar4 = (uVar7 << 0xd | uVar4 >> 0x13) ^ uVar7 + uVar4 + (uint)CARRY4(uVar4,uVar7);
        uVar4 = ((uVar4 >> 0x10 ^ uVar7) << 0x15 | ((uVar4 << 0x10 | uVar7 >> 0x10) ^ uVar4) >> 0xb)
                ^ (uVar4 << 0x11 | uVar4 >> 0xf) ^ uVar4 + uVar4 + (uint)CARRY4(uVar4,uVar7) ^
                uVar4 + uVar7;
        uVar7 = uVar22 & uVar4;
        uVar14 = *(uint *)((int)puVar27 + uVar7) & 0x80808080;
        if (uVar14 == 0) {
          iVar10 = 4;
          do {
            uVar7 = uVar7 + iVar10;
            iVar10 = iVar10 + 4;
            uVar7 = uVar7 & uVar22;
            uVar14 = *(uint *)((int)puVar27 + uVar7) & 0x80808080;
          } while (uVar14 == 0);
        }
        uVar7 = uVar7 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                       (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) & uVar22
        ;
        if (-1 < *(char *)((int)puVar27 + uVar7)) {
          uVar7 = *puVar27 & 0x80808080;
          uVar7 = (uint)LZCOUNT((*puVar27 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3;
        }
        uVar16 = uVar16 - 1 & uVar16;
        bVar2 = (byte)(uVar4 >> 0x19);
        *(byte *)((int)puVar27 + uVar7) = bVar2;
        uVar15 = uVar15 - 1;
        *(byte *)((int)puVar27 + (uVar7 - 4 & uVar22) + 4) = bVar2;
        uVar4 = puVar24[iVar6 * -4 + -4];
        uVar14 = puVar24[iVar6 * -4 + -3];
        uVar17 = puVar24[iVar6 * -4 + -2];
        puVar27[uVar7 * -4 + -1] = puVar24[iVar6 * -4 + -1];
        puVar27[uVar7 * -4 + -2] = uVar17;
        puVar27[uVar7 * -4 + -3] = uVar14;
        puVar27[uVar7 * -4 + -4] = uVar4;
      } while (uVar15 != 0);
    }
    iVar3 = *param_1;
    iVar6 = param_1[1];
    *param_1 = (int)puVar27;
    param_1[1] = uVar22;
    param_1[2] = uVar5 - uVar25;
    param_1[3] = uVar25;
    if ((iVar6 != 0) && (iVar10 = iVar6 * 0x10 + 0x10, iVar6 + iVar10 != -5)) {
      thunk_FUN_016d3fb4(iVar3 - iVar10);
      return 0x80000001;
    }
  }
  else {
    if (uVar29 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar29 >> 2;
      if ((uVar29 & 3) != 0) {
        uVar5 = (uVar29 >> 2) + 1;
      }
      puVar27 = (uint *)*param_1;
      iVar3 = 0;
      do {
        puVar27[-iVar3] = (~(puVar27[-iVar3] >> 7) & 0x1010101) + (puVar27[-iVar3] | 0x7f7f7f7f);
        iVar3 = iVar3 + -1;
      } while (-iVar3 != uVar5);
      if (uVar29 < 4) {
        FUN_016dd52c(puVar27 + 1,puVar27,uVar29);
      }
      else {
        *(uint *)((int)puVar27 + uVar29) = *puVar27;
      }
      uVar29 = param_5 ^ 0x6e646f6d;
      uVar25 = uVar29 + (param_3 ^ 0x70736575);
      uVar5 = param_6 ^ 0x646f7261;
      uVar8 = uVar25 ^ (uVar29 << 0xd | uVar5 >> 0x13);
      uVar22 = uVar5 + (param_4 ^ 0x736f6d65) + (uint)CARRY4(uVar29,param_3 ^ 0x70736575);
      uVar29 = uVar22 ^ (uVar5 << 0xd | uVar29 >> 0x13);
      param_3 = param_3 ^ 0x6e657261;
      uVar5 = 0;
      do {
        puVar11 = puVar27;
        if (*(char *)((int)puVar27 + uVar5) == -0x80) {
          puVar24 = puVar27 + ~uVar5 * 4;
          while( true ) {
            uVar12 = puVar27[uVar5 * -4 + -3] ^ param_6 ^ 0x74656462;
            uVar13 = puVar27[uVar5 * -4 + -4] ^ param_5 ^ 0x79746573;
            uVar16 = uVar12 + (param_4 ^ 0x6c796765) + (uint)CARRY4(uVar13,param_3) ^
                     (uVar12 << 0x10 | uVar13 >> 0x10);
            uVar7 = uVar13 + param_3 ^ (uVar13 << 0x10 | uVar12 >> 0x10);
            uVar14 = uVar7 + uVar22 ^ puVar27[uVar5 * -4 + -4];
            uVar20 = uVar16 + uVar25 + (uint)CARRY4(uVar7,uVar22);
            uVar21 = uVar13 + param_3 + uVar8;
            uVar13 = uVar12 + (param_4 ^ 0x6c796765) + uVar29 + (uint)CARRY4(param_3,uVar8) +
                     (uint)CARRY4(uVar13,param_3 + uVar8);
            uVar4 = uVar13 ^ (uVar29 << 0x11 | uVar8 >> 0xf);
            uVar17 = uVar21 ^ (uVar8 << 0x11 | uVar29 >> 0xf);
            uVar23 = uVar14 + uVar17;
            uVar28 = (uVar20 ^ puVar27[uVar5 * -4 + -3]) + uVar4 + (uint)CARRY4(uVar14,uVar17);
            uVar12 = uVar23 ^ (uVar17 << 0xd | uVar4 >> 0x13);
            uVar17 = uVar28 ^ (uVar4 << 0xd | uVar17 >> 0x13);
            uVar20 = (uVar16 << 0x15 | uVar7 >> 0xb) ^ uVar20;
            uVar9 = (uVar7 << 0x15 | uVar16 >> 0xb) ^ uVar7 + uVar22;
            uVar18 = uVar9 + uVar13;
            uVar16 = uVar20 ^ 0x8000000;
            uVar14 = uVar16 + uVar21 + (uint)CARRY4(uVar9,uVar13);
            uVar4 = (uVar9 << 0x10 | uVar16 >> 0x10) ^ uVar18;
            uVar7 = uVar14 + uVar17 + (uint)CARRY4(uVar18,uVar12);
            uVar14 = (uVar20 << 0x10 | uVar9 >> 0x10) ^ uVar14;
            uVar9 = uVar4 + uVar28;
            uVar28 = uVar14 + uVar23 + (uint)CARRY4(uVar4,uVar28);
            uVar13 = uVar18 + uVar12 ^ (uVar12 << 0x11 | uVar17 >> 0xf);
            uVar16 = uVar7 ^ (uVar17 << 0x11 | uVar12 >> 0xf);
            uVar21 = (uVar28 ^ 0x8000000) + uVar16 + (uint)CARRY4(uVar9,uVar13);
            uVar23 = uVar21 ^ (uVar16 << 0xd | uVar13 >> 0x13);
            uVar16 = uVar9 + uVar13 ^ (uVar13 << 0xd | uVar16 >> 0x13);
            uVar28 = (uVar14 << 0x15 | uVar4 >> 0xb) ^ uVar28;
            uVar14 = (uVar4 << 0x15 | uVar14 >> 0xb) ^ uVar9;
            uVar7 = uVar7 ^ 0xff;
            uVar20 = uVar14 + uVar7;
            uVar4 = uVar28 + uVar18 + uVar12 + (uint)CARRY4(uVar14,uVar7);
            uVar26 = uVar23 + uVar4 + (uint)CARRY4(uVar16,uVar20);
            uVar17 = uVar26 ^ (uVar23 << 0x11 | uVar16 >> 0xf);
            uVar12 = uVar16 + uVar20 ^ (uVar16 << 0x11 | uVar23 >> 0xf);
            uVar4 = (uVar28 << 0x10 | uVar14 >> 0x10) ^ uVar4;
            uVar7 = (uVar14 << 0x10 | uVar28 >> 0x10) ^ uVar20;
            uVar28 = uVar7 + uVar21;
            uVar14 = uVar4 + uVar9 + uVar13 + (uint)CARRY4(uVar7,uVar21);
            uVar21 = uVar17 + uVar14 + (uint)CARRY4(uVar12,uVar28);
            uVar18 = (uVar17 << 0xd | uVar12 >> 0x13) ^ uVar21;
            uVar13 = (uVar12 << 0xd | uVar17 >> 0x13) ^ uVar12 + uVar28;
            uVar14 = (uVar4 << 0x15 | uVar7 >> 0xb) ^ uVar14;
            uVar7 = (uVar7 << 0x15 | uVar4 >> 0xb) ^ uVar28;
            uVar9 = uVar7 + uVar26;
            uVar4 = uVar14 + uVar16 + uVar20 + (uint)CARRY4(uVar7,uVar26);
            uVar23 = uVar18 + uVar4 + (uint)CARRY4(uVar13,uVar9);
            uVar17 = (uVar18 << 0x11 | uVar13 >> 0xf) ^ uVar23;
            uVar16 = (uVar13 << 0x11 | uVar18 >> 0xf) ^ uVar13 + uVar9;
            uVar4 = (uVar14 << 0x10 | uVar7 >> 0x10) ^ uVar4;
            uVar14 = (uVar7 << 0x10 | uVar14 >> 0x10) ^ uVar9;
            uVar7 = uVar14 + uVar21;
            uVar28 = uVar4 + uVar12 + uVar28 + (uint)CARRY4(uVar14,uVar21);
            uVar20 = (uVar17 << 0xd | uVar16 >> 0x13) ^ uVar17 + uVar28 + (uint)CARRY4(uVar16,uVar7)
            ;
            uVar12 = (uVar16 << 0xd | uVar17 >> 0x13) ^ uVar16 + uVar7;
            uVar28 = (uVar4 << 0x15 | uVar14 >> 0xb) ^ uVar28;
            uVar7 = (uVar14 << 0x15 | uVar4 >> 0xb) ^ uVar7;
            uVar16 = uVar7 + uVar23;
            uVar13 = uVar28 + uVar13 + uVar9 + (uint)CARRY4(uVar7,uVar23);
            uVar4 = param_1[1];
            uVar13 = ((uVar28 >> 0x10 ^ uVar16) << 0x15 |
                     ((uVar28 << 0x10 | uVar7 >> 0x10) ^ uVar13) >> 0xb) ^
                     (uVar12 << 0x11 | uVar20 >> 0xf) ^
                     uVar20 + uVar13 + (uint)CARRY4(uVar12,uVar16) ^ uVar12 + uVar16;
            uVar7 = uVar4 & uVar13;
            uVar16 = *(uint *)((int)puVar27 + uVar7) & 0x80808080;
            uVar12 = uVar7;
            if (uVar16 == 0) {
              iVar3 = 4;
              do {
                uVar12 = uVar12 + iVar3 & uVar4;
                iVar3 = iVar3 + 4;
                uVar16 = *(uint *)((int)puVar27 + uVar12) & 0x80808080;
              } while (uVar16 == 0);
            }
            uVar12 = uVar12 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                             (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                     uVar4;
            if (-1 < *(char *)((int)puVar27 + uVar12)) {
              uVar12 = *puVar27 & 0x80808080;
              uVar12 = (uint)LZCOUNT((*puVar27 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                     (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar13 >> 0x18);
            if (((uVar12 - uVar7 ^ uVar5 - uVar7) & uVar4) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar27 + uVar5) = bVar2;
              puVar11 = (uint *)*param_1;
              *(byte *)((int)puVar11 + (uVar4 & uVar5 - 4) + 4) = bVar2;
              goto LAB_010fff7c;
            }
            cVar1 = *(char *)((int)puVar27 + uVar12);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar27 + uVar12) = bVar2;
            puVar11 = (uint *)*param_1;
            puVar19 = puVar27 + uVar12 * -4 + -4;
            *(byte *)((int)puVar11 + (uVar12 - 4 & uVar4) + 4) = bVar2;
            if (cVar1 == -1) break;
            uVar13 = *puVar24;
            *puVar24 = *puVar19;
            *puVar19 = uVar13;
            uVar13 = puVar27[uVar12 * -4 + -3];
            puVar27[uVar12 * -4 + -3] = puVar24[1];
            puVar24[1] = uVar13;
            uVar13 = puVar24[2];
            puVar24[2] = puVar27[uVar12 * -4 + -2];
            puVar27[uVar12 * -4 + -2] = uVar13;
            uVar13 = puVar27[uVar12 * -4 + -1];
            puVar27[uVar12 * -4 + -1] = puVar24[3];
            puVar24[3] = uVar13;
            puVar27 = (uint *)*param_1;
          }
          uVar13 = param_1[1];
          *(undefined1 *)((int)puVar11 + uVar5) = 0xff;
          *(undefined1 *)((int)puVar11 + (uVar13 & uVar5 - 4) + 4) = 0xff;
          uVar13 = *puVar24;
          uVar16 = puVar24[1];
          uVar4 = puVar24[2];
          puVar27[uVar12 * -4 + -1] = puVar24[3];
          puVar27[uVar12 * -4 + -2] = uVar4;
          puVar27[uVar12 * -4 + -3] = uVar16;
          *puVar19 = uVar13;
        }
LAB_010fff7c:
        bVar31 = uVar5 != uVar15;
        uVar5 = uVar5 + 1;
        puVar27 = puVar11;
      } while (bVar31);
      uVar5 = param_1[1];
      uVar25 = param_1[3];
      if (7 < uVar5) {
        uVar5 = (uVar5 + 1 & 0xfffffff8) - (uVar5 + 1 >> 3);
      }
    }
    param_1[2] = uVar5 - uVar25;
  }
  return 0x80000001;
}

