// FUN_00f19918 @ 00f19918 size=952 calls_out=9 calls_in=1
// strings: `Extensions` tracks values by type | `Extensions` tracks values by type

uint * FUN_00f19918(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  undefined1 auStack_1c4 [120];
  int *local_14c;
  int local_148;
  int local_140;
  uint local_13c;
  uint local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  uint local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined1 *local_38;
  undefined4 *local_34;
  uint local_30;
  int iStack_2c;
  
  FUN_00a7a378(auStack_1c4);
  FUN_00f8a844(auStack_1c4,0);
  FUN_00f8a844(auStack_1c4,0);
  iVar5 = local_148 << 4;
  uVar2 = 0xffffffff;
  piVar3 = local_14c;
  do {
    if (iVar5 == 0) {
      puVar11 = (undefined4 *)0x0;
      goto LAB_00f19a50;
    }
    iVar7 = *piVar3;
    piVar13 = piVar3 + 1;
    iVar5 = iVar5 + -0x10;
    piVar1 = piVar3 + 2;
    piVar14 = piVar3 + 3;
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 4;
  } while ((iVar7 != -0x7e2dea42 || *piVar1 != -0x2f8246a2) ||
           (*piVar13 != 0x4c65521b || *piVar14 != 0x76f4a2ad));
  if (local_13c <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,local_13c,&DAT_01880824);
  }
  piVar3 = (int *)(local_140 + uVar2 * 0x18);
  iVar5 = piVar3[1];
  puVar11 = (undefined4 *)(*piVar3 + (*(int *)(iVar5 + 8) - 1U & 0xfffffff8) + 8);
  (**(code **)(iVar5 + 0xc))(&local_38,puVar11);
  if ((local_38 != (undefined1 *)0x81d215be || local_30 != -0x2f8246a2) ||
      (local_34 != (undefined4 *)0x4c65521b || iStack_2c != 0x76f4a2ad)) {
    puVar11 = (undefined4 *)0x0;
  }
  if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
  }
LAB_00f19a50:
  local_38 = auStack_1c4;
  local_30 = 0;
  local_34 = puVar11;
  if (puVar11 == (undefined4 *)0x0) {
    local_34 = &DAT_0035dc52;
  }
  FUN_00fa04ec(&local_58,&local_38,4,0);
  if (*param_1 == 2) {
    FUN_00eab44c(param_1,auStack_1c4);
    if (local_58 != 0x80000000 && local_58 != 0) {
      thunk_FUN_016d3fb4(local_54);
    }
  }
  else {
    local_48 = local_58;
    local_44 = local_54;
    uStack_40 = uStack_50;
    if ((*param_1 & 1) == 0) {
      puVar8 = param_1 + 1;
      uVar12 = *puVar8;
      uVar4 = param_1[2];
      local_148 = local_148 << 4;
      uVar6 = param_1[3];
      uVar2 = 0xffffffff;
      *puVar8 = 0;
      param_1[2] = 1;
      param_1[3] = 0;
      do {
        if (local_148 == 0) {
          puVar11 = (undefined4 *)0x0;
          goto LAB_00f19bf8;
        }
        iVar5 = *local_14c;
        piVar14 = local_14c + 1;
        local_148 = local_148 + -0x10;
        uVar2 = uVar2 + 1;
        piVar3 = local_14c + 2;
        piVar1 = local_14c + 3;
        local_14c = local_14c + 4;
      } while ((iVar5 != -0x7e2dea42 || *piVar3 != -0x2f8246a2) ||
               (*piVar14 != 0x4c65521b || *piVar1 != 0x76f4a2ad));
      if (local_13c <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar2,local_13c,&DAT_01880824);
      }
      piVar3 = (int *)(local_140 + uVar2 * 0x18);
      iVar5 = piVar3[1];
      puVar11 = (undefined4 *)(*piVar3 + (*(int *)(iVar5 + 8) - 1U & 0xfffffff8) + 8);
      (**(code **)(iVar5 + 0xc))(&local_38,puVar11);
      if ((local_38 != (undefined1 *)0x81d215be || local_30 != 0xd07db95e) ||
          (local_34 != (undefined4 *)0x4c65521b || iStack_2c != 0x76f4a2ad)) {
        puVar11 = (undefined4 *)0x0;
      }
      if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
      }
LAB_00f19bf8:
      uVar2 = local_48;
      puVar9 = (uint *)0x0;
      if (local_48 != 0x80000000) {
        puVar9 = &local_48;
      }
      puVar10 = &DAT_0035dc52;
      if (puVar11 != (undefined4 *)0x0) {
        puVar10 = puVar11;
      }
      FUN_00fa3ebc(&local_38,uVar4,uVar6,puVar10,auStack_1c4,puVar9);
      if (*puVar8 != 0) {
        thunk_FUN_016d3fb4(param_1[2]);
      }
      *param_1 = 1;
      *puVar8 = (uint)local_38;
      param_1[2] = (uint)local_34;
      param_1[3] = local_30;
      local_58 = uVar2;
      if (uVar12 != 0) {
        thunk_FUN_016d3fb4(uVar4);
      }
    }
    if ((local_58 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_44);
    }
    FUN_00eab44c(param_1,auStack_1c4);
  }
  FUN_00f192ac(auStack_1c4);
  return param_1;
}

