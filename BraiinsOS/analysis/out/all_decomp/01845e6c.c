// FUN_01845e6c @ 01845e6c size=52 calls_out=0 calls_in=1
// strings: 

longlong FUN_01845e6c(uint param_1,uint param_2,uint param_3)

{
  if ((param_3 & 0x20) != 0) {
    return (ulonglong)(param_1 << (param_3 & 0x1f)) << 0x20;
  }
  if (param_3 != 0) {
    param_2 = param_2 << (param_3 & 0x1f) | param_1 >> (-param_3 & 0x1f);
    param_1 = param_1 << (param_3 & 0x1f);
  }
  return CONCAT44(param_2,param_1);
}

