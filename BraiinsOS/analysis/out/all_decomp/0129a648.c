// FUN_0129a648 @ 0129a648 size=468 calls_out=2 calls_in=30
// strings: assertion failed: amt <= self.limit_within_buf - self.pos_within_buf

void FUN_0129a648(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  
  iVar3 = *(int *)(param_2 + 0x38);
  uVar5 = *(int *)(param_2 + 0x3c) - iVar3;
  if (*(int *)(param_2 + 0x3c) == iVar3) {
LAB_0129a660:
    FUN_0132d5a8(&local_20);
    if (local_20 == 1) {
LAB_0129a67c:
      *param_1 = local_1c;
      param_1[1] = local_18;
      param_1[2] = local_14;
      return;
    }
    uVar5 = local_18 & 7;
    uVar2 = (undefined1)uVar5;
  }
  else {
    pcVar6 = (char *)(*(int *)(param_2 + 0x20) + iVar3);
    uVar1 = (uint)*pcVar6;
    if ((int)uVar1 < 0) {
      if (uVar5 < 2) goto LAB_0129a660;
      uVar4 = (uint)pcVar6[1];
      if ((int)uVar4 < 0) {
        if (uVar5 < 10) goto LAB_0129a660;
        uVar1 = uVar1 & 0x7f | (uVar4 & 0x7f) << 7 | ((int)pcVar6[2] & 0x7fU) << 0xe;
        uVar4 = 3;
        if (0x7fffffff < (uint)(int)pcVar6[2]) {
          uVar1 = uVar1 | ((int)pcVar6[3] & 0x7fU) << 0x15;
          uVar4 = 4;
          if (0x7fffffff < (uint)(int)pcVar6[3]) {
            uVar4 = 5;
            uVar1 = uVar1 | (int)pcVar6[4] << 0x1c;
            if (0x7fffffff < (uint)(int)pcVar6[4]) {
              if (pcVar6[5] < '\0') {
                if (pcVar6[6] < '\0') {
                  if (pcVar6[7] < '\0') {
                    if (pcVar6[8] < '\0') {
                      if (pcVar6[9] < '\0') {
                        local_14 = 4;
                        local_1c = 1;
                        local_18 = CONCAT31(local_18._1_3_,4);
                        goto LAB_0129a67c;
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
        uVar1 = uVar1 & 0x7f | uVar4 << 7;
        uVar4 = 2;
      }
    }
    else {
      uVar4 = 1;
    }
    if (uVar5 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: amt <= self.limit_within_buf - self.pos_within_buf",0x44,
                   &DAT_01890e80);
    }
    *(uint *)(param_2 + 0x38) = uVar4 + iVar3;
    uVar5 = uVar1 & 7;
    uVar2 = (undefined1)uVar5;
    local_18 = uVar1;
  }
  if ((uVar5 < 6) && (7 < local_18)) {
    *(undefined1 *)(param_1 + 2) = uVar2;
    *param_1 = 4;
    param_1[1] = local_18 >> 3;
    return;
  }
  param_1[2] = local_18;
  *(undefined1 *)(param_1 + 1) = 2;
  *param_1 = 1;
  return;
}

