// FUN_01706a10 @ 01706a10 size=468 calls_out=9 calls_in=1
// strings: 

void FUN_01706a10(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_28;
  undefined1 local_24;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (0x7fffffff < *(uint *)(iVar2 + 0x1c)) {
    puVar6 = (uint *)(iVar2 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar1);
    *puVar6 = *puVar6 & 0x7fffffff;
    DataMemoryBarrier(0xb);
  }
  while (piVar3 = (int *)FUN_01438344(iVar2 + 0x10), piVar3 != (int *)0x0) {
    FUN_01656cb0(&local_40,piVar3 + 2);
    iVar5 = local_3c;
    if (local_40 == 1) {
      local_24 = (undefined1)local_38;
      local_28 = local_3c;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01d19010,&DAT_01d2decc);
    }
    uVar7 = local_38 & 0xff;
    iVar4 = *(int *)(local_3c + 8);
    *(undefined1 *)(local_3c + 0x10) = 0;
    *(undefined4 *)(local_3c + 8) = 0;
    if (iVar4 != 0) {
      (**(code **)(iVar4 + 4))(*(undefined4 *)(local_3c + 0xc));
    }
    FUN_00a97e8c(iVar5,uVar7);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014210d0(piVar3);
    }
  }
LAB_01706af8:
  FUN_01700b8c(&local_40,param_1);
  if ((local_40 & 1) != 0) goto code_r0x01706b10;
  if (local_38 == 0) {
    return;
  }
  goto LAB_01706b5c;
code_r0x01706b10:
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2defc);
  }
  DataMemoryBarrier(0xb);
  if (*(int *)(*param_1 + 0x1c) == 0) {
    if (local_40 != 0 || local_3c != 0) {
      return;
    }
    if (local_38 != 0) {
      local_3c = local_34;
    }
    if (local_38 != 0 && local_3c != 0) {
      thunk_FUN_01be4678();
      return;
    }
    return;
  }
  FUN_01bea67c();
  if ((local_40 == 0 && local_3c == 0) && (local_38 != 0)) {
LAB_01706b5c:
    if (local_34 != 0) {
      thunk_FUN_01be4678();
    }
  }
  goto LAB_01706af8;
}

