// FUN_017155f0 @ 017155f0 size=592 calls_out=5 calls_in=1
// strings: called after complete

void FUN_017155f0(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint unaff_r5;
  uint *puVar6;
  int *piVar7;
  bool bVar8;
  undefined8 uVar9;
  int local_1f8;
  int local_1f4;
  undefined1 auStack_1f0 [152];
  undefined1 auStack_158 [152];
  undefined1 auStack_c0 [156];
  
  piVar5 = (int *)*param_2;
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("called after complete",0x2b,&DAT_01d29940);
  }
  uVar1 = FUN_019ec670(param_3);
  if ((uVar1 & 0xff) == 2) {
    uVar1 = 0;
  }
  else {
    if ((uVar1 & 1) != 0) goto LAB_017157e8;
    unaff_r5 = (uVar1 & 0xffffff) >> 0x10;
    uVar1 = (uVar1 & 0xffffff) >> 8;
  }
  uVar2 = piVar5[0x2e];
  piVar7 = piVar5 + 2;
  DataMemoryBarrier(0xb);
  if ((uVar2 & 2) == 0) {
    if ((uVar2 & 4) == 0) {
      puVar6 = (uint *)(piVar5 + 0x2e);
      if ((uVar2 & 1) == 0) {
LAB_0171579c:
        if ((uVar2 & 1) == 0) {
LAB_017157a4:
          uVar9 = (**(code **)*param_3)(param_3[1]);
          *(undefined8 *)(piVar5 + 0x2c) = uVar9;
          DataMemoryBarrier(0xb);
          do {
            uVar2 = *puVar6;
            bVar8 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar8);
          *puVar6 = uVar2 | 1;
          DataMemoryBarrier(0xb);
          if ((uVar2 & 2) != 0) goto LAB_01715818;
        }
        FUN_019edbc4(uVar1,unaff_r5);
        goto LAB_017157e8;
      }
      iVar3 = param_3[1];
      iVar4 = piVar5[0x2d];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        iVar3 = *param_3;
        iVar4 = piVar5[0x2c];
      }
      if (bVar8 && iVar4 == iVar3) goto LAB_0171579c;
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *puVar6;
        bVar8 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar8);
      *puVar6 = uVar2 & 0xfffffffe;
      DataMemoryBarrier(0xb);
      if ((uVar2 & 2) == 0) {
        (**(code **)(piVar5[0x2c] + 0xc))(piVar5[0x2d]);
        goto LAB_017157a4;
      }
      DataMemoryBarrier(0xb);
      do {
        bVar8 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar8);
      *puVar6 = *puVar6 | 1;
      DataMemoryBarrier(0xb);
LAB_01715818:
      iVar4 = *piVar7;
      iVar3 = piVar5[3];
      goto LAB_017156c8;
    }
    iVar3 = 0;
    iVar4 = 5;
  }
  else {
    iVar4 = *piVar7;
    iVar3 = piVar5[3];
LAB_017156c8:
    *piVar7 = 5;
    piVar5[3] = 0;
    if (iVar4 != 5 || iVar3 != 0) {
      FUN_01bed4e2(auStack_c0,piVar5 + 4,0x98);
      FUN_019edbc4(0,unaff_r5);
      if (iVar4 != 5 || iVar3 != 0) {
        if (iVar4 == 6 && iVar3 == 0) {
LAB_017157e8:
          *param_1 = 6;
          param_1[1] = 0;
          return;
        }
        FUN_01bed4e2(auStack_158,auStack_c0,0x98);
      }
      goto LAB_01715738;
    }
  }
  FUN_019edbc4(0,unaff_r5);
LAB_01715738:
  local_1f8 = iVar4;
  local_1f4 = iVar3;
  FUN_01bed4e2(auStack_1f0,auStack_158,0x98);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar5;
    bVar8 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar8);
  *piVar5 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_017053e0(*param_2);
  }
  *param_2 = 0;
  FUN_01bed4e2(param_1,&local_1f8,0xa0);
  return;
}

