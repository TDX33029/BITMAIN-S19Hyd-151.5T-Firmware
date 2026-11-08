// FUN_01080edc @ 01080edc size=192 calls_out=4 calls_in=2
// strings: 

void FUN_01080edc(undefined4 *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint extraout_r1;
  int iVar3;
  uint extraout_r1_00;
  bool bVar4;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    iVar2 = param_1[3];
    iVar3 = 0xc;
    if (iVar2 == -0x80000000) {
      return;
    }
  }
  else {
    if (cVar1 == '\x03') {
      cVar1 = *(char *)(param_1 + 0x1c);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x1b);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x13);
        param_2 = extraout_r1_00;
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0x4b) == '\x03') {
        FUN_01080ff0(param_1 + 0x12);
      }
      FUN_019f8c54(param_1[0xd],param_1[0xe]);
      param_2 = extraout_r1;
    }
    iVar2 = param_1[10];
    if (iVar2 != -0x80000000) {
      param_2 = (uint)*(byte *)((int)param_1 + 0x41);
    }
    if (iVar2 != -0x80000000 && param_2 != 0) {
      FUN_019bb7e0(iVar2,param_1[0xb]);
    }
    iVar3 = 0x1c;
    *(undefined1 *)((int)param_1 + 0x41) = 0;
    iVar2 = param_1[7];
  }
  FUN_019bb7e0(iVar2,*(undefined4 *)((int)param_1 + iVar3 + 4));
  return;
}

