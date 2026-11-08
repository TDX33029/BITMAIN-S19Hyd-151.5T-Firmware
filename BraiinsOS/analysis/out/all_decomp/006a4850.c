// FUN_006a4850 @ 006a4850 size=236 calls_out=4 calls_in=0
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_006a4850(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined8 local_38;
  undefined4 local_30;
  
  FUN_0165a798(&local_38);
  uVar2 = local_38._4_4_ + (0xfffffffd < (uint)local_38);
  if ((int)((local_38._4_4_ ^ uVar2) & ~local_38._4_4_) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
  }
  FUN_010e08d0(&local_38,local_38._4_4_,(uint)local_38 + 2,uVar2,local_30);
  uVar7 = FUN_0164ec90(&DAT_0185a6cc);
  iVar1 = 0x180;
  if ((uVar7 & 1) != 0) {
    iVar1 = 0xb8;
  }
  if (*(undefined1 **)((int)(uVar7 >> 0x20) + iVar1 + 0x90) == &DAT_3b9aca00) {
    local_38 = uVar7;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                 ,0x73,&DAT_0185a6cc);
  }
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  param_1[0x14] = *param_2;
  param_1[0x15] = uVar3;
  param_1[0x16] = uVar4;
  param_1[0x17] = uVar5;
  param_1[0x18] = uVar6;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(ulonglong *)(param_1 + 0xc) = uVar7;
  param_1[0xe] = (uint)local_38;
  param_1[0xf] = local_38._4_4_;
  param_1[0x10] = local_30;
  return;
}

