// FUN_007dc314 @ 007dc314 size=144 calls_out=3 calls_in=0
// strings: 

void FUN_007dc314(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_00a07b4c(param_1 + 0x30);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x120) == '\x03') {
      FUN_007d42e4(param_1 + 0x30);
    }
    else if ((*(char *)(param_1 + 0x120) == '\0') && (*(int *)(param_1 + 0x18) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1c));
    }
  }
  bVar2 = *(char *)(param_1 + 0x13) != '\0';
  iVar1 = 0;
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0x18);
  }
  if (bVar2 && iVar1 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1c));
    *(undefined1 *)(param_1 + 0x13) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x13) = 0;
  return;
}

