// FUN_0109eff0 @ 0109eff0 size=468 calls_out=2 calls_in=1
// strings: assertion failed: self.0 <= isize::MAX as usize

bool FUN_0109eff0(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  
  iVar9 = param_1[1];
  if (iVar9 == 0) goto LAB_0109f198;
  iVar3 = *(int *)(iVar9 + 4);
  param_1[1] = iVar3;
  if (iVar3 == 0) {
    *param_1 = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 8) = 0;
  }
  puVar8 = *(uint **)(iVar9 + 0xc);
  *(undefined4 *)(iVar9 + 4) = 0;
  piVar7 = (int *)(iVar9 + -8);
  *(undefined4 *)(iVar9 + 8) = 0;
  uVar4 = *puVar8;
  DataMemoryBarrier(0xb);
  while ((uVar4 & 0x22) == 0) {
    if ((uVar4 & 1) == 0) {
      if ((uVar4 & 4) != 0) {
        uVar6 = uVar4 | 0x20;
        goto LAB_0109f0bc;
      }
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: self.0 <= isize::MAX as usize",0x2f,&DAT_018ad2dc);
      }
      uVar6 = uVar4 + 100;
      bVar5 = true;
    }
    else {
      uVar6 = uVar4 | 0x24;
LAB_0109f0bc:
      bVar5 = false;
    }
    uVar2 = *puVar8;
    if (*puVar8 == uVar4) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar8);
        if (bVar1) {
          *puVar8 = uVar6;
          DataMemoryBarrier(0xb);
          goto LAB_0109f11c;
        }
        uVar2 = *puVar8;
      } while (*puVar8 == uVar4);
    }
    uVar4 = uVar2;
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  }
  bVar5 = false;
LAB_0109f11c:
  if (bVar5) {
    (**(code **)(puVar8[2] + 4))(puVar8);
  }
  if (*puVar8 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar5 = (bool)hasExclusiveAccess(puVar8);
    if (!bVar5) goto LAB_0109f15c;
    *puVar8 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_0109f15c:
    (**(code **)(puVar8[2] + 0x10))(puVar8);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar7;
    bVar5 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar5);
  *piVar7 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0105b210(piVar7);
  }
LAB_0109f198:
  return iVar9 != 0;
}

