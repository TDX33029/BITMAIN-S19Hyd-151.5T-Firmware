// FUN_00974e38 @ 00974e38 size=5044 calls_out=43 calls_in=0
// strings: polled MutexLockFuture after completion

undefined4 FUN_00974e38(int *param_1,undefined4 *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  code *pcVar10;
  int extraout_r1;
  int iVar11;
  int *piVar12;
  int extraout_r2;
  int extraout_r2_00;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  int *piVar20;
  undefined4 *puVar21;
  int iVar22;
  uint *puVar23;
  bool bVar24;
  undefined8 uVar25;
  int *local_11c;
  int *local_118;
  int *local_10c;
  int *local_104;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int local_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  uint *local_78;
  undefined4 *local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  uint local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  
  puVar23 = (uint *)(param_1 + 0x1e);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x41]) {
  case '\0':
    iVar15 = param_1[0x40] + 0x10;
    *(undefined1 *)(param_1 + 0x15) = 0;
    *param_1 = iVar15;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018685cc);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018685cc);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x15]) {
    case '\0':
      iVar15 = *param_1;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018683fc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018683fc);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x1a]) {
      case '\0':
        piVar6 = (int *)param_1[0x16];
        goto LAB_0097524c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0186a3ac);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0186a3ac);
      case '\x03':
        goto switchD_00974fa0_caseD_3;
      case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)((int)param_1 + 0xb9)) {
        case 0:
          piVar6 = (int *)param_1[0x2d];
          goto LAB_0097532c;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_0186a39c);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_0186a39c);
        case 3:
          uVar7 = (&switchD_00975044::switchdataD_00975048)[*(byte *)(param_1 + 0x2c)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(byte *)(param_1 + 0x2c)) {
          case 0:
            piVar6 = (int *)param_1[0x1e];
            goto LAB_00975454;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7ca0(&DAT_018acd5c);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7cc0(&DAT_018acd5c);
          case 3:
            goto switchD_00975044_caseD_3;
          }
        }
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x3f]) {
      case '\0':
        iVar15 = param_1[0x34];
        iVar11 = param_1[0x35];
        iVar19 = param_1[0x36];
        puVar16 = (uint *)param_1[0x3e];
        goto LAB_00976358;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0186a454);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0186a454);
      case '\x03':
        puVar16 = (uint *)param_1[0x3c];
        goto LAB_00976374;
      }
    case '\x04':
      goto switchD_00974ea4_caseD_4;
    }
  }
  FUN_009951a4(&local_78,*(undefined4 *)(iVar15 + 4),*(undefined4 *)(iVar15 + 8));
  piVar6 = *(int **)(iVar15 + 0xc);
  do {
    iVar11 = *piVar6;
    bVar24 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar24);
  *piVar6 = iVar11 + 1;
  if (-1 < iVar11) {
    piVar12 = *(int **)(iVar15 + 0x10);
    iVar11 = *(int *)(iVar15 + 0x14);
    do {
      iVar19 = *piVar12;
      bVar24 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar24);
    *piVar12 = iVar19 + 1;
    if (-1 < iVar19) {
      piVar20 = piVar12 + 0x2a;
      do {
        bVar24 = (bool)hasExclusiveAccess(piVar20);
      } while (!bVar24);
      *piVar20 = *piVar20 + 1;
      piVar20 = *(int **)(iVar15 + 0x18);
      do {
        iVar19 = *piVar20;
        bVar24 = (bool)hasExclusiveAccess(piVar20);
      } while (!bVar24);
      *piVar20 = iVar19 + 1;
      if (-1 < iVar19) {
        param_1[1] = (int)local_78;
        param_1[2] = (int)local_74;
        param_1[3] = local_70;
        param_1[7] = (int)piVar20;
        param_1[6] = iVar11;
        param_1[5] = (int)piVar12;
        iVar15 = *(int *)(iVar15 + 0x1c);
        param_1[4] = (int)piVar6;
        param_1[8] = iVar15;
LAB_0097522c:
        piVar6 = param_1 + 1;
        param_1[0x16] = (int)piVar6;
        *(undefined1 *)(param_1 + 0x1a) = 0;
LAB_0097524c:
        param_1[0x17] = (int)piVar6;
        param_1[0x1b] = piVar6[3] + 8;
        param_1[0x1c] = -1;
switchD_00974fa0_caseD_3:
        iVar15 = FUN_00999254(param_1 + 0x1b,param_2);
        if (iVar15 != 0) {
          iVar11 = param_1[0x1b];
          if (iVar11 != 0) {
            FUN_00999924(iVar11,param_1[0x1c],1);
          }
          piVar6 = *(int **)(iVar15 + 0x20);
          if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_0034ab46,0x34,&DAT_0186a3bc);
          }
          if (piVar6 == (int *)0xffffffff) {
LAB_00975998:
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_0034ab7a,0x32,&DAT_0186a3cc);
          }
          iVar11 = *piVar6;
          do {
            if (iVar11 == 0) goto LAB_00975998;
            if (iVar11 < 0) {
              local_74 = &DAT_0157d360;
              local_78 = (uint *)&DAT_018ae270;
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_00590e71,&local_78,&DAT_018ae288);
            }
            iVar19 = *piVar6;
            if (iVar19 == iVar11) {
              bVar3 = (bool)hasExclusiveAccess(piVar6);
              if (bVar3) {
                *piVar6 = iVar11 + 1;
              }
              bVar24 = false;
              if (bVar3) {
                DataMemoryBarrier(0xb);
                bVar24 = true;
              }
            }
            else {
              bVar24 = false;
              ClearExclusiveLocal();
            }
            iVar11 = iVar19;
          } while (!bVar24);
          iVar11 = *(int *)(iVar15 + 0x24);
          param_1[0x18] = (int)piVar6;
          param_1[0x19] = iVar11;
          FUN_00999f24(iVar15);
