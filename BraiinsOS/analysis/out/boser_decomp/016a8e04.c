// FUN_016a8e04 @ 016a8e04 size=48 calls_out=2 calls_in=2
// strings: 

void FUN_016a8e04(uint *param_1)

{
  int iVar1;
  
  if (*param_1 <= param_1[2]) {
    return;
  }
  iVar1 = FUN_006641a8(param_1,param_1[2],4,8);
  if (iVar1 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  return;
}

