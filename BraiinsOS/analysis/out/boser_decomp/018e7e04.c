// FUN_018e7e04 @ 018e7e04 size=120 calls_out=2 calls_in=0
// strings: 

void FUN_018e7e04(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint local_20;
  uint local_1c;
  
  FUN_0190cd24(*(undefined2 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 0xe),param_2);
  uVar1 = *(uint *)(param_1 + 0x10);
  local_20 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
             uVar1 >> 0x18;
  FUN_01ac6cbc(param_2,(uint)&local_20 | 1,3);
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar1 = *(uint *)(param_1 + 8);
  local_1c = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
             uVar1 >> 0x18;
  FUN_01ac6cbc(param_2,(uint)&local_1c | 1,3);
  FUN_01ac6cbc(param_2,uVar2,uVar1);
  return;
}

