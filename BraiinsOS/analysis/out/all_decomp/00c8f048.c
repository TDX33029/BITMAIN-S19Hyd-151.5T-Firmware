// FUN_00c8f048 @ 00c8f048 size=144 calls_out=3 calls_in=2
// strings: 

void FUN_00c8f048(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 0x65) == '\x03') {
    if ((char)param_1[0x13] == '\x03') {
      FUN_00c865f8(param_1 + 4);
      *(undefined1 *)((int)param_1 + 0x4d) = 0;
    }
    else if (((char)param_1[0x13] == '\0') && (*param_1 != 0)) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    iVar2 = param_1[0x17] + 1;
    iVar1 = param_1[0x16];
    while (iVar2 = iVar2 + -1, iVar2 != 0) {
      FUN_00ce1b8c(iVar1);
      iVar1 = iVar1 + 0xe0;
    }
    if (param_1[0x15] != 0) {
      thunk_FUN_016d3fb4(param_1[0x16]);
    }
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  return;
}

