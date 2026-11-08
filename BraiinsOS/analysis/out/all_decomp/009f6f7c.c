// FUN_009f6f7c @ 009f6f7c size=84 calls_out=0 calls_in=1
// strings: 

void FUN_009f6f7c(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    puVar2 = puVar1 + *(int *)(param_1 + 8) * 2;
    do {
      (**(code **)(puVar1[1] + 0x30))(*puVar1,param_2,0,0,param_1 + 0xc);
      puVar1 = puVar1 + 2;
    } while (puVar1 != puVar2);
  }
  return;
}

