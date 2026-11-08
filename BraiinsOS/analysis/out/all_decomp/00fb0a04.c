// FUN_00fb0a04 @ 00fb0a04 size=872 calls_out=5 calls_in=2
// strings: assertion failed: buf.len() >= maxlen

void FUN_00fb0a04(uint param_1,undefined4 param_2,int param_3,uint param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 in_r12;
  short unaff_lr;
  int iVar10;
  int iVar11;
  undefined1 auStack_488 [1024];
  undefined1 *local_88;
  char *local_84;
  undefined4 local_80;
  undefined2 local_7c;
  uint local_78;
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
  
  local_44 = 3;
  local_48 = param_1 & 0x7fffff;
  if (local_48 == 0) {
    local_44 = 2;
  }
  if ((param_1 & 0x7f800000) != 0) {
    local_44 = 4;
  }
  uVar6 = param_4 & 0xffff;
  if ((param_1 & 0x7f800000) == 0x7f800000) {
    local_44 = (uint)(local_48 == 0);
  }
  local_48 = local_48 | 0x800000;
  if ((param_1 & 0x7fffffff) >> 0x17 == 0) {
    local_48 = (param_1 & 0x7fffff) << 1;
  }
  uVar9 = local_48 & 1;
  uVar3 = 2;
  uVar1 = (ushort)((param_1 & 0x7fffffff) >> 0x10);
  local_30 = unaff_lr;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(local_44) {
  case 1:
    uVar3 = 3;
    break;
  case 2:
    uVar3 = 4;
    break;
  case 3:
    local_30 = (uVar1 >> 7) - 0x96;
LAB_00fb0ae8:
    uVar3 = uVar9 ^ 1;
    local_44 = 0;
    in_r12 = 1;
    break;
  case 4:
    if (local_48 != 0x800000) {
      local_48 = local_48 << 1;
      local_30 = (uVar1 >> 7) - 0x97;
      goto LAB_00fb0ae8;
    }
    local_30 = (uVar1 >> 7) - 0x98;
    local_44 = 0;
    in_r12 = 2;
    local_48 = 0x2000000;
    uVar3 = 1;
  }
  local_2e = (undefined1)uVar3;
  local_40 = 1;
  uStack_3c = 0;
  uStack_38 = in_r12;
  local_34 = local_44;
  if (1 < uVar3) {
    if (uVar3 == 2) {
      local_80 = 3;
      local_88 = (undefined1 *)CONCAT22(local_88._2_2_,2);
      local_84 = "NaN";
      puVar4 = (undefined1 *)0x1;
      uVar9 = 0;
      local_50 = CONCAT44(1,&local_88);
    }
    else {
      uVar9 = param_1 >> 0x1f;
      uVar2 = 1;
      puVar5 = &DAT_0040f592;
      puVar4 = (undefined1 *)0x1;
      if ((int)param_1 < 0) {
        puVar5 = &DAT_00410f51;
        puVar4 = &DAT_00410f51;
      }
      if (param_3 != 0) {
        uVar9 = 1;
        puVar4 = puVar5;
      }
      if (uVar3 == 4) {
        uVar2 = 2;
        if ((param_4 & 0xffff) == 0) {
          uVar2 = 1;
          local_80 = 1;
          local_84 = 
          "07ordinalweekdayweek numberperiodsubsecondoffset houroffset minuteoffset secondignoreunix_timestampampmAMPMfor the given yearJoinHandle polled after completionassertion failed: snapshot.is_complete()queue not emptyassertion failed: occupied.get_mut().actions.insert(id, action).is_none()assertion failed: edge.height == self.height - 1assertion failed: edge.height == self.node.height - 1Failed to register signal handler\x01explicit panicfailed to create UnixStreaminconsistent state in unpark`EnterGuard` values dropped out of order. Guards returned by `tokio::runtime::Handle::enter()` must be dropped in the reverse order as they were acquired.assertion failed: c.runtime.get().is_entered()assertion failed: actual_state == EMPTY || actual_state == NOTIFIEDassertion failed: sharded_size.is_power_of_two()assertion failed: self.is_empty()signal driver goneassertion failed: inner.last_write_err.is_none()background task failedfilled must not become larger than initializedfilled overflowchannel emptyinner has gone awaya formatting trait implementation returned an error when the underlying stream did notreached max `enter` depthCannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks.RUST_MIN_STACKthreads should not terminate unexpectedlyTOKIO_WORKER_THREADSRNG seed generator is internally corruptA Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO.A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers.there is no signal driver running, must be called from the context of Tokio runtime"
          ;
        }
        else {
          local_84 = "0.";
          local_7c = 0;
          local_80 = 2;
          local_78 = uVar6;
        }
      }
      else {
        local_80 = 3;
        local_84 = &DAT_00414412;
      }
      local_88 = (undefined1 *)CONCAT22(local_88._2_2_,2);
      local_50 = CONCAT44(uVar2,&local_88);
    }
    goto LAB_00fb0d48;
  }
  iVar7 = 5;
  if (local_30 < 0) {
    iVar7 = -0xc;
  }
  uVar3 = iVar7 * local_30;
  puVar5 = &DAT_0040f592;
  puVar4 = (undefined1 *)0x1;
  if ((int)param_1 < 0) {
    puVar5 = &DAT_00410f51;
    puVar4 = &DAT_00410f51;
  }
  uVar9 = param_1 >> 0x1f;
  if (param_3 != 0) {
    uVar9 = 1;
    puVar4 = puVar5;
  }
  if (0x3ebf < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: buf.len() >= maxlen",0x25,&DAT_01880f3c);
  }
  iVar8 = (uVar3 >> 4) + 0x15;
  puVar5 = auStack_488;
  iVar7 = -0x8000;
  if ((uint)(int)(short)param_4 < 0x80000000) {
    iVar7 = -param_4;
  }
  iVar10 = iVar8;
  iVar11 = iVar7;
  FUN_00faf678(&local_88);
  iVar7 = (int)(short)iVar7;
  if (local_88 == (undefined1 *)0x0) {
    FUN_00fafb90(&local_58,&local_48,auStack_488,iVar8,iVar7,puVar5,iVar10,iVar11);
    iVar8 = (int)(short)local_50;
    if (iVar7 < iVar8) goto LAB_00fb0c08;
  }
  else {
    local_58 = local_88;
    local_54 = local_84;
    local_50._0_4_ = local_80;
    uVar2 = (undefined4)local_50;
    local_50._0_2_ = (short)local_80;
    iVar8 = (int)(short)local_50;
    local_50._0_4_ = uVar2;
    if (iVar7 < iVar8) {
LAB_00fb0c08:
      local_50 = FUN_00faf500(local_58,local_54,iVar8,uVar6,&local_88);
      goto LAB_00fb0d48;
    }
  }
  local_80 = 2;
  local_88 = (undefined1 *)CONCAT22(local_88._2_2_,2);
  if ((param_4 & 0xffff) == 0) {
    local_80 = 1;
    local_84 = 
    "07ordinalweekdayweek numberperiodsubsecondoffset houroffset minuteoffset secondignoreunix_timestampampmAMPMfor the given yearJoinHandle polled after completionassertion failed: snapshot.is_complete()queue not emptyassertion failed: occupied.get_mut().actions.insert(id, action).is_none()assertion failed: edge.height == self.height - 1assertion failed: edge.height == self.node.height - 1Failed to register signal handler\x01explicit panicfailed to create UnixStreaminconsistent state in unpark`EnterGuard` values dropped out of order. Guards returned by `tokio::runtime::Handle::enter()` must be dropped in the reverse order as they were acquired.assertion failed: c.runtime.get().is_entered()assertion failed: actual_state == EMPTY || actual_state == NOTIFIEDassertion failed: sharded_size.is_power_of_two()assertion failed: self.is_empty()signal driver goneassertion failed: inner.last_write_err.is_none()background task failedfilled must not become larger than initializedfilled overflowchannel emptyinner has gone awaya formatting trait implementation returned an error when the underlying stream did notreached max `enter` depthCannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks.RUST_MIN_STACKthreads should not terminate unexpectedlyTOKIO_WORKER_THREADSRNG seed generator is internally corruptA Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO.A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers.there is no signal driver running, must be called from the context of Tokio runtime"
    ;
  }
  else {
    local_84 = "0.";
    local_7c = 0;
    local_78 = uVar6;
  }
  local_50 = CONCAT44(local_80,&local_88);
LAB_00fb0d48:
  local_58 = puVar4;
  local_54 = (char *)uVar9;
  FUN_00fac518(param_2,&local_58);
  return;
}

