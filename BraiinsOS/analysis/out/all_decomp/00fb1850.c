// FUN_00fb1850 @ 00fb1850 size=748 calls_out=4 calls_in=12
// strings: 

void FUN_00fb1850(uint param_1,uint param_2,undefined4 param_3,int param_4,short param_5)

{
  ushort uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
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
  uint local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint local_34;
  short local_30;
  undefined1 local_2e;
  
  if ((param_2 & 0x7fffffff) >> 0x14 == 0) {
    local_48 = param_1 << 1;
    local_44 = (param_2 & 0xfffff) << 1 | param_1 >> 0x1f;
    if (param_1 == 0 && (param_2 & 0xfffff) == 0) goto LAB_00fb18dc;
LAB_00fb1890:
    iVar6 = 4;
    if ((param_2 & 0x7fffffff) < 0x100000) {
      iVar6 = 3;
    }
    local_34 = 0x7fefffff;
    if (0x7fefffff < (param_2 & 0x7fffffff)) {
      uVar5 = 2;
      goto LAB_00fb1978;
    }
  }
  else {
    local_44 = param_2 & 0xfffff | 0x100000;
    local_48 = param_1;
    if (param_1 != 0 || (param_2 & 0xfffff) != 0) goto LAB_00fb1890;
LAB_00fb18dc:
    iVar6 = 4;
    local_34 = param_2 & 0x7fffffff ^ 0x7ff00000;
    if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
      iVar6 = 2;
    }
    if (param_1 == 0 && local_34 == 0) {
      uVar5 = 3;
      goto LAB_00fb1978;
    }
  }
  if (iVar6 == 2) {
    uVar5 = 4;
  }
  else {
    uVar5 = local_48 & 1;
    uVar1 = (ushort)((param_2 & 0x7fffffff) >> 0x10);
    if (iVar6 == 3) {
      in_r12 = (uVar1 >> 4) - 0x433;
    }
    else {
      if (local_48 == 0 && local_44 == 0x100000) {
        in_r12 = (uVar1 >> 4) - 0x435;
        local_48 = 0;
        unaff_lr = 2;
        local_44 = 0x400000;
        uVar5 = 1;
        local_34 = 0;
        goto LAB_00fb1978;
      }
      local_44 = local_44 << 1 | local_48 >> 0x1f;
      in_r12 = (uVar1 >> 4) - 0x434;
      local_48 = local_48 << 1;
    }
    uVar5 = uVar5 ^ 1;
    local_34 = 0;
    unaff_lr = 1;
  }
LAB_00fb1978:
  uStack_3c = 0;
  local_40 = 1;
  local_2e = (undefined1)uVar5;
  uStack_38 = unaff_lr;
  local_30 = in_r12;
  if (uVar5 < 2) {
    FUN_00facfa0(&local_88,&local_48,auStack_99);
    puVar3 = &DAT_0040f592;
    puVar4 = (undefined1 *)0x1;
    if ((int)param_2 < 0) {
      puVar3 = &DAT_00410f51;
      puVar4 = &DAT_00410f51;
    }
    if (param_4 == 0) {
      puVar3 = puVar4;
    }
    param_2 = param_2 >> 0x1f;
    if (param_4 != 0) {
      param_2 = 1;
    }
    if (local_88 == (undefined1 *)0x0) {
      FUN_00fadeb4(&local_58,&local_48,auStack_99);
    }
    else {
      local_58 = local_88;
      local_54 = local_84;
      local_50._0_4_ = local_80;
    }
    local_50 = FUN_00faf500(local_58,local_54,(uint)local_50 & 0xffff,param_5,&local_88);
  }
  else if (uVar5 == 2) {
    local_80 = 3;
    local_88 = (undefined1 *)CONCAT22(local_88._2_2_,2);
    local_84 = "NaN";
    puVar3 = (undefined1 *)0x1;
    param_2 = 0;
    local_50 = CONCAT44(1,&local_88);
  }
  else {
    uVar2 = 1;
    puVar4 = &DAT_0040f592;
    puVar3 = (undefined1 *)0x1;
    if ((int)param_2 < 0) {
      puVar4 = &DAT_00410f51;
      puVar3 = &DAT_00410f51;
    }
    param_2 = param_2 >> 0x1f;
    if (param_4 != 0) {
      param_2 = 1;
      puVar3 = puVar4;
    }
    if (uVar5 == 4) {
      uVar2 = 2;
      if (param_5 == 0) {
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
  local_58 = puVar3;
  local_54 = (char *)param_2;
  FUN_00fac518(param_3,&local_58);
  return;
}

