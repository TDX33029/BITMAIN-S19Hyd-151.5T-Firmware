// FUN_012a6f04 @ 012a6f04 size=1620 calls_out=16 calls_in=1
// strings: async | awaitbreakcratedynexternfnforletmatchmodmutpubrefreturnstaticstructsupertraitunsafeusewhileboxwherevirtualalignofbecomesizeoftypeofunsizedyielddofinalmacro | MetricType

/* WARNING: Type propagation algorithm not settling */

void FUN_012a6f04(undefined4 *param_1)

{
  int *****pppppiVar1;
  int ****ppppiVar2;
  int ***pppiVar3;
  int iVar4;
  int ****ppppiVar5;
  undefined4 uVar6;
  int **ppiVar7;
  int ****ppppiVar8;
  int **ppiVar9;
  int ***pppiVar10;
  int *piVar11;
  int *piVar12;
  int ****ppppiVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  int ****ppppiVar17;
  int **ppiVar18;
  int ****ppppiVar19;
  int **ppiVar20;
  int ***pppiVar21;
  int ****ppppiVar22;
  bool bVar23;
  undefined8 uVar24;
  int *****local_b8;
  int ****local_b4;
  int ****local_b0;
  int ***local_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  int ****ppppiStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  int ***local_78;
  int **local_74;
  int *local_70;
  int **local_6c;
  int ****local_68;
  int ****local_64;
  int local_60;
  undefined4 local_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  int *****local_48;
  int ****local_44;
  int ****local_40;
  int ****local_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint local_2c;
  int *****local_28;
  
  piVar12 = *(int **)*param_1;
  *(undefined4 *)*param_1 = 0;
  if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac42c);
  }
  local_b8 = (int *****)&local_48;
  local_68 = (int ****)&DAT_018d87ec;
  DataMemoryBarrier(0xb);
  if (DAT_018d87ec != 0) {
    local_48 = &local_68;
    FUN_015eedc4(&DAT_018d87ec,0,&local_b8,&DAT_0188bd74,&DAT_0188bca0);
  }
  ppppiVar17 = local_68;
  local_68 = (int ****)0x0;
  local_b8 = (int *****)0x0;
  local_ac = ppppiVar17[1];
  local_60 = 0;
  local_64 = (int ****)&DAT_00000004;
  local_b0 = (int ****)0x0;
  local_b4 = (int ****)&DAT_00000004;
  local_28 = &local_68;
  FUN_01330314(&local_b8,&local_28);
  ppppiVar2 = local_64;
  ppppiVar17 = local_68;
  local_40 = local_68;
  local_48 = (int *****)local_64;
  ppppiVar13 = local_64 + local_60 * 5;
  local_44 = local_64;
  local_3c = ppppiVar13;
  if (local_60 != 0) {
    uVar14 = local_60 * 0x14;
    ppppiVar8 = local_64 + 6;
    ppppiVar22 = local_64;
    do {
      uVar14 = uVar14 - 0x14;
      pppiVar3 = *ppppiVar22;
      pppiVar21 = ppppiVar22[4];
      pppiVar10 = ppppiVar22[1];
      ppppiVar19 = ppppiVar22 + 2;
      ppppiVar22 = ppppiVar22 + 5;
      FUN_0132ff88(&local_b8,pppiVar10,*ppppiVar19);
      ppppiVar19 = local_b0;
      if (local_b0 == (int ****)0x0) {
        ppiVar18 = (int **)0x1;
        ppiVar20 = (int **)0x0;
        iVar15 = 0;
        if (*(char *)(pppiVar21 + 3) == '\x01') {
          ppiVar18 = pppiVar21[1];
          ppiVar20 = pppiVar21[2];
        }
        do {
          if ((*(int ***)((int)&DAT_01890e94 - iVar15) == ppiVar20) &&
             (iVar4 = thunk_FUN_016dd50a(*(undefined4 *)((int)&DAT_01890e90 - iVar15),ppiVar18,
                                         ppiVar20), iVar4 == 0)) {
            ppppiVar5 = (int ****)0x0;
            if (local_b8 < &DAT_00000005) {
              FUN_0132f8cc(&local_b8,0,5,1,1);
              ppppiVar5 = local_b0;
            }
            ppppiVar19 = (int ****)((int)ppppiVar5 + 5);
            *(undefined4 *)((int)local_b4 + (int)ppppiVar5) = 0x6d756e65;
            *(undefined1 *)((undefined4 *)((int)local_b4 + (int)ppppiVar5) + 1) = 0x5f;
            local_b0 = ppppiVar19;
            goto LAB_012a70bc;
          }
          bVar23 = iVar15 != -0x1b0;
          iVar15 = iVar15 + -8;
        } while (bVar23);
        ppppiVar19 = (int ****)0x0;
      }
LAB_012a70bc:
      ppiVar18 = (int **)0x1;
      if (*(char *)(pppiVar21 + 3) == '\0') {
        ppiVar20 = (int **)0x0;
      }
      else {
        ppiVar18 = pppiVar21[1];
        ppiVar20 = pppiVar21[2];
        if ((int **)((int)local_b8 - (int)ppppiVar19) < ppiVar20) {
          FUN_0132f8cc(&local_b8,ppppiVar19,ppiVar20,1,1);
          ppppiVar19 = local_b0;
        }
      }
      ppppiVar5 = local_b4;
      pppppiVar1 = local_b8;
      FUN_016dd1aa((undefined1 *)((int)local_b4 + (int)ppppiVar19),ppiVar18,ppiVar20);
      bVar23 = false;
      if ((undefined1 *)((int)ppppiVar19 + (int)ppiVar20) == (undefined1 *)0xa) {
        iVar15 = thunk_FUN_016dd50a(ppppiVar5,"MetricType",10);
        bVar23 = iVar15 == 0;
      }
      if (pppppiVar1 != (int *****)0x0) {
        thunk_FUN_016d3fb4(ppppiVar5);
      }
      if (bVar23) {
        if (pppiVar3 != (int ***)0x80000000) {
          for (uVar14 = uVar14 / 0x14; uVar14 != 0; uVar14 = uVar14 - 1) {
            if (ppppiVar8[-1] != (int ***)0x0) {
              thunk_FUN_016d3fb4(*ppppiVar8);
            }
            ppppiVar8 = ppppiVar8 + 5;
          }
          uVar6 = 0;
          if (ppppiVar17 != (int ****)0x0) {
            uVar6 = thunk_FUN_016d3fb4(ppppiVar2);
          }
          uVar24 = thunk_FUN_016de0ee(uVar6,0x2c0);
          puVar16 = (uint *)((int)uVar24 + (int)((ulonglong)uVar24 >> 0x20));
          if ((char)puVar16[4] == '\0') {
            FUN_015f62e4(&local_b8);
            *puVar16 = (uint)local_b8;
            puVar16[1] = (uint)local_b4;
            puVar16[2] = (uint)local_b0;
            puVar16[3] = (uint)local_ac;
            *(undefined1 *)(puVar16 + 4) = 1;
          }
          local_58 = *puVar16;
          uStack_54 = puVar16[1];
          uStack_50 = puVar16[2];
          uStack_4c = puVar16[3];
          local_38 = local_58 + 1;
          uStack_34 = uStack_54 + (0xfffffffe < local_58);
          local_64 = (int ****)0x0;
          local_60 = 0;
          *puVar16 = local_38;
          puVar16[1] = uStack_34;
          local_5c = 0;
          local_68 = (int ****)&DAT_005674cc;
          *puVar16 = local_58 + 2;
          puVar16[1] = uStack_54 + (0xfffffffd < local_58);
          ppiVar20 = pppiVar21[6];
          ppiVar18 = pppiVar21[7];
          local_48 = (int *****)local_68;
          local_44 = local_64;
          local_40 = (int ****)local_60;
          local_3c = (int ****)local_5c;
          if (ppiVar20 < ppiVar18) {
LAB_012a74ac:
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,ppiVar18,ppiVar20,&DAT_0188f948);
          }
          ppiVar7 = (int **)0x0;
          local_30 = uStack_50;
          local_2c = uStack_4c;
          if (ppiVar18 != (int **)0x0) {
            ppiVar7 = pppiVar21[5];
            iVar15 = 0;
            ppiVar20 = ppiVar7 + 4;
            do {
              piVar11 = (int *)0x0;
              if (ppiVar20[-4] != (int *)0x0) {
                piVar11 = ppiVar20[-3];
              }
              FUN_0133631c(&local_48,piVar11,iVar15);
              if (*(char *)(ppiVar20 + 1) == '\x01') {
                ppppiVar17 = (int ****)*ppiVar20;
                uVar6 = 0;
                if ((int)ppppiVar17 < 0) goto LAB_012a73e4;
                piVar11 = ppiVar20[-1];
                if (ppppiVar17 == (int ****)0x0) {
                  ppppiVar17 = (int ****)0x0;
                  ppppiVar8 = (int ****)&DAT_00000001;
                }
                else {
                  ppppiVar8 = (int ****)thunk_FUN_016d4a50(ppppiVar17);
                  if (ppppiVar8 == (int ****)0x0) {
                    uVar6 = 1;
                    ppppiVar8 = ppppiVar17;
                    goto LAB_012a73e4;
                  }
                }
              }
              else {
                ppppiVar8 = (int ****)&DAT_00000001;
                ppppiVar17 = (int ****)0x0;
                piVar11 = (int *)0x1;
              }
              FUN_016dd1aa(ppppiVar8,piVar11,ppppiVar17);
              local_b8 = (int *****)ppppiVar17;
              local_b4 = ppppiVar8;
              local_b0 = ppppiVar17;
              FUN_0133740c(&local_68,&local_b8,iVar15);
              iVar15 = iVar15 + 1;
              ppiVar9 = ppiVar20 + 6;
              ppiVar20 = ppiVar20 + 10;
            } while (ppiVar9 != ppiVar7 + (int)ppiVar18 * 10);
            ppiVar20 = pppiVar21[6];
            ppiVar18 = pppiVar21[7];
            ppiVar7 = ppiVar18;
            if (ppiVar20 < ppiVar18) goto LAB_012a74ac;
          }
          ppppiVar8 = (int ****)((int)ppiVar7 * 4);
          if (((int **)0x3fffffff < ppiVar7) || ((int ****)0x7ffffffc < ppppiVar8)) {
            uVar6 = 0;
LAB_012a73e4:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar6,ppppiVar8);
          }
          ppiVar20 = pppiVar21[5];
          ppiVar18 = (int **)0x0;
          if (ppppiVar8 == (int ****)0x0) {
            local_70 = (int *)&DAT_00000004;
            local_74 = (int **)0x0;
            ppppiVar17 = local_68;
            ppppiVar2 = local_64;
            iVar15 = local_60;
            uVar6 = local_5c;
            local_a8 = local_58;
            uStack_a4 = uStack_54;
            uStack_a0 = uStack_50;
            uStack_9c = uStack_4c;
            ppppiStack_98 = (int ****)local_48;
            uStack_94 = local_44;
            uStack_90 = local_40;
            uStack_8c = local_3c;
            local_88 = local_38;
            uStack_84 = uStack_34;
            uStack_80 = local_30;
            uStack_7c = local_2c;
          }
          else {
            local_70 = (int *)thunk_FUN_016d4a50(ppppiVar8);
            local_74 = ppiVar7;
            ppppiVar17 = local_68;
            ppppiVar2 = local_64;
            iVar15 = local_60;
            uVar6 = local_5c;
            local_a8 = local_58;
            uStack_a4 = uStack_54;
            uStack_a0 = uStack_50;
            uStack_9c = uStack_4c;
            ppppiStack_98 = (int ****)local_48;
            uStack_94 = local_44;
            uStack_90 = local_40;
            uStack_8c = local_3c;
            local_88 = local_38;
            uStack_84 = uStack_34;
            uStack_80 = local_30;
            uStack_7c = local_2c;
            if (local_70 == (int *)0x0) {
              uVar6 = 4;
              goto LAB_012a73e4;
            }
          }
          local_ac = (int ***)uVar6;
          local_b0 = (int ****)iVar15;
          local_b4 = ppppiVar2;
          local_b8 = (int *****)ppppiVar17;
          if (ppiVar7 != (int **)0x0) {
            piVar11 = local_70;
            ppiVar18 = ppiVar7;
            do {
              *piVar11 = (int)ppiVar20;
              ppiVar20 = ppiVar20 + 10;
              ppiVar18 = (int **)((int)ppiVar18 - 1);
              piVar11 = piVar11 + 1;
            } while (ppiVar18 != (int **)0x0);
            ppiVar18 = ppiVar7;
          }
          local_78 = pppiVar21;
          local_6c = ppiVar18;
          local_68 = (int ****)local_b8;
          local_64 = local_b4;
          local_60 = (int)local_b0;
          local_5c = local_ac;
          local_48 = (int *****)ppppiStack_98;
          local_44 = uStack_94;
          local_40 = uStack_90;
          local_3c = uStack_8c;
          if (pppiVar3 != (int ***)0x0) {
            thunk_FUN_016d3fb4(pppiVar10);
          }
          iVar15 = thunk_FUN_016d4a50(0x50);
          if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x50);
          }
          FUN_016dd1aa(iVar15,&local_b8,0x50);
          *(int *)(*piVar12 + 4) = iVar15;
          return;
        }
      }
      else if (pppiVar3 != (int ***)0x0) {
        thunk_FUN_016d3fb4(pppiVar10);
      }
      ppppiVar8 = ppppiVar8 + 5;
    } while (ppppiVar22 != ppppiVar13);
    local_44 = ppppiVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa444(&DAT_01890680);
}

