// FUN_00919c60 @ 00919c60 size=160 calls_out=2 calls_in=0
// strings: 

void FUN_00919c60(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_f8 [72];
  undefined4 local_b0;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar1 = *(int *)(param_2 + 0x20);
  uVar5 = *(undefined4 *)(param_2 + 0x10);
  iVar3 = *(int *)(param_2 + 0x14);
  iVar4 = *(int *)(param_2 + 0x18);
  if ((iVar1 != 0) && (iVar2 = iVar1 * 4 + 4, iVar1 + iVar2 != -5)) {
    thunk_FUN_016d3fb4(*(int *)(param_2 + 0x1c) - iVar2);
  }
  local_30 = *(undefined4 *)(param_2 + 0x30);
  local_2c = *(undefined4 *)(param_2 + 0x34);
  local_28 = *(undefined4 *)(param_2 + 0x38);
  local_34 = iVar3 + iVar4 * 0xc0;
  local_b0 = 4;
  local_40 = iVar3;
  local_3c = iVar3;
  local_38 = uVar5;
  FUN_00925034(param_1,auStack_f8);
  return;
}

