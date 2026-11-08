// FUN_0101b1bc @ 0101b1bc size=1508 calls_out=3 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0101b1bc(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint extraout_r3;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  
  uVar1 = param_1[6];
  if (uVar1 != 0) {
    if (uVar1 != 1) {
      uVar4 = param_1[2] ^ 0x6e646f6d;
      uVar3 = *param_1 ^ 0x70736575;
      uVar18 = uVar4 + uVar3;
      uVar2 = param_1[3] ^ 0x646f7261;
      uVar12 = uVar2 + (param_1[1] ^ 0x736f6d65) + (uint)CARRY4(uVar4,uVar3);
      uVar15 = (uVar4 << 0xd | uVar2 >> 0x13) ^ uVar18;
      uVar4 = (uVar2 << 0xd | uVar4 >> 0x13) ^ uVar12;
      uVar14 = param_1[3] ^ 0x70656462;
      uVar7 = param_1[2] ^ param_2 ^ 0x79746573;
      uVar2 = *param_1 ^ 0x6e657261;
      uVar3 = uVar7 + uVar2;
      uVar8 = uVar14 + (param_1[1] ^ 0x6c796765) + (uint)CARRY4(uVar7,uVar2);
      uVar2 = (uVar7 << 0x10 | uVar14 >> 0x10) ^ uVar3;
      uVar9 = uVar8 + uVar4 + (uint)CARRY4(uVar3,uVar15);
      uVar8 = (uVar14 << 0x10 | uVar7 >> 0x10) ^ uVar8;
      uVar11 = uVar9 ^ (uVar4 << 0x11 | uVar15 >> 0xf);
      uVar14 = uVar8 + uVar18 + (uint)CARRY4(uVar2,uVar12);
      uVar4 = uVar3 + uVar15 ^ (uVar15 << 0x11 | uVar4 >> 0xf);
      uVar7 = uVar2 + uVar12 ^ param_2;
      uVar19 = uVar7 + uVar4;
      uVar16 = (uVar14 ^ 0x4000000) + uVar11 + (uint)CARRY4(uVar7,uVar4);
      uVar18 = uVar16 ^ (uVar11 << 0xd | uVar4 >> 0x13);
      uVar7 = uVar19 ^ (uVar4 << 0xd | uVar11 >> 0x13);
      uVar9 = uVar9 ^ 0xff;
      uVar4 = (uVar2 << 0x15 | uVar8 >> 0xb) ^ uVar2 + uVar12;
      uVar14 = (uVar8 << 0x15 | uVar2 >> 0xb) ^ uVar14;
      uVar13 = uVar4 + uVar9;
      uVar8 = uVar14 + uVar3 + uVar15 + (uint)CARRY4(uVar4,uVar9);
      uVar12 = uVar18 + uVar8 + (uint)CARRY4(uVar7,uVar13);
      uVar9 = uVar12 ^ (uVar18 << 0x11 | uVar7 >> 0xf);
      uVar18 = uVar7 + uVar13 ^ (uVar7 << 0x11 | uVar18 >> 0xf);
      uVar8 = (uVar14 << 0x10 | uVar4 >> 0x10) ^ uVar8;
      uVar2 = (uVar4 << 0x10 | uVar14 >> 0x10) ^ uVar13;
      uVar14 = uVar2 + uVar16;
      uVar3 = uVar8 + uVar19 + (uint)CARRY4(uVar2,uVar16);
      uVar15 = uVar9 + uVar3 + (uint)CARRY4(uVar18,uVar14);
      uVar16 = (uVar9 << 0xd | uVar18 >> 0x13) ^ uVar15;
      uVar11 = (uVar18 << 0xd | uVar9 >> 0x13) ^ uVar18 + uVar14;
      uVar3 = (uVar8 << 0x15 | uVar2 >> 0xb) ^ uVar3;
      uVar2 = (uVar2 << 0x15 | uVar8 >> 0xb) ^ uVar14;
      uVar8 = uVar2 + uVar12;
      uVar4 = uVar3 + uVar7 + uVar13 + (uint)CARRY4(uVar2,uVar12);
      uVar9 = (uVar3 << 0x10 | uVar2 >> 0x10) ^ uVar4;
      uVar2 = (uVar2 << 0x10 | uVar3 >> 0x10) ^ uVar8;
      uVar12 = uVar16 + uVar4 + (uint)CARRY4(uVar11,uVar8);
      uVar4 = uVar2 + uVar15;
      uVar7 = uVar9 + uVar18 + uVar14 + (uint)CARRY4(uVar2,uVar15);
      uVar13 = (uVar16 << 0x11 | uVar11 >> 0xf) ^ uVar12;
      uVar3 = (uVar2 << 0x15 | uVar9 >> 0xb) ^ uVar4;
      uVar9 = (uVar9 << 0x15 | uVar2 >> 0xb) ^ uVar7;
      uVar18 = uVar3 + uVar12;
      uVar2 = (uVar11 << 0x11 | uVar16 >> 0xf) ^ uVar11 + uVar8;
      uVar8 = uVar9 + uVar11 + uVar8 + (uint)CARRY4(uVar3,uVar12);
      uVar14 = (uVar2 << 0xd | uVar13 >> 0x13) ^ uVar2 + uVar4;
      uVar2 = (uVar13 << 0xd | uVar2 >> 0x13) ^ uVar13 + uVar7 + (uint)CARRY4(uVar2,uVar4);
      uVar7 = param_1[7];
      uVar4 = param_1[8];
      uVar3 = ((uVar18 ^ uVar9 >> 0x10) << 0x15 | ((uVar9 << 0x10 | uVar3 >> 0x10) ^ uVar8) >> 0xb)
              ^ (uVar14 << 0x11 | uVar2 >> 0xf) ^ uVar2 + uVar8 + (uint)CARRY4(uVar14,uVar18) ^
              uVar14 + uVar18;
      uVar2 = uVar3 >> 0x19;
      uVar14 = param_1[5];
      iVar10 = 0;
      do {
        uVar3 = uVar4 & uVar3;
        uVar9 = *(uint *)(uVar7 + uVar3);
        uVar8 = uVar9 ^ uVar2 * 0x1010101;
        uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
        while (uVar8 != 0) {
          uVar11 = uVar3 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                          (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & uVar4
          ;
          uVar18 = *(uint *)((uVar7 - 4) + uVar11 * -4);
          if (uVar1 <= uVar18) goto LAB_0101b78c;
          uVar8 = uVar8 - 1 & uVar8;
          if (param_2 == *(uint *)(uVar14 + uVar18 * 0xc + 4)) {
            puVar5 = (uint *)(uVar7 + (uVar11 - 4 & uVar4));
            uVar2 = *puVar5;
            uVar8 = *(uint *)(uVar7 + uVar11) & 0x80808080 & *(uint *)(uVar7 + uVar11) << 1;
            uVar6 = 0x80;
            uVar3 = param_1[10];
            if (((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                               (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) +
                ((uint)LZCOUNT(uVar2 & 0x80808080 & uVar2 << 1) >> 3) < 4) {
              param_1[9] = param_1[9] + 1;
              uVar6 = 0xff;
            }
            *(undefined1 *)(uVar7 + uVar11) = uVar6;
            *(undefined1 *)(puVar5 + 1) = uVar6;
            uVar2 = *(uint *)(uVar7 + uVar11 * -4 + -4);
            param_1[10] = uVar3 - 1;
            if (uVar2 < uVar1) {
              uVar1 = uVar1 - 1;
              param_1[6] = uVar1;
              puVar5 = (uint *)(uVar14 + uVar1 * 0xc);
              uVar3 = puVar5[1];
              uVar8 = puVar5[2];
              puVar17 = (uint *)(uVar14 + uVar2 * 0xc);
              *puVar17 = *puVar5;
              puVar17[1] = uVar3;
              puVar17[2] = uVar8;
              if (uVar1 <= uVar2) {
                return;
              }
              uVar14 = *puVar17;
              iVar10 = 0;
              uVar3 = uVar14 >> 0x19;
              while( true ) {
                uVar14 = uVar14 & uVar4;
                uVar9 = *(uint *)(uVar7 + uVar14);
                uVar8 = uVar9 ^ uVar3 * 0x1010101;
                uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
                while (uVar8 != 0) {
                  uVar18 = uVar8 >> 8;
                  uVar11 = uVar8 >> 0x10;
                  uVar12 = uVar8 >> 0x18;
                  uVar13 = uVar8 << 0x18;
                  uVar8 = uVar8 - 1 & uVar8;
                  uVar18 = uVar14 + ((uint)LZCOUNT(uVar13 | (uVar18 & 0xff) << 0x10 |
                                                   (uVar11 & 0xff) << 8 | uVar12) >> 3) & uVar4;
                  if (*(uint *)((uVar7 - 4) + uVar18 * -4) == uVar1) {
                    *(uint *)(uVar7 + uVar18 * -4 + -4) = uVar2;
                    return;
                  }
                }
                if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) break;
                iVar10 = iVar10 + 4;
                uVar14 = iVar10 + uVar14;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00414578,0xf,&DAT_018adbd8);
            }
            FUN_006028e8(uVar2);
            uVar18 = extraout_r3;
LAB_0101b78c:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar18,uVar1,&DAT_018adbc8);
          }
        }
        if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) {
          return;
        }
        iVar10 = iVar10 + 4;
        uVar3 = iVar10 + uVar3;
      } while( true );
    }
    if (param_2 == ((uint *)param_1[5])[1]) {
      uVar2 = *(uint *)param_1[5];
      uVar3 = param_1[7];
      uVar4 = param_1[8];
      uVar1 = uVar2 >> 0x19;
      iVar10 = 0;
      param_1[6] = 0;
      while( true ) {
        uVar2 = uVar4 & uVar2;
        uVar14 = *(uint *)(uVar3 + uVar2);
        uVar7 = uVar14 ^ uVar1 * 0x1010101;
        uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
        while (uVar7 != 0) {
          uVar8 = uVar7 >> 8;
          uVar9 = uVar7 >> 0x10;
          uVar18 = uVar7 >> 0x18;
          uVar11 = uVar7 << 0x18;
          uVar7 = uVar7 - 1 & uVar7;
          uVar8 = uVar2 + ((uint)LZCOUNT(uVar11 | (uVar8 & 0xff) << 0x10 | (uVar9 & 0xff) << 8 |
                                         uVar18) >> 3) & uVar4;
          if (*(int *)((uVar3 - 4) + uVar8 * -4) == 0) {
            iVar10 = (int)(uVar8 << 2) >> 2;
            uVar2 = *(uint *)(uVar3 + iVar10);
            puVar5 = (uint *)(uVar3 + (iVar10 - 4U & uVar4));
            uVar1 = *puVar5;
            uVar2 = uVar2 & 0x80808080 & uVar2 << 1;
            uVar6 = 0x80;
            if (((uint)LZCOUNT(uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                               (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18) >> 3) +
                ((uint)LZCOUNT(uVar1 & 0x80808080 & uVar1 << 1) >> 3) < 4) {
              param_1[9] = param_1[9] + 1;
              uVar6 = 0xff;
            }
            *(undefined1 *)(uVar3 + ((int)(uVar8 << 2) >> 2)) = uVar6;
            uVar1 = param_1[10];
            *(undefined1 *)(puVar5 + 1) = uVar6;
            param_1[10] = uVar1 - 1;
            return;
          }
        }
        if ((uVar14 & 0x80808080 & uVar14 << 1) != 0) break;
        iVar10 = iVar10 + 4;
        uVar2 = iVar10 + uVar2;
      }
    }
  }
  return;
}

