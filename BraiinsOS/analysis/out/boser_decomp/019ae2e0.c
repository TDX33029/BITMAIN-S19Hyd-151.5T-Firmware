// FUN_019ae2e0 @ 019ae2e0 size=440 calls_out=2 calls_in=15
// strings: 

/* WARNING: Removing unreachable block (ram,0x019ae358) */
/* WARNING: Removing unreachable block (ram,0x019ae3d8) */

void FUN_019ae2e0(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar2 = *param_1;
  if ((-1 < (int)uVar2) && ((uVar2 & 0x3fffffff) != 0)) {
    iVar4 = -99;
    do {
      HintYield();
      uVar2 = *param_1;
      if (((int)uVar2 < 0) || ((uVar2 & 0x3fffffff) == 0)) break;
      bVar7 = iVar4 != 0;
      iVar4 = iVar4 + 1;
    } while (bVar7);
  }
  uVar6 = 0x3fffffff;
LAB_019ae35c:
  do {
    do {
      do {
        while ((uVar2 & 0x3fffffff) == 0) {
          uVar5 = *param_1;
          if (uVar5 == uVar2) {
            bVar1 = (bool)hasExclusiveAccess(param_1);
            if (bVar1) {
              *param_1 = uVar2 | uVar6;
            }
            bVar7 = false;
            if (bVar1) {
              DataMemoryBarrier(0xb);
              bVar7 = true;
            }
          }
          else {
            bVar7 = false;
            ClearExclusiveLocal();
          }
          uVar2 = uVar5;
          if (bVar7) {
            return;
          }
        }
        if (-1 < (int)uVar2) {
          do {
            if (*param_1 != uVar2) {
              ClearExclusiveLocal();
              uVar2 = *param_1;
              goto LAB_019ae35c;
            }
            bVar7 = (bool)hasExclusiveAccess(param_1);
          } while (!bVar7);
          *param_1 = uVar2 | 0x80000000;
        }
        uVar5 = param_1[1];
        DataMemoryBarrier(0xb);
        uVar2 = *param_1;
        uVar6 = 0xbfffffff;
      } while ((uVar2 < 0x80000000) || ((uVar2 & 0x3fffffff) == 0));
      while (param_1[1] == uVar5) {
        uVar2 = FUN_01be6c3c(0xf0,param_1 + 1,0x89,uVar5,0,0,0xffffffff);
        if ((uVar2 < 0x80000000) || (piVar3 = (int *)FUN_01be3244(), *piVar3 != 4)) break;
      }
      uVar2 = *param_1;
    } while (((int)uVar2 < 0) || ((uVar2 & 0x3fffffff) == 0));
    iVar4 = -99;
    do {
      HintYield();
      uVar2 = *param_1;
      if (((int)uVar2 < 0) || ((uVar2 & 0x3fffffff) == 0)) break;
      bVar7 = iVar4 != 0;
      iVar4 = iVar4 + 1;
    } while (bVar7);
  } while( true );
}

