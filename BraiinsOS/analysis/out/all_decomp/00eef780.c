// FUN_00eef780 @ 00eef780 size=1344 calls_out=17 calls_in=1
// strings: period_start | period_end | all_drain_time_ratio | devfee_drain_time_ratio | devfee_pool_activations | devfee_uses_farm_proxy

void FUN_00eef780(int *param_1,undefined4 *param_2)

{
  int **ppiVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_48;
  undefined1 *local_44;
  int local_40;
  int *local_3c;
  undefined4 local_38;
  int **local_34;
  uint local_30;
  int **local_2c;
  
  local_44 = (undefined1 *)thunk_FUN_016d4a50(0x80);
  if (local_44 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x80);
  }
  local_3c = &local_48;
  *local_44 = 0x7b;
  local_40 = 1;
  local_34 = &local_3c;
  local_48 = 0x80;
  local_38 = CONCAT22(local_38._2_2_,0x100);
  iVar2 = FUN_00e63424(&local_38,param_2 + 0x1c);
  ppiVar1 = local_34;
  if (iVar2 == 0) {
    if ((char)local_38 == '\x01') {
      local_30 = 10;
      iVar2 = FUN_0157c50c(&local_30,0,0);
    }
    else {
      if (local_38._1_1_ != '\x01') {
        piVar5 = *local_34;
        iVar2 = piVar5[2];
        if (*piVar5 == iVar2) {
          FUN_00edff4c(piVar5,iVar2,1,1,1);
          iVar2 = piVar5[2];
        }
        *(undefined1 *)(piVar5[1] + iVar2) = 0x2c;
        piVar5[2] = iVar2 + 1;
      }
      local_38._0_2_ = CONCAT11(2,(char)local_38);
      FUN_00e5d350(&local_30,*ppiVar1,&DAT_00569478,4);
      if ((char)local_30 == '\x04') {
        piVar5 = *ppiVar1;
        iVar2 = piVar5[2];
        if (*piVar5 == iVar2) {
          FUN_00edff4c(piVar5,iVar2,1,1,1);
          iVar2 = piVar5[2];
        }
        *(undefined1 *)(piVar5[1] + iVar2) = 0x3a;
        piVar5[2] = iVar2 + 1;
        piVar5 = *ppiVar1;
        iVar2 = piVar5[2];
        if (*piVar5 == iVar2) {
          FUN_00edff4c(piVar5,iVar2,1,1,1);
          iVar2 = piVar5[2];
        }
        piVar5[2] = iVar2 + 1;
        uVar3 = param_2[6];
        uVar4 = param_2[7];
        *(undefined1 *)(piVar5[1] + iVar2) = 0x7b;
        local_2c = ppiVar1;
        local_30 = CONCAT22(local_30._2_2_,0x100);
        iVar2 = FUN_00e65a20(&local_30,"period_start",0xc,uVar4,uVar3,uVar4,param_2[8]);
        if (iVar2 == 0) {
          iVar2 = FUN_00e65a20(&local_30,"period_end",10,param_2[0xb],param_2[10],param_2[0xb],
                               param_2[0xc]);
          if ((((((iVar2 == 0) &&
                 (iVar2 = FUN_00e6504c((int)*(undefined8 *)(param_2 + 0xe),&local_30,
                                       "all_drain_time_ratio",0x14), iVar2 == 0)) &&
                (iVar2 = FUN_00e6504c((int)*(undefined8 *)(param_2 + 0x10),&local_30,
                                      "devfee_drain_time_ratio",0x17), iVar2 == 0)) &&
               ((iVar2 = FUN_00e65278(&local_30,"devfee_pool_activations",0x17,param_2[0x16]),
                iVar2 == 0 &&
                (iVar2 = FUN_00e6269c(&local_30,"devfee_uses_farm_proxy",0x16,
                                      *(undefined1 *)(param_2 + 0x1b)), iVar2 == 0)))) &&
              ((iVar2 = FUN_00e65278(&local_30,"devfee_pool_endpoint_count",0x1a,param_2[0x17]),
               iVar2 == 0 &&
               ((iVar2 = FUN_00e6269c(&local_30,"devfee_farm_proxy_changed",0x19,
                                      *(undefined1 *)((int)param_2 + 0x6d)), iVar2 == 0 &&
                (iVar2 = FUN_00e65278(&local_30,"devfee_pool_connect_attempts",0x1c,param_2[0x18]),
                iVar2 == 0)))))) &&
             ((iVar2 = FUN_00e65278(&local_30,"devfee_pool_connect_successes",0x1d,param_2[0x19]),
              iVar2 == 0 &&
              ((iVar2 = FUN_00e65278(&local_30,"devfee_pool_peak_backoff_s",0x1a,param_2[0x1a]),
               iVar2 == 0 &&
               (iVar2 = FUN_00e6504c((int)*(undefined8 *)(param_2 + 0x12),&local_30,
                                     "devfee_pool_time_in_backoff_ratio",0x21), iVar2 == 0)))))) {
            iVar2 = FUN_00e61534(&local_30,"devfee_pool_stale_shares",0x18,param_2[0x15],
                                 param_2[0x14],param_2[0x15]);
            if (iVar2 == 0) {
              iVar2 = FUN_00e64d48(&local_30,"devfee_pool_last_share_age_s",0x1c,*param_2,param_2[1]
                                  );
              if (iVar2 == 0) {
                iVar2 = FUN_00e64d48(&local_30,"devfee_effective_target_bp",0x1a,param_2[2],
                                     param_2[3]);
                if (iVar2 == 0) {
                  iVar2 = FUN_00e66024(&local_30,"devfee_share_ratio_error_bp",0x1b,param_2[4],
                                       param_2[5]);
                  if (iVar2 == 0) {
                    if ((local_30 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9514);
                    }
                    if ((local_30 & 0xff00) != 0) {
                      FUN_00f1f6ac(*local_2c,"}",1);
                    }
                    if (((local_38 & 0xff00) != 0) && ((local_38 & 1) == 0)) {
                      piVar5 = *ppiVar1;
                      iVar2 = piVar5[2];
                      if (*piVar5 == iVar2) {
                        FUN_00edff4c(piVar5,iVar2,1,1,1);
                        iVar2 = piVar5[2];
                      }
                      *(undefined1 *)(piVar5[1] + iVar2) = 0x7d;
                      piVar5[2] = iVar2 + 1;
                    }
                    *param_1 = local_48;
                    param_1[1] = (int)local_44;
                    param_1[2] = local_40;
                    return;
                  }
                }
              }
            }
          }
        }
      }
      else {
        iVar2 = FUN_0157c4a0(local_30,local_2c);
      }
    }
  }
  *param_1 = -0x80000000;
  param_1[1] = iVar2;
  if (local_48 != 0) {
    thunk_FUN_016d3fb4(local_44);
  }
  return;
}

