// FUN_015f5368 @ 015f5368 size=96 calls_out=2 calls_in=1
// strings: 

void FUN_015f5368(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1[1];
  iVar2 = param_1[2];
  if (uVar1 != 0) {
    FUN_012d40d0(iVar2,param_1[3]);
  }
  param_1[1] = 0;
  if (*param_1 == 0) {
    return;
  }
  FUN_019b098c(*param_1 + 8,uVar1 & iVar2 != 0);
  return;
}

