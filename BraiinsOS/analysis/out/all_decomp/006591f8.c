// FUN_006591f8 @ 006591f8 size=148 calls_out=3 calls_in=1
// strings: 

void FUN_006591f8(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x3e) == '\x03') {
    FUN_007ab4c8(param_1 + 0x40);
    FUN_005c3320(param_1 + 0x40);
  }
  else {
    if (*(char *)(param_1 + 0x3e) != '\x04') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xd0);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xcc);
    }
    if (bVar2 && cVar1 == '\0') {
      if (*(int *)(param_1 + 0xb0) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xac));
      }
      if (*(int *)(param_1 + 0x9c) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa0));
      }
    }
  }
  *(undefined1 *)(param_1 + 0x3d) = 0;
  if (*(char *)(param_1 + 0x3c) != '\0') {
    FUN_005c3320(param_1);
  }
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return;
}

