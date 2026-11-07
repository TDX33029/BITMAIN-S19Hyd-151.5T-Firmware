// FUN_0132d400 @ 0132d400 size=416 calls_out=2 calls_in=10
// strings: assertion failed: amt <= self.limit_within_buf - self.pos_within_buf

void FUN_0132d400(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  
  iVar2 = *(int *)(param_2 + 0x38);
  uVar4 = *(int *)(param_2 + 0x3c) - iVar2;
  if (*(int *)(param_2 + 0x3c) == iVar2) {
LAB_0132d418:
    FUN_0132d5a8(&local_20);
    if (local_20 == 1) {
LAB_0132d434:
      param_1[1] = local_18;
      param_1[2] = local_14;
      *param_1 = local_1c;
      return;
    }
    uVar1 = local_18;
  }
  else {
    pcVar5 = (char *)(*(int *)(param_2 + 0x20) + iVar2);
    uVar1 = (uint)*pcVar5;
    if ((int)uVar1 < 0) {
      if (uVar4 < 2) goto LAB_0132d418;
      uVar3 = (uint)pcVar5[1];
      if ((int)uVar3 < 0) {
        if (uVar4 < 10) goto LAB_0132d418;
        uVar1 = uVar1 & 0x7f | (uVar3 & 0x7f) << 7 | ((int)pcVar5[2] & 0x7fU) << 0xe;
        uVar3 = 3;
        if (0x7fffffff < (uint)(int)pcVar5[2]) {
          uVar1 = uVar1 | ((int)pcVar5[3] & 0x7fU) << 0x15;
          uVar3 = 4;
          if (0x7fffffff < (uint)(int)pcVar5[3]) {
            uVar3 = 5;
            uVar1 = uVar1 | (int)pcVar5[4] << 0x1c;
            if (0x7fffffff < (uint)(int)pcVar5[4]) {
              if (pcVar5[5] < '\0') {
                if (pcVar5[6] < '\0') {
                  if (pcVar5[7] < '\0') {
                    if (pcVar5[8] < '\0') {
                      if (pcVar5[9] < '\0') {
                        local_18 = CONCAT31(local_18._1_3_,4);
                        local_1c = 1;
                        local_14 = param_2;
                        goto LAB_0132d434;
                      }
                      uVar3 = 10;
                    }
                    else {
                      uVar3 = 9;
                    }
                  }
                  else {
                    uVar3 = 8;
                  }
                }
                else {
                  uVar3 = 7;
                }
              }
              else {
                uVar3 = 6;
              }
            }
          }
        }
      }
      else {
        uVar1 = uVar1 & 0x7f | uVar3 << 7;
        uVar3 = 2;
      }
    }
    else {
      uVar3 = 1;
    }
    if (uVar4 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: amt <= self.limit_within_buf - self.pos_within_buf",0x44,
                   &DAT_01890e80);
    }
    *(uint *)(param_2 + 0x38) = uVar3 + iVar2;
  }
  *(bool *)(param_1 + 1) = uVar1 != 0;
  *param_1 = 4;
  return;
}

