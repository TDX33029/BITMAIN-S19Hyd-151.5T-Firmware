// FUN_007b4cac @ 007b4cac size=72 calls_out=1 calls_in=1
// strings: 

void FUN_007b4cac(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  for (iVar1 = 0; iVar3 != iVar1; iVar1 = iVar1 + 1) {
    (**(code **)**(undefined4 **)(iVar2 + iVar1 * 4))();
  }
  FUN_0132b958(*param_1,iVar2,4,4);
  return;
}

