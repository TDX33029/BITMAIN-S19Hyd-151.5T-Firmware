// FUN_00c0d3d0 @ 00c0d3d0 size=4036 calls_out=10 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c0d3d0(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  uint extraout_r2;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *extraout_r3;
  undefined4 *unaff_r4;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int unaff_r11;
  undefined4 uVar14;
  int in_r12;
  int extraout_r12;
  undefined4 uVar15;
  int iVar16;
  bool bVar17;
  undefined4 *local_e0;
  undefined4 *local_d8;
  undefined4 *local_d4;
  int local_d0;
  byte *local_cc;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int local_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int local_68;
  undefined4 *local_64;
  uint local_60;
  undefined4 *local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int *local_30;
  int local_2c;
  
  param_2 = (undefined4 *)*param_2;
  piVar9 = &local_58;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    puVar6 = (undefined4 *)*param_2;
    iVar11 = param_2[1];
    param_2[2] = iVar11;
    uVar3 = FUN_006d1c08(*(undefined4 *)(*(int *)(iVar11 + 0x10) + 0x3c),
                         *(undefined4 *)(*(int *)(iVar11 + 0x10) + 0x40));
    uVar5 = extraout_r2;
    param_4 = extraout_r3;
    iVar10 = 0;
    in_r12 = extraout_r12;
    iVar16 = -0x7ffffff9;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar3) {
    case 0:
      *(undefined1 *)(param_2 + 7) = 0;
      param_2[4] = puVar6;
      param_2[5] = iVar11;
LAB_00c0d56c:
      param_2[8] = puVar6;
      *(undefined1 *)(param_2 + 0xf) = 0;
      param_2[9] = iVar11;
      param_2[6] = iVar11;
LAB_00c0d6cc:
      param_2[10] = puVar6;
      *(undefined1 *)(param_2 + 0xe) = 0;
      param_2[0xb] = iVar11;
LAB_00c0d6dc:
      param_2[0xc] = puVar6;
      param_2[0xd] = 0;
LAB_00c0d6e8:
      uVar7 = *(undefined4 *)(puVar6[2] + 8);
      param_2[0x1a] = *(undefined4 *)(puVar6[2] + 4);
      puVar6 = (undefined4 *)param_2[6];
      param_2[0x1b] = uVar7;
      *(undefined1 *)(param_2 + 0xf) = 1;
      *(undefined1 *)(param_2 + 0xe) = 1;
      *(undefined1 *)(param_2 + 0xd) = 1;
      uVar3 = *(undefined1 *)(puVar6 + 8);
      iVar11 = puVar6[4];
      uVar15 = puVar6[5];
      uVar13 = puVar6[6];
      uVar12 = puVar6[7];
      uVar7 = puVar6[1];
      uVar8 = puVar6[2];
      uVar14 = puVar6[3];
      param_2[8] = *puVar6;
      param_2[9] = uVar7;
      param_2[10] = uVar8;
      param_2[0xb] = uVar14;
      param_2[0xc] = iVar11 + 0x20;
      param_2[0xd] = uVar15;
      param_2[0xe] = uVar13;
      param_2[0xf] = uVar12;
      *(undefined1 *)(param_2 + 0x10) = uVar3;
      uVar7 = puVar6[4];
      *(undefined1 *)(param_2 + 0x19) = 0;
      param_2[0x11] = param_2 + 0x1a;
      param_2[0x12] = param_2 + 8;
      param_2[0x13] = uVar7;
      goto switchD_00c0d54c_caseD_4;
    case 1:
      *(undefined1 *)(param_2 + 7) = 0;
      param_2[4] = puVar6;
      param_2[5] = iVar11;
LAB_00c0da74:
      param_2[8] = puVar6;
      *(undefined1 *)(param_2 + 0xf) = 0;
      param_2[9] = iVar11;
      param_2[6] = iVar11;
LAB_00c0da90:
      param_2[10] = puVar6;
      *(undefined1 *)(param_2 + 0xe) = 0;
      param_2[0xb] = iVar11;
LAB_00c0daa0:
      param_2[0xc] = puVar6;
      param_2[0xd] = 0;
LAB_00c0daac:
      iVar11 = puVar6[2];
      uVar8 = *(undefined4 *)(iVar11 + 0x38);
      uVar7 = 0;
      if (*(int *)(iVar11 + 0x30) != -0x80000000) {
        uVar7 = *(undefined4 *)(iVar11 + 0x34);
      }
      param_2[0x11] = uVar7;
      puVar6 = (undefined4 *)param_2[6];
      param_2[0x12] = uVar8;
      *(undefined1 *)(param_2 + 0xf) = 1;
      *(undefined1 *)(param_2 + 0xe) = 1;
      *(undefined1 *)(param_2 + 0xd) = 1;
      iVar11 = puVar6[4];
      uVar15 = puVar6[5];
      uVar14 = puVar6[6];
      uVar13 = puVar6[7];
      uVar3 = *(undefined1 *)(puVar6 + 8);
      uVar7 = puVar6[1];
      uVar8 = puVar6[2];
      uVar12 = puVar6[3];
      param_2[8] = *puVar6;
      param_2[9] = uVar7;
      param_2[10] = uVar8;
      param_2[0xb] = uVar12;
      param_2[0xd] = uVar15;
      param_2[0xc] = iVar11 + 0x20;
      param_2[0xe] = uVar14;
      param_2[0xf] = uVar13;
      *(undefined1 *)(param_2 + 0x10) = uVar3;
      uVar7 = puVar6[4];
      *(undefined1 *)(param_2 + 0x20) = 0;
      param_2[0x13] = param_2 + 0x11;
      param_2[0x14] = param_2 + 8;
      param_2[0x15] = uVar7;
      goto switchD_00c0d5a0_caseD_4;
    case 2:
      param_2[4] = puVar6;
      param_2[5] = iVar11;
      *(undefined1 *)(param_2 + 7) = 0;
LAB_00c0dbf0:
      param_2[8] = puVar6;
      param_2[9] = iVar11;
      *(undefined1 *)(param_2 + 0xf) = 0;
      param_2[6] = iVar11;
LAB_00c0dc10:
      *(undefined1 *)(param_2 + 0xe) = 0;
      param_2[10] = puVar6;
      param_2[0xb] = iVar11;
LAB_00c0dc24:
      param_2[0xc] = puVar6;
      param_2[0xd] = 0;
LAB_00c0dc3c:
      local_e0 = param_2 + 8;
      local_d4 = param_2 + 0xf;
      FUN_00be4a44(&local_68,*puVar6,puVar6[1],*(undefined4 *)(puVar6[2] + 0x10),
                   *(undefined4 *)(puVar6[2] + 0x14));
      *(undefined1 *)(param_2 + 0xd) = 1;
      if (local_68 != 3) {
        param_2[0x11] = local_68;
        *(undefined1 *)(param_2 + 0xf) = 1;
        *(undefined1 *)(param_2 + 0xe) = 1;
        param_2[0x12] = local_64;
        param_2[0x13] = local_60;
        param_2[0x14] = local_5c;
        param_2[0x15] = local_58;
        param_2[0x16] = local_54;
        puVar6 = (undefined4 *)param_2[6];
        uVar7 = puVar6[5];
        uVar3 = *(undefined1 *)(puVar6 + 8);
        iVar11 = puVar6[4];
        uVar15 = puVar6[6];
        uVar14 = puVar6[7];
        uVar8 = puVar6[1];
        uVar12 = puVar6[2];
        uVar13 = puVar6[3];
        *local_e0 = *puVar6;
        param_2[9] = uVar8;
        param_2[10] = uVar12;
        param_2[0xb] = uVar13;
        param_2[0xc] = iVar11 + 0x20;
        param_2[0xd] = uVar7;
        *(undefined1 *)(param_2 + 0x10) = uVar3;
        param_2[0xe] = uVar15;
        param_2[0xf] = uVar14;
        uVar7 = puVar6[4];
        *(undefined1 *)(param_2 + 0x33) = 0;
        param_2[0x30] = param_2 + 0x11;
        param_2[0x31] = local_e0;
        param_2[0x32] = uVar7;
        goto switchD_00c0d518_caseD_4;
      }
      uVar3 = 3;
      *(undefined1 *)(param_2 + 0xe) = 3;
      *(undefined1 *)local_d4 = 3;
      goto LAB_00c0dd74;
    case 3:
      *(undefined1 *)(param_2 + 7) = 0;
      param_2[4] = puVar6;
      param_2[5] = iVar11;
LAB_00c0d94c:
      param_2[8] = puVar6;
      *(undefined1 *)(param_2 + 0xf) = 0;
      param_2[9] = iVar11;
      param_2[6] = iVar11;
LAB_00c0d968:
      param_2[10] = puVar6;
      *(undefined1 *)(param_2 + 0xe) = 0;
      param_2[0xb] = iVar11;
LAB_00c0d978:
      param_2[0xc] = puVar6;
      param_2[0xd] = 0;
LAB_00c0d984:
      iVar11 = puVar6[2];
      uVar8 = *(undefined4 *)(iVar11 + 0x44);
      uVar7 = 0;
      if (*(int *)(iVar11 + 0x3c) != -0x80000000) {
        uVar7 = *(undefined4 *)(iVar11 + 0x40);
      }
      param_2[0x11] = uVar7;
      puVar6 = (undefined4 *)param_2[6];
      param_2[0x12] = uVar8;
      *(undefined1 *)(param_2 + 0xf) = 1;
      *(undefined1 *)(param_2 + 0xe) = 1;
      *(undefined1 *)(param_2 + 0xd) = 1;
      iVar11 = puVar6[4];
      uVar15 = puVar6[5];
      uVar14 = puVar6[6];
      uVar13 = puVar6[7];
      uVar3 = *(undefined1 *)(puVar6 + 8);
      uVar7 = puVar6[1];
      uVar8 = puVar6[2];
      uVar12 = puVar6[3];
      param_2[8] = *puVar6;
      param_2[9] = uVar7;
      param_2[10] = uVar8;
      param_2[0xb] = uVar12;
      param_2[0xd] = uVar15;
      param_2[0xc] = iVar11 + 0x20;
      param_2[0xe] = uVar14;
      param_2[0xf] = uVar13;
      *(undefined1 *)(param_2 + 0x10) = uVar3;
      uVar7 = puVar6[4];
      *(undefined1 *)(param_2 + 0x20) = 0;
      param_2[0x13] = param_2 + 0x11;
      param_2[0x14] = param_2 + 8;
      param_2[0x15] = uVar7;
      goto switchD_00c0d4d8_caseD_4;
    case 4:
      param_2[4] = puVar6;
      *(undefined1 *)(param_2 + 7) = 0;
      param_2[5] = iVar11;
LAB_00c0de68:
      param_2[8] = puVar6;
      *(undefined1 *)(param_2 + 0xf) = 0;
      param_2[9] = iVar11;
      param_2[6] = iVar11;
LAB_00c0de84:
      param_2[10] = puVar6;
      *(undefined1 *)(param_2 + 0xe) = 0;
      param_2[0xb] = iVar11;
LAB_00c0de94:
      param_2[0xc] = puVar6;
      param_2[0xd] = 0;
LAB_00c0dea0:
      local_cc = (byte *)(param_2 + 8);
      puVar4 = (undefined4 *)param_2[6];
      iVar11 = *(int *)(puVar6[2] + 0x48);
      *(undefined1 *)(param_2 + 0xf) = 1;
      *(undefined1 *)(param_2 + 0xe) = 1;
      *(undefined1 *)(param_2 + 0xd) = 1;
      *(bool *)(param_2 + 8) = iVar11 != -0x7fffffff;
      param_4 = param_2 + 9;
      unaff_r11 = puVar4[4];
      uVar13 = puVar4[5];
      in_r12 = puVar4[6];
      uVar12 = puVar4[7];
      uVar3 = *(undefined1 *)(puVar4 + 8);
      uVar7 = puVar4[1];
      uVar8 = puVar4[2];
      piVar9 = (int *)puVar4[3];
      *param_4 = *puVar4;
      param_2[10] = uVar7;
      param_2[0xb] = uVar8;
      param_2[0xc] = piVar9;
      param_2[0xd] = unaff_r11 + 0x20;
      param_2[0xe] = uVar13;
      param_2[0xf] = in_r12;
      param_2[0x10] = uVar12;
      *(undefined1 *)(param_2 + 0x11) = uVar3;
      uVar7 = puVar4[4];
      *(undefined1 *)(param_2 + 0x15) = 0;
      param_2[0x12] = local_cc;
      param_2[0x13] = param_4;
      param_2[0x14] = uVar7;
      unaff_r4 = param_4;
      goto LAB_00c0df24;
    case 5:
      *(undefined1 *)(param_2 + 7) = 0;
      param_2[4] = puVar6;
      param_2[5] = iVar11;
      param_4 = extraout_r3;
LAB_00c0df5c:
      param_2[8] = puVar6;
      *(undefined1 *)(param_2 + 0xf) = 0;
      param_2[9] = iVar11;
      param_2[6] = iVar11;
LAB_00c0df74:
      param_2[10] = puVar6;
      *(undefined1 *)(param_2 + 0xe) = 0;
      param_2[0xb] = iVar11;
LAB_00c0df84:
      param_2[0xc] = puVar6;
      param_2[0xd] = 0;
LAB_00c0df90:
      iVar11 = puVar6[2];
      uVar7 = 0;
      if (*(int *)(iVar11 + 0x48) != -0x7fffffff) {
        param_4 = *(undefined4 **)(iVar11 + 0x50);
        uVar7 = 0;
        if (*(int *)(iVar11 + 0x48) != -0x80000000) {
          uVar7 = *(undefined4 *)(iVar11 + 0x4c);
        }
      }
      param_2[0x11] = uVar7;
      puVar6 = (undefined4 *)param_2[6];
      param_2[0x12] = param_4;
      *(undefined1 *)(param_2 + 0xf) = 1;
      *(undefined1 *)(param_2 + 0xe) = 1;
      *(undefined1 *)(param_2 + 0xd) = 1;
      iVar11 = puVar6[4];
      uVar14 = puVar6[5];
      uVar13 = puVar6[6];
      uVar12 = puVar6[7];
      uVar3 = *(undefined1 *)(puVar6 + 8);
      uVar7 = puVar6[1];
      uVar8 = puVar6[2];
      uVar15 = puVar6[3];
      param_2[8] = *puVar6;
      param_2[9] = uVar7;
      param_2[10] = uVar8;
      param_2[0xb] = uVar15;
      param_2[0xe] = uVar13;
      param_2[0xc] = iVar11 + 0x20;
      param_2[0xd] = uVar14;
      param_2[0xf] = uVar12;
      *(undefined1 *)(param_2 + 0x10) = uVar3;
      uVar7 = puVar6[4];
      *(undefined1 *)(param_2 + 0x20) = 0;
      param_2[0x13] = param_2 + 0x11;
      param_2[0x14] = param_2 + 8;
      param_2[0x15] = uVar7;
      goto switchD_00c0d4a4_caseD_4;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c21b7c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c21b7c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      puVar6 = (undefined4 *)param_2[4];
      iVar11 = param_2[5];
      goto LAB_00c0d56c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b7c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b7c);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xf)) {
      case 0:
        puVar6 = (undefined4 *)param_2[8];
        iVar11 = param_2[9];
        goto LAB_00c0d6cc;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21b7c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21b7c);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xe)) {
      case 0:
        puVar6 = (undefined4 *)param_2[10];
        goto LAB_00c0d6dc;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21b7c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21b7c);
      case 3:
        if (*(char *)(param_2 + 0xd) != '\0') {
          if (*(char *)(param_2 + 0xd) == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0();
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21b7c);
        }
        puVar6 = (undefined4 *)param_2[0xc];
      }
      goto LAB_00c0d6e8;
    }
