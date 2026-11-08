// FUN_016d4a28 @ 016d4a28 size=248 calls_out=2 calls_in=29
// strings: 

undefined1 * FUN_016d4a28(int *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  byte *pbVar3;
  uint local_14;
  uint *local_10;
  code *local_c;
  
  uVar2 = param_1[2];
  local_14 = *(uint *)(*param_1 + 0x50);
  if (local_14 != 0) {
    if (local_14 < uVar2) {
      if (*(char *)(param_1[1] + local_14) < -0x40) {
LAB_016d4a68:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514();
      }
    }
    else if (local_14 != uVar2) goto LAB_016d4a68;
  }
  if (local_14 == uVar2) {
LAB_016d4ae0:
    local_10 = &local_14;
    local_c = FUN_012fd02c;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00575961,&local_10,&DAT_01d0a0c8);
  }
  pbVar3 = (byte *)(param_1[1] + local_14);
  puVar1 = (undefined1 *)(uint)*pbVar3;
  if (0x7fffffff < (uint)(int)(char)*pbVar3) {
    if (puVar1 < (undefined1 *)0xe0) {
      puVar1 = (undefined1 *)(pbVar3[1] & 0x3f | ((uint)puVar1 & 0x1f) << 6);
    }
    else {
      uVar2 = pbVar3[2] & 0x3f | (pbVar3[1] & 0x3f) << 6;
      if (puVar1 < (undefined1 *)0xf0) {
        puVar1 = (undefined1 *)(uVar2 | ((uint)puVar1 & 0x1f) << 0xc);
      }
      else {
        puVar1 = (undefined1 *)(pbVar3[3] & 0x3f | uVar2 << 6 | ((uint)puVar1 & 7) << 0x12);
        if (puVar1 == &DAT_00110000) goto LAB_016d4ae0;
      }
    }
  }
  return puVar1;
}

