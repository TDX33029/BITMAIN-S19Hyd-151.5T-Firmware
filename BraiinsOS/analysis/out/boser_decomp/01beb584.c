// FUN_01beb584 @ 01beb584 size=94 calls_out=4 calls_in=2
// strings: 

int FUN_01beb584(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_3 * param_2;
  if (param_2 == 0) {
    param_3 = 0;
  }
  if (*(int *)(param_4 + 0x4c) < 0) {
    iVar1 = FUN_01beb506(param_1,iVar3,param_4,*(int *)(param_4 + 0x4c),param_4);
  }
  else {
    iVar2 = FUN_01beae30(param_4);
    iVar1 = FUN_01beb506(param_1,iVar3,param_4);
    if (iVar2 != 0) {
      FUN_01beaed6(param_4);
    }
  }
  if (iVar3 != iVar1) {
    param_3 = FUN_01bf1250(iVar1,param_2);
  }
  return param_3;
}

