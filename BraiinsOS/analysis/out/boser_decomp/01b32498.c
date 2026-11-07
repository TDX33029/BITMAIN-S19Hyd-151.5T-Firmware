// FUN_01b32498 @ 01b32498 size=140 calls_out=5 calls_in=5
// strings: 

undefined4 FUN_01b32498(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_01b2e894(param_4);
  iVar1 = FUN_01b2e970(param_4);
  if ((iVar1 == 0) || (iVar2 = FUN_01b2b33c(iVar1,param_2), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_01b30bf8(param_1,iVar1,param_3);
  }
  FUN_01b2ebbc(param_4);
  return uVar3;
}

