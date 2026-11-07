// FUN_0146aa28 @ 0146aa28 size=464 calls_out=5 calls_in=1
// strings: 

void FUN_0146aa28(undefined1 *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  byte local_34;
  undefined1 local_33;
  undefined4 local_30;
  int *local_2c;
  int local_28;
  int local_24;
  
  iVar7 = *param_2;
  piVar5 = (int *)(iVar7 + 8);
  do {
    if (*piVar5 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar5);
      goto LAB_0146aa5c;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = 1;
  DataMemoryBarrier(0xb);
LAB_0146aa5c:
  uVar6 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(iVar7 + 0xc);
  }
  else {
    uVar6 = FUN_015bf3f8(DAT_018dd988,param_2,param_3);
    uVar6 = uVar6 ^ 1;
    cVar1 = *(char *)(iVar7 + 0xc);
  }
  if (cVar1 != '\0') {
    uVar3 = (uint)local_28 >> 8;
    local_28 = CONCAT31((int3)uVar3,(char)uVar6);
    local_2c = piVar5;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_018a5c2c,&DAT_018a592c);
  }
  local_28 = param_2[1];
  local_2c = (int *)(iVar7 + 0x160);
  local_24 = param_2[2];
  FUN_0102d9a4(&local_34,*(undefined4 *)(iVar7 + 0x14c),param_3,&local_2c);
  if (((uVar6 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar4 = FUN_015bf3f8(), iVar4 == 0))
  {
    *(undefined1 *)(iVar7 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = 0;
  if (iVar7 == 2) {
    FUN_016d6968(0xf0,piVar5,0x81,1);
  }
  if (local_34 == 2) {
    *param_1 = 6;
    return;
  }
  if (local_34 == 3) {
    *param_1 = 7;
    return;
  }
  if ((local_34 & 1) == 0) {
    *(undefined4 *)(param_1 + 4) = local_30;
    *param_1 = 5;
    return;
  }
  param_1[1] = local_33;
  *param_1 = 3;
  return;
}

