// FUN_00a210b0 @ 00a210b0 size=68 calls_out=2 calls_in=5
// strings: 

void FUN_00a210b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x24);
  puVar1 = (undefined4 *)(iVar2 + 0x20);
  for (iVar3 = *(int *)(param_1 + 0x28); iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_019bb7e0(*puVar1,puVar1[1]);
    puVar1 = puVar1 + 0xc;
  }
  FUN_0132b958(*(undefined4 *)(param_1 + 0x20),iVar2,8,0x30);
  return;
}

