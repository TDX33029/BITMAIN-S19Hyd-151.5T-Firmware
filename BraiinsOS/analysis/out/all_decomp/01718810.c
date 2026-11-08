// FUN_01718810 @ 01718810 size=232 calls_out=6 calls_in=2
// strings: bn_resized_from_ctx | /aws-lc/crypto/fipsmodule/bn/div.c | bn_fits_in_words(bn; width)

int FUN_01718810(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 <= *(uint *)(param_1 + 4)) {
    iVar1 = FUN_01714430();
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94("bn_fits_in_words(bn, width)","/aws-lc/crypto/fipsmodule/bn/div.c",0x203,
                   "bn_resized_from_ctx");
    }
    return param_1;
  }
  iVar1 = FUN_017186b0(param_3);
  if ((iVar1 != 0) && (iVar2 = FUN_0171464c(iVar1,param_2), iVar2 != 0)) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(uint *)(iVar1 + 4) = param_2;
    iVar2 = FUN_017147ac(iVar1,param_1);
    if ((iVar2 != 0) && (iVar2 = FUN_01714d30(iVar1,param_2), iVar2 != 0)) {
      return iVar1;
    }
  }
  return 0;
}

