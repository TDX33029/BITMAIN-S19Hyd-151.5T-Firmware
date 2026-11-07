// FUN_0080e0c4 @ 0080e0c4 size=212 calls_out=3 calls_in=1
// strings: 

void FUN_0080e0c4(int *param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  if (*param_1 != 0 || param_1[1] != 0) {
    FUN_00a07b4c(param_1 + 2);
    return;
  }
  if (*(char *)((int)param_1 + 0x19) == '\x04') {
    cVar1 = *(char *)((int)param_1 + 0x72);
    bVar5 = cVar1 == '\x03';
    if (bVar5) {
      cVar1 = (char)param_1[0x1b];
    }
    if (bVar5 && cVar1 == '\x03') {
      iVar3 = param_1[0x19];
      puVar4 = (undefined4 *)param_1[0x1a];
      pcVar2 = (code *)*puVar4;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(iVar3);
      }
      if (puVar4[1] != 0) {
        thunk_FUN_016d3fb4(iVar3);
      }
      if (param_1[0x13] != 0) {
        thunk_FUN_016d3fb4(param_1[0x14]);
      }
    }
    (*(code *)**(undefined4 **)param_1[7])();
    if ((param_1[0x1d] & 0x7fffffffU) != 0) {
      thunk_FUN_016d3fb4(param_1[0x1e]);
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  else {
    if (*(char *)((int)param_1 + 0x19) != '\x03') {
      return;
    }
    FUN_0080feb8(param_1 + 8);
  }
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}

