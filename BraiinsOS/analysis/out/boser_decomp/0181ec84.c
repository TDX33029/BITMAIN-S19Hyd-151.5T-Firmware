// FUN_0181ec84 @ 0181ec84 size=788 calls_out=11 calls_in=0
// strings: 

int FUN_0181ec84(int *param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined ***pppuVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_298 [108];
  undefined **local_22c;
  int local_228;
  int local_224;
  undefined **local_220;
  int local_21c;
  int iStack_218;
  undefined **local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined **local_180;
  int local_17c;
  int local_178;
  uint local_170;
  int local_16c;
  int iStack_168;
  int iStack_164;
  int local_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  uint local_d0;
  int local_cc;
  undefined1 auStack_c8 [144];
  int local_38;
  
  if (*param_2 != 3 || param_2[1] != 0) {
    local_170 = param_2[0x12];
    local_16c = param_2[0x13];
    iStack_168 = param_2[0x14];
    iStack_164 = param_2[0x15];
    local_160 = param_2[0x16];
    iStack_15c = param_2[0x17];
    iStack_158 = param_2[0x18];
    iStack_154 = param_2[0x19];
    local_178 = param_1[2];
    local_180 = (undefined **)*param_1;
    local_17c = param_1[1];
    *param_1 = 2;
    if (local_180 == (undefined **)0x2) {
      iVar11 = FUN_01427b74(3);
      FUN_009d5b68(&local_170);
      FUN_0071227c(param_2);
      return iVar11;
    }
    FUN_018541f0(auStack_298,param_2);
    local_220 = local_180;
    local_21c = local_17c;
    iStack_218 = local_178;
    FUN_01bed4e2(auStack_c8,auStack_298,0x68);
    local_d0 = 4;
    local_cc = 0;
    FUN_01854658(&local_220,&local_d0);
    return 0;
  }
  iVar11 = param_2[2];
  ppuVar4 = (undefined **)*param_1;
  *param_1 = 2;
  if (ppuVar4 == (undefined **)0x2) {
    if ((char)param_1[5] != '\0') {
      return iVar11;
    }
    iVar12 = param_1[4];
    DataMemoryBarrier(0xb);
    puVar9 = (undefined4 *)(iVar12 + 8);
    do {
      uVar5 = *puVar9;
      bVar1 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar1);
    *puVar9 = 3;
    DataMemoryBarrier(0xb);
    cVar3 = FUN_01ae6348(uVar5);
    if (cVar3 == '\x02') {
      pcVar6 = (char *)(iVar12 + 0x14);
      do {
        DataMemoryBarrier(0xb);
        do {
          cVar3 = *pcVar6;
          bVar1 = (bool)hasExclusiveAccess(pcVar6);
        } while (!bVar1);
        *pcVar6 = '\x01';
        DataMemoryBarrier(0xb);
      } while (cVar3 != '\0');
      iVar7 = *(int *)(iVar12 + 0xc);
      *(undefined4 *)(iVar12 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar12 + 0x14) = 0;
      DataMemoryBarrier(0xb);
      if (iVar7 != 0) {
        (**(code **)(iVar7 + 4))(*(undefined4 *)(iVar12 + 0x10));
      }
    }
    iVar12 = param_1[3];
    if (*(char *)(iVar12 + 0x7c) == '\0') {
      *(undefined1 *)(iVar12 + 0x7c) = 1;
    }
    puVar10 = (uint *)(iVar12 + 0x80);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar10);
    } while (!bVar1);
    *puVar10 = *puVar10 | 1;
    FUN_019e03e8(iVar12 + 0x60);
    local_21c = 0;
    local_220 = &PTR_LAB_01cf4660;
    FUN_01823438(&local_d0,param_1[3],&local_220);
    iVar12 = local_cc;
    uVar2 = local_d0;
    if (local_d0 == 5 && local_cc == 0) {
      return iVar11;
    }
    FUN_01bed4e2(&local_170,auStack_c8,0x9c);
    if ((local_d0 & 6) == 4) {
      return iVar11;
    }
    FUN_01bed4e2(auStack_c8,&local_170,0x9c);
    FUN_01bed4e2(&local_220,&local_170,0x9c);
    local_cc = 0;
    local_d0 = 3;
    FUN_01854528(&local_d0);
    if (uVar2 == 3 && iVar12 == 0) {
      return iVar11;
    }
    local_170 = uVar2;
    local_16c = iVar12;
    FUN_01bed4e2(&iStack_168,&local_220,0x90);
    local_180 = local_190;
    local_17c = uStack_18c;
    local_178 = uStack_188;
    iVar7 = FUN_01427b74(4);
    FUN_01854138(iVar7,iVar11);
    local_d0 = uVar2;
    local_cc = iVar12;
    FUN_01bed4e2(auStack_c8,&local_220,0x90);
    pppuVar8 = &local_180;
    local_38 = iVar7;
  }
  else {
    local_cc = 0;
    local_d0 = 3;
    pppuVar8 = &local_22c;
    local_22c = ppuVar4;
    local_228 = param_1[1];
    local_224 = param_1[2];
    local_38 = iVar11;
  }
  FUN_01854658(pppuVar8,&local_d0);
  return 0;
}

