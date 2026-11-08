// FUN_006bf9f0 @ 006bf9f0 size=976 calls_out=11 calls_in=6
// strings: 

/* WARNING: Removing unreachable block (ram,0x006bfcac) */
/* WARNING: Removing unreachable block (ram,0x006bfcbc) */
/* WARNING: Removing unreachable block (ram,0x006bfcf8) */
/* WARNING: Removing unreachable block (ram,0x006bfd00) */
/* WARNING: Removing unreachable block (ram,0x006bfd08) */
/* WARNING: Removing unreachable block (ram,0x006bfd1c) */
/* WARNING: Removing unreachable block (ram,0x006bfcc8) */
/* WARNING: Removing unreachable block (ram,0x006bfd34) */
/* WARNING: Removing unreachable block (ram,0x006bfd3c) */
/* WARNING: Removing unreachable block (ram,0x006bfd44) */
/* WARNING: Removing unreachable block (ram,0x006bfd58) */
/* WARNING: Removing unreachable block (ram,0x006bfd6c) */
/* WARNING: Removing unreachable block (ram,0x006bfd74) */
/* WARNING: Removing unreachable block (ram,0x006bfcd4) */
/* WARNING: Removing unreachable block (ram,0x006bfce4) */

void FUN_006bf9f0(int *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int *piVar9;
  int *local_38;
  int local_34;
  int *local_30;
  int local_2c;
  int *local_28;
  
  iVar8 = *param_1;
  if (iVar8 != 0) {
    DataMemoryBarrier(0xb);
    if (0x7fffffff < *(uint *)(iVar8 + 0x1c)) {
      puVar7 = (uint *)(iVar8 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar2);
      *puVar7 = *puVar7 & 0x7fffffff;
      DataMemoryBarrier(0xb);
    }
    while (piVar4 = (int *)FUN_00d3f614(iVar8 + 0x10), piVar4 != (int *)0x0) {
      piVar9 = piVar4 + 2;
      do {
        if (*piVar9 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(piVar9);
          if ((DAT_018dd988 & 0x7fffffff) == 0) goto LAB_006bfa94;
          goto LAB_006bfb3c;
        }
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = 1;
      DataMemoryBarrier(0xb);
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
LAB_006bfa94:
        uVar6 = 0;
        cVar1 = (char)piVar4[3];
      }
      else {
LAB_006bfb3c:
        uVar6 = FUN_015bf3f8();
        uVar6 = uVar6 ^ 1;
        cVar1 = (char)piVar4[3];
      }
      if (cVar1 != '\0') {
        uVar3 = (uint)local_34 >> 8;
        local_34 = CONCAT31((int3)uVar3,(char)uVar6);
        local_38 = piVar9;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_38,&DAT_01858988,&DAT_018a4b20);
      }
      iVar5 = piVar4[4];
      *(undefined1 *)(piVar4 + 6) = 0;
      piVar4[4] = 0;
      if (iVar5 != 0) {
        (**(code **)(iVar5 + 4))(piVar4[5]);
      }
      if (((uVar6 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
        *(undefined1 *)(piVar4 + 3) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = 0;
      if (iVar5 == 2) {
        FUN_016d6968(0xf0,piVar9,0x81,1);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b4e7c(piVar4);
      }
    }
    if (*param_1 != 0) {
LAB_006bfb9c:
      FUN_006bfe48(&local_38,param_1);
      if (local_38 == (int *)0x2) {
        if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018a4cc8);
        }
        DataMemoryBarrier(0xb);
        if (*(int *)(*param_1 + 0x1c) != 0) goto code_r0x006bfbd0;
      }
      else if (((uint)local_38 & 1) != 0) goto LAB_006bfbf0;
    }
  }
  return;
code_r0x006bfbd0:
  FUN_016da3a8();
  if (local_38 != (int *)0x2 && local_38 != (int *)0x0) {
LAB_006bfbf0:
    piVar4 = local_28;
    if (local_34 == 0) {
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *local_30;
        bVar2 = (bool)hasExclusiveAccess(local_30);
      } while (!bVar2);
      *local_30 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(local_30,local_2c);
      }
    }
    else if (((uint)local_28 & 1) == 0) {
      piVar9 = local_28 + 4;
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        if (*local_28 != 0) {
          thunk_FUN_016d3fb4(local_28[1]);
        }
        thunk_FUN_016d3fb4(piVar4);
      }
    }
    else if (local_2c + ((uint)local_28 >> 5) != 0) {
      thunk_FUN_016d3fb4(local_34 - ((uint)local_28 >> 5));
    }
  }
  goto LAB_006bfb9c;
}

