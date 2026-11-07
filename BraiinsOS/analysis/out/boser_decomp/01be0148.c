// FUN_01be0148 @ 01be0148 size=76 calls_out=0 calls_in=1
// strings: 

uint * FUN_01be0148(uint *param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (-1 < (int)uVar1) {
    *param_2 = 1;
    *param_3 = ((param_1[1] >> 0x18) + 1) * 4;
    return param_1 + 1;
  }
  if ((uVar1 >> 0x18 & 0xd) == 1) {
    *param_3 = (((uVar1 & 0xffffff) >> 0x10) + 1) * 4;
    *param_2 = 2;
    return param_1;
  }
  if ((uVar1 >> 0x18 & 0xf) == 0) {
    *param_3 = 4;
    *param_2 = 1;
    return param_1;
  }
  return (uint *)0x0;
}

