// FUN_00d40834 @ 00d40834 size=676 calls_out=5 calls_in=2
// strings: called after complete

void FUN_00d40834(uint *param_1,uint *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int *extraout_r2;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  char cVar9;
  undefined8 uVar10;
  
  uVar5 = *param_2;
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("called after complete",0x2b,&DAT_018ad0fc);
  }
  uVar10 = thunk_FUN_016de0ee(param_1,0x40);
  iVar6 = (int)uVar10 + (int)((ulonglong)uVar10 >> 0x20);
  if (*(char *)(iVar6 + 0x38) == '\x01') {
LAB_00d408c4:
    cVar9 = *(char *)(iVar6 + 0x31);
    uVar8 = (uint)*(byte *)(iVar6 + 0x30);
    cVar2 = cVar9;
    if (uVar8 == 1) {
      if (cVar9 == '\0') {
        FUN_016455a4(*(undefined4 *)*extraout_r2,((undefined4 *)*extraout_r2)[1]);
        *(undefined1 *)param_1 = 3;
        return;
      }
      cVar2 = cVar9 + -1;
    }
    *(char *)(iVar6 + 0x31) = cVar2;
    uVar3 = *(uint *)(uVar5 + 0x20);
    DataMemoryBarrier(0xb);
    if ((uVar3 & 2) != 0) goto LAB_00d40a38;
LAB_00d408f8:
    if ((uVar3 & 4) == 0) {
      puVar7 = (uint *)(uVar5 + 0x20);
      if ((uVar3 & 1) == 0) {
LAB_00d4096c:
        uVar10 = (*(code *)**(undefined4 **)*extraout_r2)(((undefined4 *)*extraout_r2)[1]);
        *(undefined8 *)(uVar5 + 0x18) = uVar10;
        DataMemoryBarrier(0xb);
        do {
          uVar3 = *puVar7;
          bVar1 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar1);
        *puVar7 = uVar3 | 1;
        DataMemoryBarrier(0xb);
        if ((uVar3 & 2) != 0) goto LAB_00d40a38;
      }
      else if ((*(int *)(uVar5 + 0x1c) != ((int *)*extraout_r2)[1]) ||
              (*(int *)(uVar5 + 0x18) != *(int *)*extraout_r2)) {
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
          goto LAB_00d40a38;
        }
        (**(code **)(*(int *)(uVar5 + 0x18) + 0xc))(*(undefined4 *)(uVar5 + 0x1c));
        goto LAB_00d4096c;
      }
      if (uVar8 != 0) {
        if (*(char *)(iVar6 + 0x38) != '\x01') {
          if (*(char *)(iVar6 + 0x38) == '\x02') goto LAB_00d40a90;
          FUN_015e8e6c(iVar6,FUN_01655ec4);
          *(undefined1 *)(iVar6 + 0x38) = 1;
        }
        *(char *)(iVar6 + 0x31) = cVar9;
        *(undefined1 *)(iVar6 + 0x30) = 1;
        *(undefined1 *)param_1 = 3;
        return;
      }
      goto LAB_00d40a90;
    }
  }
  else {
    uVar8 = 0;
    cVar9 = '\0';
    if (*(char *)(iVar6 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar6,FUN_00bacf28);
      *(undefined1 *)(iVar6 + 0x38) = 1;
      goto LAB_00d408c4;
    }
    uVar3 = *(uint *)(uVar5 + 0x20);
    DataMemoryBarrier(0xb);
    if ((uVar3 & 2) == 0) goto LAB_00d408f8;
LAB_00d40a38:
    uVar3 = (uint)*(byte *)(uVar5 + 8);
    *(undefined1 *)(uVar5 + 8) = 2;
    if (uVar3 != 2) {
      if (uVar3 == 3) {
LAB_00d40a90:
        *(undefined1 *)param_1 = 3;
        return;
      }
      uVar8 = *(uint *)(uVar5 + 0xc);
      uVar5 = (uint)*(uint3 *)(uVar5 + 9);
      piVar4 = (int *)*param_2;
      goto joined_r0x00d40a54;
    }
  }
  uVar3 = 2;
  piVar4 = (int *)*param_2;
joined_r0x00d40a54:
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f2f58(*param_2);
    }
  }
  *param_1 = uVar3 | uVar5 << 8;
  param_1[1] = uVar8;
  *param_2 = 0;
  return;
}

