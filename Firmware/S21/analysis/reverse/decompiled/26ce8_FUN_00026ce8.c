// FUN_00026ce8 @ 00026ce8  size=648
// callers: [FUN_0005d758, FUN_0004ebd0]

uint FUN_00026ce8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint *extraout_r1;
  uint *extraout_r1_00;
  uint *puVar3;
  uint *extraout_r1_01;
  uint *extraout_r1_02;
  uint *extraout_r1_03;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar9;
  int *piVar8;
  size_t sVar10;
  uint uVar11;
  size_t __nmemb;
  uint in_fpscr;
  undefined4 uVar12;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 local_106c;
  undefined4 local_1068;
  undefined4 local_1064;
  uint local_1060 [1037];
  
  uVar11 = 0;
  iVar5 = 0;
  local_106c = 0;
  memset(local_1060 + 0xc,0,0x1000);
  local_1060[4] = 0;
  local_1060[1] = 0xffffffff;
  local_1060[2] = 0xffffffff;
  local_1060[3] = 0xffffffff;
  local_1060[8] = 0;
  local_1068 = 0;
  local_1064 = 0;
  local_1060[0] = 0xffffffff;
  local_1060[5] = 0;
  local_1060[6] = 0;
  local_1060[7] = 0;
  local_1060[9] = 0;
  local_1060[10] = 0;
  local_1060[0xb] = 0;
  sVar10 = 0;
  do {
    iVar1 = FUN_0002a6f0(iVar5);
    __nmemb = sVar10;
    if (iVar1 != 0) {
      piVar7 = (int *)(param_2 + iVar5 * 0x400);
      FUN_00024f98(piVar7,local_1060 + iVar5,local_1060 + iVar5 + 4,&local_106c);
      __nmemb = sVar10 + 1;
      if (uVar11 < local_1060[iVar5 + 4]) {
        uVar11 = local_1060[iVar5 + 4];
      }
      local_1060[sVar10 + 8] = local_1060[iVar5];
      iVar1 = FUN_0002a514();
      uVar12 = local_106c;
      if (iVar1 != 0) {
        uVar4 = local_1060[iVar5];
        puVar3 = local_1060 + iVar5 * 0x100 + 0xc;
        piVar8 = piVar7;
        do {
          piVar9 = piVar8 + 1;
          *puVar3 = *piVar8 - uVar4;
          puVar3 = puVar3 + 1;
          piVar8 = piVar9;
        } while (piVar9 != piVar7 + iVar1);
      }
      if (DAT_000be8e8 == 2) {
        (&DAT_000c0430)[iVar5] = DAT_008c7040;
      }
      uVar2 = FUN_0002a514();
      uVar12 = FUN_000983e0(uVar12,uVar2);
      *(undefined4 *)(DAT_00026f70 + iVar5 * 4) = uVar12;
    }
    iVar5 = iVar5 + 1;
    sVar10 = __nmemb;
  } while (iVar5 != 4);
  qsort(local_1060 + 8,__nmemb,4,FUN_00024f88);
  uVar12 = VectorUnsignedToFloat(local_1060[8],(byte)(in_fpscr >> 0x16) & 3);
  uVar4 = local_1060[8];
  uVar12 = FUN_00025da0(uVar12,0xff,param_3,param_4);
  if (local_1060[8] != uVar11) {
    puVar3 = extraout_r1;
    if (1 < __nmemb) {
      puVar6 = local_1060 + 8;
      sVar10 = 1;
      do {
        iVar5 = 0;
        do {
          iVar1 = FUN_0002a6f0(iVar5);
          puVar3 = extraout_r1_00;
          uVar12 = extraout_s0;
          if ((iVar1 != 0) && (puVar6[1] <= local_1060[iVar5])) {
            uVar12 = FUN_0002683c(param_1,iVar5,param_3,*puVar6,puVar6[1],param_4,100,param_3,
                                  param_4,uVar4);
            puVar3 = extraout_r1_03;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 != 4);
        sVar10 = sVar10 + 1;
        puVar6 = puVar6 + 1;
      } while (__nmemb != sVar10);
    }
    iVar5 = 0;
    do {
      iVar1 = FUN_0002a6f0(uVar12,iVar5,puVar3);
      puVar3 = extraout_r1_01;
      uVar12 = extraout_s0_00;
      if (iVar1 != 0) {
        puVar3 = local_1060 + iVar5 * 0x100 + 0xc;
        uVar12 = param_1;
        if (local_1060[iVar5] != local_1060[iVar5 + 4]) {
          uVar12 = FUN_0002500c(iVar5,puVar3,local_1060[iVar5],100);
          puVar3 = extraout_r1_02;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 4);
  }
  return uVar11;
}


