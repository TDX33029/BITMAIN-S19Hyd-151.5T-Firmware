// FUN_011b5864 @ 011b5864 size=4020 calls_out=10 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011b5864(int *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  uint extraout_r2;
  uint uVar4;
  int extraout_r3;
  int *unaff_r4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int unaff_r11;
  undefined4 uVar16;
  int in_r12;
  int extraout_r12;
  undefined4 uVar17;
  bool bVar18;
  undefined4 *local_fc;
  undefined4 *local_f8;
  undefined4 *local_f0;
  undefined4 *local_e8;
  byte *local_e4;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int local_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int local_68;
  int local_64;
  uint local_60;
  int *local_5c;
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
  
  piVar5 = &local_58;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    puVar7 = (undefined4 *)*param_2;
    iVar12 = param_2[1];
    param_2[2] = iVar12;
    uVar3 = FUN_006d1c08(*(undefined4 *)(*(int *)(iVar12 + 0x10) + 0x3c),
                         *(undefined4 *)(*(int *)(iVar12 + 0x10) + 0x40));
    uVar4 = extraout_r2;
    param_4 = extraout_r3;
    iVar8 = 0;
    in_r12 = extraout_r12;
    iVar10 = -0x7ffffff9;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar3) {
    case 0:
      *(undefined1 *)(param_2 + 7) = 0;
      param_2[4] = puVar7;
      param_2[5] = iVar12;
LAB_011b5a00:
      param_2[8] = puVar7;
      *(undefined1 *)(param_2 + 0xf) = 0;
      param_2[9] = iVar12;
      param_2[6] = iVar12;
LAB_011b5b58:
      param_2[10] = puVar7;
      *(undefined1 *)(param_2 + 0xe) = 0;
      param_2[0xb] = iVar12;
LAB_011b5b6c:
      param_2[0xc] = puVar7;
      param_2[0xd] = 0;
LAB_011b5b74:
      uVar6 = *(undefined4 *)(puVar7[2] + 8);
      param_2[0x1a] = *(undefined4 *)(puVar7[2] + 4);
      puVar7 = (undefined4 *)param_2[6];
      param_2[0x1b] = uVar6;
      *(undefined1 *)(param_2 + 0xf) = 1;
      *(undefined1 *)(param_2 + 0xe) = 1;
      *(undefined1 *)(param_2 + 0xd) = 1;
      uVar3 = *(undefined1 *)(puVar7 + 8);
      iVar12 = puVar7[4];
      uVar17 = puVar7[5];
      uVar15 = puVar7[6];
      uVar14 = puVar7[7];
      uVar6 = puVar7[1];
      uVar9 = puVar7[2];
      uVar16 = puVar7[3];
      param_2[8] = *puVar7;
      param_2[9] = uVar6;
      param_2[10] = uVar9;
      param_2[0xb] = uVar16;
      param_2[0xc] = iVar12 + 0x20;
      param_2[0xd] = uVar17;
      param_2[0xe] = uVar15;
      param_2[0xf] = uVar14;
      *(undefined1 *)(param_2 + 0x10) = uVar3;
      uVar6 = puVar7[4];
      *(undefined1 *)(param_2 + 0x19) = 0;
      param_2[0x11] = param_2 + 0x1a;
      param_2[0x12] = param_2 + 8;
      param_2[0x13] = uVar6;
      goto switchD_011b59e0_caseD_4;
    case 1:
      *(undefined1 *)(param_2 + 7) = 0;
      param_2[4] = puVar7;
      param_2[5] = iVar12;
LAB_011b5efc:
      param_2[8] = puVar7;
      *(undefined1 *)(param_2 + 0xf) = 0;
      param_2[9] = iVar12;
      param_2[6] = iVar12;
LAB_011b5f18:
      param_2[10] = puVar7;
      *(undefined1 *)(param_2 + 0xe) = 0;
      param_2[0xb] = iVar12;
LAB_011b5f28:
      param_2[0xc] = puVar7;
      param_2[0xd] = 0;
LAB_011b5f30:
      iVar12 = puVar7[2];
      uVar9 = *(undefined4 *)(iVar12 + 0x38);
      uVar6 = 0;
      if (*(int *)(iVar12 + 0x30) != -0x80000000) {
        uVar6 = *(undefined4 *)(iVar12 + 0x34);
      }
      param_2[0x11] = uVar6;
      puVar7 = (undefined4 *)param_2[6];
      param_2[0x12] = uVar9;
      *(undefined1 *)(param_2 + 0xf) = 1;
      *(undefined1 *)(param_2 + 0xe) = 1;
      *(undefined1 *)(param_2 + 0xd) = 1;
      iVar12 = puVar7[4];
      uVar17 = puVar7[5];
      uVar16 = puVar7[6];
      uVar15 = puVar7[7];
      uVar3 = *(undefined1 *)(puVar7 + 8);
      uVar6 = puVar7[1];
      uVar9 = puVar7[2];
      uVar14 = puVar7[3];
      param_2[8] = *puVar7;
      param_2[9] = uVar6;
      param_2[10] = uVar9;
      param_2[0xb] = uVar14;
      param_2[0xd] = uVar17;
      param_2[0xc] = iVar12 + 0x20;
      param_2[0xe] = uVar16;
      param_2[0xf] = uVar15;
      *(undefined1 *)(param_2 + 0x10) = uVar3;
      uVar6 = puVar7[4];
      *(undefined1 *)(param_2 + 0x20) = 0;
      param_2[0x13] = param_2 + 0x11;
      param_2[0x14] = param_2 + 8;
      param_2[0x15] = uVar6;
      goto switchD_011b5a30_caseD_4;
    case 2:
      param_2[4] = puVar7;
      param_2[5] = iVar12;
      *(undefined1 *)(param_2 + 7) = 0;
LAB_011b6074:
      param_2[8] = puVar7;
      param_2[9] = iVar12;
      *(undefined1 *)(param_2 + 0xf) = 0;
      param_2[6] = iVar12;
LAB_011b6094:
      *(undefined1 *)(param_2 + 0xe) = 0;
      param_2[10] = puVar7;
      param_2[0xb] = iVar12;
LAB_011b60b0:
      param_2[0xc] = puVar7;
      param_2[0xd] = 0;
LAB_011b60c0:
      local_fc = param_2 + 8;
      local_e8 = param_2 + 0xf;
      FUN_00be4a44(&local_68,*puVar7,puVar7[1],*(undefined4 *)(puVar7[2] + 0x10),
                   *(undefined4 *)(puVar7[2] + 0x14));
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
        puVar7 = (undefined4 *)param_2[6];
        uVar6 = puVar7[5];
        iVar12 = puVar7[4];
        uVar17 = puVar7[6];
        uVar16 = puVar7[7];
        uVar3 = *(undefined1 *)(puVar7 + 8);
        uVar9 = puVar7[1];
        uVar14 = puVar7[2];
        uVar15 = puVar7[3];
        *local_fc = *puVar7;
        param_2[9] = uVar9;
        param_2[10] = uVar14;
        param_2[0xb] = uVar15;
        param_2[0xc] = iVar12 + 0x20;
        param_2[0xe] = uVar17;
        param_2[0xd] = uVar6;
        param_2[0xf] = uVar16;
        *(undefined1 *)(param_2 + 0x10) = uVar3;
        uVar6 = puVar7[4];
        *(undefined1 *)(param_2 + 0x33) = 0;
        param_2[0x30] = param_2 + 0x11;
        param_2[0x31] = local_fc;
        param_2[0x32] = uVar6;
        goto switchD_011b59ac_caseD_4;
      }
      uVar3 = 3;
      *(undefined1 *)(param_2 + 0xe) = 3;
      *(undefined1 *)local_e8 = 3;
      goto LAB_011b61fc;
    case 3:
      *(undefined1 *)(param_2 + 7) = 0;
      param_2[4] = puVar7;
      param_2[5] = iVar12;
