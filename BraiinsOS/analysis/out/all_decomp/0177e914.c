// FUN_0177e914 @ 0177e914 size=72 calls_out=3 calls_in=2
// strings: entropy fill failed

undefined4 FUN_0177e914(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0177e1cc(param_1,param_2,1);
  if (iVar1 == 0) {
    FUN_016db380("entropy fill failed",0,0);
                    /* WARNING: Subroutine does not return */
    FUN_016d2c24();
  }
  return 0;
}

