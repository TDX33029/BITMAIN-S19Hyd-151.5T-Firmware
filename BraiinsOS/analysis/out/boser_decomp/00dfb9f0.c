// FUN_00dfb9f0 @ 00dfb9f0 size=64 calls_out=1 calls_in=2
// strings: 

void FUN_00dfb9f0(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)0x2;
  if (&DAT_3b9ac9ff < *(undefined1 **)(param_1 + 8)) {
    puVar2 = *(undefined1 **)(param_1 + 8) + -1000000000;
  }
  if (puVar2 < (undefined1 *)0x2) {
    return;
  }
  iVar1 = 0x10;
  if (puVar2 != (undefined1 *)0x2) {
    iVar1 = 0xc;
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + iVar1),((undefined4 *)(param_1 + iVar1))[1]);
  return;
}

