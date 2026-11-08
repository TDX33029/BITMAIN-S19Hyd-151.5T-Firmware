// FUN_00046898 @ 00046898  size=24  callers=7
// program: cgminer


int FUN_00046898(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == param_1 + 0x14) {
    iVar1 = 0;
  }
  return iVar1;
}

