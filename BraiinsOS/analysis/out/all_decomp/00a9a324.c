// FUN_00a9a324 @ 00a9a324 size=1568 calls_out=14 calls_in=2
// strings: `Extensions` tracks values by type | a Display implementation returned an error unexpectedly

void FUN_00a9a324(undefined4 *param_1,code *param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int *piVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  int *piVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int *piVar16;
  int *piVar15;
  undefined1 *local_11c;
  undefined4 local_110;
  undefined4 *local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  int local_100;
  undefined2 *local_fc;
  undefined4 local_f8;
  int *local_f0;
  undefined *local_ec;
  undefined2 *local_e8;
  undefined2 *local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 *local_d4;
  int local_d0;
  undefined1 *local_cc;
  undefined4 local_c8;
  undefined4 local_bc;
  undefined1 local_b4;
  undefined1 local_b0;
  undefined1 local_ac;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined1 local_a2;
  undefined1 local_9e;
  undefined2 local_9a;
  undefined1 local_98;
  undefined1 local_94;
  undefined1 local_90;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined1 local_86;
  undefined1 local_82;
  undefined2 local_7e;
  undefined1 local_7c;
  undefined1 local_78;
  undefined1 local_74;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6a;
  undefined1 local_66;
  undefined2 local_62;
  undefined1 local_60;
  undefined1 local_5c;
  undefined1 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined1 local_4e;
  undefined1 local_4a;
  undefined2 local_46;
  undefined1 local_44;
  undefined1 local_36;
  undefined2 local_35;
  undefined1 local_33;
  undefined1 auStack_29 [5];
  
  FUN_00fab1e0(&local_f0,param_5,param_6);
  puVar3 = local_e8;
  puVar2 = local_ec;
  if (local_f0 == (int *)&DAT_00000001) {
    piVar11 = *(int **)(param_3 + 0x78);
    iVar9 = *(int *)(param_3 + 0x7c) << 4;
    uVar4 = 0xffffffff;
    do {
      if (iVar9 == 0) {
        puVar13 = (undefined4 *)0x0;
        goto LAB_00a9a504;
      }
      iVar12 = *piVar11;
      piVar15 = piVar11 + 1;
      piVar16 = piVar11 + 2;
      iVar9 = iVar9 + -0x10;
      piVar1 = piVar11 + 3;
      uVar4 = uVar4 + 1;
      piVar11 = piVar11 + 4;
    } while ((iVar12 != -0x7e2dea42 || *piVar16 != -0x2f8246a2) ||
             (*piVar15 != 0x4c65521b || *piVar1 != 0x76f4a2ad));
    if (*(uint *)(param_3 + 0x88) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar4,*(uint *)(param_3 + 0x88),&DAT_01880824);
    }
    piVar11 = (int *)(*(int *)(param_3 + 0x84) + uVar4 * 0x18);
    iVar9 = piVar11[1];
    puVar13 = (undefined4 *)(*piVar11 + (*(int *)(iVar9 + 8) - 1U & 0xfffffff8) + 8);
    (**(code **)(iVar9 + 0xc))(&local_f0,puVar13);
    if ((local_f0 != (int *)0x81d215be || local_e8 != (undefined2 *)0xd07db95e) ||
        (local_ec != (undefined *)0x4c65521b || local_e4 != (undefined2 *)0x76f4a2ad)) {
      puVar13 = (undefined4 *)0x0;
    }
    if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
    }
