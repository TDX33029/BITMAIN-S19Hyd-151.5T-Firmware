// FUN_0002cb34 @ 0002cb34  size=232  callers=2
// program: bmminer


void FUN_0002cb34(void)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  char acStack_2010 [8196];
  
  if ((DAT_008c702e != '\0') &&
     (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
    snprintf(acStack_2010,0x2000,"--- %s\n","dhash_chip_set_addr_all");
    FUN_0004948c(7,acStack_2010,0);
  }
  uVar3 = 0;
  do {
    iVar2 = FUN_0002a6f0(uVar3);
    if (iVar2 != 0) {
      thunk_FUN_000819d4(uVar3 & 0xff);
      FUN_0004bf68(0x1e);
      uVar1 = FUN_0002a584();
      FUN_00081ab4(uVar3 & 0xff,uVar1);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 4);
  FUN_0004bf68(10);
  return;
}

