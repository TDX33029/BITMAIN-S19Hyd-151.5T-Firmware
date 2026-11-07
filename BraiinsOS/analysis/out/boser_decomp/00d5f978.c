// FUN_00d5f978 @ 00d5f978 size=28 calls_out=1 calls_in=2
// strings: 

void FUN_00d5f978(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  FUN_00d5f9a8(param_1 + 0x140);
  if (*(int *)(param_1 + 0x90) == 2 && *(int *)(param_1 + 0x94) == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0xc4);
  puVar1 = (undefined4 *)(iVar2 + 0x20);
  for (iVar3 = *(int *)(param_1 + 200); iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_019bb7e0(*puVar1,puVar1[1]);
    puVar1 = puVar1 + 0xc;
  }
  FUN_0132b958(*(undefined4 *)(param_1 + 0xc0),iVar2,8,0x30);
  return;
}

