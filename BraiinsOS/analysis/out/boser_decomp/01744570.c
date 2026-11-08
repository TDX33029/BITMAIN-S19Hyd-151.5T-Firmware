// FUN_01744570 @ 01744570 size=56 calls_out=2 calls_in=2
// strings: 

void FUN_01744570(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0xc10);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xc10);
  }
  *(undefined4 *)(iVar1 + 0xc00) = param_1;
  *(undefined4 *)(iVar1 + 0xc04) = 0;
  *(undefined4 *)(iVar1 + 0xc08) = 0;
  *(undefined4 *)(iVar1 + 0xc0c) = 0;
  return;
}

