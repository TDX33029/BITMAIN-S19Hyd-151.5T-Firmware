// FUN_016214a4 @ 016214a4 size=2432 calls_out=17 calls_in=1
// strings: decryption failed | decryption failed | a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016214a4(undefined4 *param_1,int *param_2,int *param_3)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  undefined *puVar15;
  undefined4 uVar16;
  int *piVar17;
  uint uVar18;
  int *piVar19;
  int *piVar20;
  uint *puVar21;
  code *pcVar22;
  int *piVar23;
  int iVar24;
  int *piVar25;
  int iVar26;
  int *piVar27;
  bool bVar28;
  uint local_f4;
  uint local_f0;
  int *local_cc;
  char ***local_a8;
  int *piStack_a4;
  uint uStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  char ***local_88;
  int *local_84;
  uint local_80;
  int local_7c;
  int local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  char local_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  int *local_64;
  uint local_60;
  int iStack_5c;
  int local_58;
  undefined4 uStack_54;
  int local_50;
  undefined4 uStack_4c;
  char **local_44;
  uint local_40;
  uint local_3c;
  char *local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  puVar10 = (uint *)(param_2 + 0x114);
  if (*param_2 == 2) {
    FUN_01620eb0(param_1,param_2 + 1);
    return;
  }
  local_50 = DAT_018d909c;
  local_60 = 2;
  if (DAT_018dd947 == '\0') {
    local_80 = DAT_018d909c + 0x1c;
    local_84 = (int *)0x0;
    local_88 = (char ***)0x4;
    FUN_01694880(&local_68,&local_88);
  }
  local_88 = (char ***)CONCAT13(uStack_65,CONCAT12(uStack_66,CONCAT11(uStack_67,local_68)));
  local_84 = local_64;
  local_80 = local_60;
  local_7c = iStack_5c;
  local_78 = local_58;
  uStack_74 = uStack_54;
  iStack_70 = local_50;
  uStack_6c = uStack_4c;
  if (local_60 != 2) {
    iVar3 = iStack_5c;
    if ((local_60 & 1) != 0) {
      iVar3 = iStack_5c + (*(int *)(local_58 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_58 + 0x30))(iVar3,&local_88);
  }
  piVar20 = param_1 + 2;
  local_a8 = local_88;
  piStack_a4 = local_84;
  uStack_a0 = local_80;
  iStack_9c = local_7c;
  iStack_98 = local_78;
  uStack_94 = uStack_74;
  iStack_90 = iStack_70;
  uStack_8c = uStack_6c;
  local_f0 = (uint)*(byte *)((int)param_2 + 0x507);
  local_cc = (int *)param_2[0x140];
  *(undefined1 *)((int)param_2 + 0x507) = 2;
  if (local_f0 == 2) {
    if (0x15 < (uint)param_3[1]) {
      uVar18 = 0x16;
      puVar4 = (uint *)FUN_016d38c8(0x16,1);
      if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x16);
      }
      puVar21 = puVar4;
      do {
        uVar11 = param_3[1];
        if (uVar18 < (uint)param_3[1]) {
          uVar11 = uVar18;
        }
        FUN_016dd1aa(puVar21,*param_3,uVar11);
        FUN_00f5f804(param_3,uVar11);
        puVar21 = (uint *)((int)puVar21 + uVar11);
        uVar18 = uVar18 - uVar11;
      } while (uVar18 != 0);
      uVar18 = *puVar10;
      uVar11 = param_2[0x115];
      if ((uVar18 & uVar11) == 0xffffffff) {
LAB_0162170c:
        local_84 = (int *)&LAB_00640850;
        local_88 = &local_44;
        local_34 = 0x11;
        local_38 = "decryption failed";
        local_60 = 0;
        local_68 = '\0';
        uStack_67 = 0;
        uStack_66 = 0;
        uStack_65 = 0;
        local_44 = &local_38;
        local_64 = (int *)&DAT_00000001;
        iVar3 = FUN_00fa948c(&local_68,&DAT_01887680,&DAT_0056b319,&local_88);
        local_f4 = local_60;
        piVar5 = local_64;
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_88,
                       &DAT_01887698,&DAT_018af130);
        }
        local_cc = (int *)CONCAT13(uStack_65,CONCAT12(uStack_66,CONCAT11(uStack_67,local_68)));
        thunk_FUN_016d3fb4(puVar4);
        iVar3 = 1;
      }
      else {
        local_38 = *(char **)((int)puVar4 + 6);
        *puVar10 = uVar18 + 1;
        param_2[0x115] = uVar11 + (0xfffffffe < uVar18);
        local_34 = *(undefined4 *)((int)puVar4 + 10);
        uStack_30 = *(undefined4 *)((int)puVar4 + 0xe);
        local_2c = *(undefined4 *)((int)puVar4 + 0x12);
        local_44 = (char **)0x0;
        pcVar22 = *(code **)(param_2[0x110] + 8);
        DataMemoryBarrier(0xb);
        local_40 = uVar18;
        local_3c = uVar11;
        if (DAT_018dd942 != '\x02') {
          FUN_01110ec4();
        }
        (*pcVar22)(&local_68,param_2 + 0x8c,&local_44,1,0,puVar4,6,0);
        if (local_68 == '\x01') goto LAB_0162170c;
        local_88 = (char ***)
                   CONCAT13(local_64._0_1_,CONCAT12(uStack_65,CONCAT11(uStack_66,uStack_67)));
        local_84 = (int *)CONCAT13((undefined1)local_60,local_64._1_3_);
        local_80 = CONCAT13((undefined1)iStack_5c,local_60._1_3_);
        local_7c = CONCAT13((undefined1)local_58,iStack_5c._1_3_);
        iVar3 = FUN_01837f38(&local_88,&local_38,0x10);
        if (iVar3 != 0) {
          *(undefined2 *)(puVar4 + 1) = 0;
          *puVar4 = 0;
          goto LAB_0162170c;
        }
        puVar21 = (uint *)thunk_FUN_016d4a50(6);
        if (puVar21 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,6);
        }
        local_f4 = *puVar4;
        uVar18 = puVar4[1];
        *puVar21 = local_f4;
        bVar1 = *(byte *)((int)puVar21 + 2);
        *(short *)(puVar21 + 1) = (short)uVar18;
        uStack_66 = *(undefined1 *)((int)puVar21 + 5);
        uVar2 = *(undefined2 *)((int)puVar21 + 3);
        uStack_65 = 0;
        local_68 = (char)uVar2;
        uStack_67 = (undefined1)((ushort)uVar2 >> 8);
        local_cc = (int *)(uint)*(uint3 *)((int)puVar21 + 3);
        thunk_FUN_016d3fb4();
        thunk_FUN_016d3fb4(puVar4);
        if ((local_f4 & 0xffff) >> 0xf == 2) goto LAB_01621828;
        if ((uint)param_2[0x136] < 0xfffffffa) {
          local_f0 = (local_f4 & 0xffff) >> 0xf;
          local_f4 = local_f4 & 0x7fff | (uint)bVar1 << 0x10;
          param_2[0x136] = param_2[0x136] + 6;
          goto LAB_016217d4;
        }
        iVar3 = 4;
        piVar5 = piVar20;
      }
