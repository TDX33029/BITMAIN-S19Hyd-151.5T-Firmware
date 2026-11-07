// FUN_0154b3a8 @ 0154b3a8 size=1504 calls_out=15 calls_in=2
// strings: 

void FUN_0154b3a8(int *param_1,uint *param_2,int *param_3,uint *param_4)

{
  ushort uVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  int local_258;
  int local_254;
  int iStack_250;
  int iStack_24c;
  int local_240;
  int local_23c;
  undefined2 local_1e0;
  int local_1d8;
  uint local_1d4;
  uint local_1d0;
  uint uStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint local_168;
  uint local_164;
  uint uStack_160;
  uint local_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  uint local_14c;
  uint uStack_148;
  uint uStack_144;
  uint local_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint local_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint local_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint local_10c;
  uint local_108;
  undefined1 auStack_104 [20];
  undefined2 local_f0;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined1 local_30;
  
  FUN_0151eddc(param_2,param_4);
  if ((*param_4 < 0x80000001) && (puVar13 = param_4 + 3, *puVar13 == 0x80000006)) {
    uVar6 = param_4[4];
    iVar7 = *(int *)(param_2[0x17] + 0x24);
    uVar9 = param_4[5];
    if (iVar7 != 0) {
      uVar11 = param_4[6];
      iVar7 = iVar7 << 3;
      uVar1 = *(ushort *)((int)param_4 + 0x1e);
      uVar8 = param_4[7];
      puVar12 = *(undefined4 **)(param_2[0x17] + 0x20);
      uVar10 = param_4[8];
      do {
        uVar14 = (**(code **)(puVar12[1] + 0x14))(*puVar12);
        if ((((uint)uVar14 & 0xffff) == (uint)(ushort)uVar8) &&
           ((ushort)uVar8 != 3 || ((uint)((ulonglong)uVar14 >> 0x20) & 0xffff) == (uint)uVar1)) {
          if (0x10000 < uVar10) {
            iVar7 = *param_3;
            local_164 = 0x80001;
            local_168 = 0x80000001;
            local_f0 = 4;
            FUN_01525ed4(iVar7,&local_168,*(char *)(iVar7 + 0x31) == '\x02');
            *(undefined1 *)(iVar7 + 0x255) = 1;
            *(undefined1 *)(param_1 + 1) = 10;
            puVar2 = (undefined1 *)0x80000016;
            goto LAB_0154b5d0;
          }
          if (uVar10 == 0) {
            iVar7 = 1;
          }
          else {
            iVar7 = FUN_016d38c8(uVar10,1);
            if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,uVar10);
            }
          }
          iVar4 = (**(code **)(puVar12[1] + 0x10))(*puVar12,uVar9,uVar11,iVar7,uVar10);
          if (iVar4 == 0) {
            local_1d0 = 0;
            local_1d8 = iVar7;
            local_1d4 = uVar10;
            FUN_01514d7c(&local_258,&local_1d8);
            if (local_258 != -0x80000000) {
              FUN_01513330(&local_168);
              local_1d4 = local_168;
              local_1d0 = local_164;
              uStack_1cc = uStack_160;
              uStack_1c8 = local_15c;
              uStack_1c4 = uStack_158;
              uStack_1c0 = uStack_154;
              local_1d8 = -0x7ffffffb;
              FUN_01527c9c(&local_168,&local_1d8);
              local_1e0 = 5;
              FUN_016dd1aa(&local_258,&local_168,0x78);
              uVar8 = param_2[0x17];
              local_120 = param_2[0x12];
              uStack_11c = param_2[0x13];
              uStack_118 = param_2[0x14];
              uStack_114 = param_2[0x15];
              uStack_110 = param_2[0x16];
              local_70 = param_2[0x3e];
              uStack_6c = param_2[0x3f];
              uStack_68 = param_2[0x40];
              uStack_64 = param_2[0x41];
              uStack_60 = param_2[0x42];
              local_5c = param_2[0x43];
              uStack_58 = param_2[0x44];
              uStack_54 = param_2[0x45];
              uStack_50 = param_2[0x46];
              uStack_4c = param_2[0x47];
              local_48 = param_2[0x48];
              uStack_44 = param_2[0x49];
              uStack_40 = param_2[0x4a];
              uStack_3c = param_2[0x4b];
              uStack_38 = param_2[0x4c];
              uStack_34 = param_2[0x4d];
              uVar11 = param_2[0x18];
              local_168 = *param_2;
              local_164 = param_2[1];
              uStack_160 = param_2[2];
              local_15c = param_2[3];
              uStack_158 = param_2[4];
              uStack_154 = param_2[5];
              uStack_150 = param_2[6];
              FUN_016dd1aa(auStack_104,param_2 + 0x19,0x94);
              local_140 = param_2[10];
              uStack_13c = param_2[0xb];
              uStack_138 = param_2[0xc];
              uStack_134 = param_2[0xd];
              local_130 = param_2[0xe];
              uStack_12c = param_2[0xf];
              uStack_128 = param_2[0x10];
              uStack_124 = param_2[0x11];
              local_14c = param_2[7];
              uStack_148 = param_2[8];
              uStack_144 = param_2[9];
              local_30 = 1;
              local_10c = uVar8;
              local_108 = uVar11;
              uVar5 = FUN_01547e3c(0x13c,4);
              FUN_016dd1aa(uVar5,&local_168,0x13c);
              FUN_016dd1aa(&local_168,&local_258,0x7c);
              FUN_01548668(param_1,uVar5,param_3,&local_168);
              if (uVar10 != 0) {
                thunk_FUN_016d3fb4(iVar7);
              }
              if ((uVar6 & 0x7fffffff) != 0) {
                thunk_FUN_016d3fb4(uVar9);
              }
              uVar6 = *param_4;
              if (uVar6 < 0x80000001) {
                if (*puVar13 != 0x80000006) {
                  FUN_015432d8(puVar13);
                  uVar6 = *param_4;
                }
                if ((uVar6 & 0x7fffffff) != 0) {
                  thunk_FUN_016d3fb4(param_4[1]);
                  thunk_FUN_016d3fb4(param_2);
                  return;
                }
              }
              else {
                FUN_015430a0(param_4);
              }
              goto LAB_0154b568;
            }
            iVar4 = *param_3;
            local_164 = 0x80001;
            local_168 = 0x80000001;
            local_f0 = 4;
            FUN_01525ed4(iVar4,&local_168,*(char *)(iVar4 + 0x31) == '\x02');
            *(undefined1 *)(iVar4 + 0x255) = 1;
            *param_1 = -0x7fffffea;
            param_1[1] = local_254;
            param_1[2] = iStack_250;
            param_1[3] = iStack_24c;
          }
          else {
            iVar4 = *param_3;
            local_164 = 0x80001;
            local_168 = 0x80000001;
            local_f0 = 4;
            FUN_01525ed4(iVar4,&local_168,*(char *)(iVar4 + 0x31) == '\x02');
            *(undefined1 *)(iVar4 + 0x255) = 1;
            *(undefined1 *)(param_1 + 1) = 0x18;
            *param_1 = (int)&DAT_8000001c;
          }
          if (uVar10 != 0) {
            thunk_FUN_016d3fb4(iVar7);
          }
          goto LAB_0154b5d8;
        }
        puVar12 = puVar12 + 2;
        iVar7 = iVar7 + -8;
      } while (iVar7 != 0);
    }
    iVar7 = *param_3;
    local_164 = 0x80001;
    local_168 = 0x80000001;
    local_f0 = 4;
    FUN_01525ed4(iVar7,&local_168,*(char *)(iVar7 + 0x31) == '\x02');
    *(undefined1 *)(iVar7 + 0x255) = 1;
    *(undefined1 *)(param_1 + 1) = 0x33;
    puVar2 = &DAT_8000001c;
