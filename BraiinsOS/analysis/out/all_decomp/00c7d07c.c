// FUN_00c7d07c @ 00c7d07c size=692 calls_out=6 calls_in=0
// strings: called after complete

void FUN_00c7d07c(undefined4 *param_1,int *param_2)

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
  int local_10d0;
  int local_10cc;
  undefined1 auStack_10c8 [2128];
  undefined1 auStack_878 [2132];
  
  iVar5 = *param_2;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("called after complete",0x2b,&DAT_018ad0fc);
  }
  uVar11 = thunk_FUN_016de0ee(param_1,0x40);
  iVar7 = (int)uVar11 + (int)((ulonglong)uVar11 >> 0x20);
  if (*(char *)(iVar7 + 0x38) == '\x01') {
LAB_00c7d0e4:
    cVar9 = *(char *)(iVar7 + 0x31);
    cVar8 = *(char *)(iVar7 + 0x30);
    cVar2 = cVar9;
    if (cVar8 == '\x01') {
      if (cVar9 == '\0') {
        FUN_016455a4(*extraout_r2,extraout_r2[1]);
        goto LAB_00c7d288;
      }
      cVar2 = cVar9 + -1;
    }
    *(char *)(iVar7 + 0x31) = cVar2;
  }
  else {
    cVar8 = '\0';
    cVar9 = '\0';
    if (*(char *)(iVar7 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar7,FUN_00bacf28);
      *(undefined1 *)(iVar7 + 0x38) = 1;
      goto LAB_00c7d0e4;
    }
  }
  uVar3 = *(uint *)(iVar5 + 0x870);
  DataMemoryBarrier(0xb);
  if ((uVar3 & 2) == 0) {
    if ((uVar3 & 4) != 0) {
      local_10cc = 0;
      local_10d0 = 2;
      goto LAB_00c7d2a0;
    }
    puVar6 = (uint *)(iVar5 + 0x870);
    if ((uVar3 & 1) == 0) {
LAB_00c7d18c:
      uVar11 = (**(code **)*extraout_r2)(extraout_r2[1]);
      *(undefined8 *)(iVar5 + 0x868) = uVar11;
      DataMemoryBarrier(0xb);
      do {
        uVar3 = *puVar6;
        bVar1 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar1);
      *puVar6 = uVar3 | 1;
      DataMemoryBarrier(0xb);
      if ((uVar3 & 2) != 0) goto LAB_00c7d240;
    }
    else if ((*(int *)(iVar5 + 0x86c) != extraout_r2[1]) ||
            (*(int *)(iVar5 + 0x868) != *extraout_r2)) {
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
        goto LAB_00c7d240;
      }
      (**(code **)(*(int *)(iVar5 + 0x868) + 0xc))(*(undefined4 *)(iVar5 + 0x86c));
      goto LAB_00c7d18c;
    }
    if (cVar8 != '\0') {
      if (*(char *)(iVar7 + 0x38) != '\x01') {
        if (*(char *)(iVar7 + 0x38) == '\x02') goto LAB_00c7d288;
        FUN_015e8e6c(iVar7,FUN_01655ec4);
        *(undefined1 *)(iVar7 + 0x38) = 1;
      }
      *(char *)(iVar7 + 0x31) = cVar9;
      *(undefined1 *)(iVar7 + 0x30) = 1;
    }
  }
  else {
LAB_00c7d240:
    iVar10 = *(int *)(iVar5 + 8);
    iVar7 = *(int *)(iVar5 + 0xc);
    *(int *)(iVar5 + 8) = 2;
    *(undefined4 *)(iVar5 + 0xc) = 0;
    local_10cc = 0;
    local_10d0 = 2;
    if ((iVar10 == 2 && iVar7 == 0) ||
       (FUN_016dd1aa(auStack_878,iVar5 + 0x10,0x850), local_10cc = iVar7, local_10d0 = iVar10,
       iVar10 != 3 || iVar7 != 0)) {
LAB_00c7d2a0:
      FUN_016dd1aa(auStack_10c8,auStack_878,0x850);
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
          FUN_00d0554c(*param_2);
        }
      }
      *param_2 = 0;
      FUN_016dd1aa(param_1,&local_10d0,0x858);
      return;
    }
  }
LAB_00c7d288:
  *param_1 = 3;
  param_1[1] = 0;
  return;
}