LAB_00975310:
          *(undefined1 *)((int)param_1 + 0xb9) = 0;
          piVar6 = (int *)(param_1[0x17] + 0x10);
          param_1[0x2d] = (int)piVar6;
LAB_0097532c:
          param_1[0x1d] = (int)piVar6;
          do {
            *(undefined1 *)(param_1 + 0x2e) = 0;
            iVar15 = *piVar6;
            puVar16 = (uint *)(iVar15 + 0x98);
            uVar7 = *(uint *)(iVar15 + 0x98);
            if ((uVar7 < 0xfffffff0) && ((uVar7 & 8) == 0)) {
              if (*puVar16 != uVar7) {
                ClearExclusiveLocal();
                goto LAB_00975384;
              }
              bVar24 = (bool)hasExclusiveAccess(puVar16);
              if (!bVar24) goto LAB_00975384;
              *puVar16 = uVar7 + 0x10;
              DataMemoryBarrier(0xb);
            }
            else {
LAB_00975384:
              FUN_0127d66c(puVar16);
            }
            FUN_0128236c(puVar16);
            FUN_0128236c((uint)puVar16 | 1);
            DataMemoryBarrier(0xb);
            piVar6 = *(int **)(iVar15 + 0x9c);
            iVar15 = *(int *)(iVar15 + 0xa0);
            do {
              iVar11 = *piVar6;
              bVar24 = (bool)hasExclusiveAccess(piVar6);
            } while (!bVar24);
            *piVar6 = iVar11 + 1;
            if (iVar11 < 0) goto LAB_009751ec;
            param_1[0x1b] = (int)piVar6;
            param_1[0x1c] = iVar15;
            *(undefined1 *)(param_1 + 0x2e) = 1;
            FUN_01282570(puVar16);
            FUN_01282570((uint)puVar16 | 1);
            DataMemoryBarrier(0xb);
            do {
              uVar7 = *puVar16;
              bVar24 = (bool)hasExclusiveAccess(puVar16);
            } while (!bVar24);
            *puVar16 = uVar7 - 0x10;
            if ((uVar7 & 0xfffffff2) == 0x12) {
              FUN_0127d34c(puVar16);
            }
            iVar15 = (**(code **)(param_1[0x1c] + 0x14))
                               (param_1[0x1b] + (*(int *)(param_1[0x1c] + 8) - 1U & 0xfffffff8) + 8)
            ;
            if (iVar15 == 0) {
              iVar15 = param_1[0x1b];
              uVar7 = param_1[0x1c];
              *(undefined1 *)(param_1 + 0x2e) = 0;
              goto LAB_00975530;
            }
            piVar6 = (int *)param_1[0x1d];
            param_1[0x1e] = (int)piVar6;
            *(undefined1 *)(param_1 + 0x2c) = 0;
LAB_00975454:
            iVar15 = *piVar6;
            *(undefined1 *)((int)param_1 + 0x8d) = 0;
            uVar7 = iVar15 + 8;
            param_1[0x21] = uVar7;
            param_1[0x22] = (int)(piVar6 + 1);
switchD_00975044_caseD_3:
            local_11c = param_1 + 0x2c;
            piVar6 = param_1 + 0x1b;
            uVar25 = thunk_FUN_016de0ee(uVar7,0x40);
            iVar15 = (int)uVar25 + (int)((ulonglong)uVar25 >> 0x20);
            cVar4 = *(char *)(iVar15 + 0x38);
            puVar21 = (undefined4 *)*param_2;
            if (cVar4 == '\x01') {
LAB_009754bc:
              cVar1 = *(char *)(iVar15 + 0x31);
              cVar2 = *(char *)(iVar15 + 0x30);
              cVar4 = cVar1;
              if (cVar2 == '\x01') {
                if (cVar1 == '\0') {
                  FUN_016455a4(*puVar21,puVar21[1]);
LAB_00976054:
                  *(undefined1 *)local_11c = 3;
                  *(undefined1 *)((int)param_1 + 0xb9) = 3;
                  uVar5 = 4;
                  goto LAB_0097661c;
                }
                cVar4 = cVar1 + -1;
              }
              *(char *)(iVar15 + 0x31) = cVar4;
              cVar4 = '\x01';
            }
            else {
              cVar2 = '\0';
              cVar1 = '\0';
              if (cVar4 != '\x02') {
                FUN_015e8e6c(iVar15,FUN_009948a0);
                *(undefined1 *)(iVar15 + 0x38) = 1;
                goto LAB_009754bc;
              }
            }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch(*(undefined1 *)((int)param_1 + 0x8d)) {
            case 0:
              *(undefined1 *)(param_1 + 0x23) = 0;
              param_1[0x1f] = param_1[0x21];
              param_1[0x20] = param_1[0x22];
              break;
            case 1:
                    /* WARNING: Subroutine does not return */
              FUN_00fb7ca0(&DAT_018ad404);
            case 2:
                    /* WARNING: Subroutine does not return */
              FUN_00fb7cc0(&DAT_018ad404);
            case 4:
              goto switchD_009754f8_caseD_4;
            }
            while( true ) {
              iVar11 = param_1[0x1f];
              if (cVar4 != '\x01') {
                if (cVar4 == '\x02') {
                    /* WARNING: Subroutine does not return */
                  FUN_015f853c(&DAT_018ae900);
                }
                FUN_015e8e6c(iVar15,FUN_01655ec4);
                *(undefined1 *)(iVar15 + 0x38) = 1;
              }
              if ((*(uint *)(iVar15 + 0x24) & 1) == 0) {
                uVar25 = FUN_0164e918();
                if ((uint)uVar25 < 2) {
                  uVar25 = CONCAT44((int)((ulonglong)uVar25 >> 0x20),1);
                }
              }
              else {
                uVar25 = CONCAT44(*(undefined4 *)(iVar15 + 0x28),*(undefined4 *)(iVar15 + 0x2c));
              }
              uVar7 = (uint)((ulonglong)uVar25 >> 0x20);
              uVar14 = (uint)uVar25;
              uVar7 = uVar7 ^ uVar7 << 0x11;
              *(uint *)(iVar15 + 0x28) = uVar14;
              *(undefined4 *)(iVar15 + 0x24) = 1;
              uVar7 = uVar14 >> 0x10 ^ uVar7 >> 7 ^ uVar14 ^ uVar7;
              *(uint *)(iVar15 + 0x2c) = uVar7;
              uVar7 = uVar7 + uVar14 >> 0x19 & 0x70;
              uVar14 = *(uint *)(iVar11 + uVar7);
              DataMemoryBarrier(0xb);
              *(undefined1 *)(param_1 + 0x23) = 1;
              local_78 = (uint *)(iVar11 + uVar7);
              local_5c = local_5c & 0xffffff00;
              local_60 = 0;
              local_68 = 0;
              local_6c = 0;
              local_70 = 0;
              local_74 = (undefined4 *)(uVar14 >> 2);
              DataMemoryBarrier(0xb);
              uVar14 = *(uint *)param_1[0x20];
              uVar7 = *(uint *)(param_1[0x1f] + 0x9c) & 0xfffffffe;
              if (uVar14 != uVar7) break;
              if ((*(uint *)(param_1[0x1f] + 0x9c) & 1) != 0) goto LAB_00975f38;
              *(undefined1 *)(param_1 + 0x23) = 0;
              param_1[0x24] = (int)local_78;
              param_1[0x25] = (int)local_74;
              param_1[0x26] = 0;
              param_1[0x27] = 0;
              param_1[0x28] = 0;
              param_1[0x29] = local_64;
              param_1[0x2a] = 0;
              param_1[0x2b] = local_5c;
switchD_009754f8_caseD_4:
              iVar11 = FUN_0163c044(param_1 + 0x24,puVar21);
              if (iVar11 != 0) {
                *(undefined1 *)((int)param_1 + 0x8d) = 4;
                if (cVar2 == '\0') goto LAB_00976054;
                if (*(char *)(iVar15 + 0x38) != '\x01') {
                  if (*(char *)(iVar15 + 0x38) == '\x02') goto LAB_00976054;
                  FUN_015e8e6c(iVar15,FUN_01655ec4);
                  *(undefined1 *)(iVar15 + 0x38) = 1;
                }
                *(char *)(iVar15 + 0x31) = cVar1;
                *(undefined1 *)(iVar15 + 0x30) = 1;
                goto LAB_00976054;
              }
              FUN_0163bdc0(param_1 + 0x24);
              if (param_1[0x28] != 0) {
                (**(code **)(param_1[0x28] + 0xc))(param_1[0x29]);
              }
              *(undefined1 *)(param_1 + 0x23) = 0;
              cVar4 = *(char *)(iVar15 + 0x38);
            }
            *(uint *)param_1[0x20] = uVar7;
LAB_00975f38:
            FUN_0163bdc0(&local_78);
            if (local_68 != 0) {
              (**(code **)(local_68 + 0xc))(local_64);
            }
            iVar15 = 0;
            *(undefined1 *)(param_1 + 0x23) = 0;
            *(undefined1 *)(param_1 + 0x2c) = 1;
            *(undefined1 *)((int)param_1 + 0x8d) = 1;
            if (uVar14 == uVar7) goto code_r0x00975f78;
            piVar12 = (int *)*piVar6;
            DataMemoryBarrier(0xb);
            do {
              iVar15 = *piVar12;
              bVar24 = (bool)hasExclusiveAccess(piVar12);
            } while (!bVar24);
            *piVar12 = iVar15 + -1;
            if (iVar15 == 1) {
              DataMemoryBarrier(0xb);
              FUN_007846b4(*piVar6,param_1[0x1c]);
            }
            piVar6 = (int *)param_1[0x1d];
          } while( true );
        }
        uVar5 = 3;
