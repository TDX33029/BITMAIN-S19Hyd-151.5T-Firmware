// FUN_005eb444 @ 005eb444 size=5356 calls_out=30 calls_in=5
// strings: internal error: entered unreachable code | internal error: entered unreachable code | internal error: entered unreachable code | internal error: entered unreachable code | internal error: entered unreachable code | internal error: entered unreachable code

undefined4 FUN_005eb444(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined1 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  int iVar11;
  int *piVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  int iVar15;
  bool bVar16;
  undefined1 *local_22c;
  int *local_228;
  int *local_224;
  undefined1 auStack_220 [248];
  int local_128;
  int local_124;
  int *local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int iStack_108;
  int iStack_104;
  undefined1 local_f0;
  undefined1 auStack_d8 [168];
  int local_30;
  int iStack_2c;
  int iStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[2]) {
  case '\0':
    iVar5 = *param_1;
    param_1[3] = iVar5;
    param_1[4] = 0;
    param_1[1] = iVar5;
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
    iVar5 = param_1[3];
    break;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x101)) {
    case 0:
      goto switchD_005eb63c_caseD_0;
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
        piVar7 = (int *)param_1[0x41];
        goto LAB_005eb5c4;
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
          piVar7 = (int *)param_1[0x42];
          goto LAB_005eb5d4;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01d2b410);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01d2b410);
        }
      }
      goto switchD_005ebb04_caseD_3;
    case 4:
      puVar10 = (undefined *)param_1[0x42];
      goto LAB_005eb700;
    case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x4c]) {
      case '\0':
        piVar7 = (int *)param_1[0x41];
        goto LAB_005eb7cc;
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
          piVar7 = (int *)param_1[0x42];
          goto LAB_005eb7dc;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01d2b410);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01d2b410);
        }
      }
      goto switchD_005ebb30_caseD_3;
    case 6:
      puVar10 = (undefined *)param_1[0x42];
      goto LAB_005eb888;
    case 7:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x4c]) {
      case '\0':
        piVar7 = (int *)param_1[0x41];
        goto LAB_005eb944;
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
          piVar7 = (int *)param_1[0x42];
          goto LAB_005eb954;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01d2b410);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01d2b410);
        }
      }
      goto switchD_005ebb88_caseD_3;
    case 8:
      puVar10 = (undefined *)param_1[0x42];
      goto LAB_005eba58;
    case 9:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x4c]) {
      case '\0':
        piVar7 = (int *)param_1[0x41];
        goto LAB_005ebaac;
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
          piVar7 = (int *)param_1[0x42];
          goto LAB_005ebc04;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01d2b410);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01d2b410);
        }
      }
      goto switchD_005ebbec_caseD_3;
    case 10:
      puVar10 = (undefined *)param_1[0x42];
      goto LAB_005ebca8;
    case 0xb:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x4c]) {
      case '\0':
        piVar7 = (int *)param_1[0x41];
        goto LAB_005ebcfc;
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
          piVar7 = (int *)param_1[0x42];
          goto LAB_005ebd0c;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01d2b410);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01d2b410);
        }
      }
      goto switchD_005ebb5c_caseD_3;
    case 0xc:
      puVar10 = (undefined *)param_1[0x42];
      goto LAB_005ebdb0;
    case 0xd:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x4c]) {
      case '\0':
        piVar7 = (int *)param_1[0x41];
        goto LAB_005ebe04;
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
          piVar7 = (int *)param_1[0x42];
          goto LAB_005ebe14;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01d2b410);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01d2b410);
        }
      }
      goto switchD_005ebad8_caseD_3;
    case 0xe:
      puVar10 = (undefined *)param_1[0x42];
      goto LAB_005ebedc;
    case 0xf:
      goto switchD_005eb63c_caseD_f;
    case 0x10:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_1 + 0x159)) {
      case 0:
        iVar5 = param_1[0x53];
        piVar7 = (int *)param_1[0x54];
        goto LAB_005ebf8c;
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
          piVar7 = (int *)param_1[0x41];
          goto LAB_005ec100;
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
            piVar7 = (int *)param_1[0x42];
            goto LAB_005ec114;
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
    goto switchD_005ec700_caseD_3;
  }
  uVar13 = 1;
  uVar14 = 0x1b;
  cVar4 = *(char *)(*(int *)(iVar5 + 4) + 8);
  *(undefined1 *)(param_1 + 4) = 1;
  if (cVar4 != '\0') goto LAB_005ec6d8;
  puVar6 = (undefined1 *)(*(int *)(param_1[1] + 4) + 8);
  do {
    bVar16 = (bool)hasExclusiveAccess(puVar6);
  } while (!bVar16);
  *puVar6 = 1;
  FUN_01a35774(auStack_d8,param_1[1]);
  FUN_01bed4e2(auStack_220,&local_128,0xf5);
  FUN_01bed4e2(param_1 + 3,auStack_220,0xf5);
  *(undefined1 *)((int)param_1 + 0x101) = 0;
