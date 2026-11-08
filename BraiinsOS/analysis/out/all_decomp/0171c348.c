// FUN_0171c348 @ 0171c348 size=1220 calls_out=11 calls_in=3
// strings: bn_mul_part_recursive | /aws-lc/crypto/fipsmodule/bn/mul.c | n != 0 && (n & (n - 1)) == 0 | bn_mul_part_recursive | /aws-lc/crypto/fipsmodule/bn/mul.c | 0 <= tnb && tnb < n

undefined8
FUN_0171c348(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  undefined8 uVar17;
  
  if ((param_4 == 0) || ((param_4 - 1 & param_4) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("n != 0 && (n & (n - 1)) == 0","/aws-lc/crypto/fipsmodule/bn/mul.c",0x102,
                 "bn_mul_part_recursive");
  }
  bVar16 = param_5 == 0;
  if ((int)param_5 >= 0) {
    bVar16 = param_4 == param_5;
  }
  if (bVar16 || ((int)param_5 < 0 || (int)param_4 < (int)param_5)) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("0 <= tna && tna < n","/aws-lc/crypto/fipsmodule/bn/mul.c",0x104,
                 "bn_mul_part_recursive");
  }
  bVar16 = param_6 == 0;
  if ((int)param_6 >= 0) {
    bVar16 = param_4 == param_6;
  }
  if (bVar16 || ((int)param_6 < 0 || (int)param_4 < (int)param_6)) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("0 <= tnb && tnb < n","/aws-lc/crypto/fipsmodule/bn/mul.c",0x105,
                 "bn_mul_part_recursive");
  }
  if (2 < (param_5 - param_6) + 1) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("-1 <= tna - tnb && tna - tnb <= 1","/aws-lc/crypto/fipsmodule/bn/mul.c",0x106,
                 "bn_mul_part_recursive");
  }
  iVar6 = param_4 * 2;
  if ((int)param_4 < 8) {
    FUN_01718df4(param_1,param_2,param_4 + param_5,param_3,param_4 + param_6);
    if (iVar6 != param_5 + param_6) {
      uVar17 = FUN_016dd606(param_1 + (param_5 + param_6 + iVar6) * 4,0);
      return uVar17;
    }
  }
  else {
    iVar1 = param_4 * 4;
    iVar5 = param_4 * 8;
    iVar2 = param_2 + iVar1;
    iVar12 = param_7 + iVar5;
    iVar13 = param_4 - param_5;
    iVar3 = FUN_0171b6f8(iVar12,param_2,iVar2,param_5,iVar13);
    FUN_0171b6f8(param_7,iVar2,param_2,param_5,param_5 - param_4);
    if (iVar13 < 0) {
      iVar13 = -iVar13;
    }
    iVar14 = param_6 - param_4;
    FUN_01714e04(param_7,-iVar3,param_7,iVar12,iVar13 + param_5);
    iVar13 = param_3 + iVar1;
    iVar15 = iVar12 + param_4 * -4;
    iVar4 = FUN_0171b6f8(iVar12,iVar13,param_3,param_6,iVar14);
    FUN_0171b6f8(iVar15,param_3,iVar13,param_6,param_4 - param_6);
    if (iVar14 < 0) {
      iVar14 = -iVar14;
    }
    FUN_01714e04(iVar15,-iVar4,iVar15,iVar12,iVar14 + param_6);
    iVar14 = param_4 * 0xc + iVar15;
    uVar7 = -iVar4 ^ -iVar3;
    iVar3 = param_1 + iVar5;
    if (param_4 == 8) {
      FUN_01719074(iVar12,param_7,iVar15);
      FUN_01719074(param_1,param_2,param_3);
      FUN_01718df4(param_1 + 0x40,iVar2,param_5,iVar13,param_6);
      if (((0x10 - param_6) - param_5 & 0x3fffffff) != 0) {
        FUN_016dd606(param_1 + (param_6 + 0x10 + param_5) * 4,0);
      }
    }
    else {
      FUN_0171ba70(iVar12,param_7,iVar15,param_4,iVar14);
      FUN_0171ba70(param_1,param_2,param_3,param_4,iVar14);
      if (iVar5 != 0) {
        FUN_016dd606(iVar3,0,iVar5);
      }
      uVar11 = param_5;
      if ((int)param_5 < 0x10) {
        uVar11 = param_6;
      }
      if ((int)uVar11 < 0x10) {
        FUN_01718df4(iVar3,iVar2,param_5,iVar13,param_6);
      }
      else {
        uVar11 = param_4;
        uVar8 = param_5;
        if ((int)param_5 < (int)param_6) {
          uVar8 = param_6;
        }
        do {
          uVar11 = (int)uVar11 >> 1;
          if ((int)uVar11 < (int)uVar8) {
            FUN_0171c348(iVar3,iVar2,iVar13,uVar11,param_5 - uVar11,param_6 - uVar11,iVar14);
            goto LAB_0171c590;
          }
        } while (param_6 != uVar11 && param_5 != uVar11);
        FUN_0171bd98(iVar3,iVar2,iVar13,uVar11,param_5 - uVar11,param_6 - uVar11,iVar14);
      }
    }
LAB_0171c590:
    iVar5 = FUN_0171a054(param_7,param_1,iVar3,iVar6);
    iVar13 = FUN_0171a550(iVar14,param_7,iVar12,iVar6);
    iVar2 = FUN_0171a054(iVar12,param_7,iVar12,iVar6);
    FUN_01714e04(iVar12,uVar7,iVar14,iVar12,iVar6);
    iVar6 = FUN_0171a054(param_1 + iVar1,param_1 + iVar1,iVar12,iVar6);
    uVar7 = iVar6 + (iVar5 - iVar13 & uVar7 | iVar2 + iVar5 & ~uVar7);
    if ((int)(param_4 * 3) < iVar1) {
      puVar9 = (uint *)(param_1 + param_4 * 0xc);
      do {
        uVar11 = *puVar9;
        puVar10 = puVar9 + 1;
        *puVar9 = uVar11 + uVar7;
        uVar7 = (uint)CARRY4(uVar11,uVar7);
        puVar9 = puVar10;
      } while (puVar10 != (uint *)(param_1 + param_4 * 0x10));
    }
    if (uVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94("constant_time_declassify_int(c == 0)","/aws-lc/crypto/fipsmodule/bn/mul.c",0x165
                   ,"bn_mul_part_recursive");
    }
  }
  return 0;
}

