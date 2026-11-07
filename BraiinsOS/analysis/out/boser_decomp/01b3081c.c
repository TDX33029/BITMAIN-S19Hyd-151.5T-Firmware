// FUN_01b3081c @ 01b3081c size=236 calls_out=3 calls_in=3
// strings: 

undefined4 FUN_01b3081c(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_3 + 0xc);
  if (iVar3 == *(int *)(param_2 + 0xc)) {
    uVar2 = FUN_01b3039c();
    *(int *)(param_1 + 0xc) = iVar3;
    return uVar2;
  }
  iVar3 = param_2;
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar3 = param_3;
    param_3 = param_2;
  }
  iVar1 = FUN_01b2be1c(param_3,iVar3);
  if (iVar1 < 0) {
    iVar3 = FUN_01b307c8(param_1,iVar3,param_3);
    if (iVar3 != 0) {
      uVar2 = 1;
LAB_01b308a8:
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      return 1;
    }
  }
  else {
    iVar3 = FUN_01b307c8(param_1,param_3,iVar3);
    if (iVar3 != 0) {
      uVar2 = 0;
      goto LAB_01b308a8;
    }
  }
  return 0;
}

