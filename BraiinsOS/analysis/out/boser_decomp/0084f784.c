// FUN_0084f784 @ 0084f784 size=172 calls_out=2 calls_in=2
// strings: 

void FUN_0084f784(int *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (char)param_1[4];
  if (cVar1 == '\0') {
    if (*param_1 == -0x80000000) {
      return;
    }
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if (cVar1 == '\x03') {
    if ((char)param_1[0x12] == '\x03') {
      cVar1 = (char)param_1[0x11];
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = (char)param_1[0x10];
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 8);
        return;
      }
    }
  }
  else if (cVar1 == '\x04') {
    if ((char)param_1[0x15] == '\x03') {
      cVar1 = (char)param_1[0x14];
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = (char)param_1[0x13];
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0xb);
      }
    }
    FUN_019bb7e0(param_1[5],param_1[6]);
    *(undefined1 *)((int)param_1 + 0x11) = 0;
    return;
  }
  return;
}

