// FUN_01687598 @ 01687598 size=944 calls_out=7 calls_in=1
// strings: 

void FUN_01687598(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined **ppuVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 local_578;
  undefined1 local_574;
  undefined2 local_573;
  undefined1 local_570;
  undefined1 local_56f;
  undefined *local_56c;
  undefined *local_568;
  undefined *puStack_564;
  undefined *puStack_560;
  undefined2 local_55c;
  undefined1 auStack_55a [10];
  undefined1 auStack_550 [328];
  undefined *local_408;
  undefined *local_404;
  undefined *local_400;
  undefined *local_3fc;
  undefined *local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined2 local_3ec;
  undefined1 auStack_3ea [2];
  undefined1 auStack_3e8 [4];
  undefined1 auStack_3e4 [4];
  undefined1 auStack_3e0 [320];
  undefined1 auStack_2a0 [296];
  undefined *local_178 [80];
  undefined *local_38 [5];
  
  local_578 = 3;
  uVar3 = 1;
  local_573 = 0;
  local_56f = 0;
  local_574 = 1;
  if (param_3 < 0x1f5) {
    uVar3 = 2;
  }
  local_570 = uVar3;
  FUN_016a8f48(&local_408,&local_578,param_2,param_3);
  puStack_560 = local_3f8;
  puStack_564 = local_3fc;
  local_568 = local_400;
  local_56c = local_404;
  if (local_408 == (undefined *)0x1) {
    FUN_01bed4e2(local_178,(int)&local_3f4 + 2,10);
    local_408 = local_178[0];
    puVar6 = local_400;
    puVar2 = local_3fc;
    puVar7 = local_3f8;
    uVar5 = local_3f4._1_1_;
    uVar3 = (undefined1)local_3f4;
LAB_0168777c:
    if (puVar6 != (undefined *)0x3) {
      *(undefined1 *)((int)param_1 + 9) = 3;
      return;
    }
  }
  else {
    ppuVar4 = local_178;
    uVar1 = (undefined2)local_3f4;
    FUN_01bed4e2(ppuVar4,(int)&local_3f4 + 2,10);
    FUN_01bed4e2(auStack_550,auStack_3e8,0x148);
    local_55c = uVar1;
    FUN_01bed4e2(auStack_55a,ppuVar4,10);
    local_3f4._0_2_ = local_3f4._1_2_;
    if (param_3 < 0x1f5) {
      FUN_00657da0(&local_408,0,1,&local_56c);
      if (local_408 != (undefined *)0x0) {
        ppuVar4 = local_38;
        puVar2 = local_3fc;
        puVar7 = local_3f8;
        uVar5 = local_3f4._1_1_;
        uVar3 = (undefined1)local_3f4;
LAB_01687754:
        puVar6 = local_400;
        FUN_01bed4e2(ppuVar4,(int)&local_3f4 + 2,10);
        local_408 = *ppuVar4;
        local_404 = ppuVar4[1];
        local_400 = (undefined *)CONCAT22(local_400._2_2_,*(undefined2 *)(ppuVar4 + 2));
        FUN_016bc970(&local_56c);
        goto LAB_0168777c;
      }
      FUN_01bed4e2(local_38,(int)&local_3f4 + 2,10);
      FUN_01bed4e2(local_178,auStack_3e8,0x140);
      local_3f0 = (undefined *)CONCAT22(local_3f0._2_2_,(undefined2)local_3f4);
      local_3f4 = local_3f8;
      local_3f8 = local_3fc;
      local_3fc = local_400;
      local_400 = local_404;
      FUN_01bed4e2((int)&local_3f0 + 2,local_38,10);
      FUN_01bed4e2(auStack_3e4,local_178,0x140);
      local_404 = (undefined *)0x1;
      local_408 = (undefined *)0x1;
      puVar2 = (undefined *)thunk_FUN_01be5118(0x164);
      if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x164);
      }
      FUN_01bed4e2(puVar2,&local_408,0x164);
      puVar7 = &DAT_01d08ea0;
    }
    else {
      FUN_00659d48(&local_408,2,1,&local_56c);
      puVar2 = local_408;
      if (local_408 == (undefined *)0x80000000) {
        puVar2 = local_3fc;
        puVar7 = local_3f8;
        uVar5 = local_3f4._1_1_;
        uVar3 = (undefined1)local_3f4;
        goto LAB_01687754;
      }
      FUN_01bed4e2(local_178,(int)&local_3f4 + 2,10);
      FUN_01bed4e2(auStack_2a0,auStack_3e8,0x128);
      local_3ec = (undefined2)local_3f4;
      local_3f0 = local_3f8;
      local_3f4 = local_3fc;
      local_3f8 = local_400;
      local_3fc = local_404;
      FUN_01bed4e2(auStack_3ea,local_178,10);
      local_404 = (undefined *)0x1;
      local_408 = (undefined *)0x1;
      local_400 = puVar2;
      FUN_01bed4e2(auStack_3e0,auStack_2a0,0x128);
      puVar2 = (undefined *)thunk_FUN_01be5118(0x150);
      if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x150);
      }
      FUN_01bed4e2(puVar2,&local_408,0x150);
      puVar7 = &DAT_01d08e38;
    }
    FUN_016bc970(&local_56c);
    uVar5 = 0;
  }
  *(undefined1 *)((int)param_1 + 9) = uVar5;
  *(undefined1 *)(param_1 + 2) = uVar3;
  *param_1 = puVar2;
  param_1[1] = puVar7;
  *(undefined2 *)((int)param_1 + 10) = local_408._0_2_;
  return;
}

