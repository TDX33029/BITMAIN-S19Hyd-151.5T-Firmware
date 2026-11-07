// FUN_0172228c @ 0172228c size=188 calls_out=6 calls_in=1
// strings: 

bool FUN_0172228c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  FUN_017185b4(param_4);
  iVar1 = FUN_017186b0(param_4);
  if (((iVar1 == 0) || (iVar2 = FUN_017147ac(iVar1,param_3), iVar2 == 0)) ||
     (iVar2 = FUN_01717ee0(iVar1,2), iVar2 == 0)) {
    bVar3 = false;
  }
  else {
    iVar1 = FUN_01721bd8(param_1,param_2,iVar1,param_3,param_4,param_5);
    bVar3 = iVar1 != 0;
  }
  FUN_01718904(param_4);
  return bVar3;
}