switchD_00c0d54c_caseD_4:
    FUN_00be5ca4(&local_68,param_2 + 0x11);
    if (local_68 == 2) {
      *param_1 = 2;
      *(undefined1 *)(param_2 + 7) = 4;
      uVar3 = 3;
      goto LAB_00c0e114;
    }
    goto LAB_00c0db7c;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      puVar6 = (undefined4 *)param_2[4];
      iVar11 = param_2[5];
      goto LAB_00c0da74;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b7c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b7c);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xf)) {
      case 0:
        puVar6 = (undefined4 *)param_2[8];
        iVar11 = param_2[9];
        goto LAB_00c0da90;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21b7c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21b7c);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xe)) {
      case 0:
        puVar6 = (undefined4 *)param_2[10];
        goto LAB_00c0daa0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21b7c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21b7c);
      case 3:
        if (*(char *)(param_2 + 0xd) != '\0') {
          if (*(char *)(param_2 + 0xd) == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0();
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21b7c);
        }
        puVar6 = (undefined4 *)param_2[0xc];
      }
      goto LAB_00c0daac;
    }
switchD_00c0d5a0_caseD_4:
    FUN_00be3ca4(&local_68,param_2 + 0x13);
    if (local_68 == 2) {
      *param_1 = 2;
      uVar3 = 4;
      *(undefined1 *)(param_2 + 7) = 4;
      goto LAB_00c0e114;
    }
    goto LAB_00c0db7c;
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      puVar6 = (undefined4 *)param_2[4];
      iVar11 = param_2[5];
      goto LAB_00c0dbf0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b7c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b7c);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xf)) {
      case 0:
        puVar6 = (undefined4 *)param_2[8];
        iVar11 = param_2[9];
        goto LAB_00c0dc10;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21b7c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21b7c);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xe)) {
      case 0:
        puVar6 = (undefined4 *)param_2[10];
        goto LAB_00c0dc24;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21b7c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21b7c);
      case 3:
        if (*(char *)(param_2 + 0xd) != '\0') {
          if (*(char *)(param_2 + 0xd) == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c21b7c);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21b7c);
        }
        puVar6 = (undefined4 *)param_2[0xc];
      }
      goto LAB_00c0dc3c;
    }
