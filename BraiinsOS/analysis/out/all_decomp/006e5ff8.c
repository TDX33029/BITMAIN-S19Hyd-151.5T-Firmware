// FUN_006e5ff8 @ 006e5ff8 size=864 calls_out=13 calls_in=1
// strings: `Extensions` tracks values by type | a Display implementation returned an error unexpectedly

void FUN_006e5ff8(undefined4 *param_1,code *param_2,undefined4 *param_3,int param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar12;
  int *piVar11;
  int *piVar10;
  char local_58;
  undefined1 local_57;
  undefined8 local_50;
  undefined4 local_44;
  undefined2 *local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  int local_2c;
  undefined1 uStack_25;
  
  FUN_00fab1e0(&local_38,param_5,param_6);
  puVar1 = local_30;
  puVar8 = local_34;
  if (local_38 == (undefined4 *)&DAT_00000001) {
    piVar6 = (int *)param_3[0x1e];
    iVar5 = param_3[0x1f] << 4;
    uVar2 = 0xffffffff;
    do {
      if (iVar5 == 0) {
        puVar8 = (undefined4 *)0x0;
        goto LAB_006e61b4;
      }
      iVar7 = *piVar6;
      piVar10 = piVar6 + 1;
      piVar11 = piVar6 + 2;
      piVar12 = piVar6 + 3;
      piVar6 = piVar6 + 4;
      iVar5 = iVar5 + -0x10;
      uVar2 = uVar2 + 1;
    } while ((iVar7 != -0x7e2dea42 || *piVar11 != -0x2f8246a2) ||
             (*piVar10 != 0x4c65521b || *piVar12 != 0x76f4a2ad));
    if ((uint)param_3[0x22] <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar2,param_3[0x22],&DAT_01880824);
    }
    piVar6 = (int *)(param_3[0x21] + uVar2 * 0x18);
    iVar5 = piVar6[1];
    puVar8 = (undefined4 *)(*piVar6 + (*(int *)(iVar5 + 8) - 1U & 0xfffffff8) + 8);
    (**(code **)(iVar5 + 0xc))(&local_38,puVar8);
    if ((local_38 != (undefined4 *)0x81d215be || local_30 != (undefined4 *)0xd07db95e) ||
        (local_34 != (undefined4 *)0x4c65521b || local_2c != 0x76f4a2ad)) {
      puVar8 = (undefined4 *)0x0;
    }
    if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
    }
LAB_006e61b4:
    local_30 = (undefined4 *)0x0;
    local_34 = &DAT_0035dc52;
    if (puVar8 != (undefined4 *)0x0) {
      local_34 = puVar8;
    }
    local_38 = param_3;
    FUN_00fa04ec(&local_58,&local_38,4,0);
    uVar3 = FUN_0074c7b4(param_3,&local_58);
    param_1[1] = uVar3;
    *param_1 = 1;
    return;
  }
  (*param_2)(&local_58,local_34,local_30);
  if (local_58 != '\x01') {
    *(undefined8 *)(param_1 + 2) = local_50;
    *param_1 = 0;
    return;
  }
  if (param_4 == 0) {
    uVar3 = 3;
    local_40 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_40 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(local_40 + 1) = 0x2e;
    local_44 = 3;
    *local_40 = 0x2e2e;
  }
  else {
    local_3c = 0;
    local_34 = (undefined4 *)&DAT_01858e88;
    local_38 = &local_44;
    local_44 = 0;
    local_2c = 0;
    local_40 = (undefined2 *)&DAT_00000001;
    local_30 = (undefined4 *)&DAT_60000020;
    iVar5 = FUN_00f9d654(param_4,&local_38);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                   &DAT_01858ea0,&DAT_018af130);
    }
    uVar3 = local_3c;
  }
  local_3c = uVar3;
  if ((int)puVar1 < 0) {
    uVar3 = 0;
LAB_006e6268:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar3,puVar1);
  }
  if (puVar1 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
    iVar5 = 1;
  }
  else {
    iVar5 = thunk_FUN_016d4a50(puVar1);
    if (iVar5 == 0) {
      uVar3 = 1;
      goto LAB_006e6268;
    }
    puVar9 = puVar1;
  }
  FUN_016dd1aa(iVar5,puVar8,puVar1);
  local_38 = puVar9;
  local_34 = (undefined4 *)iVar5;
  puVar4 = (undefined1 *)thunk_FUN_016d4a50(1);
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(1,1);
  }
  *puVar4 = local_57;
  uVar3 = FUN_0074d6e4(&local_44,&local_38,puVar4,&DAT_0185a5e8);
  uVar3 = FUN_0074ca74(uVar3,param_3);
  param_1[1] = uVar3;
  *param_1 = 1;
  return;
}

