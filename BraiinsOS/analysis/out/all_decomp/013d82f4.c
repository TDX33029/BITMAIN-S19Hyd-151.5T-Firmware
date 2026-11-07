// FUN_013d82f4 @ 013d82f4 size=296 calls_out=2 calls_in=2
// strings: 

undefined1 * FUN_013d82f4(int *param_1)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  puVar4 = &DAT_00110000;
  uVar5 = param_1[2];
  uVar7 = *(uint *)(*param_1 + 0x50);
  if (uVar7 != uVar5) {
    iVar6 = param_1[1];
    uVar1 = FUN_013d2518();
    iVar3 = 1;
    if (0x7f < uVar1) {
      iVar3 = 2;
    }
    if ((0x7ff < uVar1) && (iVar3 = 4, uVar1 < 0x10000)) {
      iVar3 = 3;
    }
    uVar7 = iVar3 + uVar7;
    if (uVar7 != 0) {
      if (uVar7 < uVar5) {
        if (*(char *)(iVar6 + uVar7) < -0x40) {
LAB_013d8400:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(iVar6,uVar5,uVar7,uVar5,&DAT_01894e78);
        }
      }
      else if (uVar7 != uVar5) goto LAB_013d8400;
    }
    if (uVar7 != uVar5) {
      pbVar2 = (byte *)(iVar6 + uVar7);
      puVar4 = (undefined1 *)(uint)*pbVar2;
      if ((char)*pbVar2 < '\0') {
        if (puVar4 < (undefined1 *)0xe0) {
          return (undefined1 *)(pbVar2[1] & 0x3f | ((uint)puVar4 & 0x1f) << 6);
        }
        uVar7 = pbVar2[2] & 0x3f | (pbVar2[1] & 0x3f) << 6;
        if (puVar4 < &DAT_000000f0) {
          return (undefined1 *)(uVar7 | ((uint)puVar4 & 0x1f) << 0xc);
        }
        return (undefined1 *)(pbVar2[3] & 0x3f | uVar7 << 6 | ((uint)puVar4 & 7) << 0x12);
      }
    }
  }
  return puVar4;
}