switchD_00c0d518_caseD_4:
    local_d8 = param_2 + 4;
    FUN_00be4e6c(&local_68,param_2 + 0x18,param_3);
    if (local_68 == 2) {
      uVar3 = 4;
LAB_00c0dd74:
      *(undefined1 *)(param_2 + 7) = uVar3;
      *param_1 = 2;
      uVar3 = 5;
      goto LAB_00c0e114;
    }
    local_d0 = local_58;
    cVar1 = *(char *)(param_2 + 0x33);
    bVar17 = cVar1 == '\x03';
    if (bVar17) {
      cVar1 = *(char *)(param_2 + 0x2e);
    }
    if (bVar17 && cVar1 == '\x03') {
      FUN_00ba638c(param_2 + 0x18);
    }
    if (param_2[0x11] != 0) {
      FUN_019bb7e0(param_2[0x12],param_2[0x13]);
    }
    local_c0 = local_4c;
    iStack_bc = iStack_48;
    iStack_b8 = iStack_44;
    local_b4 = local_40;
    iStack_b0 = iStack_3c;
    iStack_ac = iStack_38;
    iStack_a8 = iStack_34;
    *(undefined1 *)(param_2 + 7) = 1;
    FUN_00c0e874(local_d8);
    uVar5 = local_60;
    param_4 = local_64;
    unaff_r4 = local_5c;
    piVar9 = local_30;
    iVar10 = local_68;
    unaff_r11 = local_2c;
    in_r12 = local_54;
    iVar16 = local_50;
    break;
  case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      puVar6 = (undefined4 *)param_2[4];
      iVar11 = param_2[5];
      goto LAB_00c0d94c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b7c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b7c);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xf)) {
      case 0:
        puVar6 = (undefined4 *)param_2[8];
        iVar11 = param_2[9];
        goto LAB_00c0d968;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21b7c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21b7c);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xe)) {
      case 0:
        puVar6 = (undefined4 *)param_2[10];
        goto LAB_00c0d978;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21b7c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21b7c);
      case 3:
        if (*(char *)(param_2 + 0xd) != '\0') {
          if (*(char *)(param_2 + 0xd) == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0();
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21b7c);
        }
        puVar6 = (undefined4 *)param_2[0xc];
      }
      goto LAB_00c0d984;
    }
