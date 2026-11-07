// FUN_01923010 @ 01923010 size=1596 calls_out=17 calls_in=2
// strings: 

void FUN_01923010(int *param_1,int *param_2,int param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint *puVar5;
  undefined *puVar6;
  int extraout_r3;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  ushort *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined6 uVar18;
  int local_1c0;
  undefined4 local_1bc;
  uint *local_1b8;
  int local_1a0;
  undefined2 *local_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  int local_168;
  uint *local_164;
  int local_160;
  undefined2 *local_15c;
  int local_158;
  int iStack_154;
  int iStack_150;
  int local_14c;
  int iStack_148;
  int iStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int local_10c;
  int local_108;
  undefined1 auStack_104 [20];
  undefined2 local_f0;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined1 local_30;
  int local_2c;
  int local_28;
  
  if ((*param_4 < 0x80000001) && ((undefined1 *)param_4[3] == &DAT_80000009)) {
    puVar12 = param_4 + 4;
LAB_019230a8:
    FUN_0191e124(param_2,param_4);
    if (puVar12[2] == 0) {
      piVar4 = (int *)FUN_018ed8d8(puVar12[4],puVar12[5],0xd);
      local_2c = 0;
      iVar7 = extraout_r3;
      if ((piVar4 != (int *)0x0) && (*piVar4 == -0x7fffffff)) {
        local_2c = piVar4[2];
        iVar7 = piVar4[3];
      }
      if (local_2c == 0) {
        local_2c = 2;
        iVar7 = 0;
      }
      local_28 = local_2c + iVar7 * 4;
      uVar18 = FUN_01928d4c(&local_2c);
      if (((uint)uVar18 & 0xffff) != 0xe) {
        puVar5 = (uint *)thunk_FUN_01be5118(0x10);
        if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(2,0x10);
        }
        *(short *)puVar5 = (short)uVar18;
        *(short *)((int)puVar5 + 2) = (short)((uint6)uVar18 >> 0x20);
        local_160 = 1;
        local_168 = 4;
        local_19c = (undefined2 *)local_28;
        local_1a0 = local_2c;
        iVar7 = 0;
        local_164 = puVar5;
        while( true ) {
          iVar11 = local_160;
          uVar18 = FUN_01928d4c(&local_1a0);
          puVar2 = local_164;
          iVar1 = local_168;
          if (((uint)uVar18 & 0xffff) == 0xe) break;
          if (iVar11 == local_168) {
            FUN_006520b4(&local_168,iVar11,1,2,4);
            puVar5 = local_164;
          }
          local_160 = iVar11 + 1;
          *(short *)((int)puVar5 + iVar7 + 6) = (short)((uint6)uVar18 >> 0x20);
          *(short *)((int)puVar5 + iVar7 + 4) = (short)uVar18;
          iVar7 = iVar7 + 4;
        }
        piVar4 = (int *)FUN_018ed8d8(puVar12[4],puVar12[5],0x16);
        if ((piVar4 == (int *)0x0) || (*piVar4 != -0x7ffffffd)) {
          local_1bc = 0;
        }
        else {
          iVar13 = piVar4[3];
          iVar7 = piVar4[2];
          local_1c0 = iVar13 << 2;
          iVar8 = *(int *)(param_2[0xf] + 0x30);
          puVar15 = *(undefined4 **)(param_2[0xf] + 0x2c);
          puVar3 = puVar15;
          while (puVar16 = puVar3, puVar16 != puVar15 + iVar8 * 2) {
            uVar17 = (**(code **)(puVar16[1] + 0x14))(*puVar16);
            puVar3 = puVar16 + 2;
            if (iVar13 != 0) {
              iVar9 = local_1c0;
              puVar14 = (ushort *)(iVar7 + 2);
              do {
                uVar10 = (uint)uVar17 & 0xffff;
                if ((puVar14[-1] == uVar10) &&
                   ((uVar10 != 3 || ((uint)*puVar14 == ((uint)((ulonglong)uVar17 >> 0x20) & 0xffff))
                    ))) {
                  local_1bc = *puVar16;
                  local_1c0 = puVar16[1];
                  goto LAB_019233bc;
                }
                puVar14 = puVar14 + 2;
                iVar9 = iVar9 + -4;
              } while (iVar9 != 0);
            }
          }
          local_1bc = 0;
        }
LAB_019233bc:
        iVar9 = *(int *)(param_2[0xf] + 0x88);
        iVar7 = *(int *)(param_2[0xf] + 0x84);
        iVar8 = *(int *)(iVar9 + 8);
        piVar4 = (int *)FUN_018ed8d8(puVar12[4],puVar12[5],0x1e);
        iVar13 = 0;
        local_1b8 = puVar12;
        if ((piVar4 != (int *)0x0) && (*piVar4 == -0x7ffffffe)) {
          iVar13 = piVar4[2];
          local_1b8 = (uint *)piVar4[3];
        }
        FUN_015e8ad4(&local_168,puVar12[1],puVar12[2]);
        local_1a0 = local_168;
        local_19c = (undefined2 *)local_164;
        iStack_198 = local_160;
        FUN_019237b4(&local_188,iVar7 + (iVar8 - 1U & 0xfffffff8) + 8,*(undefined4 *)(iVar9 + 0x10),
                     iVar13,local_1b8,puVar2,iVar11,&local_1a0,local_1bc,local_1c0);
        if ((char)param_2[0x46] == '\0') {
          iVar7 = param_2[0xf];
          local_120 = param_2[10];
          iStack_11c = param_2[0xb];
          iStack_118 = param_2[0xc];
          iStack_114 = param_2[0xd];
          iStack_110 = param_2[0xe];
          local_70 = param_2[0x36];
          iStack_6c = param_2[0x37];
          iStack_68 = param_2[0x38];
          iStack_64 = param_2[0x39];
          iStack_60 = param_2[0x3a];
          local_5c = param_2[0x3b];
          iStack_58 = param_2[0x3c];
          iStack_54 = param_2[0x3d];
          iStack_50 = param_2[0x3e];
          iStack_4c = param_2[0x3f];
          local_48 = param_2[0x40];
          iStack_44 = param_2[0x41];
          iStack_40 = param_2[0x42];
          iStack_3c = param_2[0x43];
          iStack_38 = param_2[0x44];
          iStack_34 = param_2[0x45];
          iVar11 = param_2[0x10];
          local_168 = *param_2;
          local_164 = (uint *)param_2[1];
          local_160 = param_2[2];
          local_15c = (undefined2 *)param_2[3];
          local_158 = param_2[4];
          iStack_154 = param_2[5];
          iStack_150 = param_2[6];
          FUN_01bed4e2(auStack_104,param_2 + 0x11,0x94);
          local_140 = local_188;
          uStack_13c = uStack_184;
          uStack_138 = uStack_180;
          uStack_134 = uStack_17c;
          local_130 = local_178;
          uStack_12c = uStack_174;
          uStack_128 = uStack_170;
          uStack_124 = uStack_16c;
          local_14c = param_2[7];
          iStack_148 = param_2[8];
          iStack_144 = param_2[9];
          local_30 = 0;
          local_10c = iVar7;
          local_108 = iVar11;
          iVar7 = thunk_FUN_01be5118(0x13c);
          if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x13c);
          }
          FUN_01bed4e2(iVar7,&local_168,0x13c);
          puVar6 = &DAT_01d253fc;
        }
        else {
          iVar7 = param_2[0xf];
          local_120 = param_2[10];
          iStack_11c = param_2[0xb];
          iStack_118 = param_2[0xc];
          iStack_114 = param_2[0xd];
          iStack_110 = param_2[0xe];
          local_70 = param_2[0x36];
          iStack_6c = param_2[0x37];
          iStack_68 = param_2[0x38];
          iStack_64 = param_2[0x39];
          iStack_60 = param_2[0x3a];
          local_5c = param_2[0x3b];
          iStack_58 = param_2[0x3c];
          iStack_54 = param_2[0x3d];
          iStack_50 = param_2[0x3e];
          iStack_4c = param_2[0x3f];
          local_48 = param_2[0x40];
          iStack_44 = param_2[0x41];
          iStack_40 = param_2[0x42];
          iStack_3c = param_2[0x43];
          iStack_38 = param_2[0x44];
          iStack_34 = param_2[0x45];
          iVar11 = param_2[0x10];
          local_168 = *param_2;
          local_164 = (uint *)param_2[1];
          local_160 = param_2[2];
          local_15c = (undefined2 *)param_2[3];
          local_158 = param_2[4];
          iStack_154 = param_2[5];
          iStack_150 = param_2[6];
          FUN_01bed4e2(auStack_104,param_2 + 0x11,0x94);
          local_140 = local_188;
          uStack_13c = uStack_184;
          uStack_138 = uStack_180;
          uStack_134 = uStack_17c;
          local_130 = local_178;
          uStack_12c = uStack_174;
          uStack_128 = uStack_170;
          uStack_124 = uStack_16c;
          local_14c = param_2[7];
          iStack_148 = param_2[8];
          iStack_144 = param_2[9];
          local_10c = iVar7;
          local_108 = iVar11;
          iVar7 = thunk_FUN_01be5118(0x138);
          if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x138);
          }
          FUN_01bed4e2(iVar7,&local_168,0x138);
          puVar6 = &DAT_01d25460;
        }
        *param_1 = -0x7fffffd7;
        param_1[1] = iVar7;
        param_1[2] = (int)puVar6;
        FUN_0134aee0(iVar1,puVar2,2,4);
        FUN_0191edf0(param_4);
        goto LAB_01923204;
      }
      local_1a0 = -0x7ffffffa;
      FUN_018f1eac(&local_168,param_3,6,&local_1a0);
      *param_1 = local_168;
      param_1[1] = (int)local_164;
      param_1[2] = local_160;
      param_1[3] = (int)local_15c;
      param_1[4] = local_158;
      param_1[5] = iStack_154;
      param_1[6] = iStack_150;
      param_1[7] = local_14c;
      FUN_0134aee0(0,2,2,4);
    }
    else {
      local_f0 = 4;
      local_168 = -0x7fffffff;
      local_164 = (uint *)0x100001;
      FUN_018f1fc4(param_3,&local_168,*(char *)(param_3 + 0x31) == '\x02');
      *(undefined1 *)(param_1 + 1) = 5;
      *param_1 = (int)&DAT_80000016;
      *(undefined1 *)(param_3 + 0x255) = 1;
    }
  }
  else {
    FUN_0191d9a0(&local_168,param_4,&DAT_0052389f,1,&DAT_0052383d,1);
    local_1a0 = local_160;
    local_19c = local_15c;
    iStack_198 = local_158;
    iStack_194 = iStack_154;
    iStack_190 = iStack_150;
    iStack_18c = local_14c;
    puVar12 = local_164;
    if (local_168 == -0x7fffffd7) goto LAB_019230a8;
    param_1[2] = local_160;
    param_1[3] = (int)local_15c;
    param_1[4] = local_158;
    param_1[5] = iStack_154;
    param_1[6] = iStack_150;
    param_1[7] = local_14c;
    *param_1 = local_168;
    param_1[1] = (int)local_164;
  }
  FUN_0191edf0(param_4);
  FUN_01923a14(param_2);
LAB_01923204:
  thunk_FUN_01be4678(param_2);
  return;
}

