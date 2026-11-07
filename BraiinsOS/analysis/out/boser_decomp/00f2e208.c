// FUN_00f2e208 @ 00f2e208 size=136 calls_out=3 calls_in=2
// strings: 

void FUN_00f2e208(int *param_1)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  
  cVar1 = (char)param_1[0x60];
  if (cVar1 == '\0') {
    if (*param_1 == -0x80000000) {
      return;
    }
    FUN_00f25e18(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_00f2e2d8(param_1 + 0x62);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_00f2e374(param_1 + 0x62);
    *(undefined2 *)((int)param_1 + 0x182) = 0;
  }
  uVar2 = param_1[0x31];
  bVar3 = uVar2 != 0x80000000;
  if (bVar3) {
    uVar2 = (uint)*(byte *)((int)param_1 + 0x181);
  }
  if (bVar3 && uVar2 != 0) {
    FUN_00f25e18();
  }
  *(undefined1 *)((int)param_1 + 0x181) = 0;
  return;
}

