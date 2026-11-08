// FUN_00dcefa0 @ 00dcefa0 size=96 calls_out=2 calls_in=2
// strings: 

void FUN_00dcefa0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 != 0) {
    FUN_019bb7e0(param_1[1],param_1[2]);
    return;
  }
  iVar3 = param_1[2];
  iVar4 = param_1[3];
  for (iVar2 = 0; iVar4 != iVar2; iVar2 = iVar2 + 1) {
    puVar1 = (undefined4 *)(iVar3 + iVar2 * 0x10);
    FUN_019bb7e0(*puVar1,puVar1[1]);
  }
  FUN_0132b958(param_1[1],iVar3,4,0x10);
  return;
}

