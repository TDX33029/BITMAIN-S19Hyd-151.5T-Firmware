// FUN_007ab4c8 @ 007ab4c8 size=204 calls_out=1 calls_in=4
// strings: 

undefined1 FUN_007ab4c8(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if (*(uint *)(param_1 + 8) != 2) {
    iVar2 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar2 = iVar2 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x30))(iVar2,param_1);
  }
  cVar1 = *(char *)(param_1 + 0xb0);
  bVar3 = cVar1 == '\x03';
  if (bVar3) {
    cVar1 = *(char *)(param_1 + 0xac);
  }
  if (bVar3 && cVar1 == '\0') {
    if (*(int *)(param_1 + 0x90) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8c));
    }
    if (*(int *)(param_1 + 0x7c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x80));
    }
  }
  if (*(uint *)(param_1 + 8) != 2) {
    iVar2 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar2 = iVar2 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x34))(iVar2,param_1);
  }
  return DAT_018dd947;
}

