// FUN_01337f28 @ 01337f28 size=716 calls_out=5 calls_in=30
// strings: assertion failed: amt <= self.limit_within_buf - self.pos_within_buf

void FUN_01337f28(int *param_1,undefined4 param_2,char param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint unaff_r9;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  
  if (param_3 != '\x03') {
    FUN_0132eb90(&local_30,param_4);
    if (local_30 == 4) {
      *param_1 = local_2c;
      param_1[1] = local_28;
      param_1[2] = local_24;
      return;
    }
    FUN_013353bc(param_5,param_2);
                    /* WARNING: Could not recover jumptable at 0x0133816c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_01338170 + *(int *)(&DAT_01338170 + local_30 * 4)))();
    return;
  }
  do {
    iVar3 = *(int *)(param_4 + 0x38);
    uVar2 = *(int *)(param_4 + 0x3c) - iVar3;
    if (*(int *)(param_4 + 0x3c) == iVar3) {
LAB_01337f74:
      FUN_0132d5a8(&local_30,param_4);
      uVar1 = local_28;
      uVar2 = local_24;
      if (local_30 == 0) goto joined_r0x01337fe0;
      if (local_2c != 4) goto LAB_013381c0;
      uVar1 = local_24 & 0xff;
      unaff_r9 = local_28;
    }
    else {
      pcVar5 = (char *)(*(int *)(param_4 + 0x20) + iVar3);
      uVar1 = (uint)*pcVar5;
      if ((int)uVar1 < 0) {
        if (uVar2 < 2) goto LAB_01337f74;
        uVar4 = (uint)pcVar5[1];
        if ((int)uVar4 < 0) {
          if (uVar2 < 10) goto LAB_01337f74;
          uVar1 = uVar1 & 0x7f | (uVar4 & 0x7f) << 7 | ((int)pcVar5[2] & 0x7fU) << 0xe;
          uVar4 = 3;
          if (0x7fffffff < (uint)(int)pcVar5[2]) {
            uVar1 = uVar1 | ((int)pcVar5[3] & 0x7fU) << 0x15;
            uVar4 = 4;
            if (0x7fffffff < (uint)(int)pcVar5[3]) {
              uVar4 = 5;
              uVar1 = uVar1 | (int)pcVar5[4] << 0x1c;
              if (0x7fffffff < (uint)(int)pcVar5[4]) {
                if (pcVar5[5] < '\0') {
                  if (pcVar5[6] < '\0') {
                    if (pcVar5[7] < '\0') {
                      if (pcVar5[8] < '\0') {
                        if (pcVar5[9] < '\0') {
                          local_28 = CONCAT31(local_28._1_3_,4);
                          local_2c = 1;
                          goto LAB_013381c0;
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
      if (uVar2 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: amt <= self.limit_within_buf - self.pos_within_buf",0x44,
                     &DAT_01890e80);
      }
      *(uint *)(param_4 + 0x38) = uVar4 + iVar3;
      uVar2 = local_24;
joined_r0x01337fe0:
      local_24 = uVar1;
      uVar1 = local_24 & 7;
      if ((5 < uVar1) || (local_24 < 8)) {
        local_2c = 1;
        local_28 = unaff_r9 & 0xffffff00 | 2;
LAB_013381c0:
        *(char *)(param_1 + 2) = (char)local_24;
        *(char *)((int)param_1 + 0xb) = (char)(local_24 >> 0x18);
        *param_1 = local_2c;
        param_1[1] = local_28;
        *(short *)((int)param_1 + 9) = (short)(local_24 >> 8);
        return;
      }
      unaff_r9 = local_24 >> 3;
      local_24 = uVar2;
    }
    if (uVar1 == 4) {
      *param_1 = 4;
      return;
    }
    FUN_0132eb90(&local_30,param_4);
    if (local_30 == 4) {
      if (local_2c != 4) {
        param_1[1] = local_28;
        param_1[2] = local_24;
        *param_1 = local_2c;
        return;
      }
    }
    else if ((local_30 == 3) && (local_2c != 0)) {
      thunk_FUN_016d3fb4(local_28);
    }
  } while( true );
}

