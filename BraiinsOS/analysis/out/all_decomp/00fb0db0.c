// FUN_00fb0db0 @ 00fb0db0 size=660 calls_out=4 calls_in=2
// strings: 

void FUN_00fb0db0(uint param_1,undefined4 param_2,int param_3,short param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_r9;
  short in_r12;
  undefined4 unaff_lr;
  undefined1 auStack_99 [17];
  undefined1 *local_88;
  char *local_84;
  uint local_80;
  undefined2 local_7c;
  undefined4 local_78;
  undefined1 *local_58;
  char *local_54;
  undefined8 local_50;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  short local_30;
  undefined1 local_2e;
  
  uVar3 = 3;
  local_48 = param_1 & 0x7fffff;
  if (local_48 == 0) {
    uVar3 = 2;
  }
  if ((param_1 & 0x7f800000) != 0) {
    uVar3 = 4;
  }
  if ((param_1 & 0x7f800000) == 0x7f800000) {
    uVar3 = local_48 == 0;
  }
  local_48 = local_48 | 0x800000;
  if ((param_1 & 0x7fffffff) >> 0x17 == 0) {
    local_48 = (param_1 & 0x7fffff) << 1;
  }
  uVar7 = local_48 & 1;
  uVar6 = 2;
  uVar1 = (ushort)((param_1 & 0x7fffffff) >> 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar3) {
  case 1:
    uVar6 = 3;
    break;
  case 2:
    uVar6 = 4;
    break;
  case 3:
    in_r12 = (uVar1 >> 7) - 0x96;
    goto LAB_00fb0e8c;
  case 4:
    if (local_48 == 0x800000) {
      in_r12 = (uVar1 >> 7) - 0x98;
      unaff_r9 = 0;
      unaff_lr = 2;
      local_48 = 0x2000000;
      uVar6 = 1;
      break;
    }
    local_48 = local_48 << 1;
    in_r12 = (uVar1 >> 7) - 0x97;
LAB_00fb0e8c:
    uVar6 = uVar7 ^ 1;
    unaff_r9 = 0;
    unaff_lr = 1;
  }
  uVar7 = 0;
  local_40 = 1;
  uStack_3c = 0;
  local_2e = (undefined1)uVar6;
  local_44 = unaff_r9;
  uStack_38 = unaff_lr;
  local_34 = unaff_r9;
  local_30 = in_r12;
  if (uVar6 < 2) {
    FUN_00facfa0(&local_88,&local_48,auStack_99);
    uVar7 = param_1 >> 0x1f;
    puVar5 = &DAT_0040f592;
    puVar4 = (undefined1 *)0x1;
    if ((int)param_1 < 0) {
      puVar5 = &DAT_00410f51;
      puVar4 = &DAT_00410f51;
    }
    if (param_3 != 0) {
      uVar7 = 1;
      puVar4 = puVar5;
    }
    if (local_88 == (undefined1 *)0x0) {
      FUN_00fadeb4(&local_58,&local_48,auStack_99);
    }
    else {
      local_58 = local_88;
      local_54 = local_84;
      local_50._0_4_ = local_80;
    }
    local_50 = FUN_00faf500(local_58,local_54,(uint)local_50 & 0xffff,param_4,&local_88);
  }
  else if (uVar6 == 2) {
    local_80 = 3;
    local_88 = (undefined1 *)CONCAT22(local_88._2_2_,2);
    local_84 = "NaN";
    puVar4 = (undefined1 *)0x1;
    local_50 = CONCAT44(1,&local_88);
  }
  else {
    uVar7 = param_1 >> 0x1f;
    uVar2 = 1;
    puVar5 = &DAT_0040f592;
    puVar4 = (undefined1 *)0x1;
    if ((int)param_1 < 0) {
      puVar5 = &DAT_00410f51;
      puVar4 = &DAT_00410f51;
    }
    if (param_3 != 0) {
      uVar7 = 1;
      puVar4 = puVar5;
    }
    if (uVar6 == 4) {
      uVar2 = 2;
      if (param_4 == 0) {
        uVar2 = 1;
        local_84 = 
        "07ordinalweekdayweek numberperiodsubsecondoffset houroffset minuteoffset secondignoreunix_timestampampmAMPMfor the given yearJoinHandle polled after completionassertion failed: snapshot.is_complete()queue not emptyassertion failed: occupied.get_mut().actions.insert(id, action).is_none()assertion failed: edge.height == self.height - 1assertion failed: edge.height == self.node.height - 1Failed to register signal handler\x01explicit panicfailed to create UnixStreaminconsistent state in unpark`EnterGuard` values dropped out of order. Guards returned by `tokio::runtime::Handle::enter()` must be dropped in the reverse order as they were acquired.assertion failed: c.runtime.get().is_entered()assertion failed: actual_state == EMPTY || actual_state == NOTIFIEDassertion failed: sharded_size.is_power_of_two()assertion failed: self.is_empty()signal driver goneassertion failed: inner.last_write_err.is_none()background task failedfilled must not become larger than initializedfilled overflowchannel emptyinner has gone awaya formatting trait implementation returned an error when the underlying stream did notreached max `enter` depthCannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks.RUST_MIN_STACKthreads should not terminate unexpectedlyTOKIO_WORKER_THREADSRNG seed generator is internally corruptA Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO.A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers.there is no signal driver running, must be called from the context of Tokio runtime"
        ;
      }
      else {
        local_78 = 1;
        local_84 = "0.";
        local_7c = 0;
      }
      local_80 = uVar2;
    }
    else {
      local_80 = 3;
      local_84 = &DAT_00414412;
    }
    local_88 = (undefined1 *)CONCAT22(local_88._2_2_,2);
    local_50 = CONCAT44(uVar2,&local_88);
  }
  local_58 = puVar4;
  local_54 = (char *)uVar7;
  FUN_00fac518(param_2,&local_58);
  return;
}