switchD_00c0d4d8_caseD_4:
    FUN_00be3ca4(&local_68,param_2 + 0x13);
    if (local_68 == 2) {
      *param_1 = 2;
      *(undefined1 *)(param_2 + 7) = 4;
      uVar3 = 6;
      goto LAB_00c0e114;
    }
LAB_00c0db7c:
    local_d0 = local_58;
    local_c0 = local_4c;
    iStack_bc = iStack_48;
    iStack_b8 = iStack_44;
    local_b4 = local_40;
    iStack_b0 = iStack_3c;
    iStack_ac = iStack_38;
    iStack_a8 = iStack_34;
    *(undefined1 *)(param_2 + 7) = 1;
    uVar5 = local_60;
    param_4 = local_64;
    unaff_r4 = local_5c;
    piVar9 = local_30;
    iVar10 = local_68;
    unaff_r11 = local_2c;
    in_r12 = local_54;
    iVar16 = local_50;
    break;
  case 7:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      puVar6 = (undefined4 *)param_2[4];
      iVar11 = param_2[5];
      goto LAB_00c0de68;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b7c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b7c);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xf)) {
      case 0:
        puVar6 = (undefined4 *)param_2[8];
        iVar11 = param_2[9];
        goto LAB_00c0de84;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21b7c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21b7c);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xe)) {
      case 0:
        puVar6 = (undefined4 *)param_2[10];
        goto LAB_00c0de94;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21b7c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21b7c);
      case 3:
        if (*(char *)(param_2 + 0xd) != '\0') {
          if (*(char *)(param_2 + 0xd) == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0();
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21b7c);
        }
        puVar6 = (undefined4 *)param_2[0xc];
      }
      goto LAB_00c0dea0;
    case 4:
      if (*(char *)(param_2 + 0x15) != '\0') {
        if (*(char *)(param_2 + 0x15) == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21bcc);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bcc);
      }
      local_cc = (byte *)param_2[0x12];
    }
