// FUN_00833c00 @ 00833c00 size=1660 calls_out=15 calls_in=0
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x008340d0) */

undefined8 FUN_00833c00(uint *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint *puVar9;
  code *pcVar10;
  uint uVar11;
  uint unaff_r5;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  char *pcVar19;
  int *piVar20;
  bool bVar21;
  uint in_fpscr;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  uint local_50 [5];
  undefined1 local_39;
  undefined1 *local_38;
  undefined1 *local_34;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x28]) {
  case '\0':
    uVar16 = param_1[0x25];
    uVar12 = param_1[0x26];
    param_1[0x27] = uVar12;
    piVar20 = (int *)param_1[0x24];
    if (*(int *)(uVar16 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faf2a4(&DAT_0187b958);
    }
    uVar6 = FUN_018462e8(0xffffffff);
    puVar13 = (undefined1 *)0x0;
    dVar23 = (double)VectorUnsignedToFloat
                               (*(undefined4 *)(uVar16 + 0xb8),(byte)(in_fpscr >> 0x16) & 3);
    *(undefined1 *)(param_1 + 1) = 0;
    dVar22 = (double)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
    dVar24 = (double)VectorUnsignedToFloat(uVar12,(byte)(in_fpscr >> 0x16) & 3);
    dVar22 = ((dVar22 / dVar23) / dVar24) * 12500000.0 * 0.8;
    uVar12 = (uint)(0.0 < dVar22) * (int)(longlong)dVar22 & 0x7fffffff;
    *param_1 = uVar12;
    if (*(int *)(uVar16 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faf2a4(&DAT_0187b968);
    }
    uVar6 = FUN_018462e8(*(undefined4 *)(uVar16 + 0x58));
    dVar22 = (double)VectorUnsignedToFloat(uVar12,(byte)(in_fpscr >> 0x16) & 3);
    dVar23 = (double)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
    dVar22 = (double)VectorUnsignedToFloat
                               ((uint)(0.0 < 12500000.0 / dVar22) *
                                (int)(longlong)(12500000.0 / dVar22),(byte)(in_fpscr >> 0x16) & 3);
    uVar12 = (uint)((ulonglong)(dVar23 / dVar22) >> 0x20);
    uVar11 = SUB84(dVar23 / dVar22,0);
    uVar16 = (uVar12 & 0x7fffffff) >> 0x14;
    if (uVar16 < 0x3e0) {
      uVar16 = 0;
      uVar12 = 0;
    }
    else {
      uVar7 = uVar12 & 0xfffff | 0x100000;
      uVar17 = uVar16 - 0x3ff;
      if (uVar16 < 0x3ff) {
        local_50[1] = uVar7;
        local_50[0] = uVar11;
        local_50[3] = 0;
        local_50[2] = 0;
        uVar7 = uVar16 - 0x3d3 & 0x1f;
        uVar11 = uVar7 ^ 0x1f;
        iVar4 = -(uVar16 - 0x3d3 >> 3 & 0xc);
        uVar16 = *(uint *)((int)local_50 + iVar4 + 4);
        uVar14 = *(uint *)((int)local_50 + iVar4 + 8);
        lVar1 = (ulonglong)(uVar14 << uVar7 | (uVar16 >> 1) >> uVar11) * 1000000000;
        uVar15 = (uint)lVar1;
        lVar2 = (ulonglong)(*(uint *)((int)local_50 + iVar4) << uVar7) * 1000000000;
        uVar12 = (uint)((ulonglong)lVar2 >> 0x20);
        uVar17 = 0;
        lVar3 = (ulonglong)(uVar16 << uVar7 | (*(uint *)((int)local_50 + iVar4) >> 1) >> uVar11) *
                1000000000;
        uVar16 = (uint)((ulonglong)lVar3 >> 0x20);
        uVar26 = lVar3 + CONCAT44(uVar15,uVar12);
        uVar12 = (int)((ulonglong)lVar1 >> 0x20) +
                 (*(int *)((int)local_50 + iVar4 + 0xc) << uVar7 | (uVar14 >> 1) >> uVar11) *
                 1000000000 +
                 (uint)(CARRY4(uVar15,uVar16) ||
                       CARRY4(uVar15 + uVar16,(uint)CARRY4((uint)lVar3,uVar12)));
        if ((uVar26 & 0x8000000000000000) != 0) {
          uVar17 = (uint)(((int)lVar2 != 0 || (int)(uVar26 >> 0x20) != -0x80000000) ||
                         (int)uVar26 != 0) | uVar12 & 1;
        }
        puVar8 = (undefined1 *)(uVar17 + uVar12);
        puVar13 = (undefined1 *)0x0;
        if (puVar8 != &DAT_3b9aca00) {
          puVar13 = puVar8;
        }
        uVar16 = (uint)(puVar8 == &DAT_3b9aca00);
        uVar12 = 0;
      }
      else if (uVar16 < 0x433) {
        uVar15 = 0x433 - uVar16;
        uVar14 = uVar11 >> (0x20 - uVar17 & 0xff) | uVar12 << (uVar17 & 0xff);
        uVar12 = uVar11 << (uVar17 & 0xff);
        if (-1 < (int)(uVar16 - 0x41f)) {
          uVar12 = 0;
          uVar14 = uVar11 << (uVar16 - 0x41f & 0xff);
        }
        uVar26 = (ulonglong)(uVar14 & 0xfffff) * 1000000000 +
                 ((ulonglong)uVar12 * 1000000000 >> 0x20);
        uVar17 = 0;
        uVar16 = (uint)uVar26 >> 0x14;
        uVar11 = uVar11 >> (uVar15 & 0xff) | uVar7 << (0x20 - (uVar15 & 0xffff) & 0xff);
        uVar14 = (uVar15 & 0xffff) - 0x20;
        if (-1 < (int)uVar14) {
          uVar11 = uVar7 >> (uVar14 & 0xff);
        }
        uVar7 = uVar7 >> (uVar15 & 0xff);
        if (-1 < (int)uVar14) {
          uVar7 = 0;
        }
        if ((uVar26 & 0x80000) != 0) {
          uVar17 = (uint)((int)((ulonglong)uVar12 * 1000000000) != 0 ||
                         ((uint)uVar26 & 0xfffff) != 0x80000) | uVar16 & 1;
        }
        puVar8 = (undefined1 *)(uVar17 + (uVar16 | (int)(uVar26 >> 0x20) << 0xc));
        puVar13 = (undefined1 *)0x0;
        if (puVar8 != &DAT_3b9aca00) {
          puVar13 = puVar8;
        }
        uVar16 = uVar11 + 1;
        uVar12 = uVar7 + (0xfffffffe < uVar11);
        if (puVar8 != &DAT_3b9aca00) {
          uVar16 = uVar11;
          uVar12 = uVar7;
        }
      }
      else {
        if (0x43e < uVar16) {
          local_39 = 1;
          local_34 = &LAB_00fba54c;
          local_38 = &local_39;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00590e71,&local_38,&DAT_018868b4);
        }
        uVar16 = uVar16 - 0x433;
        uVar12 = uVar11 >> (0x20 - (uVar16 & 0xffff) & 0xff) | uVar7 << (uVar16 & 0xff);
        uVar7 = (uVar16 & 0xffff) - 0x20;
        if (-1 < (int)uVar7) {
          uVar12 = uVar11 << (uVar7 & 0xff);
        }
        uVar16 = uVar11 << (uVar16 & 0xff);
        if (-1 < (int)uVar7) {
          uVar16 = 0;
        }
      }
    }
    param_1[4] = (uint)puVar13;
    param_1[2] = uVar16;
    param_1[3] = uVar12;
    iVar4 = DAT_018d7fe8;
    DataMemoryBarrier(0xb);
    if (DAT_018d8068 == 0) {
      do {
        bVar21 = (bool)hasExclusiveAccess((uint *)(DAT_018d7fe8 + 8));
      } while (!bVar21);
      *(uint *)(DAT_018d7fe8 + 8) = *param_1;
      *(undefined4 *)(iVar4 + 0xc) = 0;
    }
    uVar16 = *piVar20 + 8;
    uVar12 = 0;
    param_1[8] = uVar16;
    param_1[9] = (uint)param_1;
    *(undefined1 *)(param_1 + 0x14) = 0;
    param_1[6] = 0;
    puVar9 = param_1;
LAB_00833fb8:
    param_1[0xb] = uVar12;
    param_1[0xc] = param_1[7];
    param_1[0xd] = (uint)puVar9;
    param_1[10] = uVar16;
    unaff_r5 = *puVar9;
    uVar12 = puVar9[1];
    puVar9 = (uint *)FUN_016d38c8(4,1);
    if (puVar9 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,4);
    }
    param_1[0xe] = 4;
    *(undefined1 *)(param_1 + 0x23) = 0;
    param_1[0x15] = uVar16 + 0xc;
    param_1[0x11] = 0x10;
    param_1[0xf] = (uint)puVar9;
    param_1[0x10] = 4;
    param_1[0x12] = 4;
    *puVar9 = unaff_r5 << 0x18 | (unaff_r5 >> 8 & 0xff) << 0x10 | (unaff_r5 >> 0x10 & 0xff) << 8 |
              unaff_r5 >> 0x18 & 0x7f | ((byte)uVar12 & 1) << 7;
switchD_00833d18_caseD_3:
    uVar12 = FUN_007d67b8(param_1 + 0x15,param_2);
    if (uVar12 != 0) {
      param_1[0x13] = uVar12;
      if ((char)param_1[0x23] == '\x03') {
        cVar5 = (char)param_1[0x22];
        bVar21 = cVar5 == '\x03';
        if (bVar21) {
          cVar5 = (char)param_1[0x19];
        }
        if (bVar21 && cVar5 == '\x04') {
          FUN_0163c790(param_1 + 0x1a);
          if (param_1[0x1b] != 0) {
            (**(code **)(param_1[0x1b] + 0xc))(param_1[0x1c]);
          }
        }
      }
      if (param_1[0xb] == 1) {
        uVar12 = *(int *)param_1[10] * param_1[0xc];
        if (0xff < uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_0034b2fb,0x2e,&local_38,&DAT_0186b108,&DAT_0186afe8);
        }
      }
      else {
        uVar12 = (uint)*(byte *)((int *)param_1[10] + 1);
      }
      uVar25 = (**(code **)(*(int *)(param_1[0x13] + 0x20) + 0x14))
                         (*(undefined4 *)(param_1[0x13] + 0x1c),param_1[0xb],uVar12,param_1[0x11],
                          param_1[0x12],param_1[0xf],param_1[0x10]);
      *(undefined8 *)(param_1 + 0x15) = uVar25;
      goto LAB_008340fc;
    }
    *(undefined1 *)(param_1 + 0x14) = 3;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01863048);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01863048);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x14]) {
    case '\0':
      uVar12 = param_1[6];
      uVar16 = param_1[8];
      puVar9 = (uint *)param_1[9];
      goto LAB_00833fb8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01864dac);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01864dac);
    case '\x03':
      goto switchD_00833d18_caseD_3;
    case '\x04':
      uVar25 = *(undefined8 *)(param_1 + 0x15);
    }
