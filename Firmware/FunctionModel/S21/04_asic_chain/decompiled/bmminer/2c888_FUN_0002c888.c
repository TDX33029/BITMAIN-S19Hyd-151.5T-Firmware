// FUN_0002c888 @ 0002c888  size=356  callers=1
// program: bmminer


void FUN_0002c888(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  char local_2020 [8192];
  
  iVar1 = FUN_0002a504();
  if (iVar1 < 10) {
    if (4 < DAT_000be63c) {
      builtin_strncpy(local_2020,"no need to set uart relay\n",0x1b);
      FUN_0004948c(4,local_2020,0);
      return;
    }
  }
  else {
    iVar1 = FUN_0002a504();
    iVar1 = iVar1 + -1;
    if (-1 < iVar1) {
      do {
        iVar2 = FUN_0002a524();
        uVar6 = 0;
        do {
          uVar7 = uVar6 & 0xff;
          iVar3 = FUN_0002a6f0(uVar6);
          uVar6 = uVar6 + 1;
          if (iVar3 != 0) {
            iVar3 = FUN_0002a584();
            iVar4 = FUN_0002a504();
            iVar5 = FUN_0002a524();
            FUN_00082b14(uVar7,iVar1 * iVar2 * iVar3,iVar5 * (iVar4 - iVar1) + 0xe,1,1);
          }
        } while (uVar6 != 4);
        iVar2 = FUN_0002a524();
        uVar6 = 0;
        do {
          uVar7 = uVar6 + 1;
          iVar3 = FUN_0002a6f0(uVar6);
          if (iVar3 != 0) {
            iVar3 = FUN_0002a584();
            iVar4 = FUN_0002a504();
            iVar5 = FUN_0002a524();
            FUN_00082b14(uVar6 & 0xff,(iVar1 * iVar2 + iVar2 + -1) * iVar3,
                         iVar5 * (iVar4 - iVar1) + 0xe,1,1);
          }
          uVar6 = uVar7;
        } while (uVar7 != 4);
        bVar8 = iVar1 != 0;
        iVar1 = iVar1 + -1;
      } while (bVar8);
      return;
    }
  }
  return;
}

