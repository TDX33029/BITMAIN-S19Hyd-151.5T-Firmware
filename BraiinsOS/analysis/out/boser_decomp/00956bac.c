// FUN_00956bac @ 00956bac size=740 calls_out=1 calls_in=9
// strings: 

void FUN_00956bac(undefined4 *param_1,undefined1 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_9cc;
  undefined4 local_9c8;
  undefined4 local_9c4;
  undefined4 local_9c0;
  undefined4 uStack_9bc;
  undefined4 uStack_9b8;
  undefined4 uStack_9b4;
  undefined4 auStack_9b0 [4];
  undefined1 auStack_9a0 [288];
  undefined4 auStack_880 [4];
  undefined1 auStack_870 [288];
  undefined4 auStack_750 [4];
  undefined1 auStack_740 [288];
  undefined4 auStack_620 [4];
  undefined1 auStack_610 [288];
  undefined4 auStack_4f0 [4];
  undefined1 auStack_4e0 [288];
  undefined4 auStack_3c0 [4];
  undefined1 auStack_3b0 [288];
  undefined4 auStack_290 [4];
  undefined1 auStack_280 [288];
  undefined1 auStack_160 [28];
  undefined1 auStack_144 [288];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2) {
  case 0:
    FUN_01bed4e2(auStack_144,param_3,0x11c);
    uVar7 = *(undefined4 *)(param_3 + 0x11c);
    local_9c4 = 0x80000001;
    puVar1 = auStack_290;
    uVar8 = 0x80000001;
    uVar5 = 0x80000001;
    uVar6 = 0x80000001;
    local_9c8 = 0x80000001;
    local_9cc = 0x80000001;
    goto LAB_00956dbc;
  case 1:
    FUN_01bed4e2(auStack_3b0,param_3,0x11c);
    local_9c4 = 0x80000001;
    puVar1 = auStack_4f0;
    uVar5 = *(undefined4 *)(param_3 + 0x11c);
    uVar8 = 0x80000001;
    local_9c8 = 0x80000001;
    local_9cc = 0x80000001;
    goto LAB_00956db4;
  case 2:
    FUN_01bed4e2(auStack_280,param_3,0x11c);
    local_9c4 = 0x80000001;
    puVar1 = auStack_3c0;
    uVar6 = *(undefined4 *)(param_3 + 0x11c);
    uVar8 = 0x80000001;
    local_9c8 = 0x80000001;
    uVar5 = 0x80000001;
    local_9cc = 0x80000001;
    goto LAB_00956db8;
  case 3:
    FUN_01bed4e2(auStack_4e0,param_3,0x11c);
    local_9c4 = 0x80000001;
    puVar1 = auStack_620;
    uVar8 = *(undefined4 *)(param_3 + 0x11c);
    local_9c8 = 0x80000001;
    local_9cc = 0x80000001;
    goto LAB_00956db0;
  case 4:
    FUN_01bed4e2(auStack_610,param_3,0x11c);
    local_9c4 = 0x80000001;
    local_9cc = *(undefined4 *)(param_3 + 0x11c);
    puVar1 = auStack_750;
    local_9c8 = 0x80000001;
    goto LAB_00956dac;
  case 5:
    FUN_01bed4e2(auStack_740,param_3,0x11c);
    local_9c4 = 0x80000001;
    local_9c8 = *(undefined4 *)(param_3 + 0x11c);
    puVar1 = auStack_880;
    break;
  case 6:
    FUN_01bed4e2(auStack_870,param_3,0x11c);
    local_9c8 = 0x80000001;
    local_9c4 = *(undefined4 *)(param_3 + 0x11c);
    puVar1 = auStack_9b0;
    break;
  case 7:
    FUN_01bed4e2(auStack_9a0,param_3,0x11c);
    local_9c4 = 0x80000001;
    puVar1 = &local_9c0;
    uVar9 = *(undefined4 *)(param_3 + 0x11c);
    uVar8 = 0x80000001;
    local_9c8 = 0x80000001;
    uVar5 = 0x80000001;
    local_9cc = 0x80000001;
    uVar6 = 0x80000001;
    uVar7 = 0x80000001;
    goto LAB_00956dc0;
  }
  local_9cc = 0x80000001;
LAB_00956dac:
  uVar8 = 0x80000001;
LAB_00956db0:
  uVar5 = 0x80000001;
LAB_00956db4:
  uVar6 = 0x80000001;
LAB_00956db8:
  uVar7 = 0x80000001;
LAB_00956dbc:
  uVar9 = 0x80000001;
LAB_00956dc0:
  uVar2 = *(undefined4 *)(param_3 + 0x124);
  uVar3 = *(undefined4 *)(param_3 + 0x128);
  uVar4 = *(undefined4 *)(param_3 + 300);
  *puVar1 = *(undefined4 *)(param_3 + 0x120);
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  *param_1 = 0;
  FUN_01bed4e2(param_1 + 1,auStack_160,0x138);
  param_1[0x4f] = uVar7;
  FUN_01bed4e2(param_1 + 0x50,auStack_290,300);
  param_1[0x9b] = uVar6;
  FUN_01bed4e2(param_1 + 0x9c,auStack_3c0,300);
  param_1[0xe7] = uVar5;
  FUN_01bed4e2(param_1 + 0xe8,auStack_4f0,300);
  param_1[0x133] = uVar8;
  FUN_01bed4e2(param_1 + 0x134,auStack_620,300);
  param_1[0x17f] = local_9cc;
  FUN_01bed4e2(param_1 + 0x180,auStack_750,300);
  param_1[0x1cb] = local_9c8;
  FUN_01bed4e2(param_1 + 0x1cc,auStack_880,300);
  param_1[0x217] = local_9c4;
  FUN_01bed4e2(param_1 + 0x218,auStack_9b0,300);
  param_1[0x263] = uVar9;
  param_1[0x264] = local_9c0;
  param_1[0x265] = uStack_9bc;
  param_1[0x266] = uStack_9b8;
  param_1[0x267] = uStack_9b4;
  param_1[0x271] = 0x80000000;
  param_1[0x26e] = 0x80000000;
  param_1[0x26b] = 0x80000000;
  param_1[0x268] = 0x80000000;
  return;
}

