// FUN_0171f040 @ 0171f040 size=196 calls_out=6 calls_in=4
// strings: 

undefined4
FUN_0171f040(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_017185b4(param_5);
  iVar1 = FUN_017186b0(param_5);
  if (iVar1 != 0) {
    if (param_2 == param_3) {
      iVar2 = FUN_0171df0c(iVar1,param_2,param_5);
    }
    else {
      iVar2 = FUN_0171d290();
    }
    if (iVar2 != 0) {
      iVar1 = FUN_0171ef88(param_1,iVar1,param_4,param_5);
      uVar3 = 0;
      if (iVar1 != 0) {
        uVar3 = 1;
      }
      goto LAB_0171f0c4;
    }
  }
  uVar3 = 0;
LAB_0171f0c4:
  FUN_01718904(param_5);
  return uVar3;
}

