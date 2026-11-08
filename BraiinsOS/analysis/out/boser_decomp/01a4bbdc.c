// FUN_01a4bbdc @ 01a4bbdc size=552 calls_out=5 calls_in=2
// strings: assertion failed: indices.capacity() - indices.len() >= entries.len()value is out of rangerecursion limit exceeded

void FUN_01a4bbdc(int param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  if (1 < uVar2) {
    iVar6 = *(int *)(param_1 + 0x14);
    if (uVar2 < 0x15) {
      iVar9 = 0xc0;
      do {
        FUN_01a4cb48(iVar6,iVar6 + iVar9);
        iVar9 = iVar9 + 0xc0;
      } while (uVar2 * 0xc0 != iVar9);
    }
    else {
      FUN_01a4d12c(iVar6);
    }
  }
  FUN_01a4b454();
  uVar2 = *(uint *)(param_1 + 0x18);
  if (*(uint *)(param_1 + 0x24) < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: indices.capacity() - indices.len() >= entries.len()value is out of rangerecursion limit exceeded"
                 ,0x45,&DAT_01d2c0f4);
  }
  if (uVar2 != 0) {
    iVar6 = *(int *)(param_1 + 0x14);
    iVar9 = iVar6 + uVar2 * 0xc0;
    do {
      uVar4 = *(uint *)(param_1 + 0x20);
      uVar8 = *(uint *)(iVar6 + 0xb8);
      puVar1 = *(uint **)(param_1 + 0x1c);
      uVar2 = uVar4 & uVar8;
      uVar10 = *(uint *)(param_1 + 0x28);
      uVar5 = *(uint *)((int)puVar1 + uVar2) & 0x80808080;
      if (uVar5 == 0) {
        iVar7 = 4;
        do {
          uVar2 = uVar2 + iVar7;
          iVar7 = iVar7 + 4;
          uVar2 = uVar2 & uVar4;
          uVar5 = *(uint *)((int)puVar1 + uVar2) & 0x80808080;
        } while (uVar5 == 0);
      }
      uVar2 = uVar2 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                     (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar4;
      bVar3 = *(byte *)((int)puVar1 + uVar2);
      if (-1 < (char)bVar3) {
        uVar2 = *puVar1 & 0x80808080;
        uVar2 = LZCOUNT((*puVar1 & 0x80) << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                        (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18);
        bVar3 = *(byte *)((int)puVar1 + (uVar2 >> 3));
        uVar2 = uVar2 >> 3;
      }
      uVar5 = bVar3 & 1;
      if ((*(int *)(param_1 + 0x24) == 0) && (uVar5 = 0, (bVar3 & 1) != 0)) {
        FUN_01a52ea4(param_1 + 0x1c);
        uVar4 = *(uint *)(param_1 + 0x20);
        puVar1 = *(uint **)(param_1 + 0x1c);
        uVar2 = uVar4 & uVar8;
        uVar5 = *(uint *)((int)puVar1 + uVar2) & 0x80808080;
        if (uVar5 == 0) {
          iVar7 = 4;
          do {
            uVar2 = uVar2 + iVar7;
            iVar7 = iVar7 + 4;
            uVar2 = uVar2 & uVar4;
            uVar5 = *(uint *)((int)puVar1 + uVar2) & 0x80808080;
          } while (uVar5 == 0);
        }
        uVar2 = uVar2 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                       (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar4;
        uVar5 = (uint)*(char *)((int)puVar1 + uVar2);
        if (-1 < (int)uVar5) {
          uVar2 = *puVar1 & 0x80808080;
          uVar2 = LZCOUNT((*puVar1 & 0x80) << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                          (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18);
          uVar5 = (uint)*(byte *)((int)puVar1 + (uVar2 >> 3));
          uVar2 = uVar2 >> 3;
        }
        iVar7 = *(int *)(param_1 + 0x24) - (uVar5 & 1);
      }
      else {
        iVar7 = *(int *)(param_1 + 0x24) - uVar5;
      }
      bVar3 = (byte)(uVar8 >> 0x19);
      *(byte *)((int)puVar1 + uVar2) = bVar3;
      *(int *)(param_1 + 0x24) = iVar7;
      iVar6 = iVar6 + 0xc0;
      *(byte *)((int)puVar1 + (uVar2 - 4 & uVar4) + 4) = bVar3;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      puVar1[-1 - uVar2] = uVar10;
    } while (iVar6 != iVar9);
  }
  return;
}

