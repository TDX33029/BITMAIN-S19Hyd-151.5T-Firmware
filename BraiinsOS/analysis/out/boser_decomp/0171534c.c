// FUN_0171534c @ 0171534c size=592 calls_out=5 calls_in=1
// strings: called after complete

void FUN_0171534c(undefined4 *param_1,undefined4 *param_2,int *param_3)

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
  int local_120;
  int local_11c;
  undefined1 auStack_118 [80];
  undefined1 auStack_c8 [80];
  undefined1 auStack_78 [84];
  
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
    if ((uVar1 & 1) != 0) goto LAB_01715544;
    unaff_r5 = (uVar1 & 0xffffff) >> 0x10;
    uVar1 = (uVar1 & 0xffffff) >> 8;
  }
  uVar2 = piVar5[0x1c];
  piVar7 = piVar5 + 2;
  DataMemoryBarrier(0xb);
  if ((uVar2 & 2) == 0) {
    if ((uVar2 & 4) == 0) {
      puVar6 = (uint *)(piVar5 + 0x1c);
      if ((uVar2 & 1) == 0) {
LAB_017154f8:
        if ((uVar2 & 1) == 0) {
LAB_01715500:
          uVar9 = (**(code **)*param_3)(param_3[1]);
          *(undefined8 *)(piVar5 + 0x1a) = uVar9;
          DataMemoryBarrier(0xb);
          do {
            uVar2 = *puVar6;
            bVar8 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar8);
          *puVar6 = uVar2 | 1;
          DataMemoryBarrier(0xb);
          if ((uVar2 & 2) != 0) goto LAB_01715574;
        }
        FUN_019edbc4(uVar1,unaff_r5);
        goto LAB_01715544;
      }
      iVar3 = param_3[1];
      iVar4 = piVar5[0x1b];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        iVar3 = *param_3;
        iVar4 = piVar5[0x1a];
      }
      if (bVar8 && iVar4 == iVar3) goto LAB_017154f8;
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *puVar6;
        bVar8 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar8);
      *puVar6 = uVar2 & 0xfffffffe;
      DataMemoryBarrier(0xb);
      if ((uVar2 & 2) == 0) {
        (**(code **)(piVar5[0x1a] + 0xc))(piVar5[0x1b]);
        goto LAB_01715500;
      }
      DataMemoryBarrier(0xb);
      do {
        bVar8 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar8);
      *puVar6 = *puVar6 | 1;
      DataMemoryBarrier(0xb);
LAB_01715574:
      iVar4 = *piVar7;
      iVar3 = piVar5[3];
      goto LAB_01715424;
    }
    iVar3 = 0;
    iVar4 = 4;
  }
  else {
    iVar4 = *piVar7;
    iVar3 = piVar5[3];
LAB_01715424:
    *piVar7 = 4;
    piVar5[3] = 0;
    if (iVar4 != 4 || iVar3 != 0) {
      FUN_01bed4e2(auStack_78,piVar5 + 4,0x50);
      FUN_019edbc4(0,unaff_r5);
      if (iVar4 != 4 || iVar3 != 0) {
        if (iVar4 == 5 && iVar3 == 0) {
LAB_01715544:
          *param_1 = 5;
          param_1[1] = 0;
          return;
        }
        FUN_01bed4e2(auStack_c8,auStack_78,0x50);
      }
      goto LAB_01715494;
    }
  }
  FUN_019edbc4(0,unaff_r5);
LAB_01715494:
  local_120 = iVar4;
  local_11c = iVar3;
  FUN_01bed4e2(auStack_118,auStack_c8,0x50);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar5;
    bVar8 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar8);
  *piVar5 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01704d48(*param_2);
  }
  *param_2 = 0;
  FUN_01bed4e2(param_1,&local_120,0x58);
  return;
}

