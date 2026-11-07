// FUN_00cf7070 @ 00cf7070 size=36 calls_out=2 calls_in=1
// strings: 

void FUN_00cf7070(int param_1)

{
  if (*(char *)(param_1 + 0xc) == '\x05') {
    FUN_00c875c8(param_1 + 0x10);
    return;
  }
  if (*(char *)(param_1 + 0xc) == '\x06') {
    FUN_00cf7004(param_1 + 0x10);
    return;
  }
  return;
}

