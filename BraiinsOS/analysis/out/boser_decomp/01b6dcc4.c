// FUN_01b6dcc4 @ 01b6dcc4 size=72 calls_out=3 calls_in=2
// strings: entropy fill failed

undefined4 FUN_01b6dcc4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_01b6db00(param_1,param_2,1);
  if (iVar1 == 0) {
    FUN_01beb6bc("entropy fill failed",0,0);
                    /* WARNING: Subroutine does not return */
    FUN_01be32a0();
  }
  return 0;
}

