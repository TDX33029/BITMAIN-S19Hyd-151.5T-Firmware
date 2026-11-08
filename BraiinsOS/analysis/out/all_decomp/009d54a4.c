// FUN_009d54a4 @ 009d54a4 size=200 calls_out=1 calls_in=0
// strings: 

void FUN_009d54a4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 8;
    if (*(int *)(param_1 + 8) == 0x3b9aca01) goto LAB_009d5508;
    if (*(int *)(param_1 + 0x38) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3c));
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4c));
    }
    iVar2 = *(int *)(param_1 + 0x20);
    iVar1 = 0x24;
    iVar3 = 8;
  }
  else {
    iVar3 = 0x68;
    if (*(int *)(param_1 + 0x68) == 0x3b9aca01) goto LAB_009d5508;
    if (*(int *)(param_1 + 0x98) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x9c));
    }
    if (*(int *)(param_1 + 0xa8) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xac));
    }
    iVar2 = *(int *)(param_1 + 0x80);
    iVar1 = 0x84;
    iVar3 = 0x68;
  }
  if (iVar2 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + iVar1));
    *(undefined4 *)(param_1 + iVar3) = 0x3b9aca01;
    return;
  }
LAB_009d5508:
  *(undefined4 *)(param_1 + iVar3) = 0x3b9aca01;
  return;
}