LAB_0097661c:
        local_10c = param_1 + 0x1a;
        *(undefined1 *)local_10c = uVar5;
        uVar5 = 3;
        goto LAB_00975b48;
      }
    }
  }
LAB_009751ec:
                    /* WARNING: Does not return */
  pcVar10 = (code *)software_udf(0xfdee,0x9751ec);
  (*pcVar10)();
code_r0x00975f78:
  if ((char)param_1[0x2e] != '\0') {
    piVar12 = (int *)*piVar6;
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar12;
      bVar24 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar24);
    *piVar12 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_007846b4(*piVar6,param_1[0x1c]);
    }
  }
LAB_00975530:
  piVar6 = param_1 + 0x1b;
  *(undefined2 *)(param_1 + 0x2e) = 0x100;
  if (*(char *)((int)param_1 + 0xb9) == '\x03') {
    cVar4 = (char)param_1[0x2c];
    bVar24 = cVar4 == '\x03';
    if (bVar24) {
      cVar4 = *(char *)((int)param_1 + 0x8d);
    }
    if (bVar24 && cVar4 == '\x04') {
      FUN_0163bdc0(param_1 + 0x24);
      if (param_1[0x28] != 0) {
        (**(code **)(param_1[0x28] + 0xc))(param_1[0x29]);
      }
      *(undefined1 *)(param_1 + 0x23) = 0;
    }
    piVar12 = (int *)*piVar6;
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar12;
      bVar24 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar24);
    *piVar12 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_007846b4(*piVar6,param_1[0x1c]);
    }
    *(undefined1 *)(param_1 + 0x2e) = 0;
  }
  if (iVar15 == 0) goto LAB_0097562c;
  param_1[0x1b] = iVar15;
  param_1[0x1c] = uVar7;
  (**(code **)(uVar7 + 0x18))(&local_78,iVar15 + (*(int *)(uVar7 + 8) - 1U & 0xfffffff8) + 8);
  if (local_78 != (uint *)0x2) {
    if (local_78 != (uint *)0x1) goto LAB_00975770;
    iVar15 = param_1[0x17];
    piVar12 = (int *)param_1[0x1b];
    iVar11 = param_1[0x1c];
    do {
      iVar19 = *piVar12;
      bVar24 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar24);
    *piVar12 = iVar19 + 1;
    if (iVar19 < 0) goto LAB_009751ec;
    iVar19 = *(int *)(iVar15 + 0x1c);
    (**(code **)(iVar19 + 0x10))
              (*(int *)(iVar15 + 0x18) + (*(int *)(iVar19 + 8) - 1U & 0xfffffff8) + 8,piVar12,iVar11
              );
  }
  param_1[0x20] = (int)local_74;
  param_1[0x21] = local_70;
  param_1[0x22] = local_6c;
  param_1[0x23] = local_68;
  param_1[0x24] = local_64;
  param_1[0x25] = local_60;
  param_1[0x26] = local_5c;
  param_1[0x27] = iStack_58;
  param_1[0x28] = iStack_54;
  param_1[0x29] = iStack_50;
  param_1[0x2a] = iStack_4c;
  param_1[0x2b] = iStack_48;
  iVar15 = *(int *)(param_1[0x27] + 8);
  pcVar10 = *(code **)(param_1[0x27] + 0x2c);
  *puVar23 = param_1[0x28];
  param_1[0x1f] = 0;
  uVar25 = (*pcVar10)(param_1[0x26] + (iVar15 - 1U & 0xfffffff8) + 8);
  iVar15 = (int)((ulonglong)uVar25 >> 0x20);
  piVar12 = (int *)uVar25;
  if (piVar12 != (int *)0xffffffff) {
    iVar11 = *piVar12;
    do {
      if (iVar11 == 0) goto LAB_009756f8;
      if (iVar11 < 0) {
        local_74 = &DAT_0157d360;
        local_78 = (uint *)&DAT_018ae270;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00590e71,&local_78,&DAT_018ae288);
      }
      iVar19 = *piVar12;
      if (iVar19 == iVar11) {
        bVar3 = (bool)hasExclusiveAccess(piVar12);
        if (bVar3) {
          *piVar12 = iVar11 + 1;
        }
        bVar24 = false;
        if (bVar3) {
          DataMemoryBarrier(0xb);
          bVar24 = true;
        }
      }
      else {
        bVar24 = false;
        ClearExclusiveLocal();
      }
      iVar11 = iVar19;
    } while (!bVar24);
    uVar14 = *(uint *)(iVar15 + 8);
    (**(code **)(iVar15 + 0x2c))((int)piVar12 + (uVar14 - 1 & 0xfffffff8) + 8);
    puVar16 = (uint *)(**(code **)(extraout_r1 + 0x30))();
    uVar7 = *puVar23;
    iVar11 = param_1[0x1f];
    do {
      uVar18 = *puVar16;
      bVar24 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar24);
    *puVar16 = uVar18 + uVar7;
    puVar16[1] = puVar16[1] + iVar11 + (uint)CARRY4(uVar18,uVar7);
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar12;
      bVar24 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar24);
    *piVar12 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_007846b4(piVar12,iVar15);
    }
    piVar6 = piVar12 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar6;
      bVar24 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar24);
    *piVar6 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      if (uVar14 < 5) {
        uVar14 = 4;
      }
      if ((*(int *)(iVar15 + 4) + uVar14 + 7 & -uVar14) != 0) {
        thunk_FUN_016d3fb4(piVar12);
      }
    }
    FUN_015f3b0c(&local_78,0);
    param_1[0x2c] = (int)local_78;
    param_1[0x2d] = (int)local_74;
    param_1[0x2e] = local_70;
    piVar6 = *(int **)(param_1[0x17] + 4);
    iVar15 = *(int *)(param_1[0x17] + 8);
    param_1[0x30] = 1;
    param_1[0x31] = (int)(param_1 + 0x18);
    param_1[0x32] = (int)piVar6;
    param_1[0x33] = (int)(piVar6 + iVar15 * 2);
    if (piVar6 != (int *)0x0) goto LAB_00976180;
    do {
      if (param_1[0x30] == 0) {
LAB_009763e0:
        iVar15 = param_1[0x20];
        local_c8 = param_1[0x21];
        iStack_c4 = param_1[0x22];
        iStack_c0 = param_1[0x23];
        iStack_bc = param_1[0x24];
        iStack_b8 = param_1[0x25];
        local_b4 = param_1[0x26];
        iStack_b0 = param_1[0x27];
        iStack_ac = param_1[0x28];
        iStack_a8 = param_1[0x29];
        iStack_a4 = param_1[0x2a];
        iStack_a0 = param_1[0x2b];
        piVar6 = (int *)param_1[0x1b];
        DataMemoryBarrier(0xb);
        do {
          iVar11 = *piVar6;
          bVar24 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar24);
        *piVar6 = iVar11 + -1;
        if (iVar11 == 1) {
          DataMemoryBarrier(0xb);
          FUN_007846b4(param_1[0x1b],param_1[0x1c]);
        }
        goto LAB_00975bcc;
      }
      piVar6 = (int *)param_1[0x31];
      param_1[0x31] = 0;
      if (piVar6 == (int *)0x0) goto LAB_009763e0;
      do {
        uVar25 = (**(code **)(piVar6[1] + 0x28))
                           (*piVar6 + (*(int *)(piVar6[1] + 8) - 1U & 0xfffffff8) + 8);
        iVar15 = (int)((ulonglong)uVar25 >> 0x20);
        piVar12 = (int *)*piVar6;
        iVar11 = piVar6[1];
        do {
          iVar19 = *piVar12;
          bVar24 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar24);
        *piVar12 = iVar19 + 1;
        if (iVar19 < 0) goto LAB_009751ec;
        puVar21 = (undefined4 *)thunk_FUN_016d4a50(0x10);
        if (puVar21 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x10);
        }
        iVar22 = param_1[0x22];
        iVar19 = param_1[0x20];
        *puVar21 = 1;
        puVar21[1] = 1;
        puVar21[2] = piVar12;
        puVar21[3] = iVar11;
        if (iVar22 == iVar19) {
          FUN_009b6a00(param_1 + 0x20);
        }
        puVar9 = (undefined4 *)(param_1[0x21] + iVar22 * 8);
        *puVar9 = puVar21;
        puVar9[1] = &DAT_0186860c;
        param_1[0x22] = iVar22 + 1;
        puVar17 = (uint *)*piVar6;
        puVar16 = puVar17 + 1;
LAB_0097626c:
        uVar7 = *puVar16;
        do {
          if (uVar7 == 0xffffffff) goto LAB_00976268;
          if ((int)uVar7 < 0) {
            local_74 = &DAT_0157d360;
            local_78 = (uint *)&DAT_018ae270;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00590e71,&local_78,&DAT_018ae278);
          }
          uVar14 = *puVar16;
          if (uVar14 == uVar7) {
            bVar3 = (bool)hasExclusiveAccess(puVar16);
            if (bVar3) {
              *puVar16 = uVar7 + 1;
            }
            bVar24 = false;
            if (bVar3) {
              DataMemoryBarrier(0xb);
              bVar24 = true;
            }
          }
          else {
            bVar24 = false;
            ClearExclusiveLocal();
          }
          uVar7 = uVar14;
        } while (!bVar24);
        uVar7 = piVar6[1];
        iVar11 = param_1[0x25];
        local_78 = puVar17;
        local_74 = (undefined4 *)uVar7;
        if (iVar11 == param_1[0x23]) {
          FUN_009b6a00();
        }
        piVar6 = (int *)(param_1[0x24] + iVar11 * 8);
        *piVar6 = (int)puVar17;
        piVar6[1] = uVar7;
        param_1[0x25] = iVar11 + 1;
        puVar16 = (uint *)(**(code **)(iVar15 + 0x2c))((int)uVar25);
        uVar7 = *puVar23;
        iVar11 = param_1[0x1f];
        do {
          uVar14 = *puVar16;
          bVar24 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar24);
        *puVar16 = uVar14 + uVar7;
        puVar16[1] = puVar16[1] + iVar11 + (uint)CARRY4(uVar14,uVar7);
        puVar16 = (uint *)(**(code **)(iVar15 + 0x28))((int)uVar25);
        *(undefined1 *)(param_1 + 0x3f) = 0;
        iVar15 = param_1[0x2c];
        iVar11 = param_1[0x2d];
        iVar19 = param_1[0x2e];
        param_1[0x34] = iVar15;
        param_1[0x35] = iVar11;
        param_1[0x3e] = (int)puVar16;
        param_1[0x36] = iVar19;
