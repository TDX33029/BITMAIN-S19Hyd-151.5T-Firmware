// FUN_0195b868 @ 0195b868 size=236 calls_out=5 calls_in=5
// strings: Schedule and Task must be both set!event open/utils-rs/scheduler/src/scheduler.rs:354

void FUN_0195b868(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_1b8 [46];
  int local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined1 auStack_f0 [184];
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_01bed4e2(local_1b8,param_2,0xb8);
  iVar3 = *(int *)(param_2 + 0xb8);
  uStack_fc = *(undefined4 *)(param_2 + 0xbc);
  uStack_f8 = *(undefined4 *)(param_2 + 0xc0);
  local_100 = iVar3;
  if (local_1b8[0] != -0x7fffffff && iVar3 != -0x7fffffff) {
    FUN_01bed4e2(auStack_f0,param_2,0xb8);
    local_38 = *(int *)(param_2 + 0xb8);
    uStack_34 = *(undefined4 *)(param_2 + 0xbc);
    uStack_30 = *(undefined4 *)(param_2 + 0xc0);
    local_2c = *(undefined4 *)(param_2 + 0xc4);
    uStack_28 = *(undefined4 *)(param_2 + 200);
    uStack_24 = *(undefined4 *)(param_2 + 0xcc);
    uVar1 = *(undefined1 *)(param_2 + 0xd0);
    FUN_01bed4e2(param_1,auStack_f0,0xd0);
    *(undefined1 *)(param_1 + 0x34) = uVar1;
    return;
  }
  if (-0x7fffffff < local_1b8[0]) {
    FUN_01a2affc(local_1b8);
  }
  if (iVar3 != -0x7fffffff) {
    FUN_0195b7b0(&local_100);
  }
  uVar2 = FUN_00667978("Schedule and Task must be both set!event open/utils-rs/scheduler/src/scheduler.rs:354"
                       ,0x23);
  uVar4 = *(undefined4 *)(param_2 + 0xc4);
  uVar5 = *(undefined4 *)(param_2 + 200);
  param_1[0x31] = 0x80000000;
  *param_1 = uVar2;
  FUN_019bb7e0(uVar4,uVar5);
  return;
}

