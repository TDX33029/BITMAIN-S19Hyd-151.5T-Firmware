// FUN_0171bd98 @ 0171bd98 size=1396 calls_out=9 calls_in=4
// strings: CRYPTO_subc_u32 | /aws-lc/crypto/fipsmodule/../internal.h | constant_time_declassify_int(borrow <= 1) | bn_mul_recursive | /aws-lc/crypto/fipsmodule/bn/mul.c | n2 != 0 && (n2 & (n2 - 1)) == 0

undefined8
FUN_0171bd98(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  
  if ((param_4 == 0) || ((param_4 - 1 & param_4) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("n2 != 0 && (n2 & (n2 - 1)) == 0","/aws-lc/crypto/fipsmodule/bn/mul.c",0x9d,
                 "bn_mul_recursive");
  }
  if (8 < param_5 + 8U) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("-BN_MUL_RECURSIVE_SIZE_NORMAL/2 <= dna && dna <= 0",
                 "/aws-lc/crypto/fipsmodule/bn/mul.c",0x9f,"bn_mul_recursive");
  }
  if (8 < param_6 + 8U) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("-BN_MUL_RECURSIVE_SIZE_NORMAL/2 <= dnb && dnb <= 0",
                 "/aws-lc/crypto/fipsmodule/bn/mul.c",0xa0,"bn_mul_recursive");
  }
  if (param_4 == 8 && param_5 == 0) {
    if (param_6 == 0) {
      uVar13 = FUN_01719074();
      return uVar13;
    }
    FUN_01718df4(param_1,param_2,8,param_3,param_6 + 8U);
  }
  else {
    if (0xf < (int)param_4) {
      iVar2 = (int)param_4 >> 1;
      iVar11 = param_4 * 4;
      iVar10 = param_5 + iVar2;
      iVar9 = param_7 + iVar11;
      iVar1 = iVar2 * 4;
      iVar5 = param_2 + iVar1;
      uVar3 = FUN_0171a550(iVar9,param_2,iVar5,iVar10);
      if (param_5 != 0) {
        if (1 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_016d2c94("constant_time_declassify_int(borrow <= 1)",
                       "/aws-lc/crypto/fipsmodule/../internal.h",0x472,"CRYPTO_subc_u32");
        }
        uVar8 = *(uint *)(param_2 + iVar10 * 4);
        *(uint *)(iVar9 + iVar10 * 4) = uVar8 - uVar3;
        uVar3 = (uint)(uVar8 < uVar3);
        iVar4 = iVar10 * 4;
        if (param_5 != -1) {
          uVar8 = *(uint *)(param_2 + iVar4 + 4);
          *(uint *)(iVar9 + iVar4 + 4) = uVar8 - uVar3;
          uVar3 = (uint)(uVar8 < uVar3);
          if (param_5 != -2) {
            uVar8 = *(uint *)(param_2 + iVar4 + 8);
            *(uint *)(iVar9 + iVar4 + 8) = uVar8 - uVar3;
            uVar3 = (uint)(uVar8 < uVar3);
            if (param_5 != -3) {
              uVar8 = *(uint *)(param_2 + iVar4 + 0xc);
              *(uint *)(iVar9 + iVar4 + 0xc) = uVar8 - uVar3;
              uVar3 = (uint)(uVar8 < uVar3);
              if (param_5 != -4) {
                uVar8 = *(uint *)(param_2 + iVar4 + 0x10);
                *(uint *)(iVar9 + iVar4 + 0x10) = uVar8 - uVar3;
                uVar3 = (uint)(uVar8 < uVar3);
                if (param_5 != -5) {
                  uVar8 = *(uint *)(param_2 + iVar4 + 0x14);
                  *(uint *)(iVar9 + iVar4 + 0x14) = uVar8 - uVar3;
                  uVar3 = (uint)(uVar8 < uVar3);
                  if (param_5 != -6) {
                    uVar8 = *(uint *)(param_2 + iVar4 + 0x18);
                    *(uint *)(iVar9 + iVar4 + 0x18) = uVar8 - uVar3;
                    uVar3 = (uint)(uVar8 < uVar3);
                    if (param_5 == -8) {
                      uVar8 = *(uint *)(param_2 + iVar4 + 0x1c);
                      *(uint *)(iVar9 + iVar4 + 0x1c) = uVar8 - uVar3;
                      if (uVar8 < uVar3) {
                        uVar3 = 1;
                      }
                      else {
                        uVar3 = 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      FUN_0171b6f8(param_7,iVar5,param_2,iVar10,param_5);
      FUN_01714e04(param_7,-uVar3,param_7,iVar9,iVar2);
      iVar4 = param_3 + iVar1;
      iVar12 = param_7 + iVar1;
      iVar10 = FUN_0171b6f8(iVar9);
      FUN_0171b6f8(iVar12,param_3,iVar4,param_6 + iVar2,-param_6);
      uVar3 = -iVar10 ^ -uVar3;
      FUN_01714e04(iVar12,-iVar10,iVar12,iVar9,iVar2);
      iVar10 = param_1 + iVar11;
      iVar11 = iVar9 + iVar11;
      if (iVar2 == 8 && (param_5 == 0 && param_6 == 0)) {
        FUN_01719074(iVar9,param_7,iVar12);
        FUN_01719074(param_1,param_2,param_3);
        FUN_01719074(iVar10,iVar5,iVar4);
      }
      else {
        FUN_0171ba70(iVar9,param_7,iVar12,iVar2,iVar11);
        FUN_0171ba70(param_1,param_2,param_3,iVar2,iVar11);
        FUN_0171bd98(iVar10,iVar5,iVar4,iVar2,param_5,param_6,iVar11);
      }
      iVar5 = FUN_0171a054(param_7,param_1,iVar10,param_4);
      iVar10 = FUN_0171a550(iVar11,param_7,iVar9,param_4);
      iVar4 = FUN_0171a054(iVar9,param_7,iVar9,param_4);
      FUN_01714e04(iVar9,uVar3,iVar11,iVar9,param_4);
      iVar11 = FUN_0171a054(param_1 + iVar1,param_1 + iVar1,iVar9,param_4);
      uVar3 = iVar11 + (iVar5 - iVar10 & uVar3 | iVar4 + iVar5 & ~uVar3);
      if ((int)(param_4 + iVar2) < (int)(param_4 * 2)) {
        puVar6 = (uint *)(param_1 + (param_4 + iVar2) * 4);
        do {
          uVar8 = *puVar6;
          puVar7 = puVar6 + 1;
          *puVar6 = uVar8 + uVar3;
          uVar3 = (uint)CARRY4(uVar8,uVar3);
          puVar6 = puVar7;
        } while (puVar7 != (uint *)(param_1 + param_4 * 8));
      }
      if (uVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2c94("constant_time_declassify_int(c == 0)","/aws-lc/crypto/fipsmodule/bn/mul.c",
                     0xf3,"bn_mul_recursive");
      }
      return 0;
    }
    FUN_01718df4(param_1,param_2,param_4 + param_5,param_3,param_4 + param_6);
    param_6 = param_6 + param_5;
    if (param_6 == 0) {
      return 0;
    }
  }
  uVar13 = FUN_016dd606(param_1 + (param_6 + param_4 * 2) * 4,0,param_6 * -4);
  return uVar13;
}

