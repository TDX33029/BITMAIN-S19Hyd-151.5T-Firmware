// FUN_0121a03c @ 0121a03c size=108 calls_out=5 calls_in=1
// strings: 

void FUN_0121a03c(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    puVar3 = *(undefined4 **)(param_1 + 0x14);
    pcVar1 = (code *)*puVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(iVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_01be4678(iVar2);
    }
  }
  if (*(int *)(param_1 + 0x4c) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  }
  FUN_0121a1c4(param_1 + 0x28);
  FUN_0121a214(param_1 + 0x34);
  FUN_0121a258(param_1 + 0x40);
  return;
}

