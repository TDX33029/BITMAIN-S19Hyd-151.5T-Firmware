// FUN_01a55210 @ 01a55210 size=64 calls_out=0 calls_in=0
// strings: 

void FUN_01a55210(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)*param_2;
  do {
    piVar3 = piVar1;
    if (piVar3 == (int *)param_2[1]) {
      iVar2 = 0;
      goto LAB_01a55248;
    }
    iVar2 = *piVar3;
    *param_2 = piVar3 + 0x30;
    piVar1 = piVar3 + 0x30;
  } while (iVar2 == 0);
  iVar2 = piVar3[0x1d];
  param_1[1] = piVar3[0x1e];
  param_1[2] = (int)piVar3;
LAB_01a55248:
  *param_1 = iVar2;
  return;
}

