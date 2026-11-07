// FUN_000198cc @ 000198cc  size=136  callers=1
// program: bmminer


int FUN_000198cc(undefined4 param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  
  iVar4 = 0;
  iVar5 = 0;
  iVar6 = 0;
  do {
    uVar9 = FUN_0002a6f0(iVar4,param_2);
    param_2 = (uint)((ulonglong)uVar9 >> 0x20);
    if ((int)uVar9 != 0) {
      uVar3 = 0;
      iVar2 = (int)uVar9;
      while( true ) {
        iVar2 = FUN_0002a5bc(iVar2);
        param_2 = uVar3 & 0xff;
        if (iVar2 <= (int)uVar3) break;
        bVar7 = uVar3 != 3;
        bVar8 = uVar3 != 0;
        uVar3 = uVar3 + 1;
        iVar2 = iVar4;
        if (bVar7 && bVar8) {
          iVar2 = FUN_000197a0();
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + iVar2;
        }
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  if (iVar5 == 0) {
    return 0x23;
  }
  sVar1 = FUN_00098658(iVar6,iVar5);
  return (int)sVar1;
}

