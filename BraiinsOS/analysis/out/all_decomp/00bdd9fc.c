// FUN_00bdd9fc @ 00bdd9fc size=1132 calls_out=15 calls_in=2
// strings: `Extensions` tracks values by type | a Display implementation returned an error unexpectedly

longlong FUN_00bdd9fc(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint uVar13;
  undefined1 uVar14;
  int *piVar16;
  int *piVar15;
  int *local_78;
  undefined4 *local_74;
  int *local_70;
  int local_6c;
  int local_34;
  int *local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  FUN_00fab1e0(&local_78,param_3,param_4);
  piVar7 = local_70;
  puVar11 = local_74;
  if (local_78 == (int *)&DAT_00000001) {
    piVar7 = (int *)param_1[0x1e];
    iVar4 = param_1[0x1f] << 4;
    uVar1 = 0xffffffff;
    do {
      if (iVar4 == 0) {
        puVar11 = (undefined4 *)0x0;
        goto LAB_00bddba4;
      }
      iVar9 = *piVar7;
      piVar12 = piVar7 + 1;
      piVar15 = piVar7 + 2;
      piVar16 = piVar7 + 3;
      piVar7 = piVar7 + 4;
      iVar4 = iVar4 + -0x10;
      uVar1 = uVar1 + 1;
    } while ((iVar9 != -0x7e2dea42 || *piVar15 != -0x2f8246a2) ||
             (*piVar12 != 0x4c65521b || *piVar16 != 0x76f4a2ad));
    if ((uint)param_1[0x22] <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar1,param_1[0x22],&DAT_01880824);
    }
    piVar7 = (int *)(param_1[0x21] + uVar1 * 0x18);
    iVar4 = piVar7[1];
    puVar11 = (undefined4 *)(*piVar7 + (*(int *)(iVar4 + 8) - 1U & 0xfffffff8) + 8);
    (**(code **)(iVar4 + 0xc))(&local_78,puVar11);
    if ((local_78 != (int *)0x81d215be || local_70 != (int *)0xd07db95e) ||
        (local_74 != (undefined4 *)0x4c65521b || local_6c != 0x76f4a2ad)) {
      puVar11 = (undefined4 *)0x0;
    }
    if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
    }
LAB_00bddba4:
    local_74 = &DAT_0035dc52;
    if (puVar11 != (undefined4 *)0x0) {
      local_74 = puVar11;
    }
    local_70 = (int *)0x0;
    local_78 = param_1;
    FUN_00fa04ec(&local_34,&local_78,4,0);
    uVar2 = FUN_00bdd0ac(param_1,&local_34);
    return CONCAT44(uVar2,1);
  }
  FUN_00fb6cfc(&local_78,local_74,local_70,"0x",2);
  do {
    FUN_00bd41dc(&local_34,&local_78);
  } while (local_34 == 0);
  if (local_34 != 1) {
    local_30 = piVar7;
  }
  uVar1 = (int)piVar7 - (int)local_30;
  if (uVar1 == 0) {
    uVar14 = 0;
joined_r0x00bddc00:
    if (param_2 != 0) goto LAB_00bddcc4;
LAB_00bddd3c:
    uVar2 = 3;
    local_30 = (int *)thunk_FUN_016d4a50(3);
    if (local_30 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)((int)local_30 + 2) = 0x2e;
    local_34 = 3;
    *(undefined2 *)local_30 = 0x2e2e;
  }
  else {
    pbVar5 = (byte *)((int)puVar11 + (int)local_30);
    if (uVar1 != 1) {
      bVar6 = *pbVar5;
LAB_00bddc0c:
      uVar13 = 0;
      if (bVar6 == 0x2b) {
        pbVar5 = pbVar5 + 1;
        uVar1 = uVar1 - 1;
      }
      if (uVar1 < 9) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          uVar10 = (uint)*pbVar5;
          uVar8 = uVar10 - 0x30;
          if (0x39 < uVar10) {
            uVar8 = (uVar10 - 0x41 & 0xffffffdf) + 10;
          }
          if (0xf < uVar8) goto LAB_00bddcbc;
          uVar13 = uVar8 | uVar13 << 4;
          pbVar5 = pbVar5 + 1;
        }
      }
      else {
        do {
          uVar10 = (uint)*pbVar5;
          uVar8 = uVar10 - 0x30;
          if (0xfffffff < uVar13) {
            if (0x39 < uVar10) {
              uVar8 = (uVar10 - 0x41 & 0xffffffde) + 10;
            }
            uVar14 = 1;
            if (uVar8 < 0x10) {
              uVar14 = 2;
            }
            goto joined_r0x00bddd38;
          }
          if (0x39 < uVar10) {
            uVar8 = (uVar10 - 0x41 & 0xffffffdf) + 10;
          }
          if (0xf < uVar8) {
            uVar14 = 1;
            goto joined_r0x00bddc00;
          }
          uVar13 = uVar8 | uVar13 << 4;
          pbVar5 = pbVar5 + 1;
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
      return (ulonglong)uVar13 << 0x20;
    }
    bVar6 = *pbVar5;
    if ((bVar6 != 0x2b) && (bVar6 != 0x2d)) goto LAB_00bddc0c;
LAB_00bddcbc:
    uVar14 = 1;
joined_r0x00bddd38:
    if (param_2 == 0) goto LAB_00bddd3c;
LAB_00bddcc4:
    local_2c = 0;
    local_34 = 0;
    local_6c = 0;
    local_30 = (int *)&DAT_00000001;
    local_70 = (int *)&DAT_60000020;
    local_74 = (undefined4 *)&DAT_018725a4;
    local_78 = &local_34;
    iVar4 = FUN_00f9d654(param_2,&local_78);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                   &DAT_018725bc,&DAT_018af130);
    }
    uVar2 = local_2c;
  }
  local_2c = uVar2;
  if ((int)piVar7 < 0) {
    uVar2 = 0;
LAB_00bddd80:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar2,piVar7);
  }
  if (piVar7 == (int *)0x0) {
    piVar12 = (int *)0x0;
    iVar4 = 1;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(piVar7);
    if (iVar4 == 0) {
      uVar2 = 1;
      goto LAB_00bddd80;
    }
    piVar12 = piVar7;
  }
  FUN_016dd1aa(iVar4,puVar11,piVar7);
  local_78 = piVar12;
  local_74 = (undefined4 *)iVar4;
  puVar3 = (undefined1 *)thunk_FUN_016d4a50(1);
  if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(1,1);
  }
  *puVar3 = uVar14;
  uVar2 = FUN_00bdd250(&local_34,&local_78,puVar3,&DAT_01873520);
  FUN_00bdd4d8(uVar2,param_1);
  return CONCAT44(uVar2,1);
}

