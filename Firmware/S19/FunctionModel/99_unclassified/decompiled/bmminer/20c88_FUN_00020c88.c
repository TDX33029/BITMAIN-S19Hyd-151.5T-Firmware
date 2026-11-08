// FUN_00020c88 @ 00020c88  size=232  callers=2
// program: bmminer


void FUN_00020c88(void)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  char acStack_810 [2052];
  
  if ((DAT_0048d36e != '\0') &&
     (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
    snprintf(acStack_810,0x800,"--- %s\n","dhash_chip_set_addr_all");
    FUN_00032218(7,acStack_810,0);
  }
  uVar3 = 0;
  do {
    iVar2 = FUN_000201d8(uVar3);
    if (iVar2 != 0) {
      thunk_FUN_00057674(uVar3 & 0xff);
      FUN_00034a5c(0x1e);
      uVar1 = FUN_0002009c();
      FUN_00057754(uVar3 & 0xff,uVar1);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 4);
  FUN_00034a5c(10);
  return;
}

