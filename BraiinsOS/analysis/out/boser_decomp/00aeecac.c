// FUN_00aeecac @ 00aeecac size=92 calls_out=1 calls_in=2
// strings: 

void FUN_00aeecac(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_2 + 0x20);
  iVar3 = *(int *)(param_2 + 0x10);
  iVar4 = *(int *)(param_2 + 0x14);
  iVar5 = *(int *)(param_2 + 0x18);
  if ((iVar1 != 0) && (iVar2 = iVar1 * 4 + 4, iVar1 + iVar2 != -5)) {
    thunk_FUN_01be4678(*(int *)(param_2 + 0x1c) - iVar2);
  }
  *param_1 = iVar4;
  param_1[1] = iVar4;
  param_1[2] = iVar3;
  param_1[3] = iVar5 * 0xd8 + iVar4;
  return;
}

