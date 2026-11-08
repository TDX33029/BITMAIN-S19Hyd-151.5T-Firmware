// FUN_007aaae4 @ 007aaae4 size=252 calls_out=1 calls_in=5
// strings: 

undefined1 FUN_007aaae4(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (*(uint *)(param_1 + 8) != 2) {
    iVar1 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar1 = iVar1 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x30))(iVar1,param_1);
  }
  if (*(char *)(param_1 + 0x80) == '\x03') {
    piVar3 = (int *)(param_1 + 0x50);
    iVar1 = *piVar3;
joined_r0x007aabc0:
    if (iVar1 != 0) {
      thunk_FUN_016d3fb4(piVar3[1]);
    }
    if ((piVar3[3] & 0x7fffffffU) != 0) {
      thunk_FUN_016d3fb4(piVar3[4]);
      uVar2 = *(uint *)(param_1 + 8);
      goto joined_r0x007aabd8;
    }
  }
  else if (*(char *)(param_1 + 0x80) == '\0') {
    piVar3 = (int *)(param_1 + 0x28);
    iVar1 = *piVar3;
    goto joined_r0x007aabc0;
  }
  uVar2 = *(uint *)(param_1 + 8);
joined_r0x007aabd8:
  if (uVar2 != 2) {
    iVar1 = *(int *)(param_1 + 0xc);
    if ((uVar2 & 1) != 0) {
      iVar1 = iVar1 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x34))(iVar1,param_1);
  }
  return DAT_018dd947;
}

