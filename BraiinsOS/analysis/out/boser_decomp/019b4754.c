// FUN_019b4754 @ 019b4754 size=6968 calls_out=57 calls_in=2
// strings: assertion failed: self.height > 0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x019b48d0) */
/* WARNING: Removing unreachable block (ram,0x019b48a8) */
/* WARNING: Removing unreachable block (ram,0x019b6088) */
/* WARNING: Removing unreachable block (ram,0x019b60ec) */
/* WARNING: Removing unreachable block (ram,0xeb9b6122) */
/* WARNING: Removing unreachable block (ram,0x019b60a0) */
/* WARNING: Removing unreachable block (ram,0x019b5e40) */
/* WARNING: Removing unreachable block (ram,0x019b6074) */
/* WARNING: Removing unreachable block (ram,0x019b5e68) */
/* WARNING: Removing unreachable block (ram,0x019b60b8) */
/* WARNING: Removing unreachable block (ram,0x019b5e80) */
/* WARNING: Removing unreachable block (ram,0x019b57f8) */
/* WARNING: Removing unreachable block (ram,0x019b5810) */
/* WARNING: Removing unreachable block (ram,0x019b60c0) */
/* WARNING: Removing unreachable block (ram,0x019b5828) */
/* WARNING: Removing unreachable block (ram,0x019b5ae0) */
/* WARNING: Removing unreachable block (ram,0x019b47e4) */
/* WARNING: Removing unreachable block (ram,0x019b5ddc) */
/* WARNING: Removing unreachable block (ram,0x019b5644) */
/* WARNING: Type propagation algorithm not settling */

