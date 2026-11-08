// FUN_01440040 @ 01440040 size=120 calls_out=3 calls_in=0
// strings: 

void FUN_01440040(int param_1)

{
  uint uVar1;
  int iVar2;
  uint local_c0 [42];
  
  do {
    FUN_01405abc(local_c0,param_1 + 0x70,param_1 + 0x20);
    uVar1 = local_c0[0];
    FUN_0143eb3c(local_c0);
  } while ((uVar1 & 6) != 4);
  iVar2 = *(int *)(param_1 + 0x74);
  do {
    iVar2 = *(int *)(iVar2 + 0xa84);
    thunk_FUN_016d3fb4();
  } while (iVar2 != 0);
  if (*(int *)(param_1 + 0x40) != 0) {
    (**(code **)(*(int *)(param_1 + 0x40) + 0xc))(*(undefined4 *)(param_1 + 0x44));
  }
  return;
}

