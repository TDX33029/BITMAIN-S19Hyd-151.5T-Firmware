// FUN_0150e454 @ 0150e454 size=176 calls_out=4 calls_in=2
// strings: 

void FUN_0150e454(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_28;
  undefined1 *local_24;
  int local_20;
  
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(uint *)(param_2 + 8);
  local_20 = 0;
  local_24 = &DAT_00000001;
  local_28 = 0;
  FUN_006029c0(&local_28);
  local_20 = 1;
  *local_24 = (char)uVar2;
  if (local_28 - 1U < uVar2) {
    FUN_0154e5f8(&local_28,1,uVar2,1,1);
  }
  iVar1 = local_20;
  FUN_016dd1aa(local_24 + local_20,uVar3,uVar2);
  local_20 = iVar1 + uVar2;
  FUN_0150be90(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),&local_28);
  *param_1 = local_28;
  param_1[1] = (int)local_24;
  param_1[2] = local_20;
  return;
}

