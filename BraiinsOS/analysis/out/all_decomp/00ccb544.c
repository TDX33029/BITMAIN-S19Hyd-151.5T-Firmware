// FUN_00ccb544 @ 00ccb544 size=388 calls_out=5 calls_in=2
// strings: 

void FUN_00ccb544(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  
  uVar12 = thunk_FUN_016de0ee(param_1,0x40);
  iVar6 = (int)uVar12 + (int)((ulonglong)uVar12 >> 0x20);
  uVar7 = *(undefined4 *)(param_1 + 8);
  uVar9 = *(undefined4 *)(param_1 + 0xc);
  if (*(char *)(iVar6 + 0x38) == '\x01') {
LAB_00ccb5c0:
    uVar10 = *(undefined4 *)(iVar6 + 0x18);
    uVar11 = *(undefined4 *)(iVar6 + 0x1c);
    *(undefined4 *)(iVar6 + 0x18) = uVar7;
    *(undefined4 *)(iVar6 + 0x1c) = uVar9;
    iVar2 = *(int *)(param_1 + 0x10);
  }
  else {
    uVar10 = 0;
    uVar11 = 0;
    if (*(char *)(iVar6 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar6,FUN_01655ec4);
      *(undefined1 *)(iVar6 + 0x38) = 1;
      goto LAB_00ccb5c0;
    }
    iVar2 = *(int *)(param_1 + 0x10);
  }
  if (iVar2 != 1) {
    if (iVar2 == 0) {
      FUN_00c86e44(param_1 + 0x18);
    }
    goto LAB_00ccb678;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 0x20);
    cVar3 = bVar1 - 4;
    if (bVar1 < 4) {
      cVar3 = '\x04';
    }
    iVar4 = 0xc;
    if ((cVar3 != '\x05') && (cVar3 != '\x04' || bVar1 != 3)) goto LAB_00ccb678;
  }
  else {
    if (iVar2 == 8) {
      iVar2 = *(int *)(param_1 + 0x28);
      if (iVar2 != 0) {
        puVar8 = *(undefined4 **)(param_1 + 0x2c);
        pcVar5 = (code *)*puVar8;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(iVar2);
        }
        if (puVar8[1] != 0) {
          thunk_FUN_016d3fb4(iVar2);
        }
      }
      goto LAB_00ccb678;
    }
    iVar4 = 4;
    if (iVar2 != 2) goto LAB_00ccb678;
  }
  (**(code **)**(undefined4 **)(param_1 + 0x18 + iVar4))();
LAB_00ccb678:
  FUN_016dd1aa(param_1 + 0x10,param_2,0x130);
  if (*(char *)(iVar6 + 0x38) != '\x01') {
    if (*(char *)(iVar6 + 0x38) == '\x02') {
      return;
    }
    FUN_015e8e6c(iVar6,FUN_01655ec4);
    *(undefined1 *)(iVar6 + 0x38) = 1;
  }
  *(undefined4 *)(iVar6 + 0x18) = uVar10;
  *(undefined4 *)(iVar6 + 0x1c) = uVar11;
  return;
}

