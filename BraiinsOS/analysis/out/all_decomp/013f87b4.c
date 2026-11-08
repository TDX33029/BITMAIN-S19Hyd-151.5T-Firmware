// FUN_013f87b4 @ 013f87b4 size=328 calls_out=2 calls_in=1
// strings: 

void FUN_013f87b4(undefined1 *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int local_1c;
  byte *local_18;
  int local_14;
  
  if (param_3 == 0) {
    *param_1 = 2;
    return;
  }
  bVar1 = *param_2;
  uVar3 = (uint)bVar1;
  if (-1 < (char)bVar1) {
    *(uint *)(param_1 + 4) = uVar3;
    *param_1 = 0;
    return;
  }
  if (0xbf < uVar3) {
    uVar2 = 2;
    if (0xdf < uVar3) {
      uVar2 = 3;
      if (0xef < uVar3) {
        uVar2 = 4;
      }
      if (0xf7 < uVar3) goto LAB_013f8828;
    }
    if (uVar2 <= param_3) {
      FUN_00fab1e0(&local_1c,param_2,uVar2);
      if (local_1c != 0) {
        param_1[1] = bVar1;
        *param_1 = 1;
        return;
      }
      if (local_14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_0189de80);
      }
      uVar3 = (uint)*local_18;
      if (0x7fffffff < (uint)(int)(char)*local_18) {
        if (uVar3 < 0xe0) {
          uVar3 = local_18[1] & 0x3f | (uVar3 & 0x1f) << 6;
        }
        else {
          uVar2 = local_18[2] & 0x3f | (local_18[1] & 0x3f) << 6;
          if (uVar3 < 0xf0) {
            uVar3 = uVar2 | (uVar3 & 0x1f) << 0xc;
          }
          else {
            uVar3 = local_18[3] & 0x3f | uVar2 << 6 | (uVar3 & 7) << 0x12;
          }
        }
      }
      *(uint *)(param_1 + 4) = uVar3;
      *param_1 = 0;
      return;
    }
  }
LAB_013f8828:
  param_1[1] = bVar1;
  *param_1 = 1;
  return;
}

