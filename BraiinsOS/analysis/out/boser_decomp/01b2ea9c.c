// FUN_01b2ea9c @ 01b2ea9c size=100 calls_out=2 calls_in=4
// strings: 

int FUN_01b2ea9c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_01b2e970(param_2);
  if ((iVar1 == 0) || (iVar2 = FUN_01b2b248(iVar1,param_1), iVar2 == 0)) {
    iVar1 = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 4) = param_1;
    *(undefined4 *)(iVar1 + 0xc) = 0;
  }
  return iVar1;
}

