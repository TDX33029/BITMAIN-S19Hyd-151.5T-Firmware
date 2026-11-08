// FUN_00020af4 @ 00020af4  size=264  callers=1
// program: bmminer


void FUN_00020af4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char local_820 [2052];
  
  iVar1 = FUN_0002001c();
  if (iVar1 < 10) {
    if (4 < DAT_00087bbc) {
      builtin_strncpy(local_820,"no need to set uart relay\n",0x1b);
      FUN_00032218(4,local_820,0);
      return;
    }
  }
  else {
    iVar1 = FUN_0002001c();
    iVar1 = iVar1 + -3;
    if (-1 < iVar1) {
      do {
        iVar2 = FUN_0002003c();
        uVar6 = 0;
        iVar3 = FUN_0002009c();
        do {
          uVar7 = uVar6 & 0xff;
          iVar4 = FUN_000201d8(uVar6);
          uVar6 = uVar6 + 1;
          if (iVar4 != 0) {
            iVar4 = FUN_0002001c();
            iVar5 = FUN_0002003c();
            FUN_00058b04(uVar7,iVar3 * (iVar1 * iVar2 + iVar2 + -1),iVar5 * (iVar4 - iVar1) + 0xe,1,
                         1);
          }
        } while (uVar6 != 4);
        iVar1 = iVar1 + -3;
      } while (-1 < iVar1);
      return;
    }
  }
  return;
}

