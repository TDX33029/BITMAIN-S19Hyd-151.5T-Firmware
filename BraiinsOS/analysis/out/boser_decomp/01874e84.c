// FUN_01874e84 @ 01874e84 size=156 calls_out=1 calls_in=1
// strings: 

void FUN_01874e84(uint *param_1,int param_2)

{
  undefined1 uVar1;
  uint local_18;
  uint local_14;
  
  if ((*(int *)(param_2 + 0x70) == 4) &&
     (*(uint *)(param_2 + 200) <= (uint)(*(int *)(param_2 + 0xb0) - *(int *)(param_2 + 0xac)))) {
LAB_01874f04:
    uVar1 = 4;
  }
  else {
    FUN_01874f20(&local_18,param_2);
    if ((char)local_18 != '\x05') {
      if ((local_18 & 0xff) != 4) {
        *param_1 = local_18;
        param_1[1] = local_14;
        return;
      }
      if ((*(int *)(param_2 + 0x70) == 4) &&
         (*(uint *)(param_2 + 200) <= (uint)(*(int *)(param_2 + 0xb0) - *(int *)(param_2 + 0xac))))
      goto LAB_01874f04;
    }
    uVar1 = 5;
  }
  *(undefined1 *)param_1 = uVar1;
  return;
}

