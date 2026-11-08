// FUN_0171a934 @ 0171a934 size=248 calls_out=3 calls_in=3
// strings: 

undefined4 FUN_0171a934(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_3 + 0xc);
  if (iVar3 == *(int *)(param_2 + 0xc)) {
    uVar2 = FUN_0171a398();
    *(int *)(param_1 + 0xc) = iVar3;
    return uVar2;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar3 = param_3;
  }
  else {
    iVar3 = param_2;
    param_2 = param_3;
  }
  iVar1 = FUN_01715744(param_2);
  if (iVar1 < 0) {
    iVar3 = FUN_0171a8e0(param_1,iVar3,param_2);
    if (iVar3 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar3 = FUN_0171a8e0(param_1,param_2,iVar3);
    if (iVar3 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return 1;
}