LAB_01621794:
      FUN_0110d7bc(&local_a8);
LAB_0162179c:
      *param_1 = 1;
      param_1[1] = &DAT_8000000b;
      *piVar20 = iVar3;
      param_1[3] = local_cc;
      param_1[4] = piVar5;
      param_1[5] = local_f4;
      return;
    }
  }
  else {
    local_f4 = (uint)*(uint3 *)(param_2 + 0x141);
LAB_016217d4:
    piVar12 = (int *)(((uint)local_cc / 0xffef) * 0x10000 - (uint)local_cc / 0xffef);
    if ((uint)local_cc % 0xffef != 0) {
      piVar12 = (int *)((int)piVar12 + (uint)local_cc % 0xffef + 0x10);
    }
    if (piVar12 <= (int *)param_3[1]) {
      piVar5 = (int *)&DAT_0000ffff;
      if (piVar12 < &DAT_0000ffff) {
        piVar5 = piVar12;
      }
      if (piVar12 == (int *)0x0) {
        piVar6 = (int *)&DAT_00000001;
      }
      else {
        piVar6 = (int *)FUN_016d38c8(piVar5,1);
        if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,piVar5);
        }
      }
      uVar16 = 0;
      if ((int)local_cc < 0) {
LAB_01621898:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar16,local_cc);
      }
      if (local_cc == (int *)0x0) {
        piVar13 = (int *)0x0;
        iVar7 = 1;
      }
      else {
        uVar16 = 1;
        iVar7 = FUN_016d38c8(local_cc,1);
        if (iVar7 == 0) goto LAB_01621898;
        piVar13 = local_cc;
        iVar3 = iVar7;
        do {
          piVar14 = (int *)0xffef;
          if (piVar13 < (int *)0xffef) {
            piVar14 = piVar13;
          }
          piVar27 = piVar14 + 4;
          if (piVar5 < piVar27) {
            puVar15 = &DAT_018aba20;
LAB_01621d78:
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,piVar27,piVar5,puVar15);
          }
          piVar19 = (int *)param_3[1];
          if (piVar19 < piVar27) {
            local_68 = (char)piVar27;
            uStack_67 = (undefined1)((uint)piVar27 >> 8);
            uStack_66 = (undefined1)((uint)piVar27 >> 0x10);
            uStack_65 = (undefined1)((uint)piVar27 >> 0x18);
            local_64 = piVar19;
                    /* WARNING: Subroutine does not return */
            FUN_00f600c0(&local_68);
          }
          iVar26 = *param_3;
          piVar13 = (int *)((int)piVar13 - (int)piVar14);
          iVar24 = param_3[2];
          piVar23 = piVar6;
          piVar25 = (int *)param_3[3];
          do {
            while( true ) {
              piVar17 = piVar19;
              if (piVar27 < piVar19) {
                piVar17 = piVar27;
              }
              FUN_016dd1aa(piVar23,iVar26,piVar17);
              if (piVar19 == (int *)0x0) break;
              piVar8 = piVar25;
              if (((uint)piVar25 & 1) != 0) {
                uVar18 = (int)piVar17 + ((uint)piVar25 >> 5);
                if (uVar18 < 0x8000000) {
                  piVar8 = (int *)((uint)piVar25 & 0x1f | uVar18 * 0x20);
                }
                else {
                  uVar18 = (uint)piVar25 >> 5;
                  piVar8 = (int *)thunk_FUN_016d4a50(0x14);
                  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600874(4,0x14);
                  }
                  piVar8[4] = 1;
                  piVar8[3] = ((uint)piVar25 & 0x1f) >> 2;
                  piVar8[2] = (int)piVar19 + uVar18;
                  piVar8[1] = iVar26 - uVar18;
                  *piVar8 = iVar24 + uVar18;
                }
                param_3[3] = (int)piVar8;
              }
              iVar26 = iVar26 + (int)piVar17;
              iVar24 = iVar24 - (int)piVar17;
              bVar28 = piVar19 < piVar17;
              piVar19 = (int *)((int)piVar19 - (int)piVar17);
              if (bVar28) {
                piVar19 = (int *)0x0;
              }
              *param_3 = iVar26;
              param_3[1] = (int)piVar19;
              param_3[2] = iVar24;
              piVar27 = (int *)((int)piVar27 - (int)piVar17);
              piVar23 = (int *)((int)piVar23 + (int)piVar17);
              piVar25 = piVar8;
              if (piVar27 == (int *)0x0) goto LAB_01621a20;
            }
            piVar19 = (int *)0x0;
            piVar27 = (int *)((int)piVar27 - (int)piVar17);
            piVar23 = (int *)((int)piVar23 + (int)piVar17);
          } while (piVar27 != (int *)0x0);
