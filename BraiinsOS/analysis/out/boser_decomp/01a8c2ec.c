// FUN_01a8c2ec @ 01a8c2ec size=116 calls_out=3 calls_in=2
// strings: 

void FUN_01a8c2ec(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x11);
  if (cVar1 == '\0') {
    if (param_1[1] == 0) {
      return;
    }
    thunk_FUN_01be4678(*param_1);
    return;
  }
  if (cVar1 != '\x03') {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_0174afd4(param_1[5]);
  }
  iVar2 = 0;
  if (*(char *)(param_1 + 4) != '\0') {
    iVar2 = param_1[7];
  }
  if (*(char *)(param_1 + 4) != '\0' && iVar2 != 0) {
    thunk_FUN_01be4678(param_1[6]);
  }
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}

