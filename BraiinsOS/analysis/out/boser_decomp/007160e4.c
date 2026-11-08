// FUN_007160e4 @ 007160e4 size=64 calls_out=0 calls_in=0
// strings: 

void FUN_007160e4(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_2;
  *param_2 = 0;
  if (iVar1 == 0) {
    uVar2 = 5;
  }
  else {
    iVar3 = param_2[2];
    iVar4 = param_2[3];
    param_1[3] = param_2[1];
    param_1[4] = iVar3;
    param_1[5] = iVar4;
    param_1[2] = iVar1;
    uVar2 = 3;
  }
  *param_1 = uVar2;
  param_1[1] = 0;
  return;
}