LAB_00976358:
        param_1[0x3c] = (int)puVar16;
        *(undefined1 *)((int)param_1 + 0xfd) = 1;
        param_1[0x3d] = -1;
        param_1[0x3a] = iVar19;
        param_1[0x38] = iVar15;
        param_1[0x39] = iVar11;
LAB_00976374:
        if (puVar16 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("polled MutexLockFuture after completion",0x27,&DAT_0187a760);
        }
        piVar6 = (int *)*param_2;
        do {
          uVar7 = *puVar16;
          bVar24 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar24);
        *puVar16 = uVar7 | 1;
        DataMemoryBarrier(0xb);
        if ((uVar7 & 1) != 0) {
          puVar17 = puVar16 + 1;
          do {
            if (*puVar17 != 0) {
              ClearExclusiveLocal();
              FUN_015bf680(puVar17);
              iVar15 = extraout_r2;
              goto LAB_00976444;
            }
            bVar24 = (bool)hasExclusiveAccess(puVar17);
          } while (!bVar24);
          *puVar17 = 1;
          DataMemoryBarrier(0xb);
          iVar15 = 0;
LAB_00976444:
          uVar7 = 0;
          if ((DAT_018dd988 & 0x7fffffff) == 0) {
            cVar4 = (char)puVar16[2];
          }
          else {
            uVar7 = FUN_015bf3f8();
            uVar7 = uVar7 ^ 1;
            cVar4 = (char)puVar16[2];
            iVar15 = extraout_r2_00;
          }
          if (cVar4 != '\0') {
            uVar14 = (uint)local_74 >> 8;
            local_74 = (undefined4 *)CONCAT31((int3)uVar14,(char)uVar7);
            local_78 = puVar17;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_78,&DAT_01869234,&DAT_0187a770);
          }
          uVar14 = param_1[0x3d];
          if (uVar14 == 0xffffffff) {
            uVar25 = (**(code **)*piVar6)(piVar6[1]);
            uVar18 = puVar16[7];
            FUN_0098a8a4(puVar16 + 3,uVar18,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
            uVar14 = puVar16[6];
            param_1[0x3d] = uVar18;
            if (uVar14 == 1) {
              do {
                bVar24 = (bool)hasExclusiveAccess(puVar16);
              } while (!bVar24);
              *puVar16 = *puVar16 | 2;
            }
          }
          else {
            if ((puVar16[5] <= uVar14) ||
               (piVar12 = (int *)(puVar16[4] + uVar14 * 0xc), *piVar12 == 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_015be724(&DAT_00412edc,0xb,&DAT_0187a780);
            }
            puVar9 = (undefined4 *)piVar12[1];
            puVar21 = (undefined4 *)*piVar6;
            iVar11 = piVar6[1];
            if (puVar9 == (undefined4 *)0x0) {
              uVar25 = (*(code *)*puVar21)(iVar11);
            }
            else {
              if (puVar21 == puVar9) {
                iVar15 = piVar12[2];
              }
              if (puVar21 == puVar9 && iVar11 == iVar15) goto LAB_0097655c;
              uVar25 = (*(code *)*puVar21)(iVar11);
              (*(code *)puVar9[3])(piVar12[2]);
            }
            *(undefined8 *)(piVar12 + 1) = uVar25;
          }
LAB_0097655c:
          if (((uVar7 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
             (iVar15 = FUN_015bf3f8(), iVar15 == 0)) {
            *(undefined1 *)(puVar16 + 2) = 1;
          }
          DataMemoryBarrier(0xb);
          do {
            uVar7 = *puVar17;
            bVar24 = (bool)hasExclusiveAccess(puVar17);
          } while (!bVar24);
          *puVar17 = 0;
          if (uVar7 == 2) {
            FUN_016d6968(0xf0,puVar17,0x81,1);
          }
          do {
            uVar7 = *puVar16;
            bVar24 = (bool)hasExclusiveAccess(puVar16);
          } while (!bVar24);
          *puVar16 = uVar7 | 1;
          DataMemoryBarrier(0xb);
          if ((uVar7 & 1) == 0) {
            FUN_0099a108(puVar16,param_1[0x3d],0);
            goto LAB_009765d0;
          }
          *(undefined1 *)(param_1 + 0x3f) = 3;
          uVar5 = 5;
          goto LAB_0097661c;
        }
        FUN_0099a108(puVar16,param_1[0x3d],0);
LAB_009765d0:
        uVar14 = param_1[0x39];
        *(undefined1 *)((int)param_1 + 0xfd) = 0;
        param_1[0x3c] = 0;
        uVar7 = param_1[0x3a];
        puVar16[8] = param_1[0x38];
        puVar16[9] = uVar14;
        puVar16[10] = uVar7;
        FUN_00999f24(puVar16);
        piVar6 = (int *)param_1[0x32];
        *(undefined2 *)(param_1 + 0x3f) = 1;
        if (piVar6 == (int *)0x0) break;
LAB_00976180:
        piVar12 = (int *)0x0;
        if (piVar6 != (int *)param_1[0x33]) {
          piVar12 = piVar6 + 2;
        }
        param_1[0x32] = (int)piVar12;
      } while (piVar6 != (int *)param_1[0x33]);
    } while( true );
  }
