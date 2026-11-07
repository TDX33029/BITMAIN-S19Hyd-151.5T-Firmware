// FUN_007ab648 @ 007ab648 size=184 calls_out=1 calls_in=5
// strings: 

undefined1 FUN_007ab648(int param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 8) != 2) {
    iVar1 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar1 = iVar1 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x30))(iVar1,param_1);
  }
  if (*(char *)(param_1 + 0x78) == '\x03') {
    iVar1 = 0x28;
  }
  else {
    iVar1 = 8;
    if (*(char *)(param_1 + 0x78) != '\0') goto LAB_007ab6c0;
  }
  FUN_006472c4(param_1 + 0x20 + iVar1);
LAB_007ab6c0:
  if (*(uint *)(param_1 + 8) != 2) {
    iVar1 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar1 = iVar1 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x34))(iVar1,param_1);
  }
  return DAT_018dd947;
}

