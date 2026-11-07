// FUN_00bf9a34 @ 00bf9a34 size=148 calls_out=4 calls_in=3
// strings: 

void FUN_00bf9a34(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x27) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if (*(char *)(param_1 + 0x27) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xc);
  if (cVar1 == '\x04') {
    FUN_00bf959c(param_1 + 0xd);
    FUN_019f8c54(param_1[9],param_1[10]);
  }
  else if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x1a) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x19);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x18);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x10);
      }
    }
  }
  else if (cVar1 != '\0') {
    return;
  }
  FUN_019bb7e0(param_1[5],param_1[6]);
  return;
}

