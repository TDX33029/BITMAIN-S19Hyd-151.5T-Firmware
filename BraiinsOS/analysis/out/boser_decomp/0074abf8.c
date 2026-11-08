// FUN_0074abf8 @ 0074abf8 size=92 calls_out=2 calls_in=2
// strings: 

void FUN_0074abf8(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [24];
  
  if (*param_2 == -0x80000000) {
    FUN_019b9f84(auStack_30);
    iVar1 = FUN_00783ce8(param_3,param_4,auStack_30);
    *param_1 = -0x80000000;
    param_1[1] = iVar1;
    return;
  }
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  return;
}

