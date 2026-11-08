// FUN_0197a5c8 @ 0197a5c8 size=456 calls_out=3 calls_in=23
// strings: too many active read locks on RwLock

/* WARNING: Removing unreachable block (ram,0x0197a6e0) */
/* WARNING: Removing unreachable block (ram,0x0197a710) */

void FUN_0197a5c8(uint *param_1)

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
LAB_0197a630:
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
        FUN_012fb100("too many active read locks on RwLock",0x49,&DAT_01d27994);
      }
      if ((uVar4 & 0x40000000) == 0) {
        do {
          if (*param_1 != uVar4) {
            ClearExclusiveLocal();
            uVar4 = *param_1;
            goto LAB_0197a630;
          }
          bVar7 = (bool)hasExclusiveAccess(param_1);
        } while (!bVar7);
        *param_1 = uVar4 | 0x40000000;
        uVar4 = uVar4 | 0x40000000;
      }
      do {
        if ((*param_1 != uVar4) ||
           (uVar5 = FUN_01be6c3c(0xf0,param_1,0x89,uVar4,0,0,0xffffffff), uVar5 < 0x80000000))
        break;
        piVar3 = (int *)FUN_01be3244();
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

