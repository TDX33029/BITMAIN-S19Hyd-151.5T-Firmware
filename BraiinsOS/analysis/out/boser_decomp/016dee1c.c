// FUN_016dee1c @ 016dee1c size=92 calls_out=3 calls_in=5
// strings: 

undefined4 * FUN_016dee1c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x34);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x34);
  }
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 1;
  puVar1[3] = 0;
  puVar1[4] = 1;
  FUN_01bed93e(puVar1 + 5,0,0x1c);
  *(undefined1 *)((int)puVar1 + 0x32) = 0;
  *(undefined2 *)(puVar1 + 0xc) = 1;
  return puVar1;
}

