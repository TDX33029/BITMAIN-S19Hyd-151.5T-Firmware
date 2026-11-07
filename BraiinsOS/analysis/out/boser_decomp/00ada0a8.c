// FUN_00ada0a8 @ 00ada0a8 size=188 calls_out=0 calls_in=5
// strings: 

void FUN_00ada0a8(uint *param_1,int param_2)

{
  uint local_18;
  uint local_14;
  
  (**(code **)(*(int *)(param_2 + 0x10) + 0x10))
            (&local_18,
             *(int *)(param_2 + 0xc) + (*(int *)(*(int *)(param_2 + 0x10) + 8) - 1U & 0xfffffff8) +
             8,0,1);
  if ((((char)local_18 == '\x04') || ((local_18 & 0xff) == 4)) &&
     (((**(code **)(*(int *)(param_2 + 0x10) + 0x10))
                 (&local_18,
                  *(int *)(param_2 + 0xc) +
                  (*(int *)(*(int *)(param_2 + 0x10) + 8) - 1U & 0xfffffff8) + 8,1,1),
      (char)local_18 == '\x04' || ((local_18 & 0xff) == 4)))) {
    *(undefined1 *)param_1 = 4;
  }
  else {
    *param_1 = local_18;
    param_1[1] = local_14;
  }
  return;
}

