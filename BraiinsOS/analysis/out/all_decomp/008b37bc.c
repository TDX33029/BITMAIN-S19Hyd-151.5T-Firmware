// FUN_008b37bc @ 008b37bc size=204 calls_out=3 calls_in=1
// strings: 

void FUN_008b37bc(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 0xb) == '\x03') {
    if (*(char *)(param_1 + 0x88) == '\x03') {
      FUN_0080feb8(param_1 + 0x10);
    }
  }
  else {
    if (*(char *)(param_1 + 0xb) != '\x04') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x130);
    bVar3 = cVar1 == '\x03';
    if (bVar3) {
      cVar1 = *(char *)(param_1 + 0x121);
    }
    if (bVar3 && cVar1 == '\x03') {
      FUN_008b39b4(param_1 + 0x58);
    }
    if ((*(uint *)(param_1 + 0x18) & 0x7fffffff) == 0) {
      iVar2 = *(int *)(param_1 + 0xc);
    }
    else {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1c));
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (iVar2 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x10));
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3c));
    }
    if (*(int *)(param_1 + 0x44) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x48));
      *(undefined2 *)(param_1 + 9) = 0;
      return;
    }
  }
  *(undefined2 *)(param_1 + 9) = 0;
  return;
}

