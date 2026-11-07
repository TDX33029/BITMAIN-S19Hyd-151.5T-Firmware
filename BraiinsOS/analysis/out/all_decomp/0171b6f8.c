// FUN_0171b6f8 @ 0171b6f8 size=336 calls_out=2 calls_in=3
// strings: CRYPTO_subc_u32 | /aws-lc/crypto/fipsmodule/../internal.h | constant_time_declassify_int(borrow <= 1) | bn_sub_part_words | /aws-lc/crypto/fipsmodule/bn/mul.c | cl >= 0

void FUN_0171b6f8(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  
  if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("cl >= 0","/aws-lc/crypto/fipsmodule/bn/mul.c",0x4f,"bn_sub_part_words");
  }
  uVar1 = FUN_0171a550();
  if (param_5 == 0) {
    return;
  }
  param_4 = param_4 * 4;
  if (param_5 < 0) {
    if (param_5 == 0 || -param_5 < 0) {
      return;
    }
    piVar5 = (int *)(param_1 + param_4 + -4);
    iVar7 = 0;
    piVar4 = (int *)(param_3 + param_4);
    while (uVar1 < 2) {
      iVar7 = iVar7 + 1;
      uVar6 = -*piVar4;
      uVar2 = (uint)(*piVar4 != 0);
      piVar5 = piVar5 + 1;
      *piVar5 = uVar6 - uVar1;
      if (uVar6 < uVar1) {
        uVar2 = 1;
      }
      uVar1 = uVar2;
      piVar4 = piVar4 + 1;
      if (-iVar7 == param_5) {
        return;
      }
    }
  }
  else {
    piVar4 = (int *)(param_1 + param_4 + -4);
    iVar7 = 0;
    puVar3 = (uint *)(param_2 + param_4);
    while (uVar1 < 2) {
      uVar6 = *puVar3;
      iVar7 = iVar7 + 1;
      piVar4 = piVar4 + 1;
      *piVar4 = uVar6 - uVar1;
      uVar1 = (uint)(uVar6 < uVar1);
      puVar3 = puVar3 + 1;
      if (param_5 == iVar7) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_016d2c94("constant_time_declassify_int(borrow <= 1)","/aws-lc/crypto/fipsmodule/../internal.h"
               ,0x472,"CRYPTO_subc_u32");
}

