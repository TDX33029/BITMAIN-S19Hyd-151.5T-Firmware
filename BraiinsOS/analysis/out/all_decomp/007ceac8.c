// FUN_007ceac8 @ 007ceac8 size=236 calls_out=2 calls_in=4
// strings: 

void FUN_007ceac8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x90);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x90);
  }
  *(undefined1 *)(puVar1 + 0x19) = 0x4a;
  *(undefined1 *)(puVar1 + 0x22) = 0x4b;
  puVar1[0x16] = 0x3e6978d5;
  *(undefined1 *)(puVar1 + 0x10) = 0x49;
  *(undefined1 *)(puVar1 + 7) = 0x48;
  *(undefined1 *)(puVar1 + 0x21) = 1;
  *(undefined1 *)(puVar1 + 0x18) = 1;
  puVar1[0x1f] = 0x3f1ced91;
  puVar1[0x1b] = 4;
  puVar1[0x12] = 4;
  puVar1[9] = 4;
  puVar1[0x1e] = 0x3e27ef9e;
  puVar1[0x20] = 0x41700000;
  puVar1[0x1c] = 0;
  puVar1[0x15] = 0x3e27ef9e;
  puVar1[0x17] = 0x41700000;
  puVar1[0x13] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  puVar1[0xc] = 0x3f7851ec;
  puVar1[0xd] = 0x3f5ae148;
  puVar1[0xe] = 0x41700000;
  puVar1[10] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[3] = 0x3f7851ec;
  puVar1[4] = 0x3cc49ba6;
  puVar1[5] = 0x41700000;
  *puVar1 = 4;
  puVar1[1] = 0;
  *param_1 = 4;
  param_1[1] = puVar1;
  param_1[2] = 4;
  return;
}

