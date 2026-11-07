// FUN_0005102c @ 0005102c  size=328  callers=1
// program: bmminer


void FUN_0005102c(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_r1;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar5 = 0;
  uVar1 = FUN_00050d70(3);
  FUN_0002c684();
  FUN_0004bf68(200);
  FUN_0002cb34();
  FUN_0004bf68(10);
  FUN_0002cdac(0xff,uVar1 & 0xff);
  FUN_0004bf68(10);
  FUN_0002cdf8(0xff,(char)(uVar1 >> 8),(char)(uVar1 >> 0x10),0);
  FUN_0004bf68(10);
  FUN_0002c7e8(0xff);
  FUN_0004bf68(10);
  FUN_0002c72c(0xff,0,1,3);
  FUN_0004bf68(10);
  FUN_0002c798(0xff);
  FUN_0004bf68(10);
  FUN_0002cfd0(1);
  do {
    iVar2 = FUN_0002a6f0(uVar5);
    if ((iVar2 != 0) && (iVar2 = FUN_0002a514(), iVar2 != 0)) {
      iVar6 = 0;
      do {
        iVar7 = iVar6 + 1;
        uVar3 = FUN_0002a524();
        FUN_0009863c(iVar7,uVar3);
        if (extraout_r1 == 0) {
          iVar4 = FUN_0002a584();
          FUN_00082fb0(uVar5 & 0xff,iVar6 * iVar4,3);
        }
        iVar6 = iVar7;
      } while (iVar2 != iVar7);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 != 4);
  FUN_0004bf68(10);
  FUN_0002d0f0(0xff);
  FUN_0004bf68(10);
  return;
}

