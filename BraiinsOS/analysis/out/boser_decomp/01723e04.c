// FUN_01723e04 @ 01723e04 size=156 calls_out=1 calls_in=3
// strings: 

void FUN_01723e04(uint *param_1,int param_2)

{
  undefined1 uVar1;
  uint local_18;
  uint local_14;
  
  if ((*(int *)(param_2 + 0x70) == 4) &&
     (*(uint *)(param_2 + 200) <= (uint)(*(int *)(param_2 + 0xb0) - *(int *)(param_2 + 0xac)))) {
LAB_01723e84:
    uVar1 = 4;
  }
  else {
    FUN_01723ea0(&local_18,param_2);
    if ((char)local_18 != '\x05') {
      if ((local_18 & 0xff) != 4) {
        *param_1 = local_18;
        param_1[1] = local_14;
        return;
      }
      if ((*(int *)(param_2 + 0x70) == 4) &&
         (*(uint *)(param_2 + 200) <= (uint)(*(int *)(param_2 + 0xb0) - *(int *)(param_2 + 0xac))))
      goto LAB_01723e84;
    }
    uVar1 = 5;
  }
  *(undefined1 *)param_1 = uVar1;
  return;
}

