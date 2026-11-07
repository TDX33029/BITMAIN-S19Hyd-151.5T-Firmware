// FUN_01902b0c @ 01902b0c size=84 calls_out=2 calls_in=1
// strings: 

void FUN_01902b0c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ushort local_1a;
  
  FUN_0190d1d8(*(undefined2 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 0xe),param_2);
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(uint *)(param_1 + 8);
  local_1a = (ushort)((uVar2 & 0xff) << 8) | (ushort)(uVar2 >> 8) & 0xff;
  FUN_01ac6cbc(param_2,&local_1a,2);
  FUN_01ac6cbc(param_2,uVar1,uVar2);
  return;
}

