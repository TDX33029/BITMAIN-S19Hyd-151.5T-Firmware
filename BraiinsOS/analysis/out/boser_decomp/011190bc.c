// FUN_011190bc @ 011190bc size=984 calls_out=13 calls_in=0
// strings: A Tokio 1.x context was found; but it is being shutdown.

void FUN_011190bc(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *extraout_r2;
  int *extraout_r3;
  int *extraout_r3_00;
  undefined2 uVar16;
  uint uVar17;
  int *piVar18;
  int *piVar19;
  int *local_9c;
  undefined4 local_80;
  int *piStack_7c;
  int *piStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int *local_68;
  undefined4 local_64;
  int *local_60;
  int *local_5c;
  undefined4 local_58;
  int *piStack_54;
  int *piStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int *piStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x16]) {
  case '\0':
    iVar14 = *param_2;
    param_2[1] = iVar14;
    iVar13 = 1;
    param_2[2] = iVar14;
    param_2[3] = 1;
    *(undefined1 *)(param_2 + 7) = 0;
    iVar15 = iVar14;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c204fc);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c204fc);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[7]) {
    case '\0':
      iVar13 = param_2[3];
      iVar14 = param_2[1];
      iVar15 = param_2[2];
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(0x1c242a4);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(0x1c242a4);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x15]) {
      case '\0':
        iVar14 = param_2[8];
        iVar13 = param_2[9];
        goto LAB_011192a8;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(0x1c242b4);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(0x1c242b4);
      case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)param_2[0x14]) {
        case '\0':
          iVar14 = param_2[10];
          iVar13 = param_2[0xb];
          goto LAB_011192c0;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(0x1c242c4);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(0x1c242c4);
        case '\x03':
          goto switchD_011191b0_caseD_3;
        }
      }
    case '\x04':
      goto switchD_01119144_caseD_4;
    }
  }
  param_2[4] = iVar14;
  param_2[5] = iVar13;
  param_2[6] = iVar15;
  do {
    param_2[8] = iVar14;
    param_2[9] = iVar13;
    *(undefined1 *)(param_2 + 0x15) = 0;
LAB_011192a8:
    iVar14 = *(int *)(iVar14 + 8);
    *(undefined1 *)(param_2 + 0x14) = 0;
    iVar14 = iVar14 + 0x20;
    param_2[10] = iVar14;
    param_2[0xb] = iVar13;
LAB_011192c0:
    param_2[0x11] = iVar13;
    *(undefined1 *)(param_2 + 0x13) = 0;
    *(undefined1 *)(param_2 + 0x12) = 0;
    param_2[0xc] = iVar14;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
switchD_011191b0_caseD_3:
    local_9c = param_2 + 7;
    piVar19 = param_2 + 0x15;
    FUN_019e1354(&local_68,param_2 + 0xc,param_3);
    piVar18 = local_64;
    if (local_64._1_1_ == '\x02') {
      uVar11 = 3;
      *(undefined1 *)(param_2 + 0x14) = 3;
      *(undefined1 *)piVar19 = 3;
LAB_01119454:
      local_9c = param_2 + 7;
      *(undefined1 *)local_9c = uVar11;
      uVar11 = 3;
      *param_1 = 3;
      goto LAB_011194fc;
    }
    FUN_0121d24c(param_2 + 0xc);
    *(undefined1 *)(param_2 + 0x14) = 1;
    if (((uint)piVar18 & 0x100) != 0) {
      FUN_019a18a8(&local_68,0x28,"A Tokio 1.x context was found, but it is being shutdown.",0x38);
      piStack_34 = (int *)&DAT_00000001;
      uVar16 = 2;
      piVar18 = (int *)0x2;
      *(undefined1 *)piVar19 = 1;
      *(undefined1 *)local_9c = 1;
      local_60 = local_64;
      piStack_30 = extraout_r3;
      local_64 = local_68;
      goto LAB_011194c4;
    }
    *(undefined1 *)piVar19 = 1;
    param_2[8] = (int)local_68;
    param_2[9] = (uint)local_64 & 0xffff00ff;
switchD_01119144_caseD_4:
    local_9c = param_2 + 7;
    uVar12 = FUN_014a9348(param_3);
    if ((uVar12 & 1) != 0) {
      uVar11 = 4;
      goto LAB_01119454;
    }
    uVar1 = (uVar12 & 0xffffff) >> 0x10;
    if (*(int *)(param_2[6] + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d28f7c);
    }
    FUN_01609e8c(&local_68);
    uVar16 = (undefined2)local_64;
    uVar17 = (uint)local_64 & 0xffff;
    if ((uVar17 != 2) || (cVar10 = FUN_005ef5e8(&local_60), cVar10 != '\r')) {
      piVar19 = local_5c;
      piVar4 = local_60;
      piVar3 = local_68;
      piVar2 = (int *)((uint)local_64 >> 0x10);
      local_38 = local_58;
      piStack_34 = piStack_54;
      piStack_30 = piStack_50;
      uStack_2c = uStack_4c;
      uStack_28 = uStack_48;
      FUN_019edbc4(0,uVar1);
      uVar9 = uStack_28;
      uVar8 = uStack_2c;
      piVar7 = piStack_30;
      piVar6 = piStack_34;
      uVar5 = local_38;
      *(undefined1 *)local_9c = 1;
      piVar18 = (int *)0x2;
      if (uVar17 == 2) {
        uVar16 = 2;
        local_9c = (int *)&DAT_00000001;
        local_60 = piVar19;
        local_64 = piVar4;
      }
      else {
        local_9c = (int *)FUN_019dd2f8(&local_68,piVar3);
        piStack_34 = extraout_r2;
        piStack_30 = extraout_r3_00;
        if (local_68 != (int *)0x2) {
          local_80 = uVar5;
          piStack_7c = piVar6;
          piStack_78 = piVar7;
          uStack_74 = uVar8;
          uStack_70 = uVar9;
          local_9c = piVar2;
          piStack_34 = piVar4;
          piStack_30 = local_5c;
          piVar18 = local_68;
        }
      }
LAB_011194c4:
      *(short *)((int)param_1 + 0x12) = (short)local_9c;
      *param_1 = piVar18;
      *(undefined2 *)(param_1 + 4) = uVar16;
      param_1[1] = local_64;
      param_1[2] = local_60;
      param_1[5] = piStack_34;
      param_1[6] = piVar19;
      param_1[3] = piStack_30;
      param_1[7] = local_80;
      param_1[8] = piStack_7c;
      param_1[9] = piStack_78;
      param_1[10] = uStack_74;
      param_1[0xb] = uStack_70;
      uVar11 = 1;
LAB_011194fc:
      *(undefined1 *)(param_2 + 0x16) = uVar11;
      return;
    }
    local_40 = param_2[8];
    local_3c = param_2[9];
    FUN_019e0788(*(int *)(param_2[4] + 8) + 0x20,&local_40);
    FUN_019edbc4((uVar12 & 0xffffff) >> 8,uVar1);
    FUN_01119b28(&local_68);
    iVar14 = param_2[4];
    iVar13 = param_2[5];
  } while( true );
}

