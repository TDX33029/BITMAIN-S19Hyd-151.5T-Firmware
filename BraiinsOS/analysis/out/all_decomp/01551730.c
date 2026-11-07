// FUN_01551730 @ 01551730 size=1420 calls_out=22 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x01551b7c) */

void FUN_01551730(undefined4 *param_1,int *param_2,byte *param_3,int param_4)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  char *pcVar13;
  int iVar14;
  bool bVar15;
  byte *local_44;
  int local_40;
  int local_3c;
  int local_38;
  char local_34;
  int local_30;
  byte *local_2c;
  code *local_28;
  
  iVar3 = (*(code *)param_2[0x29])(param_3,param_4);
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 1) = 0x1a;
    iVar3 = param_2[1];
    *param_1 = &DAT_8000001c;
    FUN_01739ee4(iVar3);
    iVar3 = param_2[3];
    goto LAB_01551a1c;
  }
  iVar3 = param_2[1];
  if (param_4 == 0) {
    FUN_016dd1aa(1,param_3,0);
LAB_01551a00:
    FUN_01739ee4(iVar3);
LAB_01551a08:
    puVar10 = &DAT_8000001c;
    *(undefined1 *)(param_1 + 1) = 0x1a;
  }
  else {
    pcVar13 = *(char **)(&DAT_018b39dc + *param_2 * 4);
    iVar14 = *(int *)(&DAT_00564920 + (uint)*(byte *)param_2[0x28] * 4);
    pbVar4 = (byte *)thunk_FUN_016d4a50(param_4);
    if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_4);
    }
    FUN_016dd1aa(pbVar4,param_3,param_4);
    if ((iVar14 - 0x2cbU < 2) || (iVar14 == 0x19f)) {
      FUN_016e1d94(&local_44,pbVar4,param_4);
      local_2c = local_44;
      local_28 = (code *)local_40;
      iVar5 = FUN_016ea010(&local_2c);
      if (iVar5 == 0) {
LAB_01551908:
        FUN_00604c44(&local_44,pbVar4,param_4,iVar14);
        if (local_44 != (byte *)0x0) goto LAB_015519f8;
        uVar6 = *pbVar4 - 2 & 0xff;
        iVar5 = local_40;
        if (uVar6 < 6) {
          cVar2 = (&DAT_00422680)[uVar6];
          if ((&DAT_00422680)[uVar6] == '\x06') goto LAB_01551a00;
        }
        else {
          cVar2 = '\x05';
        }
      }
      else {
        iVar8 = FUN_0173a71c();
        if (iVar8 != 0x198) {
          FUN_01739ee4(iVar5);
          goto LAB_01551908;
        }
        param_3 = (byte *)FUN_0173acc0(iVar5);
        if (((param_3 == (byte *)0x0) || (iVar8 = FUN_0172ca8c(), iVar8 == 0)) ||
           (iVar8 = FUN_0172c684(), iVar8 != iVar14)) {
LAB_015518e4:
          FUN_01739ee4(iVar5);
          goto LAB_015519f8;
        }
        iVar8 = FUN_017374c4(param_3);
        cVar2 = '\0';
        if (iVar8 != 1) goto LAB_015518e4;
      }
      local_34 = cVar2;
      local_3c = iVar14;
      local_38 = iVar5;
      if (iVar14 < 0x2cc) {
        if (iVar14 == 0x19f) {
          pcVar7 = "";
        }
        else {
          if (iVar14 != 0x2cb) goto LAB_01551c60;
          pcVar7 = 
          "\x01explicit panicfailed to create UnixStreaminconsistent state in unpark`EnterGuard` values dropped out of order. Guards returned by `tokio::runtime::Handle::enter()` must be dropped in the reverse order as they were acquired.assertion failed: c.runtime.get().is_entered()assertion failed: actual_state == EMPTY || actual_state == NOTIFIEDassertion failed: sharded_size.is_power_of_two()assertion failed: self.is_empty()signal driver goneassertion failed: inner.last_write_err.is_none()background task failedfilled must not become larger than initializedfilled overflowchannel emptyinner has gone awaya formatting trait implementation returned an error when the underlying stream did notreached max `enter` depthCannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks.RUST_MIN_STACKthreads should not terminate unexpectedlyTOKIO_WORKER_THREADSRNG seed generator is internally corruptA Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO.A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers.there is no signal driver running, must be called from the context of Tokio runtime"
          ;
        }
      }
      else if (iVar14 == 0x2cc) {
        pcVar7 = &DAT_00414957;
      }
      else {
        if (iVar14 != 0x3b4) {
LAB_01551c60:
          local_28 = FUN_00fac2b8;
          local_2c = (byte *)&local_30;
          local_44 = pbVar4;
          local_40 = param_4;
          local_30 = iVar14;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0057549a,&local_2c,&DAT_01857850);
        }
        pcVar7 = 
        "\x03\x04\x05RootCertStorerootsRsaSignerschemeFailResolveClientCertEcdsaSignerEd25519SignerRsaSigningKeyalgorithmEcdsaSigningKeyEd25519SigningKeyED25519 signing failedUnexpectedErrorCertifiedKeyChangeCipherSpecPayloadClientSessionMemoryCache\x06"
        ;
      }
    }
    else {
      if (iVar14 != 0x3b4) {
        thunk_FUN_016d3fb4(pbVar4);
        goto LAB_01551a00;
      }
      FUN_016e1d94(&local_44,pbVar4,param_4);
      local_2c = local_44;
      local_28 = (code *)local_40;
      iVar14 = FUN_016ea010(&local_2c);
      if (iVar14 == 0) {
LAB_015519a0:
        if (param_4 == 0x20) {
          iVar14 = FUN_0173af98(0x3b4,0,pbVar4,0x20);
          bVar15 = iVar14 == 0;
          if (bVar15) {
            iVar14 = 0xf;
          }
          cVar2 = '\x04';
          if (!bVar15) goto LAB_015519d4;
        }
LAB_015519f8:
        thunk_FUN_016d3fb4(pbVar4);
        goto LAB_01551a00;
      }
      iVar5 = FUN_0173a71c();
      if (iVar5 != 0x3b4) {
        FUN_01739ee4(iVar14);
        goto LAB_015519a0;
      }
      cVar2 = '\0';
LAB_015519d4:
      local_34 = cVar2;
      pcVar7 = 
      "\x03\x04\x05RootCertStorerootsRsaSignerschemeFailResolveClientCertEcdsaSignerEd25519SignerRsaSigningKeyalgorithmEcdsaSigningKeyEd25519SigningKeyED25519 signing failedUnexpectedErrorCertifiedKeyChangeCipherSpecPayloadClientSessionMemoryCache\x06"
      ;
      local_3c = 0x3b4;
      local_38 = iVar14;
    }
    iVar14 = local_38;
    pbVar11 = &DAT_80000000;
    pbVar12 = param_3;
    iVar5 = iVar3;
    local_44 = pbVar4;
    local_40 = param_4;
    if (*pcVar7 == *pcVar13) {
      iVar8 = FUN_0173b2c8(iVar3,0);
      if (iVar8 != 0) {
        iVar5 = FUN_0173b954();
        if (iVar5 == 1) {
          local_2c = (byte *)0x0;
          iVar5 = FUN_0173b9f0(iVar8,iVar14);
          if (iVar5 == 1) {
            iVar5 = FUN_0173bc0c(iVar8,0,&local_2c);
            pbVar12 = local_2c;
            if (iVar5 == 1) {
              iVar5 = 0;
              if ((int)local_2c < 0) {
LAB_01551ac8:
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(iVar5,pbVar12);
              }
              iVar5 = 1;
              param_3 = pbVar12;
              if (local_2c == (byte *)0x0) {
                iVar9 = FUN_0173bc0c(iVar8,1,&local_2c);
                if (iVar9 == 1) {
                  FUN_01739f80(iVar8);
                  goto LAB_01551c28;
                }
              }
              else {
                iVar9 = FUN_016d38c8(local_2c,1);
                if (iVar9 == 0) goto LAB_01551ac8;
                iVar5 = FUN_0173bc0c(iVar8,iVar9,&local_2c);
                pbVar1 = local_2c;
                if (iVar5 == 1) {
                  if (local_2c < pbVar12) {
                    if (local_2c == (byte *)0x0) {
                      thunk_FUN_016d3fb4(iVar9);
                      FUN_01739f80(iVar8);
                      iVar5 = 1;
                      pbVar12 = pbVar1;
                      goto LAB_01551c28;
                    }
                    iVar9 = thunk_FUN_016d4ea4(iVar9,local_2c);
                    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00600af4(1,pbVar1);
                    }
                    FUN_01739f80(iVar8);
                    pbVar11 = pbVar1;
                  }
                  else {
                    FUN_01739f80(iVar8);
                    iVar5 = iVar9;
                    pbVar11 = pbVar12;
                    if (pbVar12 == (byte *)0x0) {
LAB_01551c28:
                      FUN_016dd1aa(1,iVar5,pbVar12);
                      pbVar11 = (byte *)0x0;
                      iVar5 = 1;
                      goto LAB_01551b94;
                    }
                  }
                  iVar5 = thunk_FUN_016d4a50(pbVar11);
                  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600af4(1,pbVar11);
                  }
                  FUN_016dd1aa(iVar5,iVar9,pbVar11);
                  if (pbVar11 != (byte *)0x0) {
                    thunk_FUN_016d3fb4(iVar9);
                  }
                  pbVar12 = pbVar11;
                  goto LAB_01551b94;
                }
                thunk_FUN_016d3fb4(iVar9);
              }
            }
          }
        }
        pbVar12 = param_3;
        FUN_01739f80(iVar8);
        iVar5 = iVar8;
      }
    }
LAB_01551b94:
    FUN_01739ee4(iVar14);
    thunk_FUN_016d3fb4(pbVar4);
    FUN_01739ee4(iVar3);
    if (pbVar11 == &DAT_80000000) goto LAB_01551a08;
    puVar10 = (undefined1 *)0x80000029;
    param_1[1] = pbVar11;
    param_1[2] = iVar5;
    param_1[3] = pbVar12;
    param_1[4] = 0;
  }
  iVar3 = param_2[3];
  *param_1 = puVar10;
LAB_01551a1c:
  FUN_01739ee4(iVar3);
  thunk_FUN_016d3fb4(param_2);
  return;
}

