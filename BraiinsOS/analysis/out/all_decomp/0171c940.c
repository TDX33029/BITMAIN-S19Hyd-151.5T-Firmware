// FUN_0171c940 @ 0171c940 size=144 calls_out=1 calls_in=1
// strings: 

ulonglong FUN_0171c940(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == param_2) {
    return CONCAT44(param_2,param_1);
  }
  iVar1 = FUN_017147ac(param_1,param_2,0,0);
  if ((iVar1 == 0) || (iVar1 = FUN_017147ac(param_1 + 0x14,param_2 + 0x14), iVar1 == 0)) {
    return 0;
  }
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  return (ulonglong)param_1;
}

