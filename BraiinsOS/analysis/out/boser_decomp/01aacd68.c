// FUN_01aacd68 @ 01aacd68 size=112 calls_out=0 calls_in=11
// strings: 

void FUN_01aacd68(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[1] != 0) {
    piVar1 = (int *)(*param_1 + 4);
    iVar2 = *(int *)(param_1[2] + 8);
    iVar3 = param_1[1] * 0xc;
    do {
      if ((*(int *)(piVar1[-1] + 8) == iVar2) && (*piVar1 != 0)) {
        (**(code **)(piVar1[1] + 0xc))(*piVar1,piVar1[-1],param_2,param_3);
      }
      piVar1 = piVar1 + 3;
      iVar3 = iVar3 + -0xc;
    } while (iVar3 != 0);
  }
  return;
}

