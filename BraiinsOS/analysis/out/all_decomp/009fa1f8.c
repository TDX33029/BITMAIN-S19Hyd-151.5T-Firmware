// FUN_009fa1f8 @ 009fa1f8 size=2356 calls_out=11 calls_in=1
// strings: Local time out of range for `NaiveDateTime`struct WorkSolverInfo with 14 elements

/* WARNING: Type propagation algorithm not settling */

void FUN_009fa1f8(uint *param_1,int param_2,int param_3,undefined4 *param_4)

{
  char *pcVar1;
  undefined1 uVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  code *pcVar16;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  code *local_34;
  undefined4 *local_30;
  code *local_2c;
  
  if (param_4 != (undefined4 *)0x0) {
    piVar3 = (int *)(param_2 + 0x30);
    do {
      puVar11 = param_4;
      iVar12 = param_3;
      pcVar16 = (code *)param_4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x24)) {
      case 0:
        uVar15 = *(uint *)(param_2 + 0x40);
        uVar14 = *(uint *)(param_2 + 0x28);
        uVar4 = uVar15 + (int)param_4;
        while (uVar14 < uVar4) {
          puVar10 = (undefined4 *)(uVar14 - uVar15);
          if (uVar14 < uVar15) {
            puVar10 = (undefined4 *)0x0;
          }
          if (*(int *)(param_2 + 0x2c) != -1) {
            if (puVar11 < puVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,puVar10,puVar11,&DAT_0186b79c);
            }
            FUN_009f4628(&local_38,*(int *)(param_2 + 0x2c),iVar12,puVar10);
            if ((char)local_38 != '\x04') goto LAB_009fa930;
          }
          FUN_009fabf0(&local_38,param_2);
          if ((char)local_38 != '\x04') goto LAB_009fa930;
          if (puVar11 < puVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(puVar10,puVar11,puVar11,&DAT_0186b7ac);
          }
          uVar15 = *(uint *)(param_2 + 0x40);
          puVar11 = (undefined4 *)((int)puVar11 - (int)puVar10);
          iVar12 = iVar12 + (int)puVar10;
          uVar4 = uVar15 + (int)puVar11;
        }
        iVar7 = *(int *)(param_2 + 0x2c);
        *(uint *)(param_2 + 0x40) = uVar4;
joined_r0x009fa5c0:
        if (iVar7 != -1) {
          FUN_009f4628(&local_38,iVar7,iVar12,puVar11);
          if ((char)local_38 != '\x04') goto LAB_009fa930;
        }
        break;
      case 1:
        uVar15 = *(uint *)(param_2 + 0x28);
        do {
          do {
            puVar10 = (undefined4 *)0x0;
            do {
              if (puVar11 == puVar10) {
                iVar7 = *(int *)(param_2 + 0x2c);
                goto joined_r0x009fa5c0;
              }
              pcVar1 = (char *)(iVar12 + (int)puVar10);
              puVar10 = (undefined4 *)((int)puVar10 + 1);
            } while (*pcVar1 != '\n');
            if (*(int *)(param_2 + 0x2c) != -1) {
              if (puVar11 < puVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(0,puVar10,puVar11,&DAT_0186b7bc);
              }
              FUN_009f4628(&local_38,*(int *)(param_2 + 0x2c),iVar12,puVar10);
              if ((char)local_38 != '\x04') goto LAB_009fa930;
            }
            uVar4 = *(int *)(param_2 + 0x40) + 1;
            *(uint *)(param_2 + 0x40) = uVar4;
            if (puVar11 < puVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(puVar10,puVar11,puVar11,&DAT_0186b7cc);
            }
            iVar12 = iVar12 + (int)puVar10;
            puVar11 = (undefined4 *)((int)puVar11 - (int)puVar10);
          } while (uVar4 < uVar15);
          FUN_009fabf0(&local_38,param_2);
        } while ((char)local_38 == '\x04');
LAB_009fa930:
        pcVar16 = local_34;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((uint)local_38 & 0xff) {
        case 0:
          if (local_34 != (code *)&DAT_00000004) {
LAB_009fa9e0:
            *param_1 = (uint)local_38;
            param_1[1] = (uint)local_34;
            return;
          }
          break;
        case 1:
          if (((uint)local_38 & 0xff00) != 0x2300) goto LAB_009fa9e0;
          break;
        case 2:
          if (*(char *)((int)local_34 + 8) != '#') goto LAB_009fa9e0;
          break;
        case 3:
          if (*(char *)((int)local_34 + 8) != '#') goto LAB_009fa9e0;
          puVar11 = *(undefined4 **)((int)local_34 + 4);
          uVar13 = *(undefined4 *)local_34;
          pcVar8 = (code *)*puVar11;
          if (pcVar8 != (code *)0x0) {
            (*pcVar8)(uVar13);
          }
          if (puVar11[1] != 0) {
            thunk_FUN_016d3fb4(uVar13);
          }
          thunk_FUN_016d3fb4(pcVar16);
          break;
        case 4:
          goto switchD_009fa944_caseD_4;
        }
        goto LAB_009fa240;
      case 2:
        uVar2 = *(undefined1 *)(param_2 + 0x25);
        FUN_00f6f318(&local_58);
        FUN_00f6c49c(&local_4c,local_58,local_54);
        uVar13 = local_48;
        if (local_4c != 0) {
          if (local_4c == 2) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_0035d71c,0x25,&DAT_018802dc);
          }
          local_2c = FUN_00f6c370;
          local_34 = FUN_00f6c370;
          local_38 = &local_40;
          local_40 = local_48;
          local_30 = &local_3c;
          local_3c = local_44;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_005752dd,&local_38,&DAT_018802dc);
        }
        local_68 = local_58;
        uStack_64 = local_54;
        uStack_60 = uStack_50;
        if (*piVar3 != 0) {
          uVar9 = *(undefined4 *)(param_2 + 0x3c);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(uVar2) {
          case 0:
            FUN_00f6bd20(&local_38,&local_68,local_48);
            pcVar8 = local_34;
            FUN_00f6bd20(&local_38,piVar3,uVar9);
            if ((uint)pcVar8 / 0xe10 == (uint)local_34 / 0xe10) {
              FUN_00f6bd20(&local_38,&local_68,uVar13);
              puVar11 = local_38;
              uVar15 = ((uint)local_38 & 0x1fff) >> 3;
              if (0x2dc < uVar15) goto LAB_009fab20;
              FUN_00f6bd20(&local_38,piVar3,uVar9);
              uVar4 = ((uint)local_38 & 0x1fff) >> 3;
              if (0x2dc < uVar4) {
LAB_009fab34:
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar4,0x2dd,&DAT_01880224);
              }
              if (((((uint)local_38 >> 3) + (uint)(byte)""[uVar4] ^
                   ((uint)puVar11 >> 3) + (uint)(byte)""[uVar15]) & 0x3e) == 0) {
                FUN_00f6bd20(&local_38,&local_68,uVar13);
                uVar15 = ((uint)local_38 & 0x1fff) >> 3;
                if (0x2dc < uVar15) goto LAB_009fab20;
                FUN_00f6bd20(&local_38,piVar3,uVar9);
                uVar4 = ((uint)local_38 & 0x1fff) >> 3;
                if (0x2dc < uVar4) goto LAB_009fab34;
                uVar15 = uVar4 + (byte)""[uVar4] ^ uVar15 + (byte)""[uVar15];
                goto joined_r0x009fa648;
              }
            }
            break;
          case 1:
            FUN_00f6b678(&local_38,&local_68,local_48);
            puVar11 = local_38;
            if ((local_38 == (undefined4 *)0x0) ||
               (FUN_00f6b678(&local_38,piVar3,uVar9), local_38 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8("Local time out of range for `NaiveDateTime`struct WorkSolverInfo with 14 elements"
                           ,0x2b,&DAT_0187c534);
            }
            if ((int)puVar11 <= (int)local_38) goto LAB_009fa8e8;
            break;
          case 2:
            FUN_00f6bd20(&local_38,&local_68,local_48);
            uVar15 = (uint)local_38 & 7;
            if (uVar15 < 3) {
              uVar15 = uVar15 + 7;
            }
            uVar15 = uVar15 + (((uint)local_38 & 0x1fff) >> 4);
            iVar12 = (int)local_38 >> 0xd;
            if (uVar15 < 7) {
              uVar4 = (iVar12 + -1) % 400;
              puVar5 = &DAT_0035d4d3;
              if ((int)uVar4 < 0) {
                puVar5 = &DAT_0035d663;
              }
              uVar15 = 0x406U >> (puVar5[uVar4] & 0x1f) & 1 | 0x34;
            }
            else {
              uVar15 = uVar15 / 7;
              if ((0x406U >> ((uint)local_38 & 0xf) & 1 | 0x34) < uVar15) {
                iVar12 = iVar12 + 1;
                uVar15 = 1;
              }
              uVar4 = iVar12 % 400;
            }
            if ((int)uVar4 < 0) {
              uVar4 = uVar4 + 400;
            }
            if (399 < uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar4,400,&DAT_01880254);
            }
            FUN_00f6bd20(&local_38,piVar3,uVar9);
            uVar14 = (uint)local_38 & 7;
            if (uVar14 < 3) {
              uVar14 = uVar14 + 7;
            }
            uVar14 = uVar14 + (((uint)local_38 & 0x1fff) >> 4);
            iVar12 = (int)local_38 >> 0xd;
            if (uVar14 < 7) {
              uVar6 = (iVar12 + -1) % 400;
              puVar5 = &DAT_0035d4d3;
              if ((int)uVar6 < 0) {
                puVar5 = &DAT_0035d663;
              }
              uVar14 = 0x406U >> (puVar5[uVar6] & 0x1f) & 1 | 0x34;
            }
            else {
              uVar14 = uVar14 / 7;
              if ((0x406U >> ((uint)local_38 & 0xf) & 1 | 0x34) < uVar14) {
                iVar12 = iVar12 + 1;
                uVar14 = 1;
              }
              uVar6 = iVar12 % 400;
            }
            if ((int)uVar6 < 0) {
              uVar6 = uVar6 + 400;
            }
            if (399 < uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar6,400,&DAT_01880254);
            }
            if (((((uint)(byte)(&DAT_0035d4d3)[uVar6] | uVar14 << 4) ^
                 ((uint)(byte)(&DAT_0035d4d3)[uVar4] | uVar15 << 4)) & 0x3f0) == 0)
            goto switchD_009fa398_caseD_4;
            break;
          case 3:
            FUN_00f6bd20(&local_38,&local_68,local_48);
            uVar15 = ((uint)local_38 & 0x1fff) >> 3;
            if (0x2dc < uVar15) {
LAB_009fab20:
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar15,0x2dd,&DAT_01880224);
            }
            FUN_00f6bd20(&local_38,piVar3,uVar9);
            uVar4 = ((uint)local_38 & 0x1fff) >> 3;
            if (0x2dc < uVar4) goto LAB_009fab34;
            uVar15 = uVar4 + (byte)""[uVar4] ^ uVar15 + (byte)""[uVar15];
