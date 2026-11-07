// FUN_00f40228 @ 00f40228 size=5572 calls_out=29 calls_in=5
// strings: internal error: entered unreachable code | internal error: entered unreachable code | internal error: entered unreachable code | internal error: entered unreachable code | internal error: entered unreachable code | internal error: entered unreachable code

undefined4 FUN_00f40228(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  undefined1 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  int iVar16;
  int *local_220;
  int *local_21c;
  undefined1 auStack_218 [248];
  int local_120;
  int local_11c;
  int *local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int iStack_100;
  int iStack_fc;
  undefined1 local_e8;
  undefined1 auStack_d0 [172];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[2]) {
  case '\0':
    iVar6 = *param_1;
    param_1[3] = iVar6;
    param_1[4] = 0;
    param_1[1] = iVar6;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d25d50);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d25d50);
  case '\x03':
    if ((char)param_1[4] != '\0') {
      if ((char)param_1[4] == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d25d60);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d25d60);
    }
    iVar6 = param_1[3];
    break;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x101)) {
    case 0:
      goto switchD_00f40420_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d25d10);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d25d10);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x4c]) {
      case '\0':
        piVar8 = (int *)param_1[0x41];
        goto LAB_00f403a8;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b400);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b400);
      case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)param_1[0x4b]) {
        case '\0':
          piVar8 = (int *)param_1[0x42];
          goto LAB_00f403b8;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01d2b410);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01d2b410);
        }
      }
      goto switchD_00f40914_caseD_3;
    case 4:
      puVar10 = (undefined *)param_1[0x42];
      goto LAB_00f404e4;
    case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x4c]) {
      case '\0':
        piVar8 = (int *)param_1[0x41];
        goto LAB_00f405d4;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b400);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b400);
      case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)param_1[0x4b]) {
        case '\0':
          piVar8 = (int *)param_1[0x42];
          goto LAB_00f405e4;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01d2b410);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01d2b410);
        }
      }
      goto switchD_00f40b7c_caseD_3;
    case 6:
      puVar10 = (undefined *)param_1[0x42];
      goto LAB_00f40690;
    case 7:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x4c]) {
      case '\0':
        piVar8 = (int *)param_1[0x41];
        goto LAB_00f40710;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b400);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b400);
      case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)param_1[0x4b]) {
        case '\0':
          piVar8 = (int *)param_1[0x42];
          goto LAB_00f40720;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01d2b410);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01d2b410);
        }
      }
      goto switchD_00f40ba8_caseD_3;
    case 8:
      puVar10 = (undefined *)param_1[0x42];
      goto LAB_00f40868;
    case 9:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x4c]) {
      case '\0':
        piVar8 = (int *)param_1[0x41];
        goto LAB_00f408bc;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b400);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b400);
      case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)param_1[0x4b]) {
        case '\0':
          piVar8 = (int *)param_1[0x42];
          goto LAB_00f40958;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01d2b410);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01d2b410);
        }
      }
      goto switchD_00f40940_caseD_3;
    case 10:
      puVar10 = (undefined *)param_1[0x42];
      goto LAB_00f409fc;
    case 0xb:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x4c]) {
      case '\0':
        piVar8 = (int *)param_1[0x41];
        goto LAB_00f40a50;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b400);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b400);
      case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)param_1[0x4b]) {
        case '\0':
          piVar8 = (int *)param_1[0x42];
          goto LAB_00f40a60;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01d2b410);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01d2b410);
        }
      }
      goto switchD_00f408e8_caseD_3;
    case 0xc:
      puVar10 = (undefined *)param_1[0x42];
      goto LAB_00f40b04;
    case 0xd:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x4c]) {
      case '\0':
        piVar8 = (int *)param_1[0x41];
        goto LAB_00f40b58;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b400);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b400);
      case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)param_1[0x4b]) {
        case '\0':
          piVar8 = (int *)param_1[0x42];
          goto LAB_00f40bec;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01d2b410);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01d2b410);
        }
      }
      goto switchD_00f40bd4_caseD_3;
    case 0xe:
      puVar10 = (undefined *)param_1[0x42];
      goto LAB_00f40cb4;
    case 0xf:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x4c]) {
      case '\0':
        piVar8 = (int *)param_1[0x41];
        goto LAB_00f40d08;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b400);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b400);
      case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)param_1[0x4b]) {
        case '\0':
          piVar8 = (int *)param_1[0x42];
          goto LAB_00f40d44;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01d2b410);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01d2b410);
        }
      }
      goto switchD_00f40d2c_caseD_3;
    case 0x10:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_1 + 0x159)) {
      case 0:
        piVar8 = (int *)param_1[0x53];
        piVar11 = (int *)param_1[0x54];
        goto LAB_00f40de8;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d25e54);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d25e54);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)param_1[0x4c]) {
        case '\0':
          piVar8 = (int *)param_1[0x41];
          goto LAB_00f40f8c;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01d2b400);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01d2b400);
        case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((char)param_1[0x4b]) {
          case '\0':
            piVar8 = (int *)param_1[0x42];
            goto LAB_00f40fa0;
          case '\x01':
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01d2b410);
          case '\x02':
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01d2b410);
          }
        }
      }
    }
    goto switchD_00f41580_caseD_3;
  }
  uVar14 = 1;
  uVar15 = 0x1b;
  cVar5 = *(char *)(*(int *)(iVar6 + 4) + 8);
  *(undefined1 *)(param_1 + 4) = 1;
  if (cVar5 != '\0') goto LAB_00f4155c;
  puVar7 = (undefined1 *)(*(int *)(param_1[1] + 4) + 8);
  do {
    bVar2 = (bool)hasExclusiveAccess(puVar7);
  } while (!bVar2);
  *puVar7 = 1;
  FUN_01a35774(auStack_d0,param_1[1]);
  FUN_01bed4e2(auStack_218,&local_120,0xf5);
  FUN_01bed4e2(param_1 + 3,auStack_218,0xf5);
  *(undefined1 *)((int)param_1 + 0x101) = 0;
