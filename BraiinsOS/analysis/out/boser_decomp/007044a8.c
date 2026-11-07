// FUN_007044a8 @ 007044a8 size=116 calls_out=4 calls_in=2
// strings: 

undefined4 FUN_007044a8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_01b47ba8(param_2);
  uVar3 = 1;
  if (((iVar1 != 0) && (iVar2 = FUN_01b3d638(), iVar2 != 0)) &&
     (iVar1 = FUN_01b3d658(iVar1), iVar1 != 0)) {
    iVar1 = FUN_01b04ba0(param_1,iVar2,iVar1,4,0);
    uVar3 = 0;
    if (iVar1 != 1) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