LAB_011b5dd8:
      param_2[8] = puVar7;
      *(undefined1 *)(param_2 + 0xf) = 0;
      param_2[9] = iVar12;
      param_2[6] = iVar12;
LAB_011b5df4:
      param_2[10] = puVar7;
      *(undefined1 *)(param_2 + 0xe) = 0;
      param_2[0xb] = iVar12;
LAB_011b5e04:
      param_2[0xc] = puVar7;
      param_2[0xd] = 0;
LAB_011b5e0c:
      iVar12 = puVar7[2];
      uVar9 = *(undefined4 *)(iVar12 + 0x44);
      uVar6 = 0;
      if (*(int *)(iVar12 + 0x3c) != -0x80000000) {
        uVar6 = *(undefined4 *)(iVar12 + 0x40);
      }
      param_2[0x11] = uVar6;
      puVar7 = (undefined4 *)param_2[6];
      param_2[0x12] = uVar9;
      *(undefined1 *)(param_2 + 0xf) = 1;
      *(undefined1 *)(param_2 + 0xe) = 1;
      *(undefined1 *)(param_2 + 0xd) = 1;
      iVar12 = puVar7[4];
      uVar17 = puVar7[5];
      uVar16 = puVar7[6];
      uVar15 = puVar7[7];
      uVar3 = *(undefined1 *)(puVar7 + 8);
      uVar6 = puVar7[1];
      uVar9 = puVar7[2];
      uVar14 = puVar7[3];
      param_2[8] = *puVar7;
      param_2[9] = uVar6;
      param_2[10] = uVar9;
      param_2[0xb] = uVar14;
      param_2[0xd] = uVar17;
      param_2[0xc] = iVar12 + 0x20;
      param_2[0xe] = uVar16;
      param_2[0xf] = uVar15;
      *(undefined1 *)(param_2 + 0x10) = uVar3;
      uVar6 = puVar7[4];
      *(undefined1 *)(param_2 + 0x20) = 0;
      param_2[0x13] = param_2 + 0x11;
      param_2[0x14] = param_2 + 8;
      param_2[0x15] = uVar6;
      goto switchD_011b596c_caseD_4;
    case 4:
      param_2[4] = puVar7;
      *(undefined1 *)(param_2 + 7) = 0;
      param_2[5] = iVar12;
