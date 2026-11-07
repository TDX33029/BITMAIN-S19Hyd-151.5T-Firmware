// FUN_0075d034 @ 0075d034 size=460 calls_out=4 calls_in=3
// strings: 

void FUN_0075d034(uint *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  local_38 = *(int *)(param_2 + 0x60);
  iVar3 = *(int *)(param_2 + 100);
  *(undefined1 *)(param_2 + 0x6d) = 0;
  if ((uint)(iVar3 - local_38) < *(uint *)(param_2 + 0x54)) {
    FUN_00f5f538(param_2 + 0x5c);
    local_38 = *(int *)(param_2 + 0x60);
    iVar3 = *(int *)(param_2 + 100);
  }
  if (iVar3 == local_38) {
    FUN_00f5f538(param_2 + 0x5c,0x40);
    local_38 = *(int *)(param_2 + 0x60);
    iVar3 = *(int *)(param_2 + 100);
  }
  local_2c = 0;
  local_30 = 0;
  local_34 = iVar3 - local_38;
  local_38 = *(int *)(param_2 + 0x5c) + local_38;
  FUN_0075d204(&local_28,param_2,param_3,&local_38);
  if ((local_28 & 0xff) != 4) {
    if ((local_28 & 0xff) == 5) {
      *(undefined1 *)param_1 = 5;
      *(undefined1 *)(param_2 + 0x6d) = 1;
      return;
    }
    *param_1 = local_28;
    param_1[1] = local_24;
    return;
  }
  if (local_34 < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,local_30,local_34,&DAT_018a69b0);
  }
  local_1c = *(int *)(param_2 + 100) - *(int *)(param_2 + 0x60);
  if (local_1c < local_30) {
    local_20 = local_30;
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&local_20);
  }
  *(uint *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + local_30;
  if (*(char *)(param_2 + 0x50) == '\0') {
    uVar2 = *(uint *)(param_2 + 0x54);
    if (local_30 < uVar2) {
      uVar2 = (0xffffffffU >> (LZCOUNT(uVar2) + 2U & 0x1f)) + 1;
      if (local_30 < uVar2) {
        if (*(char *)(param_2 + 0x51) != '\0') {
          if (uVar2 < 0x2001) {
            uVar2 = 0x2000;
          }
          *(undefined1 *)(param_2 + 0x51) = 0;
          *(uint *)(param_2 + 0x54) = uVar2;
          goto LAB_0075d1cc;
        }
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
      *(undefined1 *)(param_2 + 0x51) = uVar1;
    }
    else {
      if ((int)uVar2 < 0) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = uVar2 << 1;
      }
      if (*(uint *)(param_2 + 0x58) < uVar2) {
        uVar2 = *(uint *)(param_2 + 0x58);
      }
      *(undefined1 *)(param_2 + 0x51) = 0;
      *(uint *)(param_2 + 0x54) = uVar2;
    }
  }
LAB_0075d1cc:
  param_1[1] = local_30;
  *(undefined1 *)param_1 = 4;
  return;
}

