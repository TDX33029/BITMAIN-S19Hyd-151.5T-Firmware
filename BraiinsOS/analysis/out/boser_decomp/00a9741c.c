// FUN_00a9741c @ 00a9741c size=60 calls_out=1 calls_in=1
// strings: 

void FUN_00a9741c(int param_1)

{
  undefined4 *puVar1;
  
  if (*(uint *)(param_1 + 8) == 3) {
    return;
  }
  if (*(uint *)(param_1 + 8) < 2) {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    puVar1 = (undefined4 *)(param_1 + 0x18);
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0xc);
  }
  FUN_019bb7e0(*puVar1,puVar1[1]);
  return;
}

