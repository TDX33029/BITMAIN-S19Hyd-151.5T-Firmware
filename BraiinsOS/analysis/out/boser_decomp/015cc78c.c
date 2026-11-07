// FUN_015cc78c @ 015cc78c size=4448 calls_out=28 calls_in=1
// strings: mdns_sd::service_info | mdns_sd::service_info | mdns_sd::service_info | mdns_sd::service_info

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015cc78c(undefined4 param_1,code *param_2,undefined4 ***param_3,undefined4 ***param_4,
                 undefined4 **param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  code *pcVar8;
  uint *puVar9;
  int iVar10;
  undefined1 uVar11;
  uint *puVar12;
  undefined4 ***pppuVar13;
  int iVar14;
  int *piVar15;
  undefined4 ****ppppuVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  uint *puVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 ****ppppuVar24;
  undefined4 uVar25;
  undefined1 *puVar26;
  undefined4 ****ppppuVar27;
  uint uVar28;
  undefined4 uVar29;
  uint uVar30;
  code *pcVar31;
  undefined4 ****ppppuVar32;
  undefined4 ***pppuVar33;
  uint uVar34;
  code *pcVar35;
  bool bVar36;
  bool bVar37;
  longlong lVar38;
  undefined8 uVar39;
  int local_174;
  code *local_170;
  undefined4 ****local_168;
  undefined4 ***local_164;
  code *local_15c;
  undefined4 ***local_158;
  undefined4 ***pppuStack_154;
  undefined4 **ppuStack_150;
  int local_14c;
  uint *local_148;
  uint local_144;
  int local_140;
  int local_13c;
  uint local_138;
  uint uStack_134;
  uint local_130;
  uint local_12c;
  int local_128;
  int local_124;
  int local_120;
  undefined4 ***local_11c;
  undefined4 ****local_118;
  undefined4 ***local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined4 ***local_e4;
  undefined4 local_e0;
  code *local_dc;
  undefined4 ****local_d8;
  int local_c8 [2];
  int local_c0;
  int local_bc;
  code *local_b8;
  undefined4 local_a8;
  undefined4 ****local_a4;
  code *local_a0;
  undefined4 ****local_9c;
  code *local_98;
  undefined4 ****local_88;
  code *local_84;
  undefined4 ****local_80;
  undefined4 ****local_78;
  code *local_74;
  undefined4 ****local_70;
  undefined4 ***local_6c;
  undefined4 ****local_68;
  undefined4 ***local_64;
  undefined4 ****local_60;
  code *local_5c;
  undefined4 ****local_58;
  code *local_54;
  undefined4 ****local_50;
  undefined4 ****local_48;
  code *local_44;
  undefined4 ****local_40;
  undefined4 ****local_3c;
  undefined4 ***local_38;
  undefined4 ****local_34;
  undefined4 ****local_30;
  code *local_2c;
  
  local_14c = param_6;
  ppuStack_150 = param_5;
  local_158 = param_3;
  pppuStack_154 = param_4;
  lVar38 = FUN_015fbb98();
  local_170 = (code *)((ulonglong)lVar38 >> 0x20);
  uVar23 = 0;
  if ((int)param_4 < 0) {
LAB_015cc7c8:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar23,param_4);
  }
  uVar29 = 0;
  if (param_4 == (undefined4 ***)0x0) {
    local_164 = (undefined4 ***)0x0;
    local_168 = (undefined4 ****)&DAT_00000001;
  }
  else {
    uVar23 = 1;
    local_168 = (undefined4 ****)FUN_01298504(param_4,1);
    local_164 = param_4;
    if (local_168 == (undefined4 ****)0x0) goto LAB_015cc7c8;
  }
  FUN_01bed4e2(local_168,param_3,param_4);
  if (param_6 < 0) {
LAB_015cc830:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar29,param_6);
  }
  if (param_6 == 0) {
    iVar2 = 1;
    local_174 = 0;
  }
  else {
    uVar29 = 1;
    iVar2 = FUN_01298504(param_6,1);
    if (iVar2 == 0) goto LAB_015cc830;
    local_174 = param_6;
  }
  uVar23 = FUN_01bed4e2(iVar2,param_5,param_6);
  uVar39 = thunk_FUN_01bee35a(uVar23,0x2c0);
  puVar20 = (uint *)((int)uVar39 + (int)((ulonglong)uVar39 >> 0x20));
  if ((char)puVar20[4] == '\0') {
    FUN_019ae6ac(&local_48);
    *puVar20 = (uint)local_48;
    puVar20[1] = (uint)local_44;
    puVar20[2] = (uint)local_40;
    puVar20[3] = (uint)local_3c;
    *(undefined1 *)(puVar20 + 4) = 1;
  }
  local_138 = *puVar20;
  uStack_134 = puVar20[1];
  local_12c = puVar20[3];
  *puVar20 = local_138 + 1;
  puVar9 = puVar20 + 2;
  local_130 = *puVar9;
  puVar20[1] = uStack_134 + (0xfffffffe < local_138);
  local_148 = &DAT_0056d238;
  local_144 = 0;
  local_140 = 0;
  local_13c = 0;
  local_11c = local_164;
  local_100 = 1;
  local_110 = local_174;
  local_128 = -0x80000000;
  local_f4 = 4;
  iVar14 = 0;
  local_ec = 0;
  local_fc = 0;
  local_104 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_118 = local_168;
  local_114 = param_4;
  local_10c = iVar2;
  local_108 = param_6;
  if (*(int *)(param_2 + 0x8c) != 0) {
    uVar3 = FUN_01a9c24c(*(undefined4 *)(param_2 + 0x90),*(undefined4 *)(param_2 + 0x94),
                         *(undefined4 *)(param_2 + 0x98),*(undefined4 *)(param_2 + 0x9c),param_5,
                         param_6);
    iVar2 = *(int *)(param_2 + 0x80);
    local_168 = (undefined4 ****)((uVar3 >> 0x19) * 0x1010101);
    uVar21 = *(uint *)(param_2 + 0x84);
    while( true ) {
      uVar3 = uVar21 & uVar3;
      local_164 = *(undefined4 ****)(iVar2 + uVar3);
      uVar30 = ~((uint)local_164 ^ (uint)local_168) & 0x80808080 &
               ((uint)local_164 ^ (uint)local_168) + 0xfefefeff;
      while (uVar30 != 0) {
        uVar4 = uVar30 >> 8;
        uVar17 = uVar30 >> 0x10;
        uVar28 = uVar30 >> 0x18;
        uVar34 = uVar30 << 0x18;
        uVar30 = uVar30 - 1 & uVar30;
        uVar4 = uVar3 + ((uint)LZCOUNT(uVar34 | (uVar4 & 0xff) << 0x10 | (uVar17 & 0xff) << 8 |
                                       uVar28) >> 3) & uVar21;
        iVar5 = iVar2 + -0x18 + uVar4 * -0x18;
        if ((param_6 == *(int *)(iVar5 + 8)) &&
           (iVar5 = thunk_FUN_01bed842(param_5,*(undefined4 *)(iVar5 + 4),param_6), iVar5 == 0)) {
          iVar2 = iVar2 + uVar4 * -0x18;
          local_e4 = (undefined4 ***)(iVar2 + -0xc);
          if (4 < DAT_01d51b00) {
            local_38 = &ppuStack_150;
            local_40 = &local_e4;
            local_34 = (undefined4 ****)&LAB_018a13b8;
            local_44 = (code *)&LAB_018a13b8;
            local_48 = &local_158;
            local_3c = (undefined4 ****)&LAB_0193a90c;
            local_50 = (undefined4 ****)&DAT_01cfcf68;
            local_54 = (code *)&DAT_00000017;
            local_58 = (undefined4 ****)0x4b3d9f;
            local_5c = (code *)&DAT_00000017;
            local_60 = (undefined4 ****)0x4b3d9f;
            FUN_015fb650(&DAT_00574e75,&local_48,5,&local_60);
            if (local_128 != -0x80000000) goto LAB_015ccb80;
          }
          iVar14 = *(int *)(iVar2 + -4);
          if (iVar14 < 0) goto LAB_015ccc50;
          uVar23 = *(undefined4 *)(iVar2 + -8);
          if (iVar14 == 0) {
            iVar5 = 1;
            iVar2 = 0;
          }
          else {
            uVar29 = 1;
            iVar5 = FUN_01298504(iVar14,1);
            if (iVar5 == 0) goto LAB_015ccc54;
            iVar2 = iVar14;
          }
          FUN_01bed4e2(iVar5,uVar23,iVar14);
          if (local_128 != -0x80000000) {
            FUN_0134bd64(local_128,local_124);
          }
          local_128 = iVar2;
          local_124 = iVar5;
          local_120 = iVar14;
          goto LAB_015ccb80;
        }
      }
      if (((uint)local_164 & 0x80808080 & (int)local_164 << 1) != 0) break;
      iVar14 = iVar14 + 4;
      uVar3 = uVar3 + iVar14;
    }
  }