switchD_00f40420_caseD_0:
  local_21c = param_1 + 3;
  *(undefined4 *)((int)param_1 + 0xfd) = 0x1010101;
  *(undefined4 *)((int)param_1 + 0xf9) = 0x1010101;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *local_21c = param_1[0x17];
  param_1[4] = param_1[0x18];
  param_1[5] = param_1[0x19];
  param_1[6] = param_1[0x1a];
  param_1[7] = param_1[0x1b];
  param_1[8] = param_1[0x1c];
  param_1[9] = param_1[0x1d];
  param_1[10] = param_1[0x1e];
  param_1[0xb] = param_1[0x1f];
  param_1[0xc] = param_1[0x20];
  FUN_01a35774(param_1 + 0xd);
  param_1[0x27] = param_1[10];
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x21] = param_1[3];
  param_1[0x22] = param_1[5];
  param_1[0x23] = param_1[6];
  param_1[0x24] = param_1[7];
  param_1[0x25] = param_1[8];
  piVar8 = (int *)(param_1[5] + 8);
  *(undefined2 *)(param_1 + 0x3e) = 1;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined2 *)((int)param_1 + 0xfe) = 0;
  *(undefined4 *)((int)param_1 + 0xfa) = 0;
  param_1[0x26] = param_1[9];
  param_1[0x41] = (int)piVar8;
  param_1[0x28] = param_1[0xb];
LAB_00f403a8:
  *(undefined1 *)(param_1 + 0x4b) = 0;
  param_1[0x42] = (int)piVar8;
LAB_00f403b8:
  iVar6 = *piVar8;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = iVar6;
  param_1[0x49] = iVar6;
  param_1[0x43] = (int)(piVar8 + 1);
  param_1[0x44] = 0;
switchD_00f40914_caseD_3:
  bVar3 = FUN_019f9bc4(param_1 + 0x43,param_2);
  if (bVar3 == 2) {
    uVar4 = 3;
    *(undefined1 *)(param_1 + 0x4c) = 3;
    *(undefined1 *)(param_1 + 0x4b) = 3;
  }
  else {
    FUN_0193c3cc(param_1 + 0x43);
    if ((bVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b420);
    }
    piVar8 = (int *)param_1[0x42];
    iVar6 = *piVar8;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(undefined1 *)(param_1 + 0x4b) = 1;
    param_1[0x29] = (int)(piVar8 + 1);
    param_1[0x2a] = iVar6;
    param_1[0x2b] = (int)(piVar8 + 6);
    iVar6 = FUN_01a3a2bc(param_1[0x21] + 8);
    param_1[0x41] = iVar6;
    puVar10 = &DAT_01d2bb70;
    param_1[0x42] = (int)&DAT_01d2bb70;
LAB_00f404e4:
    cVar5 = (**(code **)(puVar10 + 0xc))(param_1[0x41],param_2);
    uVar4 = 4;
    if (cVar5 != '\x1c') {
      FUN_01139b38(param_1[0x41],param_1[0x42]);
      if (cVar5 != '\x1b') {
        FUN_019f8c54(param_1[0x29],param_1[0x2a]);
LAB_00f41104:
        piVar8 = (int *)param_1[0x28];
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar8;
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a39504(param_1[0x28]);
        }
        piVar8 = (int *)param_1[0x27];
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar8;
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38efc(param_1[0x27]);
        }
        piVar8 = (int *)param_1[0x26];
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar8;
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38efc(param_1[0x26]);
        }
        piVar8 = (int *)param_1[0x25];
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar8;
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38efc(param_1[0x25]);
        }
        piVar8 = (int *)param_1[0x24];
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar8;
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38efc(param_1[0x24]);
        }
        piVar8 = (int *)param_1[0x23];
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar8;
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38efc(param_1[0x23]);
        }
        piVar8 = (int *)param_1[0x22];
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar8;
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38efc(param_1[0x22]);
        }
        piVar8 = (int *)param_1[0x21];
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar8;
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38f34(param_1[0x21]);
        }
        if ((char)param_1[0x3e] != '\0') {
          FUN_005fb2fc(param_1 + 0xd);
        }
        piVar8 = (int *)param_1[4];
        *(undefined1 *)(param_1 + 0x3e) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar8;
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38efc(param_1[4]);
        }
        piVar8 = (int *)param_1[0xc];
        uVar15 = 2;
        if (piVar8 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar8;
            bVar2 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar2);
          *piVar8 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01a38404(param_1[0xc]);
          }
        }
