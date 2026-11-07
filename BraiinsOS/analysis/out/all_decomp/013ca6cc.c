// FUN_013ca6cc @ 013ca6cc size=788 calls_out=7 calls_in=1
// strings: 

void FUN_013ca6cc(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 local_588;
  undefined2 local_584;
  undefined1 local_582;
  undefined1 local_580;
  undefined1 local_57f;
  undefined *local_57c;
  undefined *local_578;
  undefined *local_574;
  undefined *puStack_570;
  int iStack_56c;
  undefined4 local_568;
  undefined4 local_564;
  undefined1 auStack_560 [328];
  int local_418;
  undefined *local_414;
  undefined *local_410;
  undefined *local_40c;
  undefined *local_408;
  undefined4 local_404;
  undefined *local_400;
  int local_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined1 auStack_3f0 [320];
  undefined1 auStack_2b0 [296];
  int local_188;
  int local_184;
  undefined *local_180;
  undefined *local_17c;
  undefined *local_178;
  undefined4 local_174;
  int local_170;
  undefined4 local_16c;
  undefined1 auStack_168 [324];
  
  local_582 = 0;
  uVar4 = 1;
  local_57f = 0;
  local_588 = 3;
  local_584 = 1;
  if (param_3 < 0x1f5) {
    uVar4 = 2;
  }
  local_580 = uVar4;
  FUN_013caa30(&local_418,&local_588,param_2,param_3);
  local_564 = local_3fc;
  local_568 = local_400;
  iStack_56c = (int)local_404;
  puStack_570 = local_408;
  local_574 = local_40c;
  local_578 = local_410;
  local_57c = local_414;
  if (local_418 == 1) {
    uVar5 = local_404._2_2_;
    uVar4 = (undefined1)local_404;
    puVar2 = local_40c;
    puVar7 = local_408;
    puVar3 = local_410;
  }
  else {
    FUN_016dd1aa(auStack_560,&uStack_3f8,0x148);
    if (param_3 < 0x1f5) {
      FUN_005ee774(&local_188,0,&local_57c);
      if (local_188 != 1) {
        FUN_016dd1aa(&uStack_3f4,auStack_168,0x140);
        local_400 = local_174;
        local_3fc = local_170;
        uStack_3f8 = (undefined *)local_16c;
        local_410 = (undefined *)local_184;
        local_40c = local_180;
        local_408 = local_17c;
        local_404 = local_178;
        local_414 = (undefined *)0x1;
        local_418 = 1;
        puVar2 = (undefined *)thunk_FUN_016d4a50(0x164);
        if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x164);
        }
        FUN_016dd1aa(puVar2,&local_418,0x164);
        puVar7 = &DAT_018944c0;
        iVar6 = local_184;
LAB_013ca990:
        uVar5 = (undefined2)iVar6;
        FUN_013c957c(&local_57c);
        local_404._1_1_ = 0;
        goto LAB_013ca9a0;
      }
      puVar3 = local_180;
      puVar2 = local_17c;
      puVar7 = local_178;
      local_404._1_1_ = local_174._1_1_;
      uVar4 = (undefined1)local_174;
      uVar5 = local_174._2_2_;
    }
    else {
      FUN_005f4c28(&local_418,&local_57c);
      uStack_3f4 = local_3fc;
      uStack_3f8 = local_400;
      iVar6 = (int)local_404;
      puVar2 = local_40c;
      iVar1 = local_418;
      if (local_418 != -0x80000000) {
        FUN_016dd1aa(auStack_2b0,&uStack_3f8,0x128);
        local_400 = local_408;
        local_3fc = (int)local_404;
        local_408 = local_410;
        local_40c = local_414;
        local_414 = (undefined *)0x1;
        local_418 = 1;
        local_404 = puVar2;
        local_410 = (undefined *)iVar1;
        FUN_016dd1aa(auStack_3f0,auStack_2b0,0x128);
        puVar2 = (undefined *)thunk_FUN_016d4a50(0x150);
        if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x150);
        }
        FUN_016dd1aa(puVar2,&local_418,0x150);
        puVar7 = &DAT_01894458;
        goto LAB_013ca990;
      }
      puVar3 = local_410;
      puVar7 = local_408;
      uVar4 = (undefined1)local_404;
      uVar5 = local_404._2_2_;
    }
    FUN_013c957c(&local_57c);
  }
  if (puVar3 != (undefined *)0x3) {
    *(undefined1 *)((int)param_1 + 9) = 3;
    return;
  }
LAB_013ca9a0:
  *(undefined2 *)((int)param_1 + 10) = uVar5;
  *(undefined1 *)((int)param_1 + 9) = local_404._1_1_;
  *(undefined1 *)(param_1 + 2) = uVar4;
  *param_1 = puVar2;
  param_1[1] = puVar7;
  return;
}

