// FUN_01286470 @ 01286470 size=72 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_01286470(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((uint)-param_4 < (uint)(param_3 < 0x3d)) &&
     ((*(int *)(param_1 + 0x90) != 1 || (uVar1 = 1, *(uint *)(param_1 + 0x94) == param_3)))) {
    uVar1 = 8;
    *(undefined4 *)(param_1 + 0x90) = 1;
    *(uint *)(param_1 + 0x94) = param_3;
  }
  return uVar1;
}

