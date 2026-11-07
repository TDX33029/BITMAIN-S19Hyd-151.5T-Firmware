// FUN_01938c94 @ 01938c94 size=164 calls_out=1 calls_in=2
// strings: 

void FUN_01938c94(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_0193a93c(&local_40,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  FUN_0193a93c(&local_30,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
  uVar3 = local_28;
  uVar2 = local_2c;
  uVar1 = local_30;
  if (*(int *)(param_2 + 0x18) == -0x7fffffff) {
    local_30 = 0x80000001;
  }
  else {
    FUN_0193a93c(&local_30,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
  }
  *param_1 = local_40;
  param_1[1] = uStack_3c;
  param_1[2] = uStack_38;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = local_30;
  param_1[7] = local_2c;
  param_1[8] = local_28;
  return;
}

