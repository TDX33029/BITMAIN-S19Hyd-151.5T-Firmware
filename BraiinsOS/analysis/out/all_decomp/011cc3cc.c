// FUN_011cc3cc @ 011cc3cc size=64 calls_out=3 calls_in=0
// strings: 

void FUN_011cc3cc(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_011cc42c();
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(4);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  *puVar2 = uVar1;
  return;
}

