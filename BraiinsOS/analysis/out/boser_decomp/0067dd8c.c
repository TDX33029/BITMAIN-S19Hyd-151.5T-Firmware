// FUN_0067dd8c @ 0067dd8c size=56 calls_out=2 calls_in=2
// strings: 

void FUN_0067dd8c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0x410);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x410);
  }
  *(undefined4 *)(iVar1 + 0x400) = param_1;
  *(undefined4 *)(iVar1 + 0x404) = 0;
  *(undefined4 *)(iVar1 + 0x408) = 0;
  *(undefined4 *)(iVar1 + 0x40c) = 0;
  return;
}

