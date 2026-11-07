// FUN_00f62190 @ 00f62190 size=80 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_00f62190(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((uint)-param_4 < (uint)(param_3 < 0x36)) &&
     ((*(int *)(param_1 + 0x50) != 1 || (uVar1 = 1, *(uint *)(param_1 + 0x54) == param_3)))) {
    *(undefined4 *)(param_1 + 0x50) = 1;
    *(uint *)(param_1 + 0x54) = param_3;
    return 8;
  }
  return uVar1;
}