LAB_008340fc:
    uVar26 = (**(code **)((int)((ulonglong)uVar25 >> 0x20) + 0xc))((int)uVar25,param_2);
    unaff_r5 = (uint)(uVar26 >> 0x20);
    if ((uVar26 & 1) == 0) {
      puVar18 = (undefined4 *)param_1[0x16];
      uVar12 = param_1[0x15];
      pcVar10 = (code *)*puVar18;
      if (pcVar10 != (code *)0x0) {
        (*pcVar10)(uVar12);
      }
      if (puVar18[1] != 0) {
        thunk_FUN_016d3fb4(uVar12);
      }
      pcVar19 = (char *)param_1[0x13];
      if (*pcVar19 == '\0') {
        bVar21 = (bool)hasExclusiveAccess(pcVar19);
        if (!bVar21) goto LAB_00834194;
        *pcVar19 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_00834194:
        FUN_01280da8(pcVar19);
      }
      FUN_0128236c(pcVar19);
      FUN_0163af68(pcVar19,1,pcVar19);
      if (param_1[0xe] != 0) {
        thunk_FUN_016d3fb4(param_1[0xf]);
      }
      *(undefined1 *)(param_1 + 0x14) = 1;
      if ((uVar26 & 1) == 0) {
        FUN_0082a908(param_1 + 6);
        *(undefined1 *)(param_1 + 0x28) = 1;
        uVar6 = 0;
        goto LAB_008341ec;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x14) = 4;
    }
    break;
  case '\x04':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 0x28) = 3;
  uVar6 = 1;
LAB_008341ec:
  return CONCAT44(unaff_r5,uVar6);
}