void FUN_019b4754(undefined4 *param_1,int *param_2,int param_3,int param_4)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  int *******pppppppiVar4;
  int *******pppppppiVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int *******pppppppiVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  int *******pppppppiVar12;
  int *******extraout_r1;
  int *******extraout_r1_00;
  int *******extraout_r1_01;
  int *******extraout_r1_02;
  int *******pppppppiVar13;
  int *******extraout_r1_03;
  int *******pppppppiVar14;
  undefined *puVar15;
  int *piVar16;
  int *******pppppppiVar17;
  char *pcVar18;
  uint uVar19;
  int iVar20;
  int *******pppppppiVar21;
  undefined4 uVar22;
  int ******ppppppiVar23;
  int *******pppppppiVar24;
  int iVar25;
  int *******pppppppiVar26;
  int ******ppppppiVar27;
  int iVar28;
  int *******pppppppiVar29;
  int ******ppppppiVar30;
  int ******ppppppiVar31;
  int *piVar32;
  int ******ppppppiVar33;
  bool bVar34;
  bool bVar35;
  ulonglong uVar36;
  int *******local_2d0;
  int *******local_2cc;
  int *******local_2c4;
  int *******local_2c0;
  int *******local_2b8;
  int *******local_2b4;
  int *******local_2b0;
  int *******local_2ac;
  int *******local_2a8;
  int *******local_2a4;
  uint local_2a0;
  undefined4 local_29c;
  int *******local_290;
  int *******local_28c;
  int *******local_288;
  int *******local_284;
  int *******local_280;
  int *******local_27c;
  int *******local_278;
  int *******pppppppiStack_274;
  uint local_270;
  int *******local_140;
  int *******local_13c;
  int *******local_138;
  int *******local_f0;
  int *******local_ec;
  int *******local_e8;
  int *******local_e4;
  int *******local_e0;
  int *******local_dc;
  undefined4 local_6c;
  uint local_60 [2];
  int *******local_58;
  int *******local_54;
  uint local_50;
  int *******local_48;
  int *******local_44;
  int *******pppppppiStack_40;
  int *******local_38;
  int *******local_34;
  int *******local_30;
  undefined1 auStack_29 [5];
  
  local_2c0 = (int *******)param_2[0x14];
  if ((char)param_2[0x15] == '\0' && local_2c0 == (int *******)0x0) {
    local_48 = (int *******)&DAT_80000000;
  }
  else {
    pppppppiVar12 = (int *******)0x0;
    local_50 = 0;
    local_58 = (int *******)0x0;
    if ((char)param_2[0x15] == '\0') {
      if (DAT_01d51a70 < (int *******)0x3ffffffe) {
        bVar34 = (bool)hasExclusiveAccess(0x1d51a70);
        if (!bVar34) goto LAB_019b47e8;
        DataMemoryBarrier(0xb);
        DAT_01d51a70 = (int *******)((int)DAT_01d51a70 + 1);
      }
      else {
LAB_019b47e8:
        FUN_0197a5c8(&DAT_01d51a70);
      }
      pppppppiVar29 = (int *******)0x0;
      local_e8 = (int *******)0x0;
      local_ec = (int *******)&SUB_00000004;
      local_2c4 = (int *******)&SUB_00000004;
      local_f0 = (int *******)0x0;
      if ((DAT_01d5348c != (int *)0x0) && (iVar28 = *DAT_01d5348c, iVar28 != 0)) {
        local_2c4 = (int *******)&SUB_00000004;
        piVar6 = DAT_01d5348c;
        do {
          pppppppiVar12 = (int *******)FUN_01bedbda(iVar28);
          if (pppppppiVar12 != (int *******)0x0) {
            if (&DAT_00000008 < pppppppiVar12) {
              uVar36 = FUN_01307168(0x3d);
              pcVar18 = (char *)(uVar36 >> 0x20);
              if ((uVar36 & 1) != 0) {
LAB_019b48e0:
                pppppppiVar21 = (int *******)(pcVar18 + 1);
                if (pppppppiVar12 < pppppppiVar21) {
                    /* WARNING: Subroutine does not return */
                  FUN_012faff4(0,pppppppiVar21,pppppppiVar12,&DAT_01d278b0);
                }
                if (pppppppiVar21 == (int *******)0x0) {
                  pppppppiVar5 = (int *******)&DAT_00000001;
                }
                else {
                  pppppppiVar5 = (int *******)FUN_01298504(pppppppiVar21,1);
                  if (pppppppiVar5 == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00664620(1,pppppppiVar21);
                  }
                }
                FUN_01bed4e2(pppppppiVar5,iVar28,pppppppiVar21);
                pcVar18 = pcVar18 + 2;
                if (pppppppiVar12 <= pppppppiVar21) {
                    /* WARNING: Subroutine does not return */
                  FUN_012faff4(pcVar18,pppppppiVar12,pppppppiVar12,&DAT_01d278a0);
                }
                pppppppiVar12 = (int *******)((int)pppppppiVar12 - (int)pcVar18);
                pppppppiVar26 = (int *******)&DAT_00000001;
                if ((pppppppiVar12 != (int *******)0x0) &&
                   (pppppppiVar26 = (int *******)FUN_01298504(pppppppiVar12,1),
                   pppppppiVar26 == (int *******)0x0)) {
                    /* WARNING: Subroutine does not return */
                  FUN_00664620(1,pppppppiVar12);
                }
                FUN_01bed4e2(pppppppiVar26,pcVar18 + iVar28,pppppppiVar12);
                if (pppppppiVar21 != (int *******)&DAT_80000000) {
                  local_290 = pppppppiVar21;
                  local_28c = pppppppiVar5;
                  local_288 = pppppppiVar21;
                  local_284 = pppppppiVar12;
                  local_280 = pppppppiVar26;
                  local_27c = pppppppiVar12;
                  if (pppppppiVar29 == local_f0) {
                    FUN_019abe14(&local_f0);
                    local_2c4 = local_ec;
                  }
                  local_e8 = (int *******)((int)pppppppiVar29 + 1);
                  pppppppiVar12 = local_2c4 + (int)pppppppiVar29 * 6;
                  *pppppppiVar12 = (int ******)local_290;
                  pppppppiVar12[1] = (int ******)local_28c;
                  pppppppiVar12[2] = (int ******)local_288;
                  pppppppiVar12[3] = (int ******)local_284;
                  pppppppiVar12[4] = (int ******)local_280;
                  pppppppiVar12[5] = (int ******)local_27c;
                  pppppppiVar29 = local_e8;
                }
              }
            }
            else {
              pcVar18 = (char *)0x0;
              if (pppppppiVar12 != (int *******)&DAT_00000001) {
                do {
                  if (pcVar18[iVar28 + 1] == '=') goto LAB_019b48e0;
                  pcVar18 = pcVar18 + 1;
                } while ((char *)((int)pppppppiVar12 + -1) != pcVar18);
              }
            }
          }
          piVar6 = piVar6 + 1;
          iVar28 = *piVar6;
        } while (iVar28 != 0);
      }
      pppppppiVar21 = local_f0;
      DataMemoryBarrier(0xb);
      do {
        pppppppiVar12 = (int *******)((int)DAT_01d51a70 + -1);
        bVar34 = (bool)hasExclusiveAccess(0x1d51a70);
      } while (!bVar34);
      DAT_01d51a70 = pppppppiVar12;
      if (((uint)pppppppiVar12 & 0xbfffffff) == 0x80000000) {
        FUN_019a33c4(&DAT_01d51a70);
        pppppppiVar12 = extraout_r1_03;
      }
      pppppppiVar26 = local_2c4 + (int)pppppppiVar29 * 6;
      local_28c = local_2c4;
      local_290 = local_2c4;
      pppppppiVar5 = local_2c4;
      local_288 = pppppppiVar21;
      local_284 = pppppppiVar26;
      if (pppppppiVar29 != (int *******)0x0) {
        pppppppiVar29 = local_2c4;
        do {
          pppppppiVar5 = pppppppiVar29 + 6;
          if (*pppppppiVar29 == (int ******)0x80000000) break;
          local_44 = (int *******)pppppppiVar29[1];
          pppppppiStack_40 = (int *******)pppppppiVar29[2];
          local_38 = (int *******)pppppppiVar29[3];
          local_34 = (int *******)pppppppiVar29[4];
          local_30 = (int *******)pppppppiVar29[5];
          local_48 = (int *******)*pppppppiVar29;
          FUN_019b7650(&local_f0,&local_58,&local_48,&local_38);
          if (((uint)local_f0 & 0x7fffffff) != 0) {
            thunk_FUN_01be4678(local_ec);
          }
          pppppppiVar12 = pppppppiVar29 + 6;
          pppppppiVar29 = pppppppiVar5;
        } while (pppppppiVar12 != pppppppiVar26);
      }
      local_28c = pppppppiVar5;
      if (pppppppiVar26 != pppppppiVar5) {
        pppppppiVar29 = pppppppiVar5 + 4;
        pppppppiVar12 =
             (int *******)
             ((ulonglong)(uint)((int)pppppppiVar26 - (int)pppppppiVar5) * 0xaaaaaaab >> 0x20);
        uVar19 = (uint)((int)pppppppiVar26 - (int)pppppppiVar5) / 0x18;
        do {
          if (pppppppiVar29[-4] != (int ******)0x0) {
            thunk_FUN_01be4678(pppppppiVar29[-3]);
            pppppppiVar12 = extraout_r1;
          }
          if (pppppppiVar29[-1] != (int ******)0x0) {
            thunk_FUN_01be4678(*pppppppiVar29);
            pppppppiVar12 = extraout_r1_00;
          }
          pppppppiVar29 = pppppppiVar29 + 6;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      if (pppppppiVar21 != (int *******)0x0) {
        thunk_FUN_01be4678(local_2c4);
        pppppppiVar12 = extraout_r1_01;
      }
    }
    piVar6 = (int *)param_2[0x12];
    if (piVar6 != (int *)0x0) {
      pppppppiVar12 = local_2c0;
    }
    if (piVar6 != (int *)0x0 && pppppppiVar12 != (int *******)0x0) {
      uVar19 = param_2[0x13];
      piVar16 = (int *)0x0;
      do {
        pppppppiVar29 = local_54;
        pppppppiVar12 = local_58;
        if (piVar16 == (int *)0x0) {
          uVar8 = 0;
          piVar16 = piVar6;
          for (; uVar19 != 0; uVar19 = uVar19 - 1) {
            piVar16 = (int *)piVar16[0x44];
          }
          piVar6 = (int *)0x0;
        }
        else {
          uVar8 = uVar19;
        }
        piVar32 = piVar16;
        if (*(ushort *)((int)piVar16 + 0x10e) <= uVar8) {
          do {
            piVar16 = (int *)*piVar32;
            if (piVar16 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01d28004);
            }
            uVar8 = (uint)*(ushort *)(piVar32 + 0x43);
            piVar6 = (int *)((int)piVar6 + 1);
            piVar32 = piVar16;
          } while (*(ushort *)((int)piVar16 + 0x10e) <= uVar8);
        }
        if (piVar6 == (int *)0x0) {
          uVar19 = uVar8 + 1;
          piVar32 = piVar16;
        }
        else {
          piVar7 = piVar16 + uVar8 + 0x45;
          do {
            piVar32 = (int *)*piVar7;
            piVar6 = (int *)((int)piVar6 + -1);
            piVar7 = piVar32 + 0x44;
          } while (piVar6 != (int *)0x0);
          uVar19 = 0;
        }
        if (piVar16[uVar8 * 3 + 0x22] == -0x80000000) {
          if (local_58 != (int *******)0x0) {
            ppppppiVar27 = (int ******)piVar16[uVar8 * 3 + 3];
            iVar28 = piVar16[uVar8 * 3 + 2];
            local_2c4 = local_54;
            pppppppiVar21 = local_58;
LAB_019b4c8c:
            ppppppiVar33 = (int ******)(uint)*(ushort *)((int)pppppppiVar21 + 0x10e);
            pppppppiVar5 = pppppppiVar21 + 1;
            iVar20 = (int)ppppppiVar33 * 0xc;
            ppppppiVar31 = (int ******)0xffffffff;
            do {
              ppppppiVar30 = ppppppiVar31;
              if (iVar20 == 0) goto LAB_019b4d14;
              ppppppiVar23 = pppppppiVar5[2];
              ppppppiVar31 = ppppppiVar23;
              if (ppppppiVar27 < ppppppiVar23) {
                ppppppiVar31 = ppppppiVar27;
              }
              iVar25 = FUN_01bed842(iVar28,pppppppiVar5[1],ppppppiVar31);
              if (iVar25 == 0) {
                iVar25 = (int)ppppppiVar27 - (int)ppppppiVar23;
              }
              iVar20 = iVar20 + -0xc;
              ppppppiVar31 = (int ******)((int)ppppppiVar30 + 1);
              pppppppiVar5 = pppppppiVar5 + 3;
            } while ((char)((0 < iVar25) - (iVar25 < 0)) == '\x01');
            ppppppiVar33 = ppppppiVar31;
            if (0 < iVar25 == iVar25 < 0) {
              local_60[0] = local_60[0] & 0xffffff00;
              if (local_2c4 == (int *******)0x0) {
                local_ec = (int *******)0x0;
                local_f0 = pppppppiVar21;
                local_e8 = (int *******)ppppppiVar31;
                FUN_019b82a0(&local_290,&local_f0,local_60);
              }
              else {
                local_140 = (int *******)pppppppiVar21[(int)ppppppiVar30 + 0x45];
                if (local_2c4 != (int *******)&DAT_00000001) {
                  pppppppiVar21 = (int *******)&DAT_00000001;
                  do {
                    pppppppiVar21 = (int *******)((int)pppppppiVar21 + 1);
                    local_140 = (int *******)local_140[*(ushort *)((int)local_140 + 0x10e) + 0x44];
                  } while (local_2c4 != pppppppiVar21);
                }
                local_13c = (int *******)0x0;
                local_138 = (int *******)(*(ushort *)((int)local_140 + 0x10e) - 1);
                FUN_019b82a0(&local_290,&local_140,local_60);
                pppppppiVar21 = local_278;
                if (local_270 < *(ushort *)((int)local_278 + 0x10e)) {
                  uVar8 = local_270;
                  pppppppiVar5 = local_278;
                }
                else {
                  do {
                    pppppppiVar5 = (int *******)*pppppppiVar21;
                    uVar8 = (uint)*(ushort *)(pppppppiVar21 + 0x43);
                    pppppppiVar21 = pppppppiVar5;
                  } while (*(ushort *)((int)pppppppiVar5 + 0x10e) <= uVar8);
                }
                pppppppiVar26 = (int *******)pppppppiVar5[uVar8 * 3 + 3];
                pppppppiVar21 = (int *******)pppppppiVar5[uVar8 * 3 + 1];
                pppppppiVar24 = (int *******)pppppppiVar5[uVar8 * 3 + 2];
                pppppppiVar5[uVar8 * 3 + 1] = (int ******)local_290;
                pppppppiVar5[uVar8 * 3 + 2] = (int ******)local_28c;
                pppppppiVar17 = (int *******)pppppppiVar5[uVar8 * 3 + 0x22];
                pppppppiVar9 = (int *******)pppppppiVar5[uVar8 * 3 + 0x23];
                pppppppiVar13 = (int *******)pppppppiVar5[uVar8 * 3 + 0x24];
                pppppppiVar5[uVar8 * 3 + 0x22] = (int ******)local_284;
                pppppppiVar5[uVar8 * 3 + 3] = (int ******)local_288;
                pppppppiVar5[uVar8 * 3 + 0x23] = (int ******)local_280;
                pppppppiVar5[uVar8 * 3 + 0x24] = (int ******)local_27c;
                local_290 = pppppppiVar21;
                local_28c = pppppppiVar24;
                local_288 = pppppppiVar26;
                local_284 = pppppppiVar17;
                local_280 = pppppppiVar9;
                local_27c = pppppppiVar13;
              }
              local_f0 = local_290;
              local_ec = local_28c;
              local_e8 = local_288;
              local_e4 = local_284;
              local_e0 = local_280;
              local_dc = local_27c;
              local_50 = local_50 - 1;
              if ((local_60[0] & 0xff) == 1) {
                if (pppppppiVar29 == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0ec("assertion failed: self.height > 0",0x21,&DAT_01d27f34);
                }
                local_58 = (int *******)pppppppiVar12[0x44];
                *local_58 = (int ******)0x0;
                local_54 = (int *******)((int)pppppppiVar29 + -1);
                thunk_FUN_01be4678();
              }
              pppppppiVar12 = local_e0;
              pppppppiVar29 = local_e4;
              if (local_f0 != (int *******)&DAT_80000000) {
                if (local_f0 != (int *******)0x0) {
                  thunk_FUN_01be4678(local_ec);
                }
                if (((uint)pppppppiVar29 & 0x7fffffff) == 0) goto LAB_019b4b94;
                goto LAB_019b4b90;
              }
            }
            else {
LAB_019b4d14:
              if (local_2c4 != (int *******)0x0) goto code_r0x019b4d24;
            }
          }
        }
        else {
          iVar28 = piVar16[uVar8 * 3 + 2];
          pppppppiVar21 = (int *******)piVar16[uVar8 * 3 + 3];
          pppppppiVar29 = (int *******)&DAT_00000001;
          pppppppiVar12 = (int *******)&DAT_00000001;
          if ((pppppppiVar21 != (int *******)0x0) &&
             (pppppppiVar12 = (int *******)FUN_01298504(pppppppiVar21,1),
             pppppppiVar12 == (int *******)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,pppppppiVar21);
          }
          FUN_01bed4e2(pppppppiVar12,iVar28,pppppppiVar21);
          iVar28 = piVar16[uVar8 * 3 + 0x23];
          pppppppiVar5 = (int *******)piVar16[uVar8 * 3 + 0x24];
          local_f0 = pppppppiVar21;
          local_ec = pppppppiVar12;
          local_e8 = pppppppiVar21;
          if ((pppppppiVar5 != (int *******)0x0) &&
             (pppppppiVar29 = (int *******)FUN_01298504(pppppppiVar5,1),
             pppppppiVar29 == (int *******)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,pppppppiVar5);
          }
          FUN_01bed4e2(pppppppiVar29,iVar28,pppppppiVar5);
          local_290 = pppppppiVar5;
          local_28c = pppppppiVar29;
          local_288 = pppppppiVar5;
          FUN_019b7650(&local_140,&local_58,&local_f0,&local_290);
          if (((uint)local_140 & 0x7fffffff) != 0) {
            pppppppiVar12 = local_13c;
LAB_019b4b90:
            thunk_FUN_01be4678(pppppppiVar12);
          }
        }
LAB_019b4b94:
        local_2c0 = (int *******)((int)local_2c0 + -1);
        piVar6 = (int *)0x0;
        piVar16 = piVar32;
      } while (local_2c0 != (int *******)0x0);
    }
    uVar8 = local_50;
    pppppppiVar29 = local_54;
    pppppppiVar12 = local_58;
    uVar22 = 0;
    pppppppiVar21 = (int *******)(local_50 + 1);
    bVar35 = (int *******)0x3ffffffe < pppppppiVar21;
    bVar34 = local_50 == 0x3ffffffe;
    uVar19 = (int)pppppppiVar21 * 4;
    if (!bVar35 || bVar34) {
      bVar35 = 0x7ffffffb < uVar19;
      bVar34 = uVar19 == 0x7ffffffc;
    }
    if (bVar35 && !bVar34) {
LAB_019b4b5c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar22,uVar19);
    }
    if (uVar19 == 0) {
      local_13c = (int *******)&SUB_00000004;
      local_140 = (int *******)0x0;
LAB_019b503c:
      local_138 = (int *******)0x0;
      FUN_019af460(&local_140);
    }
    else {
      uVar22 = 4;
      pppppppiVar5 = (int *******)FUN_01298504(uVar19,4);
      if (pppppppiVar5 == (int *******)0x0) goto LAB_019b4b5c;
      local_138 = (int *******)0x0;
      local_140 = pppppppiVar21;
      local_13c = pppppppiVar5;
      if (pppppppiVar21 == (int *******)0x0) goto LAB_019b503c;
    }
    *local_13c = (int ******)0x0;
    local_30 = (int *******)&DAT_00000001;
    if (pppppppiVar12 == (int *******)0x0) {
      uVar8 = 0;
    }
    local_27c = (int *******)0x0;
    local_278 = pppppppiVar12;
    pppppppiStack_274 = pppppppiVar29;
    local_38 = local_140;
    local_290 = pppppppiVar12;
    if (pppppppiVar12 != (int *******)0x0) {
      local_290 = (int *******)&DAT_00000001;
    }
    local_28c = (int *******)0x0;
    local_288 = pppppppiVar12;
    local_284 = pppppppiVar29;
    local_34 = local_13c;
    local_280 = local_290;
    local_270 = uVar8;
    while( true ) {
      FUN_019b89ec(&local_f0,&local_290);
      pppppppiVar12 = extraout_r1_02;
      pppppppiVar29 = local_f0;
      if (local_f0 != (int *******)0x0) {
        pppppppiVar29 = local_f0 + (int)local_e8 * 3;
        pppppppiVar12 = (int *******)pppppppiVar29[1];
      }
      if (local_f0 == (int *******)0x0 || pppppppiVar12 == (int *******)&DAT_80000000) break;
      pppppppiVar21 = (int *******)pppppppiVar29[3];
      local_13c = (int *******)pppppppiVar29[2];
      ppppppiVar33 = pppppppiVar29[0x22];
      ppppppiVar27 = pppppppiVar29[0x23];
      ppppppiVar31 = pppppppiVar29[0x24];
      uVar19 = (int)ppppppiVar31 + 2;
      local_140 = pppppppiVar12;
      pppppppiVar29 = pppppppiVar21;
      local_138 = pppppppiVar21;
      if ((uint)((int)pppppppiVar12 - (int)pppppppiVar21) < uVar19) {
        if (CARRY4(uVar19,(uint)pppppppiVar21)) {
          pppppppiVar29 = (int *******)0x0;
LAB_019b6054:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(pppppppiVar29,pppppppiVar12);
        }
        FUN_0197ad30(&local_f0,pppppppiVar12,local_13c,(int *******)(uVar19 + (int)pppppppiVar21),1,
                     1);
        if (local_f0 == (int *******)&DAT_00000001) {
          pppppppiVar29 = local_ec;
          pppppppiVar12 = local_e8;
          goto LAB_019b6054;
        }
        local_140 = (int *******)(uVar19 + (int)pppppppiVar21);
        local_13c = local_ec;
        pppppppiVar29 = local_138;
      }
      local_138 = pppppppiVar21;
      if (local_140 == pppppppiVar21) {
        local_138 = pppppppiVar29;
        FUN_0197ac30(&local_140,pppppppiVar21,1,1,1);
      }
      pcVar18 = (char *)((int)local_138 + 1);
      *(char *)((int)local_13c + (int)local_138) = '=';
      local_138 = (int *******)pcVar18;
      if ((int ******)((int)local_140 - (int)pcVar18) < ppppppiVar31) {
        FUN_0197ac30(&local_140,pcVar18,ppppppiVar31,1,1);
      }
      pppppppiVar21 = local_138;
      pppppppiVar29 = local_13c;
      pppppppiVar12 = local_140;
      FUN_01bed4e2((char *)((int)local_13c + (int)local_138),ppppppiVar27,ppppppiVar31);
      pppppppiVar21 = (int *******)((int)pppppppiVar21 + (int)ppppppiVar31);
      if (&DAT_00000007 < pppppppiVar21) {
        uVar19 = FUN_01307168(0,pppppppiVar29,pppppppiVar21);
        if ((uVar19 & 1) == 0) goto LAB_019b51ac;
LAB_019b5184:
        if (pppppppiVar12 != (int *******)0x0) {
          if (pppppppiVar12 != (int *******)&DAT_80000000) {
            thunk_FUN_01be4678(pppppppiVar29);
            goto LAB_019b519c;
          }
          goto LAB_019b51c8;
        }
LAB_019b519c:
        *(undefined1 *)(param_2 + 0x1e) = 1;
      }
      else {
        if (pppppppiVar21 != (int *******)0x0) {
          pppppppiVar5 = pppppppiVar29;
          pppppppiVar26 = pppppppiVar21;
          do {
            if (*(char *)pppppppiVar5 == '\0') goto LAB_019b5184;
            pppppppiVar26 = (int *******)((int)pppppppiVar26 + -1);
            pppppppiVar5 = (int *******)((int)pppppppiVar5 + 1);
          } while (pppppppiVar26 != (int *******)0x0);
        }
LAB_019b51ac:
        local_ec = pppppppiVar29;
        local_f0 = pppppppiVar12;
        local_e8 = pppppppiVar21;
        pppppppiVar29 = (int *******)FUN_006647b4(&local_f0);
LAB_019b51c8:
        pppppppiVar12 = local_30;
        if (local_30 == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(0xffffffff,0,&DAT_01d27b24);
        }
        local_34[(int)((int)local_30 + -1)] = (int ******)pppppppiVar29;
        if (local_30 == local_38) {
          FUN_019af460(&local_38);
        }
        local_34[(int)pppppppiVar12] = (int ******)0x0;
        local_30 = (int *******)((int)pppppppiVar12 + 1);
      }
      if (ppppppiVar33 != (int ******)0x0) {
        thunk_FUN_01be4678(ppppppiVar27);
      }
    }
    while( true ) {
      FUN_019b89ec(&local_f0,&local_290);
      pppppppiVar29 = local_e8;
      pppppppiVar12 = local_f0;
      if (local_f0 == (int *******)0x0) break;
      if (local_f0[(int)local_e8 * 3 + 1] != (int ******)0x0) {
        thunk_FUN_01be4678(local_f0[(int)local_e8 * 3 + 2]);
      }
      if (pppppppiVar12[(int)pppppppiVar29 * 3 + 0x22] != (int ******)0x0) {
        thunk_FUN_01be4678(pppppppiVar12[(int)pppppppiVar29 * 3 + 0x23]);
      }
    }
    local_48 = local_38;
    local_44 = local_34;
    pppppppiStack_40 = local_30;
  }
  if ((char)param_2[0x1e] != '\0') {
    *(undefined1 *)(param_1 + 1) = 2;
    *param_1 = 2;
    param_1[2] = &DAT_01d27ab8;
    if (local_48 == (int *******)&DAT_80000000) {
      return;
    }
    goto LAB_019b5350;
  }
  iVar20 = param_2[8];
  iVar25 = param_2[10];
  iVar28 = 1;
  if (param_4 != 0) {
    iVar28 = param_3;
  }
  if (param_2[6] != 5) {
    iVar28 = param_2[6];
  }
  FUN_019b731c(&local_290,iVar28,param_2[7],1);
  pppppppiVar5 = local_288;
  pppppppiVar29 = local_28c;
  pppppppiVar12 = local_290;
  pppppppiVar26 = local_288;
  pppppppiVar21 = local_28c;
  if (local_290 == (int *******)&DAT_00000003) {
LAB_019b5470:
    *param_1 = 2;
    param_1[1] = pppppppiVar21;
    param_1[2] = pppppppiVar26;
  }
  else {
    if (iVar20 == 5) {
      iVar20 = param_3;
    }
    FUN_019b731c(&local_290,iVar20,param_2[9],0);
    pppppppiVar9 = local_288;
    pppppppiVar24 = local_28c;
    pppppppiVar17 = local_290;
    pppppppiVar26 = local_288;
    pppppppiVar21 = local_28c;
    if (local_290 == (int *******)&DAT_00000003) {
LAB_019b5448:
      if (pppppppiVar5 != (int *******)&DAT_ffffffff) {
        FUN_01bf01d6(pppppppiVar5);
      }
      if (&DAT_00000001 < pppppppiVar12) {
        FUN_01bf01d6(pppppppiVar29);
      }
      goto LAB_019b5470;
    }
    if (iVar25 != 5) {
      param_3 = iVar25;
    }
    FUN_019b731c(&local_290,param_3,param_2[0xb],0);
    pppppppiVar13 = local_48;
    pppppppiVar26 = local_288;
    pppppppiVar21 = local_28c;
    pppppppiVar4 = local_290;
    if (local_290 == (int *******)&DAT_00000003) {
      if (pppppppiVar9 != (int *******)&DAT_ffffffff) {
        FUN_01bf01d6(pppppppiVar9);
      }
      if (&DAT_00000001 < pppppppiVar17) {
        FUN_01bf01d6(pppppppiVar24);
      }
      goto LAB_019b5448;
    }
    local_2a8 = local_290;
    local_2a4 = local_28c;
    local_2ac = pppppppiVar24;
    local_2b0 = pppppppiVar17;
    local_2b4 = pppppppiVar29;
    local_2b8 = pppppppiVar12;
    local_34 = pppppppiVar9;
    local_38 = pppppppiVar5;
    local_30 = local_288;
    if (param_2[2] == 0 && *param_2 == 0) {
      bVar2 = *(byte *)((int)param_2 + 0x55);
      bVar34 = bVar2 == 0;
      if (bVar34) {
        bVar2 = *(byte *)(param_2 + 0x15);
      }
      if (!bVar34 || (bVar2 & 1) != 0) {
        pcVar18 = (char *)param_2[0x16];
        uVar19 = param_2[0x17] - 1;
        if (uVar19 < 8) {
          for (; uVar19 != 0; uVar19 = uVar19 - 1) {
            if (*pcVar18 == '/') goto LAB_019b553c;
            pcVar18 = pcVar18 + 1;
          }
        }
        else {
          iVar28 = FUN_01307168(0x2f,pcVar18);
          if (iVar28 == 1) goto LAB_019b553c;
        }
        goto LAB_019b5568;
      }
LAB_019b553c:
      if (param_2[0x11] != 0) goto LAB_019b5568;
      iVar28 = param_2[0x1c];
      bVar34 = iVar28 == 0;
      if (bVar34) {
        iVar28 = param_2[0x1a];
      }
      if (!bVar34 || iVar28 != 0) goto LAB_019b5568;
      cVar3 = *(char *)((int)param_2 + 0x79);
      if (cVar3 != '\0') {
        if (DAT_01d51aa8 != '\x02') {
          if (DAT_01d51aa8 != '\0') goto LAB_019b5b10;
          uVar22 = FUN_01bf0332();
          iVar28 = FUN_01be6c3c(0x1b2,uVar22,0);
          if (iVar28 != -1) {
            FUN_01bf01d6(iVar28);
            DAT_01d51aa8 = '\x02';
            goto LAB_019b5568;
          }
          puVar11 = (undefined4 *)FUN_01be3244();
          local_ec = (int *******)*puVar11;
          pppppppiVar5 = (int *******)((uint)local_f0 >> 8);
          local_f0 = (int *******)((int)pppppppiVar5 << 8);
          if (local_ec != (int *******)&DAT_00000018) {
            FUN_0197acb4(&local_f0);
            DAT_01d51aa8 = '\x03';
            goto LAB_019b5b10;
          }
          pppppppiVar26 = (int *******)&DAT_00000018;
          pppppppiVar13 = pppppppiVar5;
          goto LAB_019b5b6c;
        }
        goto LAB_019b5568;
      }
LAB_019b5b10:
      iVar28 = param_2[4];
      iVar20 = param_2[5];
      local_2d0 = (int *******)param_2[0x18];
      pppppppiVar26 = (int *******)FUN_01bea580(&local_290);
      if (pppppppiVar26 != (int *******)0x0) {
LAB_019b5b6c:
        pppppppiVar5 = (int *******)0x0;
LAB_019b5b70:
        param_1[1] = (uint)pppppppiVar5 & 0xff | (int)pppppppiVar13 << 8;
        param_1[2] = pppppppiVar26;
        goto LAB_019b5600;
      }
      pppppppiVar26 = (int *******)FUN_01bea572(&local_140);
      if (pppppppiVar26 != (int *******)0x0) {
        FUN_01bea57c(&local_290);
        goto LAB_019b5b6c;
      }
      if (((((pppppppiVar12 != (int *******)0x0) &&
            (pppppppiVar26 = (int *******)FUN_01bea526(&local_140,pppppppiVar29,0),
            pppppppiVar26 != (int *******)0x0)) ||
           ((pppppppiVar17 != (int *******)0x0 &&
            (pppppppiVar26 = (int *******)FUN_01bea526(&local_140,pppppppiVar24,1),
            pppppppiVar26 != (int *******)0x0)))) ||
          ((pppppppiVar4 != (int *******)0x0 &&
           (pppppppiVar26 = (int *******)FUN_01bea526(&local_140,pppppppiVar21,2),
           pppppppiVar26 != (int *******)0x0)))) ||
         ((local_2d0 != (int *******)0x0 &&
          (pppppppiVar26 = (int *******)FUN_01bea4e4(&local_140), pppppppiVar26 != (int *******)0x0)
          ))) {
LAB_019b5c30:
        FUN_01bea55e(&local_140);
        FUN_01bea57c(&local_290);
        goto LAB_019b5b6c;
      }
      uVar22 = 4;
      if (iVar28 != 0) {
        pppppppiVar26 = (int *******)FUN_01bea59e(&local_290,iVar20);
        if (pppppppiVar26 != (int *******)0x0) goto LAB_019b5c30;
        uVar22 = 6;
      }
      iVar28 = FUN_01bea966(&local_f0);
      if ((iVar28 == -1) || (iVar28 = FUN_01bea8e8(&local_f0,0xd), iVar28 == -1)) {
        puVar11 = (undefined4 *)FUN_01be3244();
        pppppppiVar26 = (int *******)*puVar11;
        goto LAB_019b5c30;
      }
      pppppppiVar26 = (int *******)FUN_01bea5a6(&local_290,&local_f0);
      if (pppppppiVar26 != (int *******)0x0) goto LAB_019b5c30;
      if (*(char *)((int)param_2 + 0x7a) == '\x01') {
        FUN_01bea55e(&local_140);
        FUN_01bea57c(&local_290);
        goto LAB_019b5568;
      }
      pppppppiVar26 = (int *******)FUN_01bea590(&local_290,uVar22);
      if (pppppppiVar26 != (int *******)0x0) goto LAB_019b5c30;
      if (DAT_01d51a70 < (int *******)0x3ffffffe) {
        bVar34 = (bool)hasExclusiveAccess(0x1d51a70);
        if (!bVar34) goto LAB_019b5de0;
        DataMemoryBarrier(0xb);
        DAT_01d51a70 = (int *******)((int)DAT_01d51a70 + 1);
      }
      else {
LAB_019b5de0:
        FUN_0197a5c8(&DAT_01d51a70);
      }
      puVar11 = &DAT_01d5348c;
      if (pppppppiVar13 != (int *******)&DAT_80000000) {
        puVar11 = (undefined4 *)((uint)&local_48 | 4);
      }
      if ((cVar3 != '\0') && (pppppppiVar13 = (int *******)&DAT_01d51aa8, DAT_01d51aa8 == '\x01')) {
        local_6c = 0xffffffff;
        goto LAB_019b6308;
      }
      local_e4 = (int *******)&DAT_ffffffff;
      local_f0 = (int *******)0x0;
      local_e8 = (int *******)0x0;
      pppppppiVar9 = (int *******)
                     FUN_01bea5b4(&local_e8,param_2[0x16],&local_140,&local_290,param_2[0xd],
                                  *puVar11);
      pppppppiVar26 = local_e8;
      pppppppiVar5 = local_ec;
      if (pppppppiVar9 == (int *******)0x0) {
        local_2cc = local_f0;
        local_2d0 = local_e4;
        pppppppiVar13 = (int *******)((uint)local_ec >> 8);
        DataMemoryBarrier(0xb);
        do {
          pppppppiVar9 = (int *******)((int)DAT_01d51a70 + -1);
          bVar34 = (bool)hasExclusiveAccess(0x1d51a70);
        } while (!bVar34);
        DAT_01d51a70 = pppppppiVar9;
        if (((uint)pppppppiVar9 & 0xbfffffff) == 0x80000000) {
          FUN_019a33c4(&DAT_01d51a70);
        }
      }
      else {
        if (local_e4 != (int *******)&DAT_ffffffff) {
          FUN_01bf01d6();
        }
        local_2cc = (int *******)&DAT_00000003;
        pppppppiVar5 = (int *******)0x0;
        DataMemoryBarrier(0xb);
        do {
          pppppppiVar14 = (int *******)((int)DAT_01d51a70 + -1);
          bVar34 = (bool)hasExclusiveAccess(0x1d51a70);
        } while (!bVar34);
        pppppppiVar26 = pppppppiVar9;
        DAT_01d51a70 = pppppppiVar14;
        if (((uint)pppppppiVar14 & 0xbfffffff) == 0x80000000) {
          FUN_019a33c4(&DAT_01d51a70);
        }
      }
      FUN_01bea55e(&local_140);
      FUN_01bea57c(&local_290);
      if (local_2cc == (int *******)0x2) goto LAB_019b5568;
      if (local_2cc == (int *******)&DAT_00000003) goto LAB_019b5b70;
      param_1[1] = (uint)pppppppiVar5 & 0xff | (int)pppppppiVar13 << 8;
      param_1[2] = pppppppiVar26;
      param_1[3] = local_2d0;
      *param_1 = local_2cc;
      param_1[4] = local_38;
      param_1[5] = local_34;
      param_1[6] = local_30;
      if (&DAT_00000001 < pppppppiVar12) {
        FUN_01bf01d6(pppppppiVar29);
      }
      if (&DAT_00000001 < pppppppiVar17) {
        FUN_01bf01d6(pppppppiVar24);
      }
      if (pppppppiVar4 < (int *******)0x2) goto LAB_019b5480;
LAB_019b5a44:
      FUN_01bf01d6(pppppppiVar21);
    }
    else {
LAB_019b5568:
      local_28c = (int *******)0x0;
      local_290 = (int *******)0x0;
      iVar28 = FUN_01be9cd2(1,0x80005,0,&local_290);
      pppppppiVar26 = local_28c;
      pppppppiVar5 = local_290;
      if (iVar28 == -1) {
        puVar11 = (undefined4 *)FUN_01be3244();
        uVar22 = *puVar11;
        param_1[1] = 0;
        param_1[2] = uVar22;
LAB_019b5600:
        *param_1 = 2;
        if (&DAT_00000001 < pppppppiVar12) {
          FUN_01bf01d6(pppppppiVar29);
        }
        if (&DAT_00000001 < pppppppiVar17) {
          FUN_01bf01d6(pppppppiVar24);
        }
        if (&DAT_00000001 < pppppppiVar4) {
          FUN_01bf01d6(pppppppiVar21);
        }
LAB_019b5a18:
        if (local_38 != (int *******)&DAT_ffffffff) {
          FUN_01bf01d6();
        }
        if (local_34 != (int *******)&DAT_ffffffff) {
          FUN_01bf01d6();
        }
        pppppppiVar21 = local_30;
        if (local_30 != (int *******)&DAT_ffffffff) goto LAB_019b5a44;
      }
      else {
        if (local_290 == (int *******)&DAT_ffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c(&DAT_00570c98,8,&DAT_01d28124);
        }
        if (local_28c == (int *******)&DAT_ffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c(&DAT_00570c98,8,&DAT_01d28124);
        }
        if (DAT_01d51a70 < (int *******)0x3ffffffe) {
          bVar34 = (bool)hasExclusiveAccess(0x1d51a70);
          if (!bVar34) goto LAB_019b5648;
          DataMemoryBarrier(0xb);
          DAT_01d51a70 = (int *******)((int)DAT_01d51a70 + 1);
        }
        else {
LAB_019b5648:
          FUN_0197a5c8(&DAT_01d51a70);
        }
        pppppppiVar9 = (int *******)FUN_01be9f78(DAT_01d51a78);
        if (pppppppiVar9 == (int *******)&DAT_ffffffff) {
          puVar11 = (undefined4 *)FUN_01be3244();
          uVar22 = *puVar11;
          *(undefined1 *)(param_1 + 1) = 0;
          *param_1 = 2;
          param_1[2] = uVar22;
          DataMemoryBarrier(0xb);
          do {
            pppppppiVar9 = (int *******)((int)DAT_01d51a70 + -1);
            bVar34 = (bool)hasExclusiveAccess(0x1d51a70);
          } while (!bVar34);
          DAT_01d51a70 = pppppppiVar9;
          if (((uint)pppppppiVar9 & 0xbfffffff) == 0x80000000) {
            FUN_019a33c4(&DAT_01d51a70);
          }
          FUN_01bf01d6(pppppppiVar26);
          bVar34 = true;
        }
        else {
          if (pppppppiVar9 == (int *******)0x0) {
            do {
              bVar34 = (bool)hasExclusiveAccess(0x1d51b08);
            } while (!bVar34);
            DAT_01d51b08 = DAT_01d51b08 | 0x80000000;
            FUN_01bf01d6(pppppppiVar5);
            if (*(char *)((int)param_2 + 0x79) != '\0') {
              FUN_019b6c00(pppppppiVar26);
            }
            pppppppiVar12 = (int *******)0x0;
            if (local_48 != (int *******)&DAT_80000000) {
              pppppppiVar12 = (int *******)&local_48;
            }
            FUN_019b68b4(&local_290,param_2,&local_2b8,pppppppiVar12);
            local_ec = (int *******)0x58454f4e;
            local_f0 = (int *******)0x16000000;
            local_140 = local_290;
            if (((uint)local_290 & 0xff) == 0) {
              local_f0 = (int *******)
                         ((int)local_28c << 0x18 | ((uint)local_28c >> 8 & 0xff) << 0x10 |
                          ((uint)local_28c >> 0x10 & 0xff) << 8 | (uint)local_28c >> 0x18);
            }
            local_13c = local_28c;
            pppppppiVar12 = (int *******)FUN_01bf053e(pppppppiVar26,&local_f0,8);
            if (pppppppiVar12 == (int *******)&DAT_ffffffff) {
              puVar11 = (undefined4 *)FUN_01be3244();
              local_28c = (int *******)*puVar11;
              local_290 = (int *******)((uint)local_290 & 0xffffff00);
              FUN_0197acb4(&local_290);
              FUN_0197a828(&local_290,auStack_29,&DAT_00526705,0x9d);
              if (((uint)local_290 & 0xff) != 4) {
                FUN_0197acb4(&local_290);
              }
                    /* WARNING: Subroutine does not return */
              FUN_0197a954();
            }
            local_290 = (int *******)CONCAT31(local_290._1_3_,4);
            local_28c = pppppppiVar12;
            FUN_019b6d48(&local_290);
            FUN_01bf01c2(1);
LAB_019b6308:
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d27aa8);
          }
          DataMemoryBarrier(0xb);
          do {
            pppppppiVar13 = (int *******)((int)DAT_01d51a70 + -1);
            bVar34 = (bool)hasExclusiveAccess(0x1d51a70);
          } while (!bVar34);
          DAT_01d51a70 = pppppppiVar13;
          if (((uint)pppppppiVar13 & 0xbfffffff) == 0x80000000) {
            FUN_019a33c4(&DAT_01d51a70);
          }
          FUN_01bf01d6(pppppppiVar26);
          ppppppiVar27 = (int ******)0xffffffff;
          if (*(char *)((int)param_2 + 0x79) == '\x01') {
            local_e4 = (int *******)0x0;
            local_278 = (int *******)0x0;
            local_e8 = (int *******)0x0;
            local_ec = (int *******)0x0;
            local_f0 = (int *******)0x0;
            local_13c = (int *******)0x0;
            local_28c = (int *******)0x0;
            local_290 = (int *******)0x0;
            local_27c = (int *******)&DAT_00000010;
            local_288 = (int *******)&local_140;
            local_280 = (int *******)&local_f0;
            local_140 = (int *******)&DAT_00000001;
            local_284 = (int *******)&DAT_00000001;
            do {
              iVar28 = FUN_01be8eca(pppppppiVar5,&local_290,0x40000000);
              if (iVar28 != -1) {
                ppppppiVar27 = (int ******)0xffffffff;
                if ((&DAT_0000000b < local_27c) && (local_280 != (int *******)0x0)) {
                  ppppppiVar31 = local_280[1];
                  bVar34 = ppppppiVar31 == (int ******)0x1;
                  if (bVar34) {
                    ppppppiVar31 = local_280[2];
                  }
                  if ((bVar34 && ppppppiVar31 == (int ******)0x1) &&
                     (*local_280 == (int ******)0x10)) {
                    ppppppiVar27 = local_280[3];
                  }
                }
                goto LAB_019b5868;
              }
              piVar6 = (int *)FUN_01be3244();
            } while (*piVar6 == 4);
            ppppppiVar27 = (int ******)0xffffffff;
          }
LAB_019b5868:
          local_e4 = (int *******)((uint)ppppppiVar27 | (int)ppppppiVar27 >> 0x1f);
          local_f0 = (int *******)0x0;
          local_54 = (int *******)0x0;
          local_58 = (int *******)0x0;
          local_e8 = pppppppiVar9;
          while( true ) {
            iVar28 = FUN_01be8da0(pppppppiVar5,&local_58,8,0);
            pppppppiVar26 = local_58;
            if (iVar28 != -1) break;
            piVar6 = (int *)FUN_01be3244();
            if (*piVar6 != 4) {
              local_140 = (int *******)0x0;
              pppppppiVar12 = (int *******)&local_290;
              local_13c = (int *******)*piVar6;
              FUN_019b45b4(pppppppiVar12,&local_f0);
              if ((char)local_290 == '\x04') {
                puVar15 = &DAT_01d27b04;
                puVar10 = &DAT_00580b99;
                local_28c = (int *******)&LAB_019ac374;
                local_290 = (int *******)&local_140;
              }
              else {
                FUN_0197acb4(&local_290);
                pppppppiVar12 = (int *******)0x4f;
                puVar15 = &DAT_01d27b14;
                puVar10 = &DAT_00526753;
              }
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(puVar10,pppppppiVar12,puVar15);
            }
          }
          if (iVar28 != 0) {
            if (iVar28 == 8) {
              local_29c = 4;
              local_2a0 = (uint)&local_58 | 4;
              if (local_54 != (int *******)0x58454f4e) {
                local_28c = (int *******)FUN_019b6d58;
                local_290 = (int *******)&local_58;
                FUN_019b6e88(&local_2a0,&local_290);
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xfdee,0x19b6334);
                (*pcVar1)();
              }
              FUN_019b45b4(&local_290,&local_f0);
              if ((char)local_290 == '\x04') {
                param_1[2] = (int)pppppppiVar26 << 0x18 | ((uint)pppppppiVar26 >> 8 & 0xff) << 0x10
                             | ((uint)pppppppiVar26 >> 0x10 & 0xff) << 8 |
                             (uint)pppppppiVar26 >> 0x18;
                *(undefined1 *)(param_1 + 1) = 0;
                bVar34 = true;
                *param_1 = 2;
                if (local_e4 != (int *******)&DAT_ffffffff) {
                  FUN_01bf01d6();
                }
                goto LAB_019b59d0;
              }
              FUN_0197acb4(&local_290);
              puVar15 = &DAT_01d27ac4;
            }
            else {
              FUN_019b45b4(&local_290,&local_f0);
              if ((char)local_290 == '\x04') {
                uVar22 = 0x3d;
                puVar15 = &DAT_01d27ae4;
                puVar10 = &DAT_0052677a;
                goto LAB_019b6168;
              }
              FUN_0197acb4(&local_290);
              puVar15 = &DAT_01d27af4;
            }
            uVar22 = 0x4f;
            puVar10 = &DAT_00526753;
LAB_019b6168:
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(puVar10,uVar22,puVar15);
          }
          local_290 = local_f0;
          local_28c = local_ec;
          local_288 = local_e8;
          local_284 = local_e4;
          local_280 = local_38;
          local_27c = local_34;
          local_278 = local_30;
          *param_1 = local_f0;
          param_1[1] = local_ec;
          param_1[2] = local_e8;
          bVar34 = false;
          param_1[3] = local_e4;
          param_1[4] = local_38;
          param_1[5] = local_34;
          param_1[6] = local_30;
        }
LAB_019b59d0:
        FUN_01bf01d6(pppppppiVar5);
        if (&DAT_00000001 < pppppppiVar12) {
          FUN_01bf01d6(pppppppiVar29);
        }
        if (&DAT_00000001 < pppppppiVar17) {
          FUN_01bf01d6(pppppppiVar24);
        }
        if (&DAT_00000001 < pppppppiVar4) {
          FUN_01bf01d6(pppppppiVar21);
        }
        if (bVar34) goto LAB_019b5a18;
      }
    }
  }
LAB_019b5480:
  if (local_48 == (int *******)&DAT_80000000) {
    return;
  }
LAB_019b5350:
  FUN_019af6f4(&local_48);
  return;
code_r0x019b4d24:
  local_2c4 = (int *******)((int)local_2c4 + -1);
  pppppppiVar21 = (int *******)pppppppiVar21[(int)(ppppppiVar33 + 0x11)];
  goto LAB_019b4c8c;
}

