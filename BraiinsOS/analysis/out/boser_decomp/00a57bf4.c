// FUN_00a57bf4 @ 00a57bf4 size=472 calls_out=8 calls_in=2
// strings: Weekly schedule must have day of week set | Monthly schedule must have day setevent open/boser/boser/src/metrics_scraper.rs:175

void FUN_00a57bf4(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined4 local_108;
  undefined4 *puStack_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int *local_e8;
  code *local_e4;
  int *local_e0;
  code *local_dc;
  int *local_d8;
  code *local_d4;
  undefined1 *local_d0;
  undefined1 *local_cc;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  if ((char)param_2[5] == '\0') {
    puStack_104 = (undefined4 *)thunk_FUN_01be5118(5);
    if (puStack_104 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,5);
    }
    uStack_100 = 5;
    *(undefined1 *)(puStack_104 + 1) = 0x2a;
    local_108 = 5;
    *puStack_104 = 0x202a202a;
  }
  else {
    if ((char)param_2[5] == '\x01') {
      if (*param_2 == 0) {
        uVar3 = 0x29;
        pcVar4 = "Weekly schedule must have day of week set";
LAB_00a57dac:
        uVar3 = FUN_00667978(pcVar4,uVar3);
        *param_1 = 0x80000000;
        param_1[1] = uVar3;
        return;
      }
      local_30 = param_2[1];
      puVar5 = &DAT_0059041c;
    }
    else {
      if (*param_2 == 0) {
        uVar3 = 0x22;
        pcVar4 = 
        "Monthly schedule must have day setevent open/boser/boser/src/metrics_scraper.rs:175";
        goto LAB_00a57dac;
      }
      local_30 = param_2[1];
      puVar5 = &DAT_005a89d7;
    }
    local_e8 = &local_30;
    local_e4 = FUN_012fd02c;
    FUN_00664898(&local_108,puVar5,&local_e8);
  }
  local_cc = &LAB_00632348;
  local_d8 = param_2 + 2;
  local_e0 = param_2 + 3;
  local_e8 = param_2 + 4;
  local_fc = 0x10001;
  local_d4 = FUN_012fd02c;
  local_dc = FUN_012fd02c;
  local_e4 = FUN_012fd02c;
  local_d0 = (undefined1 *)&local_108;
  FUN_00664898(&local_30,&DAT_0058791e,&local_e8);
  iVar1 = iStack_2c;
  local_f8 = local_30;
  local_f4 = iStack_2c;
  local_f0 = iStack_28;
  FUN_01313b0c(&local_e8,&local_fc,iStack_2c,iStack_28);
  if (local_e8 == (int *)&DAT_80000000) {
    piVar2 = (int *)((uint)&local_e8 | 4);
    local_30 = *piVar2;
    iStack_2c = piVar2[1];
    iStack_28 = piVar2[2];
    iStack_24 = piVar2[3];
    uVar3 = FUN_00a57e10(&local_f8,&local_30);
    *param_1 = 0x80000000;
    param_1[1] = uVar3;
  }
  else {
    FUN_01bed4e2(param_1,&local_e8,0xb8);
  }
  FUN_019bb7e0(local_f8,iVar1);
  FUN_019bb7e0(local_108,puStack_104);
  return;
}

