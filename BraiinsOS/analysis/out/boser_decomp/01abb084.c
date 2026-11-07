// FUN_01abb084 @ 01abb084 size=760 calls_out=4 calls_in=7
// strings: 

void FUN_01abb084(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined2 local_78;
  undefined1 local_76;
  undefined4 local_75;
  undefined2 local_71;
  undefined4 local_6f;
  undefined4 local_6b;
  undefined4 *local_64;
  code *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined4 local_4a;
  undefined3 uStack_46;
  undefined4 local_43;
  undefined4 local_3f;
  undefined4 *local_38;
  code *local_34;
  undefined4 **local_30;
  code *local_2c;
  undefined4 *local_28;
  undefined1 *local_24;
  
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    return;
  }
  local_98 = param_3;
  local_94 = param_4;
  uVar5 = FUN_01aa9a6c(param_2);
  iVar4 = (int)(uVar5 >> 0x20);
  piVar2 = (int *)uVar5;
  if ((0x3ffffffff < uVar5) && (*piVar2 == 0x2e676f6c)) {
    return;
  }
  if (*(char *)(param_1 + 3) == '\0') {
    uVar1 = (**(code **)(param_1[1] + 0x14))(*param_1,&DAT_005319c3,3);
    *(undefined1 *)((int)param_1 + 0xd) = uVar1;
  }
  else {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (iVar4 == 7) {
    iVar3 = thunk_FUN_01bed842(piVar2,&DAT_005325f1,7);
    if (iVar3 == 0) {
      local_60 = FUN_01abad78;
      local_64 = &local_90;
      local_90 = param_3;
      local_8c._0_4_ = (short *)param_4;
      uVar1 = (**(code **)(param_1[1] + 0x14))(*param_1,&DAT_00590e5f,&local_64);
      goto LAB_01abb350;
    }
    if ((short)*piVar2 != 0x2372) goto LAB_01abb160;
    local_76 = *(undefined1 *)(param_1 + 2);
LAB_01abb270:
    if (*(char *)((int)piVar2 + 2) < -0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(piVar2,iVar4,2,iVar4,&DAT_01d2f24c);
    }
LAB_01abb27c:
    local_8c._4_4_ = iVar4 + -2;
    local_8c._0_4_ = (short *)((int)piVar2 + 2);
    local_75 = 0;
    local_78 = 0;
    local_71 = 0;
    local_6b = 0x15;
    local_6f = 0x15;
    local_84 = 0x80000002;
    local_90 = 0x80000000;
    local_64 = (undefined4 *)0x80000000;
    local_38 = &local_90;
    local_4c = 0;
    local_4a = 0;
    uStack_46 = 0;
    local_28 = &local_98;
    local_3f = 0x15;
    local_43 = 0x15;
    local_30 = &local_64;
    local_58 = 0x80000002;
    local_5c = 1;
    local_60 = (code *)&DAT_00531a0c;
    local_24 = &LAB_01aeb5d0;
    local_2c = FUN_01645800;
    local_34 = FUN_01645800;
    local_4b = local_76;
    uVar1 = (**(code **)(param_1[1] + 0x14))(*param_1,&DAT_005a902e,&local_38);
  }
  else {
    if ((0x1ffffffff < uVar5) && ((short)*piVar2 == 0x2372)) {
      local_76 = *(undefined1 *)(param_1 + 2);
      if (0x2ffffffff < uVar5) goto LAB_01abb270;
      goto LAB_01abb27c;
    }
LAB_01abb160:
    local_76 = *(undefined1 *)(param_1 + 2);
    local_75 = 0;
    local_78 = 0;
    local_71 = 0;
    local_6b = 0x15;
    local_6f = 0x15;
    local_84 = 0x80000002;
    local_90 = 0x80000000;
    local_4c = 0;
    local_4a = 0;
    uStack_46 = 0;
    local_64 = (undefined4 *)0x80000000;
    local_30 = &local_64;
    local_3f = 0x15;
    local_43 = 0x15;
    local_58 = 0x80000002;
    local_5c = 1;
    local_60 = (code *)&DAT_00531a0c;
    local_24 = &LAB_01aeb5d0;
    local_28 = &local_98;
    local_2c = FUN_01645800;
    local_34 = FUN_01645800;
    local_38 = &local_90;
    local_4b = local_76;
    local_8c = uVar5;
    uVar1 = (**(code **)(param_1[1] + 0x14))(*param_1,&DAT_005a902e,&local_38);
  }
  FUN_01abb3d0(&local_64);
  FUN_01abb3d0(&local_90);
LAB_01abb350:
  *(undefined1 *)((int)param_1 + 0xd) = uVar1;
  return;
}

