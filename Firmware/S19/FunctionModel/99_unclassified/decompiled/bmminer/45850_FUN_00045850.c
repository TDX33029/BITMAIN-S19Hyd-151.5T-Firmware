// FUN_00045850 @ 00045850  size=76  callers=2
// program: bmminer


int FUN_00045850(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    iVar1 = FUN_00046784(0x3ba,1);
    return iVar1;
  }
  if (param_1 == 1) {
    iVar1 = FUN_00046784(0x3bb);
    return iVar1;
  }
  iVar1 = FUN_00046784(0x3ba,1);
  iVar2 = FUN_00046784(0x3bb,1);
  return iVar1 + iVar2;
}

