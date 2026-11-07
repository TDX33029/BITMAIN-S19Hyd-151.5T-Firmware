// FUN_013a1724 @ 013a1724 size=952 calls_out=5 calls_in=2
// strings: index not found

void FUN_013a1724(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int local_2c;
  
  uVar10 = param_1[6];
  if (uVar10 != 0) {
    if (uVar10 != 1) {
      uVar6 = FUN_013b2a64(*param_1,param_1[1],param_1[2],param_1[3],param_2);
      uVar4 = uVar6 >> 0x19;
      uVar7 = param_1[8];
      iVar2 = param_1[7];
      iVar12 = param_1[5];
      local_2c = 0;
      do {
        uVar6 = uVar7 & uVar6;
        uVar8 = *(uint *)(iVar2 + uVar6);
        uVar13 = uVar8 ^ uVar4 * 0x1010101;
        uVar13 = ~uVar13 & 0x80808080 & uVar13 + 0xfefefeff;
        while (uVar13 != 0) {
          uVar11 = uVar6 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                          (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                   uVar7;
          uVar3 = *(uint *)(iVar2 + -4 + uVar11 * -4);
          if (uVar10 <= uVar3) goto LAB_013a1acc;
          uVar13 = uVar13 - 1 & uVar13;
          if (param_2 == *(uint *)(iVar12 + uVar3 * 0xc + 4)) {
            puVar5 = (uint *)(iVar2 + (uVar11 - 4 & uVar7));
            uVar6 = *puVar5;
            uVar4 = *(uint *)(iVar2 + uVar11) & 0x80808080 & *(uint *)(iVar2 + uVar11) << 1;
            uVar6 = ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                   (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) +
                    ((uint)LZCOUNT(uVar6 & 0x80808080 & uVar6 << 1) >> 3);
            uVar9 = 0x80;
            uVar4 = uVar6;
            if (uVar6 < 4) {
              uVar4 = param_1[9];
              uVar9 = 0xff;
            }
            *(undefined1 *)(iVar2 + uVar11) = uVar9;
            if (uVar6 < 4) {
              uVar4 = uVar4 + 1;
            }
            *(undefined1 *)(puVar5 + 1) = uVar9;
            uVar13 = *(uint *)(iVar2 + uVar11 * -4 + -4);
            if (uVar6 < 4) {
              param_1[9] = uVar4;
            }
            param_1[10] = param_1[10] + -1;
            if (uVar13 < uVar10) {
              uVar10 = uVar10 - 1;
              puVar5 = (uint *)(iVar12 + uVar13 * 0xc);
              FUN_01bed864(puVar5,iVar12 + uVar10 * 0xc,0xc);
              param_1[6] = uVar10;
              if (uVar10 <= uVar13) {
                return;
              }
              uVar6 = *puVar5;
              iVar12 = 0;
              uVar4 = uVar6 >> 0x19;
              while( true ) {
                uVar6 = uVar7 & uVar6;
                uVar8 = *(uint *)(iVar2 + uVar6);
                uVar3 = uVar8 ^ uVar4 * 0x1010101;
                uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
                while (uVar3 != 0) {
                  uVar11 = uVar6 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                                  (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3)
                           & uVar7;
                  uVar3 = uVar3 - 1 & uVar3;
                  if (*(uint *)(iVar2 + -4 + uVar11 * -4) == uVar10) {
                    *(uint *)(iVar2 + uVar11 * -4 + -4) = uVar13;
                    return;
                  }
                }
                if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) break;
                iVar12 = iVar12 + 4;
                uVar6 = iVar12 + uVar6;
              }
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("index not found",0xf,&DAT_01d2c0b4);
            }
            uVar3 = FUN_006664cc(uVar13,uVar10);
LAB_013a1acc:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar3,uVar10,&DAT_01d307c8);
          }
        }
        if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) {
          return;
        }
        local_2c = local_2c + 4;
        uVar6 = local_2c + uVar6;
      } while( true );
    }
    if (param_2 == ((uint *)param_1[5])[1]) {
      uVar6 = *(uint *)param_1[5];
      iVar2 = param_1[7];
      uVar4 = param_1[8];
      uVar10 = uVar6 >> 0x19;
      iVar12 = 0;
      param_1[6] = 0;
      while( true ) {
        uVar6 = uVar4 & uVar6;
        uVar13 = *(uint *)(iVar2 + uVar6);
        uVar7 = uVar13 ^ uVar10 * 0x1010101;
        uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
        while (uVar7 != 0) {
          uVar8 = uVar7 >> 8;
          uVar3 = uVar7 >> 0x10;
          uVar11 = uVar7 >> 0x18;
          uVar1 = uVar7 << 0x18;
          uVar7 = uVar7 - 1 & uVar7;
          uVar8 = uVar6 + ((uint)LZCOUNT(uVar1 | (uVar8 & 0xff) << 0x10 | (uVar3 & 0xff) << 8 |
                                         uVar11) >> 3) & uVar4;
          if (*(int *)(iVar2 + -4 + uVar8 * -4) == 0) {
            puVar5 = (uint *)(iVar2 + (uVar8 - 4 & uVar4));
            uVar10 = *puVar5;
            uVar4 = *(uint *)(iVar2 + uVar8) & 0x80808080 & *(uint *)(iVar2 + uVar8) << 1;
            uVar9 = 0x80;
            if (((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                               (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) +
                ((uint)LZCOUNT(uVar10 & 0x80808080 & uVar10 << 1) >> 3) < 4) {
              param_1[9] = param_1[9] + 1;
              uVar9 = 0xff;
            }
            *(undefined1 *)(iVar2 + uVar8) = uVar9;
            iVar2 = param_1[10];
            *(undefined1 *)(puVar5 + 1) = uVar9;
            param_1[10] = iVar2 + -1;
            return;
          }
        }
        if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) break;
        iVar12 = iVar12 + 4;
        uVar6 = iVar12 + uVar6;
      }
    }
  }
  return;
}

