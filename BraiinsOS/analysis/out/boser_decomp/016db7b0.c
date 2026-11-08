// FUN_016db7b0 @ 016db7b0 size=276 calls_out=3 calls_in=1
// strings: 

void FUN_016db7b0(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 auStack_44 [24];
  undefined4 local_2c [7];
  
  iVar2 = FUN_016d4a28(param_2);
  if (iVar2 < 0x6d) {
    if (iVar2 == 0x52) {
      *param_1 = 0x22;
      uVar1 = 5;
    }
    else if (iVar2 == 0x55) {
      *param_1 = 0x22;
      uVar1 = 3;
    }
    else {
      if (iVar2 != 0x69) goto LAB_016db850;
      *param_1 = 0x22;
      uVar1 = 0;
    }
  }
  else if (iVar2 < 0x75) {
    if (iVar2 == 0x6d) {
      *param_1 = 0x22;
      uVar1 = 1;
    }
    else {
      if (iVar2 != 0x73) {
LAB_016db850:
        FUN_016d4f3c(auStack_44,param_2);
        local_2c[0] = 0x10;
        FUN_016d4540(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),auStack_44,
                     local_2c);
        return;
      }
      *param_1 = 0x22;
      uVar1 = 2;
    }
  }
  else if (iVar2 == 0x75) {
    *param_1 = 0x22;
    uVar1 = 4;
  }
  else {
    if (iVar2 != 0x78) goto LAB_016db850;
    *param_1 = 0x22;
    uVar1 = 6;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}

