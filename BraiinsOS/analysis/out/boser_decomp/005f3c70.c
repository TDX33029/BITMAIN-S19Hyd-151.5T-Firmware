// FUN_005f3c70 @ 005f3c70 size=136 calls_out=3 calls_in=1
// strings: 

void FUN_005f3c70(int *param_1)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  
  cVar1 = (char)param_1[0x60];
  if (cVar1 == '\0') {
    if (*param_1 == -0x80000000) {
      return;
    }
    FUN_01a2affc(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_005fc9c4(param_1 + 0x62);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_005fcab8(param_1 + 0x62);
    *(undefined2 *)((int)param_1 + 0x182) = 0;
  }
  uVar2 = param_1[0x31];
  bVar3 = uVar2 != 0x80000000;
  if (bVar3) {
    uVar2 = (uint)*(byte *)((int)param_1 + 0x181);
  }
  if (bVar3 && uVar2 != 0) {
    FUN_01a2affc();
  }
  *(undefined1 *)((int)param_1 + 0x181) = 0;
  return;
}

