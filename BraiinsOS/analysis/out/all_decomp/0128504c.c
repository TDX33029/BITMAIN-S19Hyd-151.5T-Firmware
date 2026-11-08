// FUN_0128504c @ 0128504c size=5148 calls_out=25 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0128504c(undefined4 *param_1,int param_2,int ******param_3,int *param_4)

{
  char cVar1;
  undefined1 uVar2;
  int ******ppppppiVar3;
  int ******ppppppiVar4;
  int iVar5;
  int ******ppppppiVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  int ***pppiVar10;
  int ******ppppppiVar11;
  int extraout_r2;
  int *****extraout_r2_00;
  int ******extraout_r2_01;
  int extraout_r3;
  int ***pppiVar12;
  int extraout_r3_00;
  int extraout_r3_01;
  int ******extraout_r3_02;
  int extraout_r3_03;
  uint uVar13;
  int ******ppppppiVar14;
  uint uVar15;
  int *****pppppiVar16;
  int ***pppiVar17;
  int **ppiVar18;
  int *****pppppiVar19;
  int iVar20;
  int ****ppppiVar21;
  int ****ppppiVar22;
  uint uVar23;
  int *piVar24;
  int *****pppppiVar25;
  bool bVar26;
  undefined8 uVar27;
  undefined1 auStack_c8 [8];
  undefined1 *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int ****local_a8;
  int ******local_a0;
  int ******local_9c;
  int ******local_98;
  int local_94;
  int ******local_90;
  undefined1 local_8c;
  undefined4 *local_88;
  undefined1 *local_84;
  int ******local_80;
  int ******local_78;
  int ******local_74;
  int ******local_70;
  int ******ppppppiStack_6c;
  int ******ppppppiStack_68;
  int ******local_60;
  int ******local_5c;
  int ******local_58;
  int ******ppppppiStack_54;
  int ******ppppppiStack_50;
  int ******local_48;
  int ******local_44;
  int ******local_40;
  int ******local_3c;
  int ******local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_2 == 0) {
    local_90 = (int ******)0x0;
    local_58 = (int ******)&DAT_3b9aca00;
    local_94 = 0;
    local_98 = (int ******)0x0;
    local_9c = (int ******)0x0;
    local_a0 = (int ******)0x0;
    if (((uint)param_3[0x12] & (uint)param_3[8]) == 0) {
      ppppppiVar11 = param_3 + 8;
      uVar27 = thunk_FUN_016de0ee();
      pppppiVar16 = (int *****)((ulonglong)uVar27 >> 0x20);
      piVar24 = (int *)((int)uVar27 + extraout_r3_01);
      pppppiVar25 = extraout_r2_00;
LAB_012856b8:
      uVar13 = 0;
      do {
        ppppppiVar4 = local_58;
        ppppppiVar3 = local_5c;
        ppppppiVar14 = local_60;
        uVar15 = (int)pppppiVar25 - 1U & (uint)pppppiVar16;
        ppppppiVar6 = (int ******)(param_3[0x25] + uVar15 * 5);
        DataMemoryBarrier(0xb);
        if (pppppiVar16 == ppppppiVar6[4]) {
          if ((int *****)(uVar15 + 1) < param_3[0x10]) {
            pppppiVar25 = (int *****)((int)pppppiVar16 + 1);
            if (*ppppppiVar11 == pppppiVar16) goto LAB_01285798;
LAB_01285720:
            ClearExclusiveLocal();
          }
          else {
            pppppiVar25 = (int *****)
                          ((int)param_3[0x11] + ((uint)pppppiVar16 & -(int)param_3[0x11]));
            if (*ppppppiVar11 != pppppiVar16) goto LAB_01285720;
LAB_01285798:
            DataMemoryBarrier(0xb);
            bVar26 = (bool)hasExclusiveAccess(ppppppiVar11);
            if (bVar26) {
              *ppppppiVar11 = pppppiVar25;
              DataMemoryBarrier(0xb);
              local_9c = (int ******)((int)pppppiVar16 + 1);
              pppppiVar16 = (int *****)param_4[1];
              pppppiVar19 = (int *****)param_4[2];
              pppppiVar25 = (int *****)param_4[3];
              *ppppppiVar6 = (int *****)*param_4;
              ppppppiVar6[1] = pppppiVar16;
              ppppppiVar6[2] = pppppiVar19;
              ppppppiVar6[3] = pppppiVar25;
              DataMemoryBarrier(0xb);
              ppppppiVar6[4] = (int *****)local_9c;
              DataMemoryBarrier(0xb);
              local_a0 = ppppppiVar6;
              if (*(char *)(param_3 + 0x24) != '\0') goto LAB_01285e98;
              ppppppiVar11 = param_3 + 0x1c;
              goto LAB_01285b80;
            }
          }
          uVar15 = 6;
          if (uVar13 < 6) {
            uVar15 = uVar13;
          }
          if (uVar13 != 0) {
            iVar20 = uVar15 * uVar15;
            do {
              iVar20 = iVar20 + -1;
              HintYield();
            } while (iVar20 != 0);
            goto LAB_012856c4;
          }
LAB_012857d0:
          uVar13 = 1;
          pppppiVar16 = param_3[8];
          pppppiVar25 = param_3[0x12];
          uVar15 = (uint)pppppiVar25 & (uint)pppppiVar16;
        }
        else {
          if ((int)param_3[0x11] + (int)ppppppiVar6[4] == (int)pppppiVar16 + 1U) {
            DataMemoryBarrier(0xb);
            if ((int *****)((int)param_3[0x11] + (int)*param_3) == pppppiVar16) goto LAB_0128580c;
            uVar15 = 6;
            if (uVar13 < 6) {
              uVar15 = uVar13;
            }
            if (uVar13 == 0) goto LAB_012857d0;
            iVar20 = uVar15 * uVar15;
            do {
              iVar20 = iVar20 + -1;
              HintYield();
            } while (iVar20 != 0);
          }
          else if (uVar13 < 7) {
            if (uVar13 != 0) {
              iVar20 = uVar13 * uVar13;
              do {
                iVar20 = iVar20 + -1;
                HintYield();
              } while (iVar20 != 0);
            }
          }
          else {
            FUN_016da3a8();
          }
LAB_012856c4:
          uVar13 = uVar13 + 1;
          pppppiVar16 = param_3[8];
          pppppiVar25 = param_3[0x12];
          uVar15 = (uint)pppppiVar25 & (uint)pppppiVar16;
        }
        if (uVar15 != 0) break;
      } while( true );
    }
LAB_012850dc:
    if ((int ******)*param_4 != (int ******)0x80000000) {
      local_40 = (int ******)param_4[1];
      local_3c = (int ******)param_4[2];
      local_38 = (int ******)param_4[3];
      local_48 = (int ******)&DAT_00000001;
      local_44 = (int ******)*param_4;
      goto LAB_01286230;
    }
  }
  else {
    if (param_2 != 1) {
      ppppppiVar11 = param_3 + 2;
      local_c0 = &DAT_3b9aca00;
      local_a8 = (int ****)0x0;
      local_ac = 0;
      local_b0 = 0;
      local_b4 = 0;
      local_b8 = 0;
      do {
        if (*ppppppiVar11 != (int *****)0x0) {
          ClearExclusiveLocal();
          FUN_015bf680(ppppppiVar11);
          goto LAB_01285150;
        }
        bVar26 = (bool)hasExclusiveAccess(ppppppiVar11);
      } while (!bVar26);
      *ppppppiVar11 = (int *****)0x1;
      DataMemoryBarrier(0xb);
LAB_01285150:
      uVar13 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar1 = *(char *)(param_3 + 3);
      }
      else {
        uVar13 = FUN_015bf3f8();
        uVar13 = uVar13 ^ 1;
        cVar1 = *(char *)(param_3 + 3);
      }
      uVar2 = (undefined1)uVar13;
      if (cVar1 != '\0') {
        local_44._1_3_ = (undefined3)((uint)local_44 >> 8);
        local_44 = (int ******)CONCAT31(local_44._1_3_,uVar2);
        local_48 = ppppppiVar11;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_48,&DAT_0188bb50,&DAT_0188ba90);
      }
      if (param_3[0xc] != (int *****)0x0) {
        uVar27 = thunk_FUN_016de0ee();
        pppppiVar25 = (int *****)0x0;
        pppppiVar16 = param_3[0xb];
        do {
          pppppiVar19 = pppppiVar16 + 3;
          ppppiVar21 = *pppppiVar16;
          if (ppppiVar21[5] != (int ***)((int)uVar27 + extraout_r3)) {
            ppppiVar22 = ppppiVar21 + 3;
            if (*ppppiVar22 == (int ***)0x0) {
              DataMemoryBarrier(0xb);
LAB_012851ec:
              bVar26 = (bool)hasExclusiveAccess(ppppiVar22);
              if (!bVar26) goto code_r0x012851f8;
              *ppppiVar22 = (int ***)pppppiVar16[1];
              DataMemoryBarrier(0xb);
              if (pppppiVar16[2] != (int ****)0x0) {
                DataMemoryBarrier(0xb);
                ppppiVar21[4] = (int ***)pppppiVar16[2];
              }
              DataMemoryBarrier(0xb);
              pppiVar10 = ppppiVar21[2] + 6;
              do {
                ppiVar18 = *pppiVar10;
                bVar26 = (bool)hasExclusiveAccess(pppiVar10);
              } while (!bVar26);
              *pppiVar10 = (int **)0x1;
              if (ppiVar18 == (int **)0xffffffff) {
                FUN_016d6968(0xf0,pppiVar10,0x81,1);
              }
              pppppiVar16 = param_3[0xc];
              if (pppppiVar16 <= pppppiVar25) {
LAB_01286434:
                    /* WARNING: Subroutine does not return */
                FUN_00602938(pppppiVar25,pppppiVar16,&DAT_0188bb20);
              }
              pppppiVar19 = param_3[0xb] + (int)pppppiVar25 * 3;
              ppppiVar21 = *pppppiVar19;
              ppppiVar22 = pppppiVar19[2];
              FUN_016dd52c(pppppiVar19,pppppiVar19 + 3,((int)pppppiVar16 + ~(uint)pppppiVar25) * 0xc
                          );
              pppppiVar16 = (int *****)((int)pppppiVar16 - 1);
              param_3[0xc] = pppppiVar16;
              if (ppppiVar21 == (int ****)0x0) goto LAB_01286434;
              local_a8 = ppppiVar22;
              if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
                 (iVar20 = FUN_015bf3f8(), iVar20 == 0)) {
                *(undefined1 *)(param_3 + 3) = 1;
              }
              DataMemoryBarrier(0xb);
              do {
                pppppiVar16 = *ppppppiVar11;
                bVar26 = (bool)hasExclusiveAccess(ppppppiVar11);
              } while (!bVar26);
              *ppppppiVar11 = (int *****)0x0;
              if (pppppiVar16 == (int *****)0x2) {
                FUN_016d6968(0xf0,ppppppiVar11,0x81,1);
                if (local_a8 != (int ****)0x0) goto LAB_01285380;
LAB_012861ec:
                iVar20 = *param_4;
                if (iVar20 != -0x80000000) {
                  iVar5 = param_4[1];
                  FUN_01286cfc(iVar5,param_4[2]);
                  if (iVar20 != 0) {
                    thunk_FUN_016d3fb4(iVar5);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00faa444(&DAT_0188baa0);
                }
              }
              else {
                if (local_a8 == (int ****)0x0) goto LAB_012861ec;
LAB_01285380:
                pppiVar10 = (int ***)param_4[1];
                pppiVar12 = (int ***)param_4[2];
                pppiVar17 = (int ***)param_4[3];
                *local_a8 = (int ***)*param_4;
                local_a8[1] = pppiVar10;
                local_a8[2] = pppiVar12;
                local_a8[3] = pppiVar17;
                DataMemoryBarrier(0xb);
                *(undefined1 *)(local_a8 + 4) = 1;
              }
              local_48 = (int ******)&SUB_00000002;
              DataMemoryBarrier(0xb);
              do {
                pppiVar10 = *ppppiVar21;
                bVar26 = (bool)hasExclusiveAccess(ppppiVar21);
              } while (!bVar26);
              *ppppiVar21 = (int ***)((int)pppiVar10 + -1);
              if (pppiVar10 == (int ***)0x1) {
                DataMemoryBarrier(0xb);
                FUN_01284dec(ppppiVar21);
              }
              goto LAB_0128622c;
            }
LAB_012851ac:
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
          }
          pppppiVar25 = (int *****)((int)pppppiVar25 + 1);
          pppppiVar16 = pppppiVar19;
        } while (pppppiVar19 != param_3[0xb] + (int)((ulonglong)uVar27 >> 0x20) * 3);
      }
      if (*(char *)(param_3 + 0x10) == '\0') {
        ppppppiVar14 = (int ******)param_4[2];
        iVar20 = param_4[3];
        local_84 = auStack_c8;
        local_88 = &local_b8;
        local_80 = ppppppiVar11;
        uVar27 = thunk_FUN_016de0ee(local_88,0x238,*param_4,param_4[1]);
        piVar24 = (int *)((int)uVar27 + (int)((ulonglong)uVar27 >> 0x20));
        local_a0 = extraout_r2_01;
        local_9c = extraout_r3_02;
        local_98 = ppppppiVar14;
        local_94 = iVar20;
        local_90 = ppppppiVar11;
        local_8c = uVar2;
        if (((char)piVar24[1] == '\x01') ||
           (piVar24 = (int *)FUN_01284cd4(piVar24), piVar24 != (int *)0x0)) {
          local_48 = local_a0;
          iVar20 = *piVar24;
          *piVar24 = 0;
          if (iVar20 == 0) {
            piVar24 = (int *)FUN_015f7d2c();
            local_48 = local_a0;
            bVar26 = local_a0 == (int ******)&DAT_80000000;
            local_a0 = (int ******)&DAT_80000000;
            if (bVar26) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_0188bb40);
            }
            puVar8 = (undefined4 *)((uint)&local_a0 | 4);
            local_44 = (int ******)*puVar8;
            local_40 = (int ******)puVar8[1];
            local_3c = (int ******)puVar8[2];
            local_38 = (int ******)puVar8[3];
            local_34 = puVar8[4];
            uStack_30 = puVar8[5];
            uStack_2c = puVar8[6];
            uStack_28 = puVar8[7];
            FUN_01282a18(&local_78,&local_48,piVar24);
            DataMemoryBarrier(0xb);
            do {
              iVar20 = *piVar24;
              bVar26 = (bool)hasExclusiveAccess(piVar24);
            } while (!bVar26);
            *piVar24 = iVar20 + -1;
            if (iVar20 == 1) {
              DataMemoryBarrier(0xb);
              FUN_01284dec(piVar24);
            }
          }
          else {
            DataMemoryBarrier(0xb);
            *(undefined4 *)(iVar20 + 0xc) = 0;
            DataMemoryBarrier(0xb);
            *(undefined4 *)(iVar20 + 0x10) = 0;
            local_a0 = (int ******)&DAT_80000000;
            if (local_48 == (int ******)&DAT_80000000) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_0188bb40);
            }
            puVar8 = (undefined4 *)((uint)&local_a0 | 4);
            local_44 = (int ******)*puVar8;
            local_40 = (int ******)puVar8[1];
            local_3c = (int ******)puVar8[2];
            local_38 = (int ******)puVar8[3];
            local_34 = puVar8[4];
            uStack_30 = puVar8[5];
            uStack_2c = puVar8[6];
            uStack_28 = puVar8[7];
            FUN_01282a18(&local_60,&local_48,iVar20);
            piVar9 = (int *)*piVar24;
            *piVar24 = iVar20;
            if (piVar9 != (int *)0x0) {
              DataMemoryBarrier(0xb);
              do {
                iVar20 = *piVar9;
                bVar26 = (bool)hasExclusiveAccess(piVar9);
              } while (!bVar26);
              *piVar9 = iVar20 + -1;
              if (iVar20 == 1) {
                DataMemoryBarrier(0xb);
                FUN_01284dec();
              }
            }
            local_78 = local_60;
            local_74 = local_5c;
            local_70 = local_58;
            ppppppiStack_6c = ppppppiStack_54;
            ppppppiStack_68 = ppppppiStack_50;
          }
          local_60 = local_74;
          local_5c = local_70;
          local_58 = ppppppiStack_6c;
          ppppppiStack_54 = ppppppiStack_68;
          if (local_78 == (int ******)0x3) goto LAB_01285ab8;
          local_48 = local_78;
          local_44 = local_74;
          local_40 = local_70;
          local_3c = ppppppiStack_6c;
          local_38 = ppppppiStack_68;
        }
        else {
LAB_01285ab8:
          FUN_012836a8(&local_48,&local_a0);
        }
        FUN_0128354c(&local_a0);
      }
      else {
        local_44 = (int ******)*param_4;
        local_40 = (int ******)param_4[1];
        local_3c = (int ******)param_4[2];
        local_38 = (int ******)param_4[3];
        local_48 = (int ******)&DAT_00000001;
        if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar20 = FUN_015bf3f8(), iVar20 == 0)) {
          *(undefined1 *)(param_3 + 3) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          pppppiVar16 = *ppppppiVar11;
          bVar26 = (bool)hasExclusiveAccess(ppppppiVar11);
        } while (!bVar26);
        *ppppppiVar11 = (int *****)0x0;
        if (pppppiVar16 == (int *****)0x2) {
          FUN_016d6968(0xf0,ppppppiVar11,0x81,1);
        }
      }
