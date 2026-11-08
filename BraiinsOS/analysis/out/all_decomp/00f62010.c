// FUN_00f62010 @ 00f62010 size=96 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_00f62010(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = param_4 - (uint)(param_3 == 0);
  uVar1 = 0;
  if ((-(uVar2 >> 1) < (uint)(((uint)((byte)uVar2 & 1) << 0x1f | param_3 - 1U >> 1) < 0xb7)) &&
     ((*(int *)(param_1 + 0x68) != 1 || (uVar1 = 1, *(int *)(param_1 + 0x6c) == param_3)))) {
    *(undefined4 *)(param_1 + 0x68) = 1;
    *(int *)(param_1 + 0x6c) = param_3;
    return 8;
  }
  return uVar1;
}

