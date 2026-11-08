// FUN_016831f8 @ 016831f8 size=480 calls_out=6 calls_in=2
// strings: 

void FUN_016831f8(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  
  iVar6 = *(int *)(param_1 + 4);
  uVar7 = *(uint *)(param_1 + 8);
  if (1 < uVar7) {
    if (uVar7 < 0x15) {
      FUN_01670444();
    }
    else {
      FUN_0168274c(iVar6,uVar7);
    }
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar3 = *(uint *)(param_1 + 0x14);
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x10);
    uVar3 = 0;
    if (uVar5 != 0) {
      FUN_016dd606(*(undefined4 *)(param_1 + 0xc),0xff,uVar5 + 5);
      if (7 < uVar5) {
        uVar5 = (uVar5 + 1 & 0xfffffff8) - (uVar5 + 1 >> 3);
      }
      uVar3 = uVar5;
    }
    *(uint *)(param_1 + 0x14) = uVar3;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (uVar3 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00414587,0x45,&DAT_018adc18);
  }
  if (uVar7 != 0) {
    iVar9 = iVar6 + uVar7 * 0xc0;
    do {
      uVar5 = *(uint *)(iVar6 + 0xb8);
      puVar10 = *(uint **)(param_1 + 0xc);
      uVar11 = *(uint *)(param_1 + 0x10);
      uVar7 = uVar11 & uVar5;
      uVar8 = *(uint *)(param_1 + 0x18);
      uVar3 = *(uint *)((int)puVar10 + uVar7) & 0x80808080;
      if (uVar3 == 0) {
        iVar4 = 4;
        do {
          uVar7 = uVar7 + iVar4;
          iVar4 = iVar4 + 4;
          uVar7 = uVar7 & uVar11;
          uVar3 = *(uint *)((int)puVar10 + uVar7) & 0x80808080;
        } while (uVar3 == 0);
      }
      uVar7 = uVar7 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                     (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar11;
      bVar1 = *(byte *)((int)puVar10 + uVar7);
      uVar3 = uVar8;
      if ((char)bVar1 < '\0') {
        iVar4 = *(int *)(param_1 + 0x14);
        uVar2 = bVar1 & 1;
        if ((bVar1 & 1) != 0) goto LAB_01683308;
      }
      else {
        uVar7 = *puVar10 & 0x80808080;
        uVar7 = LZCOUNT((*puVar10 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                        (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18);
        bVar1 = *(byte *)((int)puVar10 + (uVar7 >> 3));
        uVar7 = uVar7 >> 3;
        iVar4 = *(int *)(param_1 + 0x14);
        uVar2 = bVar1 & 1;
        if ((bVar1 & 1) != 0) {
LAB_01683308:
          if (iVar4 == 0) {
            FUN_0167c81c(param_1 + 0xc);
            puVar10 = *(uint **)(param_1 + 0xc);
            uVar11 = *(uint *)(param_1 + 0x10);
            uVar7 = FUN_01021d34(puVar10,uVar11,uVar5,0);
            iVar4 = *(int *)(param_1 + 0x14);
            uVar2 = *(byte *)((int)puVar10 + uVar7) & 1;
            uVar3 = *(uint *)(param_1 + 0x18);
          }
        }
      }
      iVar6 = iVar6 + 0xc0;
      bVar1 = (byte)(uVar5 >> 0x19);
      *(byte *)((int)puVar10 + uVar7) = bVar1;
      *(uint *)(param_1 + 0x14) = iVar4 - uVar2;
      *(uint *)(param_1 + 0x18) = uVar3 + 1;
      *(byte *)((int)puVar10 + (uVar7 - 4 & uVar11) + 4) = bVar1;
      puVar10[-1 - uVar7] = uVar8;
    } while (iVar6 != iVar9);
  }
  return;
}