LAB_0128622c:
      goto LAB_01286230;
    }
    pppppiVar25 = param_3[8];
    DataMemoryBarrier(0xb);
    pppppiVar16 = param_3[9];
    DataMemoryBarrier(0xb);
    if (((uint)pppppiVar25 & 1) == 0) {
      ppppppiVar11 = param_3 + 9;
      ppppppiVar14 = param_3 + 8;
      uVar13 = 0;
      pppppiVar19 = (int *****)0x0;
      do {
        uVar15 = ((uint)pppppiVar25 & 0x3f) >> 1;
        if (uVar15 == 0x1f) {
          iVar20 = uVar13 * uVar13;
          uVar23 = uVar13 << 1 | 1;
          do {
            if (uVar13 < 7) {
              if (uVar13 != 0) {
                iVar5 = iVar20;
                do {
                  iVar5 = iVar5 + -1;
                  HintYield();
                } while (iVar5 != 0);
              }
            }
            else {
              FUN_016da3a8();
            }
            pppppiVar25 = *ppppppiVar14;
            DataMemoryBarrier(0xb);
            pppppiVar16 = *ppppppiVar11;
            DataMemoryBarrier(0xb);
            if (((uint)pppppiVar25 & 1) != 0) {
              pppppiVar16 = (int *****)0x0;
              uVar15 = 0;
              goto LAB_01285550;
            }
            iVar20 = iVar20 + uVar23;
            uVar15 = ((uint)pppppiVar25 & 0x3f) >> 1;
            uVar23 = uVar23 + 2;
            uVar13 = uVar13 + 1;
          } while (uVar15 == 0x1f);
        }
        if ((uVar15 == 0x1e && pppppiVar19 == (int *****)0x0) &&
           (pppppiVar19 = (int *****)FUN_016d38c8(0x270,1), pppppiVar19 == (int *****)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x270);
        }
        if (pppppiVar16 != (int *****)0x0) {
          if (*ppppppiVar14 != pppppiVar25) {
LAB_012854e8:
            ClearExclusiveLocal();
LAB_012854ec:
            uVar15 = uVar13;
            if (5 < uVar13) {
              uVar15 = 6;
            }
            DataMemoryBarrier(0xb);
            if (uVar13 == 0) {
              uVar13 = 1;
            }
            else {
              iVar20 = uVar15 * uVar15;
              do {
                iVar20 = iVar20 + -1;
                HintYield();
              } while (iVar20 != 0);
              uVar13 = uVar13 + 1;
            }
            goto LAB_0128539c;
          }
LAB_01285468:
          DataMemoryBarrier(0xb);
          bVar26 = (bool)hasExclusiveAccess(ppppppiVar14);
          if (!bVar26) goto LAB_012854ec;
          *ppppppiVar14 = (int *****)((int)pppppiVar25 + 2);
          DataMemoryBarrier(0xb);
          if (uVar15 == 0x1e) {
            if (pppppiVar19 == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_0188b9b0);
            }
            DataMemoryBarrier(0xb);
            *ppppppiVar11 = pppppiVar19;
            DataMemoryBarrier(0xb);
            do {
              bVar26 = (bool)hasExclusiveAccess(ppppppiVar14);
            } while (!bVar26);
            *ppppppiVar14 = (int *****)((int)*ppppppiVar14 + 2);
            DataMemoryBarrier(0xb);
            *pppppiVar16 = (int ****)pppppiVar19;
            ppppppiVar11 = (int ******)*param_4;
            local_a0 = (int ******)param_4[1];
            local_9c = (int ******)param_4[2];
            local_98 = (int ******)param_4[3];
            uVar15 = 0x1e;
            goto LAB_01285578;
          }
          goto LAB_01285550;
        }
        pppppiVar16 = (int *****)FUN_016d38c8(0x270,1);
        if (pppppiVar16 == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x270);
        }
        if (*ppppppiVar11 == (int *****)0x0) {
          DataMemoryBarrier(0xb);
          do {
            bVar26 = (bool)hasExclusiveAccess(ppppppiVar11);
            if (bVar26) {
              *ppppppiVar11 = pppppiVar16;
              DataMemoryBarrier(0xb);
              param_3[1] = pppppiVar16;
              if (*ppppppiVar14 != pppppiVar25) goto LAB_012854e8;
              goto LAB_01285468;
            }
          } while (*ppppppiVar11 == (int *****)0x0);
        }
        ClearExclusiveLocal();
        if (pppppiVar19 != (int *****)0x0) {
          thunk_FUN_016d3fb4(pppppiVar19);
        }
        pppppiVar19 = pppppiVar16;
