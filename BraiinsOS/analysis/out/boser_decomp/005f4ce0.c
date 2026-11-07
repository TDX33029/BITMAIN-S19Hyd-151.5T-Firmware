// FUN_005f4ce0 @ 005f4ce0 size=52 calls_out=1 calls_in=2
// strings: 

void FUN_005f4ce0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x14) == '\x03') {
    iVar1 = 0x10;
    iVar2 = 0xc;
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\0') {
      return;
    }
    iVar1 = 8;
    iVar2 = 4;
  }
  FUN_01139b38(*(undefined4 *)(param_1 + iVar2),*(undefined4 *)(param_1 + iVar1));
  return;
}

