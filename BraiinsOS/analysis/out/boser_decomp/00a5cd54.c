// FUN_00a5cd54 @ 00a5cd54 size=332 calls_out=7 calls_in=4
// strings: BUG: BoserContext lock poisoned

void FUN_00a5cd54(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int local_28;
  uint *local_24;
  int local_20;
  undefined4 local_1c;
  
  iVar4 = *(int *)(param_2 + 8);
  puVar5 = (uint *)(iVar4 + 8);
  uVar3 = *(uint *)(iVar4 + 8);
  if (uVar3 < 0x3ffffffe) {
    if (*puVar5 == uVar3) {
      bVar2 = (bool)hasExclusiveAccess(puVar5);
      if (bVar2) {
        *puVar5 = uVar3 + 1;
        DataMemoryBarrier(0xb);
        goto LAB_00a5cd9c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  FUN_0197a5c8(puVar5);
LAB_00a5cd9c:
  if (*(char *)(iVar4 + 0x10) != '\0') {
    local_28 = iVar4 + 0x14;
    local_24 = puVar5;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("BUG: BoserContext lock poisoned",0x1f,&local_28,&DAT_01c0e990,&DAT_01c0eee0);
  }
  bVar1 = *(byte *)(iVar4 + 0x20);
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *puVar5;
    bVar2 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar2);
  *puVar5 = uVar3 - 1;
  if ((uVar3 - 1 & 0xbfffffff) == 0x80000000) {
    FUN_019a33c4(puVar5);
  }
  if (bVar1 == 2 || (bVar1 & 1) != 0) {
    iVar4 = FUN_01298504(param_4,1);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_4);
    }
    FUN_01bed4e2(iVar4,param_3,param_4);
    local_28 = 6;
    local_24 = (uint *)param_4;
    local_20 = iVar4;
    local_1c = param_4;
    FUN_014a5cd0(param_1,&local_28);
  }
  else {
    *param_1 = 2;
  }
  return;
}

