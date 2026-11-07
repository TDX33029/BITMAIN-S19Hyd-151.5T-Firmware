// FUN_00ed02d4 @ 00ed02d4 size=1800 calls_out=19 calls_in=1
// strings: 

void FUN_00ed02d4(char *param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int unaff_r4;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar18;
  int *piVar19;
  uint *puVar20;
  int local_b4;
  int local_b0;
  undefined1 local_ac;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  char local_40;
  char cStack_3f;
  undefined1 uStack_3e;
  uint uStack_3d;
  undefined1 uStack_39;
  undefined3 local_38;
  char cStack_35;
  undefined3 local_34;
  undefined1 uStack_31;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_ac = 1;
  local_b0 = param_2;
  FUN_005e5af4(&local_40,&local_b0);
  iVar9 = local_b0;
  if (local_40 == '\x01') {
    iVar12 = CONCAT13(uStack_39,uStack_3d._1_3_);
LAB_00ed0308:
    *(int *)(param_1 + 4) = iVar12;
    *param_1 = '\x06';
    return;
  }
  if (cStack_3f != '\x01') {
LAB_00ed043c:
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    *param_1 = '\x05';
    return;
  }
  uVar1 = *(undefined1 *)(local_b0 + 0x2d);
  piVar19 = (int *)(local_b0 + 0xc);
  cVar2 = *(char *)(local_b0 + 0x2c);
  *(undefined1 *)(local_b0 + 0x2c) = 0;
  if ((cVar2 == '\x01') && (*piVar19 != -0x80000000)) {
    iVar12 = *(int *)(local_b0 + 0x14);
    if (iVar12 == *piVar19) {
      FUN_006029c0(piVar19);
    }
    *(undefined1 *)(*(int *)(iVar9 + 0x10) + iVar12) = uVar1;
    *(int *)(iVar9 + 0x14) = iVar12 + 1;
  }
  *(undefined4 *)(iVar9 + 8) = 0;
  FUN_00ef8e3c(&local_40,piVar19,iVar9);
  iVar7 = CONCAT13(uStack_39,uStack_3d._1_3_);
  if (CONCAT13((undefined1)uStack_3d,CONCAT12(uStack_3e,CONCAT11(cStack_3f,local_40))) == 2) {
    iVar12 = iVar7;
    goto LAB_00ed0308;
  }
  iVar18 = CONCAT13(cStack_35,local_38);
  if (iVar18 == 0x1e) {
    iVar12 = thunk_FUN_016dd50a(iVar7,&DAT_003c519d,0x1e);
    if (iVar12 == 0) goto LAB_00ed0458;
    iVar12 = thunk_FUN_016d4a50(0x1e);
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x1e);
    }
    iVar15 = 0x1e;
  }
  else {
    if (cStack_35 < '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,iVar18);
    }
    if (iVar18 != 0) {
      iVar12 = thunk_FUN_016d4a50(iVar18);
      if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar18);
      }
      FUN_016dd1aa(iVar12,iVar7,iVar18);
      if (iVar18 != -0x80000000) {
        if (iVar18 == -0x7fffffff) goto LAB_00ed043c;
        iVar15 = iVar18;
        if (iVar18 == -0x7ffffffe) goto LAB_00ed0308;
        goto LAB_00ed0558;
      }
