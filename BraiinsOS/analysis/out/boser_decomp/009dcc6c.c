// FUN_009dcc6c @ 009dcc6c size=56 calls_out=2 calls_in=4
// strings: 

void FUN_009dcc6c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0xa90);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xa90);
  }
  *(undefined4 *)(iVar1 + 0xa80) = param_1;
  *(undefined4 *)(iVar1 + 0xa84) = 0;
  *(undefined4 *)(iVar1 + 0xa88) = 0;
  *(undefined4 *)(iVar1 + 0xa8c) = 0;
  return;
}

