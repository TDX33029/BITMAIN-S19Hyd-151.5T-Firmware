// FUN_0171c9d0 @ 0171c9d0 size=152 calls_out=5 calls_in=5
// strings: 

undefined4 FUN_0171c9d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_017185b4(param_4);
  iVar1 = FUN_017186b0(param_4);
  if (iVar1 != 0) {
    iVar2 = FUN_017147ac(iVar1,param_2);
    if (iVar2 != 0) {
      uVar3 = FUN_0171ad5c(param_1,iVar1,param_3);
      goto LAB_0171ca40;
    }
  }
  uVar3 = 0;
LAB_0171ca40:
  FUN_01718904(param_4);
  return uVar3;
}

