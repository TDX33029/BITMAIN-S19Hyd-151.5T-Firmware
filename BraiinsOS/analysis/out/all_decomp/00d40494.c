// FUN_00d40494 @ 00d40494 size=648 calls_out=5 calls_in=5
// strings: called after complete

undefined8 FUN_00d40494(int *param_1,undefined4 param_2)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  int extraout_r2;
  int iVar5;
  uint *puVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  
  iVar7 = *param_1;
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("called after complete",0x2b,&DAT_018ad0fc);
  }
  uVar10 = thunk_FUN_016de0ee(param_1,param_2,0x40);
  piVar4 = (int *)((ulonglong)uVar10 >> 0x20);
  iVar5 = (int)uVar10 + extraout_r2;
  if (*(char *)(iVar5 + 0x38) == '\x01') {
LAB_00d40520:
    bVar2 = *(byte *)(iVar5 + 0x31);
    uVar9 = (uint)bVar2;
    cVar8 = *(char *)(iVar5 + 0x30);
    if (cVar8 == '\x01') {
      if (uVar9 == 0) {
        FUN_016455a4(*(undefined4 *)*piVar4,((undefined4 *)*piVar4)[1]);
        return 2;
      }
      bVar2 = bVar2 - 1;
    }
    *(byte *)(iVar5 + 0x31) = bVar2;
    uVar3 = *(uint *)(iVar7 + 0x20);
    DataMemoryBarrier(0xb);
  }
  else {
    cVar8 = '\0';
    uVar9 = 0;
    if (*(char *)(iVar5 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar5,FUN_00bacf28);
      *(undefined1 *)(iVar5 + 0x38) = 1;
      goto LAB_00d40520;
    }
    uVar3 = *(uint *)(iVar7 + 0x20);
    DataMemoryBarrier(0xb);
  }
  if ((uVar3 & 2) == 0) {
    if ((uVar3 & 4) != 0) {
      uVar3 = 1;
      piVar4 = (int *)*param_1;
      goto joined_r0x00d40644;
    }
    puVar6 = (uint *)(iVar7 + 0x20);
    if ((uVar3 & 1) != 0) {
      if ((*(int *)(iVar7 + 0x1c) == ((int *)*piVar4)[1]) &&
         (*(int *)(iVar7 + 0x18) == *(int *)*piVar4)) goto LAB_00d40608;
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
        goto LAB_00d40684;
      }
      (**(code **)(*(int *)(iVar7 + 0x18) + 0xc))(*(undefined4 *)(iVar7 + 0x1c));
    }
    uVar10 = (*(code *)**(undefined4 **)*piVar4)(((undefined4 *)*piVar4)[1]);
    *(undefined8 *)(iVar7 + 0x18) = uVar10;
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *puVar6;
      bVar1 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar1);
    *puVar6 = uVar3 | 1;
    DataMemoryBarrier(0xb);
    if ((uVar3 & 2) == 0) {
LAB_00d40608:
      if (cVar8 == '\0') {
        return CONCAT44(uVar9,2);
      }
      if (*(char *)(iVar5 + 0x38) != '\x01') {
        if (*(char *)(iVar5 + 0x38) == '\x02') {
          return CONCAT44(uVar9,2);
        }
        FUN_015e8e6c(iVar5,FUN_01655ec4);
        *(undefined1 *)(iVar5 + 0x38) = 1;
      }
      *(char *)(iVar5 + 0x31) = (char)uVar9;
      *(undefined1 *)(iVar5 + 0x30) = 1;
      return CONCAT44(uVar9,2);
    }
  }
LAB_00d40684:
  uVar3 = *(uint *)(iVar7 + 8);
  uVar9 = *(uint *)(iVar7 + 0xc);
  *(undefined4 *)(iVar7 + 8) = 0;
  uVar3 = uVar3 ^ 1;
  piVar4 = (int *)*param_1;
joined_r0x00d40644:
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4380(*param_1);
    }
  }
  *param_1 = 0;
  return CONCAT44(uVar9,uVar3);
}

