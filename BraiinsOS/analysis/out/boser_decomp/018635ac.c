// FUN_018635ac @ 018635ac size=136 calls_out=1 calls_in=2
// strings: 

void FUN_018635ac(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint local_20;
  uint uStack_1c;
  
  do {
    if (*(int *)(param_3 + 0x208) == 0) {
      uVar1 = 4;
LAB_01863628:
      *(undefined1 *)param_1 = uVar1;
      return;
    }
    FUN_01862fdc(&local_20,param_2,param_3,param_4);
    if ((char)local_20 == '\x05') {
      uVar1 = 5;
      goto LAB_01863628;
    }
    if ((local_20 & 0xff) != 4) goto LAB_01863614;
  } while (uStack_1c != 0);
  uStack_1c = 0;
  local_20 = 0x1701;
LAB_01863614:
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  return;
}