LAB_01621a20:
          uVar18 = *puVar10;
          uVar11 = param_2[0x115];
          if (uVar18 == 0xffffffff && uVar11 == 0xffffffff) {
LAB_01621c28:
            local_84 = (int *)&LAB_00640850;
            local_88 = &local_44;
            local_34 = 0x11;
            local_38 = "decryption failed";
            local_60 = 0;
            local_68 = '\0';
            uStack_67 = 0;
            uStack_66 = 0;
            uStack_65 = 0;
            local_44 = &local_38;
            local_64 = (int *)&DAT_00000001;
            iVar3 = FUN_00fa948c(&local_68,&DAT_01887680,&DAT_0056b319,&local_88);
            if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_88,
                           &DAT_01887698,&DAT_018af130);
            }
            iVar3 = 1;
            local_cc = (int *)CONCAT13(uStack_65,CONCAT12(uStack_66,CONCAT11(uStack_67,local_68)));
            local_f4 = local_60;
            piVar5 = local_64;
LAB_01621cb0:
            thunk_FUN_016d3fb4(iVar7);
            piVar13 = (int *)0x80000001;
            if (piVar12 == (int *)0x0) goto LAB_01621794;
            goto LAB_01621d00;
          }
          *puVar10 = uVar18 + 1;
          param_2[0x115] = uVar11 + (0xfffffffe < uVar18);
          local_44 = (char **)0x0;
          puVar9 = (undefined4 *)((int)piVar6 + (int)piVar14);
          local_38 = (char *)*puVar9;
          local_34 = puVar9[1];
          uStack_30 = puVar9[2];
          local_2c = puVar9[3];
          pcVar22 = *(code **)(param_2[0x110] + 8);
          DataMemoryBarrier(0xb);
          local_40 = uVar18;
          local_3c = uVar11;
          if (DAT_018dd942 != '\x02') {
            FUN_01110ec4();
          }
          (*pcVar22)(&local_68,param_2 + 0x8c,&local_44,1,0,piVar6,piVar14,0);
          if (local_68 == '\x01') goto LAB_01621c28;
          local_88 = (char ***)
                     CONCAT13(local_64._0_1_,CONCAT12(uStack_65,CONCAT11(uStack_66,uStack_67)));
          local_84 = (int *)CONCAT13((undefined1)local_60,local_64._1_3_);
          local_80 = CONCAT13((undefined1)iStack_5c,local_60._1_3_);
          local_7c = CONCAT13((undefined1)local_58,iStack_5c._1_3_);
          iVar24 = FUN_01837f38(&local_88,&local_38,0x10);
          if (iVar24 != 0) {
            FUN_016dd606(piVar6,0,piVar14);
            goto LAB_01621c28;
          }
          if (piVar12 < piVar14) {
            puVar15 = &DAT_018aba10;
            piVar27 = piVar14;
            goto LAB_01621d78;
          }
          FUN_016dd1aa(iVar3,piVar6,piVar14);
          if (CARRY4(param_2[0x136],(uint)piVar14)) {
            iVar3 = 4;
            local_f4 = 0;
            piVar5 = piVar6;
            goto LAB_01621cb0;
          }
          param_2[0x136] = param_2[0x136] + (int)piVar14;
          iVar3 = iVar3 + (int)piVar14;
        } while (piVar13 != (int *)0x0);
        piVar13 = local_cc;
      }
      param_2[0x134] = param_2[0x134] + 1;
      local_f4 = local_f4 | local_f0 << 0x18;
      iVar3 = iVar7;
      piVar5 = local_cc;
      if (piVar12 != (int *)0x0) {
LAB_01621d00:
        thunk_FUN_016d3fb4(piVar6);
      }
      FUN_0110d7bc(&local_a8);
      if (piVar13 != (int *)&DAT_80000000) {
        if (piVar13 != (int *)0x80000001) {
          *param_1 = 0;
          param_1[1] = piVar13;
          param_1[3] = local_cc;
          param_1[4] = piVar5;
          *piVar20 = iVar3;
          param_1[5] = local_f4;
          return;
        }
        goto LAB_0162179c;
      }
      goto LAB_01621830;
    }
    param_2[0x140] = (int)local_cc;
    param_2[0x141] = local_f4 | local_f0 << 0x18;
  }
LAB_01621828:
  FUN_0110d7bc(&local_a8);
LAB_01621830:
  *param_1 = 0;
  param_1[1] = 0x80000000;
  return;
}

