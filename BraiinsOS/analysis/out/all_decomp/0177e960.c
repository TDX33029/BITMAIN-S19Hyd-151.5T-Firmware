// FUN_0177e960 @ 0177e960 size=128 calls_out=5 calls_in=2
// strings: opportunistic entropy fill failed

int FUN_0177e960(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0177e1cc(param_1,param_2,0);
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_016d2bc8();
    if (*piVar2 != 0xb) {
      FUN_016db380("opportunistic entropy fill failed");
                    /* WARNING: Subroutine does not return */
      FUN_016d2c24();
    }
    if (param_2 != 0) {
      FUN_016dd606(param_1,0,param_2);
    }
  }
  return iVar1;
}

