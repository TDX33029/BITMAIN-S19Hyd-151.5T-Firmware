// FUN_01422764 @ 01422764 size=428 calls_out=9 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x014228bc) */

void FUN_01422764(int *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint local_3c;
  int local_38;
  undefined1 local_34;
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
    FUN_01656cb0(&local_3c,piVar4 + 2);
    uVar2 = local_34;
    iVar6 = local_38;
    if (local_3c == 1) {
      local_24 = local_34;
      local_28 = local_38;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01cf478c,&DAT_01d2decc);
    }
    iVar5 = *(int *)(local_38 + 8);
    *(undefined1 *)(local_38 + 0x10) = 0;
    *(undefined4 *)(local_38 + 8) = 0;
    if (iVar5 != 0) {
      (**(code **)(iVar5 + 4))(*(undefined4 *)(local_38 + 0xc));
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
LAB_01422850:
  FUN_0142234c(&local_3c,param_1);
  if (local_3c == 2) goto code_r0x01422868;
  if ((local_3c & 1) == 0) {
    return;
  }
  goto LAB_014228a0;
code_r0x01422868:
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2defc);
  }
  DataMemoryBarrier(0xb);
  if (*(int *)(*param_1 + 0x1c) == 0) {
    return;
  }
  FUN_01bea67c();
  if ((local_3c & 0xfffffffd) != 0) {
LAB_014228a0:
    FUN_014222b0(&local_38);
  }
  goto LAB_01422850;
}

