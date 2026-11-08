// FUN_00027a64 @ 00027a64  size=1016  callers=0
// program: bmminer


uint FUN_00027a64(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar9;
  int *piVar8;
  size_t sVar10;
  size_t __nmemb;
  uint uVar11;
  uint param4;
  undefined4 local_306c;
  undefined4 local_3068;
  undefined4 local_3064;
  uint local_3060 [1036];
  char acStack_2030 [8196];
  
  uVar11 = 0;
  iVar6 = 0;
  local_306c = 0;
  memset(local_3060 + 0xc,0,0x1000);
  local_3060[4] = 0;
  local_3060[1] = 0xffffffff;
  local_3060[2] = 0xffffffff;
  local_3060[3] = 0xffffffff;
  local_3060[8] = 0;
  local_3068 = 0;
  local_3064 = 0;
  local_3060[0] = 0xffffffff;
  local_3060[5] = 0;
  local_3060[6] = 0;
  local_3060[7] = 0;
  local_3060[9] = 0;
  local_3060[10] = 0;
  local_3060[0xb] = 0;
  sVar10 = 0;
  do {
    iVar1 = FUN_0002a6f0(iVar6);
    __nmemb = sVar10;
    if (iVar1 != 0) {
      piVar7 = (int *)(param_2 + iVar6 * 0x400);
      FUN_00024f98(piVar7,local_3060 + iVar6,local_3060 + iVar6 + 4,&local_306c);
      uVar5 = local_3060[iVar6 + 4];
      param4 = local_3060[iVar6];
      __nmemb = sVar10 + 1;
      if (uVar11 < uVar5) {
        uVar11 = uVar5;
      }
      local_3060[sVar10 + 8] = param4;
      if (4 < DAT_000be63c) {
        snprintf(acStack_2030,0x2000,"chain[%d] min = %d max =%d\n",iVar6,param4,uVar5);
        FUN_0004948c(4,acStack_2030,0);
      }
      iVar1 = FUN_0002a514();
      uVar2 = local_306c;
      if (iVar1 != 0) {
        uVar5 = local_3060[iVar6];
        puVar4 = local_3060 + iVar6 * 0x100 + 0xc;
        piVar8 = piVar7;
        do {
          piVar9 = piVar8 + 1;
          *puVar4 = *piVar8 - uVar5;
          puVar4 = puVar4 + 1;
          piVar8 = piVar9;
        } while (piVar9 != piVar7 + iVar1);
      }
      if (DAT_000be8e8 == 2) {
        (&DAT_000c0430)[iVar6] = DAT_008c7040;
      }
      uVar3 = FUN_0002a514();
      uVar2 = FUN_000983e0(uVar2,uVar3);
      (&DAT_000c044c)[iVar6] = uVar2;
    }
    iVar6 = iVar6 + 1;
    sVar10 = __nmemb;
  } while (iVar6 != 4);
  qsort(local_3060 + 8,__nmemb,4,FUN_00024f88);
  if (4 < DAT_000be63c) {
    snprintf(acStack_2030,0x2000,"1.inc all chain freq to %d\n",local_3060[8]);
    FUN_0004948c(4,acStack_2030,0);
  }
  uVar2 = FUN_00024c74();
  sVar10 = 1;
  iVar6 = DAT_008c706c + DAT_008c7070;
  if (0x883 < iVar6) {
    iVar6 = 0x884;
  }
  FUN_00027460(0x32,local_3060[8],uVar2,iVar6,1);
  if (local_3060[8] != uVar11) {
    if (1 < __nmemb) {
      puVar4 = local_3060 + 8;
      do {
        iVar6 = 0;
        do {
          iVar1 = FUN_0002a6f0(iVar6);
          if ((iVar1 != 0) && (uVar5 = puVar4[1], uVar5 <= local_3060[iVar6])) {
            if (4 < DAT_000be63c) {
              snprintf(acStack_2030,0x2000,"2.chain_%d inc freq to %d\n",iVar6,uVar5);
              FUN_0004948c(4,acStack_2030,0);
              uVar5 = puVar4[1];
            }
            FUN_0002683c(param_1,iVar6,param_3,*puVar4,uVar5,0,param_5);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 != 4);
        sVar10 = sVar10 + 1;
        puVar4 = puVar4 + 1;
      } while (__nmemb != sVar10);
    }
    iVar6 = 0;
    do {
      iVar1 = FUN_0002a6f0(iVar6);
      if (iVar1 != 0) {
        uVar5 = local_3060[iVar6];
        if (uVar5 != local_3060[iVar6 + 4]) {
          if (4 < DAT_000be63c) {
            snprintf(acStack_2030,0x2000,"3.chain %d min = %d, max = %d",iVar6,uVar5,
                     local_3060[iVar6 + 4]);
            FUN_0004948c(4,acStack_2030,0);
            uVar5 = local_3060[iVar6];
          }
          FUN_0002500c(param_1,iVar6,local_3060 + iVar6 * 0x100 + 0xc,uVar5,param_5);
          uVar5 = local_3060[iVar6 + 4];
          (&DAT_000c0430)[iVar6] = uVar5;
          (&DAT_000c044c)[iVar6] = uVar5;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 4);
  }
  return uVar11;
}

