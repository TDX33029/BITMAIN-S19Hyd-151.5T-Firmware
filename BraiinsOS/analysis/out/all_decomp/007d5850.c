// FUN_007d5850 @ 007d5850 size=2824 calls_out=27 calls_in=2
// strings: BUG: impossible

void FUN_007d5850(undefined1 *param_1,double *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  code *pcVar14;
  char *pcVar15;
  undefined4 **ppuVar16;
  uint uVar17;
  bool bVar18;
  double in_d16;
  double in_d17;
  ulonglong uVar19;
  double dVar20;
  double local_98;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined4 ****local_88;
  code *local_84;
  double *local_80;
  code *local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 local_6c;
  undefined8 ****local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined4 local_60;
  int *local_5c;
  double local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 ****local_48;
  uint *local_44;
  undefined4 *local_40;
  undefined8 ****local_3c;
  uint *local_38;
  undefined *local_34;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x5d)) {
  case 0:
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_2 + 0xb);
    uVar19 = FUN_007143c8();
    piVar10 = (int *)uVar19;
    bVar1 = *(byte *)(piVar10 + 0x14);
    if ((((uVar19 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar9 = FUN_015bf3f8(), iVar9 == 0)) {
      *(undefined1 *)(piVar10 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar10;
      bVar18 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar18);
    *piVar10 = 0;
    if (iVar9 == 2) {
      FUN_016d6968(0xf0,piVar10,0x81,1);
    }
    ppuVar16 = *(undefined4 ***)(param_2 + 1);
    *(undefined1 *)((int)param_2 + 0x5c) =
         *(undefined1 *)(*(int *)(&DAT_018afb88 + (uint)bVar1 * 4) + 6);
    do {
      if (*ppuVar16 != (undefined4 *)0x0) {
        ClearExclusiveLocal();
        FUN_015bf680(ppuVar16);
        goto LAB_007d5914;
      }
      bVar18 = (bool)hasExclusiveAccess(ppuVar16);
    } while (!bVar18);
    *ppuVar16 = (undefined4 *)0x1;
    DataMemoryBarrier(0xb);
LAB_007d5914:
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      if (*(char *)(ppuVar16 + 1) != '\0') {
        uVar17 = 0;
LAB_007d6194:
        local_5c = (int *)CONCAT31(local_5c._1_3_,(char)uVar17);
        local_60 = (undefined4 ****)ppuVar16;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00342b23,9,&local_60,&DAT_0185eb28,&DAT_0185e894);
      }
      in_d16 = *(double *)(ppuVar16 + 2);
      *param_2 = in_d16;
LAB_007d5944:
      if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar9 = FUN_015bf3f8(), iVar9 == 0)) {
        *(undefined1 *)(ppuVar16 + 1) = 1;
      }
    }
    else {
      uVar17 = FUN_015bf3f8();
      uVar17 = uVar17 ^ 1;
      if (*(char *)(ppuVar16 + 1) != '\0') goto LAB_007d6194;
      in_d16 = *(double *)(ppuVar16 + 2);
      *param_2 = in_d16;
      if (uVar17 == 0) goto LAB_007d5944;
    }
    DataMemoryBarrier(0xb);
    do {
      puVar7 = *ppuVar16;
      bVar18 = (bool)hasExclusiveAccess(ppuVar16);
    } while (!bVar18);
    *ppuVar16 = (undefined4 *)0x0;
    if (puVar7 == (undefined4 *)0x2) {
      FUN_016d6968(0xf0,ppuVar16,0x81,1);
    }
    iVar9 = *(int *)(param_2 + 1);
    *(int *)((int)param_2 + 0xc) = iVar9;
    *(undefined1 *)(param_2 + 3) = 0;
LAB_007d59c0:
    *(int *)(param_2 + 2) = iVar9;
    *(undefined1 *)((int)param_2 + 0x54) = 0;
    *(int *)((int)param_2 + 0x1c) = iVar9 + 0x38;