joined_r0x009fa648:
            if (uVar15 < 0x40) {
              FUN_00f6bd20(&local_38,&local_68,uVar13);
              puVar11 = local_38;
              FUN_00f6bd20(&local_38,piVar3,uVar9);
              if (((uint)local_38 ^ (uint)puVar11) < 0x2000) goto LAB_009fa8e8;
            }
            break;
          case 4:
switchD_009fa398_caseD_4:
            FUN_00f6bd20(&local_38,&local_68,uVar13);
            puVar11 = local_38;
            FUN_00f6bd20(&local_38,piVar3,uVar9);
            if ((int)puVar11 >> 0xd <= (int)local_38 >> 0xd) goto LAB_009fa8e8;
          }
          FUN_009fabf0(&local_38,param_2);
          if ((char)local_38 != '\x04') goto LAB_009fa930;
        }
LAB_009fa8e8:
        if (*(int *)(param_2 + 0x2c) != -1) {
          FUN_009f4628(&local_38,*(int *)(param_2 + 0x2c),param_3,param_4);
          if ((char)local_38 != '\x04') goto LAB_009fa930;
          *(undefined4 *)(param_2 + 0x3c) = uVar13;
          *piVar3 = local_68;
          *(undefined4 *)(param_2 + 0x34) = uStack_64;
          *(undefined4 *)(param_2 + 0x38) = uStack_60;
        }
        break;
      case 3:
        if (*(uint *)(param_2 + 0x28) < *(uint *)(param_2 + 0x40)) {
          FUN_009fabf0(&local_38,param_2);
          if ((char)local_38 != '\x04') goto LAB_009fa930;
        }
        if (*(int *)(param_2 + 0x2c) != -1) {
          FUN_009f4628(&local_38,*(int *)(param_2 + 0x2c),param_3,param_4);
          if ((char)local_38 != '\x04') goto LAB_009fa930;
        }
        *(undefined1 **)(param_2 + 0x40) = (undefined1 *)(*(int *)(param_2 + 0x40) + (int)param_4);
        goto LAB_009fa238;
      case 4:
        if (*(int *)(param_2 + 0x2c) != -1) {
          FUN_009f4628(&local_38,*(int *)(param_2 + 0x2c),param_3,param_4);
          if ((char)local_38 != '\x04') goto LAB_009fa930;
        }
      }
switchD_009fa944_caseD_4:
      if (pcVar16 == (code *)0x0) {
        *param_1 = 2;
        param_1[1] = (uint)&DAT_018aeae8;
        return;
      }
      if (param_4 < pcVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(pcVar16,param_4,param_4,&DAT_018aeb00);
      }
LAB_009fa238:
      param_3 = param_3 + (int)pcVar16;
      param_4 = (undefined4 *)((int)param_4 - (int)pcVar16);
LAB_009fa240:
    } while (param_4 != (undefined4 *)0x0);
  }
  *(undefined1 *)param_1 = 4;
  return;
}

