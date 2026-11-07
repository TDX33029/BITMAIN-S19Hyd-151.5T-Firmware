// FUN_01164ca0 @ 01164ca0 size=100 calls_out=2 calls_in=0
// strings: 

int FUN_01164ca0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  uVar2 = *(int *)(param_1 + 0xc) - (int)puVar1;
  uVar5 = param_2;
  if (uVar2 >> 2 <= param_2) {
    uVar5 = uVar2 >> 2;
  }
  *(undefined4 **)(param_1 + 4) = puVar1 + uVar5;
  if (uVar5 != 0) {
    iVar3 = 1 - uVar5;
    do {
      uVar4 = *puVar1;
      FUN_01164df4(uVar4);
      thunk_FUN_016d3fb4(uVar4);
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar3 != 1);
  }
  return param_2 - uVar5;
}