LAB_0128539c:
        pppppiVar25 = *ppppppiVar14;
        DataMemoryBarrier(0xb);
        pppppiVar16 = *ppppppiVar11;
        DataMemoryBarrier(0xb);
      } while (((uint)pppppiVar25 & 1) == 0);
      pppppiVar16 = (int *****)0x0;
      uVar15 = 0;
LAB_01285550:
      if (pppppiVar19 != (int *****)0x0) {
        thunk_FUN_016d3fb4(pppppiVar19);
      }
      ppppppiVar11 = (int ******)*param_4;
      local_a0 = (int ******)param_4[1];
      local_9c = (int ******)param_4[2];
      local_98 = (int ******)param_4[3];
      if (pppppiVar16 != (int *****)0x0) {
LAB_01285578:
        pppppiVar16[uVar15 * 5 + 1] = (int ****)ppppppiVar11;
        pppppiVar16[uVar15 * 5 + 2] = (int ****)local_a0;
        pppppiVar16[uVar15 * 5 + 3] = (int ****)local_9c;
        pppppiVar16[uVar15 * 5 + 4] = (int ****)local_98;
        pppppiVar16 = pppppiVar16 + uVar15 * 5 + 5;
        DataMemoryBarrier(0xb);
        do {
          bVar26 = (bool)hasExclusiveAccess(pppppiVar16);
        } while (!bVar26);
        *pppppiVar16 = (int ****)((uint)*pppppiVar16 | 1);
        DataMemoryBarrier(0xb);
        if (*(char *)(param_3 + 0x18) == '\0') {
          ppppppiVar11 = param_3 + 0x10;
          do {
            if (*ppppppiVar11 != (int *****)0x0) {
              ClearExclusiveLocal();
              FUN_015bf680(ppppppiVar11);
              goto LAB_012855e8;
            }
            bVar26 = (bool)hasExclusiveAccess(ppppppiVar11);
          } while (!bVar26);
          *ppppppiVar11 = (int *****)0x1;
          DataMemoryBarrier(0xb);
LAB_012855e8:
          uVar13 = 0;
          if ((DAT_018dd988 & 0x7fffffff) == 0) {
            cVar1 = *(char *)(param_3 + 0x11);
          }
          else {
            uVar13 = FUN_015bf3f8();
            uVar13 = uVar13 ^ 1;
            cVar1 = *(char *)(param_3 + 0x11);
          }
          if (cVar1 != '\0') {
            local_44._1_3_ = (undefined3)((uint)local_44 >> 8);
            local_44 = (int ******)CONCAT31(local_44._1_3_,(char)uVar13);
            local_48 = ppppppiVar11;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_48,&DAT_0188b9c0,&DAT_0188ba10);
          }
          DataMemoryBarrier(0xb);
          if (*(char *)(param_3 + 0x18) == '\0') {
            if (param_3[0x14] != (int *****)0x0) {
              uVar27 = thunk_FUN_016de0ee(0,param_3 + 0x12,param_3[0x14],0x38);
              iVar20 = 0;
              pppppiVar16 = param_3[0x13];
              do {
                pppppiVar25 = pppppiVar16 + 3;
                ppppiVar21 = *pppppiVar16;
                if (ppppiVar21[5] != (int ***)((int)uVar27 + extraout_r3_00)) {
                  ppppiVar22 = ppppiVar21 + 3;
                  if (*ppppiVar22 == (int ***)0x0) {
                    DataMemoryBarrier(0xb);
LAB_01285b24:
                    bVar26 = (bool)hasExclusiveAccess(ppppiVar22);
                    if (!bVar26) goto code_r0x01285b30;
                    *ppppiVar22 = (int ***)pppppiVar16[1];
                    DataMemoryBarrier(0xb);
                    if (pppppiVar16[2] != (int ****)0x0) {
                      DataMemoryBarrier(0xb);
                      ppppiVar21[4] = (int ***)pppppiVar16[2];
                    }
                    DataMemoryBarrier(0xb);
                    pppiVar10 = ppppiVar21[2] + 6;
                    do {
                      ppiVar18 = *pppiVar10;
                      bVar26 = (bool)hasExclusiveAccess(pppiVar10);
                    } while (!bVar26);
                    *pppiVar10 = (int **)0x1;
                    if (ppiVar18 == (int **)0xffffffff) {
                      FUN_016d6968(0xf0,pppiVar10,0x81,1);
                    }
                    FUN_01286c88(&local_48,(int)((ulonglong)uVar27 >> 0x20),iVar20,&DAT_0188bb20);
                    if (local_48 != (int ******)0x0) {
                      DataMemoryBarrier(0xb);
                      do {
                        pppppiVar16 = *local_48;
                        bVar26 = (bool)hasExclusiveAccess(local_48);
                      } while (!bVar26);
                      *local_48 = (int *****)((int)pppppiVar16 + -1);
                      if (pppppiVar16 == (int *****)0x1) {
                        DataMemoryBarrier(0xb);
                        FUN_01284dec(local_48);
                      }
                    }
                    break;
                  }
LAB_01285ae4:
                  ClearExclusiveLocal();
                  DataMemoryBarrier(0xb);
                }
                iVar20 = iVar20 + 1;
                pppppiVar16 = pppppiVar25;
              } while (pppppiVar25 != param_3[0x13] + extraout_r2 * 3);
            }
            local_38 = (int ******)0x0;
            local_48 = (int ******)param_3[0x16];
            local_3c = (int ******)param_3[0x17];
            param_3[0x17] = (int *****)0x0;
            local_40 = param_3 + 0x15;
            local_44 = local_48 + (int)local_3c * 3;
            if (local_3c != (int ******)0x0) {
              do {
                pppppiVar25 = *local_48;
                ppppppiVar14 = local_48 + 1;
                local_48 = local_48 + 3;
                pppppiVar16 = pppppiVar25 + 3;
                if (*pppppiVar16 == (int ****)0x0) {
                  DataMemoryBarrier(0xb);
LAB_01285da0:
                  bVar26 = (bool)hasExclusiveAccess(pppppiVar16);
                  if (!bVar26) goto code_r0x01285dac;
                  *pppppiVar16 = (int ****)*ppppppiVar14;
                  DataMemoryBarrier(0xb);
                  DataMemoryBarrier(0xb);
                  ppppiVar21 = pppppiVar25[2] + 6;
                  do {
                    pppiVar10 = *ppppiVar21;
                    bVar26 = (bool)hasExclusiveAccess(ppppiVar21);
                  } while (!bVar26);
                  *ppppiVar21 = (int ***)0x1;
                  if (pppiVar10 == (int ***)0xffffffff) {
                    FUN_016d6968(0xf0,ppppiVar21,0x81,1);
                  }
                  goto LAB_01285dc0;
                }
LAB_01285db8:
                ClearExclusiveLocal();
                DataMemoryBarrier(0xb);
LAB_01285dc0:
                DataMemoryBarrier(0xb);
                do {
                  ppppiVar21 = *pppppiVar25;
                  bVar26 = (bool)hasExclusiveAccess(pppppiVar25);
                } while (!bVar26);
                *pppppiVar25 = (int ****)((int)ppppiVar21 + -1);
                if (ppppiVar21 == (int ****)0x1) {
                  DataMemoryBarrier(0xb);
                  FUN_01284dec(pppppiVar25);
                }
              } while (local_48 != local_44);
            }
            FUN_01286b68(&local_48);
            pppppiVar16 = (int *****)0x0;
            if (param_3[0x14] == (int *****)0x0) {
              pppppiVar16 = param_3[0x17];
            }
            DataMemoryBarrier(0xb);
            if (param_3[0x14] == (int *****)0x0) {
              pppppiVar16 = (int *****)(uint)(pppppiVar16 == (int *****)0x0);
            }
            *(char *)(param_3 + 0x18) = (char)pppppiVar16;
            DataMemoryBarrier(0xb);
          }
          if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
             (iVar20 = FUN_015bf3f8(), iVar20 == 0)) {
            *(undefined1 *)(param_3 + 0x11) = 1;
          }
          DataMemoryBarrier(0xb);
          do {
            pppppiVar16 = *ppppppiVar11;
            bVar26 = (bool)hasExclusiveAccess(ppppppiVar11);
          } while (!bVar26);
          *ppppppiVar11 = (int *****)0x0;
          goto LAB_01285e90;
        }
        goto LAB_01285e98;
      }
    }
    else {
      ppppppiVar11 = (int ******)*param_4;
      local_a0 = (int ******)param_4[1];
      local_9c = (int ******)param_4[2];
      local_98 = (int ******)param_4[3];
    }
    local_60 = local_a0;
    local_5c = local_9c;
    local_58 = local_98;
    if (ppppppiVar11 != (int ******)&DAT_80000000) {
      local_40 = local_a0;
      local_3c = local_9c;
      local_38 = local_98;
      local_48 = (int ******)&DAT_00000001;
      local_44 = ppppppiVar11;
      goto LAB_01286230;
    }
  }
  goto LAB_01285e98;
