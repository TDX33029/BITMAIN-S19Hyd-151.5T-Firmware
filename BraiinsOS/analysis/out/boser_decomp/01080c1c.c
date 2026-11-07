// FUN_01080c1c @ 01080c1c size=136 calls_out=3 calls_in=1
// strings: 

void FUN_01080c1c(int *param_1)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  
  cVar1 = (char)param_1[0x60];
  if (cVar1 == '\0') {
    if (*param_1 == -0x80000000) {
      return;
    }
    FUN_0193f164(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_01080cec(param_1 + 0x62);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_01081e30(param_1 + 0x62);
    *(undefined2 *)((int)param_1 + 0x182) = 0;
  }
  uVar2 = param_1[0x31];
  bVar3 = uVar2 != 0x80000000;
  if (bVar3) {
    uVar2 = (uint)*(byte *)((int)param_1 + 0x181);
  }
  if (bVar3 && uVar2 != 0) {
    FUN_0193f164();
  }
  *(undefined1 *)((int)param_1 + 0x181) = 0;
  return;
}

