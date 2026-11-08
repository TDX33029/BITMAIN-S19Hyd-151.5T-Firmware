// FUN_01782554 @ 01782554 size=296 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_01782554(void)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  DAT_018dff38 = 0;
  DAT_018dff3c = 0;
  if (DAT_018dff60 == '\x01') {
    FUN_01781f34();
    DAT_018dff40 = DAT_018dff58;
    DAT_018dff44 = DAT_018dff5c;
    FUN_01781f94(&DAT_018dff64);
    lVar3 = CONCAT44(DAT_018dff44,DAT_018dff40);
  }
  else {
    lVar3 = FUN_017823b4();
    if (lVar3 == 0) {
      bVar1 = true;
      lVar3 = CONCAT44(DAT_018dff44,DAT_018dff40);
      goto LAB_017825ac;
    }
  }
  bVar1 = false;
LAB_017825ac:
  DAT_018dff44 = (undefined4)((ulonglong)lVar3 >> 0x20);
  DAT_018dff40 = (undefined4)lVar3;
  if (DAT_018dff60 == '\x01') {
    FUN_01781f34();
    DAT_018dff48 = DAT_018dff50;
    FUN_01781f94(&DAT_018dff64);
  }
  else {
    iVar2 = FUN_01782ab4(&DAT_018dff48);
    if (iVar2 == 0) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    uVar4 = FUN_01781ff4(&DAT_018dffa4,&LAB_01782524);
    return uVar4;
  }
  return 0;
}

