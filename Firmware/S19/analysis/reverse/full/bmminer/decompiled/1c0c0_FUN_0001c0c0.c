// FUN_0001c0c0 @ 0001c0c0  size=284  callers=0
// program: bmminer


void FUN_0001c0c0(void)

{
  int iVar1;
  uint __n;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 uStack_958;
  byte local_957;
  byte local_923;
  undefined1 auStack_910 [2];
  undefined1 auStack_90e [254];
  char local_810 [2048];
  
  memset(auStack_910,0,0x100);
  __n = (uint)local_957;
  uVar3 = __n + 5 & 0xfffffff8;
  iVar4 = uVar3 + 2;
  if ((int)((((uint)local_923 - (0x36 - __n)) + 7 & 0xfffffff8) + (0x36 - __n) + iVar4) < 0x101) {
    memcpy(auStack_910,&uStack_958,__n);
    iVar2 = 0;
    FUN_0001c4f4(auStack_90e,uVar3,1);
    do {
      iVar1 = FUN_000201d8(iVar2);
      if (iVar1 != 0) {
        FUN_00049ab4(iVar2,0,auStack_910,iVar4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    FUN_0001acb0();
    return;
  }
  if (DAT_00087bbc < 4) {
    return;
  }
  builtin_strncpy(local_810,"EEPROM does not have enough space\n",0x23);
  FUN_00032218(3,local_810,0);
  return;
}

