// FUN_017cde14 @ 017cde14 size=636 calls_out=5 calls_in=0
// strings: called after complete

void FUN_017cde14(int param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint extraout_r2;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  int unaff_r8;
  bool bVar8;
  undefined8 uVar9;
  uint local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  undefined1 auStack_1d8 [144];
  undefined1 auStack_148 [144];
  undefined1 auStack_b8 [148];
  
  piVar6 = (int *)*param_2;
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("called after complete",0x2b,&DAT_01d29940);
  }
  uVar1 = FUN_019ec670(param_3);
  if ((uVar1 & 0xff) == 2) {
    uVar1 = 0;
    uVar4 = extraout_r2;
  }
  else {
    if ((uVar1 & 1) != 0) goto LAB_017ce028;
    uVar4 = (uVar1 & 0xffffff) >> 0x10;
    uVar1 = (uVar1 & 0xffffff) >> 8;
  }
  uVar2 = piVar6[0x2e];
  DataMemoryBarrier(0xb);
  if ((uVar2 & 2) == 0) {
    if ((uVar2 & 4) == 0) {
      puVar7 = (uint *)(piVar6 + 0x2e);
      if ((uVar2 & 1) == 0) {
LAB_017cdfdc:
        if ((uVar2 & 1) == 0) {
LAB_017cdfe4:
          uVar9 = (**(code **)*param_3)(param_3[1]);
          *(undefined8 *)(piVar6 + 0x2c) = uVar9;
          DataMemoryBarrier(0xb);
          do {
            uVar2 = *puVar7;
            bVar8 = (bool)hasExclusiveAccess(puVar7);
          } while (!bVar8);
          *puVar7 = uVar2 | 1;
          DataMemoryBarrier(0xb);
          if ((uVar2 & 2) != 0) goto LAB_017ce058;
        }
        FUN_019edbc4(uVar1,uVar4);
        goto LAB_017ce028;
      }
      iVar3 = param_3[1];
      iVar5 = piVar6[0x2d];
      bVar8 = iVar5 == iVar3;
      if (bVar8) {
        iVar3 = *param_3;
        iVar5 = piVar6[0x2c];
      }
      if (bVar8 && iVar5 == iVar3) goto LAB_017cdfdc;
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *puVar7;
        bVar8 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar8);
      *puVar7 = uVar2 & 0xfffffffe;
      DataMemoryBarrier(0xb);
      if ((uVar2 & 2) == 0) {
        (**(code **)(piVar6[0x2c] + 0xc))(piVar6[0x2d]);
        goto LAB_017cdfe4;
      }
      DataMemoryBarrier(0xb);
      do {
        bVar8 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar8);
      *puVar7 = *puVar7 | 1;
      DataMemoryBarrier(0xb);
LAB_017ce058:
      uVar1 = piVar6[2];
      unaff_r8 = piVar6[3];
      iVar3 = piVar6[4];
      iVar5 = piVar6[5];
      goto LAB_017cdefc;
    }
    iVar5 = 0;
    iVar3 = 5;
  }
  else {
    uVar1 = piVar6[2];
    unaff_r8 = piVar6[3];
    iVar3 = piVar6[4];
    iVar5 = piVar6[5];
LAB_017cdefc:
    piVar6[4] = 5;
    piVar6[5] = 0;
    if (iVar3 != 5 || iVar5 != 0) {
      FUN_01bed4e2(auStack_b8,piVar6 + 6,0x90);
      FUN_019edbc4(0,uVar4);
      if (iVar3 != 5 || iVar5 != 0) {
        if (iVar3 == 6 && iVar5 == 0) {
LAB_017ce028:
          *(undefined4 *)(param_1 + 8) = 6;
          *(undefined4 *)(param_1 + 0xc) = 0;
          return;
        }
        FUN_01bed4e2(auStack_148,auStack_b8,0x90);
      }
      goto LAB_017cdf6c;
    }
  }
  FUN_019edbc4(0,uVar4);
LAB_017cdf6c:
  local_1e8 = uVar1;
  local_1e4 = unaff_r8;
  local_1e0 = iVar3;
  local_1dc = iVar5;
  FUN_01bed4e2(auStack_1d8,auStack_148,0x90);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar6;
    bVar8 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar8);
  *piVar6 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_017850a0(*param_2);
  }
  *param_2 = 0;
  FUN_01bed4e2(param_1,&local_1e8,0xa0);
  return;
}

