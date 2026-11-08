// FUN_00c4703c @ 00c4703c size=164 calls_out=2 calls_in=0
// strings: 

void FUN_00c4703c(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_24 [2];
  int local_1c;
  
  while( true ) {
    FUN_00c3b744(local_24,param_1);
    if (local_24[0] == 0) break;
    iVar1 = local_24[0] + local_1c * 0x30;
    puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x24) + 0x10);
    for (iVar3 = *(int *)(iVar1 + 0x28); iVar3 != 0; iVar3 = iVar3 + -1) {
      if (puVar2[-4] != 0) {
        thunk_FUN_016d3fb4(puVar2[-3]);
      }
      if (puVar2[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar2);
      }
      puVar2 = puVar2 + 6;
    }
    if (*(int *)(iVar1 + 0x20) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar1 + 0x24));
    }
  }
  return;
}

