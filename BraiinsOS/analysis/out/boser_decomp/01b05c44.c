// FUN_01b05c44 @ 01b05c44 size=172 calls_out=7 calls_in=0
// strings: 

undefined4 FUN_01b05c44(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x14);
  iVar1 = FUN_01b3b160();
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
LAB_01b05c94:
    iVar4 = FUN_01b01ab4(iVar1,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8),iVar2);
    if (iVar4 == 1) {
      FUN_01b068a0(param_2,iVar1);
      uVar3 = 1;
      goto LAB_01b05cbc;
    }
  }
  else {
    iVar2 = FUN_01b33748();
    if (iVar2 != 0) {
      FUN_01b48c68(iVar2,param_1);
      goto LAB_01b05c94;
    }
  }
  uVar3 = 0;
  FUN_01b3b1a8(iVar1);
LAB_01b05cbc:
  FUN_01b33760(iVar2);
  return uVar3;
}

