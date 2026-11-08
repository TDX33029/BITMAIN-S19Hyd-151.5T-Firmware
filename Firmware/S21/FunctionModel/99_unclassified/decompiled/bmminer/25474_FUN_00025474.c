// FUN_00025474 @ 00025474  size=524  callers=2
// program: bmminer


int FUN_00025474(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_201c;
  char acStack_2018 [8192];
  
  iVar4 = 0;
  local_201c = 0;
  iVar1 = FUN_00053180();
  if (iVar1 == 0) {
    if (DAT_000be8e8 == 2) {
      iVar1 = 0;
      iVar4 = 0;
      do {
        iVar7 = FUN_0002a6f0(iVar1);
        if (iVar7 != 0) {
          iVar3 = (&DAT_000c0430)[iVar1];
          iVar7 = FUN_0002a514();
          iVar2 = FUN_0002a554();
          iVar4 = iVar2 * iVar7 * iVar3 + iVar4;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 4);
      DAT_000c0444 = iVar4 / 1000;
    }
    else {
      iVar1 = 0;
      uVar5 = 0;
      do {
        iVar4 = FUN_0002a6f0(iVar1);
        uVar6 = uVar5;
        if ((((iVar4 != 0) &&
             (iVar4 = FUN_0001c934(iVar1,(undefined1)DAT_000c94e8,&local_201c), iVar4 == 0)) &&
            (uVar6 = local_201c, uVar5 != 0)) && (uVar6 = uVar5, local_201c <= uVar5)) {
          uVar6 = local_201c;
        }
        iVar1 = iVar1 + 1;
        uVar5 = uVar6;
      } while (iVar1 != 4);
      iVar4 = 0;
      iVar1 = 0;
      do {
        iVar7 = iVar1 + 1;
        iVar1 = FUN_0002a6f0(iVar1);
        if (iVar1 != 0) {
          iVar1 = FUN_0002a514();
          iVar2 = FUN_0002a554();
          iVar4 = iVar2 * uVar6 * iVar1 + iVar4;
        }
        iVar1 = iVar7;
      } while (iVar7 != 4);
      DAT_000c0444 = iVar4 / 1000;
    }
  }
  else if (DAT_000be8e8 == 2) {
    iVar1 = 0;
    do {
      iVar7 = iVar1 + 1;
      iVar1 = FUN_0002a6f0(iVar1);
      if (iVar1 != 0) {
        iVar2 = FUN_0002a514();
        iVar1 = DAT_008c7040;
        iVar3 = FUN_0002a554();
        iVar4 = iVar1 * iVar3 * iVar2 + iVar4;
      }
      iVar1 = iVar7;
    } while (iVar7 != 4);
    DAT_000c0444 = iVar4 / 1000;
  }
  else {
    DAT_000c0444 = 0;
  }
  if (4 < DAT_000be63c) {
    snprintf(acStack_2018,0x2000,"ideal_hash_rate = %d\n",DAT_000c0444);
    FUN_0004948c(4,acStack_2018,0);
  }
  return DAT_000c0444;
}

