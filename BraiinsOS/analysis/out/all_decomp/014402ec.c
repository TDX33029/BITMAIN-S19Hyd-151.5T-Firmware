// FUN_014402ec @ 014402ec size=476 calls_out=4 calls_in=1
// strings: 

undefined4 FUN_014402ec(int param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int extraout_r2;
  int iVar5;
  uint *puVar6;
  char cVar7;
  char cVar8;
  undefined8 uVar9;
  
  uVar9 = thunk_FUN_016de0ee(param_1,param_2,0x40);
  piVar4 = (int *)((ulonglong)uVar9 >> 0x20);
  iVar5 = (int)uVar9 + extraout_r2;
  if (*(char *)(iVar5 + 0x38) == '\x01') {
LAB_01440454:
    cVar8 = *(char *)(iVar5 + 0x31);
    cVar7 = *(char *)(iVar5 + 0x30);
    cVar2 = cVar8;
    if (cVar7 == '\x01') {
      if (cVar8 == '\0') {
        FUN_016455a4(*(undefined4 *)*piVar4,((undefined4 *)*piVar4)[1]);
        return 1;
      }
      cVar2 = cVar8 + -1;
    }
    *(char *)(iVar5 + 0x31) = cVar2;
  }
  else {
    cVar7 = '\0';
    cVar8 = '\0';
    if (*(char *)(iVar5 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar5,FUN_009948a0);
      *(undefined1 *)(iVar5 + 0x38) = 1;
      goto LAB_01440454;
    }
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a4794);
  }
  DataMemoryBarrier(0xb);
  if ((*(uint *)(param_1 + 0x80) & 4) != 0) {
    return 0;
  }
  puVar6 = (uint *)(param_1 + 0x80);
  if ((*(uint *)(param_1 + 0x80) & 8) != 0) {
    if ((*(int *)(param_1 + 0x74) == ((int *)*piVar4)[1]) &&
       (*(int *)(param_1 + 0x70) == *(int *)*piVar4)) goto LAB_014403e4;
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *puVar6;
      bVar1 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar1);
    *puVar6 = uVar3 & 0xfffffff7;
    DataMemoryBarrier(0xb);
    if ((uVar3 & 4) != 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar1);
      *puVar6 = *puVar6 | 8;
      DataMemoryBarrier(0xb);
      return 0;
    }
    (**(code **)(*(int *)(param_1 + 0x70) + 0xc))(*(undefined4 *)(param_1 + 0x74));
  }
  uVar9 = (*(code *)**(undefined4 **)*piVar4)(((undefined4 *)*piVar4)[1]);
  *(undefined8 *)(param_1 + 0x70) = uVar9;
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *puVar6;
    bVar1 = (bool)hasExclusiveAccess(puVar6);
  } while (!bVar1);
  *puVar6 = uVar3 | 8;
  DataMemoryBarrier(0xb);
  if ((uVar3 & 4) != 0) {
    return 0;
  }
LAB_014403e4:
  if (cVar7 == '\0') {
    return 1;
  }
  if (*(char *)(iVar5 + 0x38) != '\x01') {
    if (*(char *)(iVar5 + 0x38) == '\x02') {
      return 1;
    }
    FUN_015e8e6c(iVar5,FUN_01655ec4);
    *(undefined1 *)(iVar5 + 0x38) = 1;
  }
  *(char *)(iVar5 + 0x31) = cVar8;
  *(undefined1 *)(iVar5 + 0x30) = 1;
  return 1;
}

