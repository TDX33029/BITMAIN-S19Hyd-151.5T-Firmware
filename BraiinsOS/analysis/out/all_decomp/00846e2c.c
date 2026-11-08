// FUN_00846e2c @ 00846e2c size=80 calls_out=2 calls_in=0
// strings: 

void FUN_00846e2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = thunk_FUN_016d4a50(0x80);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  *(undefined1 *)(iVar1 + 0x7d) = param_4;
  *(undefined1 *)(iVar1 + 0x7c) = 0;
  *(undefined4 *)(iVar1 + 0x70) = param_2;
  *(undefined4 *)(iVar1 + 0x74) = param_3;
  *(undefined4 *)(iVar1 + 0x78) = param_1;
  return;
}

