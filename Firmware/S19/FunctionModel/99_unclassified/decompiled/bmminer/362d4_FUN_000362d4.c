// FUN_000362d4 @ 000362d4  size=140  callers=2
// program: bmminer


void FUN_000362d4(void)

{
  int iVar1;
  uint uVar2;
  char local_808 [2048];
  
  if (3 < DAT_00087bbc) {
    builtin_strncpy(local_808,"****power off hashboard****\n",0x1d);
    FUN_00032218(3,local_808,0);
  }
  uVar2 = 0;
  do {
    iVar1 = FUN_000201d8(uVar2);
    if (iVar1 != 0) {
      thunk_FUN_0004c224(uVar2 & 0xff);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 4);
  FUN_0001cb8c();
  FUN_0004a128();
  return;
}

