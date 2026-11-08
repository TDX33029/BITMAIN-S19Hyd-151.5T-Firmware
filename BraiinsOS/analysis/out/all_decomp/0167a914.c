// FUN_0167a914 @ 0167a914 size=1752 calls_out=9 calls_in=1
// strings: 

void FUN_0167a914(uint *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  uint *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  code *pcVar14;
  undefined1 uVar15;
  int iVar16;
  uint uVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  uint uVar21;
  uint uVar22;
  undefined4 *puVar23;
  uint uVar24;
  char *pcVar25;
  int *piVar26;
  int iVar27;
  bool bVar28;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  undefined4 *local_a4;
  int local_a0;
  int local_9c;
  int iStack_98;
  undefined4 *local_94;
  undefined4 *local_90;
  undefined4 *local_88;
  undefined4 *local_84;
  undefined4 *local_80;
  uint local_7c;
  undefined4 *local_78;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  
  pcVar25 = *(char **)(param_3 + 8);
  iVar27 = *(int *)(param_3 + 0xc);
  FUN_0167b0f8(&local_b8);
  if (local_b8 != 1) {
    *param_1 = local_b8;
    param_1[1] = local_b4;
    param_1[2] = local_b0;
    param_1[3] = uStack_ac;
    param_1[4] = local_a8;
    param_1[5] = (uint)local_a4;
    return;
  }
  piVar26 = (int *)((uint)&local_b8 | 4);
  local_a0 = *piVar26;
  local_9c = piVar26[1];
  iStack_98 = piVar26[2];
  local_94 = (undefined4 *)piVar26[3];
  puVar23 = (undefined4 *)piVar26[4];
  local_88 = (undefined4 *)&DAT_00000001;
  puVar7 = (undefined4 *)&DAT_00000004;
  *(char **)(param_3 + 8) = pcVar25;
  *(int *)(param_3 + 0xc) = iVar27;
  local_90 = puVar23;
  if ((iVar27 == 0) || (*pcVar25 != '\\')) {
    uVar15 = 0;
    puVar20 = (undefined4 *)0x0;
    puVar19 = (undefined4 *)0x0;
    uVar17 = 0;
  }
  else {
    iVar12 = iVar27 + -1;
    pcVar8 = pcVar25 + 1;
    iVar16 = 0;
    *(char **)(param_3 + 8) = pcVar8;
    *(int *)(param_3 + 0xc) = iVar12;
    if (iVar12 != 0) {
      do {
        if (pcVar8[iVar16] != ' ' && pcVar8[iVar16] != '\t') goto LAB_0167a9b0;
        iVar16 = iVar16 + 1;
      } while (iVar12 != iVar16);
      iVar16 = iVar12;
    }
LAB_0167a9b0:
    *(char **)(param_3 + 8) = pcVar8 + iVar16;
    *(int *)(param_3 + 0xc) = iVar12 - iVar16;
    FUN_0166e7a8(&local_40,param_3);
    if (local_40 == (undefined4 *)0x3) {
      iVar16 = *(int *)(param_3 + 0xc);
      do {
        pcVar8 = *(char **)(param_3 + 8);
        puVar7 = (undefined4 *)&DAT_00000004;
        if ((iVar16 == 0) || (*pcVar8 != '\\')) {
          uVar21 = 0;
          uVar17 = 0;
          puVar20 = (undefined4 *)0x0;
LAB_0167accc:
          *(char **)(param_3 + 8) = pcVar8;
          *(int *)(param_3 + 0xc) = iVar16;
          if (uVar21 != 0 || uVar17 != 0) {
            thunk_FUN_016d3fb4(puVar7);
          }
          if (puVar20 != (undefined4 *)0x0) {
            if ((code *)*puVar23 != (code *)0x0) {
              (*(code *)*puVar23)(puVar20);
            }
            if (puVar23[1] != 0) {
              thunk_FUN_016d3fb4(puVar20);
            }
          }
          local_7c = 0;
          local_80 = (undefined4 *)&DAT_00000001;
          local_84 = (undefined4 *)&DAT_80000000;
          local_88 = (undefined4 *)0x3;
          goto LAB_0167ad34;
        }
        iVar13 = iVar16 + -1;
        pcVar9 = pcVar8 + 1;
        iVar12 = 0;
        *(char **)(param_3 + 8) = pcVar9;
        *(int *)(param_3 + 0xc) = iVar13;
        if (iVar13 != 0) {
          do {
            if (pcVar9[iVar12] != ' ' && pcVar9[iVar12] != '\t') goto LAB_0167aa34;
            iVar12 = iVar12 + 1;
          } while (iVar13 != iVar12);
          iVar12 = iVar13;
        }
LAB_0167aa34:
        *(char **)(param_3 + 8) = pcVar9 + iVar12;
        *(int *)(param_3 + 0xc) = iVar13 - iVar12;
        FUN_0166e7a8(&local_40,param_3);
        if (local_40 != (undefined4 *)0x3) {
          uVar21 = (uint)local_3c & 0xffffff00;
          uVar17 = (uint)local_3c & 0xff;
          puVar7 = local_38;
          puVar20 = local_30;
          puVar23 = local_2c;
          if (local_40 == (undefined4 *)&DAT_00000001) goto LAB_0167accc;
          uVar17 = (uint)local_34 >> 8;
          local_88 = local_40;
          puVar20 = local_3c;
          puVar19 = local_30;
          uVar15 = local_34._0_1_;
          goto LAB_0167aaa8;
        }
        bVar28 = *(int *)(param_3 + 0xc) != iVar16;
        iVar16 = *(int *)(param_3 + 0xc);
      } while (bVar28);
      uVar17 = 0;
      puVar7 = (undefined4 *)&DAT_00000004;
      local_88 = (undefined4 *)&SUB_00000002;
      puVar20 = (undefined4 *)0x0;
      puVar19 = (undefined4 *)0x0;
      uVar15 = 0;
    }
    else {
      uVar17 = (uint)local_34 >> 8;
      puVar7 = local_38;
      local_88 = local_40;
      puVar20 = local_3c;
      puVar19 = local_30;
      puVar23 = local_2c;
      uVar15 = local_34._0_1_;
    }
  }
LAB_0167aaa8:
  puVar11 = local_90;
  puVar18 = local_94;
  local_7c = CONCAT13((char)(uVar17 >> 0x10),(int3)CONCAT31((int3)uVar17,uVar15));
  local_84 = puVar20;
  local_80 = puVar7;
  local_78 = puVar19;
  local_74 = puVar23;
  if (local_88 == (undefined4 *)&DAT_00000001) {
    if (local_a0 != 0) {
      thunk_FUN_016d3fb4(local_9c);
    }
    if (puVar18 != (undefined4 *)0x0) {
      pcVar14 = (code *)*puVar11;
      if (pcVar14 != (code *)0x0) {
        (*pcVar14)(puVar18);
      }
      if (puVar11[1] != 0) {
        thunk_FUN_016d3fb4(puVar18);
      }
    }
    *(char **)(param_3 + 8) = pcVar25;
    *(int *)(param_3 + 0xc) = iVar27;
    FUN_0166ce68(&local_40,param_3);
    puVar11 = local_2c;
    puVar18 = local_30;
    puVar5 = local_34;
    puVar4 = local_38;
    puVar3 = local_3c;
    if (local_40 == (undefined4 *)0x3) {
      uVar15 = SUB41(local_3c,0);
      if (local_3c < (undefined4 *)0x80) {
        local_58 = (undefined4 *)((uint)local_3c & 0xff);
        puVar18 = (undefined4 *)&DAT_00000001;
      }
      else {
        uVar1 = (undefined1)((uint)local_3c >> 6);
        if (local_3c < (undefined4 *)0x800) {
          local_58 = (undefined4 *)((CONCAT11(uVar15,uVar1) & 0x3fff | 0x8000) | 0xc0);
          puVar18 = (undefined4 *)&SUB_00000002;
        }
        else {
          bVar2 = (byte)((uint)local_3c >> 0xc);
          if ((uint)local_3c >> 0x10 == 0) {
            bVar6 = bVar2 | 0xe0;
            local_58._1_3_ = (CONCAT11(uVar15,uVar1) & 0x3fff | 0x8000) & 0xffff3f | 0x80;
            puVar18 = (undefined4 *)0x3;
          }
          else {
            puVar18 = (undefined4 *)&DAT_00000004;
            bVar6 = (byte)((uint)local_3c >> 0x12) | 0xf0;
            local_58._1_3_ = CONCAT21(CONCAT11(uVar15,uVar1),bVar2) & 0x3f3f3f | 0x808080;
          }
          local_58 = (undefined4 *)CONCAT31(local_58._1_3_,bVar6);
        }
      }
      puVar11 = (undefined4 *)thunk_FUN_016d4a50(puVar18);
      if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,puVar18);
      }
      FUN_016dd1aa(puVar11,&local_58,puVar18);
      local_70 = (undefined4 *)0x3;
      local_6c = puVar18;
      local_68 = puVar11;
      local_64 = puVar18;
    }
    else {
      local_70 = local_40;
      local_6c = local_3c;
      local_68 = local_38;
      local_64 = local_34;
      local_60 = local_30;
      local_5c = local_2c;
      if (local_40 == (undefined4 *)&DAT_00000001) {
        if (puVar20 != (undefined4 *)0x0) {
          thunk_FUN_016d3fb4(puVar7);
        }
        if (puVar19 != (undefined4 *)0x0) {
          if ((code *)*puVar23 != (code *)0x0) {
            (*(code *)*puVar23)(puVar19);
          }
          if (puVar23[1] != 0) {
            thunk_FUN_016d3fb4(puVar19);
          }
        }
        *(char **)(param_3 + 8) = pcVar25;
        *(int *)(param_3 + 0xc) = iVar27;
        FUN_0166ef68(&local_40,param_3);
        if (local_40 == (undefined4 *)0x3) {
          local_4c = (undefined4 *)&DAT_00000001;
          local_54 = (undefined4 *)&DAT_80000000;
          local_58 = (undefined4 *)0x3;
          local_50 = (undefined4 *)&DAT_0041950e;
        }
        else {
          local_58 = local_40;
          local_54 = local_3c;
          local_50 = local_38;
          local_4c = local_34;
          puStack_48 = local_30;
          puStack_44 = local_2c;
          if (local_40 == (undefined4 *)&DAT_00000001) {
            local_30 = puVar11;
            local_38 = puVar5;
            local_3c = puVar4;
            local_34 = puVar18;
            local_40 = puVar3;
            FUN_016692ac(&local_40);
            puVar10 = (uint *)((uint)&local_58 | 4);
            uVar17 = puVar10[1];
            uVar21 = puVar10[2];
            uVar22 = puVar10[3];
            uVar24 = puVar10[4];
            param_1[1] = *puVar10;
            param_1[2] = uVar17;
            param_1[3] = uVar21;
            param_1[4] = uVar22;
            param_1[5] = uVar24;
            *param_1 = 1;
            goto LAB_0167af50;
          }
        }
        *param_1 = (uint)local_58;
        param_1[1] = (uint)local_54;
        param_1[2] = (uint)local_50;
        param_1[3] = (uint)local_4c;
        param_1[4] = (uint)puStack_48;
        param_1[5] = (uint)puStack_44;
        if (puVar3 != (undefined4 *)0x0) {
          thunk_FUN_016d3fb4(puVar4);
        }
        if (puVar18 == (undefined4 *)0x0) goto LAB_0167af50;
        if ((code *)*puVar11 != (code *)0x0) {
          (*(code *)*puVar11)(puVar18);
        }
        goto LAB_0167af3c;
      }
    }
    *param_1 = (uint)local_70;
    param_1[1] = (uint)local_6c;
    param_1[2] = (uint)local_68;
    param_1[3] = (uint)local_64;
    param_1[4] = (uint)local_60;
    param_1[5] = (uint)local_5c;
    if (puVar20 != (undefined4 *)0x0) {
      thunk_FUN_016d3fb4(puVar7);
    }
    if (puVar19 == (undefined4 *)0x0) goto LAB_0167af50;
    puVar18 = puVar19;
    puVar11 = puVar23;
    if ((code *)*puVar23 != (code *)0x0) {
      (*(code *)*puVar23)(puVar19);
    }
  }
  else {
LAB_0167ad34:
    *param_1 = (uint)local_88;
    param_1[1] = (uint)local_84;
    param_1[2] = (uint)local_80;
    param_1[3] = local_7c;
    param_1[4] = (uint)local_78;
    param_1[5] = (uint)local_74;
    if (local_a0 != 0) {
      thunk_FUN_016d3fb4(local_9c);
    }
    puVar11 = local_90;
    puVar18 = local_94;
    if (local_94 == (undefined4 *)0x0) goto LAB_0167af50;
    if ((code *)*local_90 != (code *)0x0) {
      (*(code *)*local_90)(local_94);
    }
  }
LAB_0167af3c:
  if (puVar11[1] != 0) {
    thunk_FUN_016d3fb4(puVar18);
  }
LAB_0167af50:
  if (1 < local_b8) {
    if (local_b8 == 2) {
      if (local_b4 != 0) {
        thunk_FUN_016d3fb4(local_b0);
      }
      if (local_a8 != 0) {
        if ((code *)*local_a4 != (code *)0x0) {
          (*(code *)*local_a4)(local_a8);
        }
        if (local_a4[1] != 0) {
          thunk_FUN_016d3fb4(local_a8);
          return;
        }
      }
    }
    else if ((local_b4 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_b0);
      return;
    }
  }
  return;
}

