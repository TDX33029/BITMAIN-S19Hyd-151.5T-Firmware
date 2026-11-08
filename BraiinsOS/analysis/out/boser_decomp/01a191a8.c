// FUN_01a191a8 @ 01a191a8 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_01a191a8(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  puVar2 = (undefined1 *)thunk_FUN_01be5118(2);
  if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(1,2);
  }
  puVar2[1] = uVar1;
  *puVar2 = 0;
  return;
}

