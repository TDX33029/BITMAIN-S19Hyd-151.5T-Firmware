// FUN_01473398 @ 01473398 size=676 calls_out=6 calls_in=1
// strings: called after complete

void FUN_01473398(undefined4 *param_1,int *param_2)

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
  int local_d0;
  int local_cc;
  undefined1 auStack_c8 [80];
  undefined1 auStack_78 [84];
  
  iVar5 = *param_2;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("called after complete",0x2b,&DAT_018ad0fc);
  }
  uVar11 = thunk_FUN_016de0ee(param_1,0x40);
  iVar7 = (int)uVar11 + (int)((ulonglong)uVar11 >> 0x20);
  if (*(char *)(iVar7 + 0x38) == '\x01') {
LAB_014733fc:
    cVar9 = *(char *)(iVar7 + 0x31);
    cVar8 = *(char *)(iVar7 + 0x30);
    cVar2 = cVar9;
    if (cVar8 == '\x01') {
      if (cVar9 == '\0') {
        FUN_016455a4(*extraout_r2,extraout_r2[1]);
        goto LAB_0147359c;
      }
      cVar2 = cVar9 + -1;
    }
    *(char *)(iVar7 + 0x31) = cVar2;
  }
  else {
    cVar8 = '\0';
    cVar9 = '\0';
    if (*(char *)(iVar7 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar7,FUN_0148592c);
      *(undefined1 *)(iVar7 + 0x38) = 1;
      goto LAB_014733fc;
    }
  }
  uVar3 = *(uint *)(iVar5 + 0x70);
  DataMemoryBarrier(0xb);
  if ((uVar3 & 2) == 0) {
    if ((uVar3 & 4) != 0) {
      local_cc = 0;
      local_d0 = 4;
      goto LAB_014735b0;
    }
    puVar6 = (uint *)(iVar5 + 0x70);
    if ((uVar3 & 1) == 0) {
LAB_014734a4:
      uVar11 = (**(code **)*extraout_r2)(extraout_r2[1]);
      *(undefined8 *)(iVar5 + 0x68) = uVar11;
      DataMemoryBarrier(0xb);
      do {
        uVar3 = *puVar6;
        bVar1 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar1);
      *puVar6 = uVar3 | 1;
      DataMemoryBarrier(0xb);
      if ((uVar3 & 2) != 0) goto LAB_01473554;
    }
    else if ((*(int *)(iVar5 + 0x6c) != extraout_r2[1]) || (*(int *)(iVar5 + 0x68) != *extraout_r2))
    {
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
        goto LAB_01473554;
      }
      (**(code **)(*(int *)(iVar5 + 0x68) + 0xc))(*(undefined4 *)(iVar5 + 0x6c));
      goto LAB_014734a4;
    }
    if (cVar8 != '\0') {
      if (*(char *)(iVar7 + 0x38) != '\x01') {
        if (*(char *)(iVar7 + 0x38) == '\x02') goto LAB_0147359c;
        FUN_015e8e6c(iVar7,FUN_01655ec4);
        *(undefined1 *)(iVar7 + 0x38) = 1;
      }
      *(char *)(iVar7 + 0x31) = cVar9;
      *(undefined1 *)(iVar7 + 0x30) = 1;
    }
  }
  else {
LAB_01473554:
    iVar10 = *(int *)(iVar5 + 8);
    iVar7 = *(int *)(iVar5 + 0xc);
    *(int *)(iVar5 + 8) = 4;
    *(undefined4 *)(iVar5 + 0xc) = 0;
    local_cc = 0;
    local_d0 = 4;
    if ((iVar10 == 4 && iVar7 == 0) ||
       (FUN_016dd1aa(auStack_78,iVar5 + 0x10,0x50), local_cc = iVar7, local_d0 = iVar10,
       iVar10 != 5 || iVar7 != 0)) {
LAB_014735b0:
      FUN_016dd1aa(auStack_c8,auStack_78,0x50);
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
          FUN_014a545c(*param_2);
        }
      }
      *param_2 = 0;
      FUN_016dd1aa(param_1,&local_d0,0x58);
      return;
    }
  }
LAB_0147359c:
  *param_1 = 5;
  param_1[1] = 0;
  return;
}

