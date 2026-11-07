// FUN_00a439a8 @ 00a439a8 size=76 calls_out=3 calls_in=1
// strings: 

void FUN_00a439a8(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x5d) == '\x03') {
    FUN_00a43a24(param_1);
    FUN_00b802e4(param_1 + 0x54);
    *(undefined1 *)(param_1 + 0x5c) = 0;
    iVar1 = 0x50;
  }
  else {
    iVar1 = 0x58;
    if (*(char *)(param_1 + 0x5d) != '\0') {
      return;
    }
  }
  FUN_00b697cc(param_1 + iVar1);
  return;
}

