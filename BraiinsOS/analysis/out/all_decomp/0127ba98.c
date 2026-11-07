// FUN_0127ba98 @ 0127ba98 size=812 calls_out=6 calls_in=16
// strings: 

/* WARNING: Removing unreachable block (ram,0x0127bbac) */
/* WARNING: Removing unreachable block (ram,0x0127bd60) */

void FUN_0127ba98(uint *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined1 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  uint *puVar11;
  undefined8 uVar12;
  int *local_3c;
  uint local_38;
  char local_34;
  int local_30;
  undefined1 auStack_2c [8];
  
  uVar12 = thunk_FUN_016de0ee(param_1,0x248);
  puVar11 = (uint *)((int)uVar12 + (int)((ulonglong)uVar12 >> 0x20));
  DataMemoryBarrier(0xb);
  uVar5 = *param_1;
LAB_0127bae0:
  do {
    switch(uVar5 & 3) {
    case 0:
      while (*param_1 == uVar5) {
        bVar2 = (bool)hasExclusiveAccess(param_1);
        if (bVar2) {
          *param_1 = uVar5 + 1;
          DataMemoryBarrier(0xb);
          iVar8 = (**(code **)(param_3 + 0x10))(param_2);
          uVar9 = 0;
          if (iVar8 != 0) {
            uVar9 = 2;
          }
          FUN_0127b98c(param_1,uVar9);
          return;
        }
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      uVar5 = *param_1;
      break;
    case 1:
      while( true ) {
        uVar3 = *puVar11;
        if (uVar3 < 3) {
          piVar4 = (int *)FUN_015f7ed0();
        }
        else {
          piVar4 = (int *)(uVar3 - 8);
          do {
            iVar8 = *piVar4;
            bVar2 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar2);
          *piVar4 = iVar8 + 1;
          if (iVar8 < 0) goto LAB_0127bdd4;
        }
        local_38 = uVar5 & 0xfffffffc;
        local_34 = '\0';
        uVar3 = *param_1;
        local_3c = piVar4;
        if (uVar3 == uVar5) {
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(param_1);
            if (bVar2) {
              *param_1 = (uint)&local_3c | 1;
              goto LAB_0127bd10;
            }
            uVar3 = *param_1;
          } while (uVar3 == uVar5);
        }
        ClearExclusiveLocal();
        if ((uVar3 & 3) != 1) break;
        uVar5 = uVar3;
        if (piVar4 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar8 = *piVar4;
            bVar2 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar2);
          *piVar4 = iVar8 + -1;
          if (iVar8 == 1) {
            DataMemoryBarrier(0xb);
            FUN_015e92c0(piVar4);
          }
        }
      }
      if (piVar4 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar8 + -1;
        goto LAB_0127bd88;
      }
      goto LAB_0127bad8;
    case 2:
      return;
    case 3:
      do {
      } while( true );
    }
  } while( true );
LAB_0127bd10:
  DataMemoryBarrier(0xb);
  if (local_34 == '\0') {
    uVar5 = *puVar11;
    if (uVar5 < 3) {
      piVar4 = (int *)FUN_015f7ed0();
    }
    else {
      piVar4 = (int *)(uVar5 - 8);
      do {
        iVar8 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar8 + 1;
      if (iVar8 < 0) {
LAB_0127bdd4:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x127bdd4);
        (*pcVar1)();
      }
    }
    piVar10 = piVar4 + 6;
    do {
      iVar8 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar8 + -1;
    DataMemoryBarrier(0xb);
    if (iVar8 != 1) {
LAB_0127bc6c:
      local_30 = 0;
      while (*piVar10 == -1) {
        puVar6 = (undefined1 *)0x0;
        if (local_30 != 0) {
          puVar6 = auStack_2c;
        }
        uVar5 = FUN_016d6968(0xf0,piVar10,0x89,0xffffffff,puVar6,0,0xffffffff);
        if ((uVar5 < 0x80000000) || (piVar7 = (int *)FUN_016d2bc8(), *piVar7 != 4)) break;
      }
      do {
        if (*piVar10 != 1) goto LAB_0127bc64;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
        if (bVar2) {
          *piVar10 = 0;
          DataMemoryBarrier(0xb);
          break;
        }
      } while( true );
    }
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015e92c0(piVar4);
    }
    goto LAB_0127bd10;
  }
  if (local_3c != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *local_3c;
      bVar2 = (bool)hasExclusiveAccess(local_3c);
    } while (!bVar2);
    *local_3c = iVar8 + -1;
LAB_0127bd88:
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015e92c0(local_3c);
    }
  }
LAB_0127bad8:
  DataMemoryBarrier(0xb);
  uVar5 = *param_1;
  goto LAB_0127bae0;
LAB_0127bc64:
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  goto LAB_0127bc6c;
}

