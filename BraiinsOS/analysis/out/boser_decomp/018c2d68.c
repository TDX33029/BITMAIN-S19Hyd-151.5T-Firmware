// FUN_018c2d68 @ 018c2d68 size=156 calls_out=1 calls_in=1
// strings: 

void FUN_018c2d68(undefined1 *param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  char local_28 [4];
  uint local_24;
  int local_1c [3];
  
  if (param_3 < 4) {
    *param_1 = 0x14;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    local_1c[1] = 3;
    local_1c[0] = param_2 + 1;
    local_1c[2] = 0;
    FUN_018c2e04(local_28,local_1c);
    if (local_28[0] == '\x14') {
      if (local_24 >> 0x10 == 0) {
        *(undefined4 *)(param_1 + 4) = 1;
        *(uint *)(param_1 + 8) = local_24 + 4;
        uVar1 = 0x14;
      }
      else {
        param_1[4] = 0;
        uVar1 = 2;
      }
    }
    else {
      uVar1 = 0x14;
      *(undefined4 *)(param_1 + 4) = 0;
    }
    *param_1 = uVar1;
  }
  return;
}

