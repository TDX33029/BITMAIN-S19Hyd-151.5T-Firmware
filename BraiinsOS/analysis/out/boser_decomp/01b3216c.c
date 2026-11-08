// FUN_01b3216c @ 01b3216c size=460 calls_out=7 calls_in=2
// strings: bn_sqr_recursive | /aws-lc/crypto/fipsmodule/bn/mul.c | n2 != 0 && (n2 & (n2 - 1)) == 0 | bn_sqr_recursive | /aws-lc/crypto/fipsmodule/bn/mul.c | c == 0

undefined4 FUN_01b3216c(int param_1,int param_2,uint param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  
  if ((param_3 - 1 & param_3) == 0) {
    if (param_3 == 8) {
      uVar6 = FUN_01b2f9f4();
      return uVar6;
    }
    if (param_3 < 0x10) {
      uVar6 = FUN_01b30464();
      return uVar6;
    }
    uVar8 = param_3 >> 1;
    iVar2 = FUN_01b30578(param_4 + uVar8 * 4,param_2,param_2 + uVar8 * 4,uVar8);
    FUN_01b30578(param_4,param_2 + uVar8 * 4,param_2,uVar8);
    FUN_01b2b82c(param_4,-iVar2,param_4,param_4 + uVar8 * 4,uVar8);
    FUN_01b3216c(param_4 + param_3 * 4,param_4,uVar8,param_4 + param_3 * 8);
    FUN_01b3216c(param_1,param_2,uVar8,param_4 + param_3 * 8);
    FUN_01b3216c(param_1 + param_3 * 4,param_2 + uVar8 * 4,uVar8,param_4 + param_3 * 8);
    iVar2 = FUN_01b30190(param_4,param_1,param_1 + param_3 * 4,param_3);
    iVar3 = FUN_01b30578(param_4 + param_3 * 4,param_4,param_4 + param_3 * 4,param_3);
    iVar5 = param_1 + uVar8 * 4;
    uVar8 = param_3 + uVar8;
    iVar5 = FUN_01b30190(iVar5,iVar5,param_4 + param_3 * 4,param_3);
    uVar4 = (iVar2 + iVar5) - iVar3;
    puVar9 = (uint *)(param_1 + uVar8 * 4);
    for (; uVar8 < param_3 * 2; uVar8 = uVar8 + 1) {
      uVar7 = *puVar9;
      *puVar9 = uVar4 + uVar7;
      uVar4 = (uint)CARRY4(uVar4,uVar7);
      puVar9 = puVar9 + 1;
    }
    if (uVar4 == 0) {
      return 0;
    }
    uVar6 = 0x24c;
    pcVar1 = "c == 0";
  }
  else {
    uVar6 = 0x219;
    pcVar1 = "n2 != 0 && (n2 & (n2 - 1)) == 0";
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be3310(pcVar1,"/aws-lc/crypto/fipsmodule/bn/mul.c",uVar6,"bn_sqr_recursive");
}

