// FUN_01004344 @ 01004344 size=840 calls_out=8 calls_in=0
// strings: 

void FUN_01004344(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int extraout_r1;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_d8 [180];
  undefined1 *puStack_24;
  undefined1 auStack_20 [8];
  
  if (param_4 == 0) {
    piVar2 = (int *)(param_2 + 200);
    if (*piVar2 == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar2);
        if (bVar1) {
          *piVar2 = 1;
          DataMemoryBarrier(0xb);
          (**(code **)(*(int *)(param_2 + 0xc4) + 0x14))(auStack_d8,*(undefined4 *)(param_2 + 0xc0))
          ;
          if (*(int *)(param_2 + 0xb0) != 2) {
            FUN_00ff188c(param_2);
          }
          FUN_016dd1aa(param_2,auStack_d8,0xc0);
          *(undefined1 *)(param_1 + 3) = 0;
          *param_1 = 1;
          param_1[1] = param_3;
          goto LAB_0100448c;
        }
      } while (*piVar2 == 0);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  }
  if (*(int *)(param_2 + 0xd4) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb7c58(&DAT_0188af48);
  }
  FUN_0184606c(param_3);
  piVar2 = (int *)(*(int *)(param_2 + 0xd0) + extraout_r1 * 0x40);
  do {
    if (*piVar2 != 0) {
      ClearExclusiveLocal();
      goto LAB_01004440;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = 1;
  DataMemoryBarrier(0xb);
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if ((char)piVar2[1] != '\0') {
LAB_010043f4:
      if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
        *(undefined1 *)(piVar2 + 1) = 1;
      }
LAB_01004404:
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = 0;
      if (iVar4 == 2) {
        FUN_016d6968(0xf0,piVar2,0x81,1);
      }
LAB_01004440:
      (**(code **)(*(int *)(param_2 + 0xc4) + 0x14))(auStack_d8,*(undefined4 *)(param_2 + 0xc0));
      iVar4 = thunk_FUN_016d4a50(0xc0);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0xc0);
      }
      FUN_016dd1aa(iVar4,auStack_d8,0xc0);
      *(undefined1 *)(param_1 + 3) = 1;
      goto LAB_01004484;
    }
    iVar4 = piVar2[4];
    uVar3 = 0;
    if (iVar4 != 0) {
LAB_010044a8:
      iVar6 = piVar2[3];
      piVar2[4] = iVar4 + -1;
      *(undefined1 *)(param_1 + 3) = 0;
      uVar5 = *(undefined4 *)(iVar6 + (iVar4 + -1) * 4);
      *param_1 = 0;
      param_1[1] = uVar5;
      param_1[2] = param_2;
      if (((uVar3 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
        *(undefined1 *)(piVar2 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = 0;
      if (iVar4 == 2) {
        puStack_24 = auStack_20 + 0x14;
        software_interrupt(0);
        FUN_016d3496(piVar2,0x81,1,param_5);
        return;
      }
      return;
    }
LAB_010045c4:
    if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
      *(undefined1 *)(piVar2 + 1) = 1;
    }
  }
  else {
    uVar3 = FUN_015bf3f8();
    if ((char)piVar2[1] != '\0') {
      if (uVar3 != 0) goto LAB_010043f4;
      goto LAB_01004404;
    }
    iVar4 = piVar2[4];
    if (iVar4 != 0) {
      uVar3 = uVar3 ^ 1;
      goto LAB_010044a8;
    }
    if (uVar3 != 0) goto LAB_010045c4;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = 0;
  if (iVar4 == 2) {
    FUN_016d6968(0xf0,piVar2,0x81,1);
  }
  (**(code **)(*(int *)(param_2 + 0xc4) + 0x14))(auStack_d8,*(undefined4 *)(param_2 + 0xc0));
  iVar4 = thunk_FUN_016d4a50(0xc0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xc0);
  }
  FUN_016dd1aa(iVar4,auStack_d8,0xc0);
  *(undefined1 *)(param_1 + 3) = 0;
LAB_01004484:
  *param_1 = 0;
  param_1[1] = iVar4;
LAB_0100448c:
  param_1[2] = param_2;
  return;
}

