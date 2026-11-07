// FUN_016f33c8 @ 016f33c8 size=288 calls_out=2 calls_in=1
// strings: 

void FUN_016f33c8(undefined1 *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int local_1c;
  byte *local_18;
  int local_14;
  
  if (param_3 == 0) {
    uVar2 = 2;
    goto LAB_016f34c8;
  }
  bVar1 = *param_2;
  uVar5 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    if (0xbf < uVar5) {
      uVar4 = 2;
      if (0xdf < uVar5) {
        uVar4 = 3;
      }
      if (uVar5 < 0xf0) {
        if (uVar4 <= param_3) {
LAB_016f3424:
          FUN_012fbd94(&local_1c,param_2,uVar4);
          if (local_1c == 0) {
            if (local_14 == 0) {
LAB_016f34a0:
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01d13158);
            }
            puVar3 = (undefined1 *)(uint)*local_18;
            if (0x7fffffff < (uint)(int)(char)*local_18) {
              if (puVar3 < (undefined1 *)0xe0) {
                puVar3 = (undefined1 *)(local_18[1] & 0x3f | ((uint)puVar3 & 0x1f) << 6);
              }
              else {
                uVar5 = local_18[2] & 0x3f | (local_18[1] & 0x3f) << 6;
                if (puVar3 < (undefined1 *)0xf0) {
                  puVar3 = (undefined1 *)(uVar5 | ((uint)puVar3 & 0x1f) << 0xc);
                }
                else {
                  puVar3 = (undefined1 *)
                           (local_18[3] & 0x3f | uVar5 << 6 | ((uint)puVar3 & 7) << 0x12);
                  if (puVar3 == &DAT_00110000) goto LAB_016f34a0;
                }
              }
            }
            *(undefined1 **)(param_1 + 4) = puVar3;
            goto LAB_016f33f0;
          }
        }
      }
      else if ((uVar5 < 0xf8) && (uVar4 = 4, 3 < param_3)) goto LAB_016f3424;
    }
    uVar2 = 1;
    param_1[1] = bVar1;
  }
  else {
    *(uint *)(param_1 + 4) = uVar5;
LAB_016f33f0:
    uVar2 = 0;
  }
LAB_016f34c8:
  *param_1 = uVar2;
  return;
}

