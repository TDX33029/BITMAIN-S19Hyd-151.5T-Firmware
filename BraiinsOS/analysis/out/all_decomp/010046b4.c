// FUN_010046b4 @ 010046b4 size=832 calls_out=8 calls_in=2
// strings: 

void FUN_010046b4(undefined4 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int extraout_r1;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_310 [748];
  undefined4 uStack_24;
  
  if (param_4 == 0) {
    piVar6 = param_2 + 0xbe;
    if (*piVar6 == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar6);
        if (bVar1) {
          *piVar6 = 1;
          DataMemoryBarrier(0xb);
          (**(code **)(param_2[0xbd] + 0x14))(auStack_310,param_2[0xbc]);
          if (*param_2 != 2) {
            FUN_00ff029c(param_2);
          }
          FUN_016dd1aa(param_2,auStack_310,0x2f0);
          *(undefined1 *)(param_1 + 3) = 0;
          uVar2 = 1;
          goto LAB_010047f0;
        }
      } while (*piVar6 == 0);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  }
  if (param_2[0xc1] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb7c58(&DAT_0188af48);
  }
  FUN_0184606c(param_3);
  piVar6 = (int *)(param_2[0xc0] + extraout_r1 * 0x40);
  do {
    if (*piVar6 != 0) {
      ClearExclusiveLocal();
      goto LAB_010047b0;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = 1;
  DataMemoryBarrier(0xb);
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if ((char)piVar6[1] == '\0') {
      iVar4 = piVar6[4];
      uVar3 = 0;
      if (iVar4 != 0) {
LAB_01004814:
        iVar5 = piVar6[3];
        piVar6[4] = iVar4 + -1;
        *(undefined1 *)(param_1 + 3) = 0;
        uVar2 = *(undefined4 *)(iVar5 + (iVar4 + -1) * 4);
        *param_1 = 0;
        param_1[1] = uVar2;
        param_1[2] = param_2;
        if (((uVar3 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
          *(undefined1 *)(piVar6 + 1) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar6;
          bVar1 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar1);
        *piVar6 = 0;
        if (iVar4 == 2) {
          uStack_24 = auStack_310 + 0x304;
          software_interrupt(0);
          FUN_016d3496(piVar6,0x81,1,param_5);
          return;
        }
        return;
      }
LAB_01004930:
      if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
        *(undefined1 *)(piVar6 + 1) = 1;
      }
LAB_01004940:
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar6;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = 0;
      if (iVar4 == 2) {
        FUN_016d6968(0xf0,piVar6,0x81,1);
      }
      (**(code **)(param_2[0xbd] + 0x14))(auStack_310,param_2[0xbc]);
      param_3 = thunk_FUN_016d4a50(0x2f0);
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x2f0);
      }
      FUN_016dd1aa(param_3,auStack_310,0x2f0);
      uVar2 = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      goto LAB_010047f0;
    }
LAB_01004764:
    if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
      *(undefined1 *)(piVar6 + 1) = 1;
    }
  }
  else {
    uVar3 = FUN_015bf3f8();
    if ((char)piVar6[1] == '\0') {
      iVar4 = piVar6[4];
      if (iVar4 != 0) {
        uVar3 = uVar3 ^ 1;
        goto LAB_01004814;
      }
      if (uVar3 != 0) goto LAB_01004930;
      goto LAB_01004940;
    }
    if (uVar3 != 0) goto LAB_01004764;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = 0;
  if (iVar4 == 2) {
    FUN_016d6968(0xf0,piVar6,0x81,1);
  }
LAB_010047b0:
  (**(code **)(param_2[0xbd] + 0x14))(auStack_310,param_2[0xbc]);
  param_3 = thunk_FUN_016d4a50(0x2f0);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x2f0);
  }
  FUN_016dd1aa(param_3,auStack_310,0x2f0);
  *(undefined1 *)(param_1 + 3) = 1;
  uVar2 = 0;
LAB_010047f0:
  *param_1 = uVar2;
  param_1[1] = param_3;
  param_1[2] = param_2;
  return;
}

