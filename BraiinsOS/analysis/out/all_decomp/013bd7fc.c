// FUN_013bd7fc @ 013bd7fc size=1152 calls_out=15 calls_in=1
// strings: 

void FUN_013bd7fc(int *param_1,int *param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined2 *puVar9;
  uint uVar10;
  int unaff_r4;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
  bool bVar20;
  undefined4 *local_84;
  int local_80;
  uint local_7c;
  undefined2 local_78;
  undefined1 local_76 [2];
  undefined2 local_74;
  undefined1 local_72;
  int *local_70;
  undefined4 *local_6c;
  int local_68;
  byte local_64;
  undefined2 local_63;
  int *local_60;
  undefined4 *puStack_5c;
  int iStack_58;
  uint uStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 local_48;
  int *local_40;
  undefined4 *local_3c;
  int *local_38;
  undefined4 local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  if (param_3 == 1) {
    puVar8 = (uint *)*param_2;
    uVar7 = *puVar8;
    while (uVar7 == 5) {
      puVar8 = (uint *)puVar8[1];
      uVar7 = *puVar8;
    }
    if ((4 < uVar7) && (uVar7 == 6)) {
      piVar19 = (int *)puVar8[3];
      iVar18 = (int)piVar19 * 0x1c;
      if ((int *)0x4924924 < piVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0);
      }
      uVar7 = puVar8[2];
      if (iVar18 == 0) {
        local_6c = (undefined4 *)&DAT_00000004;
        local_70 = (int *)0x0;
      }
      else {
        local_6c = (undefined4 *)thunk_FUN_016d4a50(iVar18);
        local_70 = piVar19;
        if (local_6c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,iVar18);
        }
      }
      piVar17 = (int *)0x0;
      if (piVar19 != (int *)0x0) {
        piVar17 = (int *)0x0;
        puVar6 = local_6c;
        do {
          FUN_013be128(&local_40,uVar7);
          piVar17 = (int *)((int)piVar17 + 1);
          uVar7 = uVar7 + 0x1c;
          *puVar6 = local_40;
          puVar6[1] = local_3c;
          puVar6[2] = local_38;
          puVar6[3] = local_34;
          puVar6[4] = iStack_30;
          puVar6[5] = iStack_2c;
          puVar6[6] = iStack_28;
          puVar6 = puVar6 + 7;
        } while (piVar19 != piVar17);
        piVar17 = piVar19;
      }
      local_40 = local_70;
      local_3c = local_6c;
      local_38 = piVar17;
      FUN_013e317c(&local_60,&local_40);
      local_40 = local_60;
      local_3c = puStack_5c;
      local_38 = (int *)iStack_58;
      local_34 = uStack_54;
      iStack_30 = iStack_50;
      iStack_2c = iStack_4c;
      local_60 = (int *)0x0;
      FUN_013e0514(&local_60);
      FUN_013e0a18(&local_60);
      thunk_FUN_016d3fb4(local_48);
      uVar7 = local_34;
      puVar6 = local_3c;
      if (local_40 == (int *)&DAT_00000006) {
        if (local_3c != (undefined4 *)&DAT_80000000) {
          local_84 = local_3c;
          local_80 = (int)local_38;
          local_7c = local_34;
          if (1 < local_34) {
            uVar15 = 1;
            do {
              uVar10 = local_7c;
              if (local_7c <= uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar15,local_7c,&DAT_01893e70);
              }
              iVar18 = local_80 + uVar15 * 0x1c;
              FUN_013bdeb4(&local_40,iVar18);
              piVar17 = local_38;
              puVar3 = local_3c;
              piVar19 = local_40;
              if ((local_34 & 0xff) != 2) {
                local_78 = local_34._1_2_;
                local_76[0] = local_34._3_1_;
                if ((local_34 & 1) != 0) {
                  if (uVar10 < uVar15) {
                    FUN_0060297c(uVar15,uVar10,&DAT_01893e80);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)software_udf(0xfdee,0x13bdc7c);
                    (*pcVar1)();
                  }
                  piVar12 = (int *)(uVar10 - uVar15);
                  iVar5 = (int)piVar12 * 0x1c;
                  iVar4 = 4;
                  if ((piVar12 != (int *)0x0) && (iVar4 = FUN_0063f47c(iVar5,4), iVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600af4(4,iVar5);
                  }
                  local_7c = uVar15;
                  local_40 = piVar12;
                  local_3c = (undefined4 *)iVar4;
                  local_38 = piVar12;
                  FUN_016dd1aa(iVar4,iVar18,iVar5);
                  FUN_013e317c(&local_60,&local_40);
                  FUN_013e317c(&local_40,&local_84);
                  FUN_013bdeb4(&local_70,&local_60);
                  bVar20 = local_64 != 2;
                  piVar12 = piVar19;
                  puVar6 = puVar3;
                  if (bVar20) {
                    if ((local_64 & 1) == 0) {
                      local_72 = local_76[0];
                      local_74 = local_78;
                      DataMemoryBarrier(0xb);
                      do {
                        iVar18 = *local_70;
                        bVar20 = (bool)hasExclusiveAccess(local_70);
                      } while (!bVar20);
                      *local_70 = iVar18 + -1;
                      bVar20 = false;
                      if (iVar18 == 1) {
                        DataMemoryBarrier(0xb);
                        FUN_0089ddfc();
                      }
LAB_013bdb5c:
                      *param_1 = (int)local_40;
                      param_1[1] = (int)local_3c;
                      param_1[2] = (int)local_38;
                      param_1[3] = local_34;
                      param_1[4] = iStack_30;
                      param_1[5] = iStack_2c;
                      param_1[6] = iStack_28;
                      *(undefined1 *)(param_1 + 10) = 1;
                      param_1[7] = (int)piVar12;
                      param_1[8] = (int)puVar6;
                      param_1[9] = (int)piVar17;
                      *(undefined1 *)((int)param_1 + 0x2b) = local_72;
                      *(undefined2 *)((int)param_1 + 0x29) = local_74;
                      FUN_013e0514(&local_60);
                      FUN_013bdd98(&local_60);
                      thunk_FUN_016d3fb4(local_48);
                      if (!bVar20) {
                        return;
                      }
                      DataMemoryBarrier(0xb);
                      do {
                        iVar18 = *piVar19;
                        bVar20 = (bool)hasExclusiveAccess(piVar19);
                      } while (!bVar20);
                      *piVar19 = iVar18 + -1;
                      if (iVar18 == 1) {
                        DataMemoryBarrier(0xb);
                        FUN_0089ddfc(piVar19,puVar3);
                        return;
                      }
                      return;
                    }
                    puVar9 = &local_63;
                    piVar12 = local_70;
                    puVar6 = local_6c;
                    piVar17 = (int *)local_68;
                  }
                  else {
                    puVar9 = &local_78;
                  }
                  local_72 = *(undefined1 *)(puVar9 + 1);
                  local_74 = *puVar9;
                  goto LAB_013bdb5c;
                }
                DataMemoryBarrier(0xb);
                do {
                  iVar18 = *local_40;
                  bVar20 = (bool)hasExclusiveAccess(local_40);
                } while (!bVar20);
                *local_40 = iVar18 + -1;
                if (iVar18 == 1) {
                  DataMemoryBarrier(0xb);
                  FUN_0089ddfc(local_40);
                }
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 != uVar7);
          }
          iVar18 = local_80;
          *param_1 = 8;
          FUN_0135fa60(local_80,local_7c);
          if (puVar6 == (undefined4 *)0x0) {
            return;
          }
          if (iVar18 == 0) {
            return;
          }
          iVar5 = FUN_016d3bc8();
          uVar7 = *(byte *)(iVar18 + -3) & 0x1f;
          if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
             (uVar15 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar4 = uVar15 - 0x10, uVar15 == 0)) {
            iVar4 = (uint)*(ushort *)
                           (&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar15 = (uint)(*(byte *)(iVar18 + -3) >> 5);
          iVar16 = *(int *)(iVar5 + 8) + 0x10;
          iVar13 = iVar4 * uVar7 + iVar4 + -4;
          iVar4 = iVar16 + iVar13;
          if (4 < uVar15) {
            if (uVar15 != 5) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar1)();
            }
            uVar15 = *(uint *)(iVar4 + -4);
            if (uVar15 < 5) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d4022);
              (*pcVar1)();
            }
            if (*(char *)(iVar4 + -5) != '\0') {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d402a);
              (*pcVar1)();
            }
          }
          if ((uint)(iVar4 - iVar18) < uVar15) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar1)();
          }
          if (*(char *)(iVar4 - uVar15) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d403a);
            (*pcVar1)();
          }
          if (*(char *)(iVar16 + iVar13) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4040);
            (*pcVar1)();
          }
          bVar2 = *(byte *)(iVar5 + 0x14);
          uVar15 = 1 << uVar7;
          *(undefined1 *)(iVar18 + -3) = 0xff;
          *(undefined2 *)(iVar18 + -2) = 0;
          do {
            uVar14 = *(uint *)(iVar5 + 0x10);
            uVar10 = *(uint *)(iVar5 + 0xc) | uVar14;
            if ((uVar15 & uVar10) != 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar1)();
            }
            if ((uVar14 == 0) || (uVar10 + uVar15 == (2 << (bVar2 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&iStack_28,iVar5,uVar7);
              FUN_016dddc0(&DAT_018ddd48);
              if (unaff_r4 == 0) {
                return;
              }
              puVar6 = (undefined4 *)FUN_016d2bc8();
              uVar11 = *puVar6;
              FUN_016d6ac4(iStack_28,unaff_r4);
              *puVar6 = uVar11;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar5 + 0x10) = uVar15 + uVar14;
              return;
            }
            puVar8 = (uint *)(iVar5 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar8);
              uVar10 = *puVar8;
              if (uVar14 != uVar10) goto LAB_016d409c;
              bVar20 = (bool)hasExclusiveAccess(puVar8);
            } while (!bVar20);
            *puVar8 = uVar15 + uVar14;
LAB_016d409c:
            DataMemoryBarrier(0x1b);
            if (uVar14 == uVar10) {
              return;
            }
          } while( true );
        }
      }
      else {
        FUN_013bdd98(&local_40);
      }
    }
  }
  *param_1 = 8;
  return;
}

