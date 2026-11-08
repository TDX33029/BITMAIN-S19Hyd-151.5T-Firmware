// FUN_0150d1e4 @ 0150d1e4 size=1792 calls_out=14 calls_in=1
// strings: 

void FUN_0150d1e4(int *param_1,int *param_2)

{
  ushort uVar1;
  code *pcVar2;
  byte bVar3;
  short sVar4;
  int *piVar5;
  bool bVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  uint extraout_r2;
  uint uVar13;
  int unaff_r4;
  uint uVar14;
  int iVar15;
  int *piVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *puVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  char cVar24;
  char *pcVar25;
  char *pcVar26;
  int unaff_r8;
  uint *puVar27;
  uint local_b0;
  uint local_a0;
  uint local_9c;
  int *local_98;
  char *local_88;
  int *local_84;
  int *local_80;
  char *local_78;
  char *local_74;
  char *local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  int *local_60;
  undefined4 local_5c;
  int *local_58;
  int *local_54;
  char *local_4c;
  int *local_48;
  int *local_44;
  undefined1 local_40 [4];
  int *local_3c;
  int *local_38;
  char local_34;
  byte bStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  ushort local_30;
  ushort uStack_2e;
  int *local_2c;
  int *local_28;
  
  FUN_015407ec(&local_34);
  piVar16 = local_28;
  piVar7 = local_2c;
  iVar9 = CONCAT22(uStack_2e,local_30);
  if (CONCAT13(uStack_31,CONCAT12(uStack_32,CONCAT11(bStack_33,local_34))) == 1) {
    param_1[2] = (int)local_2c;
    *param_1 = -0x80000000;
    param_1[1] = iVar9;
    param_1[3] = (int)local_28;
    return;
  }
  FUN_0152d84c(&local_34,&DAT_005654a0,param_2);
  if (local_34 == '\x18') {
    local_74 = (char *)CONCAT22(uStack_2e,local_30);
    pcVar12 = (char *)param_2[1];
    pcVar25 = (char *)param_2[2];
    if (local_74 <= pcVar12 + -(int)pcVar25) {
      pcVar10 = (char *)((int)pcVar25 + (int)local_74);
      param_2[2] = (int)pcVar10;
      if ((CARRY4((uint)pcVar25,(uint)local_74)) || (pcVar12 < pcVar10)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(pcVar25,pcVar10,pcVar12,&DAT_018a78f8);
      }
      iVar15 = 4;
      local_78 = (char *)(*param_2 + (int)pcVar25);
      uVar18 = 0;
      local_70 = (char *)0x0;
      local_64 = 0;
      local_68 = 4;
      local_6c = 0;
      if (local_74 == (char *)0x0) {
        uVar14 = 0;
        local_6c._0_1_ = 0;
      }
      else {
        local_b0 = 0x56;
        do {
          uVar18 = local_64;
          FUN_0152a85c(&local_34,&local_78);
          pcVar12 = local_74;
          if (local_34 != '\x18') {
            local_80 = local_2c;
            local_b0 = (uint)uStack_2e;
            pcVar25 = (char *)(uint)local_30;
            param_2 = (int *)(uint)CONCAT11(uStack_31,uStack_32);
            local_9c = (uint)bStack_33;
            cVar24 = local_34;
            goto LAB_0150d820;
          }
          if ((uint)((int)local_74 - (int)local_70) < 2) {
            local_80 = (int *)0x3;
            pcVar25 = &DAT_00410f57;
            local_b0 = 0x41;
            local_9c = extraout_r2;
            cVar24 = '\f';
            goto LAB_0150d820;
          }
          sVar4 = CONCAT11(uStack_31,uStack_32);
          piVar5 = (int *)CONCAT22(local_30,CONCAT11(uStack_31,uStack_32));
          pcVar11 = local_70 + 2;
          pcVar10 = local_70;
          if (((char *)0xfffffffd < local_70) || (local_74 < pcVar11)) {
LAB_0150d8b4:
            local_70 = pcVar11;
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(pcVar10,local_70,local_74,&DAT_018a78f8);
          }
          uVar1 = *(ushort *)(local_78 + (int)local_70);
          uVar14 = (uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10;
          if ((uint)((int)local_74 - (int)pcVar11) < uVar14 >> 0x10) {
            local_b0 = (uint)param_2 >> 0x10;
            local_9c = (uint)local_88 >> 8;
            local_80 = (int *)0x0;
            pcVar25 = (char *)param_2;
            param_2 = (int *)((uint)local_88 >> 0x10);
            cVar24 = '\v';
            local_70 = pcVar11;
            goto LAB_0150d820;
          }
          param_2 = (int *)(uVar14 >> 0x10);
          pcVar26 = pcVar11 + (int)param_2;
          if ((CARRY4((uint)pcVar11,(uint)param_2)) || (local_74 < pcVar26)) {
            pcVar10 = pcVar11;
            pcVar11 = pcVar26;
            goto LAB_0150d8b4;
          }
          local_88 = local_78 + (int)pcVar11;
          local_44 = (int *)0x0;
          local_70 = pcVar26;
          local_4c = local_88;
          local_48 = param_2;
          if (sVar4 != 0xd) {
            if (sVar4 == 0x16) {
              FUN_01507584(&local_34,&local_4c);
              piVar8 = (int *)CONCAT22(uStack_2e,local_30);
              piVar21 = (int *)0x80000003;
              local_84 = local_28;
              pcVar25 = (char *)local_2c;
              if (CONCAT13(uStack_31,CONCAT12(uStack_32,CONCAT11(bStack_33,local_34))) != 0)
              goto LAB_0150d6f0;
              goto LAB_0150d544;
            }
            if (sVar4 != 0x1e) {
              local_44 = param_2;
              if (uVar1 == 0) {
                piVar8 = (int *)&DAT_00000001;
                piVar21 = (int *)0x0;
              }
              else {
                piVar8 = (int *)thunk_FUN_016d4a50(param_2);
                if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(1,param_2);
                }
                piVar21 = param_2;
              }
              FUN_016dd1aa(piVar8,local_88,param_2);
              pcVar25 = (char *)param_2;
              local_84 = piVar5;
              goto LAB_0150d544;
            }
            FUN_01509810(&local_34,&local_4c);
            piVar8 = (int *)CONCAT22(uStack_2e,local_30);
            if (CONCAT13(uStack_31,CONCAT12(uStack_32,CONCAT11(bStack_33,local_34))) != 0)
            goto LAB_0150d6f0;
            local_38 = local_28;
            local_3c = local_2c;
            if (local_28 != (int *)0x0) {
              piVar21 = (int *)0x80000002;
              local_84 = local_28;
              pcVar25 = (char *)local_2c;
              goto LAB_0150d544;
            }
            FUN_0150d18c(local_40);
            local_80 = (int *)&DAT_00000012;
            cVar24 = '\x16';
            pcVar25 = "DistinguishedNames";
            local_b0 = 0x40;
LAB_0150d818:
            param_2 = local_98;
            goto LAB_0150d820;
          }
          FUN_0150a0ec(&local_34,&local_4c);
          piVar8 = (int *)CONCAT22(uStack_2e,local_30);
          if (CONCAT13(uStack_31,CONCAT12(uStack_32,CONCAT11(bStack_33,local_34))) != 0) {
LAB_0150d6f0:
            local_b0 = (uint)local_2c >> 0x10;
            local_9c = (uint)piVar8 >> 8;
            pcVar25 = (char *)local_2c;
            param_2 = (int *)((uint)piVar8 >> 0x10);
            cVar24 = (char)piVar8;
            local_80 = local_28;
            goto LAB_0150d820;
          }
          piVar21 = (int *)0x80000001;
          if (local_28 == (int *)0x0) {
            if (piVar8 != (int *)0x0) {
              thunk_FUN_016d3fb4();
            }
            local_80 = local_84;
            local_b0 = local_a0;
            param_2 = local_98;
            cVar24 = '\x0e';
            goto LAB_0150d820;
          }
          local_84 = local_28;
          pcVar25 = (char *)local_2c;
LAB_0150d544:
          if (local_44 < local_48) {
            pcVar12 = (char *)0x3;
            if (&DAT_80000000 < piVar21) {
              pcVar12 = (char *)((int)piVar21 + 0x7fffffff);
            }
            if (pcVar12 == (char *)0x0) {
joined_r0x0150d7e4:
              bVar6 = piVar8 != (int *)0x0;
              piVar8 = (int *)pcVar25;
              if (bVar6) {
LAB_0150d804:
                thunk_FUN_016d3fb4(piVar8);
              }
            }
            else {
              if (pcVar12 == (char *)0x1) {
                piVar16 = (int *)((int)pcVar25 + 4);
                for (; local_84 != (int *)0x0; local_84 = (int *)((int)local_84 + -1)) {
                  if (piVar16[-1] != 0) {
                    thunk_FUN_016d3fb4(*piVar16);
                  }
                  piVar16 = piVar16 + 3;
                }
                local_80 = (int *)&DAT_00000010;
                if (piVar8 != (int *)0x0) {
                  thunk_FUN_016d3fb4(pcVar25);
                }
                pcVar25 = &DAT_00565830;
                param_2 = local_98;
                cVar24 = '\x0f';
LAB_0150d820:
                unaff_r8 = ((uint)pcVar25 & 0xffff) + local_b0 * 0x10000;
                uVar14 = local_9c & 0xff | (int)param_2 << 8;
                iVar22 = iVar15;
                for (; uVar18 != 0; uVar18 = uVar18 - 1) {
                  FUN_01505ed0(iVar22);
                  iVar22 = iVar22 + 0x10;
                }
                if (local_6c != 0) {
                  thunk_FUN_016d3fb4(iVar15);
                }
                local_34 = cVar24;
                goto LAB_0150d86c;
              }
              if (pcVar12 == (char *)0x2) goto joined_r0x0150d7e4;
              if (piVar21 != (int *)0x0) goto LAB_0150d804;
            }
            local_80 = (int *)&DAT_00000010;
            cVar24 = '\x0f';
            pcVar25 = &DAT_00565830;
            goto LAB_0150d818;
          }
          local_98 = (int *)((uint)piVar8 >> 0x10);
          *(char *)((ushort *)((uint)&local_60 | 5) + 1) = (char)((uint)piVar8 >> 0x18);
          *(ushort *)((uint)&local_60 | 5) =
               (ushort)((uint)piVar8 >> 8) & 0xff | (ushort)((int)local_98 << 8);
          local_5c = CONCAT31(local_5c._1_3_,(char)piVar8);
          local_54 = local_84;
          local_60 = piVar21;
          local_58 = (int *)pcVar25;
          if (uVar18 == local_6c) {
            FUN_0154e184(&local_6c);
            iVar15 = local_68;
          }
          local_a0 = (uint)pcVar25 >> 0x10;
          local_9c = (uint)piVar8 >> 8;
          puVar20 = (undefined4 *)(iVar15 + uVar18 * 0x10);
          *puVar20 = local_60;
          uVar18 = uVar18 + 1;
          puVar20[1] = local_5c;
          puVar20[2] = local_58;
          puVar20[3] = local_54;
          local_64 = uVar18;
        } while (pcVar26 < pcVar12);
        uVar14 = local_6c >> 8;
      }
      *(short *)((int)param_1 + 0xd) = (short)uVar14;
      *(char *)((int)param_1 + 0xf) = (char)(uVar14 >> 0x10);
      *(undefined1 *)(param_1 + 3) = (undefined1)local_6c;
      *param_1 = iVar9;
      param_1[1] = (int)piVar7;
      param_1[2] = (int)piVar16;
      param_1[4] = iVar15;
      param_1[5] = uVar18;
      return;
    }
    uVar14 = 0;
    local_80 = (int *)0x0;
    local_34 = '\v';
  }
  else {
    unaff_r8 = CONCAT22(uStack_2e,local_30);
    uVar14 = (uint)CONCAT12(uStack_31,CONCAT11(uStack_32,bStack_33));
    local_80 = local_2c;
  }
LAB_0150d86c:
  param_1[2] = unaff_r8;
  *param_1 = -0x80000000;
  *(short *)((int)param_1 + 5) = (short)uVar14;
  *(char *)(param_1 + 1) = local_34;
  param_1[3] = (int)local_80;
  *(char *)((int)param_1 + 7) = (char)(uVar14 >> 0x10);
  if (iVar9 == 0) {
    return;
  }
  if (piVar7 == (int *)0x0) {
    return;
  }
  iVar9 = FUN_016d3bc8();
  uVar14 = *(byte *)((int)piVar7 + -3) & 0x1f;
  if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
     (uVar18 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar15 = uVar18 - 0x10, uVar18 == 0)) {
    iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar18 = (uint)(*(byte *)((int)piVar7 + -3) >> 5);
  iVar23 = *(int *)(iVar9 + 8) + 0x10;
  iVar22 = iVar15 * uVar14 + iVar15 + -4;
  iVar15 = iVar23 + iVar22;
  if (4 < uVar18) {
    if (uVar18 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar18 = *(uint *)(iVar15 + -4);
    if (uVar18 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar15 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar15 - (int)piVar7) < uVar18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar15 - uVar18) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar23 + iVar22) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar9 + 0x14);
  uVar18 = 1 << uVar14;
  *(char *)((int)piVar7 + -3) = -1;
  ((char *)((int)piVar7 + -2))[0] = '\0';
  ((char *)((int)piVar7 + -2))[1] = '\0';
  do {
    uVar19 = *(uint *)(iVar9 + 0x10);
    uVar13 = *(uint *)(iVar9 + 0xc) | uVar19;
    if ((uVar18 & uVar13) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar19 == 0) || (uVar13 + uVar18 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar9,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar20 = (undefined4 *)FUN_016d2bc8();
      uVar17 = *puVar20;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar20 = uVar17;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar9 + 0x10) = uVar18 + uVar19;
      return;
    }
    puVar27 = (uint *)(iVar9 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar27);
      uVar13 = *puVar27;
      if (uVar19 != uVar13) goto LAB_016d409c;
      bVar6 = (bool)hasExclusiveAccess(puVar27);
    } while (!bVar6);
    *puVar27 = uVar18 + uVar19;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar19 == uVar13) {
      return;
    }
  } while( true );
}

