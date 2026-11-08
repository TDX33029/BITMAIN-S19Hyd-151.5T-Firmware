// FUN_015bebb8 @ 015bebb8 size=456 calls_out=3 calls_in=10
// strings: too many active read locks on RwLock

/* WARNING: Removing unreachable block (ram,0x015becd0) */
/* WARNING: Removing unreachable block (ram,0x015bed00) */

void FUN_015bebb8(uint *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  uVar4 = *param_1;
  if (uVar4 == 0x3fffffff) {
    iVar2 = -99;
    do {
      HintYield();
      uVar4 = *param_1;
      if (uVar4 != 0x3fffffff) break;
      bVar6 = iVar2 != 0;
      iVar2 = iVar2 + 1;
    } while (bVar6);
  }
  bVar6 = false;
LAB_015bec20:
  do {
    do {
      while ((((uVar5 = uVar4 & 0x3fffffff, bVar6 && ((uVar4 & 0x40000000) == 0)) &&
              (0xc0000002 < uVar5 + 0xc0000002)) ||
             (((uVar5 < 0x3ffffffe && ((uVar4 & 0x40000000) == 0)) && (-1 < (int)uVar4))))) {
        uVar5 = *param_1;
        if (uVar5 == uVar4) {
          bVar1 = (bool)hasExclusiveAccess(param_1);
          if (bVar1) {
            *param_1 = uVar4 + 1;
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
        uVar4 = uVar5;
        if (bVar7) {
          return;
        }
      }
      if (uVar5 == 0x3ffffffe) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("too many active read locks on RwLock",0x49,&DAT_018aad68);
      }
      if ((uVar4 & 0x40000000) == 0) {
        do {
          if (*param_1 != uVar4) {
            ClearExclusiveLocal();
            uVar4 = *param_1;
            goto LAB_015bec20;
          }
          bVar7 = (bool)hasExclusiveAccess(param_1);
        } while (!bVar7);
        *param_1 = uVar4 | 0x40000000;
        uVar4 = uVar4 | 0x40000000;
      }
      do {
        if ((*param_1 != uVar4) ||
           (uVar5 = FUN_016d6968(0xf0,param_1,0x89,uVar4,0,0,0xffffffff), uVar5 < 0x80000000))
        break;
        piVar3 = (int *)FUN_016d2bc8();
      } while (*piVar3 == 4);
      uVar4 = *param_1;
      bVar6 = true;
    } while (uVar4 != 0x3fffffff);
    iVar2 = -99;
    do {
      HintYield();
      uVar4 = *param_1;
      if (uVar4 != 0x3fffffff) break;
      bVar7 = iVar2 != 0;
      iVar2 = iVar2 + 1;
    } while (bVar7);
  } while( true );
}