LAB_00975748:
  (**(code **)(param_1[0x1c] + 0x10))
            (param_1[0x1b] + (*(int *)(param_1[0x1c] + 8) - 1U & 0xfffffff8) + 8);
  FUN_008e7734(param_1 + 0x20);
LAB_00975770:
  piVar12 = (int *)*piVar6;
  DataMemoryBarrier(0xb);
  do {
    iVar15 = *piVar12;
    bVar24 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar24);
  *piVar12 = iVar15 + -1;
  if (iVar15 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(*piVar6,param_1[0x1c]);
  }
  goto LAB_00975310;
LAB_009756f8:
  piVar20 = piVar12 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar11 = *piVar20;
    bVar24 = (bool)hasExclusiveAccess(piVar20);
  } while (!bVar24);
  *piVar20 = iVar11 + -1;
  if (iVar11 == 1) {
    DataMemoryBarrier(0xb);
    uVar7 = *(uint *)(iVar15 + 8);
    if (uVar7 < 5) {
      uVar7 = 4;
    }
    if ((*(int *)(iVar15 + 4) + uVar7 + 7 & -uVar7) != 0) {
      thunk_FUN_016d3fb4(piVar12);
    }
  }
  goto LAB_00975748;
LAB_009758ec:
  uVar5 = 4;
