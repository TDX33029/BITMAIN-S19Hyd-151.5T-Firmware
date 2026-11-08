// FUN_0172c494 @ 0172c494 size=108 calls_out=2 calls_in=4
// strings: 

undefined4 FUN_0172c494(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x1e0);
  if ((iVar2 == 0) && (iVar2 = 0, *(int *)(param_1 + 0x1c0) != 0)) {
    return 0;
  }
  FUN_0171c884(param_1 + 0xd4,param_2,param_3,iVar2);
  FUN_0171c884(param_1 + 0x104);
  uVar1 = FUN_0177aafc(param_1);
  return uVar1;
}

