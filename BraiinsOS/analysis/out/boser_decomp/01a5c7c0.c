// FUN_01a5c7c0 @ 01a5c7c0 size=124 calls_out=1 calls_in=8
// strings: 

void FUN_01a5c7c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = *(int *)(param_2 + 0x20);
  uVar6 = *(undefined4 *)(param_2 + 0x10);
  iVar4 = *(int *)(param_2 + 0x14);
  iVar3 = *(int *)(param_2 + 0x18);
  if ((iVar1 != 0) && (iVar2 = iVar1 * 4 + 4, iVar1 + iVar2 != -5)) {
    thunk_FUN_01be4678(*(int *)(param_2 + 0x1c) - iVar2);
  }
  *(int *)(param_1 + 0xb8) = iVar4;
  *(int *)(param_1 + 0xbc) = iVar4;
  *(int *)(param_1 + 0xc4) = iVar4 + iVar3 * 0xc0;
  *(undefined4 *)(param_1 + 0xc0) = uVar6;
  uVar6 = *(undefined4 *)(param_2 + 0x34);
  uVar5 = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0xcc) = uVar6;
  *(undefined4 *)(param_1 + 0xd0) = uVar5;
  *(undefined4 *)(param_1 + 0x48) = 4;
  return;
}

