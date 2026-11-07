// FUN_01265df8 @ 01265df8 size=812 calls_out=8 calls_in=2
// strings: 

void FUN_01265df8(undefined4 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int extraout_r1;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_310 [748];
  undefined4 uStack_24;
  
  if (param_4 == 0) {
    piVar7 = param_2 + 0xbe;
    if (*piVar7 == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(piVar7);
        if (bVar2) {
          *piVar7 = 1;
          DataMemoryBarrier(0xb);
          (**(code **)(param_2[0xbd] + 0x14))(auStack_310,param_2[0xbc]);
          if (*param_2 != 2) {
            FUN_012632b4(param_2);
          }
          FUN_016dd1aa(param_2,auStack_310,0x2f0);
          *(undefined1 *)(param_1 + 3) = 0;
          uVar4 = 1;
          goto LAB_01265f40;
        }
      } while (*piVar7 == 0);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  }
  if (param_2[0xc1] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb7c58(&DAT_0188af48);
  }
  FUN_0184606c(param_3);
  piVar7 = (int *)(param_2[0xc0] + extraout_r1 * 0x40);
  do {
    if (*piVar7 != 0) {
      ClearExclusiveLocal();
      goto LAB_01265f00;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = 1;
  DataMemoryBarrier(0xb);
  uVar3 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)piVar7[1];
  }
  else {
    uVar3 = FUN_015bf3f8();
    uVar3 = uVar3 ^ 1;
    cVar1 = (char)piVar7[1];
  }
  if (cVar1 == '\0') {
    if (piVar7[4] != 0) {
      iVar6 = piVar7[3];
      iVar5 = piVar7[4] + -1;
      piVar7[4] = iVar5;
      *(undefined1 *)(param_1 + 3) = 0;
      uVar4 = *(undefined4 *)(iVar6 + iVar5 * 4);
      *param_1 = 0;
      param_1[1] = uVar4;
      param_1[2] = param_2;
      if (((uVar3 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
        *(undefined1 *)(piVar7 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = 0;
      if (iVar5 == 2) {
        uStack_24 = auStack_310 + 0x304;
        software_interrupt(0);
        FUN_016d3496(piVar7,0x81,1,param_5);
        return;
      }
      return;
    }
    if (((uVar3 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar5 = FUN_015bf3f8(), iVar5 == 0)
       ) {
      *(undefined1 *)(piVar7 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = 0;
    if (iVar5 == 2) {
      FUN_016d6968(0xf0,piVar7,0x81,1);
    }
    (**(code **)(param_2[0xbd] + 0x14))(auStack_310,param_2[0xbc]);
    param_3 = thunk_FUN_016d4a50(0x2f0);
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x2f0);
    }
    FUN_016dd1aa(param_3,auStack_310,0x2f0);
    uVar4 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    if (((uVar3 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar5 = FUN_015bf3f8(), iVar5 == 0)
       ) {
      *(undefined1 *)(piVar7 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = 0;
    if (iVar5 == 2) {
      FUN_016d6968(0xf0,piVar7,0x81,1);
    }
LAB_01265f00:
    (**(code **)(param_2[0xbd] + 0x14))(auStack_310,param_2[0xbc]);
    param_3 = thunk_FUN_016d4a50(0x2f0);
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x2f0);
    }
    FUN_016dd1aa(param_3,auStack_310,0x2f0);
    *(undefined1 *)(param_1 + 3) = 1;
    uVar4 = 0;
  }
LAB_01265f40:
  *param_1 = uVar4;
  param_1[1] = param_3;
  param_1[2] = param_2;
  return;
}

