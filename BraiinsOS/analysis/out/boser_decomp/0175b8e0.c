// FUN_0175b8e0 @ 0175b8e0 size=964 calls_out=13 calls_in=2
// strings: 

int * FUN_0175b8e0(uint *param_1,uint *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int *piVar11;
  uint uStack_22c;
  uint uStack_228;
  uint local_224;
  undefined **local_220;
  uint local_21c;
  uint uStack_218;
  uint uStack_214;
  uint local_210;
  uint uStack_20c;
  uint uStack_208;
  uint uStack_204;
  uint local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_170;
  uint local_16c;
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint uStack_134;
  uint local_130;
  undefined2 local_12c;
  undefined1 local_12a;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint local_d0;
  int local_cc;
  undefined1 auStack_c8 [144];
  int *local_38;
  
  if (*param_2 != 3 || param_2[1] != 0) {
    local_220 = (undefined **)param_2[0x12];
    local_21c = param_2[0x13];
    uStack_218 = param_2[0x14];
    uStack_214 = param_2[0x15];
    local_210 = param_2[0x16];
    uStack_20c = param_2[0x17];
    uStack_208 = param_2[0x18];
    uStack_204 = param_2[0x19];
    local_178 = param_1[2];
    local_180 = *param_1;
    local_17c = param_1[1];
    *param_1 = 2;
    if (local_180 == 2) {
      piVar11 = (int *)FUN_01427b74(3);
      FUN_009d5b68(&local_220);
      FUN_0071227c(param_2);
      return piVar11;
    }
    local_128 = param_2[0x12];
    uStack_124 = param_2[0x13];
    uStack_120 = param_2[0x14];
    uStack_11c = param_2[0x15];
    local_118 = param_2[0x16];
    uStack_114 = param_2[0x17];
    uStack_110 = param_2[0x18];
    uStack_10c = param_2[0x19];
    local_12c = (undefined2)param_2[0x11];
    local_16c = 0;
    local_170 = 0;
    local_12a = 2;
    local_130 = 0;
    local_138 = local_138 & 0xffff0000;
    local_13c = 0;
    local_140 = 4;
    local_144 = 0;
    local_148 = 0;
    local_14c = 4;
    local_150 = 0;
    local_154 = 0;
    local_158 = 2;
    FUN_017793c0(&local_170);
    local_170 = *param_2;
    local_16c = param_2[1];
    uStack_168 = param_2[2];
    uStack_164 = param_2[3];
    uStack_160 = param_2[4];
    local_15c = param_2[5];
    local_158 = param_2[6];
    local_154 = param_2[7];
    local_150 = param_2[8];
    local_14c = param_2[9];
    local_148 = param_2[10];
    local_144 = param_2[0xb];
    local_140 = param_2[0xc];
    local_13c = param_2[0xd];
    local_138 = param_2[0xe];
    uStack_134 = param_2[0xf];
    local_12a = *(undefined1 *)((int)param_2 + 0x46);
    uVar3 = param_2[0x10];
    FUN_0178e884(0);
    local_130 = uVar3;
    FUN_01bed4e2(auStack_c8,&local_170,0x68);
    local_170 = local_180;
    local_16c = local_17c;
    uStack_168 = local_178;
    local_d0 = 4;
    local_cc = 0;
    FUN_017425d8(&local_170,&local_d0);
    return (int *)0x0;
  }
  piVar11 = (int *)param_2[2];
  uVar3 = *param_1;
  *param_1 = 2;
  if (uVar3 == 2) {
    if ((char)param_1[5] != '\0') {
      return piVar11;
    }
    uVar3 = param_1[4];
    DataMemoryBarrier(0xb);
    puVar9 = (undefined4 *)(uVar3 + 8);
    do {
      uVar4 = *puVar9;
      bVar1 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar1);
    *puVar9 = 3;
    DataMemoryBarrier(0xb);
    cVar2 = FUN_01ae6348(uVar4);
    if (cVar2 == '\x02') {
      pcVar5 = (char *)(uVar3 + 0x14);
      do {
        DataMemoryBarrier(0xb);
        do {
          cVar2 = *pcVar5;
          bVar1 = (bool)hasExclusiveAccess(pcVar5);
        } while (!bVar1);
        *pcVar5 = '\x01';
        DataMemoryBarrier(0xb);
      } while (cVar2 != '\0');
      iVar6 = *(int *)(uVar3 + 0xc);
      *(undefined4 *)(uVar3 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(uVar3 + 0x14) = 0;
      DataMemoryBarrier(0xb);
      if (iVar6 != 0) {
        (**(code **)(iVar6 + 4))(*(undefined4 *)(uVar3 + 0x10));
      }
    }
    uVar3 = param_1[3];
    if (*(char *)(uVar3 + 0x7c) == '\0') {
      *(undefined1 *)(uVar3 + 0x7c) = 1;
    }
    puVar10 = (uint *)(uVar3 + 0x80);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar10);
    } while (!bVar1);
    *puVar10 = *puVar10 | 1;
    FUN_019e03e8(uVar3 + 0x60);
    local_21c = 0;
    local_220 = &PTR_LAB_01cf4660;
    FUN_01823438(&local_d0,param_1[3],&local_220);
    iVar6 = local_cc;
    uVar3 = local_d0;
    if (local_d0 == 5 && local_cc == 0) {
      return piVar11;
    }
    FUN_01bed4e2(&local_170,auStack_c8,0x9c);
    if ((local_d0 & 6) == 4) {
      return piVar11;
    }
    FUN_01bed4e2(auStack_c8,&local_170,0x9c);
    FUN_01bed4e2(&local_220,&local_170,0x9c);
    local_cc = 0;
    local_d0 = 3;
    FUN_017421a8(&local_d0);
    if (uVar3 == 3 && iVar6 == 0) {
      return piVar11;
    }
    local_170 = uVar3;
    local_16c = iVar6;
    FUN_01bed4e2(&uStack_168,&local_220,0x90);
    local_180 = local_190;
    local_17c = uStack_18c;
    local_178 = uStack_188;
    piVar7 = (int *)FUN_01427b74(4);
    iVar8 = FUN_0142306c(piVar11);
    if (*piVar7 != 0) {
      FUN_01443048(*piVar7,piVar7[1]);
    }
    *piVar7 = iVar8;
    piVar7[1] = (int)&DAT_01cf47cc;
    local_d0 = uVar3;
    local_cc = iVar6;
    FUN_01bed4e2(auStack_c8,&local_220,0x90);
    puVar10 = &local_180;
    local_38 = piVar7;
  }
  else {
    local_cc = 0;
    local_d0 = 3;
    puVar10 = &uStack_22c;
    uStack_22c = uVar3;
    uStack_228 = param_1[1];
    local_224 = param_1[2];
    local_38 = piVar11;
  }
  FUN_017425d8(puVar10,&local_d0);
  return (int *)0x0;
}

