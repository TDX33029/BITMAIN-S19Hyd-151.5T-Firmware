// FUN_007aa944 @ 007aa944 size=236 calls_out=1 calls_in=5
// strings: 

undefined1 FUN_007aa944(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(uint *)(param_1 + 8) != 2) {
    iVar1 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar1 = iVar1 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x30))(iVar1,param_1);
  }
  if (*(char *)(param_1 + 0xb8) == '\x03') {
    if (*(char *)(param_1 + 0xb4) != '\0') goto LAB_007aa9f0;
    if (*(int *)(param_1 + 0x98) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x94));
    }
    if (*(int *)(param_1 + 0x84) == 0) goto LAB_007aa9f0;
    puVar2 = (undefined4 *)(param_1 + 0x88);
  }
  else {
    if ((*(char *)(param_1 + 0xb8) != '\0') || (*(int *)(param_1 + 0x24) == 0)) goto LAB_007aa9f0;
    puVar2 = (undefined4 *)(param_1 + 0x20);
  }
  thunk_FUN_016d3fb4(*puVar2);
LAB_007aa9f0:
  if (*(uint *)(param_1 + 8) != 2) {
    iVar1 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar1 = iVar1 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x34))(iVar1,param_1);
  }
  return DAT_018dd947;
}

