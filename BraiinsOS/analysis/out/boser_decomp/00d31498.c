// FUN_00d31498 @ 00d31498 size=188 calls_out=6 calls_in=2
// strings: 

void FUN_00d31498(int *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if (*param_1 != 1) {
    if (*param_1 != 0) {
      return;
    }
    if (*(char *)((int)param_1 + 0xb1) == '\0') {
      FUN_00d315e0(param_1 + 0x28);
      FUN_00d31680(param_1 + 0x2a);
    }
    else {
      if (*(char *)((int)param_1 + 0xb1) != '\x03') {
        return;
      }
      cVar1 = (char)param_1[0x10];
      bVar3 = cVar1 == '\x03';
      if (bVar3) {
        cVar1 = *(char *)((int)param_1 + 0x1d);
      }
      if (bVar3 && cVar1 == '\x04') {
        FUN_019ede44(param_1 + 8);
        *(undefined1 *)(param_1 + 7) = 0;
      }
      FUN_019ede44(param_1 + 0x12);
      FUN_00d31700(param_1 + 0x1a);
      FUN_00d315e0(param_1 + 0x28);
      FUN_00d31680(param_1 + 0x2a);
    }
    FUN_005faf6c(param_1 + 0x2b);
    return;
  }
  iVar2 = 0;
  if (param_1[2] != 0 || param_1[3] != 0) {
    iVar2 = param_1[4];
  }
  if ((param_1[2] != 0 || param_1[3] != 0) && iVar2 != 0) {
    FUN_01443048(iVar2,param_1[5]);
    return;
  }
  return;
}