LAB_00ed0458:
      iVar12 = FUN_005b8a40(iVar9);
      if (iVar12 == 0) {
        while( true ) {
          if (*(char *)(iVar9 + 0x2c) == '\0') {
            pbVar6 = *(byte **)(iVar9 + 0x18);
            if (*(int *)(iVar9 + 0x1c) == 0) {
              *(byte **)(iVar9 + 0x18) = pbVar6;
              local_40 = '\x05';
              cStack_3f = 0;
              uStack_3e = 0;
              uStack_3d = uStack_3d & 0xffffff00;
              iVar12 = FUN_0157c50c(&local_40,*(undefined4 *)(iVar9 + 0x20),
                                    *(undefined4 *)(iVar9 + 0x24));
              goto LAB_00ed07fc;
            }
            *(int *)(iVar9 + 0x1c) = *(int *)(iVar9 + 0x1c) + -1;
            bVar3 = *pbVar6;
            uVar16 = (uint)bVar3;
            *(byte **)(iVar9 + 0x18) = pbVar6 + 1;
            iVar12 = *(int *)(iVar9 + 0x24) + 1;
            if (uVar16 == 10) {
              *(int *)(iVar9 + 0x28) = iVar12 + *(int *)(iVar9 + 0x28);
              *(int *)(iVar9 + 0x20) = *(int *)(iVar9 + 0x20) + 1;
              iVar12 = 0;
            }
            *(byte *)(iVar9 + 0x2d) = bVar3;
            *(undefined1 *)(iVar9 + 0x2c) = 1;
            *(int *)(iVar9 + 0x24) = iVar12;
          }
          else {
            uVar16 = (uint)*(byte *)(iVar9 + 0x2d);
          }
          if ((0x17 < uVar16 - 9) || ((1 << (uVar16 - 9 & 0xff) & 0x800013U) == 0)) break;
          *(undefined1 *)(iVar9 + 0x2c) = 0;
          if (*(int *)(iVar9 + 0xc) != -0x80000000) {
            iVar12 = *(int *)(iVar9 + 0x14);
            if (iVar12 == *(int *)(iVar9 + 0xc)) {
              FUN_006029c0(piVar19);
            }
            *(char *)(*(int *)(iVar9 + 0x10) + iVar12) = (char)uVar16;
            *(int *)(iVar9 + 0x14) = iVar12 + 1;
          }
        }
        if (uVar16 == 0x22) {
          *(undefined1 *)(iVar9 + 0x2c) = 0;
          if (*(int *)(iVar9 + 0xc) != -0x80000000) {
            iVar12 = *(int *)(iVar9 + 0x14);
            if (iVar12 == *(int *)(iVar9 + 0xc)) {
              FUN_006029c0(piVar19);
            }
            *(undefined1 *)(*(int *)(iVar9 + 0x10) + iVar12) = 0x22;
            *(int *)(iVar9 + 0x14) = iVar12 + 1;
          }
          *(undefined4 *)(iVar9 + 8) = 0;
          FUN_00ef8e3c(&local_40,piVar19,iVar9);
          iVar12 = CONCAT13(uStack_39,uStack_3d._1_3_);
          if (CONCAT13((undefined1)uStack_3d,CONCAT12(uStack_3e,CONCAT11(cStack_3f,local_40))) == 2)
          goto LAB_00ed07fc;
          FUN_0112691c(&local_58,iVar12,CONCAT13(cStack_35,local_38));
          if (local_58 != 0) {
            FUN_005b91fc(&local_40,local_58,local_54);
            if (local_40 == '\x06') {
              uVar8 = FUN_00ea05e4(CONCAT13(uStack_39,uStack_3d._1_3_));
              *(undefined4 *)(param_1 + 4) = uVar8;
              *param_1 = '\x06';
            }
            else {
              *(uint *)param_1 =
                   CONCAT13((undefined1)uStack_3d,CONCAT12(uStack_3e,CONCAT11(cStack_3f,local_40)));
              *(uint *)(param_1 + 4) = CONCAT13(uStack_39,uStack_3d._1_3_);
              *(uint *)(param_1 + 8) = CONCAT13(cStack_35,local_38);
              *(uint *)(param_1 + 0xc) = CONCAT13(uStack_31,local_34);
              *(undefined4 *)(param_1 + 0x10) = uStack_30;
              *(undefined4 *)(param_1 + 0x14) = uStack_2c;
            }
            if (local_54 == 0) {
              return;
            }
            if (local_58 == 0) {
              return;
            }
            iVar9 = FUN_016d3bc8();
            uVar16 = *(byte *)(local_58 + -3) & 0x1f;
            if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
               (uVar13 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar12 = uVar13 - 0x10, uVar13 == 0))
            {
              iVar12 = (uint)*(ushort *)
                              (&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
            }
            uVar13 = (uint)(*(byte *)(local_58 + -3) >> 5);
            iVar18 = *(int *)(iVar9 + 8) + 0x10;
            iVar7 = iVar12 * uVar16 + iVar12 + -4;
            iVar12 = iVar18 + iVar7;
            if (4 < uVar13) {
              if (uVar13 != 5) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)software_udf(0xff,0x16d4018);
                (*pcVar4)();
              }
              uVar13 = *(uint *)(iVar12 + -4);
              if (uVar13 < 5) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)software_udf(0xff,0x16d4022);
                (*pcVar4)();
              }
              if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
                pcVar4 = (code *)software_udf(0xff,0x16d402a);
                (*pcVar4)();
              }
            }
            if ((uint)(iVar12 - local_58) < uVar13) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)software_udf(0xff,0x16d4032);
              (*pcVar4)();
            }
            if (*(char *)(iVar12 - uVar13) != '\0') {
                    /* WARNING: Does not return */
              pcVar4 = (code *)software_udf(0xff,0x16d403a);
              (*pcVar4)();
            }
            if (*(char *)(iVar18 + iVar7) != '\0') {
                    /* WARNING: Does not return */
              pcVar4 = (code *)software_udf(0xff,0x16d4040);
              (*pcVar4)();
            }
            bVar3 = *(byte *)(iVar9 + 0x14);
            uVar13 = 1 << uVar16;
            *(undefined1 *)(local_58 + -3) = 0xff;
            *(undefined2 *)(local_58 + -2) = 0;
            do {
              uVar14 = *(uint *)(iVar9 + 0x10);
              uVar11 = *(uint *)(iVar9 + 0xc) | uVar14;
              if ((uVar13 & uVar11) != 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)software_udf(0xff,0x16d4074);
                (*pcVar4)();
              }
              if ((uVar14 == 0) || (uVar11 + uVar13 == (2 << (bVar3 & 0x1f)) + -1)) {
                if (DAT_018ddb0b != '\0') {
                  FUN_016ddcc0(&DAT_018ddd48);
                }
                FUN_016d3ca8(&uStack_28,iVar9,uVar16);
                FUN_016dddc0(&DAT_018ddd48);
                if (unaff_r4 == 0) {
                  return;
                }
                puVar17 = (undefined4 *)FUN_016d2bc8();
                uVar8 = *puVar17;
                FUN_016d6ac4(uStack_28,unaff_r4);
                *puVar17 = uVar8;
                return;
              }
              if (DAT_018ddb0b == '\0') {
                *(uint *)(iVar9 + 0x10) = uVar13 + uVar14;
                return;
              }
              puVar20 = (uint *)(iVar9 + 0x10);
              DataMemoryBarrier(0x1b);
              do {
                ExclusiveAccess(puVar20);
                uVar11 = *puVar20;
                if (uVar14 != uVar11) goto LAB_016d409c;
                bVar5 = (bool)hasExclusiveAccess(puVar20);
              } while (!bVar5);
              *puVar20 = uVar13 + uVar14;
