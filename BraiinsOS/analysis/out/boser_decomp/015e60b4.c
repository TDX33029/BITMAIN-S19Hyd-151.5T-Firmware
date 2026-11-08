// FUN_015e60b4 @ 015e60b4 size=168 calls_out=0 calls_in=1
// strings: 

void FUN_015e60b4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x18);
    puVar3 = puVar2 + *(int *)(param_1 + 0x1c) * 4;
    do {
      iVar1 = (**(code **)(puVar2[1] + 0x14))(*puVar2);
      puVar2 = puVar2 + 4;
      *(undefined1 *)(iVar1 + 0x38) = 0;
    } while (puVar2 != puVar3);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x30);
    puVar3 = puVar2 + *(int *)(param_1 + 0x34) * 2;
    do {
      iVar1 = (**(code **)(puVar2[1] + 0x14))(*puVar2);
      puVar2 = puVar2 + 2;
      *(undefined1 *)(iVar1 + 0x38) = 0;
    } while (puVar2 != puVar3);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x24);
    puVar3 = puVar2 + *(int *)(param_1 + 0x28) * 2;
    do {
      iVar1 = (**(code **)(puVar2[1] + 0x14))(*puVar2);
      puVar2 = puVar2 + 2;
      *(undefined1 *)(iVar1 + 0x38) = 0;
    } while (puVar2 != puVar3);
  }
  return;
}