LAB_0154b5d0:
    *param_1 = (int)puVar2;
LAB_0154b5d8:
    if ((uVar6 & 0x7fffffff) == 0) {
      uVar6 = *param_4;
    }
    else {
      thunk_FUN_016d3fb4(uVar9);
      uVar6 = *param_4;
    }
    if (uVar6 < 0x80000001) {
      if (*puVar13 != 0x80000006) {
        FUN_015432d8(puVar13);
        uVar6 = *param_4;
      }
      if ((uVar6 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(param_4[1]);
      }
    }
    else {
      FUN_015430a0(param_4);
    }
  }
  else {
    FUN_016dd1aa(&local_168,param_4,0x78);
    FUN_015622b4(&local_258,&local_168,&DAT_0040c784,1,&DAT_0040c0bb,1);
    piVar3 = (int *)((uint)&local_258 | 4);
    local_1d8 = *piVar3;
    local_1d4 = piVar3[1];
    local_1d0 = piVar3[2];
    uStack_1cc = piVar3[3];
    uStack_1c8 = piVar3[4];
    FUN_015430a0(&local_168);
    param_1[1] = local_1d8;
    param_1[2] = local_1d4;
    param_1[3] = local_1d0;
    param_1[4] = uStack_1cc;
    param_1[5] = uStack_1c8;
    param_1[6] = local_240;
    param_1[7] = local_23c;
    *param_1 = local_258;
  }
  FUN_0154b200(param_2);
LAB_0154b568:
  thunk_FUN_016d3fb4(param_2);
  return;
}

