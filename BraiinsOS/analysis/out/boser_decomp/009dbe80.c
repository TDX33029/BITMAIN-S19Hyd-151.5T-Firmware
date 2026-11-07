// FUN_009dbe80 @ 009dbe80 size=164 calls_out=1 calls_in=2
// strings: 

void FUN_009dbe80(uint *param_1,int param_2)

{
  undefined1 uVar1;
  uint local_18;
  uint local_14;
  
  if ((*(int *)(param_2 + 0x150) == 4) &&
     (*(uint *)(param_2 + 0x1a8) <= (uint)(*(int *)(param_2 + 400) - *(int *)(param_2 + 0x18c)))) {
LAB_009dbf08:
    uVar1 = 4;
  }
  else {
    FUN_0093ea04(&local_18,param_2 + 0xd0);
    if ((char)local_18 != '\x05') {
      if ((local_18 & 0xff) != 4) {
        *param_1 = local_18;
        param_1[1] = local_14;
        return;
      }
      if ((*(int *)(param_2 + 0x150) == 4) &&
         (*(uint *)(param_2 + 0x1a8) <= (uint)(*(int *)(param_2 + 400) - *(int *)(param_2 + 0x18c)))
         ) goto LAB_009dbf08;
    }
    uVar1 = 5;
  }
  *(undefined1 *)param_1 = uVar1;
  return;
}