switchD_005eb63c_caseD_0:
  local_224 = param_1 + 3;
  *(undefined4 *)((int)param_1 + 0xfd) = 0x1010101;
  *(undefined4 *)((int)param_1 + 0xf9) = 0x1010101;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *local_224 = param_1[0x17];
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
  piVar7 = (int *)(param_1[5] + 8);
  *(undefined2 *)(param_1 + 0x3e) = 1;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined2 *)((int)param_1 + 0xfe) = 0;
  *(undefined4 *)((int)param_1 + 0xfa) = 0;
  param_1[0x26] = param_1[9];
  param_1[0x41] = (int)piVar7;
  param_1[0x28] = param_1[0xb];
LAB_005eb5c4:
  *(undefined1 *)(param_1 + 0x4b) = 0;
  param_1[0x42] = (int)piVar7;
LAB_005eb5d4:
  iVar5 = *piVar7;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = iVar5;
  param_1[0x49] = iVar5;
  param_1[0x43] = (int)(piVar7 + 1);
  param_1[0x44] = 0;
switchD_005ebb04_caseD_3:
  bVar2 = FUN_019f9bc4(param_1 + 0x43,param_2);
  if (bVar2 == 2) {
    uVar3 = 3;
    *(undefined1 *)(param_1 + 0x4c) = 3;
    *(undefined1 *)(param_1 + 0x4b) = 3;
  }
  else {
    FUN_0193c3cc(param_1 + 0x43);
    if ((bVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b420);
    }
    piVar7 = (int *)param_1[0x42];
    iVar5 = *piVar7;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(undefined1 *)(param_1 + 0x4b) = 1;
    param_1[0x29] = (int)(piVar7 + 1);
    param_1[0x2a] = iVar5;
    param_1[0x2b] = (int)(piVar7 + 6);
    iVar5 = FUN_01a3a2bc(param_1[0x21] + 8);
    param_1[0x41] = iVar5;
    puVar10 = &DAT_01d2bb70;
    param_1[0x42] = (int)&DAT_01d2bb70;
LAB_005eb700:
    cVar4 = (**(code **)(puVar10 + 0xc))(param_1[0x41],param_2);
    uVar3 = 4;
    if (cVar4 != '\x1c') {
      FUN_01139b38(param_1[0x41],param_1[0x42]);
      if (cVar4 != '\x1b') {
        FUN_019f8c54(param_1[0x29],param_1[0x2a]);
LAB_005ec288:
        piVar7 = (int *)param_1[0x28];
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar7;
          bVar16 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar16);
        *piVar7 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a39504(param_1[0x28]);
        }
        piVar7 = (int *)param_1[0x27];
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar7;
          bVar16 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar16);
        *piVar7 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38efc(param_1[0x27]);
        }
        piVar7 = (int *)param_1[0x26];
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar7;
          bVar16 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar16);
        *piVar7 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38efc(param_1[0x26]);
        }
        piVar7 = (int *)param_1[0x25];
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar7;
          bVar16 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar16);
        *piVar7 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38efc(param_1[0x25]);
        }
        piVar7 = (int *)param_1[0x24];
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar7;
          bVar16 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar16);
        *piVar7 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38efc(param_1[0x24]);
        }
        piVar7 = (int *)param_1[0x23];
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar7;
          bVar16 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar16);
        *piVar7 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38efc(param_1[0x23]);
        }
        piVar7 = (int *)param_1[0x22];
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar7;
          bVar16 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar16);
        *piVar7 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38efc(param_1[0x22]);
        }
        piVar7 = (int *)param_1[0x21];
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar7;
          bVar16 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar16);
        *piVar7 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38f34(param_1[0x21]);
        }
        if ((char)param_1[0x3e] != '\0') {
          FUN_005fb2fc(param_1 + 0xd);
        }
        piVar7 = (int *)param_1[4];
        *(undefined1 *)(param_1 + 0x3e) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar7;
          bVar16 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar16);
        *piVar7 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38efc(param_1[4]);
        }
        piVar7 = (int *)param_1[0xc];
        uVar14 = 2;
        if (piVar7 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar7;
            bVar16 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar16);
          *piVar7 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01a38404(param_1[0xc]);
          }
        }
