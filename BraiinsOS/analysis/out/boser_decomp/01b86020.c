// FUN_01b86020 @ 01b86020 size=80 calls_out=0 calls_in=2
// strings: 

ulonglong FUN_01b86020(int param_1,uint *param_2)

{
  uint uVar1;
  
  if (param_1 != 0) {
    return CONCAT44(param_2,param_1);
  }
  if (2 < param_2[6] - 3) {
    return 2;
  }
  if (*param_2 < 0x12) {
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  return (ulonglong)uVar1;
}

