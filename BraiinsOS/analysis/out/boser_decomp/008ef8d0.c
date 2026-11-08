// FUN_008ef8d0 @ 008ef8d0 size=72 calls_out=2 calls_in=3
// strings: 

void FUN_008ef8d0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x615) == '\x03') {
    FUN_008f05e0(param_1);
    *(undefined1 *)(param_1 + 0x614) = 0;
    iVar1 = 0x5f8;
  }
  else {
    iVar1 = 0x604;
    if (*(char *)(param_1 + 0x615) != '\0') {
      return;
    }
  }
  FUN_019f8c54(*(undefined4 *)(param_1 + iVar1),((undefined4 *)(param_1 + iVar1))[1]);
  return;
}

