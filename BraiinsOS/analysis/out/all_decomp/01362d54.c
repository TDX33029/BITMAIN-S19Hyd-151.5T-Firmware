// FUN_01362d54 @ 01362d54 size=104 calls_out=2 calls_in=1
// strings: 

void FUN_01362d54(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  while (iVar4 != param_2) {
    iVar3 = param_1 + iVar4 * 0x40;
    iVar4 = iVar4 + 1;
    puVar2 = *(undefined4 **)(iVar3 + 0xc);
    for (iVar1 = *(int *)(iVar3 + 0x10); iVar1 != 0; iVar1 = iVar1 + -1) {
      FUN_01362e74(*puVar2);
      puVar2 = puVar2 + 1;
    }
    if (*(int *)(iVar3 + 8) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0xc));
    }
  }
  return;
}

