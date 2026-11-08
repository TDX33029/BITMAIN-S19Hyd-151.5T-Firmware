// FUN_01924bf4 @ 01924bf4 size=2652 calls_out=29 calls_in=0
// strings: 

void FUN_01924bf4(int *param_1,undefined4 *param_2,int *param_3,uint *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined **ppuVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  char cVar14;
  uint *puVar15;
  int iVar16;
  undefined1 uVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  undefined4 uVar21;
  uint *puVar22;
  undefined8 uVar23;
  int local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  int local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  int local_1b8;
  int local_1b4;
  uint *puStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int local_198;
  int local_170;
  uint *puStack_16c;
  int iStack_168;
  int local_160;
  uint *local_15c;
  undefined4 local_158;
  int local_154;
  uint *puStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 auStack_11c [4];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 auStack_fc [20];
  undefined2 local_e8;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((*param_4 < 0x80000001) && ((undefined1 *)param_4[3] == &DAT_80000010)) {
    puVar15 = param_4 + 4;
LAB_01924c80:
    piVar7 = param_2 + 0x4e;
    FUN_0191e124(piVar7,param_4);
    uVar18 = puVar15[1];
    iVar16 = *param_3;
    local_158 = 0;
    local_160 = 0;
    iVar12 = puVar15[2] * 0x14;
    do {
      iVar8 = iVar12;
      if (iVar8 == 0) break;
      FUN_018eb4c8(uVar18);
      uVar3 = FUN_018eb328();
      iVar4 = FUN_01930aa8(&local_160,uVar3);
      uVar18 = uVar18 + 0x14;
      iVar12 = iVar8 + -0x14;
    } while (iVar4 != 0);
    FUN_0192f740(&local_160);
    puVar22 = (uint *)0x100001;
    if (iVar8 == 0) {
      uVar19 = puVar15[2];
      uVar18 = puVar15[1];
      iVar12 = FUN_019258ac(param_2[0x59],param_2[0x5a],uVar18,uVar19,2,0);
      puVar22 = (uint *)0x1a0001;
      uVar17 = 0x46;
      if (iVar12 == 0) {
        uVar10 = 0;
        if (uVar19 != 0) {
          uVar10 = uVar18;
          do {
            uVar10 = uVar10 + 0x14;
            uVar23 = FUN_018eb4c8();
            uVar11 = (uint)((ulonglong)uVar23 >> 0x20);
            iVar12 = 0;
            do {
              uVar13 = (uint)uVar23 & 0xffff;
              if ((*(ushort *)((int)&DAT_00523862 + iVar12) == uVar13) &&
                 ((uVar13 != 0x2a ||
                  ((uint)*(ushort *)((int)&DAT_00523864 + iVar12) == (uVar11 & 0xffff))))) {
                uVar17 = 2;
                goto LAB_01924e7c;
              }
              iVar12 = iVar12 + 4;
            } while (iVar12 != 0xc);
            iVar12 = 0;
            do {
              if ((*(ushort *)((int)&DAT_00568548 + iVar12) == uVar13) &&
                 ((uVar13 != 0x2a ||
                  ((uint)*(ushort *)((int)&DAT_0056854a + iVar12) == (uVar11 & 0xffff))))) {
                uVar17 = 2;
                goto LAB_01924e7c;
              }
              iVar12 = iVar12 + 4;
            } while (iVar12 != 0x10);
          } while (uVar10 != uVar18 + uVar19 * 0x14);
          uVar10 = uVar19;
        }
        pcVar5 = (char *)FUN_018e3fe8(uVar18,uVar10,0x10);
        if (pcVar5 == (char *)0x0) {
          pcVar6 = (char *)0x0;
        }
        else {
          pcVar6 = pcVar5 + 4;
          if (*pcVar5 != '\x04') {
            pcVar6 = (char *)0x0;
          }
        }
        FUN_01929e8c(&local_160,iVar16,param_2[0x56],param_2[0x57],pcVar6);
        if (local_160 != -0x7fffffd7) {
          piVar7 = (int *)((uint)&local_160 | 4);
          iVar12 = piVar7[1];
          iVar16 = piVar7[2];
          param_1[1] = *piVar7;
          param_1[2] = iVar12;
          param_1[3] = iVar16;
          iVar12 = piVar7[4];
          iVar16 = piVar7[5];
          iVar8 = piVar7[6];
          param_1[4] = piVar7[3];
          param_1[5] = iVar12;
          param_1[6] = iVar16;
          param_1[7] = iVar8;
          *param_1 = local_160;
          goto LAB_01924ec0;
        }
        pcVar5 = (char *)FUN_018e3fe8(puVar15[1],puVar15[2],0x12);
        if (pcVar5 == (char *)0x0) {
          pcVar6 = (char *)0x0;
        }
        else {
          pcVar6 = pcVar5 + 1;
          if (*pcVar5 != '\n') {
            pcVar6 = (char *)0x0;
          }
        }
        iVar12 = *(int *)(param_2[0x47] + 0x88);
        uVar3 = (**(code **)(iVar12 + 0x14))
                          (*(int *)(param_2[0x47] + 0x84) + (*(int *)(iVar12 + 8) - 1U & 0xfffffff8)
                           + 8);
        if (pcVar6 == (char *)0x0) {
          cVar14 = '\x03';
        }
        else {
          cVar14 = *pcVar6;
        }
        FUN_0192f21c(&local_160,iVar16,uVar3,cVar14,0x12);
        if (local_160 == -0x7fffffd7) {
          pcVar5 = (char *)FUN_018e3fe8(puVar15[1],puVar15[2],0x13);
          if (pcVar5 == (char *)0x0) {
            pcVar6 = (char *)0x0;
          }
          else {
            pcVar6 = pcVar5 + 1;
            if (*pcVar5 != '\t') {
              pcVar6 = (char *)0x0;
            }
          }
          iVar12 = *(int *)(param_2[0x47] + 0xa4);
          uVar3 = (**(code **)(iVar12 + 0x20))
                            (*(int *)(param_2[0x47] + 0xa0) +
                             (*(int *)(iVar12 + 8) - 1U & 0xfffffff8) + 8);
          if (pcVar6 == (char *)0x0) {
            cVar14 = '\x03';
          }
          else {
            cVar14 = *pcVar6;
          }
          FUN_0192f21c(&local_160,iVar16,uVar3,cVar14,0x13);
          if (local_160 == -0x7fffffd7) {
            iVar12 = param_3[1];
            cVar14 = *(char *)(iVar12 + 8);
            pcVar5 = (char *)FUN_018e3fe8(puVar15[1],puVar15[2],0x28);
            if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\x0f')) {
              local_160 = -0x80000000;
            }
            else {
              FUN_018e3654(&local_160,*(undefined4 *)(pcVar5 + 8),*(undefined4 *)(pcVar5 + 0xc));
            }
            local_1b8 = CONCAT31(local_1b8._1_3_,cVar14);
            local_1b4 = local_160;
            puStack_1b0 = local_15c;
            iStack_1ac = local_158;
            if (local_160 == -0x80000000) {
              if (cVar14 == '\x04') {
LAB_01925208:
                FUN_01925984(&local_1d8,&local_1b4);
              }
              else {
                local_1d8 = -0x80000000;
              }
            }
            else {
              if (cVar14 == '\0' || cVar14 == '\x03') {
                local_e8 = 4;
                local_15c = (uint *)0x1a0001;
                local_160 = -0x7fffffff;
                FUN_018f1fc4(iVar16,&local_160,*(char *)(iVar16 + 0x31) == '\x02');
                *(undefined1 *)(param_1 + 1) = 0x4a;
                *param_1 = (int)&DAT_8000001c;
                *(undefined1 *)(iVar16 + 0x255) = 1;
                FUN_018e3a84(&local_1b4);
                goto LAB_01924ec0;
              }
              if (cVar14 == '\x04') goto LAB_01925208;
              local_1d8 = -0x80000000;
              FUN_018e3a84(&local_1b4);
            }
            if (*(char *)(iVar16 + 0x259) == '\0') {
LAB_019252b4:
              if (param_2[0x1f] == -0x80000000) {
                iVar12 = FUN_018e3fe8(puVar15[1],puVar15[2],0x19);
                uVar17 = 10;
                if (iVar12 != 0) goto LAB_019252dc;
                if (*(char *)(iVar16 + 0x25d) == '\x03') {
                  *(undefined1 *)(iVar16 + 0x25d) = 0;
                }
                if (*(char *)((int)param_2 + 0x16e) == '\0') {
                  uVar21 = param_2[0x47];
                  local_138 = param_2[0x49];
                  uStack_134 = param_2[0x4a];
                  uStack_130 = param_2[0x4b];
                  uStack_12c = param_2[0x4c];
                  uStack_128 = param_2[0x4d];
                  local_88 = *param_2;
                  uStack_84 = param_2[1];
                  uStack_80 = param_2[2];
                  uStack_7c = param_2[3];
                  uStack_78 = param_2[4];
                  local_74 = param_2[5];
                  uStack_70 = param_2[6];
                  uStack_6c = param_2[7];
                  local_68 = param_2[8];
                  uStack_64 = param_2[9];
                  local_60 = param_2[10];
                  uStack_5c = param_2[0xb];
                  uStack_58 = param_2[0xc];
                  local_54 = param_2[0xd];
                  uStack_50 = param_2[0xe];
                  uStack_4c = param_2[0xf];
                  uVar3 = param_2[0x48];
                  local_160 = *piVar7;
                  local_15c = (uint *)param_2[0x4f];
                  local_158 = param_2[0x50];
                  local_154 = param_2[0x51];
                  puStack_150 = (uint *)param_2[0x52];
                  iStack_14c = param_2[0x53];
                  iStack_148 = param_2[0x54];
                  FUN_01bed4e2(auStack_11c,param_2 + 0x22,0x94);
                  iStack_144 = local_1d8;
                  uStack_140 = uStack_1d4;
                  uStack_13c = uStack_1d0;
                  local_124 = uVar21;
                  local_120 = uVar3;
                  iVar12 = FUN_01925cc4(0x118,4);
                  FUN_01bed4e2(iVar12,&local_160,0x118);
                  ppuVar9 = &PTR_FUN_01d254b0;
                }
                else {
                  uVar21 = param_2[0x47];
                  local_138 = param_2[0x49];
                  uStack_134 = param_2[0x4a];
                  uStack_130 = param_2[0x4b];
                  uStack_12c = param_2[0x4c];
                  uStack_128 = param_2[0x4d];
                  local_88 = *param_2;
                  uStack_84 = param_2[1];
                  uStack_80 = param_2[2];
                  uStack_7c = param_2[3];
                  uStack_78 = param_2[4];
                  local_74 = param_2[5];
                  uStack_70 = param_2[6];
                  uStack_6c = param_2[7];
                  local_68 = param_2[8];
                  uStack_64 = param_2[9];
                  local_60 = param_2[10];
                  uStack_5c = param_2[0xb];
                  uStack_58 = param_2[0xc];
                  local_54 = param_2[0xd];
                  uStack_50 = param_2[0xe];
                  uStack_4c = param_2[0xf];
                  uVar3 = param_2[0x48];
                  local_160 = *piVar7;
                  local_15c = (uint *)param_2[0x4f];
                  local_158 = param_2[0x50];
                  local_154 = param_2[0x51];
                  puStack_150 = (uint *)param_2[0x52];
                  iStack_14c = param_2[0x53];
                  iStack_148 = param_2[0x54];
                  FUN_01bed4e2(auStack_11c,param_2 + 0x22,0x94);
                  iStack_144 = local_1d8;
                  uStack_140 = uStack_1d4;
                  uStack_13c = uStack_1d0;
                  local_124 = uVar21;
                  local_120 = uVar3;
                  iVar12 = FUN_01925cc4(0x118,4);
                  FUN_01bed4e2(iVar12,&local_160,0x118);
                  ppuVar9 = (undefined **)&DAT_01d254d8;
                }
                *param_1 = -0x7fffffd7;
                param_1[1] = iVar12;
                param_1[2] = (int)ppuVar9;
              }
              else {
                FUN_01bed4e2(&local_1b8,param_2 + 0x10,0x48);
                if (*(char *)(iVar16 + 0x254) != '\0') {
                  iVar8 = FUN_018e3fe8(puVar15[1],puVar15[2],0x19);
                  pcVar5 = (char *)(iVar12 + 4);
                  if (iVar8 == 0) {
                    *pcVar5 = '\x04';
                    *(undefined1 *)(iVar16 + 0x254) = 0;
                  }
                  else {
                    if (*pcVar5 != '\x01') {
                      FUN_0192f1ac(pcVar5,&DAT_00528c36,&DAT_01d25088);
                    /* WARNING: Does not return */
                      pcVar1 = (code *)software_udf(0xfdee,0x192564c);
                      (*pcVar1)();
                    }
                    *pcVar5 = '\x02';
                    if (*(char *)(iVar16 + 0x254) != '\0') goto LAB_01925454;
                  }
                  FUN_018fe45c(param_2[0x24],param_2 + 0x25,iVar16);
                }
LAB_01925454:
                FUN_018e307c(&local_160,*(undefined4 *)(local_198 + 0xc),
                             *(undefined4 *)(local_198 + 0x10));
                local_170 = local_160;
                puStack_16c = local_15c;
                iStack_168 = local_158;
                piVar20 = (int *)(iVar16 + 0x228);
                if (*piVar20 != -0x80000000) {
                  FUN_0190f040(piVar20);
                }
                *piVar20 = local_170;
                *(uint **)(iVar16 + 0x22c) = puStack_16c;
                *(int *)(iVar16 + 0x230) = iStack_168;
                *(undefined1 *)(iVar16 + 0x25d) = 2;
                uVar21 = param_2[0x47];
                local_118 = param_2[0x49];
                uStack_114 = param_2[0x4a];
                uStack_110 = param_2[0x4b];
                uStack_10c = param_2[0x4c];
                uStack_108 = param_2[0x4d];
                local_68 = *param_2;
                uStack_64 = param_2[1];
                local_60 = param_2[2];
                uStack_5c = param_2[3];
                uStack_58 = param_2[4];
                local_54 = param_2[5];
                uStack_50 = param_2[6];
                uStack_4c = param_2[7];
                uStack_48 = param_2[8];
                uStack_44 = param_2[9];
                local_40 = param_2[10];
                uStack_3c = param_2[0xb];
                uStack_38 = param_2[0xc];
                uStack_34 = param_2[0xd];
                uStack_30 = param_2[0xe];
                uStack_2c = param_2[0xf];
                uVar3 = param_2[0x48];
                local_160 = *piVar7;
                local_15c = (uint *)param_2[0x4f];
                local_158 = param_2[0x50];
                local_154 = param_2[0x51];
                puStack_150 = (uint *)param_2[0x52];
                iStack_14c = param_2[0x53];
                iStack_148 = param_2[0x54];
                FUN_01bed4e2(auStack_fc,param_2 + 0x22,0x94);
                iStack_144 = local_1d8;
                uStack_140 = uStack_1d4;
                uStack_13c = uStack_1d0;
                local_138 = 0x80000002;
                local_104 = uVar21;
                local_100 = uVar3;
                iVar12 = FUN_01925cc4(0x138,4);
                FUN_01bed4e2(iVar12,&local_160,0x138);
                *param_1 = -0x7fffffd7;
                param_1[1] = iVar12;
                param_1[2] = (int)&DAT_01d253ac;
                FUN_0191fb20(&local_1b8);
              }
              FUN_0191edf0(param_4);
              FUN_01925dc4(param_2 + 0x55);
              goto LAB_01924f40;
            }
            FUN_018e40dc(&local_1c8,puVar15[1],puVar15[2]);
            if (local_1c8 != -0x80000000) {
              iVar8 = *(int *)(iVar16 + 0x90);
              if (iVar8 != -0x80000000) {
                FUN_0134bd64(iVar8,*(undefined4 *)(iVar16 + 0x94));
              }
              *(int *)(iVar16 + 0x90) = local_1c8;
              *(undefined4 *)(iVar16 + 0x94) = uStack_1c4;
              *(undefined4 *)(iVar16 + 0x98) = uStack_1c0;
              goto LAB_019252b4;
            }
            local_e8 = 4;
            local_15c = (uint *)0x190001;
            local_160 = -0x7fffffff;
            FUN_018f1fc4(iVar16,&local_160,*(char *)(iVar16 + 0x31) == '\x02');
            uVar17 = 0x21;
            *(undefined1 *)(iVar16 + 0x255) = 1;
LAB_019252dc:
            *(undefined1 *)(param_1 + 1) = uVar17;
            *param_1 = (int)&DAT_8000001c;
            if (local_1d8 != -0x80000000) {
              FUN_018e3a84(&local_1d8);
            }
            goto LAB_01924ec0;
          }
          param_1[1] = (int)local_15c;
          *(undefined2 *)(param_1 + 2) = (undefined2)local_158;
        }
        else {
          param_1[1] = (int)local_15c;
          *(undefined2 *)(param_1 + 2) = (undefined2)local_158;
        }
        iVar12 = local_160;
        FUN_01bed4e2((int)param_1 + 10,(int)&local_158 + 2,0x16);
        *param_1 = iVar12;
        goto LAB_01924ec0;
      }
    }
    else {
      uVar17 = 4;
    }
LAB_01924e7c:
    local_e8 = 4;
    local_160 = -0x7fffffff;
    local_15c = puVar22;
    FUN_018f1fc4(iVar16,&local_160,*(char *)(iVar16 + 0x31) == '\x02');
    *(undefined1 *)(param_1 + 1) = uVar17;
    *(undefined1 *)(iVar16 + 0x255) = 1;
    *param_1 = (int)&DAT_8000001c;
  }
  else {
    FUN_0191d9a0(&local_160,param_4,&DAT_0052389f,1,&DAT_0052383f,1);
    local_1b8 = local_158;
    local_1b4 = local_154;
    puStack_1b0 = puStack_150;
    iStack_1ac = iStack_14c;
    iStack_1a8 = iStack_148;
    iStack_1a4 = iStack_144;
    if (local_160 == -0x7fffffd7) {
      puVar15 = local_15c;
      goto LAB_01924c80;
    }
    param_1[2] = local_158;
    param_1[3] = local_154;
    param_1[4] = (int)puStack_150;
    param_1[5] = iStack_14c;
    param_1[6] = iStack_148;
    param_1[7] = iStack_144;
    *param_1 = local_160;
    param_1[1] = (int)local_15c;
  }
LAB_01924ec0:
  FUN_0191edf0(param_4);
  piVar7 = (int *)param_2[0x47];
  DataMemoryBarrier(0xb);
  do {
    iVar12 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar12 + -1;
  if (iVar12 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa168(param_2[0x47]);
  }
  if (param_2[0x1f] != -0x80000000) {
    FUN_0191fb20(param_2 + 0x10);
  }
  if ((*(char *)(param_2 + 0x49) == '\0') && (param_2[0x4a] != -0x80000000)) {
    FUN_0134bd64(param_2[0x4a],param_2[0x4b]);
  }
  FUN_01902274(param_2 + 0x4e);
  FUN_019217b0(param_2 + 0x22);
  FUN_01925dc4(param_2 + 0x55);
LAB_01924f40:
  thunk_FUN_01be4678(param_2);
  return;
}