LAB_00f41540:
        local_21c = param_1 + 3;
        uVar14 = 1;
        *(undefined4 *)((int)param_1 + 0xfd) = 0;
        *(undefined4 *)((int)param_1 + 0xf9) = 0;
        *(undefined1 *)((int)param_1 + 0x101) = 1;
        FUN_005f1388(local_21c);
        goto LAB_00f4155c;
      }
      FUN_019f8c54(param_1[0x29],param_1[0x2a]);
      *(undefined1 *)(param_1 + 0x4c) = 0;
      piVar8 = (int *)(param_1[0x23] + 8);
      param_1[0x41] = (int)piVar8;
LAB_00f405d4:
      *(undefined1 *)(param_1 + 0x4b) = 0;
      param_1[0x42] = (int)piVar8;
LAB_00f405e4:
      iVar6 = *piVar8;
      *(undefined1 *)(param_1 + 0x4a) = 0;
      param_1[0x46] = 0;
      param_1[0x47] = 0;
      param_1[0x48] = iVar6;
      param_1[0x49] = iVar6;
      param_1[0x43] = (int)(piVar8 + 1);
      param_1[0x44] = 0;
switchD_00f40b7c_caseD_3:
      bVar3 = FUN_019f9bc4(param_1 + 0x43,param_2);
      if (bVar3 == 2) {
        *(undefined1 *)(param_1 + 0x4c) = 3;
        *(undefined1 *)(param_1 + 0x4b) = 3;
        uVar4 = 5;
      }
      else {
        FUN_0193c3cc(param_1 + 0x43);
        if ((bVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b420);
        }
        piVar8 = (int *)param_1[0x42];
        iVar6 = *piVar8;
        *(undefined1 *)(param_1 + 0x4c) = 1;
        *(undefined1 *)(param_1 + 0x4b) = 1;
        param_1[0x2c] = (int)(piVar8 + 1);
        param_1[0x2d] = iVar6;
        param_1[0x2e] = (int)(piVar8 + 6);
        iVar6 = FUN_01a2e9bc(param_1[0x21] + 8);
        param_1[0x41] = iVar6;
        puVar10 = &DAT_01d2afd8;
        param_1[0x42] = (int)&DAT_01d2afd8;
LAB_00f40690:
        cVar5 = (**(code **)(puVar10 + 0xc))(param_1[0x41],param_2);
        uVar4 = 6;
        if (cVar5 != '\x1c') {
          FUN_01139b38(param_1[0x41],param_1[0x42]);
          if (cVar5 != '\x1b') {
            FUN_019f8c54(param_1[0x2c],param_1[0x2d]);
            goto LAB_00f41104;
          }
          FUN_019f8c54(param_1[0x2c],param_1[0x2d]);
          *(undefined1 *)(param_1 + 0x4c) = 0;
          piVar8 = (int *)(param_1[0x25] + 8);
          param_1[0x41] = (int)piVar8;
LAB_00f40710:
          *(undefined1 *)(param_1 + 0x4b) = 0;
          param_1[0x42] = (int)piVar8;
LAB_00f40720:
          iVar6 = *piVar8;
          *(undefined1 *)(param_1 + 0x4a) = 0;
          param_1[0x46] = 0;
          param_1[0x47] = 0;
          param_1[0x48] = iVar6;
          param_1[0x49] = iVar6;
          param_1[0x43] = (int)(piVar8 + 1);
          param_1[0x44] = 0;
switchD_00f40ba8_caseD_3:
          bVar3 = FUN_019f9bc4(param_1 + 0x43,param_2);
          if (bVar3 == 2) {
            *(undefined1 *)(param_1 + 0x4c) = 3;
            *(undefined1 *)(param_1 + 0x4b) = 3;
            uVar4 = 7;
          }
          else {
            FUN_0193c3cc(param_1 + 0x43);
            if ((bVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b420);
            }
            piVar8 = (int *)param_1[0x42];
            iVar6 = *piVar8;
            *(undefined1 *)(param_1 + 0x4c) = 1;
            *(undefined1 *)(param_1 + 0x4b) = 1;
            param_1[0x2f] = (int)(piVar8 + 1);
            param_1[0x30] = iVar6;
            param_1[0x31] = (int)(piVar8 + 6);
            iVar6 = FUN_01a2d118(param_1[0x21] + 8);
            param_1[0x41] = iVar6;
            puVar10 = &DAT_01d2ac28;
            param_1[0x42] = (int)&DAT_01d2ac28;
LAB_00f40868:
            cVar5 = (**(code **)(puVar10 + 0xc))(param_1[0x41],param_2);
            uVar4 = 8;
            if (cVar5 != '\x1c') {
              FUN_01139b38(param_1[0x41],param_1[0x42]);
              if (cVar5 != '\x1b') {
                FUN_019f8c54(param_1[0x2f],param_1[0x30]);
                goto LAB_00f41104;
              }
              FUN_019f8c54(param_1[0x2f],param_1[0x30]);
              *(undefined1 *)(param_1 + 0x4c) = 0;
              piVar8 = (int *)(param_1[0x26] + 8);
              param_1[0x41] = (int)piVar8;
LAB_00f408bc:
              *(undefined1 *)(param_1 + 0x4b) = 0;
              param_1[0x42] = (int)piVar8;
LAB_00f40958:
              iVar6 = *piVar8;
              *(undefined1 *)(param_1 + 0x4a) = 0;
              param_1[0x46] = 0;
              param_1[0x47] = 0;
              param_1[0x48] = iVar6;
              param_1[0x49] = iVar6;
              param_1[0x43] = (int)(piVar8 + 1);
              param_1[0x44] = 0;
switchD_00f40940_caseD_3:
              bVar3 = FUN_019f9bc4(param_1 + 0x43,param_2);
              if (bVar3 == 2) {
                *(undefined1 *)(param_1 + 0x4c) = 3;
                *(undefined1 *)(param_1 + 0x4b) = 3;
                uVar4 = 9;
              }
              else {
                FUN_0193c3cc(param_1 + 0x43);
                if ((bVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b420);
                }
                piVar8 = (int *)param_1[0x42];
                iVar6 = *piVar8;
                *(undefined1 *)(param_1 + 0x4c) = 1;
                *(undefined1 *)(param_1 + 0x4b) = 1;
                param_1[0x32] = (int)(piVar8 + 1);
                param_1[0x33] = iVar6;
                param_1[0x34] = (int)(piVar8 + 6);
                iVar6 = FUN_01a2d9a0(param_1[0x21] + 8);
                param_1[0x41] = iVar6;
                puVar10 = &DAT_01d2ae98;
                param_1[0x42] = (int)&DAT_01d2ae98;
LAB_00f409fc:
                cVar5 = (**(code **)(puVar10 + 0xc))(param_1[0x41],param_2);
                uVar4 = 10;
                if (cVar5 != '\x1c') {
                  FUN_01139b38(param_1[0x41],param_1[0x42]);
                  if (cVar5 != '\x1b') {
                    FUN_019f8c54(param_1[0x32],param_1[0x33]);
                    goto LAB_00f41104;
                  }
                  FUN_019f8c54(param_1[0x32],param_1[0x33]);
                  *(undefined1 *)(param_1 + 0x4c) = 0;
                  piVar8 = (int *)(param_1[0x27] + 8);
                  param_1[0x41] = (int)piVar8;
LAB_00f40a50:
                  *(undefined1 *)(param_1 + 0x4b) = 0;
                  param_1[0x42] = (int)piVar8;
LAB_00f40a60:
                  iVar6 = *piVar8;
                  *(undefined1 *)(param_1 + 0x4a) = 0;
                  param_1[0x46] = 0;
                  param_1[0x47] = 0;
                  param_1[0x48] = iVar6;
                  param_1[0x49] = iVar6;
                  param_1[0x43] = (int)(piVar8 + 1);
                  param_1[0x44] = 0;
switchD_00f408e8_caseD_3:
                  bVar3 = FUN_019f9bc4(param_1 + 0x43,param_2);
                  if (bVar3 == 2) {
                    *(undefined1 *)(param_1 + 0x4c) = 3;
                    *(undefined1 *)(param_1 + 0x4b) = 3;
                    uVar4 = 0xb;
                  }
                  else {
                    FUN_0193c3cc(param_1 + 0x43);
                    if ((bVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b420);
                    }
                    piVar8 = (int *)param_1[0x42];
                    iVar6 = *piVar8;
                    *(undefined1 *)(param_1 + 0x4c) = 1;
                    *(undefined1 *)(param_1 + 0x4b) = 1;
                    param_1[0x35] = (int)(piVar8 + 1);
                    param_1[0x36] = iVar6;
                    param_1[0x37] = (int)(piVar8 + 6);
                    iVar6 = FUN_01a34c94(param_1[0x21] + 8);
                    param_1[0x41] = iVar6;
                    puVar10 = &DAT_01d2b2e0;
                    param_1[0x42] = (int)&DAT_01d2b2e0;
LAB_00f40b04:
                    cVar5 = (**(code **)(puVar10 + 0xc))(param_1[0x41],param_2);
                    uVar4 = 0xc;
                    if (cVar5 != '\x1c') {
                      FUN_01139b38(param_1[0x41],param_1[0x42]);
                      if (cVar5 != '\x1b') {
                        FUN_019f8c54(param_1[0x35],param_1[0x36]);
                        goto LAB_00f41104;
                      }
                      FUN_019f8c54(param_1[0x35],param_1[0x36]);
                      *(undefined1 *)(param_1 + 0x4c) = 0;
                      piVar8 = (int *)(param_1[0x24] + 8);
                      param_1[0x41] = (int)piVar8;
LAB_00f40b58:
                      *(undefined1 *)(param_1 + 0x4b) = 0;
                      param_1[0x42] = (int)piVar8;
LAB_00f40bec:
                      iVar6 = *piVar8;
                      *(undefined1 *)(param_1 + 0x4a) = 0;
                      param_1[0x46] = 0;
                      param_1[0x47] = 0;
                      param_1[0x48] = iVar6;
                      param_1[0x49] = iVar6;
                      param_1[0x43] = (int)(piVar8 + 1);
                      param_1[0x44] = 0;
switchD_00f40bd4_caseD_3:
                      bVar3 = FUN_019f9bc4(param_1 + 0x43,param_2);
                      if (bVar3 == 2) {
                        *(undefined1 *)(param_1 + 0x4c) = 3;
                        *(undefined1 *)(param_1 + 0x4b) = 3;
                        uVar4 = 0xd;
                      }
                      else {
                        FUN_0193c3cc(param_1 + 0x43);
                        if ((bVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b420
                                      );
                        }
                        piVar8 = (int *)param_1[0x42];
                        iVar6 = *piVar8;
                        param_1[0x38] = (int)(piVar8 + 1);
                        param_1[0x3a] = (int)(piVar8 + 6);
                        *(undefined1 *)(param_1 + 0x3e) = 0;
                        param_1[0x39] = iVar6;
                        *(undefined1 *)(param_1 + 0x4c) = 1;
                        *(undefined1 *)(param_1 + 0x4b) = 1;
                        local_120 = param_1[0xd];
                        local_11c = param_1[0xe];
                        local_118 = (int *)param_1[0xf];
                        local_114 = param_1[0x10];
                        local_110 = param_1[0x11];
                        local_10c = param_1[0x12];
                        local_108 = param_1[0x13];
                        local_104 = param_1[0x14];
                        iStack_100 = param_1[0x15];
                        iStack_fc = param_1[0x16];
                        iVar6 = FUN_01a39988(param_1[0x21] + 8);
                        param_1[0x41] = iVar6;
                        puVar10 = &DAT_01d2b8c0;
                        param_1[0x42] = (int)&DAT_01d2b8c0;
LAB_00f40cb4:
                        cVar5 = (**(code **)(puVar10 + 0xc))(param_1[0x41],param_2);
                        uVar4 = 0xe;
                        if (cVar5 != '\x1c') {
                          FUN_01139b38(param_1[0x41],param_1[0x42]);
                          if (cVar5 != '\x1b') {
                            FUN_019f8c54(param_1[0x38],param_1[0x39]);
                            goto LAB_00f41104;
                          }
                          FUN_019f8c54(param_1[0x38],param_1[0x39]);
                          *(undefined1 *)(param_1 + 0x4c) = 0;
                          piVar8 = (int *)(param_1[0x28] + 8);
                          param_1[0x41] = (int)piVar8;
LAB_00f40d08:
                          *(undefined1 *)(param_1 + 0x4b) = 0;
                          param_1[0x42] = (int)piVar8;
LAB_00f40d44:
                          iVar6 = *piVar8;
                          *(undefined1 *)(param_1 + 0x4a) = 0;
                          param_1[0x46] = 0;
                          param_1[0x47] = 0;
                          param_1[0x48] = iVar6;
                          param_1[0x49] = iVar6;
                          param_1[0x43] = (int)(piVar8 + 1);
                          param_1[0x44] = 0;
switchD_00f40d2c_caseD_3:
                          bVar3 = FUN_019f9bc4(param_1 + 0x43,param_2);
                          if (bVar3 == 2) {
                            *(undefined1 *)(param_1 + 0x4c) = 3;
                            *(undefined1 *)(param_1 + 0x4b) = 3;
                            uVar4 = 0xf;
                            goto LAB_00f40ffc;
                          }
                          FUN_0193c3cc(param_1 + 0x43);
                          if ((bVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_012fb0ec("internal error: entered unreachable code",0x28,
                                         &DAT_01d2b420);
                          }
                          piVar11 = (int *)param_1[0x42];
                          piVar8 = piVar11 + 6;
                          iVar6 = *piVar11;
                          *(undefined1 *)((int)param_1 + 0x159) = 0;
                          *(undefined1 *)(param_1 + 0x4c) = 1;
                          *(undefined1 *)(param_1 + 0x4b) = 1;
                          param_1[0x3b] = (int)(piVar11 + 1);
                          piVar11 = (int *)(param_1[0x21] + 8);
                          param_1[0x3c] = iVar6;
                          param_1[0x3d] = (int)piVar8;
                          param_1[0x53] = (int)piVar8;
                          param_1[0x54] = (int)piVar11;
LAB_00f40de8:
                          param_1[0x4d] = (int)piVar8;
                          *(undefined1 *)(param_1 + 0x56) = 0;
                          param_1[0x55] = 0;
                          if ((char)piVar8[4] == '\0') {
                            piVar8 = (int *)*piVar11;
                            do {
                              iVar6 = *piVar8;
                              bVar2 = (bool)hasExclusiveAccess(piVar8);
                            } while (!bVar2);
                            *piVar8 = iVar6 + 1;
                            if (iVar6 < 0) {
LAB_00f41a14:
                    /* WARNING: Does not return */
                              pcVar1 = (code *)software_udf(0xfdee,0xf41a14);
                              (*pcVar1)();
                            }
                            piVar13 = piVar8 + 0x11;
                            do {
                              bVar2 = (bool)hasExclusiveAccess(piVar13);
                            } while (!bVar2);
                            *piVar13 = *piVar13 + 1;
                            param_1[0x4e] = (int)piVar8;
                            *(undefined1 *)(param_1 + 0x56) = 1;
                            piVar8 = (int *)piVar11[1];
                            do {
                              iVar6 = *piVar8;
                              bVar2 = (bool)hasExclusiveAccess(piVar8);
                            } while (!bVar2);
                            *piVar8 = iVar6 + 1;
                            if (iVar6 < 0) goto LAB_00f41a14;
                            piVar13 = piVar8 + 0x11;
                            do {
                              bVar2 = (bool)hasExclusiveAccess(piVar13);
                            } while (!bVar2);
                            *piVar13 = *piVar13 + 1;
                            param_1[0x4f] = (int)piVar8;
                            *(undefined1 *)((int)param_1 + 0x157) = 1;
                            piVar8 = (int *)piVar11[4];
                            do {
                              iVar6 = *piVar8;
                              bVar2 = (bool)hasExclusiveAccess(piVar8);
                            } while (!bVar2);
                            *piVar8 = iVar6 + 1;
                            if (iVar6 < 0) goto LAB_00f41a14;
                            piVar13 = piVar8 + 0x11;
                            do {
                              bVar2 = (bool)hasExclusiveAccess(piVar13);
                            } while (!bVar2);
                            *piVar13 = *piVar13 + 1;
                            *(undefined1 *)((int)param_1 + 0x156) = 1;
                            param_1[0x50] = (int)piVar8;
                            piVar8 = *(int **)param_1[0x4d];
                            do {
                              iVar6 = *piVar8;
                              bVar2 = (bool)hasExclusiveAccess(piVar8);
                            } while (!bVar2);
                            *piVar8 = iVar6 + 1;
                            if (iVar6 < 0) goto LAB_00f41a14;
                            param_1[0x51] = (int)piVar8;
                            *(undefined1 *)((int)param_1 + 0x155) = 1;
                            piVar8 = (int *)piVar11[10];
                            do {
                              iVar6 = *piVar8;
                              bVar2 = (bool)hasExclusiveAccess(piVar8);
                            } while (!bVar2);
                            *piVar8 = iVar6 + 1;
                            if (iVar6 < 0) goto LAB_00f41a14;
                            *(undefined1 *)(param_1 + 0x55) = 1;
                            param_1[0x52] = (int)piVar8;
                            *(undefined1 *)(param_1[0x4d] + 0x10) = 1;
                            iVar6 = *(int *)(param_1[0x4d] + 8);
                            *(undefined1 *)(param_1 + 0x4c) = 0;
                            piVar8 = (int *)(iVar6 + 8);
                            param_1[0x41] = (int)piVar8;
LAB_00f40f8c:
                            param_1[0x42] = (int)piVar8;
                            *(undefined1 *)(param_1 + 0x4b) = 0;
LAB_00f40fa0:
                            iVar6 = *piVar8;
                            *(undefined1 *)(param_1 + 0x4a) = 0;
                            param_1[0x46] = 0;
                            param_1[0x47] = 0;
                            param_1[0x48] = iVar6;
                            param_1[0x49] = iVar6;
                            param_1[0x43] = (int)(piVar8 + 1);
                            param_1[0x44] = 0;
switchD_00f41580_caseD_3:
                            local_220 = param_1 + 0x4c;
                            bVar3 = FUN_019f9bc4(param_1 + 0x43,param_2);
                            if (bVar3 == 2) {
                              *(undefined1 *)(param_1 + 0x4b) = 3;
                              *(undefined1 *)((int)param_1 + 0x159) = 3;
                              *(undefined1 *)local_220 = 3;
                              uVar4 = 0x10;
                              goto LAB_00f40ffc;
                            }
                            FUN_0193c3cc(param_1 + 0x43);
                            if ((bVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_012fb0ec("internal error: entered unreachable code",0x28,
                                           &DAT_01d2b420);
                            }
                            puVar9 = (undefined4 *)param_1[0x42];
                            uVar15 = *puVar9;
                            *(undefined1 *)(param_1 + 0x4b) = 1;
                            *(undefined1 *)local_220 = 1;
                            iVar6 = puVar9[6];
                            iVar16 = puVar9[7];
                            puVar9[6] = 0;
                            FUN_019f8c54(puVar9 + 1,uVar15);
                            piVar8 = *(int **)(param_1[0x4d] + 0xc);
                            do {
                              iVar12 = *piVar8;
                              bVar2 = (bool)hasExclusiveAccess(piVar8);
                            } while (!bVar2);
                            *piVar8 = iVar12 + 1;
                            if (iVar12 < 0) goto LAB_00f41a14;
                            param_1[0x55] = 0;
                            local_104 = param_1[0x4e];
                            local_108 = param_1[0x4f];
                            local_10c = param_1[0x50];
                            local_114 = param_1[0x51];
                            local_110 = param_1[0x52];
                            *(undefined1 *)(param_1 + 0x56) = 0;
                            local_e8 = 0;
                            local_120 = iVar6;
                            local_11c = iVar16;
                            local_118 = piVar8;
                            piVar8 = (int *)FUN_01958e7c(&local_120,&DAT_01d25e64);
                            if (*piVar8 == 0xcc) {
                              DataMemoryBarrier(0xb);
                              bVar2 = (bool)hasExclusiveAccess(piVar8);
                              if (!bVar2) goto LAB_00f41318;
                              *piVar8 = 0x84;
                            }
                            else {
                              ClearExclusiveLocal();
LAB_00f41318:
                              (**(code **)(piVar8[2] + 0x10))();
                            }
                            *(undefined1 *)(param_1 + 0x56) = 0;
                            param_1[0x55] = 0;
                          }
                          *(undefined1 *)((int)param_1 + 0x159) = 1;
                          FUN_0193f1b0(param_1 + 0x41);
                          FUN_019f8c54(param_1[0x3b],param_1[0x3c]);
                          piVar8 = (int *)param_1[0x28];
                          DataMemoryBarrier(0xb);
                          do {
                            iVar6 = *piVar8;
                            bVar2 = (bool)hasExclusiveAccess(piVar8);
                          } while (!bVar2);
                          *piVar8 = iVar6 + -1;
                          if (iVar6 == 1) {
                            DataMemoryBarrier(0xb);
                            FUN_01a39504(param_1[0x28]);
                          }
                          piVar8 = (int *)param_1[0x27];
                          DataMemoryBarrier(0xb);
                          do {
                            iVar6 = *piVar8;
                            bVar2 = (bool)hasExclusiveAccess(piVar8);
                          } while (!bVar2);
                          *piVar8 = iVar6 + -1;
                          if (iVar6 == 1) {
                            DataMemoryBarrier(0xb);
                            FUN_01a38efc(param_1[0x27]);
                          }
                          piVar8 = (int *)param_1[0x26];
                          DataMemoryBarrier(0xb);
                          do {
                            iVar6 = *piVar8;
                            bVar2 = (bool)hasExclusiveAccess(piVar8);
                          } while (!bVar2);
                          *piVar8 = iVar6 + -1;
                          if (iVar6 == 1) {
                            DataMemoryBarrier(0xb);
                            FUN_01a38efc(param_1[0x26]);
                          }
                          piVar8 = (int *)param_1[0x25];
                          DataMemoryBarrier(0xb);
                          do {
                            iVar6 = *piVar8;
                            bVar2 = (bool)hasExclusiveAccess(piVar8);
                          } while (!bVar2);
                          *piVar8 = iVar6 + -1;
                          if (iVar6 == 1) {
                            DataMemoryBarrier(0xb);
                            FUN_01a38efc(param_1[0x25]);
                          }
                          piVar8 = (int *)param_1[0x24];
                          DataMemoryBarrier(0xb);
                          do {
                            iVar6 = *piVar8;
                            bVar2 = (bool)hasExclusiveAccess(piVar8);
                          } while (!bVar2);
                          *piVar8 = iVar6 + -1;
                          if (iVar6 == 1) {
                            DataMemoryBarrier(0xb);
                            FUN_01a38efc(param_1[0x24]);
                          }
                          piVar8 = (int *)param_1[0x23];
                          DataMemoryBarrier(0xb);
                          do {
                            iVar6 = *piVar8;
                            bVar2 = (bool)hasExclusiveAccess(piVar8);
                          } while (!bVar2);
                          *piVar8 = iVar6 + -1;
                          if (iVar6 == 1) {
                            DataMemoryBarrier(0xb);
                            FUN_01a38efc(param_1[0x23]);
                          }
                          piVar8 = (int *)param_1[0x22];
                          DataMemoryBarrier(0xb);
                          do {
                            iVar6 = *piVar8;
                            bVar2 = (bool)hasExclusiveAccess(piVar8);
                          } while (!bVar2);
                          *piVar8 = iVar6 + -1;
                          if (iVar6 == 1) {
                            DataMemoryBarrier(0xb);
                            FUN_01a38efc(param_1[0x22]);
                          }
                          piVar8 = (int *)param_1[0x21];
                          DataMemoryBarrier(0xb);
                          do {
                            iVar6 = *piVar8;
                            bVar2 = (bool)hasExclusiveAccess(piVar8);
                          } while (!bVar2);
                          *piVar8 = iVar6 + -1;
                          if (iVar6 == 1) {
                            DataMemoryBarrier(0xb);
                            FUN_01a38f34(param_1[0x21]);
                          }
                          piVar8 = (int *)param_1[4];
                          *(undefined1 *)(param_1 + 0x3e) = 0;
                          DataMemoryBarrier(0xb);
                          do {
                            iVar6 = *piVar8;
                            bVar2 = (bool)hasExclusiveAccess(piVar8);
                          } while (!bVar2);
                          *piVar8 = iVar6 + -1;
                          if (iVar6 == 1) {
                            DataMemoryBarrier(0xb);
                            FUN_01a38efc(param_1[4]);
                          }
                          piVar8 = (int *)param_1[0xc];
                          uVar15 = 0x1b;
                          if (piVar8 != (int *)0x0) {
                            DataMemoryBarrier(0xb);
                            do {
                              iVar6 = *piVar8;
                              bVar2 = (bool)hasExclusiveAccess(piVar8);
                            } while (!bVar2);
                            *piVar8 = iVar6 + -1;
                            if (iVar6 == 1) {
                              DataMemoryBarrier(0xb);
                              FUN_01a38404(param_1[0xc]);
                            }
                          }
                          goto LAB_00f41540;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00f40ffc:
  uVar15 = 0x1c;
  uVar14 = 4;
  *(undefined1 *)((int)param_1 + 0x101) = uVar4;
LAB_00f4155c:
  *(undefined1 *)(param_1 + 2) = uVar14;
  return uVar15;
}

