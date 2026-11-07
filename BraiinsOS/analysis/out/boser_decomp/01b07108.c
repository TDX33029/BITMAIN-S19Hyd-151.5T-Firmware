// FUN_01b07108 @ 01b07108 size=108 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_01b07108(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_01b6b0a8(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = 0x800;
  puVar1[1] = 0x100;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 **)(param_1 + 0x14) = puVar1;
  return 1;
}

