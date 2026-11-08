// FUN_00687bd0 @ 00687bd0 size=84 calls_out=0 calls_in=1
// strings: 

undefined1 FUN_00687bd0(int param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 8) != 2) {
    iVar1 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar1 = iVar1 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x34))(iVar1,param_1);
  }
  return DAT_018dd947;
}

