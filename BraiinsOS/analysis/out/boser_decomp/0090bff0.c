// FUN_0090bff0 @ 0090bff0 size=232 calls_out=5 calls_in=1
// strings: 

void FUN_0090bff0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x55);
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
    if (*(char *)(param_1 + 0x50) == '\x03') {
      FUN_00df984c(param_1 + 0x21);
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_008865cc(param_1 + 0x18);
    FUN_0084ec48(param_1 + 0x12);
    if ((undefined1 *)param_1[0xe] != &DAT_80000005) {
      FUN_008ee56c();
    }
  }
  bVar3 = *(char *)((int)param_1 + 0x57) != '\0';
  iVar2 = 0;
  if (bVar3) {
    iVar2 = param_1[0x1d];
  }
  if (bVar3 && iVar2 != -0x80000000) {
    FUN_019bb7e0(iVar2,param_1[0x1e]);
  }
  *(undefined1 *)((int)param_1 + 0x57) = 0;
  if (*(char *)(param_1 + 0x16) != '\0') {
    FUN_019bb7e0(param_1[0x1a],param_1[0x1b]);
  }
  *(undefined1 *)(param_1 + 0x16) = 0;
  if (*(char *)((int)param_1 + 0x59) != '\0') {
    FUN_019bb7e0(param_1[0x17],param_1[0x18]);
  }
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  return;
}

