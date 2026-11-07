// FUN_01b70bc0 @ 01b70bc0 size=236 calls_out=5 calls_in=2
// strings: 

undefined8 FUN_01b70bc0(void)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  FUN_01b70810(&DAT_01d533b4,FUN_01b70a00);
  pcVar1 = DAT_01d53390;
  if (DAT_01d53390 == (char *)0x0) {
    uVar2 = 0;
    iVar3 = 0;
  }
  else {
    FUN_01b7076c(&DAT_01d53394);
    iVar3 = DAT_01d5338c;
    uVar2 = DAT_01d53388;
    if (*pcVar1 == '\0') {
      FUN_01b707cc(&DAT_01d53394);
      FUN_01b7079c(&DAT_01d53394);
      if (*pcVar1 == '\0') {
        *pcVar1 = '\x01';
        bVar4 = 0xfffffffe < DAT_01d53388;
        DAT_01d53388 = DAT_01d53388 + 1;
        DAT_01d5338c = DAT_01d5338c + (uint)bVar4;
        if (DAT_01d53388 == 0 && DAT_01d5338c == 0) {
          DAT_01d53388 = 1;
          DAT_01d5338c = 0;
        }
      }
      iVar3 = DAT_01d5338c;
      uVar2 = DAT_01d53388;
      FUN_01b707fc(&DAT_01d53394);
    }
    else {
      FUN_01b707cc(&DAT_01d53394);
    }
  }
  return CONCAT44(iVar3,uVar2);
}

