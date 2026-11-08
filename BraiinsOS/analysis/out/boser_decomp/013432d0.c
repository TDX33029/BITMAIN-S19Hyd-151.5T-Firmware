// FUN_013432d0 @ 013432d0 size=104 calls_out=3 calls_in=2
// strings: 

void FUN_013432d0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0xa910);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xa910);
  }
  FUN_01bed93e(iVar1,0,0xa909);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(iVar1 + 0xa90c) = 0x10201;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = iVar1;
  return;
}

