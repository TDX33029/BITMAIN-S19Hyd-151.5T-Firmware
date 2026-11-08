// FUN_01428bac @ 01428bac size=120 calls_out=2 calls_in=3
// strings: 

void FUN_01428bac(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*param_2 == 0) {
    iVar1 = param_3[1];
    iVar2 = param_3[2];
    param_1[1] = *param_3;
    param_1[2] = iVar1;
    param_1[3] = iVar2;
    param_3 = param_2 + 1;
    iVar1 = *param_3;
    *param_1 = 0;
    *(char *)(param_1 + 4) = (char)param_2[4];
    if (iVar1 == -0x80000000) {
      return;
    }
  }
  else {
    iVar1 = param_2[1];
    iVar2 = param_2[2];
    iVar3 = param_2[3];
    iVar4 = param_2[4];
    iVar5 = param_2[5];
    *param_1 = *param_2;
    param_1[1] = iVar1;
    param_1[2] = iVar2;
    param_1[3] = iVar3;
    param_1[4] = iVar4;
    param_1[5] = iVar5;
  }
  iVar1 = param_3[1];
  FUN_0142823c(iVar1,param_3[2]);
  FUN_0134c054(*param_3,iVar1,4,0x14);
  return;
}

