// FUN_0151baac @ 0151baac size=2224 calls_out=13 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_0151baac(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  code *pcVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  byte *pbVar21;
  uint uVar22;
  uint *puVar23;
  undefined4 uVar24;
  uint *puVar25;
  bool bVar26;
  bool bVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  uint local_1d8;
  uint local_1cc;
  uint local_1c8;
  int local_1c4;
  uint local_1bc;
  int local_1b8;
  uint local_1b4;
  undefined4 local_1b0;
  int local_1ac;
  undefined8 local_1a8;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint uStack_194;
  undefined2 local_190;
  undefined2 local_18e;
  undefined2 local_18c;
  undefined2 local_18a;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 ***local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 ****local_120;
  undefined4 local_11c;
  undefined1 *local_118;
  undefined4 local_114;
  undefined *local_110;
  undefined4 local_10c;
  undefined *local_108;
  undefined4 local_104;
  undefined1 *local_100;
  undefined4 local_fc;
  uint *local_f8;
  uint local_f4;
  uint local_e0;
  uint local_a8;
  uint local_a4;
  int iStack_a0;
  uint auStack_9c [13];
  uint local_68;
  undefined2 local_30;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 auStack_29 [5];
  
  uVar22 = *(uint *)(param_3 + 8);
  if (uVar22 != 0) {
    puVar25 = *(uint **)(param_3 + 4);
    uVar13 = uVar22 * 0x10;
    uVar7 = uVar13;
    puVar23 = puVar25;
    do {
      puVar19 = (undefined1 *)*puVar23;
      puVar20 = (undefined1 *)0x4;
      if ((undefined1 *)0x80000000 < puVar19) {
        puVar20 = puVar19 + 0x7fffffff;
      }
      if (((undefined1 *)0x2 < puVar20) &&
         ((puVar20 != (undefined1 *)0x4 || ((short)puVar23[3] == 0x28)))) {
        if (puVar19 == &DAT_80000004) {
          if (puVar23[3] != 8) {
            local_30 = 4;
            local_a4 = 0x100001;
            local_a8 = 0x80000001;
            FUN_01525ed4(param_5,&local_a8,*(char *)(param_5 + 0x31) == '\x02');
            *(undefined1 *)(param_1 + 1) = 0x14;
            *(undefined1 *)(param_5 + 0x255) = 1;
            *param_1 = &DAT_8000001c;
            return;
          }
          local_1c8 = *(uint *)(param_2 + 8);
          if ((int)local_1c8 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(0,local_1c8);
          }
          uVar14 = *(undefined4 *)(param_2 + 4);
          if (local_1c8 == 0) {
            local_1c4 = 1;
            local_1cc = 0;
          }
          else {
            local_1c4 = thunk_FUN_016d4a50(local_1c8);
            if (local_1c4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,local_1c8);
            }
            local_1cc = local_1c8;
          }
          FUN_016dd1aa(local_1c4,uVar14,local_1c8);
          cVar6 = *(char *)(param_2 + 0xc);
          uVar14 = *(undefined4 *)(param_4 + 0x18);
          iVar15 = *(int *)(param_4 + 0x1c);
          pcVar16 = *(code **)(iVar15 + 0xc);
          uVar28 = (*pcVar16)();
          iVar17 = (int)((ulonglong)uVar28 >> 0x20);
          (**(code **)(iVar17 + 0x18))((int)uVar28,local_1c4,local_1c8);
          local_1b0 = uVar14;
          local_1ac = iVar15;
          local_1a8 = uVar28;
          if (cVar6 == '\0') {
            local_1d8 = 0x80000000;
            local_1bc = 0x80000000;
            if (local_1cc != 0) {
              thunk_FUN_016d3fb4(local_1c4);
            }
          }
          else {
            local_1bc = local_1cc;
            local_1d8 = local_1cc;
            local_1b8 = local_1c4;
            local_1b4 = local_1c8;
          }
          uVar29 = (*pcVar16)(uVar14);
          local_1a8 = uVar29;
          (**(code **)(iVar17 + 0x14))(&local_120,(int)uVar28);
          if (0x40 < local_e0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,local_e0,0x40,&DAT_018a7f14);
          }
          iVar15 = 1;
          uVar7 = 0;
          if (local_e0 != 0) {
            iVar15 = thunk_FUN_016d4a50(local_e0);
            uVar7 = local_e0;
            if (iVar15 == 0) {
              uVar14 = 1;
              goto LAB_0151be08;
            }
          }
          FUN_016dd1aa(iVar15,&local_120,local_e0);
          auStack_9c[0] = local_e0;
          local_a8 = 0x80000014;
          local_198 = 0;
          local_19c = 1;
          local_1a0 = 0;
          local_a4 = uVar7;
          iStack_a0 = iVar15;
          FUN_0150e524(&local_a8,&local_1a0,0x80000000);
          uVar9 = local_198;
          uVar8 = local_19c;
          uVar7 = local_1a0;
          (**(code **)((int)((ulonglong)uVar29 >> 0x20) + 0x18))((int)uVar29,local_19c,local_198);
          if (local_1d8 != 0x80000000) {
            if (local_1d8 - local_1c8 < uVar9) {
              FUN_0154e5f8(&local_1bc,local_1c8,uVar9,1,1);
              local_1c4 = local_1b8;
              local_1c8 = local_1b4;
            }
            FUN_016dd1aa(local_1c4 + local_1c8,uVar8,uVar9);
            local_1b4 = local_1c8 + uVar9;
          }
          if (uVar7 != 0) {
            thunk_FUN_016d3fb4(uVar8);
          }
          FUN_0151cb64(&local_a8);
          bVar27 = 0xffffffe < uVar22;
          bVar26 = uVar22 == 0xfffffff;
          uVar14 = 0;
          if (uVar22 < 0x10000000) {
            bVar27 = 0x7ffffffb < uVar13;
            bVar26 = uVar13 == 0x7ffffffc;
          }
          if (!bVar27 || bVar26) {
            uVar1 = *(undefined2 *)(param_3 + 0x12);
            uVar2 = *(undefined2 *)(param_3 + 0x10);
            uVar3 = *(undefined2 *)(param_3 + 0xe);
            uVar4 = *(undefined2 *)(param_3 + 0xc);
            uVar7 = thunk_FUN_016d4a50(uVar13);
            if (uVar7 != 0) {
              local_a8 = uVar22;
              local_a4 = uVar7;
              if (uVar13 != 0) {
                uVar22 = *puVar25;
                iVar15 = 4;
                if (0x80000000 < uVar22) {
                  iVar15 = uVar22 + 0x7fffffff;
                }
                    /* WARNING: Could not recover jumptable at 0x0151be88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&DAT_0151be8c + *(int *)(&DAT_0151be8c + iVar15 * 4)))();
                return;
              }
              local_188 = *(undefined4 *)(param_3 + 0x14);
              uStack_184 = *(undefined4 *)(param_3 + 0x18);
              uStack_180 = *(undefined4 *)(param_3 + 0x1c);
              uStack_17c = *(undefined4 *)(param_3 + 0x20);
              local_178 = *(undefined4 *)(param_3 + 0x24);
              uStack_174 = *(undefined4 *)(param_3 + 0x28);
              uStack_170 = *(undefined4 *)(param_3 + 0x2c);
              uStack_16c = *(undefined4 *)(param_3 + 0x30);
              uStack_168 = *(undefined4 *)(param_3 + 0x34);
              local_1a0 = 0x80000003;
              local_128 = 0;
              local_12c = 1;
              local_130 = (undefined4 ***)0x0;
              local_19c = uVar22;
              local_198 = uVar7;
              uStack_194 = uVar22;
              local_190 = uVar4;
              local_18e = uVar3;
              local_18c = uVar2;
              local_18a = uVar1;
              FUN_0150e524(&local_1a0,&local_130,0x80000001);
              local_120 = (undefined4 ****)local_130;
              local_11c = local_12c;
              local_118 = (undefined1 *)local_128;
              FUN_016dd1aa(&local_114,&local_1a0,0x6c);
              puVar25 = &local_a8;
              local_30 = 5;
              FUN_016dd1aa(puVar25,&local_120,0x78);
              FUN_0151eddc(&local_1bc,puVar25);
              iVar15 = 1;
              if (0x80000000 < local_a8) {
                iVar15 = local_a8 + 0x7fffffff;
              }
              uVar28 = local_1a8;
              uVar22 = local_a4;
              switch(iVar15) {
              case 0:
              case 3:
                goto switchD_0151c168_caseD_0;
              case 1:
                FUN_01517c10(auStack_9c);
                uVar22 = local_a8;
                uVar28 = local_1a8;
                if (local_a8 == 0x80000000) goto switchD_0151c168_caseD_0;
                break;
              case 2:
                if (local_a4 == 0x80000000) goto switchD_0151c168_caseD_0;
                puVar25 = (uint *)((uint)puVar25 | 4);
                break;
              default:
                if (local_a4 == 0x80000000) goto switchD_0151c168_caseD_0;
                puVar25 = (uint *)((uint)&local_a8 | 4);
              }
              uVar28 = local_1a8;
              if (uVar22 != 0) {
                thunk_FUN_016d3fb4(puVar25[1]);
                uVar28 = local_1a8;
              }
switchD_0151c168_caseD_0:
              local_1a8._4_4_ = (undefined4 *)((ulonglong)uVar28 >> 0x20);
              puVar5 = local_1a8._4_4_;
              local_1a8._0_4_ = (undefined4)uVar28;
              uVar14 = (undefined4)local_1a8;
              uVar24 = *(undefined4 *)(param_4 + 8);
              iVar15 = *(int *)(param_4 + 0xc);
              (*(code *)local_1a8._4_4_[3])(&local_a8,(undefined4)local_1a8);
              local_1a8 = uVar28;
              pcVar16 = *(code **)(iVar15 + 0x10);
              uVar28 = (*pcVar16)(uVar24,0,pcVar16,param_2 + 0x6c,0x20);
              puVar18 = (undefined4 *)((ulonglong)uVar28 >> 0x20);
              uVar24 = (undefined4)uVar28;
              if (0x40 < local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(0,local_68,0x40,&DAT_018a7f14);
              }
              local_130 = (undefined4 ***)CONCAT22(local_130._2_2_,0x800);
              local_110 = &DAT_0040c506;
              local_118 = &local_2b;
              local_2b = 0x21;
              local_100 = &local_2a;
              local_108 = &DAT_0040c4e9;
              local_11c = 2;
              local_2a = (undefined1)local_68;
              local_f4 = local_68;
              local_fc = 1;
              local_104 = 0x1b;
              local_10c = 6;
              local_114 = 1;
              local_19c = 0;
              local_1a0 = 0;
              local_120 = &local_130;
              local_f8 = &local_a8;
              iVar15 = (*(code *)puVar18[3])(uVar24,&local_120,6,&local_1a0,8);
              uVar13 = local_19c;
              uVar22 = local_1a0;
              if (iVar15 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74f8(&DAT_0040c50c,0x24,auStack_29,&DAT_018a8a48,&DAT_018a8b18);
              }
              if ((code *)*puVar18 != (code *)0x0) {
                (*(code *)*puVar18)(uVar24);
              }
              if (puVar18[1] != 0) {
                thunk_FUN_016d3fb4(uVar24);
              }
              uVar7 = 0;
              if (puVar23[3] == 8) {
                pbVar21 = (byte *)puVar23[2];
                uVar7 = FUN_0156249c((uint)*pbVar21 == (uVar22 & 0xff));
                uVar8 = FUN_0156249c((uint)pbVar21[1] == (uVar22 >> 8 & 0xff));
                uVar9 = FUN_0156249c((uint)pbVar21[2] == (uVar22 >> 0x10 & 0xff));
                uVar22 = FUN_0156249c((uint)pbVar21[3] == uVar22 >> 0x18);
                uVar10 = FUN_0156249c((uint)pbVar21[4] == (uVar13 & 0xff));
                uVar11 = FUN_0156249c((uint)pbVar21[5] == (uVar13 >> 8 & 0xff));
                uVar12 = FUN_0156249c((uint)pbVar21[6] == (uVar13 >> 0x10 & 0xff));
                uVar13 = FUN_0156249c((uint)pbVar21[7] == uVar13 >> 0x18);
                uVar7 = uVar7 & uVar8 & uVar9 & uVar22 & uVar10 & uVar11 & uVar12 & uVar13 & 1;
              }
              cVar6 = FUN_0156249c(uVar7);
              *param_1 = 0x80000029;
              pcVar16 = (code *)*puVar5;
              *(bool *)(param_1 + 1) = cVar6 != '\0';
              if (pcVar16 != (code *)0x0) {
                (*pcVar16)(uVar14);
              }
              if (puVar5[1] != 0) {
                thunk_FUN_016d3fb4(uVar14);
              }
              if ((local_1bc & 0x7fffffff) == 0) {
                return;
              }
              thunk_FUN_016d3fb4(local_1b8);
              return;
            }
            uVar14 = 4;
          }
          local_e0 = uVar13;
LAB_0151be08:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar14,local_e0);
        }
        break;
      }
      uVar7 = uVar7 - 0x10;
      puVar23 = puVar23 + 4;
    } while (uVar7 != 0);
  }
  *param_1 = 0x80000029;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

