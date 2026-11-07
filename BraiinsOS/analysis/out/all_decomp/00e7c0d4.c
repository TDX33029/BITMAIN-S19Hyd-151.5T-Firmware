// FUN_00e7c0d4 @ 00e7c0d4 size=692 calls_out=6 calls_in=2
// strings: called after complete

void FUN_00e7c0d4(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int *extraout_r2;
  int iVar5;
  uint *puVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  int local_5e0;
  int local_5dc;
  undefined1 auStack_5d8 [728];
  undefined1 auStack_300 [732];
  
  iVar5 = *param_2;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("called after complete",0x2b,&DAT_018ad0fc);
  }
  uVar11 = thunk_FUN_016de0ee(param_1,0x40);
  iVar7 = (int)uVar11 + (int)((ulonglong)uVar11 >> 0x20);
  if (*(char *)(iVar7 + 0x38) == '\x01') {
LAB_00e7c13c:
    cVar9 = *(char *)(iVar7 + 0x31);
    cVar8 = *(char *)(iVar7 + 0x30);
    cVar2 = cVar9;
    if (cVar8 == '\x01') {
      if (cVar9 == '\0') {
        FUN_016455a4(*extraout_r2,extraout_r2[1]);
        goto LAB_00e7c2e0;
      }
      cVar2 = cVar9 + -1;
    }
    *(char *)(iVar7 + 0x31) = cVar2;
  }
  else {
    cVar8 = '\0';
    cVar9 = '\0';
    if (*(char *)(iVar7 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar7,FUN_005bc49c);
      *(undefined1 *)(iVar7 + 0x38) = 1;
      goto LAB_00e7c13c;
    }
  }
  uVar3 = *(uint *)(iVar5 + 0x2f8);
  DataMemoryBarrier(0xb);
  if ((uVar3 & 2) == 0) {
    if ((uVar3 & 4) != 0) {
      local_5dc = 0;
      local_5e0 = 0x1e;
      goto LAB_00e7c2f8;
    }
    puVar6 = (uint *)(iVar5 + 0x2f8);
    if ((uVar3 & 1) == 0) {
LAB_00e7c1e4:
      uVar11 = (**(code **)*extraout_r2)(extraout_r2[1]);
      *(undefined8 *)(iVar5 + 0x2f0) = uVar11;
      DataMemoryBarrier(0xb);
      do {
        uVar3 = *puVar6;
        bVar1 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar1);
      *puVar6 = uVar3 | 1;
      DataMemoryBarrier(0xb);
      if ((uVar3 & 2) != 0) goto LAB_00e7c298;
    }
    else if ((*(int *)(iVar5 + 0x2f4) != extraout_r2[1]) ||
            (*(int *)(iVar5 + 0x2f0) != *extraout_r2)) {
      DataMemoryBarrier(0xb);
      do {
        uVar3 = *puVar6;
        bVar1 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar1);
      *puVar6 = uVar3 & 0xfffffffe;
      DataMemoryBarrier(0xb);
      if ((uVar3 & 2) != 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar1);
        *puVar6 = *puVar6 | 1;
        DataMemoryBarrier(0xb);
        goto LAB_00e7c298;
      }
      (**(code **)(*(int *)(iVar5 + 0x2f0) + 0xc))(*(undefined4 *)(iVar5 + 0x2f4));
      goto LAB_00e7c1e4;
    }
    if (cVar8 != '\0') {
      if (*(char *)(iVar7 + 0x38) != '\x01') {
        if (*(char *)(iVar7 + 0x38) == '\x02') goto LAB_00e7c2e0;
        FUN_015e8e6c(iVar7,FUN_01655ec4);
        *(undefined1 *)(iVar7 + 0x38) = 1;
      }
      *(char *)(iVar7 + 0x31) = cVar9;
      *(undefined1 *)(iVar7 + 0x30) = 1;
    }
  }
  else {
LAB_00e7c298:
    iVar10 = *(int *)(iVar5 + 8);
    iVar7 = *(int *)(iVar5 + 0xc);
    *(int *)(iVar5 + 8) = 0x1e;
    *(undefined4 *)(iVar5 + 0xc) = 0;
    local_5dc = 0;
    local_5e0 = 0x1e;
    if ((iVar10 == 0x1e && iVar7 == 0) ||
       (FUN_016dd1aa(auStack_300,iVar5 + 0x10,0x2d8), local_5dc = iVar7, local_5e0 = iVar10,
       iVar10 != 0x1f || iVar7 != 0)) {
LAB_00e7c2f8:
      FUN_016dd1aa(auStack_5d8,auStack_300,0x2d8);
      piVar4 = (int *)*param_2;
      if (piVar4 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00e457a8(*param_2);
        }
      }
      *param_2 = 0;
      FUN_016dd1aa(param_1,&local_5e0,0x2e0);
      return;
    }
  }
LAB_00e7c2e0:
  *param_1 = 0x1f;
  param_1[1] = 0;
  return;
}

