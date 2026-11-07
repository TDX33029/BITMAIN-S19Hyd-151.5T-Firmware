// FUN_0140a0d4 @ 0140a0d4 size=128 calls_out=3 calls_in=2
// strings: 

undefined4 * FUN_0140a0d4(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x18);
  }
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0x24);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x24);
  }
  *(undefined1 *)(puVar2 + 2) = 0;
  *puVar2 = 1;
  puVar2[1] = 1;
  FUN_01bed93e(puVar2 + 3,0,0x14);
  puVar1[4] = puVar2;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = 0;
  return puVar1;
}

