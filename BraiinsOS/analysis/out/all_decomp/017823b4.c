// FUN_017823b4 @ 017823b4 size=336 calls_out=5 calls_in=3
// strings: 

undefined8 FUN_017823b4(void)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  FUN_01781ff4(&DAT_018dff0c,FUN_017821f4);
  pcVar3 = DAT_018dfee8;
  if (DAT_018dfee8 == (char *)0x0) {
    return 0;
  }
  FUN_01781f34();
  iVar2 = DAT_018dfee4;
  uVar1 = DAT_018dfee0;
  if (*pcVar3 != '\0') {
    FUN_01781f94();
    return CONCAT44(iVar2,uVar1);
  }
  FUN_01781f94();
  FUN_01781f64(&DAT_018dfeec);
  if (*pcVar3 == '\0') {
    bVar4 = 0xfffffffe < DAT_018dfee0;
    DAT_018dfee0 = DAT_018dfee0 + 1;
    DAT_018dfee4 = DAT_018dfee4 + (uint)bVar4;
    *pcVar3 = '\x01';
    if (DAT_018dfee0 == 0 && DAT_018dfee4 == 0) {
      DAT_018dfee0 = 1;
      DAT_018dfee4 = 0;
    }
  }
  iVar2 = DAT_018dfee4;
  uVar1 = DAT_018dfee0;
  FUN_01781fc4(&DAT_018dfeec);
  return CONCAT44(iVar2,uVar1);
}

