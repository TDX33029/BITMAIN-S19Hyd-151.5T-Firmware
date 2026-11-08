// FUN_005ddfc0 @ 005ddfc0 size=2244 calls_out=33 calls_in=4
// strings: performance_scaling | enabled | power_step | hashrate_step | min_hashrate_target | on_start_target_percent

void FUN_005ddfc0(undefined2 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined8 uVar15;
  int local_738;
  undefined4 local_734;
  undefined4 uStack_730;
  undefined4 local_728 [2];
  undefined1 auStack_720 [376];
  int *local_5a8;
  undefined1 *puStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  int local_598;
  undefined1 auStack_594 [364];
  int *local_428;
  undefined1 *local_424;
  undefined4 local_420;
  undefined4 uStack_41c;
  int local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  int local_3f8;
  undefined4 auStack_3f4 [71];
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  int *local_2a8;
  undefined1 *local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  int local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  int iStack_278;
  undefined4 uStack_274;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  int local_128;
  undefined4 local_124;
  undefined4 local_120;
  int local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  int local_10c;
  undefined4 local_108;
  undefined4 local_104;
  int *local_100;
  undefined2 local_fc;
  int *local_f8;
  undefined1 *local_f4;
  undefined4 uStack_f0;
  int *local_e8;
  undefined1 *local_e4;
  undefined4 uStack_e0;
  int local_94;
  int local_80;
  undefined4 local_7c;
  int local_78;
  int *local_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_006451c0(&local_2a8);
  if (local_138 != -0x80000000) {
    FUN_019bb7e0(local_138,local_134);
  }
  local_158 = 0;
  local_138 = -0x80000000;
  FUN_01bed4e2(local_728,&local_2a8,0x180);
  FUN_019a5900(&local_80,param_3,param_4);
  iVar6 = local_80;
  if (local_80 == -0x80000000) {
    local_29c = local_7c;
    local_298 = local_78;
    local_2a0 = 6;
LAB_005de0ac:
    local_420 = local_2a0;
    uStack_41c = local_29c;
    local_418 = local_298;
    uStack_414 = uStack_294;
    uStack_410 = uStack_290;
    uStack_40c = uStack_28c;
    local_408 = local_288;
    uStack_404 = uStack_284;
    uStack_400 = uStack_280;
    uStack_3fc = uStack_27c;
    local_3f8 = iStack_278;
    auStack_3f4[0] = uStack_274;
    local_424 = (undefined1 *)0x0;
    local_428 = (int *)&DAT_00000003;
LAB_005de0d8:
    FUN_005f4f04(&local_428);
    FUN_005f0d40(local_728);
  }
  else {
    uVar15 = FUN_013245a0(local_7c,local_78);
    FUN_01259844(&local_2a8,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
    FUN_019bb7e0(iVar6,local_7c);
    if (local_2a8 == (int *)&DAT_00000003 && local_2a4 == (undefined1 *)0x0) goto LAB_005de0ac;
    if (local_138 != -0x80000000) {
      FUN_019bb7e0(local_138,local_134);
    }
    FUN_01bed4e2(&local_428,&local_2a8,0x150);
    local_2d8 = 0;
    local_2d4 = local_154;
    uStack_2d0 = uStack_150;
    uStack_2cc = uStack_14c;
    local_2c8 = local_148;
    uStack_2c4 = uStack_144;
    uStack_2c0 = uStack_140;
    uStack_2bc = uStack_13c;
    local_2b0 = local_130;
    local_2b4 = local_134;
    local_2b8 = 0x80000000;
    local_2ac = uStack_12c;
    if (local_428 == (int *)&DAT_00000003 && local_424 == (undefined1 *)0x0) goto LAB_005de0d8;
    FUN_01bed4e2(&local_5a8,&local_428,0x180);
    iVar6 = FUN_006453d0(&local_5a8,local_728);
    FUN_005f0d40(&local_5a8);
    FUN_005f0d40(local_728);
    if (iVar6 != 0) {
      *param_1 = 0;
      return;
    }
  }
  local_100 = &local_10c;
  local_120 = 0;
  local_124 = 1;
  local_128 = 0;
  local_fc = 1;
  local_104 = 0;
  local_108 = 1;
  local_10c = 0;
  FUN_01a436e0(&local_2a8,&local_100,0);
  iVar6 = local_298;
  if (local_298 == -0x7fffffff) {
    local_5a8 = local_2a8;
    puStack_5a4 = local_2a4;
    uStack_5a0 = local_2a0;
    local_f8 = local_2a8;
    local_f4 = local_2a4;
    uStack_f0 = local_2a0;
LAB_005de6e8:
    if (local_f8 == (int *)&DAT_80000005) {
      if (local_10c != -0x80000000) {
        local_118 = local_10c;
        local_114 = local_108;
        uStack_110 = local_104;
        local_2a8 = &local_118;
        local_2a4 = &LAB_00632348;
        iVar6 = FUN_012fa178(&local_128,&DAT_01c02660,&DAT_00582d7f,&local_2a8);
        FUN_019bb7e0(local_118,local_114);
        if (iVar6 == 0) {
          local_428 = &local_738;
          local_738 = local_128;
          local_734 = local_124;
          uStack_730 = local_120;
          local_424 = &LAB_00632348;
          FUN_00664898(&local_2a8,&DAT_00582d7f,&local_428);
          puVar13 = local_2a4;
          piVar12 = local_2a8;
          iVar6 = FUN_00adaf40(param_3,param_4,local_2a4,local_2a0);
          if (iVar6 == 0) {
            FUN_019bb7e0(piVar12,puVar13);
            *param_1 = 0x100;
          }
          else {
            *(int *)(param_1 + 2) = iVar6;
            *(undefined1 *)param_1 = 1;
            FUN_019bb7e0(piVar12,puVar13);
          }
          FUN_019bb7e0(local_738,local_734);
          return;
        }
      }
      goto LAB_005de840;
    }
    piVar12 = local_f8;
    puVar13 = local_f4;
  }
  else {
    local_5a8 = local_2a8;
    puStack_5a4 = local_2a4;
    uStack_5a0 = local_2a0;
    uStack_59c = local_29c;
    FUN_01bed4e2(&uStack_414,&uStack_294,0x6c);
    local_428 = local_5a8;
    local_424 = puStack_5a4;
    local_420 = uStack_5a0;
    uStack_41c = uStack_59c;
    local_418 = iVar6;
    FUN_00f85f70(&local_2a8,&local_428,param_2 + 0x150);
    if (((local_2a8 == (int *)&DAT_80000005) &&
        (FUN_005d0518(&local_2a8,param_2,&local_428), local_2a8 == (int *)&DAT_80000005)) &&
       ((*(int *)(param_2 + 0xd8) == 2 && *(int *)(param_2 + 0xdc) == 0 ||
        (FUN_00dab504(&local_2a8,&local_428,(int *)(param_2 + 0xd8)),
        local_2a8 == (int *)&DAT_80000005)))) {
      iVar14 = *(int *)(param_2 + 0xf8);
      iVar6 = *(int *)(param_2 + 0xfc);
      if (iVar14 == 2 && iVar6 == 0) {
LAB_005de698:
        if ((*(int *)(param_2 + 0x140) == 2) ||
           (FUN_00dabd00(&local_2a8,&local_428,(int *)(param_2 + 0x140)),
           local_2a8 == (int *)&DAT_80000005)) {
          FUN_01bed4e2(&local_2a8,&local_428,0x80);
          FUN_01a41954(&local_f8,&local_2a8);
          goto LAB_005de6e8;
        }
        goto LAB_005de7fc;
      }
      FUN_00644720(&local_2a8,&local_428,"performance_scaling",0x13);
      if (local_2a8 != (int *)&DAT_80000005) goto LAB_005de7fc;
      if (local_418 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("internal error: entered unreachable code: datetimes should only be serialized as structs, not maps"
                     ,0xc5,&DAT_01d2bdec);
      }
      iVar4 = *(int *)(param_2 + 0x118);
      cVar1 = *(char *)(param_2 + 0x138);
      iVar8 = *(int *)(param_2 + 0x120);
      iVar5 = iVar4 + iVar14;
      if (cVar1 != '\x02') {
        iVar5 = iVar5 + 1;
      }
      iVar7 = *(int *)(param_2 + 0x128);
      iVar9 = *(int *)(param_2 + 0x108);
      iVar10 = *(int *)(param_2 + 0x10c);
      iVar11 = *(int *)(param_2 + 0x130);
      iVar5 = iVar5 + iVar8 + iVar9 + iVar7;
      cVar2 = *(char *)(param_2 + 0x139);
      if (cVar2 != '\x02') {
        iVar5 = iVar5 + 1;
      }
      iVar5 = iVar5 + iVar11;
      cVar3 = *(char *)(param_2 + 0x13a);
      if (cVar3 != '\x02') {
        iVar5 = iVar5 + 1;
      }
      FUN_01a4c5c8(&local_2a8,iVar5);
      iVar5 = local_298;
      if (local_298 == -0x7fffffff) {
        local_38 = local_2a8;
        puStack_34 = local_2a4;
        uStack_30 = local_2a0;
        local_e8 = local_2a8;
        local_e4 = local_2a4;
        uStack_e0 = local_2a0;
      }
      else {
        local_38 = local_2a8;
        puStack_34 = local_2a4;
        uStack_30 = local_2a0;
        uStack_2c = local_29c;
        FUN_01bed4e2(auStack_594,&uStack_294,100);
        local_5a8 = local_38;
        puStack_5a4 = puStack_34;
        uStack_5a0 = uStack_30;
        uStack_59c = uStack_2c;
        local_598 = iVar5;
        if (((((cVar1 == '\x02') ||
              (FUN_00a25ef0(&local_2a8,&local_5a8,"enabled",7,cVar1),
              local_2a8 == (int *)&DAT_80000005)) &&
             (((iVar4 == 0 ||
               (FUN_00645110(&local_2a8,&local_5a8,"power_step",10,iVar4,
                             *(undefined4 *)(param_2 + 0x11c)), local_2a8 == (int *)&DAT_80000005))
              && ((iVar8 == 0 ||
                  (FUN_00645110(&local_2a8,&local_5a8,&DAT_00569e48,0x10,iVar8,
                                *(undefined4 *)(param_2 + 0x124)), local_2a8 == (int *)&DAT_80000005
                  )))))) &&
            (((iVar14 == 0 && iVar6 == 0 ||
              (FUN_00644ddc((int)*(undefined8 *)(param_2 + 0x100),&local_2a8,&local_5a8,
                            "hashrate_step",0xd,iVar14,iVar6), local_2a8 == (int *)&DAT_80000005))
             && ((((iVar9 == 0 && iVar10 == 0 ||
                   (FUN_00644ddc((int)*(undefined8 *)(param_2 + 0x110),&local_2a8,&local_5a8,
                                 "min_hashrate_target",0x13,iVar9,iVar10),
                   local_2a8 == (int *)&DAT_80000005)) &&
                  ((cVar2 == '\x02' ||
                   (FUN_00a25ef0(&local_2a8,&local_5a8,&DAT_00569528,0x10,cVar2),
                   local_2a8 == (int *)&DAT_80000005)))) &&
                 ((iVar7 == 0 ||
                  (FUN_00645054(*(undefined4 *)(param_2 + 300),&local_2a8,&local_5a8),
                  local_2a8 == (int *)&DAT_80000005)))))))) &&
           (((cVar3 == '\x02' ||
             (FUN_00644cc0(&local_2a8,&local_5a8), local_2a8 == (int *)&DAT_80000005)) &&
            ((iVar11 == 0 ||
             (FUN_00644e90(&local_2a8,&local_5a8,"on_start_target_percent",0x17,iVar11,
                           *(undefined4 *)(param_2 + 0x134)), local_2a8 == (int *)&DAT_80000005)))))
           ) {
          FUN_01bed4e2(&local_2a8,&local_5a8,0x78);
          FUN_01a4aaf4(&local_e8,&local_2a8);
          iVar6 = local_3f8;
          if (local_94 != 8) {
            local_3f8 = -0x80000000;
            if (iVar6 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01d2bdfc);
            }
            local_80 = iVar6;
            FUN_01bed4e2(&local_7c,auStack_3f4,0x44);
            FUN_01bed4e2(auStack_720,&local_e8,0x68);
            local_728[0] = 1;
            FUN_01a4b734(&local_2a8,&local_428,&local_80,local_728);
            if (local_2a8 != (int *)&SUB_00000004) {
              FUN_005f6530(&local_2a8);
            }
            goto LAB_005de698;
          }
        }
        else {
          local_e4 = local_2a4;
          uStack_e0 = local_2a0;
          local_e8 = local_2a8;
          FUN_005f8054(&local_5a8);
        }
      }
      if (local_e8 == (int *)&DAT_80000005) goto LAB_005de698;
      piVar12 = local_e8;
      puVar13 = local_e4;
    }
    else {
LAB_005de7fc:
      piVar12 = local_2a8;
      puVar13 = local_2a4;
    }
    FUN_005f8054(&local_428);
  }
  FUN_019bb7e0(local_10c,local_108);
  if (-0x7ffffffc < (int)piVar12) {
    FUN_019bb7e0(piVar12,puVar13);
  }
LAB_005de840:
                    /* WARNING: Subroutine does not return */
  FUN_013073dc(&DAT_00533383,0x37,&local_2a8,&DAT_01c02728,&DAT_01d30334);
}

