// FUN_016f8be8 @ 016f8be8 size=152 calls_out=2 calls_in=0
// strings: 

void FUN_016f8be8(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint local_20;
  uint uStack_1c;
  
  do {
    if (*(int *)(param_3 + 0x208) == 0) {
      FUN_016fc3dc(param_1,param_2,param_4);
      return;
    }
    FUN_016f6e78(&local_20,param_2,param_3,param_4);
    if ((char)local_20 == '\x05') {
      *(undefined1 *)param_1 = 5;
      return;
    }
    if ((local_20 & 0xff) != 4) goto LAB_016f8c50;
  } while (uStack_1c != 0);
  uStack_1c = 0;
  local_20 = 0x1701;
LAB_016f8c50:
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  return;
}