LAB_005ec6bc:
        local_224 = param_1 + 3;
        uVar13 = 1;
        *(undefined4 *)((int)param_1 + 0xfd) = 0;
        *(undefined4 *)((int)param_1 + 0xf9) = 0;
        *(undefined1 *)((int)param_1 + 0x101) = 1;
        FUN_005f1388(local_224);
        goto LAB_005ec6d8;
      }
      FUN_019f8c54(param_1[0x29],param_1[0x2a]);
      *(undefined1 *)(param_1 + 0x4c) = 0;
      piVar7 = (int *)(param_1[0x23] + 8);
      param_1[0x41] = (int)piVar7;
LAB_005eb7cc:
      *(undefined1 *)(param_1 + 0x4b) = 0;
      param_1[0x42] = (int)piVar7;
LAB_005eb7dc:
      iVar5 = *piVar7;
      *(undefined1 *)(param_1 + 0x4a) = 0;
      param_1[0x46] = 0;
      param_1[0x47] = 0;
      param_1[0x48] = iVar5;
      param_1[0x49] = iVar5;
      param_1[0x43] = (int)(piVar7 + 1);
      param_1[0x44] = 0;
switchD_005ebb30_caseD_3:
      bVar2 = FUN_019f9bc4(param_1 + 0x43,param_2);
      if (bVar2 == 2) {
        *(undefined1 *)(param_1 + 0x4c) = 3;
        *(undefined1 *)(param_1 + 0x4b) = 3;
        uVar3 = 5;
      }
      else {
        FUN_0193c3cc(param_1 + 0x43);
        if ((bVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b420);
        }
        piVar7 = (int *)param_1[0x42];
        iVar5 = *piVar7;
        *(undefined1 *)(param_1 + 0x4c) = 1;
        *(undefined1 *)(param_1 + 0x4b) = 1;
        param_1[0x2c] = (int)(piVar7 + 1);
        param_1[0x2d] = iVar5;
        param_1[0x2e] = (int)(piVar7 + 6);
        iVar5 = FUN_01a2e9bc(param_1[0x21] + 8);
        param_1[0x41] = iVar5;
        puVar10 = &DAT_01d2afd8;
        param_1[0x42] = (int)&DAT_01d2afd8;
LAB_005eb888:
        cVar4 = (**(code **)(puVar10 + 0xc))(param_1[0x41],param_2);
        uVar3 = 6;
        if (cVar4 != '\x1c') {
          FUN_01139b38(param_1[0x41],param_1[0x42]);
          if (cVar4 != '\x1b') {
            FUN_019f8c54(param_1[0x2c],param_1[0x2d]);
            goto LAB_005ec288;
          }
          FUN_019f8c54(param_1[0x2c],param_1[0x2d]);
          *(undefined1 *)(param_1 + 0x4c) = 0;
          piVar7 = (int *)(param_1[0x25] + 8);
          param_1[0x41] = (int)piVar7;
LAB_005eb944:
          *(undefined1 *)(param_1 + 0x4b) = 0;
          param_1[0x42] = (int)piVar7;
LAB_005eb954:
          iVar5 = *piVar7;
          *(undefined1 *)(param_1 + 0x4a) = 0;
          param_1[0x46] = 0;
          param_1[0x47] = 0;
          param_1[0x48] = iVar5;
          param_1[0x49] = iVar5;
          param_1[0x43] = (int)(piVar7 + 1);
          param_1[0x44] = 0;
switchD_005ebb88_caseD_3:
          bVar2 = FUN_019f9bc4(param_1 + 0x43,param_2);
          if (bVar2 == 2) {
            *(undefined1 *)(param_1 + 0x4c) = 3;
            *(undefined1 *)(param_1 + 0x4b) = 3;
            uVar3 = 7;
          }
          else {
            FUN_0193c3cc(param_1 + 0x43);
            if ((bVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b420);
            }
            piVar7 = (int *)param_1[0x42];
            iVar5 = *piVar7;
            *(undefined1 *)(param_1 + 0x4c) = 1;
            *(undefined1 *)(param_1 + 0x4b) = 1;
            param_1[0x2f] = (int)(piVar7 + 1);
            param_1[0x30] = iVar5;
            param_1[0x31] = (int)(piVar7 + 6);
            iVar5 = FUN_01a2d118(param_1[0x21] + 8);
            param_1[0x41] = iVar5;
            puVar10 = &DAT_01d2ac28;
            param_1[0x42] = (int)&DAT_01d2ac28;
LAB_005eba58:
            cVar4 = (**(code **)(puVar10 + 0xc))(param_1[0x41],param_2);
            uVar3 = 8;
            if (cVar4 != '\x1c') {
              FUN_01139b38(param_1[0x41],param_1[0x42]);
              if (cVar4 != '\x1b') {
                FUN_019f8c54(param_1[0x2f],param_1[0x30]);
                goto LAB_005ec288;
              }
              FUN_019f8c54(param_1[0x2f],param_1[0x30]);
              *(undefined1 *)(param_1 + 0x4c) = 0;
              piVar7 = (int *)(param_1[0x26] + 8);
              param_1[0x41] = (int)piVar7;
LAB_005ebaac:
              *(undefined1 *)(param_1 + 0x4b) = 0;
              param_1[0x42] = (int)piVar7;
LAB_005ebc04:
              iVar5 = *piVar7;
              *(undefined1 *)(param_1 + 0x4a) = 0;
              param_1[0x46] = 0;
              param_1[0x47] = 0;
              param_1[0x48] = iVar5;
              param_1[0x49] = iVar5;
              param_1[0x43] = (int)(piVar7 + 1);
              param_1[0x44] = 0;
switchD_005ebbec_caseD_3:
              bVar2 = FUN_019f9bc4(param_1 + 0x43,param_2);
              if (bVar2 == 2) {
                *(undefined1 *)(param_1 + 0x4c) = 3;
                *(undefined1 *)(param_1 + 0x4b) = 3;
                uVar3 = 9;
              }
              else {
                FUN_0193c3cc(param_1 + 0x43);
                if ((bVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b420);
                }
                piVar7 = (int *)param_1[0x42];
                iVar5 = *piVar7;
                *(undefined1 *)(param_1 + 0x4c) = 1;
                *(undefined1 *)(param_1 + 0x4b) = 1;
                param_1[0x32] = (int)(piVar7 + 1);
                param_1[0x33] = iVar5;
                param_1[0x34] = (int)(piVar7 + 6);
                iVar5 = FUN_01a2d9a0(param_1[0x21] + 8);
                param_1[0x41] = iVar5;
                puVar10 = &DAT_01d2ae98;
                param_1[0x42] = (int)&DAT_01d2ae98;
LAB_005ebca8:
                cVar4 = (**(code **)(puVar10 + 0xc))(param_1[0x41],param_2);
                uVar3 = 10;
                if (cVar4 != '\x1c') {
                  FUN_01139b38(param_1[0x41],param_1[0x42]);
                  if (cVar4 != '\x1b') {
                    FUN_019f8c54(param_1[0x32],param_1[0x33]);
                    goto LAB_005ec288;
                  }
                  FUN_019f8c54(param_1[0x32],param_1[0x33]);
                  *(undefined1 *)(param_1 + 0x4c) = 0;
                  piVar7 = (int *)(param_1[0x27] + 8);
                  param_1[0x41] = (int)piVar7;
LAB_005ebcfc:
                  *(undefined1 *)(param_1 + 0x4b) = 0;
                  param_1[0x42] = (int)piVar7;
LAB_005ebd0c:
                  iVar5 = *piVar7;
                  *(undefined1 *)(param_1 + 0x4a) = 0;
                  param_1[0x46] = 0;
                  param_1[0x47] = 0;
                  param_1[0x48] = iVar5;
                  param_1[0x49] = iVar5;
                  param_1[0x43] = (int)(piVar7 + 1);
                  param_1[0x44] = 0;
switchD_005ebb5c_caseD_3:
                  bVar2 = FUN_019f9bc4(param_1 + 0x43,param_2);
                  if (bVar2 == 2) {
                    *(undefined1 *)(param_1 + 0x4c) = 3;
                    *(undefined1 *)(param_1 + 0x4b) = 3;
                    uVar3 = 0xb;
                  }
                  else {
                    FUN_0193c3cc(param_1 + 0x43);
                    if ((bVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b420);
                    }
                    piVar7 = (int *)param_1[0x42];
                    iVar5 = *piVar7;
                    *(undefined1 *)(param_1 + 0x4c) = 1;
                    *(undefined1 *)(param_1 + 0x4b) = 1;
                    param_1[0x35] = (int)(piVar7 + 1);
                    param_1[0x36] = iVar5;
                    param_1[0x37] = (int)(piVar7 + 6);
                    iVar5 = FUN_01a34c94(param_1[0x21] + 8);
                    param_1[0x41] = iVar5;
                    puVar10 = &DAT_01d2b2e0;
                    param_1[0x42] = (int)&DAT_01d2b2e0;
LAB_005ebdb0:
                    cVar4 = (**(code **)(puVar10 + 0xc))(param_1[0x41],param_2);
                    uVar3 = 0xc;
                    if (cVar4 != '\x1c') {
                      FUN_01139b38(param_1[0x41],param_1[0x42]);
                      if (cVar4 != '\x1b') {
                        FUN_019f8c54(param_1[0x35],param_1[0x36]);
                        goto LAB_005ec288;
                      }
                      FUN_019f8c54(param_1[0x35],param_1[0x36]);
                      *(undefined1 *)(param_1 + 0x4c) = 0;
                      piVar7 = (int *)(param_1[0x24] + 8);
                      param_1[0x41] = (int)piVar7;
LAB_005ebe04:
                      *(undefined1 *)(param_1 + 0x4b) = 0;
                      param_1[0x42] = (int)piVar7;
LAB_005ebe14:
                      iVar5 = *piVar7;
                      *(undefined1 *)(param_1 + 0x4a) = 0;
                      param_1[0x46] = 0;
                      param_1[0x47] = 0;
                      param_1[0x48] = iVar5;
                      param_1[0x49] = iVar5;
                      param_1[0x43] = (int)(piVar7 + 1);
                      param_1[0x44] = 0;
switchD_005ebad8_caseD_3:
                      bVar2 = FUN_019f9bc4(param_1 + 0x43,param_2);
                      if (bVar2 == 2) {
                        *(undefined1 *)(param_1 + 0x4c) = 3;
                        *(undefined1 *)(param_1 + 0x4b) = 3;
                        uVar3 = 0xd;
                      }
                      else {
                        FUN_0193c3cc(param_1 + 0x43);
                        if ((bVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b420
                                      );
                        }
                        piVar7 = (int *)param_1[0x42];
                        iVar5 = *piVar7;
                        param_1[0x38] = (int)(piVar7 + 1);
                        param_1[0x3a] = (int)(piVar7 + 6);
                        *(undefined1 *)(param_1 + 0x3e) = 0;
                        param_1[0x39] = iVar5;
                        *(undefined1 *)(param_1 + 0x4c) = 1;
                        *(undefined1 *)(param_1 + 0x4b) = 1;
                        local_128 = param_1[0xd];
                        local_124 = param_1[0xe];
                        local_120 = (int *)param_1[0xf];
                        local_11c = param_1[0x10];
                        local_118 = param_1[0x11];
                        local_114 = param_1[0x12];
                        local_110 = param_1[0x13];
                        local_10c = param_1[0x14];
                        iStack_108 = param_1[0x15];
                        iStack_104 = param_1[0x16];
                        iVar5 = FUN_01a39988(param_1[0x21] + 8);
                        param_1[0x41] = iVar5;
                        puVar10 = &DAT_01d2b8c0;
                        param_1[0x42] = (int)&DAT_01d2b8c0;
LAB_005ebedc:
                        cVar4 = (**(code **)(puVar10 + 0xc))(param_1[0x41],param_2);
                        uVar3 = 0xe;
                        if (cVar4 != '\x1c') {
                          FUN_01139b38(param_1[0x41],param_1[0x42]);
                          if (cVar4 != '\x1b') {
                            FUN_019f8c54(param_1[0x38],param_1[0x39]);
                            goto LAB_005ec288;
                          }
                          FUN_019f8c54(param_1[0x38],param_1[0x39]);
                          *(undefined1 *)(param_1 + 0x4c) = 0;
                          param_1[0x41] = param_1[0x28] + 8;
switchD_005eb63c_caseD_f:
                          FUN_006177f4(&local_30,param_1 + 0x41,param_2);
                          if (local_30 == 0) {
                            uVar3 = 0xf;
                            goto LAB_005ec25c;
                          }
                          param_1[0x3b] = local_30;
                          param_1[0x3c] = iStack_2c;
                          param_1[0x3d] = iStack_28;
                          cVar4 = (char)param_1[0x4c];
                          bVar16 = cVar4 == '\x03';
                          if (bVar16) {
                            cVar4 = (char)param_1[0x4b];
                          }
                          if (bVar16 && cVar4 == '\x03') {
                            FUN_0193c3cc(param_1 + 0x43);
                          }
                          *(undefined1 *)((int)param_1 + 0x159) = 0;
                          iVar5 = param_1[0x3d];
                          piVar7 = (int *)(param_1[0x21] + 8);
                          param_1[0x53] = iVar5;
                          param_1[0x54] = (int)piVar7;
LAB_005ebf8c:
                          param_1[0x4d] = iVar5;
                          *(undefined1 *)(param_1 + 0x56) = 0;
                          param_1[0x55] = 0;
                          if (*(char *)(iVar5 + 0x10) == '\0') {
                            piVar8 = (int *)*piVar7;
                            do {
                              iVar5 = *piVar8;
                              bVar16 = (bool)hasExclusiveAccess(piVar8);
                            } while (!bVar16);
                            *piVar8 = iVar5 + 1;
                            if (iVar5 < 0) {
LAB_005ecb20:
                    /* WARNING: Does not return */
                              pcVar1 = (code *)software_udf(0xfdee,0x5ecb20);
                              (*pcVar1)();
                            }
                            piVar12 = piVar8 + 0x11;
                            do {
                              bVar16 = (bool)hasExclusiveAccess(piVar12);
                            } while (!bVar16);
                            *piVar12 = *piVar12 + 1;
                            param_1[0x4e] = (int)piVar8;
                            *(undefined1 *)(param_1 + 0x56) = 1;
                            piVar8 = (int *)piVar7[1];
                            do {
                              iVar5 = *piVar8;
                              bVar16 = (bool)hasExclusiveAccess(piVar8);
                            } while (!bVar16);
                            *piVar8 = iVar5 + 1;
                            if (iVar5 < 0) goto LAB_005ecb20;
                            piVar12 = piVar8 + 0x11;
                            do {
                              bVar16 = (bool)hasExclusiveAccess(piVar12);
                            } while (!bVar16);
                            *piVar12 = *piVar12 + 1;
                            param_1[0x4f] = (int)piVar8;
                            *(undefined1 *)((int)param_1 + 0x157) = 1;
                            piVar8 = (int *)piVar7[4];
                            do {
                              iVar5 = *piVar8;
                              bVar16 = (bool)hasExclusiveAccess(piVar8);
                            } while (!bVar16);
                            *piVar8 = iVar5 + 1;
                            if (iVar5 < 0) goto LAB_005ecb20;
                            piVar12 = piVar8 + 0x11;
                            do {
                              bVar16 = (bool)hasExclusiveAccess(piVar12);
                            } while (!bVar16);
                            *piVar12 = *piVar12 + 1;
                            *(undefined1 *)((int)param_1 + 0x156) = 1;
                            param_1[0x50] = (int)piVar8;
                            piVar8 = *(int **)param_1[0x4d];
                            do {
                              iVar5 = *piVar8;
                              bVar16 = (bool)hasExclusiveAccess(piVar8);
                            } while (!bVar16);
                            *piVar8 = iVar5 + 1;
                            if (iVar5 < 0) goto LAB_005ecb20;
                            param_1[0x51] = (int)piVar8;
                            *(undefined1 *)((int)param_1 + 0x155) = 1;
                            piVar7 = (int *)piVar7[10];
                            do {
                              iVar5 = *piVar7;
                              bVar16 = (bool)hasExclusiveAccess(piVar7);
                            } while (!bVar16);
                            *piVar7 = iVar5 + 1;
                            if (iVar5 < 0) goto LAB_005ecb20;
                            *(undefined1 *)(param_1 + 0x55) = 1;
                            param_1[0x52] = (int)piVar7;
                            *(undefined1 *)(param_1[0x4d] + 0x10) = 1;
                            iVar5 = *(int *)(param_1[0x4d] + 8);
                            *(undefined1 *)(param_1 + 0x4c) = 0;
                            piVar7 = (int *)(iVar5 + 8);
                            param_1[0x41] = (int)piVar7;
LAB_005ec100:
                            param_1[0x42] = (int)piVar7;
                            *(undefined1 *)(param_1 + 0x4b) = 0;
LAB_005ec114:
                            iVar5 = *piVar7;
                            *(undefined1 *)(param_1 + 0x4a) = 0;
                            param_1[0x46] = 0;
                            param_1[0x47] = 0;
                            param_1[0x48] = iVar5;
                            param_1[0x49] = iVar5;
                            param_1[0x43] = (int)(piVar7 + 1);
                            param_1[0x44] = 0;
switchD_005ec700_caseD_3:
                            local_228 = param_1 + 0x4c;
                            local_22c = (undefined1 *)((int)param_1 + 0x159);
                            bVar2 = FUN_019f9bc4(param_1 + 0x43,param_2);
                            if (bVar2 == 2) {
                              *(undefined1 *)(param_1 + 0x4b) = 3;
                              *(undefined1 *)local_228 = 3;
                              *local_22c = 3;
                              uVar3 = 0x10;
                              goto LAB_005ec25c;
                            }
                            FUN_0193c3cc(param_1 + 0x43);
                            if ((bVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_012fb0ec("internal error: entered unreachable code",0x28,
                                           &DAT_01d2b420);
                            }
                            puVar9 = (undefined4 *)param_1[0x42];
                            uVar14 = *puVar9;
                            *(undefined1 *)(param_1 + 0x4b) = 1;
                            *(undefined1 *)local_228 = 1;
                            iVar5 = puVar9[6];
                            iVar15 = puVar9[7];
                            puVar9[6] = 0;
                            FUN_019f8c54(puVar9 + 1,uVar14);
                            piVar7 = *(int **)(param_1[0x4d] + 0xc);
                            do {
                              iVar11 = *piVar7;
                              bVar16 = (bool)hasExclusiveAccess(piVar7);
                            } while (!bVar16);
                            *piVar7 = iVar11 + 1;
                            if (iVar11 < 0) goto LAB_005ecb20;
                            param_1[0x55] = 0;
                            local_118 = param_1[0x52];
                            local_10c = param_1[0x4e];
                            local_110 = param_1[0x4f];
                            local_114 = param_1[0x50];
                            local_11c = param_1[0x51];
                            *(undefined1 *)(param_1 + 0x56) = 0;
                            local_f0 = 0;
                            local_128 = iVar5;
                            local_124 = iVar15;
                            local_120 = piVar7;
                            piVar7 = (int *)FUN_01958e7c(&local_128,&DAT_01d25e64);
                            if (*piVar7 == 0xcc) {
                              DataMemoryBarrier(0xb);
                              bVar16 = (bool)hasExclusiveAccess(piVar7);
                              if (!bVar16) goto LAB_005ec498;
                              *piVar7 = 0x84;
                            }
                            else {
                              ClearExclusiveLocal();
LAB_005ec498:
                              (**(code **)(piVar7[2] + 0x10))();
                            }
                            *(undefined1 *)(param_1 + 0x56) = 0;
                            param_1[0x55] = 0;
                          }
                          *(undefined1 *)((int)param_1 + 0x159) = 1;
                          FUN_0193f1b0(param_1 + 0x41);
                          FUN_019f8c54(param_1[0x3b],param_1[0x3c]);
                          piVar7 = (int *)param_1[0x28];
                          DataMemoryBarrier(0xb);
                          do {
                            iVar5 = *piVar7;
                            bVar16 = (bool)hasExclusiveAccess(piVar7);
                          } while (!bVar16);
                          *piVar7 = iVar5 + -1;
                          if (iVar5 == 1) {
                            DataMemoryBarrier(0xb);
                            FUN_01a39504(param_1[0x28]);
                          }
                          piVar7 = (int *)param_1[0x27];
                          DataMemoryBarrier(0xb);
                          do {
                            iVar5 = *piVar7;
                            bVar16 = (bool)hasExclusiveAccess(piVar7);
                          } while (!bVar16);
                          *piVar7 = iVar5 + -1;
                          if (iVar5 == 1) {
                            DataMemoryBarrier(0xb);
                            FUN_01a38efc(param_1[0x27]);
                          }
                          piVar7 = (int *)param_1[0x26];
                          DataMemoryBarrier(0xb);
                          do {
                            iVar5 = *piVar7;
                            bVar16 = (bool)hasExclusiveAccess(piVar7);
                          } while (!bVar16);
                          *piVar7 = iVar5 + -1;
                          if (iVar5 == 1) {
                            DataMemoryBarrier(0xb);
                            FUN_01a38efc(param_1[0x26]);
                          }
                          piVar7 = (int *)param_1[0x25];
                          DataMemoryBarrier(0xb);
                          do {
                            iVar5 = *piVar7;
                            bVar16 = (bool)hasExclusiveAccess(piVar7);
                          } while (!bVar16);
                          *piVar7 = iVar5 + -1;
                          if (iVar5 == 1) {
                            DataMemoryBarrier(0xb);
                            FUN_01a38efc(param_1[0x25]);
                          }
                          piVar7 = (int *)param_1[0x24];
                          DataMemoryBarrier(0xb);
                          do {
                            iVar5 = *piVar7;
                            bVar16 = (bool)hasExclusiveAccess(piVar7);
                          } while (!bVar16);
                          *piVar7 = iVar5 + -1;
                          if (iVar5 == 1) {
                            DataMemoryBarrier(0xb);
                            FUN_01a38efc(param_1[0x24]);
                          }
                          piVar7 = (int *)param_1[0x23];
                          DataMemoryBarrier(0xb);
                          do {
                            iVar5 = *piVar7;
                            bVar16 = (bool)hasExclusiveAccess(piVar7);
                          } while (!bVar16);
                          *piVar7 = iVar5 + -1;
                          if (iVar5 == 1) {
                            DataMemoryBarrier(0xb);
                            FUN_01a38efc(param_1[0x23]);
                          }
                          piVar7 = (int *)param_1[0x22];
                          DataMemoryBarrier(0xb);
                          do {
                            iVar5 = *piVar7;
                            bVar16 = (bool)hasExclusiveAccess(piVar7);
                          } while (!bVar16);
                          *piVar7 = iVar5 + -1;
                          if (iVar5 == 1) {
                            DataMemoryBarrier(0xb);
                            FUN_01a38efc(param_1[0x22]);
                          }
                          piVar7 = (int *)param_1[0x21];
                          DataMemoryBarrier(0xb);
                          do {
                            iVar5 = *piVar7;
                            bVar16 = (bool)hasExclusiveAccess(piVar7);
                          } while (!bVar16);
                          *piVar7 = iVar5 + -1;
                          if (iVar5 == 1) {
                            DataMemoryBarrier(0xb);
                            FUN_01a38f34(param_1[0x21]);
                          }
                          piVar7 = (int *)param_1[4];
                          *(undefined1 *)(param_1 + 0x3e) = 0;
                          DataMemoryBarrier(0xb);
                          do {
                            iVar5 = *piVar7;
                            bVar16 = (bool)hasExclusiveAccess(piVar7);
                          } while (!bVar16);
                          *piVar7 = iVar5 + -1;
                          if (iVar5 == 1) {
                            DataMemoryBarrier(0xb);
                            FUN_01a38efc(param_1[4]);
                          }
                          piVar7 = (int *)param_1[0xc];
                          uVar14 = 0x1b;
                          if (piVar7 != (int *)0x0) {
                            DataMemoryBarrier(0xb);
                            do {
                              iVar5 = *piVar7;
                              bVar16 = (bool)hasExclusiveAccess(piVar7);
                            } while (!bVar16);
                            *piVar7 = iVar5 + -1;
                            if (iVar5 == 1) {
                              DataMemoryBarrier(0xb);
                              FUN_01a38404(param_1[0xc]);
                            }
                          }
                          goto LAB_005ec6bc;
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
LAB_005ec25c:
  uVar14 = 0x1c;
  uVar13 = 4;
  *(undefined1 *)((int)param_1 + 0x101) = uVar3;
LAB_005ec6d8:
  *(undefined1 *)(param_1 + 2) = uVar13;
  return uVar14;
}