LAB_011b62ec:
      param_2[8] = puVar7;
      *(undefined1 *)(param_2 + 0xf) = 0;
      param_2[9] = iVar12;
      param_2[6] = iVar12;
LAB_011b6308:
      param_2[10] = puVar7;
      *(undefined1 *)(param_2 + 0xe) = 0;
      param_2[0xb] = iVar12;
LAB_011b6318:
      param_2[0xc] = puVar7;
      param_2[0xd] = 0;
LAB_011b6320:
      local_e4 = (byte *)(param_2 + 8);
      piVar5 = (int *)param_2[6];
      unaff_r4 = param_2 + 9;
      iVar12 = *(int *)(puVar7[2] + 0x48);
      *(undefined1 *)(param_2 + 0xf) = 1;
      *(undefined1 *)(param_2 + 0xe) = 1;
      *(undefined1 *)(param_2 + 0xd) = 1;
      *(bool *)(param_2 + 8) = iVar12 != -0x7fffffff;
      unaff_r11 = piVar5[4];
      iVar11 = piVar5[5];
      in_r12 = piVar5[6];
      iVar13 = piVar5[7];
      iVar12 = piVar5[8];
      param_4 = piVar5[1];
      iVar8 = piVar5[2];
      iVar10 = piVar5[3];
      *unaff_r4 = *piVar5;
      param_2[10] = param_4;
      param_2[0xb] = iVar8;
      param_2[0xc] = iVar10;
      param_2[0xd] = unaff_r11 + 0x20;
      param_2[0xe] = iVar11;
      param_2[0xf] = in_r12;
      param_2[0x10] = iVar13;
      *(char *)(param_2 + 0x11) = (char)iVar12;
      iVar12 = piVar5[4];
      *(undefined1 *)(param_2 + 0x15) = 0;
      param_2[0x12] = local_e4;
      param_2[0x13] = unaff_r4;
      param_2[0x14] = iVar12;
      goto LAB_011b63a0;
    case 5:
      *(undefined1 *)(param_2 + 7) = 0;
      param_2[4] = puVar7;
      param_2[5] = iVar12;
      param_4 = extraout_r3;
LAB_011b63d8:
      param_2[8] = puVar7;
      *(undefined1 *)(param_2 + 0xf) = 0;
      param_2[9] = iVar12;
      param_2[6] = iVar12;
LAB_011b63f0:
      param_2[10] = puVar7;
      *(undefined1 *)(param_2 + 0xe) = 0;
      param_2[0xb] = iVar12;
LAB_011b6400:
      param_2[0xc] = puVar7;
      param_2[0xd] = 0;
