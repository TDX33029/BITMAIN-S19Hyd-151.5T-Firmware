// FUN_0132d908 @ 0132d908 size=456 calls_out=3 calls_in=2
// strings: assertion failed: amt <= self.limit_within_buf - self.pos_within_buf

void FUN_0132d908(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  
  iVar1 = *(int *)(param_2 + 0x38);
  uVar3 = *(int *)(param_2 + 0x3c) - iVar1;
  if (*(int *)(param_2 + 0x3c) == iVar1) {
LAB_0132d928:
    FUN_0132d5a8(&local_28);
    if (local_28 == 1) {
LAB_0132d948:
      *param_1 = local_24;
      param_1[1] = local_20;
      param_1[2] = local_1c;
      return;
    }
    uVar2 = local_20;
  }
  else {
    pcVar5 = (char *)(*(int *)(param_2 + 0x20) + iVar1);
    uVar2 = (uint)*pcVar5;
    if ((int)uVar2 < 0) {
      if (uVar3 < 2) goto LAB_0132d928;
      uVar4 = (uint)pcVar5[1];
      if ((int)uVar4 < 0) {
        if (uVar3 < 10) goto LAB_0132d928;
        uVar2 = uVar2 & 0x7f | (uVar4 & 0x7f) << 7 | ((int)pcVar5[2] & 0x7fU) << 0xe;
        uVar4 = 3;
        if (0x7fffffff < (uint)(int)pcVar5[2]) {
          uVar2 = uVar2 | ((int)pcVar5[3] & 0x7fU) << 0x15;
          uVar4 = 4;
          if (0x7fffffff < (uint)(int)pcVar5[3]) {
            uVar4 = 5;
            uVar2 = uVar2 | (int)pcVar5[4] << 0x1c;
            if (0x7fffffff < (uint)(int)pcVar5[4]) {
              if (pcVar5[5] < '\0') {
                if (pcVar5[6] < '\0') {
                  if (pcVar5[7] < '\0') {
                    if (pcVar5[8] < '\0') {
                      if (pcVar5[9] < '\0') {
                        local_1c = 4;
                        local_24 = 1;
                        local_20 = CONCAT31(local_20._1_3_,4);
                        goto LAB_0132d948;
                      }
                      uVar4 = 10;
                    }
                    else {
                      uVar4 = 9;
                    }
                  }
                  else {
                    uVar4 = 8;
                  }
                }
                else {
                  uVar4 = 7;
                }
              }
              else {
                uVar4 = 6;
              }
            }
          }
        }
      }
      else {
        uVar2 = uVar2 & 0x7f | uVar4 << 7;
        uVar4 = 2;
      }
    }
    else {
      uVar4 = 1;
    }
    if (uVar3 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: amt <= self.limit_within_buf - self.pos_within_buf",0x44,
                   &DAT_01890e80);
    }
    *(uint *)(param_2 + 0x38) = uVar4 + iVar1;
  }
  FUN_0132dad8(&local_28,param_2,uVar2,param_3);
  if (local_28 == 4) {
    *param_1 = 4;
    return;
  }
  *param_1 = local_28;
  param_1[1] = local_24;
  param_1[2] = local_20;
  return;
}

