// FUN_014411e4 @ 014411e4 size=676 calls_out=6 calls_in=0
// strings: called after complete

void FUN_014411e4(undefined4 *param_1,int *param_2)

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
  int local_160;
  int local_15c;
  undefined1 auStack_158 [152];
  undefined1 auStack_c0 [156];
  
  iVar5 = *param_2;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("called after complete",0x2b,&DAT_018ad0fc);
  }
  uVar11 = thunk_FUN_016de0ee(param_1,0x40);
  iVar7 = (int)uVar11 + (int)((ulonglong)uVar11 >> 0x20);
  if (*(char *)(iVar7 + 0x38) == '\x01') {
LAB_01441248:
    cVar9 = *(char *)(iVar7 + 0x31);
    cVar8 = *(char *)(iVar7 + 0x30);
    cVar2 = cVar9;
    if (cVar8 == '\x01') {
      if (cVar9 == '\0') {
        FUN_016455a4(*extraout_r2,extraout_r2[1]);
        goto LAB_014413e8;
      }
      cVar2 = cVar9 + -1;
    }
    *(char *)(iVar7 + 0x31) = cVar2;
  }
  else {
    cVar8 = '\0';
    cVar9 = '\0';
    if (*(char *)(iVar7 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar7,FUN_009948a0);
      *(undefined1 *)(iVar7 + 0x38) = 1;
      goto LAB_01441248;
    }
  }
  uVar3 = *(uint *)(iVar5 + 0xb8);
  DataMemoryBarrier(0xb);
  if ((uVar3 & 2) == 0) {
    if ((uVar3 & 4) != 0) {
      local_15c = 0;
      local_160 = 5;
      goto LAB_014413fc;
    }
    puVar6 = (uint *)(iVar5 + 0xb8);
    if ((uVar3 & 1) == 0) {
LAB_014412f0:
      uVar11 = (**(code **)*extraout_r2)(extraout_r2[1]);
      *(undefined8 *)(iVar5 + 0xb0) = uVar11;
      DataMemoryBarrier(0xb);
      do {
        uVar3 = *puVar6;
        bVar1 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar1);
      *puVar6 = uVar3 | 1;
      DataMemoryBarrier(0xb);
      if ((uVar3 & 2) != 0) goto LAB_014413a0;
    }
    else if ((*(int *)(iVar5 + 0xb4) != extraout_r2[1]) || (*(int *)(iVar5 + 0xb0) != *extraout_r2))
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
        goto LAB_014413a0;
      }
      (**(code **)(*(int *)(iVar5 + 0xb0) + 0xc))(*(undefined4 *)(iVar5 + 0xb4));
      goto LAB_014412f0;
    }
    if (cVar8 != '\0') {
      if (*(char *)(iVar7 + 0x38) != '\x01') {
        if (*(char *)(iVar7 + 0x38) == '\x02') goto LAB_014413e8;
        FUN_015e8e6c(iVar7,FUN_01655ec4);
        *(undefined1 *)(iVar7 + 0x38) = 1;
      }
      *(char *)(iVar7 + 0x31) = cVar9;
      *(undefined1 *)(iVar7 + 0x30) = 1;
    }
  }
  else {
LAB_014413a0:
    iVar10 = *(int *)(iVar5 + 8);
    iVar7 = *(int *)(iVar5 + 0xc);
    *(int *)(iVar5 + 8) = 5;
    *(undefined4 *)(iVar5 + 0xc) = 0;
    local_15c = 0;
    local_160 = 5;
    if ((iVar10 == 5 && iVar7 == 0) ||
       (FUN_016dd1aa(auStack_c0,iVar5 + 0x10,0x98), local_15c = iVar7, local_160 = iVar10,
       iVar10 != 6 || iVar7 != 0)) {
LAB_014413fc:
      FUN_016dd1aa(auStack_158,auStack_c0,0x98);
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
          FUN_0143e860(*param_2);
        }
      }
      *param_2 = 0;
      FUN_016dd1aa(param_1,&local_160,0xa0);
      return;
    }
  }
LAB_014413e8:
  *param_1 = 6;
  param_1[1] = 0;
  return;
}

