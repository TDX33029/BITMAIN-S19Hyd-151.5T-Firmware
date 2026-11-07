// FUN_00eede20 @ 00eede20 size=1288 calls_out=15 calls_in=1
// strings: period_start | period_end | target_devfee_bp | target_devfee_changed | devfee_bdf_code | devfee_attribution_code

void FUN_00eede20(int *param_1,int param_2)

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
  iVar2 = FUN_00e63424(&local_38,param_2);
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
        uVar3 = *(undefined4 *)(param_2 + 0x70);
        uVar4 = *(undefined4 *)(param_2 + 0x74);
        *(undefined1 *)(piVar5[1] + iVar2) = 0x7b;
        local_2c = ppiVar1;
        local_30 = CONCAT22(local_30._2_2_,0x100);
        iVar2 = FUN_00e65a20(&local_30,"period_start",0xc,uVar4,uVar3,uVar4,
                             *(undefined4 *)(param_2 + 0x78));
        if (iVar2 == 0) {
          iVar2 = FUN_00e65a20(&local_30,"period_end",10,*(undefined4 *)(param_2 + 0x84),
                               *(undefined4 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0x84),
                               *(undefined4 *)(param_2 + 0x88));
          if (((((iVar2 == 0) &&
                (iVar2 = FUN_00e65278(&local_30,"target_devfee_bp",0x10,
                                      *(undefined4 *)(param_2 + 0xe0)), iVar2 == 0)) &&
               (iVar2 = FUN_00e6269c(&local_30,"target_devfee_changed",0x15,
                                     *(undefined1 *)(param_2 + 0xe4)), iVar2 == 0)) &&
              ((iVar2 = FUN_00e61384(&local_30,"devfee_bdf_code",0xf,param_2 + 200), iVar2 == 0 &&
               (iVar2 = FUN_00e61384(&local_30,"devfee_attribution_code",0x17,param_2 + 0xd4),
               iVar2 == 0)))) &&
             (iVar2 = FUN_00e6269c(&local_30,"devfee_contract_changed",0x17,
                                   *(undefined1 *)(param_2 + 0xe5)), iVar2 == 0)) {
            iVar2 = FUN_00e61534(&local_30,"all_processed_work",0x12,*(undefined4 *)(param_2 + 0x94)
                                 ,*(undefined4 *)(param_2 + 0x90),*(undefined4 *)(param_2 + 0x94));
            if (iVar2 == 0) {
              iVar2 = FUN_00e61534(&local_30,"devfee_processed_work",0x15,
                                   *(undefined4 *)(param_2 + 0x9c),*(undefined4 *)(param_2 + 0x98),
                                   *(undefined4 *)(param_2 + 0x9c));
              if (iVar2 == 0) {
                iVar2 = FUN_00e61534(&local_30,"all_pool_shares",0xf,*(undefined4 *)(param_2 + 0xa4)
                                     ,*(undefined4 *)(param_2 + 0xa0),
                                     *(undefined4 *)(param_2 + 0xa4));
                if (iVar2 == 0) {
                  iVar2 = FUN_00e61534(&local_30,"devfee_pool_shares",0x12,
                                       *(undefined4 *)(param_2 + 0xac),
                                       *(undefined4 *)(param_2 + 0xa8),
                                       *(undefined4 *)(param_2 + 0xac));
                  if (iVar2 == 0) {
                    iVar2 = FUN_00e61534(&local_30,&DAT_00565660,0x10,
                                         *(undefined4 *)(param_2 + 0xb4),
                                         *(undefined4 *)(param_2 + 0xb0),
                                         *(undefined4 *)(param_2 + 0xb4));
                    if (iVar2 == 0) {
                      iVar2 = FUN_00e61534(&local_30,"devfee_drain_shares",0x13,
                                           *(undefined4 *)(param_2 + 0xbc),
                                           *(undefined4 *)(param_2 + 0xb8),
                                           *(undefined4 *)(param_2 + 0xbc));
                      if (iVar2 == 0) {
                        iVar2 = FUN_00e61534(&local_30,"devfee_pool_rejected_shares",0x1b,
                                             *(undefined4 *)(param_2 + 0xc4),
                                             *(undefined4 *)(param_2 + 0xc0),
                                             *(undefined4 *)(param_2 + 0xc4));
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

