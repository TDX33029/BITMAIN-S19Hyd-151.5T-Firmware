// FUN_0172c500 @ 0172c500 size=224 calls_out=4 calls_in=2
// strings: 

int FUN_0172c500(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x1e0) == 0) && (*(int *)(param_1 + 0x1c0) != 0)) {
      return param_1;
    }
    iVar1 = FUN_0177b624(param_1,0x1e4);
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = iVar1;
      FUN_0171c848(iVar1 + 0x104);
      FUN_0171c848(iVar1 + 0xd4);
      iVar2 = FUN_0171c940(iVar1 + 0x104,param_1 + 0x104);
      if ((iVar2 != 0) && (iVar2 = FUN_0171c940(iVar1 + 0xd4,param_1 + 0xd4), iVar2 != 0)) {
        return iVar1;
      }
      FUN_0172c494(iVar1);
    }
  }
  return 0;
}

