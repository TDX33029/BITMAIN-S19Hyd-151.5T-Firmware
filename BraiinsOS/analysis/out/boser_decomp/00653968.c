// FUN_00653968 @ 00653968 size=76 calls_out=1 calls_in=2
// strings: 

void FUN_00653968(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x14);
  if (iVar3 == *(int *)(param_2 + 0xc)) {
    FUN_00664178();
  }
  *(int *)(param_2 + 0x14) = iVar3 + 1;
  iVar1 = *(int *)(param_2 + 0x10);
  *param_1 = 3;
  param_1[1] = iVar3;
  puVar2 = (undefined1 *)(iVar1 + iVar3 * 9);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  *(undefined4 *)(puVar2 + 1) = 0;
  return;
}

