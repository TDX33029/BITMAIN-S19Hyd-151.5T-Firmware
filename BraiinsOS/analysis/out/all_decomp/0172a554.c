// FUN_0172a554 @ 0172a554 size=172 calls_out=7 calls_in=0
// strings: 

undefined4 FUN_0172a554(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_017184a8();
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    FUN_017185b4();
    iVar2 = FUN_017186b0(iVar1);
    if ((iVar2 == 0) || (iVar3 = FUN_0172a090(param_3,iVar2,param_2,iVar1), iVar3 == 0)) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = FUN_017155bc(iVar2,param_1);
    }
    FUN_01718904(iVar1);
    FUN_017184e8(iVar1);
  }
  return uVar4;
}

