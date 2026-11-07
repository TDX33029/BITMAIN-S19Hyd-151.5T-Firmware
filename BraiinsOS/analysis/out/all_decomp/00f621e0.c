// FUN_00f621e0 @ 00f621e0 size=88 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_00f621e0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((-(param_4 - (uint)(param_3 == 0)) < (uint)(param_3 - 1U < 0x1f)) &&
     ((*(int *)(param_1 + 0x70) != 1 || (uVar1 = 1, *(int *)(param_1 + 0x74) == param_3)))) {
    *(undefined4 *)(param_1 + 0x70) = 1;
    *(int *)(param_1 + 0x74) = param_3;
    return 8;
  }
  return uVar1;
}

