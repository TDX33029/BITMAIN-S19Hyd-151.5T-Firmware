// FUN_0132e53c @ 0132e53c size=460 calls_out=2 calls_in=2
// strings: assertion failed: amt <= self.limit_within_buf - self.pos_within_buf

void FUN_0132e53c(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  
  iVar2 = *(int *)(param_2 + 0x38);
  uVar3 = *(int *)(param_2 + 0x3c) - iVar2;
  if (*(int *)(param_2 + 0x3c) == iVar2) {
LAB_0132e554:
    FUN_0132d5a8(&local_28);
    if (local_28 != 0) {
LAB_0132e568:
      param_1[1] = local_24;
      param_1[2] = local_20;
      param_1[3] = local_1c;
      *param_1 = 1;
      return;
    }
    uVar1 = local_20;
    uVar6 = local_1c;
  }
  else {
    pcVar4 = (char *)(*(int *)(param_2 + 0x20) + iVar2);
    uVar1 = (uint)*pcVar4;
    if ((int)uVar1 < 0) {
      if (uVar3 < 2) goto LAB_0132e554;
      uVar5 = (uint)pcVar4[1];
      if ((int)uVar5 < 0) {
        if (uVar3 < 10) goto LAB_0132e554;
        uVar6 = 0;
        uVar1 = uVar1 & 0x7f | (uVar5 & 0x7f) << 7 | ((int)pcVar4[2] & 0x7fU) << 0xe;
        uVar5 = 3;
        if (0x7fffffff < (uint)(int)pcVar4[2]) {
          uVar1 = uVar1 | ((int)pcVar4[3] & 0x7fU) << 0x15;
          uVar5 = 4;
          if (0x7fffffff < (uint)(int)pcVar4[3]) {
            uVar5 = (uint)pcVar4[4];
            uVar1 = uVar1 | uVar5 << 0x1c;
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
                        local_20 = CONCAT31(local_20._1_3_,4);
                        local_24 = 1;
                        goto LAB_0132e568;
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
        uVar1 = uVar1 & 0x7f | uVar5 << 7;
        uVar5 = 2;
      }
    }
    else {
      uVar6 = (int)uVar1 >> 0x1f;
      uVar5 = 1;
    }
    if (uVar3 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: amt <= self.limit_within_buf - self.pos_within_buf",0x44,
                   &DAT_01890e80);
    }
    *(uint *)(param_2 + 0x38) = uVar5 + iVar2;
  }
  param_1[2] = uVar1;
  param_1[3] = uVar6;
  *param_1 = 0;
  return;
}

