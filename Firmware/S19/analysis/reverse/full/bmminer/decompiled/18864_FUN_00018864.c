// FUN_00018864 @ 00018864  size=132  callers=1
// program: bmminer


int FUN_00018864(undefined4 param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  iVar5 = 0;
  iVar6 = 0;
  iVar7 = 0;
  do {
    uVar8 = FUN_000201d8(iVar5,param_2);
    param_2 = (uint)((ulonglong)uVar8 >> 0x20);
    iVar3 = iVar7;
    if ((int)uVar8 != 0) {
      uVar4 = 0;
      while( true ) {
        iVar2 = FUN_000200d8();
        param_2 = uVar4 & 0xff;
        iVar3 = iVar7 + uVar4;
        if (iVar2 <= (int)uVar4) break;
        iVar3 = FUN_000186d0(iVar5);
        uVar4 = uVar4 + 1;
        iVar6 = iVar6 + iVar3;
      }
    }
    iVar5 = iVar5 + 1;
    iVar7 = iVar3;
  } while (iVar5 != 4);
  if (iVar3 == 0) {
    return 0x23;
  }
  sVar1 = FUN_00067408(iVar6,iVar3);
  return (int)sVar1;
}

