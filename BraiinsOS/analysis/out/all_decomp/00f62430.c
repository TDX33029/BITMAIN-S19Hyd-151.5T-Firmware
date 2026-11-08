// FUN_00f62430 @ 00f62430 size=84 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_00f62430(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_4 - (uint)(param_3 < 0x80000000) == -1) &&
     ((*(int *)(param_1 + 0x28) != 1 || (uVar1 = 1, *(uint *)(param_1 + 0x2c) == param_3)))) {
    *(undefined4 *)(param_1 + 0x28) = 1;
    *(uint *)(param_1 + 0x2c) = param_3;
    return 8;
  }
  return uVar1;
}

