// FUN_01b32b70 @ 01b32b70 size=228 calls_out=5 calls_in=1
// strings: 

undefined4
FUN_01b32b70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_3[1];
  iVar2 = param_2[1];
  FUN_01b2e894(param_4);
  iVar1 = FUN_01b2e970(param_4);
  if (iVar1 != 0) {
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    iVar4 = FUN_01b2b248(param_1,iVar2);
    if ((iVar4 != 0) && (iVar1 = FUN_01b2b248(iVar1,iVar2), iVar1 != 0)) {
      uVar3 = 1;
      FUN_01b315d4(*param_1,*param_2,*param_3);
      param_1[1] = iVar2;
      goto LAB_01b32bbc;
    }
  }
  uVar3 = 0;
LAB_01b32bbc:
  FUN_01b2ebbc(param_4);
  return uVar3;
}

