// FUN_00092a68 @ 00092a68  size=1136  callers=0
// program: bmminer


undefined4 FUN_00092a68(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  byte local_15;
  int local_14;
  int local_10;
  int local_c;
  
  if (*(int *)(*(int *)(param_2 + 8) + 0x138) == 0) {
    if (*(int *)(*(int *)(param_2 + 8) + 0x130) == 0) {
      uVar1 = FUN_0009774c(param_3,"format=(null)",0xd);
    }
    else {
      uVar1 = FUN_00096a9c(param_3,*(undefined4 *)(*(int *)(param_2 + 8) + 0x130),
                           *(undefined4 *)(*(int *)(param_2 + 8) + 0x134));
    }
  }
  else if (*(int *)(*(int *)(param_2 + 8) + 0x138) == 1) {
    if (*(int *)(*(int *)(param_2 + 8) + 0x128) == 0) {
      local_c = FUN_0009774c(param_3,"buf=(null)",10);
    }
    else {
      local_c = FUN_0009774c(param_3,
                             "\n             0  1  2  3  4  5  6  7  8  9  A  B  C  D  E  F    0123456789ABCDEF"
                             ,0x50);
      if (local_c == 0) {
        local_10 = 0;
        local_c = 0;
        while (((local_c = FUN_0009774c(param_3,&DAT_000ac494,1), local_c == 0 &&
                (local_c = FUN_000970d0(param_3,10,local_10 + 1,local_10 + 1 >> 0x1f,10),
                local_c == 0)) && (local_c = FUN_0009774c(param_3,&DAT_000ac510,3), local_c == 0)))
        {
          for (local_14 = 0; local_c = 0, local_14 < 0x10; local_14 = local_14 + 1) {
            if ((uint)(local_10 * 0x10 + local_14) < *(uint *)(*(int *)(param_2 + 8) + 300)) {
              local_15 = *(byte *)(*(int *)(*(int *)(param_2 + 8) + 0x128) +
                                  local_10 * 0x10 + local_14);
              local_c = FUN_00097460(param_3,local_15,2);
              if (local_c != 0) goto LAB_00092e60;
              local_c = FUN_0009774c(param_3,&DAT_000ac514,1);
            }
            else {
              local_c = FUN_0009774c(param_3,&DAT_000ac510,3);
            }
            if (local_c != 0) goto LAB_00092e60;
          }
          local_c = FUN_0009774c(param_3,&DAT_000ac518,2);
          if (local_c != 0) break;
          for (local_14 = 0; local_14 < 0x10; local_14 = local_14 + 1) {
            if ((uint)(local_10 * 0x10 + local_14) < *(uint *)(*(int *)(param_2 + 8) + 300)) {
              local_15 = *(byte *)(*(int *)(*(int *)(param_2 + 8) + 0x128) +
                                  local_10 * 0x10 + local_14);
              if ((local_15 < 0x20) || (0x7e < local_15)) {
                local_c = FUN_0009774c(param_3,&DAT_000ac51c,1);
              }
              else {
                local_c = FUN_0009774c(param_3,&local_15,1);
              }
            }
            else {
              local_c = FUN_0009774c(param_3,&DAT_000ac514,1);
            }
            if (local_c != 0) goto LAB_00092e60;
          }
          if (*(uint *)(*(int *)(param_2 + 8) + 300) <= (uint)(local_10 * 0x10 + local_14)) break;
          local_10 = local_10 + 1;
        }
      }
    }
LAB_00092e60:
    if (local_c < 0) {
      FUN_00095b4c(2,"src/spec.c",0x150,"write hex msg fail");
      uVar1 = 0xffffffff;
    }
    else if (local_c < 1) {
      uVar1 = 0;
    }
    else {
      FUN_00095b4c(2,"src/spec.c",0x153,"write hex msg, buf is full");
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

