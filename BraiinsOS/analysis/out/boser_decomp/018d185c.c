// FUN_018d185c @ 018d185c size=84 calls_out=2 calls_in=0
// strings: 

void FUN_018d185c(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined2 local_1a;
  
  FUN_018d8b2c(*(undefined2 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 0xe),param_2);
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(uint *)(param_1 + 8);
  local_1a = (ushort)((uVar2 & 0xff) << 8) | (ushort)(uVar2 >> 8) & 0xff;
  FUN_01ac6d2c(param_2,&local_1a,(int)register0x00000054 + -0x18);
  FUN_01ac6d2c(param_2,iVar1,iVar1 + uVar2);
  return;
}

