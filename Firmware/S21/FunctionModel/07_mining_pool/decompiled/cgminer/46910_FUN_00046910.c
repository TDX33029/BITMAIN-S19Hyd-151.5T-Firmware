// FUN_00046910 @ 00046910  size=24  callers=7
// program: cgminer


int FUN_00046910(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == param_1 + 0x14) {
    iVar1 = 0;
  }
  return iVar1;
}

