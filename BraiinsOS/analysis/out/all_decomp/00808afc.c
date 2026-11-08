// FUN_00808afc @ 00808afc size=108 calls_out=2 calls_in=1
// strings: Failed to receive send ack from worker (channel closed?) | Failed to receive send ack from worker (channel closed?)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00808afc(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined **local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  char *local_24;
  undefined4 local_20;
  
  local_40 = &PTR_FUN_0185f80c;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  uVar6 = param_1[5];
  puVar1 = (undefined4 *)((uint)&local_40 | 4);
  *puVar1 = *param_1;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  puVar1[4] = uVar5;
  puVar1[5] = uVar6;
  local_20 = 0x38;
  local_24 = "Failed to receive send ack from worker (channel closed?)";
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x24);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x24);
  }
  *puVar1 = local_40;
  puVar1[1] = uStack_3c;
  puVar1[2] = uStack_38;
  puVar1[3] = uStack_34;
  puVar1[4] = uStack_30;
  puVar1[5] = uStack_2c;
  puVar1[6] = uStack_28;
  puVar1[7] = local_24;
  puVar1[8] = local_20;
  return;
}

