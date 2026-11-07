// FUN_00e4b41c @ 00e4b41c size=632 calls_out=5 calls_in=1
// strings: 

void FUN_00e4b41c(int *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *local_20;
  int local_1c;
  
  do {
    if (*param_2 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_2);
      goto LAB_00e4b44c;
    }
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = 1;
  DataMemoryBarrier(0xb);
LAB_00e4b44c:
  uVar8 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)param_2[1];
  }
  else {
    uVar8 = FUN_015bf3f8();
    uVar8 = uVar8 ^ 1;
    cVar1 = (char)param_2[1];
  }
  if (cVar1 != '\0') {
    uVar7 = (uint)local_1c >> 8;
    local_1c = CONCAT31((int3)uVar7,(char)uVar8);
    local_20 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_20,&DAT_0187a7c0,&DAT_01886a4c);
  }
  FUN_00e480e8(param_2 + 2,1);
  if (param_2[5] != 0) {
    param_2[5] = param_2[5] + -1;
    uVar5 = param_2[4] + 1;
    piVar4 = (int *)(param_2[3] + param_2[4] * 0xc);
    iVar9 = *piVar4;
    uVar7 = uVar5 - param_2[2];
    if (uVar5 < (uint)param_2[2]) {
      uVar7 = uVar5;
    }
    param_2[4] = uVar7;
    if (iVar9 != -0x80000000) {
      local_20 = (int *)piVar4[1];
      local_1c = piVar4[2];
      if (((uVar8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
        *(undefined1 *)(param_2 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *param_2;
        bVar2 = (bool)hasExclusiveAccess(param_2);
      } while (!bVar2);
      *param_2 = 0;
      if (iVar6 == 2) {
        FUN_016d6968(0xf0,param_2,0x81,1);
      }
      *param_1 = iVar9;
      param_1[1] = (int)local_20;
      param_1[2] = local_1c;
      return;
    }
  }
  DataMemoryBarrier(0xb);
  if ((char)param_2[0x11] == '\0') {
    if (((uVar8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar9 = FUN_015bf3f8(), iVar9 == 0)
       ) {
      *(undefined1 *)(param_2 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *param_2;
      bVar2 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar2);
    *param_2 = 0;
    if (iVar9 == 2) {
      FUN_016d6968(0xf0,param_2,0x81,1);
    }
    uVar3 = 0;
  }
  else {
    if (((uVar8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar9 = FUN_015bf3f8(), iVar9 == 0)
       ) {
      *(undefined1 *)(param_2 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *param_2;
      bVar2 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar2);
    *param_2 = 0;
    if (iVar9 == 2) {
      FUN_016d6968(0xf0,param_2,0x81,1);
    }
    uVar3 = 2;
  }
  *(undefined1 *)(param_1 + 1) = uVar3;
  *param_1 = -0x80000000;
  return;
}

