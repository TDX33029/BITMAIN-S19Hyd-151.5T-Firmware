// FUN_01b6dd10 @ 01b6dd10 size=128 calls_out=5 calls_in=1
// strings: opportunistic entropy fill failed

int FUN_01b6dd10(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_01b6db00(param_1,param_2,0);
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_01be3244();
    if (*piVar2 != 0xb) {
      FUN_01beb6bc("opportunistic entropy fill failed");
                    /* WARNING: Subroutine does not return */
      FUN_01be32a0();
    }
    if (param_2 != 0) {
      FUN_01bed93e(param_1,0,param_2);
    }
  }
  return iVar1;
}

