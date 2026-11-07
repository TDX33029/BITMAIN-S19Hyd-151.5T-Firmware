// FUN_0067ddfc @ 0067ddfc size=56 calls_out=2 calls_in=2
// strings: 

void FUN_0067ddfc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0x890);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x890);
  }
  *(undefined4 *)(iVar1 + 0x880) = param_1;
  *(undefined4 *)(iVar1 + 0x884) = 0;
  *(undefined4 *)(iVar1 + 0x888) = 0;
  *(undefined4 *)(iVar1 + 0x88c) = 0;
  return;
}

