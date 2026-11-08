// FUN_00a57590 @ 00a57590 size=604 calls_out=5 calls_in=11
// strings: called after complete

void FUN_00a57590(undefined4 *param_1,undefined4 *param_2,int *param_3)

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
  int local_8b8;
  int local_8b4;
  undefined1 auStack_8b0 [728];
  undefined1 auStack_5d8 [728];
  undefined1 auStack_300 [732];
  
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
    if ((uVar1 & 1) != 0) goto LAB_00a57790;
    unaff_r5 = (uVar1 & 0xffffff) >> 0x10;
    uVar1 = (uVar1 & 0xffffff) >> 8;
  }
  uVar2 = piVar5[0xbe];
  piVar7 = piVar5 + 2;
  DataMemoryBarrier(0xb);
  if ((uVar2 & 2) == 0) {
    if ((uVar2 & 4) == 0) {
      puVar6 = (uint *)(piVar5 + 0xbe);
      if ((uVar2 & 1) == 0) {
LAB_00a57740:
        if ((uVar2 & 1) == 0) {
LAB_00a57748:
          uVar9 = (**(code **)*param_3)(param_3[1]);
          *(undefined8 *)(piVar5 + 0xbc) = uVar9;
          DataMemoryBarrier(0xb);
          do {
            uVar2 = *puVar6;
            bVar8 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar8);
          *puVar6 = uVar2 | 1;
          DataMemoryBarrier(0xb);
          if ((uVar2 & 2) != 0) goto LAB_00a577c4;
        }
        FUN_019edbc4(uVar1,unaff_r5);
        goto LAB_00a57790;
      }
      iVar3 = param_3[1];
      iVar4 = piVar5[0xbd];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        iVar3 = *param_3;
        iVar4 = piVar5[0xbc];
      }
      if (bVar8 && iVar4 == iVar3) goto LAB_00a57740;
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *puVar6;
        bVar8 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar8);
      *puVar6 = uVar2 & 0xfffffffe;
      DataMemoryBarrier(0xb);
      if ((uVar2 & 2) == 0) {
        (**(code **)(piVar5[0xbc] + 0xc))(piVar5[0xbd]);
        goto LAB_00a57748;
      }
      DataMemoryBarrier(0xb);
      do {
        bVar8 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar8);
      *puVar6 = *puVar6 | 1;
      DataMemoryBarrier(0xb);
LAB_00a577c4:
      iVar4 = *piVar7;
      iVar3 = piVar5[3];
      goto LAB_00a5766c;
    }
    iVar3 = 0;
    iVar4 = 0x1e;
  }
  else {
    iVar4 = *piVar7;
    iVar3 = piVar5[3];
LAB_00a5766c:
    *piVar7 = 0x1e;
    piVar5[3] = 0;
    if (iVar4 != 0x1e || iVar3 != 0) {
      FUN_01bed4e2(auStack_300,piVar5 + 4,0x2d8);
      FUN_019edbc4(0,unaff_r5);
      if (iVar4 != 0x1e || iVar3 != 0) {
        if (iVar4 == 0x1f && iVar3 == 0) {
LAB_00a57790:
          *param_1 = 0x1f;
          param_1[1] = 0;
          return;
        }
        FUN_01bed4e2(auStack_5d8,auStack_300,0x2d8);
      }
      goto LAB_00a576dc;
    }
  }
  FUN_019edbc4(0,unaff_r5);
LAB_00a576dc:
  local_8b8 = iVar4;
  local_8b4 = iVar3;
  FUN_01bed4e2(auStack_8b0,auStack_5d8,0x2d8);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar5;
    bVar8 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar8);
  *piVar5 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a96530(*param_2);
  }
  *param_2 = 0;
  FUN_01bed4e2(param_1,&local_8b8,0x2e0);
  return;
}

