// FUN_006ada28 @ 006ada28 size=808 calls_out=12 calls_in=2
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

void FUN_006ada28(undefined4 *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *local_1a8 [49];
  int *local_e4;
  undefined1 local_e0 [192];
  
  iVar3 = *param_2;
  if (iVar3 == 0) {
    *param_1 = 0x80000000;
    return;
  }
  while( true ) {
    piVar6 = *(int **)(iVar3 + 0xc);
    piVar5 = (int *)piVar6[0x31];
    DataMemoryBarrier(0xb);
    if (piVar5 != (int *)0x0) break;
    DataMemoryBarrier(0xb);
    if (*(int **)(iVar3 + 8) == piVar6) {
      DataMemoryBarrier(0xb);
      if (*(int *)(*param_2 + 0x1c) != 0) {
        *param_1 = 0x80000001;
        return;
      }
      piVar5 = (int *)*param_2;
      if (piVar5 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0105aee4(*param_2);
        }
      }
      *param_1 = 0x80000000;
      *param_2 = 0;
      return;
    }
    FUN_016da3a8();
  }
  *(int **)(iVar3 + 0xc) = piVar5;
  if (*piVar6 != -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: (*tail).value.is_none()",0x29,&DAT_018a4e90);
  }
  piVar4 = (int *)*piVar5;
  if (piVar4 == (int *)0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: (*next).value.is_some()",0x29,&DAT_018a4ea0);
  }
  FUN_016dd1aa(local_e0,piVar5 + 1,0xc0);
  *piVar5 = -0x80000000;
  local_e4 = piVar4;
  if (*piVar6 != -0x80000000) {
    FUN_006ade10(piVar6);
  }
  thunk_FUN_016d3fb4(piVar6);
  FUN_016dd1aa((uint)local_1a8 | 4,local_e0,0xc0);
  iVar3 = *param_2;
  local_1a8[0] = piVar4;
  if (iVar3 != 0) {
    piVar5 = (int *)FUN_00d3f614(iVar3 + 0x10);
    if (piVar5 != (int *)0x0) {
      piVar6 = piVar5 + 2;
      do {
        if (*piVar6 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(piVar6);
          goto LAB_006adb28;
        }
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = 1;
      DataMemoryBarrier(0xb);
LAB_006adb28:
      uVar7 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar1 = (char)piVar5[3];
      }
      else {
        uVar7 = FUN_015bf3f8();
        uVar7 = uVar7 ^ 1;
        cVar1 = (char)piVar5[3];
      }
      if (cVar1 != '\0') {
        local_e0[0] = (undefined1)uVar7;
        local_e4 = piVar6;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_e4,&DAT_01858988,&DAT_018a4b10);
      }
      iVar3 = piVar5[4];
      *(undefined1 *)(piVar5 + 6) = 0;
      piVar5[4] = 0;
      if (iVar3 != 0) {
        (**(code **)(iVar3 + 4))(piVar5[5]);
      }
      if (((uVar7 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
        *(undefined1 *)(piVar5 + 3) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = 0;
      if (iVar3 == 2) {
        FUN_016d6968(0xf0,piVar6,0x81,1);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b4e7c(piVar5);
      }
      iVar3 = *param_2;
      if (iVar3 == 0) goto LAB_006adc04;
    }
    piVar5 = (int *)(iVar3 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = *piVar5 + -1;
    DataMemoryBarrier(0xb);
  }
LAB_006adc04:
  FUN_016dd1aa(param_1,local_1a8,0xc4);
  return;
}

