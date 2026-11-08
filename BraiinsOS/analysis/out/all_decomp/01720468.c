// FUN_01720468 @ 01720468 size=248 calls_out=7 calls_in=1
// strings: 

bool FUN_01720468(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = FUN_0171cfb0();
  if (iVar1 == 0) {
    return false;
  }
  if (param_3 == 0) {
    param_3 = FUN_017184a8();
    iVar1 = param_3;
    if (param_3 == 0) {
      return false;
    }
  }
  else {
    iVar1 = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  FUN_01714350(param_1);
  iVar2 = FUN_0172038c(param_1,iVar2 << 6);
  if ((iVar2 == 0) || (iVar2 = FUN_0171ead4(0,param_1,param_1,param_1 + 0x14,param_3), iVar2 == 0))
  {
    bVar3 = false;
  }
  else {
    iVar2 = FUN_01714d30(param_1,*(undefined4 *)(param_1 + 0x18));
    bVar3 = iVar2 != 0;
  }
  FUN_017184e8(iVar1);
  return bVar3;
}

