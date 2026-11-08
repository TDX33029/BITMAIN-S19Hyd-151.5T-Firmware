// FUN_01548668 @ 01548668 size=1596 calls_out=17 calls_in=4
// strings: 

void FUN_01548668(undefined4 *param_1,undefined4 *param_2,int *param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  undefined1 *puVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ushort *puVar15;
  uint *puVar16;
  undefined4 uVar17;
  uint local_1c8;
  uint uStack_1c4;
  uint local_1c0;
  uint uStack_1bc;
  uint local_1b8;
  uint local_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  int local_16c;
  int local_168;
  int local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 auStack_fc [148];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
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
  
  if (*(char *)(param_2 + 0x4e) == '\0') {
    FUN_0151eddc(param_2,param_4);
  }
  if ((*param_4 < 0x80000001) && (puVar16 = param_4 + 3, *puVar16 == 0x80000005)) {
    local_1c8 = param_4[4];
    uStack_1c4 = param_4[5];
    local_1c0 = param_4[6];
    uStack_1bc = param_4[7];
    uVar11 = param_4[8];
    local_1b4 = param_4[9];
    local_1b8 = uVar11;
    if (local_1c0 == 0) {
      if (local_1b4 == 0) {
        iVar4 = 1;
        iVar8 = 0;
        iVar12 = 1;
      }
      else {
        uVar3 = uVar11 + local_1b4 * 0x18;
        uVar13 = uVar11;
        do {
          piVar9 = *(int **)(uVar13 + 4);
          iVar12 = *(int *)(uVar13 + 8) << 4;
          local_170 = 0;
          puVar15 = (ushort *)((int)piVar9 + 0xe);
          local_178 = 0;
          while (iVar12 != 0) {
            iVar4 = *piVar9;
            uVar5 = *(ushort *)(piVar9 + 3);
            piVar9 = piVar9 + 4;
            if (iVar4 == -0x7fffffff) {
              uVar5 = 5;
            }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch(uVar5 & 0xff) {
            case 0x11:
              uVar5 = 0x12;
              break;
            case 0x12:
              uVar5 = 0x13;
              break;
            case 0x13:
              uVar5 = 0x14;
              break;
            case 0x14:
              uVar5 = 0x15;
              break;
            case 0x15:
              uVar5 = 0x17;
              break;
            case 0x16:
              uVar5 = 0x1b;
              break;
            case 0x17:
              uVar5 = 0x23;
              break;
            case 0x18:
              uVar5 = 0x29;
              break;
            case 0x19:
              uVar5 = 0x2a;
              break;
            case 0x1a:
              uVar5 = 0x2b;
              break;
            case 0x1b:
              uVar5 = 0x2c;
              break;
            case 0x1c:
              uVar5 = 0x2d;
              break;
            case 0x1d:
              uVar5 = 0x2e;
              break;
            case 0x1e:
              uVar5 = 0x2f;
              break;
            case 0x1f:
              uVar5 = 0x30;
              break;
            case 0x20:
              uVar5 = 0x31;
              break;
            case 0x21:
              uVar5 = 0x32;
              break;
            case 0x22:
              uVar5 = 0x33;
              break;
            case 0x23:
              uVar5 = 0x39;
              break;
            case 0x24:
              uVar5 = 0x3374;
              break;
            case 0x25:
              uVar5 = 0x754f;
              break;
            case 0x26:
              uVar5 = 0xff01;
              break;
            case 0x27:
              uVar5 = 0xffa5;
              break;
            case 0x28:
              uVar5 = 0xfe0d;
              break;
            case 0x29:
              uVar5 = 0xfd00;
              break;
            case 0x2a:
              uVar5 = *puVar15;
            }
            iVar4 = FUN_0156a7f8(&local_178,uVar5);
            iVar12 = iVar12 + -0x10;
            puVar15 = puVar15 + 8;
            if (iVar4 != 0) {
              FUN_0156bc34(&local_178);
              goto LAB_01548aac;
            }
          }
          FUN_0156bc34(&local_178);
          uVar13 = uVar13 + 0x18;
        } while (uVar13 != uVar3);
        uVar13 = uVar11;
        do {
          iVar12 = *(int *)(uVar13 + 8) << 4;
          piVar9 = *(int **)(uVar13 + 4);
          while (piVar7 = piVar9, iVar12 != 0) {
            iVar12 = iVar12 + -0x10;
            piVar9 = piVar7 + 4;
            if ((*piVar7 != -0x7fffffff) && ((short)piVar7[3] != 5)) goto LAB_01548aac;
          }
          uVar13 = uVar13 + 0x18;
        } while (uVar13 != uVar3);
        iVar8 = 0;
        piVar9 = *(int **)(uVar11 + 4);
        iVar14 = *(int *)(uVar11 + 8) << 4;
        do {
          iVar12 = 1;
          if (iVar14 == 0) {
            iVar4 = 1;
            break;
          }
          if (*piVar9 == -0x7fffffff) {
            iVar8 = piVar9[3];
            uVar10 = 0;
            if (-1 < iVar8) {
              iVar4 = piVar9[2];
              if (iVar8 == 0) {
                iVar8 = 0;
                break;
              }
              uVar10 = 1;
              iVar12 = FUN_0063f47c(iVar8,1);
              if (iVar12 != 0) {
                break;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar10,iVar8);
          }
          piVar7 = piVar9 + 3;
          piVar9 = piVar9 + 4;
          iVar14 = iVar14 + -0x10;
          iVar4 = 1;
          iVar12 = 1;
        } while ((short)*piVar7 != 5);
      }
      FUN_016dd1aa(iVar12,iVar4);
      FUN_015138d4(&local_178,&local_1c8);
      FUN_01512dd0(&local_198,&local_178);
      uVar17 = param_2[0x17];
      local_178 = local_198;
      local_174 = uStack_194;
      local_170 = uStack_190;
      local_118 = param_2[0x12];
      uStack_114 = param_2[0x13];
      uStack_110 = param_2[0x14];
      uStack_10c = param_2[0x15];
      uStack_108 = param_2[0x16];
      local_68 = param_2[0x3e];
      uStack_64 = param_2[0x3f];
      uStack_60 = param_2[0x40];
      uStack_5c = param_2[0x41];
      uStack_58 = param_2[0x42];
      local_54 = param_2[0x43];
      uStack_50 = param_2[0x44];
      uStack_4c = param_2[0x45];
      uStack_48 = param_2[0x46];
      uStack_44 = param_2[0x47];
      local_40 = param_2[0x48];
      uStack_3c = param_2[0x49];
      uStack_38 = param_2[0x4a];
      uStack_34 = param_2[0x4b];
      uStack_30 = param_2[0x4c];
      uStack_2c = param_2[0x4d];
      uVar10 = param_2[0x18];
      local_160 = *param_2;
      uStack_15c = param_2[1];
      uStack_158 = param_2[2];
      local_154 = param_2[3];
      uStack_150 = param_2[4];
      uStack_14c = param_2[5];
      uStack_148 = param_2[6];
      FUN_016dd1aa(auStack_fc,param_2 + 0x19,0x94);
      local_138 = param_2[10];
      uStack_134 = param_2[0xb];
      uStack_130 = param_2[0xc];
      uStack_12c = param_2[0xd];
      local_128 = param_2[0xe];
      uStack_124 = param_2[0xf];
      uStack_120 = param_2[0x10];
      uStack_11c = param_2[0x11];
      local_144 = param_2[7];
      uStack_140 = param_2[8];
      uStack_13c = param_2[9];
      local_16c = iVar8;
      local_168 = iVar12;
      local_164 = iVar8;
      local_104 = uVar17;
      local_100 = uVar10;
      iVar12 = thunk_FUN_016d4a50(0x150);
      if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x150);
      }
      FUN_016dd1aa(iVar12,&local_178,0x150);
      *param_1 = 0x80000029;
      param_1[1] = iVar12;
      uVar11 = *param_4;
      param_1[2] = &DAT_018a7dc4;
      if (uVar11 < 0x80000001) {
        if (*puVar16 != 0x80000005) {
          FUN_015432d8();
          uVar11 = *param_4;
        }
        if ((uVar11 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(param_4[1]);
          thunk_FUN_016d3fb4(param_2);
          return;
        }
      }
      else {
        FUN_015430a0(param_4);
      }
      goto LAB_015487b4;
    }
    iVar12 = *param_3;
    local_174 = 0x100001;
    local_178 = 0x80000001;
    local_100 = CONCAT22(local_100._2_2_,4);
    FUN_01525ed4(iVar12,&local_178,*(char *)(iVar12 + 0x31) == '\x02');
    puVar6 = (undefined1 *)0x80000016;
    *(undefined1 *)(iVar12 + 0x255) = 1;
    uVar1 = 5;
    goto LAB_01548af8;
  }
  FUN_016dd1aa(&local_178,param_4,0x78);
  FUN_015622b4(&local_198,&local_178,&DAT_0040c784,1,&DAT_0040c0b1,1);
  puVar2 = (undefined4 *)((uint)&local_198 | 4);
  local_1b0 = *puVar2;
  uStack_1ac = puVar2[1];
  uStack_1a8 = puVar2[2];
  uStack_1a4 = puVar2[3];
  uStack_1a0 = puVar2[4];
  uStack_19c = puVar2[5];
  FUN_015430a0(&local_178);
  param_1[1] = local_1b0;
  param_1[2] = uStack_1ac;
  param_1[3] = uStack_1a8;
  param_1[4] = uStack_1a4;
  param_1[5] = uStack_1a0;
  param_1[6] = uStack_19c;
  *param_1 = local_198;
  param_1[7] = local_17c;
LAB_015487ac:
  FUN_01549198(param_2);
LAB_015487b4:
  thunk_FUN_016d3fb4(param_2);
  return;
LAB_01548aac:
  iVar12 = *param_3;
  local_174 = 0x1a0001;
  local_178 = 0x80000001;
  local_100 = CONCAT22(local_100._2_2_,4);
  FUN_01525ed4(iVar12,&local_178,*(char *)(iVar12 + 0x31) == '\x02');
  uVar1 = 1;
  puVar6 = &DAT_8000001c;
  *(undefined1 *)(iVar12 + 0x255) = 1;
LAB_01548af8:
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = puVar6;
  FUN_0154376c(&local_1c8);
  uVar11 = *param_4;
  if (uVar11 < 0x80000001) {
    if (*puVar16 != 0x80000005) {
      FUN_015432d8(puVar16);
      uVar11 = *param_4;
    }
    if ((uVar11 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(param_4[1]);
    }
  }
  else {
    FUN_015430a0(param_4);
  }
  goto LAB_015487ac;
}