LAB_011b6408:
      iVar12 = puVar7[2];
      uVar6 = 0;
      if (*(int *)(iVar12 + 0x48) != -0x7fffffff) {
        param_4 = *(int *)(iVar12 + 0x50);
        uVar6 = 0;
        if (*(int *)(iVar12 + 0x48) != -0x80000000) {
          uVar6 = *(undefined4 *)(iVar12 + 0x4c);
        }
      }
      param_2[0x11] = uVar6;
      puVar7 = (undefined4 *)param_2[6];
      param_2[0x12] = param_4;
      *(undefined1 *)(param_2 + 0xf) = 1;
      *(undefined1 *)(param_2 + 0xe) = 1;
      *(undefined1 *)(param_2 + 0xd) = 1;
      iVar12 = puVar7[4];
      uVar16 = puVar7[5];
      uVar15 = puVar7[6];
      uVar14 = puVar7[7];
      uVar3 = *(undefined1 *)(puVar7 + 8);
      uVar6 = puVar7[1];
      uVar9 = puVar7[2];
      uVar17 = puVar7[3];
      param_2[8] = *puVar7;
      param_2[9] = uVar6;
      param_2[10] = uVar9;
      param_2[0xb] = uVar17;
      param_2[0xe] = uVar15;
      param_2[0xc] = iVar12 + 0x20;
      param_2[0xd] = uVar16;
      param_2[0xf] = uVar14;
      *(undefined1 *)(param_2 + 0x10) = uVar3;
      uVar6 = puVar7[4];
      *(undefined1 *)(param_2 + 0x20) = 0;
      param_2[0x13] = param_2 + 0x11;
      param_2[0x14] = param_2 + 8;
      param_2[0x15] = uVar6;
      goto switchD_011b5938_caseD_4;
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
      puVar7 = (undefined4 *)param_2[4];
      iVar12 = param_2[5];
      goto LAB_011b5a00;
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
        puVar7 = (undefined4 *)param_2[8];
        iVar12 = param_2[9];
        goto LAB_011b5b58;
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
        puVar7 = (undefined4 *)param_2[10];
        goto LAB_011b5b6c;
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
        puVar7 = (undefined4 *)param_2[0xc];
      }
      goto LAB_011b5b74;
    }
switchD_011b59e0_caseD_4:
    FUN_00be5ca4(&local_68,param_2 + 0x11);
    if (local_68 == 2) {
      *(undefined1 *)(param_2 + 7) = 4;
      *param_1 = 2;
      uVar3 = 3;
      goto LAB_011b658c;
    }
    goto LAB_011b6000;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      puVar7 = (undefined4 *)param_2[4];
      iVar12 = param_2[5];
      goto LAB_011b5efc;
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
        puVar7 = (undefined4 *)param_2[8];
        iVar12 = param_2[9];
        goto LAB_011b5f18;
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
        puVar7 = (undefined4 *)param_2[10];
        goto LAB_011b5f28;
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
        puVar7 = (undefined4 *)param_2[0xc];
      }
      goto LAB_011b5f30;
    }
switchD_011b5a30_caseD_4:
    FUN_00be3ca4(&local_68,param_2 + 0x13);
    if (local_68 == 2) {
      uVar3 = 4;
      *(undefined1 *)(param_2 + 7) = 4;
      *param_1 = 2;
      goto LAB_011b658c;
    }
    goto LAB_011b6000;
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      puVar7 = (undefined4 *)param_2[4];
      iVar12 = param_2[5];
      goto LAB_011b6074;
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
        puVar7 = (undefined4 *)param_2[8];
        iVar12 = param_2[9];
        goto LAB_011b6094;
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
        puVar7 = (undefined4 *)param_2[10];
        goto LAB_011b60b0;
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
        puVar7 = (undefined4 *)param_2[0xc];
      }
      goto LAB_011b60c0;
    }
switchD_011b59ac_caseD_4:
    local_f8 = param_2 + 4;
    FUN_01192f60(&local_68,param_2 + 0x18,param_3);
    if (local_68 == 2) {
      uVar3 = 4;
LAB_011b61fc:
      *(undefined1 *)(param_2 + 7) = uVar3;
      *param_1 = 2;
      uVar3 = 5;
      goto LAB_011b658c;
    }
    local_e8 = (undefined4 *)local_58;
    cVar1 = *(char *)(param_2 + 0x33);
    bVar18 = cVar1 == '\x03';
    if (bVar18) {
      cVar1 = *(char *)(param_2 + 0x2e);
    }
    if (bVar18 && cVar1 == '\x03') {
      FUN_01192a14(param_2 + 0x18);
    }
    if (param_2[0x11] != 0) {
      FUN_019bb7e0(param_2[0x12],param_2[0x13]);
    }
    local_d8 = local_4c;
    iStack_d4 = iStack_48;
    iStack_d0 = iStack_44;
    local_cc = local_40;
    iStack_c8 = iStack_3c;
    iStack_c4 = iStack_38;
    iStack_c0 = iStack_34;
    *(undefined1 *)(param_2 + 7) = 1;
    FUN_011a4b28(local_f8);
    uVar4 = local_60;
    param_4 = local_64;
    unaff_r4 = local_5c;
    piVar5 = local_30;
    iVar8 = local_68;
    unaff_r11 = local_2c;
    in_r12 = local_54;
    iVar10 = local_50;
    break;
  case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      puVar7 = (undefined4 *)param_2[4];
      iVar12 = param_2[5];
      goto LAB_011b5dd8;
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
        puVar7 = (undefined4 *)param_2[8];
        iVar12 = param_2[9];
        goto LAB_011b5df4;
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
        puVar7 = (undefined4 *)param_2[10];
        goto LAB_011b5e04;
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
        puVar7 = (undefined4 *)param_2[0xc];
      }
      goto LAB_011b5e0c;
    }
