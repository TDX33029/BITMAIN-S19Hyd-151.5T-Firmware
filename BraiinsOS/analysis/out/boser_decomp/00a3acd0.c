// FUN_00a3acd0 @ 00a3acd0 size=1600 calls_out=13 calls_in=2
// strings: cgminer | enabled

undefined4 FUN_00a3acd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *******pppppppuVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 *******local_38c;
  undefined1 *local_388;
  undefined4 local_384;
  undefined4 *******local_380;
  undefined2 local_37c;
  undefined4 *******local_378;
  undefined1 *local_374;
  undefined4 uStack_370;
  undefined4 *******local_368;
  undefined1 *local_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  int local_358;
  undefined1 auStack_354 [108];
  undefined4 *******local_2e8;
  undefined1 *local_2e4;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  int local_2d8;
  undefined1 auStack_2d4 [100];
  undefined4 local_270;
  undefined1 local_26c;
  undefined1 local_26b;
  undefined4 local_268 [2];
  undefined1 auStack_260 [104];
  undefined4 local_1f8 [2];
  undefined1 auStack_1f0 [104];
  undefined4 *******local_188;
  undefined1 *local_184;
  undefined4 local_180;
  int local_134;
  undefined4 local_120 [2];
  undefined1 auStack_118 [104];
  undefined4 *******local_b0;
  undefined1 *puStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  undefined1 auStack_9c [100];
  undefined4 *******local_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_380 = &local_38c;
  local_37c = 1;
  local_384 = 0;
  local_388 = (undefined1 *)0x1;
  local_38c = (undefined4 *******)0x0;
  FUN_01a436e0(&local_2e8,&local_380,1);
  iVar2 = local_2d8;
  if (local_2d8 == -0x7fffffff) {
    local_b0 = local_2e8;
    puStack_ac = local_2e4;
    uStack_a8 = local_2e0;
    local_378 = local_2e8;
    local_374 = local_2e4;
    uStack_370 = local_2e0;
LAB_00a3b264:
    if (local_378 == (undefined4 *******)&DAT_80000005) {
      if (local_38c == (undefined4 *******)&DAT_80000000) {
        return 1;
      }
      local_2e8 = local_38c;
      local_2e4 = local_388;
      local_2e0 = local_384;
      local_368 = &local_2e8;
      local_364 = &LAB_00632348;
      uVar3 = FUN_012fa178(param_2,param_3,&DAT_00590e5f,&local_368);
      pppppppuVar4 = local_2e8;
      puVar5 = local_2e4;
      goto LAB_00a3b300;
    }
    puVar5 = local_374;
    pppppppuVar4 = local_378;
  }
  else {
    local_b0 = local_2e8;
    puStack_ac = local_2e4;
    uStack_a8 = local_2e0;
    uStack_a4 = uStack_2dc;
    FUN_01bed4e2(auStack_354,auStack_2d4,0x6c);
    local_368 = local_b0;
    local_364 = puStack_ac;
    uStack_360 = uStack_a8;
    uStack_35c = uStack_a4;
    local_358 = iVar2;
    if (iVar2 == -0x80000000) {
LAB_00a3af08:
      if (local_358 != -0x80000000) {
        cVar1 = *(char *)(param_1 + 0xc);
        FUN_01a4c5c8(&local_2e8,cVar1 != '\x02');
        iVar2 = local_2d8;
        if (local_2d8 == -0x7fffffff) {
          local_38 = local_2e8;
          puStack_34 = local_2e4;
          uStack_30 = local_2e0;
          local_188 = local_2e8;
          local_184 = local_2e4;
          local_180 = local_2e0;
          local_134 = 8;
LAB_00a3b088:
          if (local_188 != (undefined4 *******)&DAT_80000005) goto LAB_00a3b2d4;
        }
        else {
          local_38 = local_2e8;
          puStack_34 = local_2e4;
          uStack_30 = local_2e0;
          uStack_2c = uStack_2dc;
          FUN_01bed4e2(auStack_9c,auStack_2d4,100);
          local_b0 = local_38;
          puStack_ac = puStack_34;
          uStack_a8 = uStack_30;
          uStack_a4 = uStack_2c;
          local_a0 = iVar2;
          if ((cVar1 != '\x02') &&
             (FUN_00a25ef0(&local_2e8,&local_b0,&DAT_0056ff80,8,cVar1),
             local_2e8 != (undefined4 *******)&DAT_80000005)) {
            local_184 = local_2e4;
            local_180 = local_2e0;
            local_134 = 8;
            local_188 = local_2e8;
            FUN_00a42378(&local_b0);
            goto LAB_00a3b088;
          }
          FUN_01bed4e2(&local_2e8,&local_b0,0x78);
          FUN_01a4aaf4(&local_188,&local_2e8);
          if (local_134 == 8) goto LAB_00a3b088;
          FUN_01bed4e2(auStack_1f0,&local_188,0x68);
          local_1f8[0] = 1;
          FUN_01a60d04(&local_b0,"cgminer",7);
          FUN_01a4b734(&local_2e8,&local_368,&local_b0,local_1f8);
          if (local_2e8 != (undefined4 *******)&SUB_00000004) {
            FUN_01224384(&local_2e8);
          }
        }
        if (local_358 != -0x80000000) {
          cVar1 = *(char *)(param_1 + 0xd);
          FUN_01a4c5c8(&local_2e8,cVar1 != '\x02');
          if (local_2d8 == -0x7fffffff) {
            local_38 = local_2e8;
            puStack_34 = local_2e4;
            uStack_30 = local_2e0;
            local_188 = local_2e8;
            local_184 = local_2e4;
            local_180 = local_2e0;
            local_134 = 8;
          }
          else {
            local_38 = local_2e8;
            puStack_34 = local_2e4;
            uStack_30 = local_2e0;
            uStack_2c = uStack_2dc;
            FUN_01bed4e2(auStack_9c,auStack_2d4,100);
            local_b0 = local_38;
            puStack_ac = puStack_34;
            uStack_a8 = uStack_30;
            uStack_a4 = uStack_2c;
            local_a0 = local_2d8;
            if ((cVar1 == '\x02') ||
               (FUN_00a25ef0(&local_2e8,&local_b0,"enabled",7,cVar1),
               local_2e8 == (undefined4 *******)&DAT_80000005)) {
              FUN_01bed4e2(&local_2e8,&local_b0,0x78);
              FUN_01a4aaf4(&local_188,&local_2e8);
              if (local_134 != 8) {
                FUN_01bed4e2(auStack_118,&local_188,0x68);
                local_120[0] = 1;
                FUN_01a60d04(&local_b0,&DAT_0056e6a8,4);
                FUN_01a4b734(&local_2e8,&local_368,&local_b0,local_120);
                if (local_2e8 != (undefined4 *******)&SUB_00000004) {
                  FUN_01224384(&local_2e8);
                }
                goto LAB_00a3b21c;
              }
            }
            else {
              local_184 = local_2e4;
              local_180 = local_2e0;
              local_134 = 8;
              local_188 = local_2e8;
              FUN_00a42378(&local_b0);
            }
          }
          if (local_188 != (undefined4 *******)&DAT_80000005) goto LAB_00a3b2d4;
        }
      }
LAB_00a3b21c:
      FUN_01bed4e2(&local_2e8,&local_368,0x80);
      FUN_01a4aaf4(&local_b0,&local_2e8);
      FUN_01a40db8(&local_378,local_270,local_26c,local_26b,&local_b0);
      goto LAB_00a3b264;
    }
    uVar3 = *(undefined4 *)(param_1 + 4);
    uVar6 = *(undefined4 *)(param_1 + 8);
    FUN_01a4c5c8(&local_2e8,1);
    iVar2 = local_2d8;
    if (local_2d8 == -0x7fffffff) {
      local_38 = local_2e8;
      puStack_34 = local_2e4;
      uStack_30 = local_2e0;
      local_188 = local_2e8;
      local_184 = local_2e4;
      local_180 = local_2e0;
      local_134 = 8;
    }
    else {
      local_38 = local_2e8;
      puStack_34 = local_2e4;
      uStack_30 = local_2e0;
      uStack_2c = uStack_2dc;
      FUN_01bed4e2(auStack_9c,auStack_2d4,100);
      local_b0 = local_38;
      puStack_ac = puStack_34;
      uStack_a8 = uStack_30;
      uStack_a4 = uStack_2c;
      local_a0 = iVar2;
      FUN_01a416cc(&local_2e8,&local_b0,&DAT_00520eda,7,uVar3,uVar6);
      if (local_2e8 == (undefined4 *******)&DAT_80000005) {
        FUN_01bed4e2(&local_2e8,&local_b0,0x78);
        FUN_01a4aaf4(&local_188,&local_2e8);
        if (local_134 != 8) {
          FUN_01bed4e2(auStack_260,&local_188,0x68);
          local_268[0] = 1;
          FUN_01a60d04(&local_b0,&DAT_004e94a9,6);
          FUN_01a4b734(&local_2e8,&local_368,&local_b0,local_268);
          if (local_2e8 != (undefined4 *******)&SUB_00000004) {
            FUN_01224384(&local_2e8);
          }
          goto LAB_00a3af08;
        }
      }
      else {
        local_184 = local_2e4;
        local_180 = local_2e0;
        local_134 = 8;
        local_188 = local_2e8;
        FUN_00a42378(&local_b0);
      }
    }
    if (local_188 == (undefined4 *******)&DAT_80000005) goto LAB_00a3af08;
LAB_00a3b2d4:
    puVar5 = local_184;
    pppppppuVar4 = local_188;
    FUN_00a42378(&local_368);
  }
  FUN_019bb7e0(local_38c,local_388);
  uVar3 = 1;
  if ((int)pppppppuVar4 < -0x7ffffffb) {
    return 1;
  }
LAB_00a3b300:
  FUN_019bb7e0(pppppppuVar4,puVar5);
  return uVar3;
}