switchD_007d59a4_caseD_3:
    iVar9 = FUN_007d67b8((undefined4 *)((int)param_2 + 0x1c),param_3);
    if (iVar9 != 0) {
      *(int *)((int)param_2 + 0x14) = iVar9;
      if (*(char *)((int)param_2 + 0x54) == '\x03') {
        cVar4 = *(char *)(param_2 + 10);
        bVar18 = cVar4 == '\x03';
        if (bVar18) {
          cVar4 = *(char *)((int)param_2 + 0x2c);
        }
        if (bVar18 && cVar4 == '\x04') {
          FUN_0163c790(param_2 + 6);
          if (*(int *)((int)param_2 + 0x34) != 0) {
            (**(code **)(*(int *)((int)param_2 + 0x34) + 0xc))(*(undefined4 *)(param_2 + 7));
          }
        }
      }
      puVar12 = *(undefined4 **)(*(int *)((int)param_2 + 0x14) + 0x14);
      puVar7 = (undefined4 *)thunk_FUN_016d4a50(8);
      if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,8);
      }
      piVar10 = (int *)*puVar12;
      if (piVar10 == (int *)0x0) {
        *(undefined4 *)((int)param_2 + 0x1c) = puVar7;
        *puVar7 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00342e03,0x25,&DAT_0185e7f4);
      }
      iVar9 = puVar12[1];
      do {
        iVar8 = *piVar10;
        bVar18 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar18);
      *piVar10 = iVar8 + 1;
      if (iVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)software_udf(0xfdee,0x7d63a4);
        (*pcVar14)();
      }
      iVar8 = *(int *)(iVar9 + 8);
      pcVar14 = *(code **)(iVar9 + 0xc);
      *(undefined4 **)((int)param_2 + 0x1c) = puVar7;
      *(int **)(param_2 + 4) = piVar10;
      *(int *)((int)param_2 + 0x24) = iVar9;
      *puVar7 = piVar10;
      puVar7[1] = iVar9;
      dVar20 = (double)(*pcVar14)((int)piVar10 + (iVar8 - 1U & 0xfffffff8) + 8,
                                  *(undefined4 *)(param_2 + 2));
      param_2[5] = dVar20;
      goto LAB_007d5a98;
    }
    uVar2 = 3;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185e8a4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185e8a4);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 3)) {
    case 0:
      iVar9 = *(int *)((int)param_2 + 0xc);
      goto LAB_007d59c0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0185e7e4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0185e7e4);
    case 3:
      goto switchD_007d59a4_caseD_3;
    case 4:
      dVar20 = param_2[5];
    }