LAB_015ccb80:
  iVar2 = FUN_015f31cc(param_2,param_5,param_6);
  if (iVar2 != 0) {
    iVar14 = *(int *)(iVar2 + 8) * 0x18;
    piVar1 = (int *)(*(int *)(iVar2 + 4) + 0x14);
    do {
      piVar15 = piVar1;
      if (iVar14 == 0) goto LAB_015ccccc;
      iVar2 = (**(code **)(*piVar15 + 0x58))
                        (piVar15[-1],*(code **)(*piVar15 + 0x58),(int)lVar38,local_170);
      iVar14 = iVar14 + -0x18;
      piVar1 = piVar15 + 6;
    } while (iVar2 != 0);
    uVar39 = (**(code **)(*piVar15 + 0x1c))(piVar15[-1]);
    iVar2 = (int)uVar39;
    (**(code **)((int)((ulonglong)uVar39 >> 0x20) + 0xc))(&local_48,iVar2);
    if ((local_48 == (undefined4 ****)0xc1377bba && local_40 == (undefined4 ****)0xdb64db63) &&
        (local_44 == (code *)0x60d24636 && local_3c == (undefined4 ****)0x7ab693b4)) {
      iVar14 = *(int *)(iVar2 + 0x48);
      if (iVar14 < 0) {
LAB_015ccc50:
        uVar29 = 0;
LAB_015ccc54:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar29,iVar14);
      }
      uVar23 = *(undefined4 *)(iVar2 + 0x44);
      if (iVar14 == 0) {
        iVar6 = 1;
        iVar5 = 0;
      }
      else {
        uVar29 = 1;
        iVar6 = FUN_01298504(iVar14,1);
        if (iVar6 == 0) goto LAB_015ccc54;
        iVar5 = iVar14;
      }
      FUN_01bed4e2(iVar6,uVar23,iVar14);
      FUN_0134bd64(local_104,local_100);
      local_ec = *(undefined2 *)(iVar2 + 0x50);
      local_104 = iVar5;
      local_100 = iVar6;
      local_fc = iVar14;
    }
  }
