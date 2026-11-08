// FUN_01444464 @ 01444464 size=708 calls_out=5 calls_in=1
// strings: 

void FUN_01444464(int *param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int local_50;
  int iStack_4c;
  int iStack_48;
  undefined4 local_44;
  undefined1 local_3d;
  int *local_3c;
  int local_38;
  int local_34;
  undefined4 *local_30;
  undefined1 *local_2c;
  int local_28;
  
  iVar5 = *param_1;
  piVar4 = (int *)(iVar5 + 8);
  do {
    if (*piVar4 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar4);
      goto LAB_01444494;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = 1;
  DataMemoryBarrier(0xb);
LAB_01444494:
  uVar8 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(iVar5 + 0xc);
  }
  else {
    uVar8 = FUN_015bf3f8();
    uVar8 = uVar8 ^ 1;
    cVar1 = *(char *)(iVar5 + 0xc);
  }
  if (cVar1 != '\0') {
    local_38._1_3_ = (undefined3)((uint)local_38 >> 8);
    local_38 = CONCAT31(local_38._1_3_,(char)uVar8);
    local_3c = piVar4;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_3c,&DAT_018a4108,&DAT_018a590c);
  }
  iStack_4c = param_1[1];
  iStack_48 = param_1[2];
  iVar7 = param_1[3];
  local_50 = iVar5 + 0x160;
  piVar6 = (int *)(iVar7 + 8);
  do {
    if (*piVar6 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar6);
      goto LAB_014444f4;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = 1;
  DataMemoryBarrier(0xb);
LAB_014444f4:
  uVar9 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(iVar7 + 0xc);
  }
  else {
    uVar9 = FUN_015bf3f8(iVar5 + 0x10);
    uVar9 = uVar9 ^ 1;
    cVar1 = *(char *)(iVar7 + 0xc);
  }
  if (cVar1 != '\0') {
    local_38._1_3_ = (undefined3)((uint)local_38 >> 8);
    local_38 = CONCAT31(local_38._1_3_,(char)uVar9);
    local_3c = piVar6;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_3c,&DAT_018a40f8,&DAT_018a591c);
  }
  local_3d = 0;
  local_28 = iVar7 + 0x10;
  local_2c = &local_3d;
  local_30 = &local_44;
  local_34 = iVar5 + 0xe8;
  local_38 = iVar5 + 0xf0;
  local_3c = (int *)(iVar5 + 0x40);
  local_44 = param_2;
  FUN_01419dac(iVar5 + 0x10,&local_50,&local_3c);
  if (((uVar9 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar3 = FUN_015bf3f8(), iVar3 == 0))
  {
    *(undefined1 *)(iVar7 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = 0;
  if (iVar7 == 2) {
    FUN_016d6968(0xf0,piVar6,0x81,1);
  }
  if (((uVar8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar7 = FUN_015bf3f8(), iVar7 == 0))
  {
    *(undefined1 *)(iVar5 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = 0;
  if (iVar5 == 2) {
    FUN_016d6968(0xf0,piVar4,0x81,1);
    return;
  }
  return;
}

