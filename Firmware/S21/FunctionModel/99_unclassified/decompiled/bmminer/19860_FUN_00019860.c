// FUN_00019860 @ 00019860  size=108  callers=0
// program: bmminer


int FUN_00019860(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  
  iVar3 = 0;
  iVar4 = -0x7f;
  do {
    uVar7 = FUN_0002a6f0(iVar3,param_2);
    param_2 = (uint)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 != 0) {
      uVar2 = 0;
      iVar1 = (int)uVar7;
      while( true ) {
        iVar1 = FUN_0002a5bc(iVar1);
        param_2 = uVar2 & 0xff;
        if (iVar1 <= (int)uVar2) break;
        bVar5 = uVar2 != 3;
        bVar6 = uVar2 != 0;
        uVar2 = uVar2 + 1;
        iVar1 = iVar3;
        if (bVar5 && bVar6) {
          iVar1 = FUN_000197a0();
          if (iVar4 < iVar1) {
            iVar4 = iVar1;
          }
          iVar4 = (int)(short)iVar4;
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  return iVar4;
}

