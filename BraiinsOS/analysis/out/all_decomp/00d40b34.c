// FUN_00d40b34 @ 00d40b34 size=576 calls_out=5 calls_in=2
// strings: called after complete

byte FUN_00d40b34(int *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int extraout_r2;
  int iVar5;
  byte bVar6;
  uint *puVar7;
  int iVar8;
  char cVar9;
  char cVar10;
  undefined8 uVar11;
  
  iVar8 = *param_1;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("called after complete",0x2b,&DAT_018ad0fc);
  }
  uVar11 = thunk_FUN_016de0ee(param_1,param_2,0x40);
  piVar4 = (int *)((ulonglong)uVar11 >> 0x20);
  iVar5 = (int)uVar11 + extraout_r2;
  if (*(char *)(iVar5 + 0x38) == '\x01') {
LAB_00d40bc0:
    cVar10 = *(char *)(iVar5 + 0x31);
    cVar9 = *(char *)(iVar5 + 0x30);
    cVar2 = cVar10;
    if (cVar9 == '\x01') {
      if (cVar10 == '\0') {
        FUN_016455a4(*piVar4,piVar4[1]);
        return 2;
      }
      cVar2 = cVar10 + -1;
    }
    *(char *)(iVar5 + 0x31) = cVar2;
    uVar3 = *(uint *)(iVar8 + 0x18);
    DataMemoryBarrier(0xb);
  }
  else {
    cVar9 = '\0';
    cVar10 = '\0';
    if (*(char *)(iVar5 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar5,FUN_00bacf28);
      *(undefined1 *)(iVar5 + 0x38) = 1;
      goto LAB_00d40bc0;
    }
    uVar3 = *(uint *)(iVar8 + 0x18);
    DataMemoryBarrier(0xb);
  }
  if ((uVar3 & 2) == 0) {
    bVar6 = 1;
    if ((uVar3 & 4) != 0) goto LAB_00d40d2c;
    puVar7 = (uint *)(iVar8 + 0x18);
    if ((uVar3 & 1) != 0) {
      if ((*(int *)(iVar8 + 0x14) == piVar4[1]) && (*(int *)(iVar8 + 0x10) == *piVar4))
      goto LAB_00d40ca4;
      DataMemoryBarrier(0xb);
      do {
        uVar3 = *puVar7;
        bVar1 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar1);
      *puVar7 = uVar3 & 0xfffffffe;
      DataMemoryBarrier(0xb);
      if ((uVar3 & 2) != 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar1);
        *puVar7 = *puVar7 | 1;
        DataMemoryBarrier(0xb);
        goto LAB_00d40d1c;
      }
      (**(code **)(*(int *)(iVar8 + 0x10) + 0xc))(*(undefined4 *)(iVar8 + 0x14));
    }
    uVar11 = (**(code **)*piVar4)(piVar4[1]);
    *(undefined8 *)(iVar8 + 0x10) = uVar11;
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *puVar7;
      bVar1 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar1);
    *puVar7 = uVar3 | 1;
    DataMemoryBarrier(0xb);
    if ((uVar3 & 2) == 0) {
LAB_00d40ca4:
      if (cVar9 == '\0') {
        return 2;
      }
      if (*(char *)(iVar5 + 0x38) != '\x01') {
        if (*(char *)(iVar5 + 0x38) == '\x02') {
          return 2;
        }
        FUN_015e8e6c(iVar5,FUN_01655ec4);
        *(undefined1 *)(iVar5 + 0x38) = 1;
      }
      *(char *)(iVar5 + 0x31) = cVar10;
      *(undefined1 *)(iVar5 + 0x30) = 1;
      return 2;
    }
  }
LAB_00d40d1c:
  bVar6 = *(byte *)(iVar8 + 0x1c);
  *(undefined1 *)(iVar8 + 0x1c) = 0;
  bVar6 = bVar6 ^ 1;
LAB_00d40d2c:
  piVar4 = (int *)*param_1;
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0165863c(*param_1);
    }
  }
  *param_1 = 0;
  return bVar6 & 1;
}

