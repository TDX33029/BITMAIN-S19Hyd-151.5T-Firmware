// FUN_0076ed50 @ 0076ed50 size=416 calls_out=9 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x0076ee9c) */

void FUN_0076ed50(int *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int local_54;
  int local_50;
  undefined1 local_4c;
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
    FUN_01656cb0(&local_54,piVar4 + 2);
    uVar2 = local_4c;
    iVar6 = local_50;
    if (local_54 == 1) {
      local_24 = local_4c;
      local_28 = local_50;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01c087e0,&DAT_01d2decc);
    }
    iVar5 = *(int *)(local_50 + 8);
    *(undefined1 *)(local_50 + 0x10) = 0;
    *(undefined4 *)(local_50 + 8) = 0;
    if (iVar5 != 0) {
      (**(code **)(iVar5 + 4))(*(undefined4 *)(local_50 + 0xc));
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
LAB_0076ee38:
  FUN_0076e208(&local_54,param_1);
  if (local_54 == -0x7fffffff) goto LAB_0076ee5c;
  if (local_54 == -0x80000000) {
    return;
  }
  goto LAB_0076ee88;
LAB_0076ee5c:
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2defc);
  }
  DataMemoryBarrier(0xb);
  if (*(int *)(*param_1 + 0x1c) == 0) {
    return;
  }
  FUN_01bea67c();
  if (-0x7fffffff < local_54) {
LAB_0076ee88:
    FUN_019bb7e0(local_54,local_50);
  }
  goto LAB_0076ee38;
}

