// FUN_0165302c @ 0165302c size=4324 calls_out=23 calls_in=1
// strings: internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0165302c(undefined4 *param_1,int param_2,int ******param_3,int *param_4)

{
  int ******ppppppiVar1;
  int ******ppppppiVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int ***pppiVar7;
  undefined4 *puVar8;
  int **ppiVar9;
  undefined4 uVar10;
  int extraout_r3;
  int ****ppppiVar11;
  int extraout_r3_00;
  int extraout_r3_01;
  undefined4 uVar12;
  int ******ppppppiVar13;
  uint uVar14;
  int *piVar15;
  int ****ppppiVar16;
  int ******ppppppiVar17;
  int *****pppppiVar18;
  int iVar19;
  int ****ppppiVar20;
  undefined4 uVar21;
  int *****pppppiVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  int *****pppppiVar26;
  bool bVar27;
  undefined8 uVar28;
  undefined1 auStack_c8 [8];
  undefined1 *local_c0;
  undefined1 auStack_b8 [16];
  int ******local_a8;
  int ******local_a0;
  int ****local_9c;
  int iStack_98;
  int iStack_94;
  int ******local_90;
  undefined1 local_8c;
  undefined1 *local_88;
  undefined1 *local_84;
  int ******local_80;
  int ******local_78;
  int ******local_74;
  int ******local_70;
  int iStack_6c;
  int iStack_68;
  int ******local_60;
  int ******local_5c;
  int ******local_58;
  int iStack_54;
  int iStack_50;
  int ******local_48;
  int ******local_44;
  int ******local_40;
  int *****local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_2 == 0) {
    local_70 = (int ******)&DAT_3b9aca00;
    uVar10 = FUN_01bed93e(&local_a0,0,0x14);
    uVar28 = thunk_FUN_01bee35a(uVar10,0x278);
    piVar5 = (int *)((int)uVar28 + (int)((ulonglong)uVar28 >> 0x20));
    ppppppiVar17 = param_3 + 8;
LAB_0165325c:
    pppppiVar18 = param_3[8];
    pppppiVar26 = param_3[0x12];
    if (((uint)pppppiVar26 & (uint)pppppiVar18) == 0) {
      uVar14 = 0;
      do {
        ppppppiVar2 = local_70;
        ppppppiVar1 = local_74;
        ppppppiVar13 = local_78;
        uVar23 = (int)pppppiVar26 - 1U & (uint)pppppiVar18;
        pppppiVar26 = param_3[0x25] + uVar23 * 5;
        DataMemoryBarrier(0xb);
        if (pppppiVar18 == (int *****)pppppiVar26[4]) {
          if ((int *****)(uVar23 + 1) < param_3[0x10]) {
            pppppiVar22 = (int *****)((int)pppppiVar18 + 1);
          }
          else {
            pppppiVar22 = (int *****)
                          ((int)param_3[0x11] + ((uint)pppppiVar18 & -(int)param_3[0x11]));
          }
          if (*ppppppiVar17 == pppppiVar18) {
            DataMemoryBarrier(0xb);
            bVar27 = (bool)hasExclusiveAccess(ppppppiVar17);
            if (bVar27) {
              *ppppppiVar17 = pppppiVar22;
              DataMemoryBarrier(0xb);
              local_9c = (int ****)((int)pppppiVar18 + 1);
              *pppppiVar26 = (int ****)*param_4;
              ppppiVar11 = (int ****)param_4[2];
              ppppiVar16 = (int ****)param_4[3];
              pppppiVar26[1] = (int ****)param_4[1];
              pppppiVar26[2] = ppppiVar11;
              pppppiVar26[3] = ppppiVar16;
              DataMemoryBarrier(0xb);
              pppppiVar26[4] = local_9c;
              DataMemoryBarrier(0xb);
              local_a0 = (int ******)pppppiVar26;
              if (*(char *)(param_3 + 0x24) != '\0') goto LAB_01653ec4;
              FUN_01656cb0(&local_48,param_3 + 0x1c);
              ppppppiVar17 = local_44;
              if (local_48 == (int ******)&DAT_00000001) {
                local_5c = (int ******)CONCAT31(local_5c._1_3_,local_40._0_1_);
                local_60 = local_44;
                    /* WARNING: Subroutine does not return */
                FUN_013073dc(&DAT_00533467,0x2b,&local_60,&DAT_01d06988,&DAT_01d06968);
              }
              uVar14 = (uint)local_40 & 0xff;
              DataMemoryBarrier(0xb);
              if (*(char *)(param_3 + 0x24) != '\0') goto LAB_01653eb4;
              if (local_44[4] == (int *****)0x0) goto LAB_01653d90;
              uVar28 = thunk_FUN_01bee35a();
              iVar24 = 0;
              pppppiVar18 = local_44[3];
              goto LAB_01653a40;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          uVar23 = 6;
          if (uVar14 < 6) {
            uVar23 = uVar14;
          }
          if (uVar14 != 0) {
            iVar24 = uVar23 * uVar23;
            do {
              iVar24 = iVar24 + -1;
              HintYield();
            } while (iVar24 != 0);
            goto LAB_01653390;
          }
LAB_01653384:
          uVar14 = 1;
        }
        else {
          if ((int)param_3[0x11] + (int)pppppiVar26[4] == (int)pppppiVar18 + 1U) {
            DataMemoryBarrier(0xb);
            if ((int *****)((int)param_3[0x11] + (int)*param_3) == pppppiVar18) goto LAB_016533a8;
            uVar23 = 6;
            if (uVar14 < 6) {
              uVar23 = uVar14;
            }
            if (uVar14 == 0) goto LAB_01653384;
            iVar24 = uVar23 * uVar23;
            do {
              iVar24 = iVar24 + -1;
              HintYield();
            } while (iVar24 != 0);
          }
          else if (uVar14 < 7) {
            if (uVar14 != 0) {
              iVar24 = uVar14 * uVar14;
              do {
                iVar24 = iVar24 + -1;
                HintYield();
              } while (iVar24 != 0);
            }
          }
          else {
            FUN_01bea67c();
          }
LAB_01653390:
          uVar14 = uVar14 + 1;
        }
        pppppiVar18 = param_3[8];
        pppppiVar26 = param_3[0x12];
        if (((uint)pppppiVar26 & (uint)pppppiVar18) != 0) break;
      } while( true );
    }
    if ((int ******)*param_4 != (int ******)&DAT_80000000) {
      local_58 = (int ******)param_4[1];
      iStack_54 = param_4[2];
      iStack_50 = param_4[3];
      local_5c = (int ******)*param_4;
      goto LAB_01653868;
    }
    goto LAB_01653ec4;
  }
  if (param_2 != 1) {
    local_c0 = &DAT_3b9aca00;
    FUN_01bed93e(auStack_b8,0,0x14);
    FUN_01656cb0(&local_48,param_3 + 2);
    ppppppiVar17 = local_44;
    uVar3 = local_40._0_1_;
    if (local_48 == (int ******)&DAT_00000001) {
      local_9c = (int ****)CONCAT31(local_9c._1_3_,local_40._0_1_);
      local_a0 = local_44;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_a0,&DAT_01d06aa8,&DAT_01d069e8);
    }
    uVar14 = (uint)local_40 & 0xff;
    if (local_44[10] != (int *****)0x0) {
      ppppppiVar13 = local_44 + 8;
      uVar28 = thunk_FUN_01bee35a();
      iVar24 = 0;
      pppppiVar18 = ppppppiVar17[9];
      do {
        pppppiVar26 = pppppiVar18 + 3;
        ppppiVar11 = *pppppiVar18;
        if (ppppiVar11[5] != (int ***)((int)uVar28 + extraout_r3)) {
          ppppiVar16 = ppppiVar11 + 3;
          if (*ppppiVar16 == (int ***)0x0) {
            DataMemoryBarrier(0xb);
LAB_016535c4:
            bVar27 = (bool)hasExclusiveAccess(ppppiVar16);
            if (!bVar27) goto code_r0x016535d0;
            *ppppiVar16 = (int ***)pppppiVar18[1];
            DataMemoryBarrier(0xb);
            if (pppppiVar18[2] != (int ****)0x0) {
              DataMemoryBarrier(0xb);
              ppppiVar11[4] = (int ***)pppppiVar18[2];
            }
            DataMemoryBarrier(0xb);
            pppiVar7 = ppppiVar11[2] + 6;
            do {
              ppiVar9 = *pppiVar7;
              bVar27 = (bool)hasExclusiveAccess(pppiVar7);
            } while (!bVar27);
            *pppiVar7 = (int **)0x1;
            if (ppiVar9 == (int **)0xffffffff) {
              FUN_01be6c3c(0xf0,pppiVar7,0x81,1);
            }
            FUN_012e8fb8(&local_48,ppppppiVar13,iVar24,&DAT_01d06a78);
            if (local_48 != (int ******)0x0) {
              local_a8 = local_40;
              FUN_00a97e8c(ppppppiVar17,uVar14);
              if (local_40 == (int ******)0x0) {
                if (*param_4 != -0x80000000) {
                  FUN_0165037c();
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0cc(&DAT_01d069f8);
                }
              }
              else {
                pppppiVar18 = (int *****)param_4[1];
                pppppiVar26 = (int *****)param_4[2];
                pppppiVar22 = (int *****)param_4[3];
                *local_40 = (int *****)*param_4;
                local_40[1] = pppppiVar18;
                local_40[2] = pppppiVar26;
                local_40[3] = pppppiVar22;
                DataMemoryBarrier(0xb);
                *(undefined1 *)(local_40 + 4) = 1;
              }
              local_60 = (int ******)0x2;
              DataMemoryBarrier(0xb);
              do {
                pppppiVar18 = *local_48;
                bVar27 = (bool)hasExclusiveAccess(local_48);
              } while (!bVar27);
              *local_48 = (int *****)((int)pppppiVar18 + -1);
              if (pppppiVar18 == (int *****)0x1) {
                DataMemoryBarrier(0xb);
                FUN_019db128(local_48);
              }
              goto LAB_01653ecc;
            }
            break;
          }
LAB_016535dc:
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        iVar24 = iVar24 + 1;
        pppppiVar18 = pppppiVar26;
      } while (pppppiVar26 != ppppppiVar17[9] + (int)((ulonglong)uVar28 >> 0x20) * 3);
    }
    if (*(char *)(ppppppiVar17 + 0xe) != '\0') {
      piVar5 = (int *)((uint)&local_60 | 4);
      iVar24 = param_4[1];
      iVar4 = param_4[2];
      iVar19 = param_4[3];
      *piVar5 = *param_4;
      piVar5[1] = iVar24;
      piVar5[2] = iVar4;
      piVar5[3] = iVar19;
      local_60 = (int ******)&DAT_00000001;
      FUN_00a97e8c(ppppppiVar17,uVar14);
      goto LAB_01653ecc;
    }
    local_a0 = (int ******)*param_4;
    local_9c = (int ****)param_4[1];
    iStack_98 = param_4[2];
    iStack_94 = param_4[3];
    local_84 = auStack_c8;
    local_88 = auStack_b8;
    local_8c = uVar3;
    local_80 = param_3 + 2;
    uVar28 = thunk_FUN_01bee35a(local_88,0x278);
    piVar5 = (int *)((int)uVar28 + (int)((ulonglong)uVar28 >> 0x20));
    local_90 = ppppppiVar17;
    if (((char)piVar5[1] == '\x01') || (piVar5 = (int *)FUN_01652998(piVar5), piVar5 != (int *)0x0))
    {
      local_48 = local_a0;
      iVar24 = *piVar5;
      *piVar5 = 0;
      if (iVar24 == 0) {
        piVar5 = (int *)FUN_019b0254();
        local_48 = local_a0;
        bVar27 = local_a0 == (int ******)&DAT_80000000;
        local_a0 = (int ******)&DAT_80000000;
        if (bVar27) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d06a98);
        }
        puVar8 = (undefined4 *)((uint)&local_a0 | 4);
        local_44 = (int ******)*puVar8;
        local_40 = (int ******)puVar8[1];
        local_3c = (int *****)puVar8[2];
        local_38 = puVar8[3];
        local_34 = puVar8[4];
        uStack_30 = puVar8[5];
        uStack_2c = puVar8[6];
        uStack_28 = puVar8[7];
        FUN_01650d7c(&local_78,&local_48,piVar5);
        DataMemoryBarrier(0xb);
        do {
          iVar24 = *piVar5;
          bVar27 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar27);
        *piVar5 = iVar24 + -1;
        if (iVar24 == 1) {
          DataMemoryBarrier(0xb);
          FUN_019db128(piVar5);
        }
      }
      else {
        DataMemoryBarrier(0xb);
        *(undefined4 *)(iVar24 + 0xc) = 0;
        DataMemoryBarrier(0xb);
        *(undefined4 *)(iVar24 + 0x10) = 0;
        local_a0 = (int ******)&DAT_80000000;
        if (local_48 == (int ******)&DAT_80000000) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d06a98);
        }
        puVar8 = (undefined4 *)((uint)&local_a0 | 4);
        local_44 = (int ******)*puVar8;
        local_40 = (int ******)puVar8[1];
        local_3c = (int *****)puVar8[2];
        local_38 = puVar8[3];
        local_34 = puVar8[4];
        uStack_30 = puVar8[5];
        uStack_2c = puVar8[6];
        uStack_28 = puVar8[7];
        FUN_01650d7c(&local_60,&local_48,iVar24);
        piVar6 = (int *)*piVar5;
        *piVar5 = iVar24;
        if (piVar6 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar24 = *piVar6;
            bVar27 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar27);
          *piVar6 = iVar24 + -1;
          if (iVar24 == 1) {
            DataMemoryBarrier(0xb);
            FUN_019db128();
          }
        }
        local_78 = local_60;
        local_74 = local_5c;
        local_70 = local_58;
        iStack_6c = iStack_54;
        iStack_68 = iStack_50;
      }
      puVar8 = (undefined4 *)((uint)&local_78 | 4);
      local_48 = (int ******)*puVar8;
      local_44 = (int ******)puVar8[1];
      local_40 = (int ******)puVar8[2];
      local_3c = (int *****)puVar8[3];
      if (local_78 == (int ******)&DAT_00000003) goto LAB_0165398c;
      local_60 = local_78;
      puVar8 = (undefined4 *)((uint)&local_60 | 4);
      *puVar8 = local_48;
      puVar8[1] = local_44;
      puVar8[2] = local_40;
      puVar8[3] = local_3c;
    }
    else {
LAB_0165398c:
      FUN_01651528(&local_60,&local_a0);
    }
    FUN_016514e4(&local_a0);
    goto LAB_01653ecc;
  }
  pppppiVar26 = param_3[8];
  DataMemoryBarrier(0xb);
  pppppiVar18 = param_3[9];
  DataMemoryBarrier(0xb);
  if (((uint)pppppiVar26 & 1) == 0) {
    ppppppiVar13 = param_3 + 9;
    ppppppiVar17 = param_3 + 8;
    uVar14 = 0;
    pppppiVar22 = (int *****)0x0;
    do {
      iVar24 = uVar14 * uVar14;
      uVar23 = uVar14 << 1 | 1;
      while (uVar25 = ((uint)pppppiVar26 & 0x3f) >> 1, uVar25 == 0x1f) {
        if (uVar14 < 7) {
          if (uVar14 != 0) {
            iVar4 = iVar24;
            do {
              iVar4 = iVar4 + -1;
              HintYield();
            } while (iVar4 != 0);
          }
        }
        else {
          FUN_01bea67c();
        }
        pppppiVar26 = *ppppppiVar17;
        DataMemoryBarrier(0xb);
        pppppiVar18 = *ppppppiVar13;
        iVar24 = iVar24 + uVar23;
        uVar23 = uVar23 + 2;
        uVar14 = uVar14 + 1;
        DataMemoryBarrier(0xb);
        if (((uint)pppppiVar26 & 1) != 0) {
          pppppiVar18 = (int *****)0x0;
          uVar25 = 0;
          goto LAB_01653720;
        }
      }
      if ((uVar25 == 0x1e) && (pppppiVar22 == (int *****)0x0)) {
        pppppiVar22 = (int *****)FUN_01652c34();
      }
      if (pppppiVar18 != (int *****)0x0) {
LAB_01653178:
        if (*ppppppiVar17 != pppppiVar26) {
          ClearExclusiveLocal();
LAB_016531a0:
          DataMemoryBarrier(0xb);
          if (uVar14 == 0) {
            uVar14 = 1;
            pppppiVar18 = pppppiVar22;
          }
          else {
            uVar23 = uVar14;
            if (5 < uVar14) {
              uVar23 = 6;
            }
            iVar24 = uVar23 * uVar23;
            do {
              iVar24 = iVar24 + -1;
              HintYield();
            } while (iVar24 != 0);
            uVar14 = uVar14 + 1;
            pppppiVar18 = pppppiVar22;
          }
          goto LAB_016531f4;
        }
        DataMemoryBarrier(0xb);
        bVar27 = (bool)hasExclusiveAccess(ppppppiVar17);
        if (!bVar27) goto LAB_016531a0;
        *ppppppiVar17 = (int *****)((int)pppppiVar26 + 2);
        DataMemoryBarrier(0xb);
        if (uVar25 == 0x1e) {
          if (pppppiVar22 == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d06908);
          }
          DataMemoryBarrier(0xb);
          *ppppppiVar13 = pppppiVar22;
          DataMemoryBarrier(0xb);
          do {
            bVar27 = (bool)hasExclusiveAccess(ppppppiVar17);
          } while (!bVar27);
          *ppppppiVar17 = (int *****)((int)*ppppppiVar17 + 2);
          DataMemoryBarrier(0xb);
          *pppppiVar18 = (int ****)pppppiVar22;
          uVar25 = 0x1e;
          goto LAB_0165373c;
        }
        goto LAB_01653720;
      }
      pppppiVar18 = (int *****)FUN_01652c34();
      if (*ppppppiVar13 == (int *****)0x0) {
        DataMemoryBarrier(0xb);
        do {
          bVar27 = (bool)hasExclusiveAccess(ppppppiVar13);
          if (bVar27) {
            *ppppppiVar13 = pppppiVar18;
            bVar27 = true;
            goto LAB_01653164;
          }
        } while (*ppppppiVar13 == (int *****)0x0);
      }
      bVar27 = false;
      ClearExclusiveLocal();
LAB_01653164:
      if (bVar27) {
        DataMemoryBarrier(0xb);
        param_3[1] = pppppiVar18;
        goto LAB_01653178;
      }
      if (pppppiVar22 != (int *****)0x0) {
        thunk_FUN_01be4678(pppppiVar22);
      }
LAB_016531f4:
      pppppiVar22 = pppppiVar18;
      pppppiVar26 = *ppppppiVar17;
      DataMemoryBarrier(0xb);
      pppppiVar18 = *ppppppiVar13;
      DataMemoryBarrier(0xb);
    } while (((uint)pppppiVar26 & 1) == 0);
    pppppiVar18 = (int *****)0x0;
    uVar25 = 0;
