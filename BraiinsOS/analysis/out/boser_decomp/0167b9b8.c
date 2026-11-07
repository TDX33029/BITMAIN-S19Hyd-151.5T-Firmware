// FUN_0167b9b8 @ 0167b9b8 size=52 calls_out=2 calls_in=0
// strings: 

void FUN_0167b9b8(undefined4 *param_1)

{
  int iVar1;
  
  FUN_0134aee0(*param_1,param_1[1],4,4);
  iVar1 = *(int *)param_1[3] + -1;
  *(int *)param_1[3] = iVar1;
  if (iVar1 == 0) {
    FUN_016cc498();
    return;
  }
  return;
}

