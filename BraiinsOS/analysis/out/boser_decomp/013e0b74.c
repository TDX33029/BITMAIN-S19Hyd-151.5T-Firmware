// FUN_013e0b74 @ 013e0b74 size=424 calls_out=9 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x013e0cc8) */

void FUN_013e0b74(int *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int local_9c;
  int local_98;
  undefined1 local_94;
  int local_28;
  undefined1 local_24;
  
  iVar3 = *param_1;
  if (iVar3 == 0) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (0x7fffffff < *(uint *)(iVar3 + 0x1c)) {
    puVar7 = (uint *)(iVar3 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar1);
    *puVar7 = *puVar7 & 0x7fffffff;
    DataMemoryBarrier(0xb);
  }
  while (piVar4 = (int *)FUN_01438344(iVar3 + 0x10), piVar4 != (int *)0x0) {
    FUN_01656cb0(&local_9c,piVar4 + 2);
    uVar2 = local_94;
    iVar6 = local_98;
    if (local_9c == 1) {
      local_24 = local_94;
      local_28 = local_98;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01cf2f98,&DAT_01d2decc);
    }
    iVar5 = *(int *)(local_98 + 8);
    *(undefined1 *)(local_98 + 0x10) = 0;
    *(undefined4 *)(local_98 + 8) = 0;
    if (iVar5 != 0) {
      (**(code **)(iVar5 + 4))(*(undefined4 *)(local_98 + 0xc));
    }
    FUN_00a97e8c(iVar6,uVar2);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014210d0(piVar4);
    }
  }
  do {
    FUN_013e0d88(&local_9c,param_1);
    if (local_9c == -0x7ffffffe) {
      if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2defc);
      }
      DataMemoryBarrier(0xb);
      if (*(int *)(*param_1 + 0x1c) == 0) {
        return;
      }
      FUN_01bea67c();
    }
    else if (local_9c == -0x7fffffff) {
      return;
    }
    if (1 < local_9c + 0x7fffffffU) {
      FUN_013e1100(&local_9c);
    }
  } while( true );
}

