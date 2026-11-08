// FUN_01ab27f0 @ 01ab27f0 size=608 calls_out=2 calls_in=0
// strings: 

void FUN_01ab27f0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int **ppiVar3;
  undefined1 *puVar4;
  undefined4 *local_44;
  undefined1 local_40;
  undefined1 local_3f;
  undefined **local_3c;
  undefined **local_38;
  undefined1 *local_34;
  int **local_30;
  code *local_2c;
  undefined *local_28;
  int **local_24;
  int *local_20;
  int **local_1c;
  
  param_1 = (int *)*param_1;
  local_40 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00570bb8,8);
  local_3f = 0;
  local_44 = param_2;
  uVar1 = FUN_01302c38(&local_44,&DAT_0056ee18,4,param_1 + 3,&LAB_018a0040);
  uVar1 = FUN_01302c38(uVar1,&DAT_00531484,6,param_1 + 5,&LAB_018a0040);
  FUN_01302c38(uVar1,&DAT_0053148a,5,param_1 + 2,FUN_01aac938);
  if ((undefined **)param_1[0xb] != (undefined **)0x0) {
    local_34 = (undefined1 *)param_1[0xc];
    local_38 = (undefined **)param_1[0xb];
    FUN_01302c38(&local_44,&DAT_0053148f,0xb,&local_38,&LAB_018a0040);
  }
  puVar2 = (undefined *)param_1[0xd];
  if (puVar2 == (undefined *)0x0) {
    if (*param_1 == 0) goto LAB_01ab29bc;
    puVar2 = &DAT_0056e3f8;
    puVar4 = &LAB_01a86300;
    ppiVar3 = (int **)&local_38;
    local_38 = (undefined **)param_1[1];
LAB_01ab29b4:
    uVar1 = 4;
  }
  else {
    local_24 = (int **)param_1[0xe];
    local_28 = puVar2;
    if (*param_1 == 0) {
      local_1c = (int **)&local_38;
      local_34 = &LAB_018a13b8;
      puVar2 = &DAT_0056edac;
      ppiVar3 = &local_20;
      local_20 = (int *)&DAT_00590e5f;
      puVar4 = &LAB_01307e7c;
      local_38 = &local_28;
      goto LAB_01ab29b4;
    }
    local_1c = (int **)&local_38;
    local_30 = (int **)&local_3c;
    local_38 = &local_28;
    puVar2 = &DAT_005704f8;
    local_20 = (int *)&DAT_005bc69d;
    ppiVar3 = &local_20;
    local_2c = FUN_012fd02c;
    uVar1 = 8;
    local_34 = &LAB_018a13b8;
    puVar4 = &LAB_01307e7c;
    local_3c = (undefined **)param_1[1];
  }
  FUN_01302c38(&local_44,puVar2,uVar1,ppiVar3,puVar4);
LAB_01ab29bc:
  local_24 = &local_20;
  local_1c = (int **)FUN_01aace54;
  local_20 = param_1 + 7;
  local_28 = &DAT_00590e5f;
  uVar1 = FUN_01302c38(&local_44,&DAT_00531558,6,&local_28,&LAB_01307e7c);
  local_38 = (undefined **)param_1[9];
  local_34 = (undefined1 *)param_1[10];
  uVar1 = FUN_01302c38(uVar1,&DAT_00570600,8,&local_38,FUN_01aac074);
  FUN_01302c38(uVar1,&DAT_0056f2ec,4,param_1 + 0xf,FUN_01aac7d8);
  FUN_01302e1c();
  return;
}