LAB_00975b48:
  local_118 = param_1 + 0x15;
  uVar13 = 3;
  *(undefined1 *)local_118 = uVar5;
  uVar8 = 1;
  goto LAB_00975b58;
LAB_00976268:
  HintYield();
  goto LAB_0097626c;
LAB_0097562c:
  iVar15 = -0x80000000;
LAB_00975bcc:
  local_104 = param_1 + 0x16;
  local_10c = param_1 + 0x1a;
  piVar6 = (int *)param_1[0x18];
  DataMemoryBarrier(0xb);
  do {
    iVar11 = *piVar6;
    bVar24 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar24);
  *piVar6 = iVar11 + -1;
  if (iVar11 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(param_1[0x18],param_1[0x19]);
  }
  *(undefined1 *)local_10c = 1;
  if (iVar15 == -0x7fffffff) {
    uVar5 = 3;
    goto LAB_00975b48;
  }
  piVar6 = param_1 + 9;
  *piVar6 = iVar15;
  param_1[10] = local_c8;
  param_1[0xb] = iStack_c4;
  param_1[0xc] = iStack_c0;
  param_1[0xd] = iStack_bc;
  param_1[0xe] = iStack_b8;
  param_1[0xf] = local_b4;
  param_1[0x10] = iStack_b0;
  param_1[0x11] = iStack_ac;
  param_1[0x12] = iStack_a8;
  param_1[0x13] = iStack_a4;
  param_1[0x14] = iStack_a0;
  FUN_00973100(local_104);
  if (*piVar6 != -0x80000000) {
    *local_104 = *piVar6;
    param_1[0x17] = param_1[10];
    param_1[0x18] = param_1[0xb];
    param_1[0x19] = param_1[0xc];
    param_1[0x1a] = param_1[0xd];
    param_1[0x1b] = param_1[0xe];
    param_1[0x1c] = param_1[0xf];
    param_1[0x1d] = param_1[0x10];
    param_1[0x1e] = param_1[0x11];
    param_1[0x1f] = param_1[0x12];
    param_1[0x20] = param_1[0x13];
    param_1[0x21] = param_1[0x14];
    FUN_00714b60(local_104,param_1[0xf],param_1[0x1e],0);
    FUN_01656eb8(&local_78,&DAT_0186840c,0,0,100000000,&DAT_0186840c);
    FUN_016dd1aa(&local_c8,&local_78,0x50);
    FUN_016dd1aa(param_1 + 0x22,&local_c8,0x50);
switchD_00974ea4_caseD_4:
    iVar15 = FUN_01657fc4(param_1 + 0x22,*param_2);
    if (iVar15 != 0) goto LAB_009758ec;
    FUN_00a07b4c(param_1 + 0x22);
    FUN_008e7734(param_1 + 0x16);
    goto LAB_0097522c;
  }
  FUN_007c50c4(param_1 + 1);
  *(undefined1 *)(param_1 + 0x15) = 1;
  FUN_00973090(param_1);
  piVar6 = (int *)param_1[0x40];
  DataMemoryBarrier(0xb);
  do {
    iVar15 = *piVar6;
    bVar24 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar24);
  *piVar6 = iVar15 + -1;
  uVar13 = 1;
  uVar8 = 0;
  if (iVar15 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0099b058(param_1[0x40]);
    uVar8 = 0;
  }
LAB_00975b58:
  *(undefined1 *)(param_1 + 0x41) = uVar13;
  return uVar8;
}

