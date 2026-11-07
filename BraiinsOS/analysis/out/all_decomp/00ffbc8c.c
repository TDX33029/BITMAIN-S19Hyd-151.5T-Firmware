// FUN_00ffbc8c @ 00ffbc8c size=136 calls_out=3 calls_in=1
// strings: 

void FUN_00ffbc8c(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = *(undefined4 *)(param_1 + 0xc0);
  puVar4 = *(undefined4 **)(param_1 + 0xc4);
  pcVar2 = (code *)*puVar4;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(uVar3);
  }
  if (puVar4[1] != 0) {
    thunk_FUN_016d3fb4(uVar3);
  }
  iVar6 = *(int *)(param_1 + 0xd0);
  iVar5 = *(int *)(param_1 + 0xd4) + 1;
  iVar1 = iVar6;
  while (iVar5 = iVar5 + -1, iVar5 != 0) {
    FUN_00ffce4c(iVar1);
    iVar1 = iVar1 + 0x40;
  }
  if (*(int *)(param_1 + 0xcc) != 0) {
    thunk_FUN_016d3fb4(iVar6);
  }
  if (*(int *)(param_1 + 0xb0) == 2) {
    return;
  }
  FUN_00ff188c(param_1);
  return;
}

