// FUN_012701dc @ 012701dc size=84 calls_out=1 calls_in=1
// strings: 

void FUN_012701dc(int *param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if ((uint)(*param_1 - iVar1) < param_2) {
    FUN_01270174(param_1,iVar1,param_2);
    iVar1 = param_1[2];
  }
  if (param_2 != 0) {
    *(undefined1 *)(param_1[1] + iVar1) = param_3;
    iVar1 = iVar1 + 1;
  }
  param_1[2] = iVar1;
  return;
}

