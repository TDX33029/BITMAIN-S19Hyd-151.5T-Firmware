// FUN_00d463dc @ 00d463dc size=120 calls_out=4 calls_in=4
// strings: 

void FUN_00d463dc(int param_1)

{
  undefined4 uVar1;
  
  FUN_019c5098(param_1 + 0x100);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd0));
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc));
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0xe8));
  uVar1 = *(undefined4 *)(param_1 + 0xf4);
  FUN_019c7208(uVar1,*(undefined4 *)(param_1 + 0xf8));
  FUN_0134aee0(*(undefined4 *)(param_1 + 0xf0),uVar1,8,0xe0);
  return;
}

