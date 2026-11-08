// FUN_012e86fc @ 012e86fc size=88 calls_out=2 calls_in=1
// strings: 

void FUN_012e86fc(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1[1];
  iVar2 = param_1[2];
  FUN_012e86c4(param_1 + 1);
  param_1[1] = 0;
  if (*param_1 == 0) {
    return;
  }
  FUN_019b098c(*param_1 + 8,uVar1 & iVar2 != 0);
  return;
}

