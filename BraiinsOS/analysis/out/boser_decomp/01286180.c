// FUN_01286180 @ 01286180 size=80 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_01286180(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((-(param_4 - (uint)(param_3 == 0)) < (uint)(param_3 - 1U < 0xc)) &&
     ((*(int *)(param_1 + 0x48) != 1 || (uVar1 = 1, *(int *)(param_1 + 0x4c) == param_3)))) {
    uVar1 = 8;
    *(undefined4 *)(param_1 + 0x48) = 1;
    *(int *)(param_1 + 0x4c) = param_3;
  }
  return uVar1;
}

