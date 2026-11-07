// FUN_019d83c4 @ 019d83c4 size=80 calls_out=1 calls_in=6
// strings: 

void FUN_019d83c4(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = param_1[0x40];
  param_1[0x40] = 0;
  piVar4 = param_1 + iVar2 * 2;
  for (iVar2 = iVar2 << 3; iVar2 != 0; iVar2 = iVar2 + -8) {
    iVar3 = *param_1;
    piVar1 = param_1 + 1;
    param_1 = param_1 + 2;
    (**(code **)(iVar3 + 4))(*piVar1);
  }
  FUN_019d8434(piVar4,0);
  return;
}

