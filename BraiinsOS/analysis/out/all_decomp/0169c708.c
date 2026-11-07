// FUN_0169c708 @ 0169c708 size=52 calls_out=1 calls_in=0
// strings: 

void FUN_0169c708(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if (iVar4 != 0) {
    FUN_0127bdfc(param_2 + 0xd0);
    iVar1 = param_1[1];
    iVar2 = param_1[2];
    iVar3 = param_1[3];
    *(int *)(param_2 + 0xd0) = iVar4;
    *(int *)(param_2 + 0xd4) = iVar1;
    *(int *)(param_2 + 0xd8) = iVar2;
    *(int *)(param_2 + 0xdc) = iVar3;
  }
  return;
}