LAB_01653720:
    if (pppppiVar22 != (int *****)0x0) {
      thunk_FUN_01be4678(pppppiVar22);
    }
    if (pppppiVar18 != (int *****)0x0) {
LAB_0165373c:
      ppppiVar11 = (int ****)param_4[1];
      ppppiVar16 = (int ****)param_4[2];
      ppppiVar20 = (int ****)param_4[3];
      pppppiVar26 = pppppiVar18 + uVar25 * 5 + 5;
      pppppiVar18[uVar25 * 5 + 1] = (int ****)*param_4;
      pppppiVar18[uVar25 * 5 + 2] = ppppiVar11;
      pppppiVar18[uVar25 * 5 + 3] = ppppiVar16;
      pppppiVar18[uVar25 * 5 + 4] = ppppiVar20;
      DataMemoryBarrier(0xb);
      do {
        bVar27 = (bool)hasExclusiveAccess(pppppiVar26);
      } while (!bVar27);
      *pppppiVar26 = (int ****)((uint)*pppppiVar26 | 1);
      ppppppiVar17 = (int ******)0x2;
      DataMemoryBarrier(0xb);
      if (*(char *)(param_3 + 0x18) == '\0') {
        FUN_01656cb0(&local_48,param_3 + 0x10);
        ppppppiVar13 = local_44;
        if (local_48 == (int ******)&DAT_00000001) {
          local_9c = (int ****)CONCAT31(local_9c._1_3_,local_40._0_1_);
          local_a0 = local_44;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533467,0x2b,&local_a0,&DAT_01d06918,&DAT_01d06968);
        }
        uVar14 = (uint)local_40 & 0xff;
        DataMemoryBarrier(0xb);
        if (*(char *)(param_3 + 0x18) == '\0') {
          if (local_44[4] != (int *****)0x0) {
            uVar28 = thunk_FUN_01bee35a();
            iVar24 = 0;
            pppppiVar18 = local_44[3];
            do {
              pppppiVar26 = pppppiVar18 + 3;
              ppppiVar11 = *pppppiVar18;
              if (ppppiVar11[5] != (int ***)((int)uVar28 + extraout_r3_00)) {
                ppppiVar16 = ppppiVar11 + 3;
                if (*ppppiVar16 == (int ***)0x0) {
                  DataMemoryBarrier(0xb);
LAB_01653808:
                  bVar27 = (bool)hasExclusiveAccess(ppppiVar16);
                  if (!bVar27) goto code_r0x01653814;
                  *ppppiVar16 = (int ***)pppppiVar18[1];
                  DataMemoryBarrier(0xb);
                  if (pppppiVar18[2] != (int ****)0x0) {
                    DataMemoryBarrier(0xb);
                    ppppiVar11[4] = (int ***)pppppiVar18[2];
                  }
                  DataMemoryBarrier(0xb);
                  pppiVar7 = ppppiVar11[2] + 6;
                  do {
                    ppiVar9 = *pppiVar7;
                    bVar27 = (bool)hasExclusiveAccess(pppiVar7);
                  } while (!bVar27);
                  *pppiVar7 = (int **)0x1;
                  if (ppiVar9 == (int **)0xffffffff) {
                    FUN_01be6c3c(0xf0,pppiVar7,0x81,1);
                  }
                  FUN_012e8fb8(&local_48,local_44 + 2,iVar24,&DAT_01d06a78);
                  if (local_48 != (int ******)0x0) {
                    DataMemoryBarrier(0xb);
                    do {
                      pppppiVar18 = *local_48;
                      bVar27 = (bool)hasExclusiveAccess(local_48);
                    } while (!bVar27);
                    *local_48 = (int *****)((int)pppppiVar18 + -1);
                    if (pppppiVar18 == (int *****)0x1) {
                      DataMemoryBarrier(0xb);
                      FUN_019db128(local_48);
                    }
                  }
                  break;
                }
LAB_01653820:
                ClearExclusiveLocal();
                DataMemoryBarrier(0xb);
              }
              iVar24 = iVar24 + 1;
              pppppiVar18 = pppppiVar26;
            } while (pppppiVar26 != local_44[3] + (int)((ulonglong)uVar28 >> 0x20) * 3);
          }
          local_48 = (int ******)local_44[6];
          local_3c = local_44[7];
          local_44[7] = (int *****)0x0;
          local_38 = 0;
          local_40 = local_44 + 5;
          local_44 = local_48 + (int)local_3c * 3;
          if (local_3c != (int *****)0x0) {
            do {
              pppppiVar26 = *local_48;
              ppppppiVar1 = local_48 + 1;
              local_48 = local_48 + 3;
              pppppiVar18 = pppppiVar26 + 3;
              if (*pppppiVar18 == (int ****)0x0) {
                DataMemoryBarrier(0xb);
LAB_01653c08:
                bVar27 = (bool)hasExclusiveAccess(pppppiVar18);
                if (!bVar27) goto code_r0x01653c14;
                *pppppiVar18 = (int ****)*ppppppiVar1;
                DataMemoryBarrier(0xb);
                DataMemoryBarrier(0xb);
                ppppiVar11 = pppppiVar26[2] + 6;
                do {
                  pppiVar7 = *ppppiVar11;
                  bVar27 = (bool)hasExclusiveAccess(ppppiVar11);
                } while (!bVar27);
                *ppppiVar11 = (int ***)0x1;
                if (pppiVar7 == (int ***)0xffffffff) {
                  FUN_01be6c3c(0xf0,ppppiVar11,0x81,1);
                }
                goto LAB_01653c28;
              }
LAB_01653c20:
              ClearExclusiveLocal();
              DataMemoryBarrier(0xb);
LAB_01653c28:
              DataMemoryBarrier(0xb);
              do {
                ppppiVar11 = *pppppiVar26;
                bVar27 = (bool)hasExclusiveAccess(pppppiVar26);
              } while (!bVar27);
              *pppppiVar26 = (int ****)((int)ppppiVar11 + -1);
              if (ppppiVar11 == (int ****)0x1) {
                DataMemoryBarrier(0xb);
                FUN_019db128(pppppiVar26);
              }
            } while (local_48 != local_44);
          }
          FUN_01652c58(&local_48);
          pppppiVar18 = (int *****)0x0;
          if (ppppppiVar13[4] == (int *****)0x0) {
            pppppiVar18 = ppppppiVar13[7];
          }
          DataMemoryBarrier(0xb);
          if (ppppppiVar13[4] == (int *****)0x0) {
            pppppiVar18 = (int *****)(uint)(pppppiVar18 == (int *****)0x0);
          }
          *(char *)(param_3 + 0x18) = (char)pppppiVar18;
          DataMemoryBarrier(0xb);
        }
        FUN_00a97e8c(ppppppiVar13,uVar14);
      }
      goto LAB_01653ec8;
    }
  }
  ppppppiVar17 = (int ******)0x2;
  if ((int ******)*param_4 != (int ******)&DAT_80000000) {
    local_58 = (int ******)param_4[1];
    iStack_54 = param_4[2];
    iStack_50 = param_4[3];
    local_5c = (int ******)*param_4;
LAB_01653868:
    ppppppiVar17 = (int ******)&DAT_00000001;
  }
