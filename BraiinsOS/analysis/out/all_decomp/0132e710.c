// FUN_0132e710 @ 0132e710 size=400 calls_out=2 calls_in=4
// strings: assertion failed: amt <= self.limit_within_buf - self.pos_within_buf

void FUN_0132e710(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_2 + 0x38);
  uVar2 = *(int *)(param_2 + 0x3c) - iVar1;
  if (*(int *)(param_2 + 0x3c) == iVar1) {
LAB_0132e720:
    FUN_0132d5a8();
    return;
  }
  pcVar4 = (char *)(*(int *)(param_2 + 0x20) + iVar1);
  uVar3 = (uint)*pcVar4;
  if ((int)uVar3 < 0) {
    if (uVar2 < 2) goto LAB_0132e720;
    uVar5 = (uint)pcVar4[1];
    if ((int)uVar5 < 0) {
      if (uVar2 < 10) goto LAB_0132e720;
      uVar6 = 0;
      uVar3 = uVar3 & 0x7f | (uVar5 & 0x7f) << 7 | ((int)pcVar4[2] & 0x7fU) << 0xe;
      uVar5 = 3;
      if (0x7fffffff < (uint)(int)pcVar4[2]) {
        uVar3 = uVar3 | ((int)pcVar4[3] & 0x7fU) << 0x15;
        uVar5 = 4;
        if (0x7fffffff < (uint)(int)pcVar4[3]) {
          uVar5 = (uint)pcVar4[4];
          uVar3 = uVar3 | uVar5 << 0x1c;
          uVar6 = (uVar5 & 0x7f) >> 4;
          if ((int)uVar5 < 0) {
            uVar6 = uVar6 | ((int)pcVar4[5] & 0x7fU) << 3;
            uVar5 = 6;
            if (0x7fffffff < (uint)(int)pcVar4[5]) {
              uVar6 = uVar6 | ((int)pcVar4[6] & 0x7fU) << 10;
              uVar5 = 7;
              if (0x7fffffff < (uint)(int)pcVar4[6]) {
                uVar6 = uVar6 | ((int)pcVar4[7] & 0x7fU) << 0x11;
                uVar5 = 8;
                if (0x7fffffff < (uint)(int)pcVar4[7]) {
                  uVar6 = uVar6 | ((int)pcVar4[8] & 0x7fU) << 0x18;
                  uVar5 = 9;
                  if (0x7fffffff < (uint)(int)pcVar4[8]) {
                    if (pcVar4[9] < 0) {
                      *(undefined1 *)(param_1 + 2) = 4;
                      *param_1 = 1;
                      param_1[1] = 1;
                      return;
                    }
                    uVar6 = uVar6 | (int)pcVar4[9] << 0x1f;
                    uVar5 = 10;
                  }
                }
              }
            }
          }
          else {
            uVar5 = 5;
          }
        }
      }
    }
    else {
      uVar6 = ((int)uVar5 >> 0x1f) << 7 | uVar5 >> 0x19;
      uVar3 = uVar3 & 0x7f | uVar5 << 7;
      uVar5 = 2;
    }
  }
  else {
    uVar6 = (int)uVar3 >> 0x1f;
    uVar5 = 1;
  }
  if (uVar2 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: amt <= self.limit_within_buf - self.pos_within_buf",0x44,
                 &DAT_01890e80);
  }
  *(uint *)(param_2 + 0x38) = uVar5 + iVar1;
  param_1[2] = uVar3;
  *param_1 = 0;
  param_1[3] = uVar6;
  return;
}

