// FUN_01b30908 @ 01b30908 size=248 calls_out=3 calls_in=4
// strings: 

undefined8 FUN_01b30908(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    uVar3 = 0;
    iVar2 = param_2;
    if (*(int *)(param_3 + 0xc) != 0) goto LAB_01b3098c;
  }
  else {
    if (*(int *)(param_3 + 0xc) == 0) {
      uVar3 = 1;
LAB_01b3098c:
      iVar2 = FUN_01b3039c(param_1,param_2,param_3);
      if (iVar2 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      return 1;
    }
    iVar2 = param_3;
    param_3 = param_2;
  }
  iVar1 = FUN_01b2be1c(iVar2,param_3);
  if (iVar1 < 0) {
    iVar2 = FUN_01b307c8(param_1,param_3,iVar2);
    if (iVar2 == 0) {
      return 0;
    }
    uVar3 = 1;
  }
  else {
    iVar2 = FUN_01b307c8(param_1,iVar2,param_3);
    if (iVar2 == 0) {
      return 0;
    }
    uVar3 = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  return 1;
}