switchD_011b596c_caseD_4:
    FUN_00be3ca4(&local_68,param_2 + 0x13);
    if (local_68 == 2) {
      *(undefined1 *)(param_2 + 7) = 4;
      *param_1 = 2;
      uVar3 = 6;
      goto LAB_011b658c;
    }
LAB_011b6000:
    local_e8 = (undefined4 *)local_58;
    local_d8 = local_4c;
    iStack_d4 = iStack_48;
    iStack_d0 = iStack_44;
    local_cc = local_40;
    iStack_c8 = iStack_3c;
    iStack_c4 = iStack_38;
    iStack_c0 = iStack_34;
    *(undefined1 *)(param_2 + 7) = 1;
    uVar4 = local_60;
    param_4 = local_64;
    unaff_r4 = local_5c;
    piVar5 = local_30;
    iVar8 = local_68;
    unaff_r11 = local_2c;
    in_r12 = local_54;
    iVar10 = local_50;
    break;
  case 7:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      puVar7 = (undefined4 *)param_2[4];
      iVar12 = param_2[5];
      goto LAB_011b62ec;
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
        puVar7 = (undefined4 *)param_2[8];
        iVar12 = param_2[9];
        goto LAB_011b6308;
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
        puVar7 = (undefined4 *)param_2[10];
        goto LAB_011b6318;
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
        puVar7 = (undefined4 *)param_2[0xc];
      }
      goto LAB_011b6320;
    case 4:
      if (*(char *)(param_2 + 0x15) != '\0') {
        if (*(char *)(param_2 + 0x15) == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21bcc);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bcc);
      }
      local_e4 = (byte *)param_2[0x12];
    }
LAB_011b63a0:
    bVar2 = *local_e4;
    *(undefined1 *)(param_2 + 7) = 1;
    *(undefined1 *)(param_2 + 0x15) = 1;
    uVar4 = (uint)bVar2;
    iVar8 = 0;
    iVar10 = -0x7ffffffd;
    break;
  case 8:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      puVar7 = (undefined4 *)param_2[4];
      iVar12 = param_2[5];
      goto LAB_011b63d8;
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
        puVar7 = (undefined4 *)param_2[8];
        iVar12 = param_2[9];
        goto LAB_011b63f0;
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
        puVar7 = (undefined4 *)param_2[10];
        goto LAB_011b6400;
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
        puVar7 = (undefined4 *)param_2[0xc];
      }
      goto LAB_011b6408;
    }
switchD_011b5938_caseD_4:
    local_f0 = param_2 + 7;
    FUN_00be3ca4(&local_68,param_2 + 0x13);
    if (local_68 == 2) {
      *(undefined1 *)local_f0 = 4;
      *param_1 = 2;
      uVar3 = 8;
      goto LAB_011b658c;
    }
    local_e8 = (undefined4 *)local_58;
    local_d8 = local_4c;
    iStack_d4 = iStack_48;
    iStack_d0 = iStack_44;
    local_cc = local_40;
    iStack_c8 = iStack_3c;
    iStack_c4 = iStack_38;
    iStack_c0 = iStack_34;
    *(undefined1 *)local_f0 = 1;
    uVar4 = local_60;
    param_4 = local_64;
    unaff_r4 = local_5c;
    piVar5 = local_30;
    iVar8 = local_68;
    unaff_r11 = local_2c;
    in_r12 = local_54;
    iVar10 = local_50;
  }
  param_1[3] = (int)unaff_r4;
  *param_1 = iVar8;
  param_1[4] = (int)local_e8;
  param_1[5] = in_r12;
  param_1[1] = param_4;
  param_1[2] = uVar4;
  param_1[6] = iVar10;
  param_1[7] = local_d8;
  param_1[8] = iStack_d4;
  param_1[9] = iStack_d0;
  param_1[10] = local_cc;
  param_1[0xb] = iStack_c8;
  param_1[0xc] = iStack_c4;
  param_1[0xd] = iStack_c0;
  uVar3 = 1;
  param_1[0xe] = (int)piVar5;
  param_1[0xf] = unaff_r11;
LAB_011b658c:
  *(undefined1 *)(param_2 + 3) = uVar3;
  return;
}

