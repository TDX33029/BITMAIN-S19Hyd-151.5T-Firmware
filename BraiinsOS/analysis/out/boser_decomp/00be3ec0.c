// FUN_00be3ec0 @ 00be3ec0 size=120 calls_out=3 calls_in=7
// strings: 

void FUN_00be3ec0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 != 0) && (iVar2 = iVar1 * 4 + 4, iVar1 + iVar2 != -5)) {
    thunk_FUN_01be4678(*(int *)(param_1 + 0x1c) - iVar2);
  }
  iVar2 = *(int *)(param_1 + 0x14);
  iVar4 = *(int *)(param_1 + 0x18);
  for (iVar1 = 0; iVar4 != iVar1; iVar1 = iVar1 + 1) {
    puVar3 = (undefined4 *)(iVar2 + iVar1 * 0x10);
    FUN_019bb7e0(*puVar3,puVar3[1]);
  }
  FUN_0132b958(*(undefined4 *)(param_1 + 0x10),iVar2,4,0x10);
  return;
}

