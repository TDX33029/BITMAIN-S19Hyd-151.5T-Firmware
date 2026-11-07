// FUN_01446eec @ 01446eec size=88 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_01446eec(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (0xffff < param_2) {
    uVar1 = FUN_01446f44(param_1,(param_2 >> 10) - 0x2840);
    if ((uVar1 | 2) != 3) {
      return 0;
    }
    param_2 = param_2 & 0x3ff | 0xffffdc00;
  }
  uVar2 = FUN_01446f44(param_1,param_2);
  return uVar2;
}

