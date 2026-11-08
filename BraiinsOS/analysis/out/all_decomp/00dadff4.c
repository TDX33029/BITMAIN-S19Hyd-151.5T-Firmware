// FUN_00dadff4 @ 00dadff4 size=1572 calls_out=18 calls_in=1
// strings: A Tokio 1.x context was found; but it is being shutdown.

void FUN_00dadff4(undefined4 *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  undefined8 uVar20;
  int *local_188;
  undefined1 auStack_180 [112];
  undefined1 auStack_110 [112];
  int *local_a0;
  undefined4 local_9c;
  int *local_98;
  int *local_94 [28];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x16]) {
  case '\0':
    iVar8 = *param_2;
    param_2[1] = iVar8;
    iVar5 = 1;
    param_2[2] = iVar8;
    param_2[3] = 1;
    *(undefined1 *)(param_2 + 7) = 0;
    iVar9 = iVar8;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187a1cc);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187a1cc);
  case '\x03':
    uVar4 = (&switchD_00dae07c::switchdataD_00dae080)[*(byte *)(param_2 + 7)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(param_2 + 7)) {
    case 0:
      iVar5 = param_2[3];
      iVar8 = param_2[1];
      iVar9 = param_2[2];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187a1dc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187a1dc);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x15]) {
      case '\0':
        iVar8 = param_2[8];
        iVar5 = param_2[9];
        goto LAB_00dae1b0;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187a1ec);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187a1ec);
      case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)param_2[0x14]) {
        case '\0':
          iVar8 = param_2[10];
          iVar5 = param_2[0xb];
          goto LAB_00dae1d0;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_0187a1fc);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_0187a1fc);
        case '\x03':
          goto switchD_00dae0ec_caseD_3;
        }
      }
    case 4:
      goto switchD_00dae07c_caseD_4;
    }
  }
  param_2[4] = iVar8;
  param_2[5] = iVar5;
  param_2[6] = iVar9;
  do {
    param_2[8] = iVar8;
    param_2[9] = iVar5;
    *(undefined1 *)(param_2 + 0x15) = 0;
LAB_00dae1b0:
    iVar8 = *(int *)(iVar8 + 8) + 0x20;
    param_2[10] = iVar8;
    param_2[0xb] = iVar5;
    *(undefined1 *)(param_2 + 0x14) = 0;
LAB_00dae1d0:
    param_2[0x11] = iVar5;
    *(undefined1 *)(param_2 + 0x13) = 0;
    *(undefined1 *)(param_2 + 0x12) = 0;
    param_2[0xc] = iVar8;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
switchD_00dae0ec_caseD_3:
    piVar15 = param_2 + 0x15;
    FUN_0163ab0c(&local_a0,param_2 + 0xc,param_3);
    piVar19 = local_9c;
    if (local_9c._1_1_ == '\x02') {
      uVar12 = 3;
      *(undefined1 *)(param_2 + 0x14) = 3;
      *(undefined1 *)piVar15 = 3;
      goto LAB_00dae604;
    }
    piVar16 = (int *)param_2[0xc];
    piVar18 = piVar16 + 3;
    if ((char)*piVar18 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(piVar18);
      if (!bVar1) goto LAB_00dae23c;
      *(char *)piVar18 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_00dae23c:
      FUN_01280da8(piVar18);
    }
    FUN_0128236c(piVar18);
    piVar17 = param_2 + 0xd;
    if (*piVar17 == 0) {
      if ((int *)piVar16[4] == piVar17) {
        piVar6 = (int *)param_2[0xe];
        piVar16[4] = (int)piVar6;
        goto joined_r0x00dae29c;
      }
    }
    else {
      piVar6 = (int *)param_2[0xe];
      *(int **)(*piVar17 + 4) = piVar6;
joined_r0x00dae29c:
      if (piVar6 == (int *)0x0) {
        if ((int *)piVar16[5] != piVar17) goto LAB_00dae2ac;
        piVar16[5] = *piVar17;
      }
      else {
        *piVar6 = *piVar17;
      }
      param_2[0xd] = 0;
      param_2[0xe] = 0;
    }
LAB_00dae2ac:
    FUN_01282570(piVar18);
    if ((char)*piVar18 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar18);
        if (bVar1) {
          *(char *)piVar18 = '\0';
          goto LAB_00dae2ec;
        }
      } while ((char)*piVar18 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(piVar18);
LAB_00dae2ec:
    if (param_2[0xf] != 0) {
      (**(code **)(param_2[0xf] + 0xc))(param_2[0x10]);
    }
    *(undefined1 *)(param_2 + 0x14) = 1;
    if (((uint)piVar19 & 0x100) != 0) {
      FUN_015e79d4(&local_a0,0x28,"A Tokio 1.x context was found, but it is being shutdown.",0x38);
      *(undefined1 *)piVar15 = 1;
      local_98 = local_9c;
      piVar19 = param_2 + 8;
      goto LAB_00dae550;
    }
    uVar4 = (uint)local_9c & 0xff;
    *(undefined1 *)piVar15 = 1;
    param_2[8] = (int)local_a0;
    param_2[9] = (uint)local_9c & 0xffff00ff;
switchD_00dae07c_caseD_4:
    uVar20 = thunk_FUN_016de0ee(uVar4,0x40);
    iVar8 = (int)uVar20 + (int)((ulonglong)uVar20 >> 0x20);
    if (*(char *)(iVar8 + 0x38) == '\x01') {
LAB_00dae5ac:
      bVar3 = *(byte *)(iVar8 + 0x31);
      piVar18 = (int *)(uint)bVar3;
      piVar17 = (int *)(uint)*(byte *)(iVar8 + 0x30);
      if (piVar17 == (int *)&DAT_00000001) {
        if (piVar18 == (int *)0x0) {
          uVar12 = 4;
          FUN_016455a4(*(undefined4 *)*param_3,((undefined4 *)*param_3)[1]);
LAB_00dae604:
          local_188 = param_2 + 7;
          *(undefined1 *)local_188 = uVar12;
          *param_1 = 3;
          *(undefined1 *)(param_2 + 0x16) = 3;
          return;
        }
        bVar3 = bVar3 - 1;
      }
      *(byte *)(iVar8 + 0x31) = bVar3;
      iVar5 = *(int *)(param_2[6] + 0xc);
    }
    else {
      piVar17 = (int *)0x0;
      piVar18 = (int *)0x0;
      if (*(char *)(iVar8 + 0x38) != '\x02') {
        FUN_015e8e6c(iVar8,FUN_005bc49c);
        *(undefined1 *)(iVar8 + 0x38) = 1;
        goto LAB_00dae5ac;
      }
      iVar5 = *(int *)(param_2[6] + 0xc);
    }
    if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ad11c);
    }
    local_188 = param_2 + 7;
    FUN_0126dc90(&local_a0);
    piVar19 = local_98;
    piVar16 = local_9c;
    piVar15 = local_a0;
    if (local_a0 != (int *)0xffffffff) {
      FUN_016dd1aa(auStack_180,local_94,0x6c);
      *(undefined1 *)local_188 = 1;
      FUN_0163dd78(&local_a0,piVar15);
      if (local_a0 == (int *)&SUB_00000002) goto LAB_00dae558;
      FUN_016dd1aa(auStack_110,auStack_180,0x6c);
      goto LAB_00dae55c;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((uint)local_9c & 0xff) {
    case 0:
      cVar2 = FUN_005bc530(local_98);
      if (cVar2 == '\r') goto LAB_00dae3b4;
LAB_00dae48c:
      FUN_016dd1aa(auStack_180,local_94,0x6c);
      local_a0 = local_9c;
      piVar16 = piVar17;
      piVar19 = piVar18;
LAB_00dae550:
      local_188 = param_2 + 7;
      *(undefined1 *)local_188 = 1;
      local_9c = local_a0;
LAB_00dae558:
      local_94[0] = piVar15;
      local_a0 = (int *)&SUB_00000002;
LAB_00dae55c:
      *param_1 = local_a0;
      param_1[3] = local_94[0];
      param_1[1] = local_9c;
      param_1[2] = local_98;
      param_1[4] = piVar16;
      param_1[5] = piVar19;
      FUN_016dd1aa(param_1 + 6,auStack_110,0x6c);
      *(undefined1 *)(param_2 + 0x16) = 1;
      return;
    case 1:
      cVar2 = local_9c._1_1_;
      break;
    default:
      cVar2 = (char)local_98[2];
    }
    if (cVar2 != '\r') goto LAB_00dae48c;
LAB_00dae3b4:
    uVar10 = param_2[8];
    bVar3 = *(byte *)(param_2 + 9);
    puVar11 = (uint *)(*(int *)(param_2[4] + 8) + 0x28);
    DataMemoryBarrier(0xb);
    uVar4 = *(uint *)(*(int *)(param_2[4] + 8) + 0x28);
    do {
      while( true ) {
        if ((uint)bVar3 != (uVar4 & 0xffffff) >> 0x10) goto LAB_00dae438;
        uVar13 = *puVar11;
        if (uVar13 == uVar4) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        uVar4 = uVar13;
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar11);
      if (bVar1) {
        *puVar11 = uVar4 & (uVar10 & 0x33 ^ 0xff003f);
      }
      DataMemoryBarrier(0xb);
      uVar4 = uVar13;
    } while (!bVar1);
LAB_00dae438:
    if (piVar17 == (int *)0x0) {
LAB_00dae454:
      if (local_a0 == (int *)0xffffffff) goto LAB_00dae654;
LAB_00dae460:
      FUN_016dffb2();
    }
    else {
      if (*(char *)(iVar8 + 0x38) != '\x01') {
        if (*(char *)(iVar8 + 0x38) == '\x02') goto LAB_00dae454;
        FUN_015e8e6c(iVar8,FUN_01655ec4);
        *(undefined1 *)(iVar8 + 0x38) = 1;
      }
      *(char *)(iVar8 + 0x31) = (char)piVar18;
      *(undefined1 *)(iVar8 + 0x30) = 1;
      if (local_a0 != (int *)0xffffffff) goto LAB_00dae460;
LAB_00dae654:
      piVar15 = local_98;
      if ((char)local_9c == '\x03') {
        iVar8 = *local_98;
        puVar14 = (undefined4 *)local_98[1];
        pcVar7 = (code *)*puVar14;
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)(iVar8);
        }
        if (puVar14[1] != 0) {
          thunk_FUN_016d3fb4(iVar8);
        }
        thunk_FUN_016d3fb4(piVar15);
      }
    }
    iVar8 = param_2[4];
    iVar5 = param_2[5];
  } while( true );
}

