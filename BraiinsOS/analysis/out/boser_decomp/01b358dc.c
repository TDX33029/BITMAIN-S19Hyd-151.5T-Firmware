// FUN_01b358dc @ 01b358dc size=112 calls_out=4 calls_in=4
// strings: 

int FUN_01b358dc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_01b323b8();
  if (((iVar1 == 0) || (iVar2 = FUN_01b32a2c(iVar1,param_1), iVar2 == 0)) ||
     (iVar2 = FUN_01b3566c(iVar1,param_2), iVar2 == 0)) {
    FUN_01b323f0(iVar1);
    iVar1 = 0;
  }
  return iVar1;
}

