// FUN_0195a40c @ 0195a40c size=1988 calls_out=12 calls_in=1
// strings: NOVevent open/utils-rs/scheduler/src/cron.rs:461 | DECFUJITSUHiSiliconMotorola/FreescaleNVIDIAAPMSamsungMarvell

void FUN_0195a40c(undefined4 *param_1,uint *param_2,undefined2 *param_3,int *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  uint **ppuVar9;
  undefined2 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  uint *local_2d0;
  undefined2 *local_2cc;
  undefined4 local_2c8;
  int local_2c4;
  uint local_2c0;
  uint *local_2bc;
  uint *local_2b8;
  undefined2 *local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 uStack_2a8;
  uint **local_2a0;
  undefined2 *local_29c;
  undefined1 auStack_298 [176];
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  uint uStack_1dc;
  undefined4 local_1d8;
  int local_1d4;
  int local_1d0;
  uint *local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  uint **local_1c0;
  undefined2 *local_1bc;
  uint *local_1b8;
  undefined2 *local_1b4;
  uint *local_1b0;
  undefined1 *local_1ac;
  undefined4 local_1a8;
  undefined2 local_1a4;
  undefined1 auStack_108 [176];
  uint local_58;
  uint local_54;
  uint local_50;
  uint uStack_4c;
  uint **local_48;
  undefined2 *puStack_44;
  uint *puStack_40;
  uint **local_38;
  undefined2 *local_34;
  uint *local_30;
  undefined1 *local_2c;
  
  local_1a4 = 1;
  local_1ac = (undefined1 *)((int)param_2 + (int)param_3);
  local_1a8 = 0;
  local_1c0 = (uint **)0x0;
  local_2d0 = param_2;
  local_2cc = param_3;
  local_1bc = param_3;
  local_1b8 = param_2;
  local_1b4 = param_3;
  local_1b0 = param_2;
  FUN_01318760(&local_2c8,&local_1c0);
  if (local_2c0 < 6) {
    local_1c0 = &local_2d0;
    local_1bc = &DAT_0132b6a0;
    uVar2 = FUN_00a57a98(&DAT_0059242f,&local_1c0);
    *param_1 = 0x80000000;
    param_1[1] = uVar2;
  }
  else {
    uVar13 = 6;
    bVar1 = true;
    if (*(int *)(local_2c4 + 0x2c) != 0) {
      pbVar11 = *(byte **)(local_2c4 + 0x28);
      do {
        pbVar12 = pbVar11 + 1;
        puVar6 = (undefined1 *)(uint)*pbVar11;
        if (0x7fffffff < (uint)(int)(char)*pbVar11) {
          if (puVar6 < (undefined1 *)0xe0) {
            puVar6 = (undefined1 *)(pbVar11[1] & 0x3f | ((uint)puVar6 & 0x1f) << 6);
            pbVar12 = pbVar11 + 2;
          }
          else {
            uVar8 = pbVar11[2] & 0x3f | (pbVar11[1] & 0x3f) << 6;
            if (puVar6 < (undefined1 *)0xf0) {
              puVar6 = (undefined1 *)(uVar8 | ((uint)puVar6 & 0x1f) << 0xc);
              pbVar12 = pbVar11 + 3;
            }
            else {
              puVar6 = (undefined1 *)(pbVar11[3] & 0x3f | uVar8 << 6 | ((uint)puVar6 & 7) << 0x12);
              if (puVar6 == &DAT_00110000) break;
              pbVar12 = pbVar11 + 4;
            }
          }
        }
        if ((((undefined1 *)0x9 < puVar6 + -0x30) &&
            (((uint)puVar6 & 0xfffffffe) != 0x2c && puVar6 != (undefined1 *)0x2f)) &&
           (puVar6 != (undefined1 *)0x2a)) {
          FUN_00665974(&local_1c0);
          puVar3 = local_1b8;
          puVar10 = local_1bc;
          uVar13 = 5;
          if (local_1b8 == (uint *)0x3) {
            iVar5 = thunk_FUN_01bed842(local_1bc,"SUN",3);
            uVar13 = 6;
            if ((((((iVar5 != 0) && (iVar5 = thunk_FUN_01bed842(puVar10,"MON",3), iVar5 != 0)) &&
                  ((iVar5 = thunk_FUN_01bed842(puVar10,"TUE",3), iVar5 != 0 &&
                   ((iVar5 = thunk_FUN_01bed842(puVar10,"WED",3), iVar5 != 0 &&
                    (iVar5 = thunk_FUN_01bed842(puVar10,"THU",3), iVar5 != 0)))))) &&
                 (iVar5 = thunk_FUN_01bed842(puVar10,"FRI",3), iVar5 != 0)) &&
                ((((iVar5 = thunk_FUN_01bed842(puVar10,"SAT",3), iVar5 != 0 &&
                   (iVar5 = thunk_FUN_01bed842(puVar10,"JAN",3), iVar5 != 0)) &&
                  (iVar5 = thunk_FUN_01bed842(puVar10,"FEB",3), iVar5 != 0)) &&
                 ((iVar5 = thunk_FUN_01bed842(puVar10,"MAR",3), iVar5 != 0 &&
                  (iVar5 = thunk_FUN_01bed842(puVar10,"APR",3), iVar5 != 0)))))) &&
               (((iVar5 = thunk_FUN_01bed842(puVar10,"MAY",3), iVar5 != 0 &&
                 ((iVar5 = thunk_FUN_01bed842(puVar10,"JUN",3), iVar5 != 0 &&
                  (iVar5 = thunk_FUN_01bed842(puVar10,"JUL",3), iVar5 != 0)))) &&
                ((iVar5 = thunk_FUN_01bed842(puVar10,"AUG",3), iVar5 != 0 &&
                 (((iVar5 = thunk_FUN_01bed842(puVar10,"SEP",3), iVar5 != 0 &&
                   (iVar5 = thunk_FUN_01bed842(puVar10,"OCT",3), iVar5 != 0)) &&
                  (iVar5 = thunk_FUN_01bed842(puVar10,
                                              "NOVevent open/utils-rs/scheduler/src/cron.rs:461",3),
                  iVar5 != 0)))))))) {
              iVar5 = thunk_FUN_01bed842(puVar10,
                                         "DECFUJITSUHiSiliconMotorola/FreescaleNVIDIAAPMSamsungMarvell"
                                         ,3);
              FUN_019bb7e0(local_1c0,puVar10);
              uVar13 = 5;
              if (iVar5 == 0) {
                uVar13 = 6;
              }
              bVar1 = iVar5 == 0;
              break;
            }
          }
          bVar1 = puVar3 == (uint *)0x3;
          FUN_019bb7e0(local_1c0,puVar10);
          break;
        }
        pbVar11 = pbVar12;
      } while (pbVar12 != *(byte **)(local_2c4 + 0x28) + *(int *)(local_2c4 + 0x2c));
    }
    if (local_2c0 < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar13,local_2c0,&DAT_01d269c4);
    }
    FUN_006e4c08(&local_2bc,local_2c4,uVar13,&DAT_005319c3,1);
    FUN_006e4c08(&local_2b0,local_2c4 + uVar13 * 8,local_2c0 - uVar13,&DAT_005319c3,1);
    puVar3 = local_2b8;
    local_1c0 = (uint **)0x0;
    FUN_01313b0c(&local_2a0,&local_1c0,local_2b8,local_2b4);
    if (local_2a0 != (uint **)&DAT_80000000) {
      FUN_01bed4e2(auStack_108,auStack_298,0xb0);
      ppuVar9 = local_2a0;
      puVar10 = local_29c;
LAB_0195aa08:
      iVar5 = param_4[1];
      iVar7 = param_4[2];
      param_1[0x31] = *param_4;
      param_1[0x32] = iVar5;
      param_1[0x33] = iVar7;
      param_1[0x2e] = local_2b0;
      param_1[0x2f] = local_2ac;
      param_1[0x30] = uStack_2a8;
      FUN_01bed4e2(param_1 + 2,auStack_108,0xb0);
      *param_1 = ppuVar9;
      param_1[1] = puVar10;
      FUN_019bb7e0(local_2bc,puVar3);
      FUN_0134aee0(local_2c8,local_2c4,4,8);
      return;
    }
    puVar4 = (uint *)((uint)&local_2a0 | 4);
    local_1b8 = &local_1e8;
    local_1e8 = *puVar4;
    local_1e4 = puVar4[1];
    local_1e0 = puVar4[2];
    uStack_1dc = puVar4[3];
    if (bVar1) {
      local_1b0 = puVar3;
      local_1a4 = 1;
      local_1ac = (undefined1 *)((int)puVar3 + (int)local_2b4);
      local_1b4 = local_2b4;
      local_1a8 = 0;
      local_1c0 = (uint **)0x0;
      local_1bc = local_2b4;
      local_1b8 = puVar3;
      FUN_01318760(&local_1d8,&local_1c0);
      if (local_1d0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(1,0,0,&DAT_01d269d4);
      }
      FUN_006e4c08(&local_1cc,local_1d4 + 8,local_1d0 + -1,&DAT_005319c3,1);
      uVar2 = local_1c8;
      local_38 = (uint **)0x0;
      FUN_01313b0c(&local_1c0,&local_38,local_1c8,local_1c4);
      puVar10 = local_1bc;
      ppuVar9 = local_1c0;
      if (local_1c0 != (uint **)&DAT_80000000) {
        FUN_01bed4e2(auStack_108,&local_1b8,0xb0);
        FUN_019bb7e0(local_1cc,uVar2);
        FUN_0134aee0(local_1d8,local_1d4,4,8);
        if (3 < local_1e8) {
          FUN_019bb7e0(local_1e4,local_1e0);
        }
        goto LAB_0195aa08;
      }
      puVar3 = (uint *)((uint)&local_1c0 | 4);
      local_30 = &local_58;
      local_58 = *puVar3;
      local_54 = puVar3[1];
      local_50 = puVar3[2];
      uStack_4c = puVar3[3];
      local_2c = &LAB_0131994c;
      local_34 = (undefined2 *)&LAB_00632348;
      local_38 = &local_1cc;
      FUN_00664898(&local_48,&DAT_005a13ca,&local_38);
      local_38 = local_48;
      local_34 = puStack_44;
      local_30 = puStack_40;
      uVar2 = FUN_006679ac(&local_38);
      if (3 < local_58) {
        FUN_019bb7e0(local_54,local_50);
      }
      *param_1 = 0x80000000;
      param_1[1] = uVar2;
      FUN_019bb7e0(local_1cc,local_1c8);
      FUN_0134aee0(local_1d8,local_1d4,4,8);
    }
    else {
      local_1b4 = (undefined2 *)&LAB_0131994c;
      local_1bc = (undefined2 *)&LAB_00632348;
      local_1c0 = &local_2bc;
      FUN_00664898(&local_38,&DAT_005a13ca,&local_1c0);
      local_1c0 = local_38;
      local_1bc = local_34;
      local_1b8 = local_30;
      uVar2 = FUN_006679ac(&local_1c0);
      *param_1 = 0x80000000;
      param_1[1] = uVar2;
    }
    if (3 < local_1e8) {
      FUN_019bb7e0(local_1e4,local_1e0);
    }
    FUN_019bb7e0(local_2b0,local_2ac);
    FUN_019bb7e0(local_2bc,local_2b8);
  }
  FUN_0134aee0(local_2c8,local_2c4,4,8);
  if (*param_4 != -0x80000000) {
    FUN_019bb7e0(*param_4,param_4[1]);
  }
  return;
}

