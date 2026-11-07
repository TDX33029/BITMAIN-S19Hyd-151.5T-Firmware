// FUN_0171a278 @ 0171a278 size=276 calls_out=3 calls_in=2
// strings: CRYPTO_addc_u32 | /aws-lc/crypto/fipsmodule/../internal.h | constant_time_declassify_int(carry <= 1)

undefined8 FUN_0171a278(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = param_2[1];
  iVar5 = param_3[1];
  if (iVar8 < iVar5) {
    iVar7 = iVar5;
  }
  else {
    iVar7 = iVar8;
  }
  piVar6 = param_2;
  if (iVar5 <= iVar8) {
    piVar6 = param_3;
    param_3 = param_2;
    iVar8 = iVar5;
  }
  iVar5 = FUN_0171464c(param_1,iVar7 + 1);
  if (iVar5 == 0) {
    return 0;
  }
  iVar3 = *piVar6;
  iVar5 = *param_3;
  param_1[1] = iVar7 + 1;
  uVar1 = FUN_0171a054(*param_1,iVar5,iVar3,iVar8);
  iVar5 = *param_1;
  if (iVar8 < iVar7) {
    puVar2 = (uint *)(*param_3 + iVar8 * 4);
    piVar6 = (int *)(iVar5 + iVar8 * 4);
    do {
      if (1 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2c94("constant_time_declassify_int(carry <= 1)",
                     "/aws-lc/crypto/fipsmodule/../internal.h",0x43e,"CRYPTO_addc_u32");
      }
      uVar4 = *puVar2;
      iVar8 = iVar8 + 1;
      *piVar6 = uVar4 + uVar1;
      uVar1 = (uint)CARRY4(uVar4,uVar1);
      puVar2 = puVar2 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar8 != iVar7);
  }
  *(uint *)(iVar5 + iVar7 * 4) = uVar1;
  return 1;
}

