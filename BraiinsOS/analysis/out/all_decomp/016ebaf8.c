// FUN_016ebaf8 @ 016ebaf8 size=96 calls_out=1 calls_in=0
// strings: 

bool FUN_016ebaf8(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0177a9c0(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    *puVar1 = 0x800;
    puVar1[1] = 0x100;
    puVar1[3] = 0;
    *(undefined4 **)(param_1 + 0x14) = puVar1;
  }
  return puVar1 != (undefined4 *)0x0;
}

