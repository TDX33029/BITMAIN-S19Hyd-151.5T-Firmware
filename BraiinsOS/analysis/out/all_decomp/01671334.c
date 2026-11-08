// FUN_01671334 @ 01671334 size=780 calls_out=4 calls_in=2
// strings: 

void FUN_01671334(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined1 auStack_248 [112];
  int local_1d8 [26];
  undefined4 local_170;
  undefined4 uStack_16c;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int local_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  undefined1 auStack_134 [76];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [88];
  undefined1 auStack_88 [100];
  
  if (*param_2 == 1) {
    if (param_2[0x17] == 7) {
      iVar7 = param_2[8];
      iVar9 = param_2[9];
      iVar11 = param_2[0xb];
      iVar6 = param_2[0xc];
      iVar10 = param_2[0xe];
      iVar12 = param_2[0xf];
      if (param_2[7] != 0) {
        piVar4 = (int *)param_2[6];
        do {
          piVar15 = piVar4;
          if (piVar15 == (int *)param_2[6] + param_2[7] * 0x1c) {
            iVar3 = param_2[7];
            piVar4 = (int *)param_2[6];
            iVar5 = param_2[5];
            if (iVar3 != 0) {
              piVar13 = (int *)((uint)&local_150 | 4);
              piVar15 = piVar4;
              do {
                FUN_016dd1aa(auStack_248,piVar15,0x70);
                *piVar15 = 0;
                FUN_0167075c(&local_150,auStack_248);
                iVar14 = local_150;
                if (local_150 == 4) {
                  FUN_016dd1aa((uint)auStack_88 | 4,&iStack_148,0x60);
                  FUN_016dd1aa((uint)local_1d8 | 4,auStack_88,100);
                  iVar14 = 2;
                }
                else {
                  FUN_016dd1aa(auStack_88,piVar13,100);
                  uVar2 = uStack_e4;
                  uVar1 = local_e8;
                  FUN_016dd1aa((uint)local_1d8 | 4,auStack_88,100);
                  local_170 = uVar1;
                  uStack_16c = uVar2;
                }
                local_1d8[0] = iVar14;
                FUN_01671334(&local_150,local_1d8);
                iVar14 = local_150;
                local_168 = *piVar13;
                iStack_164 = piVar13[1];
                iStack_160 = piVar13[2];
                iStack_15c = piVar13[3];
                iStack_158 = piVar13[4];
                iStack_154 = piVar13[5];
                iVar16 = 3;
                if (local_150 != 4) {
                  FUN_016dd1aa(auStack_e0,auStack_134,0x54);
                  iVar16 = iVar14;
                }
                local_150 = local_168;
                iStack_14c = iStack_164;
                iStack_148 = iStack_160;
                iStack_144 = iStack_15c;
                iStack_140 = iStack_158;
                iStack_13c = iStack_154;
                piVar8 = piVar15 + 0x1c;
                *piVar15 = iVar16;
                piVar15[1] = local_168;
                piVar15[2] = iStack_164;
                piVar15[3] = iStack_160;
                piVar15[4] = iStack_15c;
                piVar15[5] = iStack_158;
                piVar15[6] = iStack_154;
                FUN_016dd1aa(piVar15 + 7,auStack_e0,0x54);
                piVar15 = piVar8;
              } while (piVar8 != piVar4 + iVar3 * 0x1c);
            }
            param_1[1] = 0;
            param_1[2] = uStack_25c;
            param_1[3] = uStack_258;
            param_1[4] = iVar5;
            param_1[5] = piVar4;
            param_1[6] = iVar3;
            *param_1 = 4;
            if (0 < iVar7) {
              thunk_FUN_016d3fb4(iVar9);
            }
            if ((iVar11 != -0x7ffffffd) && (0 < iVar11)) {
              thunk_FUN_016d3fb4(iVar6);
            }
            if (iVar10 == -0x7ffffffd) {
              return;
            }
            if (iVar10 < 1) {
              return;
            }
            thunk_FUN_016d3fb4(iVar12);
            return;
          }
          piVar4 = piVar15 + 0x1c;
        } while ((*piVar15 != 1) || ((uint)piVar15[0x17] < 2));
      }
      iVar6 = param_2[3];
      iVar7 = param_2[4];
      iVar9 = param_2[5];
      iVar10 = param_2[6];
      piVar4 = (int *)((uint)&local_150 | 4);
      *piVar4 = param_2[2];
      piVar4[1] = iVar6;
      piVar4[2] = iVar7;
      piVar4[3] = iVar9;
      piVar4[4] = iVar10;
      iVar6 = param_2[8];
      iVar7 = param_2[9];
      iVar9 = param_2[10];
      iVar10 = param_2[0xb];
      piVar4[5] = param_2[7];
      piVar4[6] = iVar6;
      piVar4[7] = iVar7;
      piVar4[8] = iVar9;
      piVar4[9] = iVar10;
      iVar6 = param_2[0xd];
      iVar7 = param_2[0xe];
      iVar9 = param_2[0xf];
      iVar10 = param_2[0x10];
      iVar12 = param_2[0x11];
      piVar4[10] = param_2[0xc];
      piVar4[0xb] = iVar6;
      piVar4[0xc] = iVar7;
      piVar4[0xd] = iVar9;
      piVar4[0xe] = iVar10;
      piVar4[0xf] = iVar12;
      *param_1 = 1;
      FUN_016dd1aa(param_1 + 1,&local_150,0x58);
      param_1[0x17] = 7;
      return;
    }
  }
  else if (*param_2 == 3) {
    iVar6 = param_2[2];
    iVar7 = param_2[3];
    iVar9 = param_2[4];
    iVar10 = param_2[5];
    iVar12 = param_2[6];
    param_1[1] = param_2[1];
    param_1[2] = iVar6;
    param_1[3] = iVar7;
    param_1[4] = iVar9;
    param_1[5] = iVar10;
    param_1[6] = iVar12;
    *param_1 = 4;
    return;
  }
  FUN_016dd1aa(param_1,param_2,0x70);
  return;
}

