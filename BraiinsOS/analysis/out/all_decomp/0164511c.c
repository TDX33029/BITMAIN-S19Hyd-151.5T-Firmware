// FUN_0164511c @ 0164511c size=804 calls_out=10 calls_in=51
// strings: assertion failed: prev.ref_count() >= 1

void FUN_0164511c(undefined4 param_1)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  int extraout_r2;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  uint *unaff_r10;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  
  uVar12 = thunk_FUN_016de0ee(param_1,param_1,0x40);
  piVar3 = (int *)((ulonglong)uVar12 >> 0x20);
  iVar7 = (int)uVar12 + extraout_r2;
  iVar5 = *piVar3;
  iVar6 = piVar3[1];
  pcVar8 = (char *)piVar3[2];
  if (*(char *)(iVar7 + 0x38) != '\x01') {
    if (*(char *)(iVar7 + 0x38) == '\x02') {
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018aca60);
      }
      goto LAB_0164519c;
    }
    FUN_015e8e6c(iVar7,FUN_01655ec4);
    *(undefined1 *)(iVar7 + 0x38) = 1;
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018aca70);
  }
  uVar1 = (uint)*(byte *)(iVar7 + 0x32);
  bVar11 = uVar1 != 2;
  if (bVar11) {
    unaff_r10 = *(uint **)(iVar7 + 0x20);
  }
  if (bVar11 && unaff_r10 != (uint *)0x0) {
    uVar1 = *unaff_r10;
  }
  if (((!bVar11 || unaff_r10 == (uint *)0x0) || uVar1 == 0) ||
     (iVar5 != *(int *)(unaff_r10[1] + 8) + 8)) {
LAB_0164519c:
    FUN_0163a6a8(iVar5,iVar6);
    uVar13 = FUN_0164ff24(iVar5 + 0x78,iVar5);
    uVar1 = (uint)(uVar13 >> 0x20);
    if ((uVar13 & 1) == 0) {
      return;
    }
    if (*(uint *)(iVar5 + 0x44) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar1,*(uint *)(iVar5 + 0x44),&DAT_018ac61c);
    }
    FUN_0163a560(*(undefined4 *)(*(int *)(iVar5 + 0x40) + uVar1 * 8 + 4),iVar5 + 0xb0);
    return;
  }
  if (unaff_r10[2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_018ad00c);
  }
  uVar1 = unaff_r10[3];
  unaff_r10[2] = 0xffffffff;
  if (uVar1 == 0) {
    unaff_r10[2] = 0;
    goto LAB_0164519c;
  }
  if ((*pcVar8 == '\0') && ((*(byte *)(uVar1 + 100) & 1) != 0)) {
    iVar7 = *(int *)(uVar1 + 0x58);
    *(undefined4 *)(uVar1 + 0x58) = 0;
    if (iVar7 == 0) {
      *(int *)(uVar1 + 0x58) = iVar6;
      goto LAB_016453d4;
    }
    iVar10 = *(int *)(uVar1 + 0x50);
    do {
      iVar9 = *(int *)(iVar10 + 0xc);
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      uVar4 = *(uint *)(iVar10 + 0x10);
      if (uVar4 - iVar9 < 0x100) {
        *(int *)(*(int *)(iVar10 + 0x14) + (uVar4 & 0xff) * 4) = iVar7;
        DataMemoryBarrier(0xb);
        *(uint *)(iVar10 + 0x10) = uVar4 + 1;
        break;
      }
      if (iVar9 != *(int *)(iVar10 + 8)) {
        FUN_0163a6a8(iVar5);
        break;
      }
      iVar7 = FUN_01638570(*(undefined4 *)(uVar1 + 0x50),iVar7,iVar9,uVar4,iVar5);
    } while (iVar7 != 0);
    puVar2 = *(uint **)(uVar1 + 0x58);
    if (puVar2 != (uint *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar2;
        bVar11 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar11);
      *puVar2 = uVar4 - 0x40;
      DataMemoryBarrier(0xb);
      if (uVar4 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: prev.ref_count() >= 1",0x27,&DAT_018ad2bc);
      }
      if ((uVar4 & 0xffffffc0) == 0x40) {
        (**(code **)(puVar2[2] + 8))();
      }
    }
    iVar7 = *(int *)(uVar1 + 0x5c);
    *(int *)(uVar1 + 0x58) = iVar6;
  }
  else {
    iVar7 = *(int *)(uVar1 + 0x50);
    do {
      iVar10 = *(int *)(iVar7 + 0xc);
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      uVar4 = *(uint *)(iVar7 + 0x10);
      if (uVar4 - iVar10 < 0x100) {
        *(int *)(*(int *)(iVar7 + 0x14) + (uVar4 & 0xff) * 4) = iVar6;
        DataMemoryBarrier(0xb);
        *(uint *)(iVar7 + 0x10) = uVar4 + 1;
        break;
      }
      if (iVar10 != *(int *)(iVar7 + 8)) {
        FUN_0163a6a8(iVar5,iVar6);
        break;
      }
      iVar6 = FUN_01638570(*(undefined4 *)(uVar1 + 0x50),iVar6,iVar10,uVar4,iVar5);
    } while (iVar6 != 0);
    iVar7 = *(int *)(uVar1 + 0x5c);
  }
  if (iVar7 != 0) {
    uVar13 = FUN_0164ff24(iVar5 + 0x78,iVar5);
    uVar1 = (uint)(uVar13 >> 0x20);
    if ((uVar13 & 1) != 0) {
      if (*(uint *)(iVar5 + 0x44) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar1,*(uint *)(iVar5 + 0x44),&DAT_018ac60c);
      }
      FUN_0163a560(*(undefined4 *)(*(int *)(iVar5 + 0x40) + uVar1 * 8 + 4),iVar5 + 0xb0);
    }
  }
LAB_016453d4:
  unaff_r10[2] = unaff_r10[2] + 1;
  return;
}

