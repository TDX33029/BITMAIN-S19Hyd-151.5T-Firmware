// FUN_01656eb8 @ 01656eb8 size=428 calls_out=3 calls_in=55
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers. | A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_01656eb8(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
                 undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint local_40;
  uint uStack_3c;
  int local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  FUN_0165a798(&local_40);
  uVar6 = local_40 + param_3;
  uVar1 = uStack_3c + param_4 + (uint)CARRY4(local_40,param_3);
  if ((int)param_4 < 0 == (int)((uStack_3c ^ uVar1) & ~(uStack_3c ^ param_4)) < 0) {
    puVar3 = (undefined1 *)(local_38 + param_5);
    if (puVar3 < &DAT_3b9aca00) {
LAB_01656fec:
      local_30 = FUN_0164ec90(param_6);
      iVar4 = 0x180;
      if ((local_30 & 1) != 0) {
        iVar4 = 0xb8;
      }
      if (*(undefined1 **)((int)(local_30 >> 0x20) + iVar4 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                     ,0x73,param_6);
      }
      param_1[0xf] = uVar1;
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 0x12) = 0;
      *(ulonglong *)(param_1 + 0xc) = local_30;
      param_1[0xe] = uVar6;
      param_1[0x10] = puVar3;
      return;
    }
    bVar7 = 0xfffffffe < uVar6;
    uVar6 = uVar6 + 1;
    uVar5 = uVar1 + bVar7;
    if (-1 < (int)((uVar1 ^ uVar5) & ~uVar1)) {
      puVar3 = puVar3 + -1000000000;
      uVar1 = uVar5;
      if (puVar3 != &DAT_3b9aca00) goto LAB_01656fec;
    }
  }
  FUN_0165a798(&local_30);
  iVar4 = (uint)local_30 + 0x38640900;
  uVar1 = local_30._4_4_ + (0xc79bf6ff < (uint)local_30);
  if ((int)((local_30._4_4_ ^ uVar1) & ~local_30._4_4_) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
  }
  local_30 = FUN_0164ec90(param_6);
  iVar2 = 0x180;
  if ((local_30 & 1) != 0) {
    iVar2 = 0xb8;
  }
  if (*(undefined1 **)((int)(local_30 >> 0x20) + iVar2 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                 ,0x73,param_6);
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(ulonglong *)(param_1 + 0xc) = local_30;
  param_1[0xe] = iVar4;
  param_1[0xf] = uVar1;
  param_1[0x10] = local_28;
  return;
}

