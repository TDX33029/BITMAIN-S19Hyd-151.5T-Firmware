// FUN_01845a94 @ 01845a94 size=52 calls_out=0 calls_in=1
// strings: 

ulonglong FUN_01845a94(uint param_1,uint param_2,uint param_3)

{
  if ((param_3 & 0x20) != 0) {
    return (ulonglong)(param_2 >> (param_3 & 0x1f));
  }
  if (param_3 != 0) {
    param_1 = param_2 << (-param_3 & 0x1f) | param_1 >> (param_3 & 0x1f);
    param_2 = param_2 >> (param_3 & 0x1f);
  }
  return CONCAT44(param_2,param_1);
}

