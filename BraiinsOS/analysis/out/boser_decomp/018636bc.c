// FUN_018636bc @ 018636bc size=152 calls_out=2 calls_in=1
// strings: 

void FUN_018636bc(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint local_20;
  uint uStack_1c;
  
  do {
    if (*(int *)(param_3 + 0x208) == 0) {
      FUN_0183b210(param_1,param_2,param_4);
      return;
    }
    FUN_018631e8(&local_20,param_2,param_3,param_4);
    if ((char)local_20 == '\x05') {
      *(undefined1 *)param_1 = 5;
      return;
    }
    if ((local_20 & 0xff) != 4) goto LAB_01863724;
  } while (uStack_1c != 0);
  uStack_1c = 0;
  local_20 = 0x1701;
LAB_01863724:
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  return;
}

