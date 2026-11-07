// FUN_00e7c0cc @ 00e7c0cc size=8 calls_out=1 calls_in=0
// strings: 

void FUN_00e7c0cc(void)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *extraout_r2;
  int iVar7;
  uint *puVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  undefined8 uVar13;
  int iStack_5e8;
  int iStack_5e4;
  undefined1 auStack_5e0 [728];
  undefined1 auStack_308 [732];
  
  uVar13 = FUN_0164e878();
  piVar6 = (int *)((ulonglong)uVar13 >> 0x20);
  puVar3 = (undefined4 *)uVar13;
  iVar7 = *piVar6;
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("called after complete",0x2b,&DAT_018ad0fc);
  }
  uVar13 = thunk_FUN_016de0ee(puVar3,0x40);
  iVar9 = (int)uVar13 + (int)((ulonglong)uVar13 >> 0x20);
  if (*(char *)(iVar9 + 0x38) == '\x01') {
LAB_00e7c13c:
    cVar11 = *(char *)(iVar9 + 0x31);
    cVar10 = *(char *)(iVar9 + 0x30);
    cVar2 = cVar11;
    if (cVar10 == '\x01') {
      if (cVar11 == '\0') {
        FUN_016455a4(*extraout_r2,extraout_r2[1]);
        goto LAB_00e7c2e0;
      }
      cVar2 = cVar11 + -1;
    }
    *(char *)(iVar9 + 0x31) = cVar2;
  }
  else {
    cVar10 = '\0';
    cVar11 = '\0';
    if (*(char *)(iVar9 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar9,FUN_005bc49c);
      *(undefined1 *)(iVar9 + 0x38) = 1;
      goto LAB_00e7c13c;
    }
  }
  uVar4 = *(uint *)(iVar7 + 0x2f8);
  DataMemoryBarrier(0xb);
  if ((uVar4 & 2) == 0) {
    if ((uVar4 & 4) != 0) {
      iStack_5e4 = 0;
      iStack_5e8 = 0x1e;
      goto LAB_00e7c2f8;
    }
    puVar8 = (uint *)(iVar7 + 0x2f8);
    if ((uVar4 & 1) == 0) {
LAB_00e7c1e4:
      uVar13 = (**(code **)*extraout_r2)(extraout_r2[1]);
      *(undefined8 *)(iVar7 + 0x2f0) = uVar13;
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar8;
        bVar1 = (bool)hasExclusiveAccess(puVar8);
      } while (!bVar1);
      *puVar8 = uVar4 | 1;
      DataMemoryBarrier(0xb);
      if ((uVar4 & 2) != 0) goto LAB_00e7c298;
    }
    else if ((*(int *)(iVar7 + 0x2f4) != extraout_r2[1]) ||
            (*(int *)(iVar7 + 0x2f0) != *extraout_r2)) {
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar8;
        bVar1 = (bool)hasExclusiveAccess(puVar8);
      } while (!bVar1);
      *puVar8 = uVar4 & 0xfffffffe;
      DataMemoryBarrier(0xb);
      if ((uVar4 & 2) != 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar8);
        } while (!bVar1);
        *puVar8 = *puVar8 | 1;
        DataMemoryBarrier(0xb);
        goto LAB_00e7c298;
      }
      (**(code **)(*(int *)(iVar7 + 0x2f0) + 0xc))(*(undefined4 *)(iVar7 + 0x2f4));
      goto LAB_00e7c1e4;
    }
    if (cVar10 != '\0') {
      if (*(char *)(iVar9 + 0x38) != '\x01') {
        if (*(char *)(iVar9 + 0x38) == '\x02') goto LAB_00e7c2e0;
        FUN_015e8e6c(iVar9,FUN_01655ec4);
        *(undefined1 *)(iVar9 + 0x38) = 1;
      }
      *(char *)(iVar9 + 0x31) = cVar11;
      *(undefined1 *)(iVar9 + 0x30) = 1;
    }
  }
  else {
LAB_00e7c298:
    iVar12 = *(int *)(iVar7 + 8);
    iVar9 = *(int *)(iVar7 + 0xc);
    *(int *)(iVar7 + 8) = 0x1e;
    *(undefined4 *)(iVar7 + 0xc) = 0;
    iStack_5e4 = 0;
    iStack_5e8 = 0x1e;
    if ((iVar12 == 0x1e && iVar9 == 0) ||
       (FUN_016dd1aa(auStack_308,iVar7 + 0x10,0x2d8), iStack_5e4 = iVar9, iStack_5e8 = iVar12,
       iVar12 != 0x1f || iVar9 != 0)) {
LAB_00e7c2f8:
      FUN_016dd1aa(auStack_5e0,auStack_308,0x2d8);
      piVar5 = (int *)*piVar6;
      if (piVar5 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00e457a8(*piVar6);
        }
      }
      *piVar6 = 0;
      FUN_016dd1aa(puVar3,&iStack_5e8,0x2e0);
      return;
    }
  }
LAB_00e7c2e0:
  *puVar3 = 0x1f;
  puVar3[1] = 0;
  return;
}

