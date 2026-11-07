// FUN_00fb1470 @ 00fb1470 size=944 calls_out=5 calls_in=9
// strings: assertion failed: buf.len() >= maxlen

void FUN_00fb1470(uint param_1,uint param_2,undefined4 param_3,int param_4,uint param_5)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 unaff_r8;
  uint uVar9;
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
  uint uStack_38;
  undefined4 local_34;
  short local_30;
  undefined1 local_2e;
  
  uStack_38 = (param_2 & 0x7fffffff) >> 0x14;
  if (uStack_38 == 0) {
    local_48 = param_1 << 1;
    local_44 = (param_2 & 0xfffff) << 1 | param_1 >> 0x1f;
  }
  else {
    local_44 = param_2 & 0xfffff | 0x100000;
    local_48 = param_1;
  }
  uVar3 = param_5 & 0xffff;
  local_30 = unaff_lr;
  if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
    iVar4 = 4;
    if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
      iVar4 = 2;
    }
    if (param_1 != 0 || (param_2 & 0x7fffffff) != 0x7ff00000) goto LAB_00fb1528;
    uVar5 = 3;
  }
  else {
    iVar4 = 4;
    if ((param_2 & 0x7fffffff) < 0x100000) {
      iVar4 = 3;
    }
    if ((param_2 & 0x7fffffff) < 0x7ff00000) {
LAB_00fb1528:
      if (iVar4 == 2) {
        uVar5 = 4;
      }
      else {
        uVar5 = local_48 & 1;
        uVar1 = (ushort)((param_2 & 0x7fffffff) >> 0x10);
        if (iVar4 == 3) {
          local_30 = (uVar1 >> 4) - 0x433;
        }
        else {
          if (local_48 == 0 && local_44 == 0x100000) {
            local_30 = (uVar1 >> 4) - 0x435;
            local_48 = 0;
            uStack_38 = 2;
            local_44 = 0x400000;
            uVar5 = 1;
            unaff_r8 = 0;
            goto LAB_00fb159c;
          }
          local_44 = local_44 << 1 | local_48 >> 0x1f;
          local_30 = (uVar1 >> 4) - 0x434;
          local_48 = local_48 << 1;
        }
        uVar5 = uVar5 ^ 1;
        unaff_r8 = 0;
        uStack_38 = 1;
      }
    }
    else {
      uVar5 = 2;
    }
  }
LAB_00fb159c:
  local_40 = 1;
  uStack_3c = 0;
  local_2e = (undefined1)uVar5;
  local_34 = unaff_r8;
  if (1 < uVar5) {
    if (uVar5 == 2) {
      local_80 = 3;
      local_88 = (undefined1 *)CONCAT22(local_88._2_2_,2);
      local_84 = "NaN";
      puVar6 = (undefined1 *)0x1;
      uVar9 = 0;
      local_50 = CONCAT44(1,&local_88);
    }
    else {
      uVar9 = param_2 >> 0x1f;
      uVar2 = 1;
      puVar7 = &DAT_0040f592;
      puVar6 = (undefined1 *)0x1;
      if ((int)param_2 < 0) {
        puVar7 = &DAT_00410f51;
        puVar6 = &DAT_00410f51;
      }
      if (param_4 != 0) {
        uVar9 = 1;
        puVar6 = puVar7;
      }
      if (uVar5 == 4) {
        uVar2 = 2;
        if ((param_5 & 0xffff) == 0) {
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
          local_78 = uVar3;
        }
      }
      else {
        local_80 = 3;
        local_84 = &DAT_00414412;
      }
      local_88 = (undefined1 *)CONCAT22(local_88._2_2_,2);
      local_50 = CONCAT44(uVar2,&local_88);
    }
    goto LAB_00fb17e8;
  }
  iVar4 = 5;
  if (local_30 < 0) {
    iVar4 = -0xc;
  }
  uVar5 = iVar4 * local_30;
  puVar7 = &DAT_0040f592;
  puVar6 = (undefined1 *)0x1;
  if ((int)param_2 < 0) {
    puVar7 = &DAT_00410f51;
    puVar6 = &DAT_00410f51;
  }
  uVar9 = param_2 >> 0x1f;
  if (param_4 != 0) {
    uVar9 = 1;
    puVar6 = puVar7;
  }
  if (0x3ebf < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: buf.len() >= maxlen",0x25,&DAT_01880f3c);
  }
  iVar8 = (uVar5 >> 4) + 0x15;
  puVar7 = auStack_488;
  iVar4 = -0x8000;
  if ((uint)(int)(short)param_5 < 0x80000000) {
    iVar4 = -param_5;
  }
  iVar10 = iVar8;
  iVar11 = iVar4;
  FUN_00faf678(&local_88);
  iVar4 = (int)(short)iVar4;
  if (local_88 == (undefined1 *)0x0) {
    FUN_00fafb90(&local_58,&local_48,auStack_488,iVar8,iVar4,puVar7,iVar10,iVar11);
    iVar8 = (int)(short)local_50;
    if (iVar4 < iVar8) goto LAB_00fb16b0;
  }
  else {
    local_58 = local_88;
    local_54 = local_84;
    local_50._0_4_ = local_80;
    uVar2 = (undefined4)local_50;
    local_50._0_2_ = (short)local_80;
    iVar8 = (int)(short)local_50;
    local_50._0_4_ = uVar2;
    if (iVar4 < iVar8) {
LAB_00fb16b0:
      local_50 = FUN_00faf500(local_58,local_54,iVar8,uVar3,&local_88);
      goto LAB_00fb17e8;
    }
  }
  local_80 = 2;
  local_88 = (undefined1 *)CONCAT22(local_88._2_2_,2);
  if ((param_5 & 0xffff) == 0) {
    local_80 = 1;
    local_84 = 
    "07ordinalweekdayweek numberperiodsubsecondoffset houroffset minuteoffset secondignoreunix_timestampampmAMPMfor the given yearJoinHandle polled after completionassertion failed: snapshot.is_complete()queue not emptyassertion failed: occupied.get_mut().actions.insert(id, action).is_none()assertion failed: edge.height == self.height - 1assertion failed: edge.height == self.node.height - 1Failed to register signal handler\x01explicit panicfailed to create UnixStreaminconsistent state in unpark`EnterGuard` values dropped out of order. Guards returned by `tokio::runtime::Handle::enter()` must be dropped in the reverse order as they were acquired.assertion failed: c.runtime.get().is_entered()assertion failed: actual_state == EMPTY || actual_state == NOTIFIEDassertion failed: sharded_size.is_power_of_two()assertion failed: self.is_empty()signal driver goneassertion failed: inner.last_write_err.is_none()background task failedfilled must not become larger than initializedfilled overflowchannel emptyinner has gone awaya formatting trait implementation returned an error when the underlying stream did notreached max `enter` depthCannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks.RUST_MIN_STACKthreads should not terminate unexpectedlyTOKIO_WORKER_THREADSRNG seed generator is internally corruptA Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO.A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers.there is no signal driver running, must be called from the context of Tokio runtime"
    ;
  }
  else {
    local_84 = "0.";
    local_7c = 0;
    local_78 = uVar3;
  }
  local_50 = CONCAT44(local_80,&local_88);
LAB_00fb17e8:
  local_58 = puVar6;
  local_54 = (char *)uVar9;
  FUN_00fac518(param_3,&local_58);
  return;
}

