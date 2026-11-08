// FUN_00a8f8ec @ 00a8f8ec size=652 calls_out=5 calls_in=1
// strings: 

void FUN_00a8f8ec(int *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *local_28;
  int local_24;
  int iStack_20;
  int local_1c;
  
  do {
    if (*param_2 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_2);
      goto LAB_00a8f91c;
    }
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = 1;
  DataMemoryBarrier(0xb);
LAB_00a8f91c:
  uVar7 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)param_2[1];
  }
  else {
    uVar7 = FUN_015bf3f8();
    uVar7 = uVar7 ^ 1;
    cVar1 = (char)param_2[1];
  }
  if (cVar1 != '\0') {
    uVar6 = (uint)local_24 >> 8;
    local_24 = CONCAT31((int3)uVar6,(char)uVar7);
    local_28 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_0186dc58,&DAT_01886a4c);
  }
  FUN_00a8dea4(param_2 + 2,1);
  if (param_2[5] != 0) {
    param_2[5] = param_2[5] + -1;
    uVar4 = param_2[4] + 1;
    piVar3 = (int *)(param_2[3] + param_2[4] * 0x14);
    iVar8 = *piVar3;
    uVar6 = uVar4 - param_2[2];
    if (uVar4 < (uint)param_2[2]) {
      uVar6 = uVar4;
    }
    param_2[4] = uVar6;
    if (iVar8 != 0) {
      local_28 = (int *)piVar3[1];
      local_24 = piVar3[2];
      iStack_20 = piVar3[3];
      local_1c = piVar3[4];
      if (((uVar7 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
        *(undefined1 *)(param_2 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *param_2;
        bVar2 = (bool)hasExclusiveAccess(param_2);
      } while (!bVar2);
      *param_2 = 0;
      if (iVar5 == 2) {
        FUN_016d6968(0xf0,param_2,0x81,1);
      }
      *param_1 = iVar8;
      param_1[1] = (int)local_28;
      param_1[2] = local_24;
      param_1[3] = iStack_20;
      param_1[4] = local_1c;
      return;
    }
  }
  DataMemoryBarrier(0xb);
  if ((char)param_2[0x11] == '\0') {
    if (((uVar7 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar8 = FUN_015bf3f8(), iVar8 == 0)
       ) {
      *(undefined1 *)(param_2 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *param_2;
      bVar2 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar2);
    *param_2 = 0;
    if (iVar8 == 2) {
      FUN_016d6968(0xf0,param_2,0x81,1);
    }
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  if (((uVar7 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar8 = FUN_015bf3f8(), iVar8 == 0))
  {
    *(undefined1 *)(param_2 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *param_2;
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = 0;
  if (iVar8 == 2) {
    FUN_016d6968(0xf0,param_2,0x81,1);
  }
  *(undefined1 *)(param_1 + 1) = 2;
  *param_1 = 0;
  return;
}

