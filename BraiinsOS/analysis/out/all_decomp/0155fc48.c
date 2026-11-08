// FUN_0155fc48 @ 0155fc48 size=372 calls_out=7 calls_in=0
// strings: 

void FUN_0155fc48(int param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  uint local_24;
  int *local_20;
  undefined1 local_1c;
  
  do {
    if (*param_2 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_2);
      goto LAB_0155fc78;
    }
    bVar1 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar1);
  *param_2 = 1;
  DataMemoryBarrier(0xb);
LAB_0155fc78:
  uVar6 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    uVar6 = FUN_015bf3f8();
    uVar6 = uVar6 ^ 1;
  }
  local_24 = (uint)*(byte *)(param_2 + 1);
  local_1c = (undefined1)uVar6;
  local_20 = param_2;
  if (local_24 != 0) {
    local_24 = 1;
    FUN_0155f3e8(&local_24);
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a8e7c);
  }
  uVar7 = FUN_01533a98(param_2 + 6,param_3);
  uVar4 = (uint)((ulonglong)uVar7 >> 0x20);
  puVar2 = (uint *)uVar7;
  if (puVar2 != (uint *)0x0) {
    uVar4 = puVar2[3];
  }
  if (puVar2 != (uint *)0x0 && uVar4 != 0) {
    puVar2[3] = uVar4 - 1;
    uVar3 = puVar2[2] + (uVar4 - 1);
    uVar4 = uVar3 - *puVar2;
    if (uVar3 < *puVar2) {
      uVar4 = uVar3;
    }
    FUN_016dd1aa(param_1,puVar2[1] + uVar4 * 0x48,0x48);
  }
  else {
    *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  }
  if (((uVar6 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar5 = FUN_015bf3f8(), iVar5 == 0))
  {
    *(undefined1 *)(param_2 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *param_2;
    bVar1 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar1);
  *param_2 = 0;
  if (iVar5 == 2) {
    FUN_016d6968(0xf0,param_2,0x81,1);
    return;
  }
  return;
}

