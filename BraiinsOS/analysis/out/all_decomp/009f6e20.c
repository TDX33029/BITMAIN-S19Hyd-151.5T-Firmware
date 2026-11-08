// FUN_009f6e20 @ 009f6e20 size=92 calls_out=0 calls_in=0
// strings: 

void FUN_009f6e20(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    puVar2 = *(undefined4 **)(param_1 + 4);
    puVar1 = puVar2 + *(int *)(param_1 + 8) * 2;
    do {
      (**(code **)(puVar2[1] + 0x24))
                (*puVar2,param_2,param_3,*(code **)(puVar2[1] + 0x24),0,0,param_1 + 0xc);
      puVar2 = puVar2 + 2;
    } while (puVar2 != puVar1);
  }
  return;
}

