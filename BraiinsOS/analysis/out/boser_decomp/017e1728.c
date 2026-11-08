// FUN_017e1728 @ 017e1728 size=840 calls_out=14 calls_in=1
// strings: cannot poll Select twice | internal error: entered unreachable code | Map must not be polled after it returned `Poll::Ready`

void FUN_017e1728(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  uint *puVar8;
  int **ppiVar9;
  int *local_3b8;
  int local_3b4;
  int *apiStack_3b0 [214];
  undefined1 *local_58;
  undefined4 local_40;
  int *local_38;
  undefined4 local_30;
  int *local_2c;
  int *local_28;
  
  if (*param_2 == 5 && param_2[1] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("cannot poll Select twice",0x18,&DAT_01d2d034);
  }
  cVar2 = FUN_017fed90(param_2,param_3);
  if (cVar2 == '\x02') {
    puVar8 = (uint *)(param_2 + 0xe2);
    if (*puVar8 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_01d2da7c);
    }
    if ((*puVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_0050c3f3,0x1a,&DAT_01d1d4b4);
    }
    uVar6 = *param_3;
    piVar5 = param_2 + 0xe3;
    iVar3 = FUN_017f0f3c(piVar5);
    if (iVar3 == 0) {
      piVar7 = (int *)*piVar5;
      if (piVar7 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar7;
          bVar1 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar1);
        *piVar7 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01784e7c(*piVar5);
        }
      }
      piVar7 = (int *)0x0;
      *piVar5 = 0;
    }
    else {
      if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2df1c);
      }
      FUN_01348e78(*piVar5 + 0x24,uVar6);
      iVar3 = FUN_017f0f3c(piVar5);
      if (iVar3 != 0) {
        *param_1 = 6;
        param_1[1] = 0;
        return;
      }
      piVar7 = (int *)*piVar5;
    }
    uVar4 = *puVar8;
    *puVar8 = 0;
    if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d1d4c4);
    }
    local_28 = piVar7;
    FUN_017c2fb8(puVar8);
    *puVar8 = 2;
    local_3b8 = piVar7;
    FUN_017fae60(&local_3b8);
    if (local_3b8 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *local_3b8;
        bVar1 = (bool)hasExclusiveAccess(local_3b8);
      } while (!bVar1);
      *local_3b8 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01784e7c(local_3b8);
      }
    }
    piVar5 = (int *)*param_2;
    local_3b4 = param_2[1];
    *param_2 = 5;
    param_2[1] = 0;
    if (piVar5 == (int *)0x5 && local_3b4 == 0) {
LAB_017e1a10:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d1dfec);
    }
    local_3b8 = piVar5;
    FUN_01bed4e2(apiStack_3b0,param_2 + 2,0x388);
    FUN_01bed4e2(param_1,&local_3b8,0x388);
    if ((((byte)local_30 & 1) != 0) && (FUN_017fae60(&local_2c), local_2c != (int *)0x0)) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *local_2c;
        bVar1 = (bool)hasExclusiveAccess(local_2c);
      } while (!bVar1);
      *local_2c = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01784e7c(local_2c);
      }
    }
  }
  else {
    piVar5 = (int *)*param_2;
    iVar3 = param_2[1];
    *param_2 = 5;
    param_2[1] = 0;
    if (piVar5 == (int *)0x5 && iVar3 == 0) goto LAB_017e1a10;
    ppiVar9 = apiStack_3b0;
    local_3b8 = piVar5;
    local_3b4 = iVar3;
    FUN_01bed4e2(ppiVar9,param_2 + 2,0x388);
    *param_1 = 5;
    param_1[1] = 0;
    param_1[3] = local_30;
    param_1[4] = local_2c;
    *(char *)(param_1 + 2) = cVar2;
    if (piVar5 != (int *)0x4 || iVar3 != 0) {
      if (piVar5 != (int *)0x3 || iVar3 != 0) {
        if (local_58 != &DAT_3b9aca00) {
          FUN_01431b40(local_40);
          thunk_FUN_01be4678(local_40);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *local_38;
          bVar1 = (bool)hasExclusiveAccess(local_38);
        } while (!bVar1);
        *local_38 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01436864(local_38);
          ppiVar9 = &local_3b8;
        }
        else {
          ppiVar9 = &local_3b8;
        }
      }
      FUN_01773714(ppiVar9);
    }
  }
  return;
}

