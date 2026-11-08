// FUN_0132e394 @ 0132e394 size=416 calls_out=2 calls_in=9
// strings: assertion failed: amt <= self.limit_within_buf - self.pos_within_buf

void FUN_0132e394(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = *(int *)(param_2 + 0x38);
  uVar5 = *(int *)(param_2 + 0x3c) - iVar1;
  if (*(int *)(param_2 + 0x3c) != iVar1) {
    pcVar4 = (char *)(*(int *)(param_2 + 0x20) + iVar1);
    uVar3 = (uint)*pcVar4;
    if (-1 < (int)uVar3) {
      uVar2 = 1;
      goto LAB_0132e3f8;
    }
    if (1 < uVar5) {
      uVar2 = (uint)pcVar4[1];
      if (-1 < (int)uVar2) {
        uVar3 = uVar3 & 0x7f | uVar2 << 7;
        uVar2 = 2;
        goto LAB_0132e3f8;
      }
      if (9 < uVar5) {
        uVar3 = uVar3 & 0x7f | (uVar2 & 0x7f) << 7 | ((int)pcVar4[2] & 0x7fU) << 0xe;
        uVar2 = 3;
        if ((uint)(int)pcVar4[2] < 0x80000000) {
LAB_0132e3f8:
          if (uVar5 < uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464("assertion failed: amt <= self.limit_within_buf - self.pos_within_buf",0x44
                         ,&DAT_01890e80);
          }
          *(uint *)(param_2 + 0x38) = uVar2 + iVar1;
          *param_1 = 4;
          param_1[1] = uVar3;
          return;
        }
        uVar3 = uVar3 | ((int)pcVar4[3] & 0x7fU) << 0x15;
        uVar2 = 4;
        if ((uint)(int)pcVar4[3] < 0x80000000) goto LAB_0132e3f8;
        uVar2 = 5;
        uVar3 = uVar3 | (int)pcVar4[4] << 0x1c;
        if ((uint)(int)pcVar4[4] < 0x80000000) goto LAB_0132e3f8;
        if (-1 < pcVar4[5]) {
          uVar2 = 6;
          goto LAB_0132e3f8;
        }
        if (-1 < pcVar4[6]) {
          uVar2 = 7;
          goto LAB_0132e3f8;
        }
        if (-1 < pcVar4[7]) {
          uVar2 = 8;
          goto LAB_0132e3f8;
        }
        if (-1 < pcVar4[8]) {
          uVar2 = 9;
          goto LAB_0132e3f8;
        }
        if (-1 < pcVar4[9]) {
          uVar2 = 10;
          goto LAB_0132e3f8;
        }
        local_14 = 4;
        local_1c = 1;
        local_18 = CONCAT31(local_18._1_3_,4);
        goto LAB_0132e3cc;
      }
    }
  }
  FUN_0132d5a8(&local_20);
  if (local_20 != 1) {
    *param_1 = 4;
    param_1[1] = local_18;
    return;
  }
LAB_0132e3cc:
  param_1[2] = local_14;
  *param_1 = local_1c;
  param_1[1] = local_18;
  return;
}

