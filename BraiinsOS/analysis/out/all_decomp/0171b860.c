// FUN_0171b860 @ 0171b860 size=504 calls_out=7 calls_in=2
// strings: bn_sqr_recursive | /aws-lc/crypto/fipsmodule/bn/mul.c | n2 != 0 && (n2 & (n2 - 1)) == 0 | bn_sqr_recursive | /aws-lc/crypto/fipsmodule/bn/mul.c | c == 0

undefined8 FUN_0171b860(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  
  if ((param_3 - 1 & param_3) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("n2 != 0 && (n2 & (n2 - 1)) == 0","/aws-lc/crypto/fipsmodule/bn/mul.c",0x219,
                 "bn_sqr_recursive");
  }
  if (param_3 == 8) {
    uVar10 = FUN_017198a8();
    return uVar10;
  }
  if (param_3 < 0x10) {
    uVar10 = FUN_0171a460();
    return uVar10;
  }
  uVar5 = param_3 >> 1;
  iVar3 = uVar5 * 4;
  iVar1 = param_2 + iVar3;
  iVar4 = param_4 + param_3 * 8;
  iVar2 = FUN_0171a550(param_4 + iVar3,param_2,iVar1,uVar5);
  FUN_0171a550(param_4,iVar1,param_2,uVar5);
  FUN_01714e04(param_4,-iVar2,param_4,param_4 + iVar3,uVar5);
  iVar8 = param_4 + param_3 * 4;
  FUN_0171b860(iVar8,param_4,uVar5,iVar4);
  FUN_0171b860(param_1,param_2,uVar5,iVar4);
  iVar2 = param_1 + param_3 * 4;
  FUN_0171b860(iVar2,iVar1,uVar5,iVar4);
  iVar1 = FUN_0171a054(param_4,param_1,iVar2,param_3);
  iVar2 = FUN_0171a550(iVar8,param_4,iVar8,param_3);
  iVar3 = FUN_0171a054(param_1 + iVar3,param_1 + iVar3,iVar8,param_3);
  uVar9 = (iVar1 + iVar3) - iVar2;
  if (param_3 + uVar5 < param_3 << 1) {
    puVar6 = (uint *)(param_1 + (param_3 + uVar5) * 4);
    do {
      uVar5 = *puVar6;
      puVar7 = puVar6 + 1;
      *puVar6 = uVar5 + uVar9;
      uVar9 = (uint)CARRY4(uVar5,uVar9);
      puVar6 = puVar7;
    } while ((uint *)(param_1 + param_3 * 8) != puVar7);
  }
  if (uVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("c == 0","/aws-lc/crypto/fipsmodule/bn/mul.c",0x24c,"bn_sqr_recursive");
  }
  return 0;
}

