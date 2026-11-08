// FUN_0162b5e8 @ 0162b5e8 size=452 calls_out=6 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0162b5e8(uint *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r2;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 in_stack_00000000;
  int *local_28;
  undefined1 local_24;
  
  uVar9 = thunk_FUN_016de0ee(param_1,0x2a8,0);
  *(undefined4 *)((int)uVar9 + (int)((ulonglong)uVar9 >> 0x20)) = extraout_r2;
  *(undefined1 *)(param_1 + 1) = 2;
  DataMemoryBarrier(0xb);
  if (DAT_018d90b4 != 2) {
    FUN_0162b594();
  }
  do {
    if (DAT_018d90bc != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(&DAT_018d90bc);
      goto LAB_0162b648;
    }
    bVar1 = (bool)hasExclusiveAccess(0x18d90bc);
  } while (!bVar1);
  DAT_018d90bc = 1;
  DataMemoryBarrier(0xb);
LAB_0162b648:
  uVar8 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    uVar8 = FUN_015bf3f8();
    uVar8 = uVar8 ^ 1;
  }
  uVar6 = DAT_018d90cc;
  if (DAT_018d90c0 != '\0') {
    local_24 = (undefined1)uVar8;
    local_28 = &DAT_018d90bc;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_018ac32c,&DAT_018ac33c);
  }
  uVar7 = *param_1;
  if (DAT_018d90cc == DAT_018d90c4) {
    FUN_0162b7ec();
  }
  iVar2 = DAT_018d90c8;
  DAT_018d90cc = uVar6 + 1;
  *(uint *)(DAT_018d90c8 + uVar6 * 4) = uVar7;
  if (uVar6 == 0) {
    uVar3 = 0;
  }
  else {
    do {
      uVar4 = uVar6 - 1;
      uVar3 = uVar4 >> 1;
      uVar5 = *(uint *)(iVar2 + uVar3 * 4);
      if (uVar5 <= uVar7) {
        *(uint *)(iVar2 + uVar6 * 4) = uVar7;
        if (uVar8 != 0) goto LAB_0162b6fc;
        goto LAB_0162b6ec;
      }
      *(uint *)(iVar2 + uVar6 * 4) = uVar5;
      uVar6 = uVar3;
    } while (1 < uVar4);
  }
  *(uint *)(iVar2 + uVar3 * 4) = uVar7;
  if (uVar8 == 0) {
LAB_0162b6ec:
    if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar2 = FUN_015bf3f8(), iVar2 == 0)) {
      DAT_018d90c0 = '\x01';
    }
  }
LAB_0162b6fc:
  iVar2 = DAT_018d90bc;
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(0x18d90bc);
  } while (!bVar1);
  DAT_018d90bc = 0;
  if (iVar2 == 2) {
    software_interrupt(0);
    FUN_016d3496(&DAT_018d90bc,0x81,1,in_stack_00000000);
    return;
  }
  return;
}

