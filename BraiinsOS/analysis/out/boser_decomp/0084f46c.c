// FUN_0084f46c @ 0084f46c size=232 calls_out=5 calls_in=1
// strings: 

void FUN_0084f46c(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x4d);
  if (cVar1 == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    FUN_019bb7e0(param_1[3],param_1[4]);
    if (param_1[6] == -0x80000000) {
      return;
    }
    FUN_019bb7e0(param_1[6],param_1[7]);
    return;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x4e) == '\x03') {
      FUN_00df984c(param_1 + 0x1f);
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_0084f5ec(param_1 + 0x16);
    FUN_0084ec48(param_1 + 0x10);
    if ((undefined1 *)param_1[0xc] != &DAT_80000005) {
      FUN_0084ed4c();
    }
  }
  bVar3 = *(char *)((int)param_1 + 0x4f) != '\0';
  iVar2 = 0;
  if (bVar3) {
    iVar2 = param_1[0x1b];
  }
  if (bVar3 && iVar2 != -0x80000000) {
    FUN_019bb7e0(iVar2,param_1[0x1c]);
  }
  *(undefined1 *)((int)param_1 + 0x4f) = 0;
  if (*(char *)(param_1 + 0x14) != '\0') {
    FUN_019bb7e0(param_1[0x18],param_1[0x19]);
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (*(char *)((int)param_1 + 0x51) != '\0') {
    FUN_019bb7e0(param_1[0x15],param_1[0x16]);
  }
  *(undefined1 *)((int)param_1 + 0x51) = 0;
  return;
}