LAB_015ccccc:
  iVar2 = FUN_015f3058(param_2,param_5,param_6);
  if (iVar2 != 0) {
    iVar14 = *(int *)(iVar2 + 8) * 0x18;
    piVar1 = (int *)(*(int *)(iVar2 + 4) + 0x14);
    do {
      piVar15 = piVar1;
      if (iVar14 == 0) goto LAB_015cd1dc;
      iVar2 = (**(code **)(*piVar15 + 0x58))
                        (piVar15[-1],*(code **)(*piVar15 + 0x58),(int)lVar38,local_170);
      iVar14 = iVar14 + -0x18;
      piVar1 = piVar15 + 6;
    } while (iVar2 != 0);
    uVar39 = (**(code **)(*piVar15 + 0x1c))(piVar15[-1]);
    iVar2 = (int)uVar39;
    (**(code **)((int)((ulonglong)uVar39 >> 0x20) + 0xc))(&local_48,iVar2);
    if ((local_48 == (undefined4 ****)0x4e7f3c27 && local_40 == (undefined4 ****)0x260a2f6c) &&
        (local_44 == (code *)0x1529d282 && local_3c == (undefined4 ****)0xc33f7401)) {
      pppuVar13 = *(undefined4 ****)(iVar2 + 0x48);
      iVar2 = *(int *)(iVar2 + 0x44);
      pppuVar33 = (undefined4 ***)0x0;
      local_70 = (undefined4 ****)0x0;
      local_74 = (code *)&SUB_00000004;
      local_78 = (undefined4 ****)0x0;
      if (pppuVar13 != (undefined4 ***)0x0) {
        while( true ) {
          ppppuVar24 = (undefined4 ****)(uint)*(byte *)(iVar2 + (int)pppuVar33);
          local_68 = ppppuVar24;
          if (ppppuVar24 == (undefined4 ****)0x0) break;
          local_6c = (undefined4 ***)((int)pppuVar33 + 1);
          pppuVar33 = (undefined4 ***)((int)local_6c + (int)ppppuVar24);
          local_64 = pppuVar33;
          if (pppuVar13 < pppuVar33) {
            if (3 < DAT_01d51b00) {
              local_30 = &local_88;
              local_38 = &local_64;
              local_50 = (undefined4 ****)&DAT_01cfdaa0;
              local_40 = &local_68;
              local_2c = FUN_012fd02c;
              local_34 = (undefined4 ****)FUN_012fd02c;
              local_3c = (undefined4 ****)FUN_012fd02c;
              local_44 = FUN_012fd02c;
              local_48 = &local_6c;
              local_54 = (code *)&DAT_00000015;
              local_5c = (code *)&DAT_00000015;
              local_58 = (undefined4 ****)0x4b3e3b;
              local_60 = (undefined4 ****)0x4b3e3b;
              local_88 = (undefined4 ****)pppuVar13;
              FUN_015fb650(&DAT_005951cf,&local_48,4,&local_60);
            }
            break;
          }
          puVar26 = (undefined1 *)(iVar2 + (int)local_6c);
          ppppuVar16 = (undefined4 ****)0x0;
          do {
            if (puVar26[(int)ppppuVar16] == '=') {
              pcVar7 = (code *)&DAT_00000001;
              local_164 = (undefined4 ***)&DAT_00000001;
              ppppuVar27 = (undefined4 ****)0x0;
              if (ppppuVar16 != (undefined4 ****)0x0) {
                pcVar7 = (code *)FUN_01298504(ppppuVar16,1);
                ppppuVar27 = ppppuVar16;
                if (pcVar7 == (code *)0x0) goto LAB_015cd8d4;
              }
              FUN_01bed4e2(pcVar7,puVar26,ppppuVar16);
              local_168 = (undefined4 ****)((int)ppppuVar24 - ((int)ppppuVar16 + 1));
              ppppuVar32 = (undefined4 ****)0x0;
              if (local_168 != (undefined4 ****)0x0) {
                local_164 = (undefined4 ***)FUN_01298504(local_168,1);
                ppppuVar32 = local_168;
                if (local_164 == (undefined4 ***)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00664620(1,local_168);
                }
              }
              FUN_01bed4e2(local_164,puVar26 + (int)((int)ppppuVar16 + 1),local_168);
              goto LAB_015ccf04;
            }
            ppppuVar16 = (undefined4 ****)((int)ppppuVar16 + 1);
          } while (ppppuVar24 != ppppuVar16);
          pcVar7 = (code *)FUN_01298504(ppppuVar24,1);
          ppppuVar16 = ppppuVar24;
          if (pcVar7 == (code *)0x0) {
LAB_015cd8d4:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,ppppuVar16);
          }
          FUN_01bed4e2(pcVar7,puVar26,ppppuVar24);
          ppppuVar32 = (undefined4 ****)&DAT_80000000;
          ppppuVar27 = ppppuVar24;
LAB_015ccf04:
          local_e0 = ppppuVar27;
          local_dc = pcVar7;
          local_d8 = ppppuVar16;
          FUN_012fbd94(&local_48,pcVar7,ppppuVar16);
          ppppuVar24 = local_70;
          if (local_48 == (undefined4 ****)0x0) {
            local_48 = local_e0;
            local_44 = local_dc;
            local_38 = local_164;
            local_40 = ppppuVar16;
            local_3c = ppppuVar32;
            local_34 = local_168;
            if (local_70 == local_78) {
              FUN_015f5b18(&local_78);
            }
            pcVar7 = local_74 + (int)ppppuVar24 * 0x18;
            *(undefined4 *****)pcVar7 = local_48;
            *(code **)(pcVar7 + 4) = local_44;
            *(undefined4 *****)(pcVar7 + 8) = local_40;
            *(undefined4 *****)(pcVar7 + 0xc) = local_3c;
            *(undefined4 ****)(pcVar7 + 0x10) = local_38;
            *(undefined4 *****)(pcVar7 + 0x14) = local_34;
            local_70 = (undefined4 ****)((int)ppppuVar24 + 1);
            local_6c = pppuVar33;
          }
          else {
            local_5c = *(code **)((uint)&local_e0 | 4);
            local_58 = (undefined4 ****)((undefined4 *)((uint)&local_e0 | 4))[1];
            local_54 = local_44;
            local_50 = local_40;
            local_60 = ppppuVar27;
            if (3 < DAT_01d51b00) {
              local_88 = &local_60;
              local_84 = (code *)&LAB_006667bc;
              local_3c = (undefined4 ****)&DAT_00000015;
              local_38 = (undefined4 ***)&DAT_01cfda90;
              local_44 = (code *)&DAT_00000015;
              local_40 = (undefined4 ****)0x4b3e3b;
              local_48 = (undefined4 ****)0x4b3e3b;
              FUN_015fb650(&DAT_005b038b,&local_88,4,&local_48);
            }
            FUN_0134bd64(local_60,local_5c);
            local_6c = pppuVar33;
            if (ppppuVar32 != (undefined4 ****)&DAT_80000000) {
              FUN_0134bd64(ppppuVar32,local_164);
            }
          }
          if (pppuVar13 <= pppuVar33) break;
        }
      }
      local_88 = local_78;
      local_84 = local_74;
      local_80 = local_70;
      if ((char)puVar20[4] == '\0') {
        FUN_019ae6ac(&local_60);
        *puVar9 = (uint)local_58;
        puVar20[3] = (uint)local_54;
        *puVar20 = (uint)local_60;
        puVar20[1] = (uint)local_5c;
        *(undefined1 *)(puVar20 + 4) = 1;
      }
      ppppuVar24 = local_80;
      pcVar7 = local_84;
      local_38 = (undefined4 ***)*puVar20;
      local_34 = (undefined4 ****)puVar20[1];
      local_30 = (undefined4 ****)*puVar9;
      local_2c = (code *)puVar20[3];
      *puVar20 = (uint)((int)local_38 + 1);
      puVar20[1] = (uint)((int)local_34 + (uint)((undefined4 ***)0xfffffffe < local_38));
      local_48 = (undefined4 ****)&DAT_0056d238;
      local_44 = (code *)0x0;
      local_40 = (undefined4 ****)0x0;
      local_3c = (undefined4 ****)0x0;
      if (local_80 != (undefined4 ****)0x0) {
        pcVar8 = local_84;
        ppppuVar16 = (undefined4 ****)0x0;
LAB_015cd168:
        FUN_00664bdc(&local_60,*(undefined4 *)(pcVar8 + 4),*(undefined4 *)(pcVar8 + 8));
        iVar2 = FUN_015dcc90(&local_48,&local_60);
        ppppuVar27 = (undefined4 ****)((int)ppppuVar16 + 1);
        if (iVar2 == 0) goto code_r0x015cd194;
        FUN_015e9340(pcVar8);
        if (ppppuVar27 < ppppuVar24) {
          ppppuVar32 = ppppuVar16;
          do {
            pcVar31 = pcVar8 + 0x18;
            FUN_00664bdc(&local_60,*(undefined4 *)(pcVar8 + 0x1c),*(undefined4 *)(pcVar8 + 0x20));
            iVar2 = FUN_015dcc90(&local_48,&local_60);
            if (iVar2 == 0) {
              ppppuVar16 = (undefined4 ****)((int)ppppuVar32 + 1);
              pcVar35 = pcVar7 + (int)ppppuVar32 * 0x18;
              uVar23 = *(undefined4 *)(pcVar8 + 0x1c);
              uVar29 = *(undefined4 *)(pcVar8 + 0x20);
              uVar19 = *(undefined4 *)(pcVar8 + 0x24);
              uVar22 = *(undefined4 *)(pcVar8 + 0x28);
              uVar25 = *(undefined4 *)(pcVar8 + 0x2c);
              *(undefined4 *)pcVar35 = *(undefined4 *)pcVar31;
              *(undefined4 *)(pcVar35 + 4) = uVar23;
              *(undefined4 *)(pcVar35 + 8) = uVar29;
              *(undefined4 *)(pcVar35 + 0xc) = uVar19;
              *(undefined4 *)(pcVar35 + 0x10) = uVar22;
              *(undefined4 *)(pcVar35 + 0x14) = uVar25;
            }
            else {
              FUN_015e9340(pcVar31);
              ppppuVar16 = ppppuVar32;
            }
            ppppuVar27 = (undefined4 ****)((int)ppppuVar27 + 1);
            ppppuVar32 = ppppuVar16;
            pcVar8 = pcVar31;
          } while (ppppuVar27 < ppppuVar24);
        }
        local_80 = ppppuVar16;
      }
LAB_015cd1a4:
      local_60 = local_88;
      local_5c = local_84;
      local_58 = local_80;
      FUN_015d1344(&local_48);
      FUN_015a8f24(&local_f8);
    }
  }