code_r0x01285c70:
  if (*ppppiVar22 != (int ***)0x0) goto LAB_01285c24;
  goto LAB_01285c64;
code_r0x01286050:
  if (*pppppiVar16 != (int ****)0x0) goto LAB_0128605c;
  goto LAB_01286044;
LAB_0128580c:
  if (local_58 != (int ******)&DAT_3b9aca00) {
    FUN_015f3b0c(&local_48,1);
    if (local_48 == ppppppiVar14 && local_44 == ppppppiVar3) {
      if (ppppppiVar4 <= local_40) goto LAB_0128614c;
    }
    else if ((int)local_44 - (int)((int)ppppppiVar3 + (uint)(local_48 < ppppppiVar14)) < 0 ==
             (SBORROW4((int)local_44,(int)ppppppiVar3) !=
             SBORROW4((int)local_44 - (int)ppppppiVar3,(uint)(local_48 < ppppppiVar14)))) {
LAB_0128614c:
      local_44 = (int ******)*param_4;
      local_40 = (int ******)param_4[1];
      local_3c = (int ******)param_4[2];
      local_38 = (int ******)param_4[3];
      local_48 = (int ******)0x0;
      goto LAB_01286230;
    }
  }
  local_70 = (int ******)&local_60;
  local_78 = (int ******)&local_a0;
  piVar9 = piVar24;
  local_74 = param_3;
  if (((char)piVar24[1] == '\x01') || (piVar9 = (int *)FUN_01284cd4(piVar24), piVar9 != (int *)0x0))
  {
    iVar20 = *piVar9;
    *piVar9 = 0;
    if (iVar20 == 0) {
      piVar9 = (int *)FUN_015f7d2c();
      local_78 = (int ******)0x0;
      local_44 = local_74;
      local_40 = local_70;
      local_48 = (int ******)&local_a0;
      FUN_01281b08(&local_48);
      DataMemoryBarrier(0xb);
      do {
        iVar20 = *piVar9;
        bVar26 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar26);
      *piVar9 = iVar20 + -1;
    }
    else {
      DataMemoryBarrier(0xb);
      *(undefined4 *)(iVar20 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      *(undefined4 *)(iVar20 + 0x10) = 0;
      local_78 = (int ******)0x0;
      local_44 = local_74;
      local_40 = local_70;
      local_48 = (int ******)&local_a0;
      FUN_01281b08(&local_48,iVar20);
      piVar7 = (int *)*piVar9;
      *piVar9 = iVar20;
      if (piVar7 == (int *)0x0) goto LAB_0128591c;
      DataMemoryBarrier(0xb);
      do {
        iVar20 = *piVar7;
        bVar26 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar26);
      *piVar7 = iVar20 + -1;
    }
    if (iVar20 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01284dec();
    }
  }
  else {
    FUN_012822a4(&local_78);
  }
LAB_0128591c:
  pppppiVar16 = param_3[8];
  pppppiVar25 = param_3[0x12];
  if (((uint)pppppiVar25 & (uint)pppppiVar16) != 0) goto LAB_012850dc;
  goto LAB_012856b8;
code_r0x012851f8:
  if (*ppppiVar22 != (int ***)0x0) goto LAB_012851ac;
  goto LAB_012851ec;
code_r0x01285b30:
  if (*ppppiVar22 != (int ***)0x0) goto LAB_01285ae4;
  goto LAB_01285b24;
code_r0x01285dac:
  if (*pppppiVar16 != (int ****)0x0) goto LAB_01285db8;
  goto LAB_01285da0;
  while (bVar26 = (bool)hasExclusiveAccess(ppppppiVar11), !bVar26) {
LAB_01285b80:
    if (*ppppppiVar11 != (int *****)0x0) {
      ClearExclusiveLocal();
      FUN_015bf680(ppppppiVar11);
      goto LAB_01285b9c;
    }
  }
  *ppppppiVar11 = (int *****)0x1;
  DataMemoryBarrier(0xb);
LAB_01285b9c:
  uVar13 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(param_3 + 0x1d);
  }
  else {
    uVar13 = FUN_015bf3f8();
    uVar13 = uVar13 ^ 1;
    cVar1 = *(char *)(param_3 + 0x1d);
  }
  if (cVar1 != '\0') {
    local_44._1_3_ = (undefined3)((uint)local_44 >> 8);
    local_44 = (int ******)CONCAT31(local_44._1_3_,(char)uVar13);
    local_48 = ppppppiVar11;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_48,&DAT_0188ba30,&DAT_0188ba10);
  }
  DataMemoryBarrier(0xb);
  if (*(char *)(param_3 + 0x24) == '\0') {
    if (param_3[0x20] != (int *****)0x0) {
      uVar27 = thunk_FUN_016de0ee();
      pppppiVar25 = (int *****)0x0;
      pppppiVar16 = param_3[0x1f];
      do {
        pppppiVar19 = pppppiVar16 + 3;
        ppppiVar21 = *pppppiVar16;
        if (ppppiVar21[5] != (int ***)((int)uVar27 + extraout_r3_03)) {
          ppppiVar22 = ppppiVar21 + 3;
          if (*ppppiVar22 == (int ***)0x0) {
            DataMemoryBarrier(0xb);
LAB_01285c64:
            bVar26 = (bool)hasExclusiveAccess(ppppiVar22);
            if (!bVar26) goto code_r0x01285c70;
            *ppppiVar22 = (int ***)pppppiVar16[1];
            DataMemoryBarrier(0xb);
            if (pppppiVar16[2] != (int ****)0x0) {
              DataMemoryBarrier(0xb);
              ppppiVar21[4] = (int ***)pppppiVar16[2];
            }
            DataMemoryBarrier(0xb);
            pppiVar10 = ppppiVar21[2] + 6;
            do {
              ppiVar18 = *pppiVar10;
              bVar26 = (bool)hasExclusiveAccess(pppiVar10);
            } while (!bVar26);
            *pppiVar10 = (int **)0x1;
            if (ppiVar18 == (int **)0xffffffff) {
              FUN_016d6968(0xf0,pppiVar10,0x81,1);
            }
            pppppiVar16 = param_3[0x20];
            if (pppppiVar16 <= pppppiVar25) {
LAB_0128648c:
                    /* WARNING: Subroutine does not return */
              FUN_00602938(pppppiVar25,pppppiVar16,&DAT_0188bb20);
            }
            pppppiVar19 = param_3[0x1f] + (int)pppppiVar25 * 3;
            ppppiVar21 = *pppppiVar19;
            FUN_016dd52c(pppppiVar19,pppppiVar19 + 3,((int)pppppiVar16 + ~(uint)pppppiVar25) * 0xc);
            pppppiVar16 = (int *****)((int)pppppiVar16 - 1);
            param_3[0x20] = pppppiVar16;
            if (ppppiVar21 == (int ****)0x0) goto LAB_0128648c;
            DataMemoryBarrier(0xb);
            do {
              pppiVar10 = *ppppiVar21;
              bVar26 = (bool)hasExclusiveAccess(ppppiVar21);
            } while (!bVar26);
            *ppppiVar21 = (int ***)((int)pppiVar10 + -1);
            if (pppiVar10 == (int ***)0x1) {
              DataMemoryBarrier(0xb);
              FUN_01284dec(ppppiVar21);
            }
            break;
          }
LAB_01285c24:
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        pppppiVar25 = (int *****)((int)pppppiVar25 + 1);
        pppppiVar16 = pppppiVar19;
      } while (pppppiVar19 != param_3[0x1f] + (int)((ulonglong)uVar27 >> 0x20) * 3);
    }
    local_48 = (int ******)param_3[0x22];
    local_3c = (int ******)param_3[0x23];
    param_3[0x23] = (int *****)0x0;
    local_38 = (int ******)0x0;
    local_40 = param_3 + 0x21;
    local_44 = local_48 + (int)local_3c * 3;
    if (local_3c != (int ******)0x0) {
      do {
        pppppiVar25 = *local_48;
        ppppppiVar14 = local_48 + 1;
        local_48 = local_48 + 3;
        pppppiVar16 = pppppiVar25 + 3;
        if (*pppppiVar16 == (int ****)0x0) {
          DataMemoryBarrier(0xb);
LAB_01286044:
          bVar26 = (bool)hasExclusiveAccess(pppppiVar16);
          if (!bVar26) goto code_r0x01286050;
          *pppppiVar16 = (int ****)*ppppppiVar14;
          DataMemoryBarrier(0xb);
          DataMemoryBarrier(0xb);
          ppppiVar21 = pppppiVar25[2] + 6;
          do {
            pppiVar10 = *ppppiVar21;
            bVar26 = (bool)hasExclusiveAccess(ppppiVar21);
          } while (!bVar26);
          *ppppiVar21 = (int ***)0x1;
          if (pppiVar10 == (int ***)0xffffffff) {
            FUN_016d6968(0xf0,ppppiVar21,0x81,1);
          }
          goto LAB_01286064;
        }
LAB_0128605c:
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
LAB_01286064:
        DataMemoryBarrier(0xb);
        do {
          ppppiVar21 = *pppppiVar25;
          bVar26 = (bool)hasExclusiveAccess(pppppiVar25);
        } while (!bVar26);
        *pppppiVar25 = (int ****)((int)ppppiVar21 + -1);
        if (ppppiVar21 == (int ****)0x1) {
          DataMemoryBarrier(0xb);
          FUN_01284dec(pppppiVar25);
        }
      } while (local_48 != local_44);
    }
    FUN_01286b68(&local_48);
    pppppiVar16 = (int *****)0x0;
    if (param_3[0x20] == (int *****)0x0) {
      pppppiVar16 = param_3[0x23];
    }
    DataMemoryBarrier(0xb);
    if (param_3[0x20] == (int *****)0x0) {
      pppppiVar16 = (int *****)(uint)(pppppiVar16 == (int *****)0x0);
    }
    *(char *)(param_3 + 0x24) = (char)pppppiVar16;
    DataMemoryBarrier(0xb);
  }
  if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar20 = FUN_015bf3f8(), iVar20 == 0)) {
    *(undefined1 *)(param_3 + 0x1d) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    pppppiVar16 = *ppppppiVar11;
    bVar26 = (bool)hasExclusiveAccess(ppppppiVar11);
  } while (!bVar26);
  *ppppppiVar11 = (int *****)0x0;
LAB_01285e90:
  if (pppppiVar16 == (int *****)0x2) {
    FUN_016d6968(0xf0,ppppppiVar11,0x81,1);
  }
LAB_01285e98:
  local_48 = (int ******)&SUB_00000002;
LAB_01286230:
  if (local_48 == (int ******)&SUB_00000002) {
    *param_1 = 0x80000000;
    return;
  }
  if (((uint)local_48 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_0188bb70);
  }
  *param_1 = local_44;
  param_1[1] = local_40;
  param_1[2] = local_3c;
  param_1[3] = local_38;
  return;
}

