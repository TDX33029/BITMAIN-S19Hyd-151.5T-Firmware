// FUN_00f8e960 @ 00f8e960 size=948 calls_out=11 calls_in=2
// strings: `Extensions` tracks values by type

void FUN_00f8e960(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *local_90;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined4 *local_68;
  int *local_64;
  undefined4 *local_60;
  undefined4 **local_58;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  int local_40;
  undefined4 **local_38;
  undefined *local_34;
  int **local_30;
  undefined4 *local_2c;
  
  FUN_00f8edf8(&local_74);
  local_80 = local_70;
  local_7c = local_70 + local_6c * 8;
  local_78 = param_2;
  FUN_00f6f950(&local_58,&local_80);
  if (local_58 == (undefined4 **)0x80000000) {
    local_90 = (undefined4 *)0x0;
    puVar7 = (undefined4 *)0x0;
    piVar5 = (int *)&DAT_00000004;
  }
  else {
    piVar5 = (int *)thunk_FUN_016d4a50(0x30);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,0x30);
    }
    *piVar5 = (int)local_58;
    piVar5[1] = local_54;
    piVar5[2] = local_50;
    local_68 = (undefined4 *)0x4;
    iVar4 = 0xc;
    local_60 = (undefined4 *)0x1;
    local_48 = local_80;
    local_44 = local_7c;
    local_40 = local_78;
    local_64 = piVar5;
    while (puVar7 = local_60, FUN_00f6f950(&local_38,&local_48),
          local_38 != (undefined4 **)0x80000000) {
      if (puVar7 == local_68) {
        FUN_00f991dc(&local_68,puVar7,1,4,0xc);
        piVar5 = local_64;
      }
      local_60 = (undefined4 *)((int)puVar7 + 1);
      piVar3 = (int *)((int)piVar5 + iVar4);
      *piVar3 = (int)local_38;
      iVar4 = iVar4 + 0xc;
      piVar3[1] = (int)local_34;
      piVar3[2] = (int)local_30;
    }
    local_90 = local_68;
    puVar7 = local_60;
    piVar5 = local_64;
  }
  FUN_00f944a8(&local_38,piVar5,puVar7,&DAT_00414ce3,1);
  piVar3 = piVar5 + 1;
  local_58 = local_38;
  local_54 = (int)local_34;
  local_50 = (int)local_30;
  for (; puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)((int)puVar7 + -1)) {
    if (piVar3[-1] != 0) {
      thunk_FUN_016d3fb4(*piVar3);
    }
    piVar3 = piVar3 + 3;
  }
  if (local_90 != (undefined4 *)0x0) {
    thunk_FUN_016d3fb4(piVar5);
  }
  if (local_74 != 0) {
    thunk_FUN_016d3fb4(local_70);
  }
  piVar5 = *(int **)(param_2 + 0x78);
  iVar4 = *(int *)(param_2 + 0x7c) << 4;
  uVar2 = 0xffffffff;
  do {
    if (iVar4 == 0) {
      puVar7 = (undefined4 *)0x0;
      goto LAB_00f8ec38;
    }
    iVar6 = *piVar5;
    piVar8 = piVar5 + 1;
    iVar4 = iVar4 + -0x10;
    piVar3 = piVar5 + 2;
    piVar1 = piVar5 + 3;
    uVar2 = uVar2 + 1;
    piVar5 = piVar5 + 4;
  } while ((iVar6 != -0x7e2dea42 || *piVar3 != -0x2f8246a2) ||
           (*piVar8 != 0x4c65521b || *piVar1 != 0x76f4a2ad));
  if (*(uint *)(param_2 + 0x88) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,*(uint *)(param_2 + 0x88),&DAT_01880824);
  }
  piVar5 = (int *)(*(int *)(param_2 + 0x84) + uVar2 * 0x18);
  iVar4 = piVar5[1];
  puVar7 = (undefined4 *)(*piVar5 + (*(int *)(iVar4 + 8) - 1U & 0xfffffff8) + 8);
  (**(code **)(iVar4 + 0xc))(&local_38,puVar7);
  if ((local_38 != (undefined4 **)0x81d215be || local_30 != (int **)0xd07db95e) ||
      (local_34 != (undefined *)0x4c65521b || local_2c != (undefined4 *)0x76f4a2ad)) {
    puVar7 = (undefined4 *)0x0;
  }
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
  }
LAB_00f8ec38:
  local_2c = &DAT_006043a8;
  local_30 = (int **)&local_58;
  local_68 = &DAT_0035dc52;
  if (puVar7 != (undefined4 *)0x0) {
    local_68 = puVar7;
  }
  local_38 = &local_68;
  local_68 = local_68 + 0xe;
  local_40 = 0;
  local_44 = 1;
  local_48 = 0;
  local_34 = &DAT_00fa17d8;
  iVar4 = FUN_00fa948c(&local_48,&DAT_018804bc,&DAT_0035dc35,&local_38);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_74,&DAT_0188054c,&DAT_018804d4);
  }
  *param_1 = local_48;
  param_1[1] = local_44;
  param_1[2] = local_40;
  if (local_58 != (undefined4 **)0x0) {
    thunk_FUN_016d3fb4(local_54);
  }
  return;
}

