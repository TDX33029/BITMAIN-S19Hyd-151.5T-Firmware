// FUN_018dbddc @ 018dbddc size=400 calls_out=5 calls_in=1
// strings: 

void FUN_018dbddc(undefined1 *param_1,int param_2,int param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 *local_b0;
  code *local_ac;
  undefined *local_a8;
  undefined4 local_a4;
  undefined *local_a0;
  undefined4 local_9c;
  undefined *local_98;
  undefined2 local_2c;
  
  if (param_5 == 0) {
    local_a8 = (undefined *)0x80000000;
  }
  else {
    FUN_0193a93c(&local_a8,param_5,param_6);
  }
  piVar2 = (int *)(param_2 + 0x80);
  if (*piVar2 != -0x80000000) {
    FUN_0134bd64(*piVar2,*(undefined4 *)(param_2 + 0x84));
  }
  *piVar2 = (int)local_a8;
  *(undefined4 *)(param_2 + 0x84) = local_a4;
  *(undefined **)(param_2 + 0x88) = local_a0;
  iVar3 = *piVar2;
  if (iVar3 == -0x80000000) {
LAB_018dbe48:
    uVar4 = 0x14;
    if (3 < DAT_01d51b00) {
      local_b4 = *(undefined4 *)(param_2 + 0x88);
      local_ac = FUN_018dc200;
      local_b8 = 0;
      if (iVar3 != -0x80000000) {
        local_b8 = *(undefined4 *)(param_2 + 0x84);
      }
      local_9c = 0x12;
      local_a4 = 0x12;
      local_98 = &DAT_01d23190;
      local_a0 = &DAT_00520ced;
      local_a8 = &DAT_00520ced;
      local_b0 = (undefined1 *)&local_b8;
      FUN_0193b350(&DAT_005883e6,&local_b0,4,&local_a8);
    }
  }
  else {
    if (param_4 != 0) {
      uVar6 = *(undefined4 *)(param_2 + 0x84);
      iVar7 = *(int *)(param_2 + 0x88);
      puVar5 = (undefined4 *)(param_3 + 4);
      param_4 = param_4 * 0xc;
      do {
        if ((puVar5[1] == iVar7) && (iVar1 = thunk_FUN_01bed842(*puVar5,uVar6,iVar7), iVar1 == 0))
        goto LAB_018dbe48;
        puVar5 = puVar5 + 3;
        param_4 = param_4 + -0xc;
      } while (param_4 != 0);
    }
    local_2c = 4;
    local_a8 = (undefined *)0x80000000;
    local_a4 = 0xd0001;
    FUN_018e077c(param_2,&local_a8,*(char *)(param_2 + 0x28) == '\x02');
    uVar4 = 8;
    param_1[1] = 0x30;
    *(undefined1 *)(param_2 + 0xb1) = 1;
  }
  *param_1 = uVar4;
  return;
}

