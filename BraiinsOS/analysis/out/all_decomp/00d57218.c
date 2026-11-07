// FUN_00d57218 @ 00d57218 size=880 calls_out=6 calls_in=2
// strings: 

void FUN_00d57218(undefined4 *param_1,int *param_2,int *param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 int param_9,int *param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_b30;
  int local_b2c;
  int local_b28;
  int local_b24;
  undefined4 local_b20;
  undefined4 local_b1c;
  undefined1 auStack_b18 [640];
  undefined1 auStack_898 [648];
  int local_610;
  int iStack_60c;
  int local_608;
  int local_604;
  int local_600;
  int local_5fc;
  undefined1 *local_5f0;
  undefined1 *local_5e0;
  int *local_5d8;
  undefined4 local_5d4;
  undefined4 local_5d0;
  undefined4 local_5cc;
  undefined4 local_5c8;
  undefined4 local_5c4;
  undefined4 local_5c0;
  undefined4 local_5bc;
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined4 local_5b0;
  int *local_5ac;
  undefined4 local_5a8;
  int *local_5a4;
  undefined4 local_5a0;
  int local_598;
  int local_594;
  int local_590;
  int local_58c;
  int local_588;
  int local_584;
  undefined4 local_580;
  undefined1 *local_570;
  undefined1 *local_560;
  undefined1 *local_550;
  undefined1 *local_540;
  undefined1 *local_520;
  int *local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined4 local_50c;
  int *local_508;
  undefined4 local_504;
  int *local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined1 local_4ec;
  undefined1 auStack_4e8 [552];
  undefined1 auStack_2c0 [96];
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  undefined1 auStack_250 [556];
  
  local_b1c = 1;
  local_b20 = 1;
  FUN_016dd1aa(auStack_b18,param_6,0xa0);
  piVar3 = (int *)thunk_FUN_016d4a50(0xa8);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xa8);
  }
  FUN_016dd1aa(piVar3,&local_b20,0xa8);
  iVar7 = *param_3;
  iVar6 = param_3[1];
  if (iVar7 == 5 && iVar6 == 0) {
    iVar6 = 0;
    iVar7 = 5;
  }
  else {
    local_b30 = param_3[2];
    local_b2c = param_3[3];
    local_b28 = param_3[4];
    local_b24 = param_3[5];
  }
  do {
    iVar4 = *param_2;
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = iVar4 + 1;
  if (-1 < iVar4) {
    FUN_00d52584(auStack_250,param_9);
    FUN_016dd1aa(auStack_2c0,param_9 + 0x228,0x60);
    FUN_016dd1aa(auStack_4e8,auStack_250,0x228);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + 1;
    if (-1 < iVar4) {
      do {
        iVar4 = *param_10;
        bVar2 = (bool)hasExclusiveAccess(param_10);
      } while (!bVar2);
      *param_10 = iVar4 + 1;
      if (-1 < iVar4) {
        piVar5 = param_10 + 0x29;
        do {
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = *piVar5 + 1;
        iVar4 = 5;
        iVar8 = 0;
        if (iVar7 != 5 || iVar6 != 0) {
          local_254 = local_b24;
          local_258 = local_b28;
          local_25c = local_b2c;
          local_260 = local_b30;
          iVar4 = iVar7;
          iVar8 = iVar6;
        }
        FUN_016dd1aa(auStack_898,auStack_4e8,0x288);
        local_5d0 = *param_4;
        local_5cc = param_4[1];
        local_5c8 = param_4[2];
        FUN_016dd1aa(&local_b20,param_9,0x288);
        local_608 = local_260;
        local_5a8 = param_8;
        local_4fc = param_7;
        local_590 = local_b30;
        local_504 = param_5;
        local_4f8 = param_12;
        local_510 = param_14;
        local_50c = param_15;
        local_550 = &DAT_3b9aca00;
        local_560 = &DAT_3b9aca00;
        local_570 = &DAT_3b9aca00;
        local_540 = &DAT_3b9aca00;
        local_5e0 = &DAT_3b9aca00;
        local_5f0 = &DAT_3b9aca00;
        local_520 = &DAT_3b9aca00;
        local_5fc = local_254;
        local_604 = local_25c;
        local_5b4 = 8;
        local_5c0 = 8;
        local_580 = 0;
        local_600 = local_258;
        local_5a0 = 0;
        local_5b0 = 0;
        local_5b8 = 0;
        local_5bc = 0;
        local_5c4 = 0;
        local_5d4 = param_11;
        local_5d8 = param_10;
        local_58c = local_b2c;
        local_588 = local_b28;
        local_584 = local_b24;
        local_514 = param_11;
        local_518 = param_10;
        local_4ec = 0;
        local_4f4 = param_13;
        local_4f0 = param_16;
        local_5ac = param_2;
        local_5a4 = piVar3;
        local_508 = param_2;
        local_500 = piVar3;
        local_610 = iVar4;
        iStack_60c = iVar8;
        local_598 = iVar7;
        local_594 = iVar6;
        iVar6 = FUN_00d57838(&local_b20,param_3);
        if (iVar6 == 0) {
          FUN_016dd1aa(param_1,&local_b20,0x638);
          return;
        }
        param_1[2] = iVar6;
        *param_1 = 2;
        param_1[1] = 0;
        FUN_00d58b24(&local_b20);
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xd57584);
  (*pcVar1)();
}