LAB_00c0df24:
    bVar2 = *local_cc;
    *(undefined1 *)(param_2 + 7) = 1;
    *(undefined1 *)(param_2 + 0x15) = 1;
    uVar5 = (uint)bVar2;
    iVar10 = 0;
    iVar16 = -0x7ffffffd;
    break;
  case 8:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      puVar6 = (undefined4 *)param_2[4];
      iVar11 = param_2[5];
      goto LAB_00c0df5c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b7c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b7c);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xf)) {
      case 0:
        puVar6 = (undefined4 *)param_2[8];
        iVar11 = param_2[9];
        goto LAB_00c0df74;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21b7c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21b7c);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xe)) {
      case 0:
        puVar6 = (undefined4 *)param_2[10];
        goto LAB_00c0df84;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21b7c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21b7c);
      case 3:
        if (*(char *)(param_2 + 0xd) != '\0') {
          if (*(char *)(param_2 + 0xd) == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0();
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21b7c);
        }
        puVar6 = (undefined4 *)param_2[0xc];
      }
      goto LAB_00c0df90;
    }
switchD_00c0d4a4_caseD_4:
    local_d4 = param_2 + 7;
    FUN_00be3ca4(&local_68,param_2 + 0x13);
    if (local_68 == 2) {
      *param_1 = 2;
      *(undefined1 *)local_d4 = 4;
      uVar3 = 8;
      goto LAB_00c0e114;
    }
    local_d0 = local_58;
    local_c0 = local_4c;
    iStack_bc = iStack_48;
    iStack_b8 = iStack_44;
    local_b4 = local_40;
    iStack_b0 = iStack_3c;
    iStack_ac = iStack_38;
    iStack_a8 = iStack_34;
    *(undefined1 *)local_d4 = 1;
    uVar5 = local_60;
    param_4 = local_64;
    unaff_r4 = local_5c;
    piVar9 = local_30;
    iVar10 = local_68;
    unaff_r11 = local_2c;
    in_r12 = local_54;
    iVar16 = local_50;
  }
  param_1[3] = (int)unaff_r4;
  *param_1 = iVar10;
  param_1[4] = local_d0;
  param_1[5] = in_r12;
  param_1[1] = (int)param_4;
  param_1[2] = uVar5;
  param_1[6] = iVar16;
  param_1[7] = local_c0;
  param_1[8] = iStack_bc;
  param_1[9] = iStack_b8;
  param_1[10] = local_b4;
  param_1[0xb] = iStack_b0;
  param_1[0xc] = iStack_ac;
  param_1[0xd] = iStack_a8;
  uVar3 = 1;
  param_1[0xe] = (int)piVar9;
  param_1[0xf] = unaff_r11;
LAB_00c0e114:
  *(undefined1 *)(param_2 + 3) = uVar3;
  return;
}