LAB_00a9a504:
    local_10c = &DAT_0035dc52;
    if (puVar13 != (undefined4 *)0x0) {
      local_10c = puVar13;
    }
    local_108 = 0;
    local_110 = param_3;
    FUN_00fa04ec(&local_100,&local_110,4,0);
    local_33 = 0xb;
    local_f0 = (int *)0x2;
    local_35 = 0x202;
    local_4a = 3;
    local_4e = 3;
    local_52 = 3;
    local_58 = 3;
    local_5c = 3;
    local_60 = 3;
    local_66 = 3;
    local_6a = 3;
    local_6e = 3;
    local_74 = 3;
    local_78 = 3;
    local_7c = 3;
    local_82 = 3;
    local_86 = 3;
    local_8a = 3;
    local_90 = 3;
    local_94 = 3;
    local_98 = 3;
    local_9e = 3;
    local_a2 = 3;
    local_a6 = 3;
    local_ac = 3;
    local_b0 = 3;
    local_b4 = 3;
    local_c8 = 0x80000001;
    local_cc = (undefined1 *)0x0;
    local_d0 = 4;
    local_d4 = (undefined1 *)0x0;
    local_d8 = 0;
    local_dc = 1;
    local_e0 = 0;
    local_bc = 0;
    local_44 = 4;
    local_46 = 0;
    local_54 = 0;
    local_62 = 0;
    local_70 = 0;
    local_7e = 0;
    local_8c = 0;
    local_9a = 0;
    local_a8 = 0;
    local_36 = 0;
    iVar9 = thunk_FUN_016d4a50(0xc0);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc0);
    }
    FUN_016dd1aa(iVar9,&local_f0,0xc0);
    FUN_00bdd4d8(iVar9,param_3);
    if (local_100 != -0x80000000) {
      local_ec = (undefined *)local_100;
      local_e8 = local_fc;
      local_e4 = (undefined2 *)local_f8;
      local_f0 = (int *)CONCAT31(local_f0._1_3_,4);
      FUN_00f959b8(iVar9,0xf,&local_f0);
    }
    param_1[1] = iVar9;
    *param_1 = 1;
    return;
  }
  (*param_2)(&local_110,local_ec,local_e8);
  if ((char)local_110 != '\x01') {
    *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_104,local_108);
    *param_1 = 0;
    return;
  }
  if (param_4 == 0) {
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar6 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar6 + 1) = 0x2e;
    *puVar6 = 0x2e2e;
    uVar5 = 3;
    iVar9 = 3;
  }
  else {
    local_f8 = 0;
    local_ec = &DAT_0186decc;
    local_f0 = &local_100;
    local_100 = 0;
    local_e4 = (undefined2 *)0x0;
    local_fc = (undefined2 *)&DAT_00000001;
    local_e8 = (undefined2 *)&DAT_60000020;
    iVar9 = FUN_00f9d654(param_4,&local_f0);
    if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,auStack_29,
                   &DAT_0186def4,&DAT_018af130);
    }
    uVar5 = local_f8;
    iVar9 = local_100;
    puVar6 = local_fc;
  }
  if ((int)puVar3 < 0) {
    uVar5 = 0;
LAB_00a9a4f0:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar5,puVar3);
  }
  if (puVar3 == (undefined2 *)0x0) {
    iVar12 = 1;
    local_11c = (undefined1 *)0x0;
  }
  else {
    iVar12 = thunk_FUN_016d4a50(puVar3);
    if (iVar12 == 0) {
      uVar5 = 1;
      goto LAB_00a9a4f0;
    }
    local_11c = (undefined1 *)puVar3;
  }
  FUN_016dd1aa(iVar12,puVar2,puVar3);
  puVar7 = (undefined1 *)thunk_FUN_016d4a50(1);
  if (puVar7 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(1,1);
  }
  *puVar7 = local_110._1_1_;
  local_d0 = 4;
  local_33 = 4;
  local_44 = 4;
  local_f0 = (int *)0x2;
  local_cc = (undefined1 *)0x0;
  local_d4 = (undefined1 *)0x0;
  local_d8 = 0;
  local_e0 = 0;
  local_bc = 0;
  local_46 = 0;
  local_4a = 3;
  local_4e = 3;
  local_52 = 3;
  local_54 = 0;
  local_58 = 3;
  local_5c = 3;
  local_60 = 3;
  local_62 = 0;
  local_66 = 3;
  local_6a = 3;
  local_6e = 3;
  local_70 = 0;
  local_74 = 3;
  local_78 = 3;
  local_7c = 3;
  local_7e = 0;
  local_82 = 3;
  local_86 = 3;
  local_8a = 3;
  local_8c = 0;
  local_90 = 3;
  local_94 = 3;
  local_98 = 3;
  local_9a = 0;
  local_9e = 3;
  local_a2 = 3;
  local_a6 = 3;
  local_a8 = 0;
  local_36 = 0;
  local_ac = 3;
  local_b0 = 3;
  local_b4 = 3;
  local_dc = 1;
  local_35 = 0x202;
  local_c8 = 0x80000001;
  iVar8 = thunk_FUN_016d4a50(0xc0);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc0);
  }
  FUN_016dd1aa(iVar8,&local_f0,0xc0);
  iVar14 = *(int *)(iVar8 + 0x34);
  if (iVar14 != 0) {
    puVar13 = *(undefined4 **)(iVar8 + 0x38);
    pcVar10 = (code *)*puVar13;
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(iVar14);
    }
    if (puVar13[1] != 0) {
      thunk_FUN_016d3fb4(iVar14);
    }
  }
  local_dc = CONCAT31(local_dc._1_3_,5);
  local_d4 = local_11c;
  local_d8 = CONCAT31(local_d8._1_3_,2);
  local_ec = (undefined *)CONCAT31(local_ec._1_3_,2);
  *(undefined1 **)(iVar8 + 0x34) = puVar7;
  *(undefined **)(iVar8 + 0x38) = &DAT_0186d7c8;
  local_cc = (undefined1 *)puVar3;
  local_f0 = (int *)CONCAT31(local_f0._1_3_,1);
  local_e8 = (undefined2 *)iVar9;
  local_e4 = puVar6;
  local_e0 = uVar5;
  local_d0 = iVar12;
  uVar5 = FUN_00f96218(iVar8,&local_f0);
  FUN_00bdd4d8(uVar5,param_3);
  param_1[1] = iVar8;
  *param_1 = 1;
  return;
}

