// FUN_0171ba70 @ 0171ba70 size=784 calls_out=7 calls_in=3
// strings: bn_mul_recursive | /aws-lc/crypto/fipsmodule/bn/mul.c | n2 != 0 && (n2 & (n2 - 1)) == 0 | bn_mul_recursive | /aws-lc/crypto/fipsmodule/bn/mul.c | constant_time_declassify_int(c == 0)

undefined8 FUN_0171ba70(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  
  if ((param_4 == 0) || ((param_4 - 1 & param_4) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("n2 != 0 && (n2 & (n2 - 1)) == 0","/aws-lc/crypto/fipsmodule/bn/mul.c",0x9d,
                 "bn_mul_recursive");
  }
  if (param_4 == 8) {
    uVar14 = FUN_01719074();
    return uVar14;
  }
  if ((int)param_4 < 0x10) {
    uVar14 = FUN_01718df4(param_1,param_2,param_4,param_3);
    return uVar14;
  }
  iVar1 = (int)param_4 >> 1;
  iVar7 = param_4 * 4;
  iVar11 = param_5 + iVar7;
  iVar5 = iVar1 * 4;
  iVar6 = param_2 + iVar5;
  iVar2 = FUN_0171a550(iVar11,param_2,iVar6,iVar1);
  FUN_0171a550(param_5,iVar6,param_2,iVar1);
  FUN_01714e04(param_5,-iVar2,param_5,iVar11,iVar1);
  iVar3 = param_3 + iVar5;
  iVar12 = param_5 + iVar5;
  iVar4 = FUN_0171a550(iVar11,iVar3,param_3,iVar1);
  FUN_0171a550(iVar12,param_3,iVar3,iVar1);
  FUN_01714e04(iVar12,-iVar4,iVar12,iVar11,iVar1);
  uVar13 = -iVar4 ^ -iVar2;
  iVar2 = iVar11 + iVar7;
  iVar7 = param_1 + iVar7;
  if (iVar1 == 8) {
    FUN_01719074(iVar11,param_5);
    FUN_01719074(param_1,param_2,param_3);
    FUN_01719074(iVar7,iVar6,iVar3);
  }
  else {
    FUN_0171ba70(iVar11,param_5,iVar12,iVar1,iVar2);
    FUN_0171ba70(param_1,param_2,param_3,iVar1,iVar2);
    FUN_0171ba70(iVar7,iVar6,iVar3,iVar1,iVar2);
  }
  iVar7 = FUN_0171a054(param_5,param_1,iVar7,param_4);
  iVar3 = FUN_0171a550(iVar2,param_5,iVar11,param_4);
  iVar4 = FUN_0171a054(iVar11,param_5,iVar11,param_4);
  FUN_01714e04(iVar11,uVar13,iVar2,iVar11,param_4);
  iVar5 = FUN_0171a054(param_1 + iVar5,param_1 + iVar5,iVar11,param_4);
  uVar13 = (iVar7 - iVar3 & uVar13 | iVar7 + iVar4 & ~uVar13) + iVar5;
  if ((int)(param_4 + iVar1) < (int)(param_4 * 2)) {
    puVar9 = (uint *)(param_1 + (param_4 + iVar1) * 4);
    do {
      uVar8 = *puVar9;
      puVar10 = puVar9 + 1;
      *puVar9 = uVar8 + uVar13;
      uVar13 = (uint)CARRY4(uVar8,uVar13);
      puVar9 = puVar10;
    } while ((uint *)(param_1 + param_4 * 8) != puVar10);
  }
  if (uVar13 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int(c == 0)","/aws-lc/crypto/fipsmodule/bn/mul.c",0xf3,
                 "bn_mul_recursive");
  }
  return 0;
}

