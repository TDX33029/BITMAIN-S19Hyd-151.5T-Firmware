// FUN_00019810 @ 00019810  size=80  callers=0
// program: bmminer


int FUN_00019810(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  
  uVar2 = 0;
  iVar3 = -0x7f;
  iVar1 = param_1;
  while( true ) {
    iVar1 = FUN_0002a5bc(iVar1,param_2);
    param_2 = uVar2 & 0xff;
    if (iVar1 <= (int)uVar2) break;
    bVar4 = uVar2 != 3;
    bVar5 = uVar2 != 0;
    uVar2 = uVar2 + 1;
    iVar1 = param_1;
    if (bVar4 && bVar5) {
      uVar6 = FUN_000197a0();
      param_2 = (uint)((ulonglong)uVar6 >> 0x20);
      iVar1 = (int)uVar6;
      if (iVar3 < iVar1) {
        iVar3 = iVar1;
      }
      iVar3 = (int)(short)iVar3;
    }
  }
  return iVar3;
}