LAB_01653ec8:
  local_60 = ppppppiVar17;
LAB_01653ecc:
  if (local_60 == (int ******)0x2) {
    *param_1 = 0x80000000;
  }
  else {
    local_48 = local_60;
    local_44 = local_5c;
    local_40 = local_58;
    local_3c = (int *****)iStack_54;
    local_38 = iStack_50;
    if (((uint)local_60 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d06ac8);
    }
    puVar8 = (undefined4 *)((uint)&local_60 | 4);
    uVar10 = puVar8[1];
    uVar12 = puVar8[2];
    uVar21 = puVar8[3];
    *param_1 = *puVar8;
    param_1[1] = uVar10;
    param_1[2] = uVar12;
    param_1[3] = uVar21;
  }
  return;
LAB_01653a40:
  do {
    pppppiVar26 = pppppiVar18 + 3;
    ppppiVar11 = *pppppiVar18;
    if (ppppiVar11[5] != (int ***)((int)uVar28 + extraout_r3_01)) {
      ppppiVar16 = ppppiVar11 + 3;
      if (*ppppiVar16 == (int ***)0x0) {
        DataMemoryBarrier(0xb);
LAB_01653a68:
        bVar27 = (bool)hasExclusiveAccess(ppppiVar16);
        if (!bVar27) goto code_r0x01653a74;
        *ppppiVar16 = (int ***)pppppiVar18[1];
        DataMemoryBarrier(0xb);
        if (pppppiVar18[2] != (int ****)0x0) {
          DataMemoryBarrier(0xb);
          ppppiVar11[4] = (int ***)pppppiVar18[2];
        }
        DataMemoryBarrier(0xb);
        pppiVar7 = ppppiVar11[2] + 6;
        do {
          ppiVar9 = *pppiVar7;
          bVar27 = (bool)hasExclusiveAccess(pppiVar7);
        } while (!bVar27);
        *pppiVar7 = (int **)0x1;
        if (ppiVar9 == (int **)0xffffffff) {
          FUN_01be6c3c(0xf0,pppiVar7,0x81,1);
        }
        FUN_012e8fb8(&local_48,local_44 + 2,iVar24,&DAT_01d06a78);
        if (local_48 != (int ******)0x0) {
          DataMemoryBarrier(0xb);
          do {
            pppppiVar18 = *local_48;
            bVar27 = (bool)hasExclusiveAccess(local_48);
          } while (!bVar27);
          *local_48 = (int *****)((int)pppppiVar18 + -1);
          if (pppppiVar18 == (int *****)0x1) {
            DataMemoryBarrier(0xb);
            FUN_019db128(local_48);
          }
        }
        break;
      }
LAB_01653a80:
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
    iVar24 = iVar24 + 1;
    pppppiVar18 = pppppiVar26;
  } while (pppppiVar26 != local_44[3] + (int)((ulonglong)uVar28 >> 0x20) * 3);
LAB_01653d90:
  local_48 = (int ******)local_44[6];
  local_3c = local_44[7];
  local_44[7] = (int *****)0x0;
  local_38 = 0;
  local_40 = local_44 + 5;
  local_44 = local_48 + (int)local_3c * 3;
  if (local_3c != (int *****)0x0) {
    do {
      pppppiVar26 = *local_48;
      ppppppiVar13 = local_48 + 1;
      local_48 = local_48 + 3;
      pppppiVar18 = pppppiVar26 + 3;
      if (*pppppiVar18 == (int ****)0x0) {
        DataMemoryBarrier(0xb);
LAB_01653dec:
        bVar27 = (bool)hasExclusiveAccess(pppppiVar18);
        if (!bVar27) goto code_r0x01653df8;
        *pppppiVar18 = (int ****)*ppppppiVar13;
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        ppppiVar11 = pppppiVar26[2] + 6;
        do {
          pppiVar7 = *ppppiVar11;
          bVar27 = (bool)hasExclusiveAccess(ppppiVar11);
        } while (!bVar27);
        *ppppiVar11 = (int ***)0x1;
        if (pppiVar7 == (int ***)0xffffffff) {
          FUN_01be6c3c(0xf0,ppppiVar11,0x81,1);
        }
        goto LAB_01653e0c;
      }
LAB_01653e04:
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
LAB_01653e0c:
      DataMemoryBarrier(0xb);
      do {
        ppppiVar11 = *pppppiVar26;
        bVar27 = (bool)hasExclusiveAccess(pppppiVar26);
      } while (!bVar27);
      *pppppiVar26 = (int ****)((int)ppppiVar11 + -1);
      if (ppppiVar11 == (int ****)0x1) {
        DataMemoryBarrier(0xb);
        FUN_019db128(pppppiVar26);
      }
    } while (local_48 != local_44);
  }
  FUN_01652c58(&local_48);
  pppppiVar18 = (int *****)0x0;
  if (ppppppiVar17[4] == (int *****)0x0) {
    pppppiVar18 = ppppppiVar17[7];
  }
  DataMemoryBarrier(0xb);
  if (ppppppiVar17[4] == (int *****)0x0) {
    pppppiVar18 = (int *****)(uint)(pppppiVar18 == (int *****)0x0);
  }
  *(char *)(param_3 + 0x24) = (char)pppppiVar18;
  DataMemoryBarrier(0xb);
LAB_01653eb4:
  FUN_00a97e8c(ppppppiVar17,uVar14);
LAB_01653ec4:
  ppppppiVar17 = (int ******)0x2;
  goto LAB_01653ec8;
code_r0x01653a74:
  if (*ppppiVar16 != (int ***)0x0) goto LAB_01653a80;
  goto LAB_01653a68;
code_r0x01653df8:
  if (*pppppiVar18 != (int ****)0x0) goto LAB_01653e04;
  goto LAB_01653dec;
LAB_016533a8:
  if (local_70 != (int ******)&DAT_3b9aca00) {
    FUN_019ac130(&local_48,1);
    if (local_48 == ppppppiVar13 && local_44 == ppppppiVar1) {
      if (ppppppiVar2 <= local_40) goto LAB_01653f60;
    }
    else if ((int)local_44 - (int)((int)ppppppiVar1 + (uint)(local_48 < ppppppiVar13)) < 0 ==
             (SBORROW4((int)local_44,(int)ppppppiVar1) !=
             SBORROW4((int)local_44 - (int)ppppppiVar1,(uint)(local_48 < ppppppiVar13)))) {
LAB_01653f60:
      iVar24 = param_4[1];
      iVar4 = param_4[2];
      iVar19 = param_4[3];
      piVar5 = (int *)((uint)&local_60 | 4);
      ppppppiVar17 = (int ******)0x0;
      *piVar5 = *param_4;
      piVar5[1] = iVar24;
      piVar5[2] = iVar4;
      piVar5[3] = iVar19;
      goto LAB_01653ec8;
    }
  }
  local_58 = (int ******)&local_78;
  local_60 = (int ******)&local_a0;
  piVar6 = piVar5;
  local_5c = param_3;
  if (((char)piVar5[1] == '\x01') || (piVar6 = (int *)FUN_01652998(piVar5), piVar6 != (int *)0x0)) {
    iVar24 = *piVar6;
    *piVar6 = 0;
    if (iVar24 == 0) {
      piVar15 = (int *)FUN_019b0254();
      local_60 = (int ******)0x0;
      local_44 = local_5c;
      local_40 = local_58;
      local_48 = (int ******)&local_a0;
      FUN_016503cc(&local_48,piVar15);
      DataMemoryBarrier(0xb);
      do {
        iVar24 = *piVar15;
        bVar27 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar27);
      *piVar15 = iVar24 + -1;
    }
    else {
      DataMemoryBarrier(0xb);
      *(undefined4 *)(iVar24 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      *(undefined4 *)(iVar24 + 0x10) = 0;
      local_60 = (int ******)0x0;
      local_44 = local_5c;
      local_40 = local_58;
      local_48 = (int ******)&local_a0;
      FUN_016503cc(&local_48,iVar24);
      piVar15 = (int *)*piVar6;
      *piVar6 = iVar24;
      if (piVar15 == (int *)0x0) goto LAB_0165325c;
      DataMemoryBarrier(0xb);
      do {
        iVar24 = *piVar15;
        bVar27 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar27);
      *piVar15 = iVar24 + -1;
    }
    if (iVar24 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db128(piVar15);
    }
    goto LAB_0165325c;
  }
  FUN_016508c4(&local_60);
  goto LAB_0165325c;
code_r0x016535d0:
  if (*ppppiVar16 != (int ***)0x0) goto LAB_016535dc;
  goto LAB_016535c4;
code_r0x01653814:
  if (*ppppiVar16 != (int ***)0x0) goto LAB_01653820;
  goto LAB_01653808;
code_r0x01653c14:
  if (*pppppiVar18 != (int ****)0x0) goto LAB_01653c20;
  goto LAB_01653c08;
}