LAB_015cd1dc:
  uVar39 = FUN_015f2d70(param_2,local_100,local_fc);
  iVar2 = (int)((ulonglong)uVar39 >> 0x20);
  iVar14 = (int)uVar39;
  if (iVar14 != 0) {
    iVar2 = *(int *)(iVar14 + 8);
  }
  if (iVar14 != 0 && iVar2 != 0) {
    iVar14 = *(int *)(iVar14 + 4);
    pcVar7 = (code *)(lVar38 + 1000);
    iVar2 = iVar14 + iVar2 * 0x18;
    uVar3 = (uint)((ulonglong)(lVar38 + 1000) >> 0x20);
    local_15c = param_2;
    do {
      uVar39 = (**(code **)(*(int *)(iVar14 + 0x14) + 0x1c))(*(undefined4 *)(iVar14 + 0x10));
      iVar5 = (int)uVar39;
      (**(code **)((int)((ulonglong)uVar39 >> 0x20) + 0xc))(&local_48,iVar5);
      if ((local_48 == (undefined4 ****)0xda8c4f1e && local_40 == (undefined4 ****)0x19da2243) &&
          (local_44 == (code *)0xb2415d58 && local_3c == (undefined4 ****)0xc983ed0b)) {
        if (*(uint *)(iVar5 + 0x1c) < uVar3 ||
            uVar3 - *(uint *)(iVar5 + 0x1c) < (uint)(*(code **)(iVar5 + 0x18) <= pcVar7)) {
          if (4 < DAT_01d51b00) {
            FUN_015df854(&local_48,iVar5);
            bVar36 = local_48 != (undefined4 ****)&DAT_80000000;
            if (bVar36) {
              FUN_01bed4e2((int)&local_e0 + 1,&local_38,0x10);
            }
            else {
              local_e0 = (undefined4 ****)((int)local_38 << 8);
              local_dc._0_1_ = (undefined1)((uint)local_38 >> 0x18);
            }
            local_e0 = (undefined4 ****)CONCAT31(local_e0._1_3_,bVar36);
            local_74 = FUN_01309a48;
            local_78 = (undefined4 ****)&local_e0;
            local_54 = (code *)&DAT_00000017;
            local_50 = (undefined4 ****)&DAT_01cfcf78;
            local_5c = (code *)&DAT_00000017;
            local_58 = (undefined4 ****)0x4b3d9f;
            local_60 = (undefined4 ****)0x4b3d9f;
            FUN_015fb650(&DAT_0057bfc1,&local_78,5,&local_60);
            FUN_015cdad8(&local_48);
          }
        }
        else {
          FUN_015df854(local_c8,iVar5);
          if (local_c8[0] == -0x80000000) {
            puVar9 = local_148 + 1;
            puVar20 = local_148;
            iVar5 = local_13c;
            uVar21 = ~*local_148 & 0x80808080;
            do {
              if (iVar5 == 0) {
                FUN_015dbe44(&local_148,local_c8);
                goto LAB_015cd4ec;
              }
              puVar12 = puVar9;
              if (uVar21 == 0) {
                do {
                  puVar9 = puVar12 + 1;
                  uVar21 = *puVar12;
                  puVar20 = puVar20 + -0x20;
                  puVar12 = puVar9;
                } while ((uVar21 & 0x80808080) == 0x80808080);
                uVar21 = uVar21 & 0x80808080 ^ 0x80808080;
              }
              iVar5 = iVar5 + -1;
              uVar30 = LZCOUNT(uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                               (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) & 0x38;
              uVar21 = uVar21 - 1 & uVar21;
            } while (puVar20[-8 - uVar30] != 0x80000000 || (code *)puVar20[-4 - uVar30] != local_b8)
            ;
            ppppuVar24 = (undefined4 ****)puVar20[-5 - uVar30];
            uVar23 = 0;
            bVar37 = (undefined4 ****)0xffffffe < ppppuVar24;
            bVar36 = ppppuVar24 == (undefined4 ****)0xfffffff;
            pcVar8 = pcVar7;
            if (ppppuVar24 < (undefined4 ****)0x10000000) {
              pcVar8 = (code *)((int)ppppuVar24 << 4);
              local_15c = local_b8;
              bVar37 = (code *)0x7ffffffb < pcVar8;
              bVar36 = pcVar8 == (code *)0x7ffffffc;
            }
            if (bVar37 && !bVar36) {
LAB_015cd8f8:
                    /* WARNING: Subroutine does not return */
              FUN_00664620(uVar23,local_170);
            }
            if (pcVar8 == (code *)0x0) {
              local_5c = (code *)&SUB_00000004;
              local_60 = (undefined4 ****)0x0;
              local_170 = local_5c;
            }
            else {
              uVar21 = puVar20[-6 - uVar30];
              uVar23 = 4;
              local_170 = (code *)FUN_01298504(pcVar8,4);
              if (local_170 == (code *)0x0) {
                local_170 = pcVar8;
                goto LAB_015cd8f8;
              }
              local_60 = ppppuVar24;
              local_5c = local_170;
              if (ppppuVar24 != (undefined4 ****)0x0) {
                ppppuVar16 = (undefined4 ****)0x0;
                do {
                  if (pcVar8 == (code *)0x0) break;
                  FUN_006666fc(&local_48,*(undefined4 *)(uVar21 + 4),*(undefined4 *)(uVar21 + 8));
                  local_3c = *(undefined4 *****)(uVar21 + 0xc);
                  pcVar8 = pcVar8 + -0x10;
                  uVar21 = uVar21 + 0x10;
                  pcVar31 = local_170 + (int)ppppuVar16 * 0x10;
                  ppppuVar16 = (undefined4 ****)((int)ppppuVar16 + 1);
                  *(undefined4 *****)pcVar31 = local_48;
                  *(code **)(pcVar31 + 4) = local_44;
                  *(undefined4 *****)(pcVar31 + 8) = local_40;
                  *(undefined4 *****)(pcVar31 + 0xc) = local_3c;
                } while (ppppuVar24 != ppppuVar16);
              }
            }
            local_e0 = local_60;
            local_dc = local_5c;
            local_78 = local_60;
            local_74 = local_5c;
            local_a8 = 0x80000000;
            local_a4 = local_60;
            local_a0 = local_5c;
            local_98 = local_15c;
            local_d8 = ppppuVar24;
            local_9c = ppppuVar24;
            local_70 = ppppuVar24;
            local_58 = ppppuVar24;
            pcVar8 = (code *)FUN_015f6e80(local_138,uStack_134,local_130,local_12c,&local_a8);
            uVar30 = local_144;
            puVar20 = local_148;
            uVar21 = (uint)pcVar8 >> 0x19;
            local_15c = (code *)0x0;
            while( true ) {
              uVar28 = uVar30 & (uint)pcVar8;
              uVar17 = *(uint *)((int)puVar20 + uVar28);
              uVar4 = uVar17 ^ uVar21 * 0x1010101;
              uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
              while (uVar4 != 0) {
                uVar34 = uVar28 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                                 (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3)
                         & uVar30;
                iVar5 = FUN_015df498(&local_a8,puVar20 + uVar34 * -8 + -8);
                uVar4 = uVar4 - 1 & uVar4;
                if (iVar5 != 0) {
                  puVar9 = (uint *)((int)puVar20 + (uVar34 - 4 & uVar30));
                  uVar30 = *puVar9;
                  uVar21 = *(uint *)((int)puVar20 + uVar34) & 0x80808080 &
                           *(uint *)((int)puVar20 + uVar34) << 1;
                  uVar11 = 0x80;
                  if (((uint)LZCOUNT(uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                     (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3) +
                      ((uint)LZCOUNT(uVar30 & 0x80808080 & uVar30 << 1) >> 3) < 4) {
                    local_140 = local_140 + 1;
                    uVar11 = 0xff;
                  }
                  *(undefined1 *)((int)puVar20 + uVar34) = uVar11;
                  *(undefined1 *)(puVar9 + 1) = uVar11;
                  local_13c = local_13c + -1;
                  local_48 = (undefined4 ****)puVar20[uVar34 * -8 + -8];
                  local_44 = (code *)puVar20[uVar34 * -8 + -7];
                  local_40 = (undefined4 ****)puVar20[uVar34 * -8 + -6];
                  local_3c = (undefined4 ****)puVar20[uVar34 * -8 + -5];
                  local_38 = (undefined4 ***)puVar20[uVar34 * -8 + -4];
                  local_34 = (undefined4 ****)puVar20[uVar34 * -8 + -3];
                  local_30 = (undefined4 ****)puVar20[uVar34 * -8 + -2];
                  local_2c = (code *)puVar20[uVar34 * -8 + -1];
                  if (local_48 != (undefined4 ****)&DAT_80000001) {
                    FUN_015d16d4(&local_48);
                  }
                  goto LAB_015cd6c4;
                }
              }
              if ((uVar17 & 0x80808080 & uVar17 << 1) != 0) break;
              local_15c = local_15c + 4;
              pcVar8 = local_15c + uVar28;
            }
LAB_015cd6c4:
            if (local_bc != 0) {
              iVar6 = local_c0 + local_bc * 0x10;
              iVar5 = local_c0;
              do {
                FUN_006666fc(&local_48,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
                ppppuVar16 = local_40;
                pcVar8 = local_44;
                ppppuVar24 = local_9c;
                ppppuVar27 = *(undefined4 *****)(iVar5 + 0xc);
                local_15c = local_a0;
                local_3c = ppppuVar27;
                if (local_9c != (undefined4 ****)0x0) {
                  iVar18 = (int)local_9c << 4;
                  pcVar31 = local_a0 + 8;
                  do {
                    ppppuVar32 = *(undefined4 *****)(pcVar31 + 4);
                    bVar36 = ppppuVar32 == ppppuVar27;
                    if (bVar36) {
                      ppppuVar32 = *(undefined4 *****)pcVar31;
                    }
                    if ((bVar36 && ppppuVar32 == ppppuVar16) &&
                       (iVar10 = thunk_FUN_01bed842(*(undefined4 *)(pcVar31 + -4),pcVar8,ppppuVar16)
                       , iVar10 == 0)) {
                      FUN_0134bd64(local_48,pcVar8);
                      goto LAB_015cd7ac;
                    }
                    pcVar31 = pcVar31 + 0x10;
                    iVar18 = iVar18 + -0x10;
                  } while (iVar18 != 0);
                }
                if (ppppuVar24 == local_a4) {
                  FUN_018fa978(&local_a4);
                  local_15c = local_a0;
                }
                pcVar8 = local_15c + (int)ppppuVar24 * 0x10;
                *(undefined4 *****)pcVar8 = local_48;
                *(code **)(pcVar8 + 4) = local_44;
                *(undefined4 *****)(pcVar8 + 8) = local_40;
                *(undefined4 *****)(pcVar8 + 0xc) = local_3c;
                local_9c = (undefined4 ****)((int)ppppuVar24 + 1);
LAB_015cd7ac:
                iVar5 = iVar5 + 0x10;
              } while (iVar5 != iVar6);
            }
            FUN_015dbe44(&local_148,&local_a8);
            FUN_015cdad8(local_c8);
          }
          else {
            FUN_015dbe44(&local_148,local_c8);
          }
        }
      }
LAB_015cd4ec:
      iVar14 = iVar14 + 0x18;
    } while (iVar14 != iVar2);
  }
  FUN_01bed4e2(param_1,&local_148,0x60);
  return;
code_r0x015cd194:
  pcVar8 = pcVar8 + 0x18;
  ppppuVar16 = ppppuVar27;
  if (ppppuVar24 == ppppuVar27) goto LAB_015cd1a4;
  goto LAB_015cd168;
}

