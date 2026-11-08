// FUN_011dfff8 @ 011dfff8 size=92 calls_out=3 calls_in=2
// strings: 

void FUN_011dfff8(int param_1)

{
  int iVar1;
  uint uVar2;
  byte local_40 [40];
  
  do {
    FUN_01195084(local_40,param_1 + 0x50,param_1);
    uVar2 = (uint)local_40[0];
    FUN_01195230(local_40);
  } while (1 < uVar2 - 5);
  iVar1 = *(int *)(param_1 + 0x54);
  do {
    iVar1 = *(int *)(iVar1 + 0x284);
    thunk_FUN_01be4678();
  } while (iVar1 != 0);
  return;
}

