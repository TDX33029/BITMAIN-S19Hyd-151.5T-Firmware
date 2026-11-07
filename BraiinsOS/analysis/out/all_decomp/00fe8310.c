// FUN_00fe8310 @ 00fe8310 size=1792 calls_out=13 calls_in=1
// strings: expected conditional to be a backreference or at least an expression for when the condition is true

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00fe8310(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int **ppiVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  undefined1 *puVar11;
  int *piVar12;
  char *pcVar13;
  undefined4 uVar14;
  int *local_f8;
  int *local_f4;
  int *piStack_f0;
  int *piStack_ec;
  int *piStack_e8;
  int *local_e0;
  int *piStack_dc;
  int *piStack_d8;
  int *piStack_d4;
  int *piStack_d0;
  int *local_c8;
  int *local_c4;
  int *local_c0;
  int *local_bc;
  int *piStack_b8;
  int *local_b0;
  int *piStack_ac;
  int *piStack_a8;
  int *local_a4;
  int *piStack_a0;
  int *local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  int *local_84;
  int *piStack_80;
  int *local_78;
  int *local_74;
  int *piStack_70;
  int *piStack_6c;
  int *piStack_68;
  int *local_60;
  int *local_5c;
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_38;
  int *local_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  
  if (*(uint *)(param_2 + 0x14) <= param_3) {
    param_1[5] = param_3;
    *param_1 = 1;
    param_1[1] = 1;
    return;
  }
  uVar1 = (uint)*(byte *)(*(int *)(param_2 + 0x10) + param_3);
  switch(uVar1) {
  case 0x27:
    FUN_00fe8190(&local_98,param_2,param_3,&DAT_004144fe,1,"\')",2,1);
    local_e0 = local_90;
    piStack_dc = local_8c;
    piStack_d8 = local_88;
    piStack_d4 = local_84;
    piStack_d0 = piStack_80;
    goto joined_r0x00fe8434;
  default:
    if (uVar1 - 0x30 < 10) goto switchD_00fe8348_caseD_2b;
    FUN_00fe559c(&local_98,param_2);
    if (((uint)local_98 & 1) != 0) {
      param_1[1] = local_94;
      *param_1 = 1;
      param_1[2] = local_90;
      param_1[3] = local_8c;
      param_1[4] = local_88;
      param_1[5] = local_84;
      return;
    }
    local_b0 = local_90;
    piStack_ac = local_8c;
    piStack_a8 = local_88;
    local_a4 = local_84;
    piStack_a0 = piStack_80;
    local_c8 = local_90;
    local_c4 = local_8c;
    local_c0 = local_88;
    local_bc = local_84;
    piStack_b8 = piStack_80;
    FUN_00fe9760(&local_98,param_2);
    if (local_98 != (int *)&DAT_00000012) {
      param_1[1] = local_98;
      param_1[2] = local_94;
      *param_1 = 1;
      param_1[3] = local_90;
      param_1[4] = local_8c;
      param_1[5] = local_88;
      ppiVar2 = &local_c8;
      goto LAB_00fe85d0;
    }
    local_e0 = local_c8;
    piStack_dc = local_c4;
    piStack_d8 = local_c0;
    piStack_d4 = local_bc;
    piStack_d0 = piStack_b8;
    goto LAB_00fe8564;
  case 0x2b:
  case 0x2d:
switchD_00fe8348_caseD_2b:
    uVar3 = 0;
    pcVar13 = &DAT_00418e07;
    uVar14 = 1;
    pcVar9 = (char *)0x1;
    break;
  case 0x3c:
    pcVar9 = "<";
    pcVar13 = ">)";
    uVar14 = 2;
    uVar3 = 1;
  }
  FUN_00fe8190(&local_98,param_2,param_3,pcVar9,uVar3,pcVar13,uVar14,1);
  local_e0 = local_90;
  piStack_dc = local_8c;
  piStack_d8 = local_88;
  piStack_d4 = local_84;
  piStack_d0 = piStack_80;
joined_r0x00fe8434:
  local_b0 = local_e0;
  piStack_ac = piStack_dc;
  piStack_a8 = piStack_d8;
  local_a4 = piStack_d4;
  piStack_a0 = piStack_d0;
  local_90 = local_e0;
  local_8c = piStack_dc;
  local_88 = piStack_d8;
  local_84 = piStack_d4;
  piStack_80 = piStack_d0;
  if (((uint)local_98 & 1) != 0) {
    param_1[2] = local_e0;
    param_1[3] = piStack_dc;
    *param_1 = 1;
    param_1[1] = local_94;
    param_1[4] = piStack_d8;
    param_1[5] = piStack_d4;
    return;
  }
LAB_00fe8564:
  piVar4 = local_94;
  local_f8 = local_e0;
  local_f4 = piStack_dc;
  piStack_f0 = piStack_d8;
  piStack_ec = piStack_d4;
  piStack_e8 = piStack_d0;
  FUN_00fe559c(&local_98,param_2,local_94,param_4);
  piVar5 = local_88;
  piVar12 = local_94;
  piVar10 = local_f4;
  if (((uint)local_98 & 1) == 0) {
    local_b0 = local_90;
    piStack_ac = local_8c;
    piStack_a8 = local_88;
    local_a4 = local_84;
    piStack_a0 = piStack_80;
    local_c8 = local_90;
    local_c4 = local_8c;
    local_c0 = local_88;
    local_bc = local_84;
    piStack_b8 = piStack_80;
    if (local_94 == piVar4) {
      if (local_f8 == (int *)0x8000000a) {
        FUN_00fe9760(&local_98,param_2,piVar4);
        if (local_98 == (int *)&DAT_00000012) {
          param_1[1] = local_94;
          uVar3 = 0;
          iVar7 = 0xc;
          iVar8 = 8;
          piVar12 = (int *)&DAT_8000000f;
          piVar4 = piVar10;
        }
        else {
          param_1[3] = local_90;
          param_1[4] = local_8c;
          param_1[5] = local_88;
          uVar3 = 1;
          iVar7 = 8;
          iVar8 = 4;
          piVar12 = local_98;
          piVar4 = local_94;
        }
      }
      else {
        piVar12 = (int *)0x63;
        iVar7 = thunk_FUN_016d4a50(99);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,99);
        }
        FUN_016dd1aa(iVar7,
                     "expected conditional to be a backreference or at least an expression for when the condition is true"
                     ,99);
        param_1[3] = iVar7;
        param_1[1] = 0;
        param_1[2] = 99;
        uVar3 = 1;
        iVar7 = 0x14;
        iVar8 = 0x10;
      }
      piVar10 = local_c0;
      *(int **)((int)param_1 + iVar8) = piVar12;
      *(int **)((int)param_1 + iVar7) = piVar4;
      *param_1 = uVar3;
      if (local_c8 == (int *)0x80000005) {
        puVar11 = (undefined1 *)((int)local_bc + 1);
        piVar4 = local_c0;
        while (puVar11 = puVar11 + -1, puVar11 != (undefined1 *)0x0) {
          FUN_00ffd004(piVar4);
          piVar4 = piVar4 + 5;
        }
        if (local_c4 != (int *)0x0) {
          thunk_FUN_016d3fb4(piVar10);
        }
      }
      else {
        FUN_00fe5d20(&local_c8);
      }
    }
    else {
      local_60 = (int *)&DAT_80000000;
      if (local_90 == (int *)0x80000005) {
        local_48 = local_8c;
        local_44 = local_88;
        local_40 = local_84;
        if (local_84 == (int *)0x0) {
          local_84 = (int *)0x0;
LAB_00fe8a5c:
                    /* WARNING: Subroutine does not return */
          FUN_00602938(0,local_84,&DAT_01881978);
        }
        local_98 = (int *)local_88[1];
        local_94 = (int *)local_88[2];
        local_90 = (int *)local_88[3];
        local_8c = (int *)local_88[4];
        piVar10 = (int *)*local_88;
        FUN_016dd52c(local_88,local_88 + 5,(int)local_84 * 0x14 + -0x14);
        local_84 = (int *)((int)local_84 + -1);
        local_40 = local_84;
        if (piVar10 == (int *)&DAT_80000013) goto LAB_00fe8a5c;
        local_74 = local_98;
        piStack_70 = local_94;
        piStack_6c = local_90;
        piStack_68 = local_8c;
        local_78 = piVar10;
        if (local_84 == (int *)&DAT_00000001) {
          local_40 = (int *)0x0;
          local_98 = (int *)*piVar5;
          local_94 = (int *)piVar5[1];
          local_90 = (int *)piVar5[2];
          local_8c = (int *)piVar5[3];
          local_88 = (int *)piVar5[4];
          FUN_00fe5d20(&local_60);
          local_60 = local_98;
          local_5c = local_94;
          piStack_58 = local_90;
          piStack_54 = local_8c;
          piStack_50 = local_88;
          FUN_00fe8108(&local_48);
        }
        else {
          FUN_00fe5d20(&local_60);
          local_60 = (int *)0x80000005;
          local_5c = local_48;
          piStack_58 = local_44;
          piStack_54 = local_40;
        }
      }
      else {
        local_78 = local_90;
        local_74 = local_8c;
        piStack_70 = local_88;
        piStack_6c = local_84;
        piStack_68 = piStack_80;
      }
      piVar10 = local_f8;
      if (local_f8 == (int *)0x8000000a) {
        local_34 = local_f4;
        local_38 = (int *)&DAT_8000000f;
      }
      else {
        local_38 = local_e0;
        local_34 = piStack_dc;
        piStack_30 = piStack_d8;
        piStack_2c = piStack_d4;
        piStack_28 = piStack_d0;
      }
      FUN_00fe9760(&local_98,param_2,piVar12);
      piVar4 = local_94;
      if (local_98 == (int *)&DAT_00000012) {
        piVar12 = local_78;
        if (local_78 == (int *)&DAT_80000000) {
          piVar12 = local_60;
        }
        if (local_78 == (int *)&DAT_80000000 && piVar12 == (int *)0x80000000) {
          *param_1 = 0;
          param_1[1] = local_94;
          param_1[2] = local_38;
          param_1[3] = local_34;
          param_1[4] = piStack_30;
          param_1[5] = piStack_2c;
          param_1[6] = piStack_28;
          FUN_00fe5d20(&local_60);
          FUN_00fe5d20(&local_78);
        }
        else {
          piVar12 = (int *)thunk_FUN_016d4a50(0x14);
          if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x14);
          }
          *piVar12 = (int)local_38;
          piVar12[1] = (int)local_34;
          piVar12[2] = (int)piStack_30;
          piVar12[3] = (int)piStack_2c;
          piVar12[4] = (int)piStack_28;
          local_b0 = piVar12;
          piVar5 = (int *)thunk_FUN_016d4a50(0x14);
          if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x14);
          }
          *piVar5 = (int)local_78;
          piVar5[1] = (int)local_74;
          piVar5[2] = (int)piStack_70;
          piVar5[3] = (int)piStack_6c;
          piVar5[4] = (int)piStack_68;
          local_98 = piVar5;
          puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x14);
          if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x14);
          }
          *puVar6 = local_60;
          puVar6[1] = local_5c;
          puVar6[2] = piStack_58;
          puVar6[3] = piStack_54;
          puVar6[4] = piStack_50;
          *param_1 = 0;
          param_1[1] = piVar4;
          param_1[2] = &DAT_80000010;
          param_1[3] = piVar12;
          param_1[4] = piVar5;
          param_1[5] = puVar6;
        }
      }
      else {
        param_1[1] = local_98;
        param_1[2] = local_94;
        *param_1 = 1;
        param_1[3] = local_90;
        param_1[4] = local_8c;
        param_1[5] = local_88;
        FUN_00fe5d20(&local_38);
        FUN_00fe5d20(&local_60);
        FUN_00fe5d20(&local_78);
      }
      if (piVar10 != (int *)0x8000000a) {
        return;
      }
    }
  }
  else {
    local_b0 = local_90;
    piStack_ac = local_8c;
    piStack_a8 = local_88;
    local_a4 = local_84;
    *param_1 = 1;
    param_1[1] = local_94;
    param_1[2] = local_90;
    param_1[3] = local_8c;
    param_1[4] = local_88;
    param_1[5] = local_84;
  }
  ppiVar2 = &local_f8;
LAB_00fe85d0:
  FUN_00fe5d20(ppiVar2);
  return;
}