LAB_007d5a98:
    (**(code **)((int)((ulonglong)dVar20 >> 0x20) + 0xc))(&local_60,SUB84(dVar20,0),param_3);
    dVar20 = local_58;
    piVar10 = local_5c;
    uVar17 = (uint)local_60 & 0xff;
    if (uVar17 != 5) {
      local_6c = (undefined4 *)CONCAT22(CONCAT11(local_6c._3_1_,local_60._3_1_),local_60._1_2_);
      uVar13 = *(undefined4 *)(param_2 + 5);
      puVar7 = *(undefined4 **)((int)param_2 + 0x2c);
      pcVar14 = (code *)*puVar7;
      if (pcVar14 != (code *)0x0) {
        (*pcVar14)(uVar13);
      }
      if (puVar7[1] != 0) {
        thunk_FUN_016d3fb4(uVar13);
      }
      piVar5 = *(int **)(param_2 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar5;
        bVar18 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar18);
      *piVar5 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(*(undefined4 *)(param_2 + 4),*(undefined4 *)((int)param_2 + 0x24));
      }
      thunk_FUN_016d3fb4(*(undefined4 *)((int)param_2 + 0x1c));
      pcVar15 = *(char **)((int)param_2 + 0x14);
      if (*pcVar15 == '\0') {
        bVar18 = (bool)hasExclusiveAccess(pcVar15);
        if (!bVar18) goto LAB_007d5b84;
        *pcVar15 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_007d5b84:
        FUN_01280da8(pcVar15);
      }
      FUN_0128236c(pcVar15);
      FUN_0163af68(pcVar15,1,pcVar15);
      if (uVar17 == 4) {
        uVar17 = 4;
        DataMemoryBarrier(0xb);
        if (DAT_018d8068 == 0) {
          local_3c = *(undefined8 *****)(*(int *)(param_2 + 2) + 0x50);
          puVar6 = (uint *)thunk_FUN_016d4a50(0xc);
          if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0xc);
          }
          local_88 = &local_3c;
          local_84 = (code *)&DAT_00f5c97c;
          FUN_00600d2c(&local_60,&DAT_00590e71,&local_88);
          local_40 = (undefined4 *)&DAT_00000001;
          *puVar6 = (uint)local_60;
          puVar6[1] = (uint)local_5c;
          puVar6[2] = local_58._0_4_;
          local_48 = (undefined4 ****)&DAT_00000001;
          local_44 = puVar6;
          local_38 = (uint *)thunk_FUN_016d4a50(8);
          if (local_38 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(4,8);
          }
          uVar11 = puVar6[2];
          *local_38 = puVar6[1];
          local_38[1] = uVar11;
          local_34 = (undefined *)0x1;
          local_3c = (undefined8 ****)&DAT_00000001;
          FUN_006048f4(&local_3c);
          local_38[2] = (uint)&DAT_0056a0c0;
          local_38[3] = 8;
          local_34 = (undefined *)0x2;
          FUN_009b4e0c(&local_88,DAT_018d7fbc + 8,local_38,2);
          if (local_88 != (undefined4 ****)&DAT_00000005) {
            local_60 = local_88;
            local_5c = (int *)local_84;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_60,&DAT_01869dec,&DAT_01886b2c);
          }
          do {
            bVar18 = (bool)hasExclusiveAccess((int *)((int)local_84 + 8));
          } while (!bVar18);
          *(int *)((int)local_84 + 8) = SUB84(dVar20,0);
          *(int *)((int)local_84 + 0xc) = (int)((ulonglong)dVar20 >> 0x20);
          DataMemoryBarrier(0xb);
          do {
            iVar9 = *(int *)local_84;
            bVar18 = (bool)hasExclusiveAccess(local_84);
          } while (!bVar18);
          *(int *)local_84 = iVar9 + -1;
          if (iVar9 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0078fa50();
          }
          if (local_3c != (undefined8 ****)0x0) {
            thunk_FUN_016d3fb4(local_38);
          }
          if (*puVar6 != 0) {
            thunk_FUN_016d3fb4(puVar6[1]);
          }
          thunk_FUN_016d3fb4(puVar6);
        }
      }
      uVar2 = (undefined1)uVar17;
      local_74 = (undefined *)CONCAT22(CONCAT11(local_74._3_1_,local_6c._2_1_),(undefined2)local_6c)
      ;
      *(undefined1 *)(param_2 + 3) = 1;
      local_8c = (undefined2)local_6c;
      local_8a = local_6c._2_1_;
      FUN_007d56a8((int)param_2 + 0xc);
      if (uVar17 == 4) {
        local_98 = dVar20;
        in_d16 = *param_2;
        in_d17 = dVar20 - in_d16;
        if (!NAN(in_d17)) {
          in_d17 = ABS(in_d17);
          if (in_d17 <= 2.5) {
            iVar9 = *(int *)(param_2 + 1);
            ppuVar16 = (undefined4 **)(iVar9 + 0x18);
            do {
              if (*ppuVar16 != (undefined4 *)0x0) {
                ClearExclusiveLocal();
                FUN_015bf680(ppuVar16);
                goto joined_r0x007d610c;
              }
              bVar18 = (bool)hasExclusiveAccess(ppuVar16);
            } while (!bVar18);
            *ppuVar16 = (undefined4 *)0x1;
            DataMemoryBarrier(0xb);
joined_r0x007d610c:
            if ((DAT_018dd988 & 0x7fffffff) == 0) {
              uVar17 = 0;
              if (*(char *)(iVar9 + 0x1c) != '\0') {
LAB_007d6230:
                local_5c = (int *)CONCAT31(local_5c._1_3_,(char)uVar17);
                local_60 = (undefined4 ****)ppuVar16;
                    /* WARNING: Subroutine does not return */
                FUN_00fb74f8(&DAT_00342b23,9,&local_60,&DAT_0185eb68,&DAT_0185e8b4);
              }
              *(double *)(iVar9 + 0x28) = dVar20;
              *(undefined4 *)(iVar9 + 0x20) = 1;
              *(undefined4 *)(iVar9 + 0x24) = 0;
LAB_007d5fe4:
              if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar8 = FUN_015bf3f8(), iVar8 == 0)) {
                *(undefined1 *)(iVar9 + 0x1c) = 1;
              }
            }
            else {
              uVar17 = FUN_015bf3f8();
              uVar17 = uVar17 ^ 1;
              if (*(char *)(iVar9 + 0x1c) != '\0') goto LAB_007d6230;
              *(undefined4 *)(iVar9 + 0x20) = 1;
              *(undefined4 *)(iVar9 + 0x24) = 0;
              *(double *)(iVar9 + 0x28) = dVar20;
              if (uVar17 == 0) goto LAB_007d5fe4;
            }
            DataMemoryBarrier(0xb);
            do {
              puVar7 = *ppuVar16;
              bVar18 = (bool)hasExclusiveAccess(ppuVar16);
            } while (!bVar18);
            *ppuVar16 = (undefined4 *)0x0;
            uVar2 = 4;
            if (puVar7 == (undefined4 *)0x2) {
              FUN_016d6968(0xf0,ppuVar16,0x81,1);
            }
            goto LAB_007d60bc;
          }
          if (in_d17 < 2.5) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f934);
          }
        }
        if (*(char *)((int)param_2 + 0x5c) == '\0') {
          uVar2 = 0;
          in_d17 = dVar20;
        }
        else if (((DAT_018d9130 < 4) &&
                 ((DAT_018d93bc - 1 < 2 ||
                  ((DAT_018d93bc != 0 && (cVar4 = FUN_0169ac90(&DAT_018d93b4), cVar4 != '\0'))))))
                && (iVar9 = FUN_016949d8(DAT_018d93b4), iVar9 != 0)) {
          local_60 = *(undefined4 *****)(DAT_018d93b4 + 0x1c);
          local_5c = *(int **)(DAT_018d93b4 + 0x20);
          if (local_5c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185e8c4);
          }
          local_58 = *(double *)(DAT_018d93b4 + 0x24);
          local_38 = &local_6c;
          local_44 = (uint *)0x1;
          local_68 = (undefined8 ****)&local_88;
          local_3c = (undefined8 ****)&local_60;
          local_88 = (undefined4 ****)&local_98;
          local_48 = &local_3c;
          local_50 = 0;
          local_34 = &DAT_018abb78;
          local_6c = (undefined4 *)&DAT_005755ef;
          local_7c = FUN_00f5cdb8;
          local_84 = FUN_00f5cdb8;
          local_80 = param_2;
          local_40 = (undefined4 *)(DAT_018d93b4 + 0x1c);
          FUN_007d6618(&local_48);
          uVar2 = 4;
        }
        else {
          uVar2 = 4;
        }
      }
      else {
        local_60 = (undefined4 ****)CONCAT31(CONCAT12(local_8a,local_8c),uVar2);
        if (*(char *)((int)param_2 + 0x5c) == '\0') {
          in_d17 = (double)CONCAT44(local_4c,local_50);
          local_62 = local_8a;
          local_64 = local_8c;
          in_d16 = dVar20;
        }
        else {
          local_5c = piVar10;
          if ((DAT_018d9130 < 4) &&
             (((DAT_018d93c8 - 1 < 2 ||
               ((DAT_018d93c8 != 0 && (cVar4 = FUN_0169ac90(&DAT_018d93c0), cVar4 != '\0')))) &&
              (iVar9 = FUN_016949d8(DAT_018d93c0), iVar9 != 0)))) {
            if (*(int **)(DAT_018d93c0 + 0x20) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185e8d4);
            }
            local_80 = *(double **)(DAT_018d93c0 + 0x24);
            local_7c = *(code **)(DAT_018d93c0 + 0x28);
            local_38 = &local_74;
            local_44 = (uint *)&DAT_00000001;
            local_70 = &local_6c;
            local_3c = (undefined8 ****)&local_88;
            local_6c = &local_60;
            local_48 = &local_3c;
            uStack_78 = 0;
            local_34 = &DAT_018abb78;
            local_74 = &DAT_0057d69d;
            local_68 = (undefined8 ****)0x8e3048;
            local_88 = *(undefined4 *****)(DAT_018d93c0 + 0x1c);
            local_84 = (code *)*(int **)(DAT_018d93c0 + 0x20);
            local_40 = (undefined4 *)(DAT_018d93c0 + 0x1c);
            FUN_007d66e8(&local_48);
            uVar17 = (uint)local_60 & 0xff;
          }
          if (uVar17 == 3) {
            (**(code **)*local_5c)();
          }
          uVar2 = 4;
        }
      }
LAB_007d60bc:
      param_1[3] = local_62;
      uVar3 = 1;
      *param_1 = uVar2;
      *(undefined2 *)(param_1 + 1) = local_64;
      *(double *)(param_1 + 8) = in_d16;
      *(double *)(param_1 + 0x10) = in_d17;
      *(int **)(param_1 + 4) = piVar10;
      goto LAB_007d60e0;
    }
    uVar2 = 4;
  }
  *(undefined1 *)(param_2 + 3) = uVar2;
  *param_1 = 5;
  uVar3 = 3;
LAB_007d60e0:
  *(undefined1 *)((int)param_2 + 0x5d) = uVar3;
  return;
}

