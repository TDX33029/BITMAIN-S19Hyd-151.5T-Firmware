// FUN_013d2518 @ 013d2518 size=260 calls_out=2 calls_in=28
// strings: 

uint FUN_013d2518(int *param_1)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint local_14;
  uint *local_10;
  undefined1 *local_c;
  
  uVar1 = param_1[2];
  local_14 = *(uint *)(*param_1 + 0x50);
  if (local_14 != 0) {
    if (local_14 < uVar1) {
      if (-0x41 < *(char *)(param_1[1] + local_14)) goto LAB_013d2570;
    }
    else if (local_14 == uVar1) goto LAB_013d2570;
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac();
  }
LAB_013d2570:
  if (local_14 == uVar1) {
    local_10 = &local_14;
    local_c = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00570dd1,&local_10,&DAT_01894ea8);
  }
  pbVar2 = (byte *)(param_1[1] + local_14);
  uVar1 = (uint)*pbVar2;
  if (-1 < (char)*pbVar2) {
    return uVar1;
  }
  if (uVar1 < 0xe0) {
    return pbVar2[1] & 0x3f | (uVar1 & 0x1f) << 6;
  }
  uVar3 = pbVar2[2] & 0x3f | (pbVar2[1] & 0x3f) << 6;
  if (uVar1 < 0xf0) {
    return uVar3 | (uVar1 & 0x1f) << 0xc;
  }
  return pbVar2[3] & 0x3f | uVar3 << 6 | (uVar1 & 7) << 0x12;
}

