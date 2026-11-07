// FUN_00943240 @ 00943240 size=96 calls_out=3 calls_in=2
// strings: 

void FUN_00943240(int param_1)

{
  int iVar1;
  undefined1 auStack_a0 [8];
  int local_98;
  
  while (FUN_00929a04(auStack_a0,param_1 + 0x50,param_1), 1 < local_98 - 3U) {
    FUN_00dfba60(auStack_a0);
  }
  iVar1 = *(int *)(param_1 + 0x54);
  do {
    iVar1 = *(int *)(iVar1 + 0x904);
    thunk_FUN_01be4678();
  } while (iVar1 != 0);
  return;
}

