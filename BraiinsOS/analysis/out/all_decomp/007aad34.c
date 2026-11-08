// FUN_007aad34 @ 007aad34 size=160 calls_out=1 calls_in=3
// strings: 

undefined1 FUN_007aad34(int param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x248) != 2) {
    iVar1 = *(int *)(param_1 + 0x24c);
    if ((*(uint *)(param_1 + 0x248) & 1) != 0) {
      iVar1 = iVar1 + (*(int *)(*(int *)(param_1 + 0x250) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x250) + 0x30))(iVar1,param_1 + 0x240);
  }
  FUN_007aadf0(param_1);
  if (*(uint *)(param_1 + 0x248) != 2) {
    iVar1 = *(int *)(param_1 + 0x24c);
    if ((*(uint *)(param_1 + 0x248) & 1) != 0) {
      iVar1 = iVar1 + (*(int *)(*(int *)(param_1 + 0x250) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x250) + 0x34))(iVar1,param_1 + 0x240);
  }
  return DAT_018dd947;
}