LAB_016d409c:
              DataMemoryBarrier(0x1b);
              if (uVar14 == uVar11) {
                return;
              }
            } while( true );
          }
        }
        else {
          local_54 = FUN_005b85f0(iVar9,local_a8,&DAT_0187beb8);
        }
        iVar12 = FUN_011da120(local_54,*(undefined4 *)(iVar9 + 0x20),*(undefined4 *)(iVar9 + 0x24));
      }
LAB_00ed07fc:
      *(int *)(param_1 + 4) = iVar12;
      *param_1 = '\x06';
      return;
    }
    iVar15 = 0;
    iVar12 = 1;
  }
  FUN_016dd1aa(iVar12,iVar7,iVar18);
LAB_00ed0558:
  local_a0 = 0;
  local_a8[0] = 0;
  local_58 = iVar15;
  local_54 = iVar12;
  local_50 = iVar18;
  iVar7 = FUN_005b8a40(iVar9);
  if (iVar7 == 0) {
    FUN_005e64ac(param_1,iVar9);
    if (*param_1 != '\x06') {
      FUN_00e9dc08(&local_40,local_a8,&local_58,param_1);
      if (local_40 != '\x06') {
        FUN_005c37bc(&local_40);
      }
      puVar17 = (undefined4 *)((uint)&local_98 | 4);
      piVar19 = (int *)((uint)&local_40 | 4);
      do {
        FUN_005e5af4(&local_58,&local_b0);
        iVar9 = local_b0;
        if ((char)local_58 == '\x01') {
          iVar12 = local_54;
LAB_00ed093c:
          *(int *)(param_1 + 4) = iVar12;
          *param_1 = '\x06';
          FUN_00ea8964(local_a8);
          return;
        }
        if (local_58._1_1_ != '\x01') {
LAB_00ed081c:
          *param_1 = '\x05';
          local_38 = (undefined3)((uint)local_a8[1] >> 8);
          cStack_35 = (char)local_a0;
          uStack_3d._1_3_ = (undefined3)((uint)local_a8[0] >> 8);
          uStack_39 = (undefined1)local_a8[1];
          uStack_3d._0_1_ = (undefined1)local_a8[0];
          *(undefined4 *)(param_1 + 0xc) = local_a0;
          *(uint *)(param_1 + 1) =
               CONCAT13((undefined1)uStack_3d,CONCAT12(uStack_3e,CONCAT11(cStack_3f,local_40)));
          *(uint *)(param_1 + 5) = CONCAT13(uStack_39,uStack_3d._1_3_);
          *(uint *)(param_1 + 9) = CONCAT13(cStack_35,local_38);
          return;
        }
        uVar1 = *(undefined1 *)(local_b0 + 0x2d);
        piVar10 = (int *)(local_b0 + 0xc);
        cVar2 = *(char *)(local_b0 + 0x2c);
        *(undefined1 *)(local_b0 + 0x2c) = 0;
        if ((cVar2 == '\x01') && (*piVar10 != -0x80000000)) {
          iVar12 = *(int *)(local_b0 + 0x14);
          if (iVar12 == *piVar10) {
            FUN_006029c0(piVar10);
          }
          *(undefined1 *)(*(int *)(iVar9 + 0x10) + iVar12) = uVar1;
          *(int *)(iVar9 + 0x14) = iVar12 + 1;
        }
        *(undefined4 *)(iVar9 + 8) = 0;
        FUN_00ef8e3c(&local_58,piVar10,iVar9);
        iVar7 = local_50;
        iVar12 = local_54;
        if (local_58 == 2) goto LAB_00ed093c;
        uVar8 = 0;
        if (local_50 < 0) {
LAB_00ed09d4:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar8,local_b4);
        }
        if (local_50 == 0) {
          local_b4 = 1;
          FUN_016dd1aa(1,local_54,0);
          iVar18 = 0;
        }
        else {
          local_b4 = thunk_FUN_016d4a50(local_50);
          if (local_b4 == 0) {
            uVar8 = 1;
            local_b4 = iVar7;
            goto LAB_00ed09d4;
          }
          FUN_016dd1aa(local_b4,iVar12,iVar7);
          if (iVar7 == -0x7fffffff) {
            iVar12 = local_b4;
            goto LAB_00ed093c;
          }
          if (iVar7 == -0x80000000) goto LAB_00ed081c;
          iVar18 = iVar7;
        }
        iVar12 = FUN_005b8a40(iVar9);
        if (iVar12 != 0) {
LAB_00ed091c:
          if (iVar18 != 0) {
            thunk_FUN_016d3fb4(local_b4);
          }
          goto LAB_00ed093c;
        }
        FUN_005e64ac(&local_58,iVar9);
        if ((char)local_58 == '\x06') {
          iVar12 = local_54;
          goto LAB_00ed091c;
        }
        *piVar19 = local_58;
        piVar19[1] = local_54;
        piVar19[2] = local_50;
        piVar19[3] = iStack_4c;
        piVar19[4] = iStack_48;
        piVar19[5] = iStack_44;
        local_98 = CONCAT13((undefined1)uStack_3d,CONCAT12(uStack_3e,CONCAT11(cStack_3f,local_40)));
        uStack_94 = CONCAT13(uStack_39,uStack_3d._1_3_);
        uStack_90 = CONCAT13(cStack_35,local_38);
        local_8c = CONCAT13(uStack_31,local_34);
        uStack_88 = uStack_30;
        uStack_84 = uStack_2c;
        uStack_80 = uStack_28;
        if (iVar18 == -0x80000000) goto LAB_00ed081c;
        if (iVar18 == -0x7fffffff) {
          iVar12 = local_b4;
          goto LAB_00ed093c;
        }
        local_74 = iVar7;
        local_78 = local_b4;
        local_70 = *puVar17;
        uStack_6c = puVar17[1];
        uStack_68 = puVar17[2];
        uStack_64 = puVar17[3];
        uStack_60 = puVar17[4];
        uStack_5c = puVar17[5];
        local_7c = iVar18;
        FUN_00e9dc08(&local_40,local_a8,&local_7c);
        if (local_40 != '\x06') {
          FUN_005c37bc(&local_40);
        }
      } while( true );
    }
  }
  else {
    *(int *)(param_1 + 4) = iVar7;
    *param_1 = '\x06';
  }
  if (iVar15 != 0) {
    thunk_FUN_016d3fb4(iVar12);
  }
  FUN_00ea8964(local_a8);
  return;
}

