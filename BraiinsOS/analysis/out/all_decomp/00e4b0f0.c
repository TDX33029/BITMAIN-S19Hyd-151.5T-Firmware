// FUN_00e4b0f0 @ 00e4b0f0 size=672 calls_out=6 calls_in=1
// strings: 

void FUN_00e4b0f0(int *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *local_e8;
  undefined1 local_e4;
  
  do {
    if (*param_2 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_2);
      goto LAB_00e4b120;
    }
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = 1;
  DataMemoryBarrier(0xb);
LAB_00e4b120:
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
    local_e4 = (undefined1)uVar7;
    local_e8 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_e8,&DAT_0187a7c0,&DAT_01886a4c);
  }
  FUN_00e48800(param_2 + 2,1);
  if (param_2[5] != 0) {
    param_2[5] = param_2[5] + -1;
    uVar4 = param_2[4] + 1;
    uVar6 = uVar4 - param_2[2];
    if (uVar4 < (uint)param_2[2]) {
      uVar6 = uVar4;
    }
    piVar3 = (int *)(param_2[3] + param_2[4] * 0xd0);
    iVar8 = *piVar3;
    iVar9 = piVar3[1];
    param_2[4] = uVar6;
    if (iVar8 != 8 || iVar9 != 0) {
      FUN_016dd1aa(&local_e8,piVar3 + 2,200);
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
      param_1[1] = iVar9;
      FUN_016dd1aa(param_1 + 2,&local_e8,200);
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
    *param_1 = 8;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
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
  *param_1 = 8;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 2;
  return;
}

