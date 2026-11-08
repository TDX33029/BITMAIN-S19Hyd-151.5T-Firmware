// FUN_019240c0 @ 019240c0 size=2056 calls_out=21 calls_in=2
// strings: 

void FUN_019240c0(uint *param_1,uint *param_2,int *param_3,uint *param_4)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  ushort uVar15;
  uint *puVar16;
  int iVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  undefined8 uVar24;
  uint local_29c;
  uint local_298;
  undefined4 local_294;
  undefined1 *local_290;
  uint local_28c;
  uint local_288;
  uint local_284;
  uint local_280;
  uint local_27c;
  undefined4 local_278;
  uint local_274;
  uint local_270;
  uint local_26c;
  undefined2 local_210;
  undefined1 *local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  uint local_1f8;
  int local_1f0;
  uint local_198;
  uint *local_194;
  uint local_190;
  uint local_18c;
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  uint local_17c;
  uint uStack_178;
  uint uStack_174;
  uint local_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint local_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint local_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  uint local_13c;
  uint local_138;
  undefined1 auStack_134 [20];
  undefined2 local_120;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint local_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined1 local_60;
  uint *local_58;
  uint *local_54;
  uint local_50;
  uint *local_4c;
  uint local_48;
  uint *puStack_44;
  uint uStack_40;
  uint local_38 [5];
  
  FUN_0191e124(param_2,param_4);
  if ((*param_4 < 0x80000001) && (param_4[3] == 0x80000006)) {
    local_29c = param_4[6];
    uVar23 = param_4[4];
    uVar19 = param_4[5];
    uVar15 = *(ushort *)((int)param_4 + 0x1e);
    uVar1 = (ushort)param_4[7];
    local_298 = param_4[8];
    bVar2 = true;
  }
  else {
    FUN_01bed4e2(&local_198,param_4,0x78);
    FUN_0191d9a0(&local_288,&local_198,&DAT_0052389f,1,&DAT_00523841,1);
    uVar5 = local_274;
    uVar20 = local_27c;
    uVar19 = local_280;
    uVar23 = local_284;
    uVar9 = local_288;
    local_29c = local_27c;
    uVar15 = local_278._2_2_;
    uVar1 = (ushort)local_278;
    local_298 = local_274;
    FUN_0191edf0(&local_198);
    if (uVar9 != 0x80000029) {
      *param_1 = uVar9;
      param_1[1] = uVar23;
      param_1[3] = uVar20;
      *(ushort *)((int)param_1 + 0x12) = uVar15;
      *(ushort *)(param_1 + 4) = uVar1;
      param_1[2] = uVar19;
      param_1[5] = uVar5;
      param_1[6] = local_270;
      param_1[7] = local_26c;
      goto LAB_01924368;
    }
    bVar2 = false;
  }
  iVar12 = *(int *)(param_2[0x17] + 0x24);
  if (iVar12 != 0) {
    puVar18 = *(undefined4 **)(param_2[0x17] + 0x20);
    iVar12 = iVar12 << 3;
    do {
      uVar24 = (**(code **)(puVar18[1] + 0x14))(*puVar18);
      if ((((uint)uVar24 & 0xffff) == (uint)uVar1) &&
         (uVar1 != 3 || ((uint)((ulonglong)uVar24 >> 0x20) & 0xffff) == (uint)uVar15)) {
        if (0x10000 < local_298) {
          iVar12 = *param_3;
          local_120 = 4;
          local_194 = (uint *)0x80001;
          local_198 = 0x80000001;
          FUN_018f1fc4(iVar12,&local_198,*(char *)(iVar12 + 0x31) == '\x02');
          *(undefined1 *)(param_1 + 1) = 10;
          puVar8 = &DAT_80000016;
          goto LAB_01924268;
        }
        FUN_018a7af8(&local_294);
        iVar12 = (**(code **)(puVar18[1] + 0x10))(*puVar18,uVar19,local_29c,local_290,local_28c);
        if (iVar12 == 0) {
          local_204 = local_28c;
          local_200 = 0;
          local_208 = local_290;
          FUN_018ecc20(&local_288,&local_208);
          puVar7 = local_278;
          uVar6 = local_27c;
          uVar5 = local_280;
          uVar20 = local_284;
          uVar9 = local_288;
          if (local_288 != 0x80000000) {
            puVar13 = local_278 + local_274 * 6;
            local_50 = local_27c;
            local_54 = local_278;
            local_58 = local_278;
            puVar11 = local_278;
            local_4c = puVar13;
            if (local_274 != 0) {
              puVar16 = local_278;
              do {
                local_288 = *puVar16;
                local_284 = puVar16[1];
                local_280 = puVar16[2];
                local_27c = puVar16[3];
                local_278 = (uint *)puVar16[4];
                local_274 = puVar16[5];
                puVar11 = puVar16 + 6;
                FUN_01938e20(&local_48,&local_27c);
                uVar4 = local_284;
                uVar3 = local_288;
                uVar14 = local_284 + local_280 * 0x10;
                local_38[2] = local_288;
                local_38[0] = local_284;
                uVar10 = local_284;
                uVar21 = local_284;
                if (local_280 != 0) {
                  iVar12 = local_280 * 0x10;
                  iVar17 = 0;
                  local_38[3] = uVar14;
                  do {
                    puVar22 = (uint *)(uVar4 + iVar17);
                    local_190 = *puVar22;
                    local_18c = puVar22[1];
                    uStack_188 = puVar22[2];
                    uStack_184 = puVar22[3];
                    local_198 = uVar4;
                    local_194 = puVar22;
                    if (local_190 == 0x80000001) {
                      FUN_01935918((uint)&local_208 | 4,&local_18c);
                      local_208 = (undefined1 *)0x80000001;
                    }
                    else {
                      local_208 = (undefined1 *)*puVar22;
                      local_204 = puVar22[1];
                      local_200 = puVar22[2];
                      local_1fc = puVar22[3];
                    }
                    iVar17 = iVar17 + 0x10;
                    *puVar22 = (uint)local_208;
                    puVar22[1] = local_204;
                    puVar22[2] = local_200;
                    puVar22[3] = local_1fc;
                  } while (iVar12 != iVar17);
                  uVar21 = uVar4 + iVar17;
                  uVar10 = uVar14;
                }
                local_38[3] = 4;
                local_38[1] = 4;
                local_38[0] = 4;
                local_38[2] = 0;
                FUN_01928c5c(uVar10,uVar14 - uVar10 >> 4);
                FUN_0192f4b0(local_38);
                local_198 = local_48;
                local_194 = puStack_44;
                local_190 = uStack_40;
                puVar16[2] = uVar21 - uVar4 >> 4;
                *puVar16 = uVar3;
                puVar16[1] = uVar4;
                puVar16[3] = local_48;
                puVar16[4] = (uint)puStack_44;
                puVar16[5] = uStack_40;
                puVar16 = puVar11;
              } while (puVar11 != puVar13);
              local_54 = puVar13;
            }
            local_190 = uVar6;
            iVar12 = ((uint)((int)puVar11 - (int)puVar7) >> 3) * -0x55555555;
            local_194 = (uint *)iVar12;
            FUN_0192f1e4(&local_58);
            FUN_0192f2b8(&local_58);
            local_1fc = uVar5;
            local_1f8 = uVar6;
            local_208 = &DAT_80000005;
            local_204 = uVar9;
            local_200 = uVar20;
            local_1f0 = iVar12;
            FUN_0191d7c0(&local_198,&local_208);
            local_210 = 5;
            FUN_01bed4e2(&local_288,&local_198,0x78);
            uVar20 = param_2[0x17];
            local_150 = param_2[0x12];
            uStack_14c = param_2[0x13];
            uStack_148 = param_2[0x14];
            uStack_144 = param_2[0x15];
            uStack_140 = param_2[0x16];
            local_a0 = param_2[0x3e];
            uStack_9c = param_2[0x3f];
            uStack_98 = param_2[0x40];
            uStack_94 = param_2[0x41];
            uStack_90 = param_2[0x42];
            local_8c = param_2[0x43];
            uStack_88 = param_2[0x44];
            uStack_84 = param_2[0x45];
            uStack_80 = param_2[0x46];
            uStack_7c = param_2[0x47];
            local_78 = param_2[0x48];
            uStack_74 = param_2[0x49];
            uStack_70 = param_2[0x4a];
            uStack_6c = param_2[0x4b];
            uStack_68 = param_2[0x4c];
            uStack_64 = param_2[0x4d];
            uVar9 = param_2[0x18];
            local_198 = *param_2;
            local_194 = (uint *)param_2[1];
            local_190 = param_2[2];
            local_18c = param_2[3];
            uStack_188 = param_2[4];
            uStack_184 = param_2[5];
            uStack_180 = param_2[6];
            FUN_01bed4e2(auStack_134,param_2 + 0x19,0x94);
            local_170 = param_2[10];
            uStack_16c = param_2[0xb];
            uStack_168 = param_2[0xc];
            uStack_164 = param_2[0xd];
            local_160 = param_2[0xe];
            uStack_15c = param_2[0xf];
            uStack_158 = param_2[0x10];
            uStack_154 = param_2[0x11];
            local_17c = param_2[7];
            uStack_178 = param_2[8];
            uStack_174 = param_2[9];
            local_60 = 1;
            local_13c = uVar20;
            local_138 = uVar9;
            iVar12 = thunk_FUN_01be5118(0x13c);
            if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,0x13c);
            }
            FUN_01bed4e2(iVar12,&local_198,0x13c);
            FUN_01bed4e2(&local_198,&local_288,0x7c);
            FUN_01921aec(param_1,iVar12,param_3,&local_198);
            FUN_0134bd64(local_294,local_290);
            if (uVar23 != 0x80000000) {
              FUN_0134bd64(uVar23,uVar19);
            }
            if (bVar2) {
              uVar9 = *param_4;
              if (uVar9 < 0x80000001) {
                if (param_4[3] != 0x80000006) {
                  FUN_0191eea4(param_4 + 3);
                  uVar9 = *param_4;
                }
                if (uVar9 != 0x80000000) {
                  FUN_0134bd64(uVar9,param_4[1]);
                }
              }
              else {
                FUN_0191edf0(param_4);
              }
            }
            goto LAB_01924370;
          }
          iVar12 = *param_3;
          local_120 = 4;
          local_194 = (uint *)0x80001;
          local_198 = 0x80000001;
          FUN_018f1fc4(iVar12,&local_198,*(char *)(iVar12 + 0x31) == '\x02');
          *(undefined1 *)(iVar12 + 0x255) = 1;
          param_1[1] = local_284;
          param_1[2] = local_280;
          param_1[3] = local_27c;
          *param_1 = (uint)&DAT_80000016;
        }
        else {
          iVar12 = *param_3;
          local_120 = 4;
          local_194 = (uint *)0x80001;
          local_198 = 0x80000001;
          FUN_018f1fc4(iVar12,&local_198,*(char *)(iVar12 + 0x31) == '\x02');
          *(undefined1 *)(param_1 + 1) = 0x18;
          *param_1 = (uint)&DAT_8000001c;
          *(undefined1 *)(iVar12 + 0x255) = 1;
        }
        FUN_0134bd64(local_294,local_290);
        goto LAB_01924274;
      }
      puVar18 = puVar18 + 2;
      iVar12 = iVar12 + -8;
    } while (iVar12 != 0);
  }
  iVar12 = *param_3;
  local_120 = 4;
  local_194 = (uint *)0x80001;
  local_198 = 0x80000001;
  FUN_018f1fc4(iVar12,&local_198,*(char *)(iVar12 + 0x31) == '\x02');
  *(undefined1 *)(param_1 + 1) = 0x33;
  puVar8 = &DAT_8000001c;
LAB_01924268:
  *param_1 = (uint)puVar8;
  *(undefined1 *)(iVar12 + 0x255) = 1;
LAB_01924274:
  if (uVar23 != 0x80000000) {
    FUN_0134bd64(uVar23,uVar19);
  }
  if (bVar2) {
    uVar9 = *param_4;
    if (uVar9 < 0x80000001) {
      if (param_4[3] != 0x80000006) {
        FUN_0191eea4(param_4 + 3);
        uVar9 = *param_4;
      }
      if (uVar9 != 0x80000000) {
        FUN_0134bd64(uVar9,param_4[1]);
      }
    }
    else {
      FUN_0191edf0(param_4);
    }
  }
LAB_01924368:
  FUN_01923fb4(param_2);
LAB_01924370:
  thunk_FUN_01be4678(param_2);
  return;
}

