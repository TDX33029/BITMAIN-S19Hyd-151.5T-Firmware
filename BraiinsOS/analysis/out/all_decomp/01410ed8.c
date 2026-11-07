// FUN_01410ed8 @ 01410ed8 size=444 calls_out=3 calls_in=4
// strings: 

void FUN_01410ed8(uint *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  iVar3 = *(int *)(param_2 + 0x4c);
  iVar4 = *(int *)(param_2 + 0x50);
  *(undefined1 *)(param_2 + 0x59) = 0;
  if ((uint)(iVar4 - iVar3) < *(uint *)(param_2 + 0x34)) {
    FUN_00f5f538(param_2 + 0x48);
    iVar3 = *(int *)(param_2 + 0x4c);
    iVar4 = *(int *)(param_2 + 0x50);
  }
  if (iVar4 == iVar3) {
    FUN_00f5f538(param_2 + 0x48,0x40);
    iVar3 = *(int *)(param_2 + 0x4c);
    iVar4 = *(int *)(param_2 + 0x50);
  }
  uVar2 = iVar4 - iVar3;
  local_34 = 0;
  local_40 = *(int *)(param_2 + 0x48) + iVar3;
  local_38 = 0;
  local_3c = uVar2;
  (**(code **)(*(int *)(param_2 + 0x40) + 0xc))
            (&local_30,*(undefined4 *)(param_2 + 0x3c),param_3,&local_40);
  if ((local_30 & 0xff) != 4) {
    if ((local_30 & 0xff) == 5) {
      *(undefined1 *)param_1 = 5;
      *(undefined1 *)(param_2 + 0x59) = 1;
      return;
    }
    *param_1 = local_30;
    param_1[1] = local_2c;
    return;
  }
  if (local_3c < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,local_38,local_3c,&DAT_018a69b0);
  }
  if (uVar2 < local_38) {
    local_28 = local_38;
    local_24 = uVar2;
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&local_28);
  }
  *(uint *)(param_2 + 0x4c) = iVar3 + local_38;
  if (*(char *)(param_2 + 0x30) == '\0') {
    uVar2 = *(uint *)(param_2 + 0x34);
    if (local_38 < uVar2) {
      uVar2 = (0xffffffffU >> (LZCOUNT(uVar2) + 2U & 0x1f)) + 1;
      if (local_38 < uVar2) {
        if (*(char *)(param_2 + 0x31) != '\0') {
          if (uVar2 < 0x2001) {
            uVar2 = 0x2000;
          }
          *(undefined1 *)(param_2 + 0x31) = 0;
          *(uint *)(param_2 + 0x34) = uVar2;
          goto LAB_01411060;
        }
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
      *(undefined1 *)(param_2 + 0x31) = uVar1;
    }
    else {
      if ((int)uVar2 < 0) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = uVar2 << 1;
      }
      if (*(uint *)(param_2 + 0x38) < uVar2) {
        uVar2 = *(uint *)(param_2 + 0x38);
      }
      *(undefined1 *)(param_2 + 0x31) = 0;
      *(uint *)(param_2 + 0x34) = uVar2;
    }
  }
LAB_01411060:
  param_1[1] = local_38;
  *(undefined1 *)param_1 = 4;
  return;
}

