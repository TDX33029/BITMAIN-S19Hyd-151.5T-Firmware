// FUN_006c42f4 @ 006c42f4 size=456 calls_out=5 calls_in=1
// strings: 

void FUN_006c42f4(int *param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  undefined8 local_b0;
  int local_a8;
  undefined1 auStack_a4 [128];
  
  if (param_3 == 0) {
    local_b0._0_4_ = FUN_006c8e48();
    sVar1 = *(short *)(param_2 + 0x29a);
    *(undefined2 *)((int)local_b0 + 0x29a) = 0;
    *(undefined4 *)((int)local_b0 + 0x210) = 0;
    local_b0._4_4_ = 0;
    if (sVar1 != 0) {
      FUN_006666fc(auStack_a4,*(undefined4 *)(param_2 + 0x218),*(undefined4 *)(param_2 + 0x21c));
      iVar2 = 7;
      if (*(int *)(param_2 + 0x10) < 0) {
        iVar2 = *(int *)(param_2 + 0x10);
      }
                    /* WARNING: Could not recover jumptable at 0x006c4644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_006c4648 + *(int *)(&DAT_006c4648 + iVar2 * 4)))();
      return;
    }
    *param_1 = (int)local_b0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_006c42f4(&local_b0,*(undefined4 *)(param_2 + 0x2a0));
    if ((int)local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d27490);
    }
    local_b0 = FUN_006b2358((int)local_b0,local_b0._4_4_);
    if (*(short *)(param_2 + 0x29a) != 0) {
      FUN_006666fc(auStack_a4,*(undefined4 *)(param_2 + 0x218),*(undefined4 *)(param_2 + 0x21c));
      iVar2 = 7;
      if (*(int *)(param_2 + 0x10) < 0) {
        iVar2 = *(int *)(param_2 + 0x10);
      }
                    /* WARNING: Could not recover jumptable at 0x006c43e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_006c43e4 + *(int *)(&DAT_006c43e4 + iVar2 * 4)))();
      return;
    }
    *(undefined8 *)param_1 = local_b0;
    param_1[2] = local_a8;
  }
  return;
}

