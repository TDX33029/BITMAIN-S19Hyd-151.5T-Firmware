// FUN_016b2a3c @ 016b2a3c size=28 calls_out=1 calls_in=1
// strings: 

void FUN_016b2a3c(int param_1)

{
  undefined4 *puVar1;
  undefined4 unaff_r4;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_016b2a58(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar4 = *(int *)(param_1 + 0x20);
  for (iVar2 = 0; iVar4 != iVar2; iVar2 = iVar2 + 1) {
    puVar1 = (undefined4 *)(iVar3 + iVar2 * 0x10);
    FUN_0134aee0(*puVar1,puVar1[1],4,8,unaff_r4);
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x18),iVar3,4,0x10);
  return;
}

