// FUN_0004f8e8 @ 0004f8e8  size=392  callers=1
// program: bmminer


void FUN_0004f8e8(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int extraout_r1;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  memset(&DAT_00a5917c,0,0x2000);
  memset(&DAT_00a5d228,0,0x2000);
  memset(&DAT_00a5b180,0,0x2000);
  FUN_0004de18(&DAT_00a5917c,10);
  iVar6 = 0;
  FUN_0004de18(&DAT_00a5d228,0x1e);
  FUN_0004de18(&DAT_00a5b180,0x3c);
  do {
    iVar2 = FUN_0002a6f0(iVar6);
    if (iVar2 != 0) {
      uVar5 = 0;
      do {
        uVar3 = FUN_0002a514();
        bVar1 = uVar5 < uVar3;
        uVar5 = uVar5 + 1;
      } while (bVar1);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 4);
  iVar6 = 0;
  iVar2 = FUN_0002a6f0(0);
  while( true ) {
    if (iVar2 != 0) {
      iVar2 = 0;
      uVar5 = 0;
      while( true ) {
        uVar3 = FUN_0002a514();
        iVar7 = iVar2 + uVar5;
        if (uVar3 <= uVar5) break;
        uVar4 = FUN_0002a524();
        FUN_0009863c(uVar5,uVar4);
        iVar8 = iVar7;
        if (extraout_r1 == 0) {
          iVar2 = iVar2 + 1;
          iVar8 = iVar2 + uVar5;
          FUN_0002ac70(iVar6,iVar7,0x20);
        }
        uVar5 = uVar5 + 1;
        FUN_0002ac70(iVar6,iVar8,0x6f);
      }
      FUN_0002ac70(iVar6,iVar7,0);
    }
    iVar6 = iVar6 + 1;
    if (iVar6 == 4) break;
    iVar2 = FUN_0002a6f0(iVar6);
  }
  return;
}

