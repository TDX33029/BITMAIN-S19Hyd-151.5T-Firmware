// FUN_0171aa2c @ 0171aa2c size=276 calls_out=3 calls_in=4
// strings: 

undefined8 FUN_0171aa2c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    uVar3 = 0;
    iVar1 = param_3;
    if (*(int *)(param_3 + 0xc) != 0) goto LAB_0171aa6c;
  }
  else {
    if (*(int *)(param_3 + 0xc) == 0) {
      uVar3 = 1;
LAB_0171aa6c:
      iVar1 = FUN_0171a398(param_1,param_2,param_3);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      return 1;
    }
    iVar1 = param_2;
    param_2 = param_3;
  }
  iVar2 = FUN_01715744(param_2);
  if (iVar2 < 0) {
    iVar1 = FUN_0171a8e0(param_1,iVar1,param_2);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0xc) = 1;
      return 1;
    }
  }
  else {
    iVar1 = FUN_0171a8e0(param_1,param_2,iVar1);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      return 1;
    }
  }
  return 0;
}

