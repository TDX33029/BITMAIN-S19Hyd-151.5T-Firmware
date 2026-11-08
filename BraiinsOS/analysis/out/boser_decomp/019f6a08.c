// FUN_019f6a08 @ 019f6a08 size=424 calls_out=4 calls_in=2
// strings: called after complete

byte FUN_019f6a08(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint *puVar6;
  int *piVar7;
  uint unaff_r8;
  bool bVar8;
  undefined8 uVar9;
  
  piVar7 = (int *)*param_1;
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("called after complete",0x2b,&DAT_01d29940);
  }
  uVar1 = FUN_019ec670(param_2);
  if ((uVar1 & 0xff) == 2) {
    uVar1 = 0;
  }
  else {
    if ((uVar1 & 1) != 0) {
      return 2;
    }
    unaff_r8 = (uVar1 & 0xffffff) >> 0x10;
    uVar1 = (uVar1 & 0xffffff) >> 8;
  }
  uVar2 = piVar7[6];
  DataMemoryBarrier(0xb);
  if ((uVar2 & 2) == 0) {
    bVar5 = 1;
    if ((uVar2 & 4) != 0) goto LAB_019f6b50;
    puVar6 = (uint *)(piVar7 + 6);
    if ((uVar2 & 1) != 0) {
      iVar3 = param_2[1];
      iVar4 = piVar7[5];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        iVar3 = *param_2;
        iVar4 = piVar7[4];
      }
      if (bVar8 && iVar4 == iVar3) goto LAB_019f6b0c;
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *puVar6;
        bVar8 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar8);
      *puVar6 = uVar2 & 0xfffffffe;
      DataMemoryBarrier(0xb);
      if ((uVar2 & 2) != 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar8 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar8);
        *puVar6 = *puVar6 | 1;
        DataMemoryBarrier(0xb);
        goto LAB_019f6b3c;
      }
      (**(code **)(piVar7[4] + 0xc))(piVar7[5]);
    }
    uVar9 = (**(code **)*param_2)(param_2[1]);
    *(undefined8 *)(piVar7 + 4) = uVar9;
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar6;
      bVar8 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar8);
    *puVar6 = uVar2 | 1;
    DataMemoryBarrier(0xb);
    if ((uVar2 & 2) == 0) {
LAB_019f6b0c:
      FUN_019edbc4(uVar1,unaff_r8);
      return 2;
    }
  }
LAB_019f6b3c:
  bVar5 = *(byte *)(piVar7 + 7);
  *(undefined1 *)(piVar7 + 7) = 0;
  bVar5 = ~bVar5 & 1;
LAB_019f6b50:
  FUN_019edbc4(0,unaff_r8);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar7;
    bVar8 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar8);
  *piVar7 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019da43c(*param_1);
  }
  *param_1 = 0;
  return bVar5;
}

