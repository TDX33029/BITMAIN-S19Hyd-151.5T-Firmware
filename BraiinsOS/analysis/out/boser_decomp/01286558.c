// FUN_01286558 @ 01286558 size=76 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_01286558(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_4 - (uint)(param_3 < 0x80000000) == -1) &&
     ((*(int *)(param_1 + 0x10) != 1 || (uVar1 = 1, *(uint *)(param_1 + 0x14) == param_3)))) {
    uVar1 = 8;
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(uint *)(param_1 + 0x14) = param_3;
  }
  return uVar1;
}

