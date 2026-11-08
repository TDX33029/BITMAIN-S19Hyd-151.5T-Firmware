// FUN_011baa0c @ 011baa0c size=856 calls_out=7 calls_in=2
// strings: `len` greater than remaining

void FUN_011baa0c(undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iStack_7c;
  int iStack_78;
  uint *local_74;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  uint local_58;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  uint *local_48;
  code *local_44;
  uint *local_40;
  code *local_3c [7];
  
  uVar10 = param_2[3];
  if (uVar10 == 0) {
    puVar9 = (uint *)0x0;
  }
  else {
    uVar1 = *param_2;
    uVar6 = param_2[1];
    uVar11 = param_2[2];
    uVar12 = uVar11 - uVar1;
    if (uVar11 < uVar1) {
      uVar12 = uVar11;
    }
    puVar8 = (undefined4 *)(uVar6 + uVar12 * 0x10);
    if ((uint *)puVar8[2] == param_3) {
      local_5c = puVar8[1];
      local_58 = puVar8[2];
      local_60 = *puVar8;
      local_54 = puVar8[3];
      *puVar8 = &DAT_0187f9a4;
      puVar8[1] = local_5c + (int)param_3;
      puVar8[2] = 0;
      uVar4 = uVar11 + 1;
      piVar7 = (int *)(uVar6 + uVar11 * 0x10);
      local_48 = (uint *)*piVar7;
      uVar12 = uVar4 - uVar1;
      if (uVar4 < uVar1) {
        uVar12 = uVar4;
      }
      puVar8[3] = 0;
      local_44 = (code *)piVar7[1];
      local_40 = (uint *)piVar7[2];
      local_3c[0] = (code *)piVar7[3];
      param_2[2] = uVar12;
      param_2[3] = uVar10 - 1;
      if (local_48 != (uint *)0x0) {
        (*(code *)local_48[4])(local_3c,local_44,local_40);
      }
      *param_1 = local_60;
      param_1[1] = local_5c;
      param_1[2] = local_58;
      param_1[3] = local_54;
      return;
    }
    if (param_3 < (uint *)puVar8[2]) {
      if (param_3 == (uint *)0x0) {
        uVar5 = puVar8[1];
        param_1[2] = 0;
        *param_1 = &DAT_0187f9a4;
        param_1[1] = uVar5;
        param_1[3] = 0;
        return;
      }
      local_48 = param_3;
      (**(code **)*puVar8)(param_1,puVar8 + 3,puVar8[1]);
      iVar2 = puVar8[1];
      iVar3 = puVar8[2];
      param_1[2] = param_3;
      puVar8[1] = iVar2 + (int)param_3;
      puVar8[2] = iVar3 - (int)param_3;
      return;
    }
    uVar11 = param_2[2];
    uVar12 = 0;
    uVar6 = uVar1;
    if (uVar11 < uVar1) {
      uVar6 = 0;
    }
    uVar4 = uVar11 - uVar6;
    iVar2 = uVar10 - (uVar1 - uVar4);
    puVar9 = (uint *)0x0;
    if (uVar10 < uVar1 - uVar4 || iVar2 == 0) {
      uVar1 = uVar4 + uVar10;
    }
    else {
      uVar12 = iVar2 * 0x10;
    }
    if (uVar1 != uVar4) {
      iVar2 = uVar1 - uVar4;
      piVar7 = (int *)(param_2[1] + uVar11 * 0x10 + uVar6 * -0x10 + 8);
      do {
        iVar2 = iVar2 + -1;
        puVar9 = (uint *)(*piVar7 + (int)puVar9);
        piVar7 = piVar7 + 4;
      } while (iVar2 != 0);
    }
    if (uVar12 != 0) {
      uVar12 = uVar12 >> 4;
      piVar7 = (int *)(param_2[1] + 8);
      do {
        uVar12 = uVar12 - 1;
        puVar9 = (uint *)(*piVar7 + (int)puVar9);
        piVar7 = piVar7 + 4;
      } while (uVar12 != 0);
    }
  }
  if (puVar9 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_015be724("`len` greater than remaining",0x1c,&DAT_0188a130);
  }
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_3);
  }
  iStack_7c = 1;
  local_74 = (uint *)0x0;
  if ((param_3 != (uint *)0x0) &&
     (iStack_7c = thunk_FUN_016d4a50(param_3), local_74 = param_3, iStack_7c == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_3);
  }
  iStack_78 = 0;
  uVar10 = 0x20 - LZCOUNT((uint)local_74 >> 10);
  if (6 < uVar10) {
    uVar10 = 7;
  }
  local_70 = uVar10 << 2 | 1;
  if (puVar9 == param_3) {
    FUN_011bb8cc(&iStack_7c);
  }
  else {
    FUN_011bade8(&iStack_7c,param_2);
  }
  uVar10 = local_70;
  if ((local_70 & 1) == 0) {
    param_1[1] = iStack_7c;
    param_1[2] = iStack_78;
    param_1[3] = local_70;
    *param_1 = &DAT_018ad580;
    return;
  }
  local_64 = iStack_78 + (local_70 >> 5);
  local_68 = iStack_7c - (local_70 >> 5);
  local_6c = (int)local_74 + (local_70 >> 5);
  FUN_00f5ef18(&local_60,&local_6c);
  local_50 = uVar10 >> 5;
  if (local_58 < uVar10 >> 5) {
    local_40 = &local_4c;
    local_4c = local_58;
    local_3c[0] = FUN_007883b8;
    local_44 = FUN_007883b8;
    local_48 = &local_50;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00584155,&local_48,&DAT_018a6700);
  }
  *param_1 = local_60;
  param_1[1] = local_5c + local_50;
  param_1[2] = local_58 - local_50;
  param_1[3] = local_54;
  return;
}

