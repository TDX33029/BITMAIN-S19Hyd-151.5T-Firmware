// FUN_0171a748 @ 0171a748 size=388 calls_out=5 calls_in=5
// strings: /aws-lc/crypto/fipsmodule/bn/add.c | /aws-lc/crypto/fipsmodule/bn/add.c | CRYPTO_subc_u32 | /aws-lc/crypto/fipsmodule/../internal.h | constant_time_declassify_int(borrow <= 1)

undefined8 FUN_0171a748(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = param_3[1];
  if (param_2[1] < iVar6) {
    iVar6 = FUN_01714430(param_3);
    if (iVar6 == 0) {
      FUN_016e9cd0(3,0,100,"/aws-lc/crypto/fipsmodule/bn/add.c",0xb0);
      return 0;
    }
    iVar6 = param_2[1];
  }
  iVar1 = FUN_0171464c(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_0171a550(*param_1,*param_2,*param_3,iVar6);
    iVar1 = param_2[1];
    if (iVar6 < iVar1) {
      puVar3 = (uint *)(*param_2 + iVar6 * 4);
      piVar5 = (int *)(*param_1 + iVar6 * 4);
      do {
        if (1 < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_016d2c94("constant_time_declassify_int(borrow <= 1)",
                       "/aws-lc/crypto/fipsmodule/../internal.h",0x472,"CRYPTO_subc_u32");
        }
        uVar4 = *puVar3;
        iVar6 = iVar6 + 1;
        *piVar5 = uVar4 - uVar2;
        uVar2 = (uint)(uVar4 < uVar2);
        iVar1 = param_2[1];
        puVar3 = puVar3 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar6 < iVar1);
    }
    if (uVar2 == 0) {
      param_1[1] = iVar1;
      param_1[3] = 0;
      return 1;
    }
    FUN_016e9cd0(3,0,100,"/aws-lc/crypto/fipsmodule/bn/add.c",0xc0);
  }
  return 0;
}

