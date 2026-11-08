// FUN_015f0af0 @ 015f0af0 size=192 calls_out=0 calls_in=2
// strings: 

bool FUN_015f0af0(char *param_1,char *param_2)

{
  bool bVar1;
  
  if (*param_1 == '\x01') {
    bVar1 = false;
    if (*param_2 != '\x02') {
      bVar1 = (((*(uint *)(param_1 + 1) ^ *(uint *)(param_2 + 0x11)) & *(uint *)(param_2 + 0x21)) ==
               0 && ((*(uint *)(param_1 + 9) ^ *(uint *)(param_2 + 0x19)) &
                    *(uint *)(param_2 + 0x29)) == 0) &&
              (((*(uint *)(param_1 + 5) ^ *(uint *)(param_2 + 0x15)) & *(uint *)(param_2 + 0x25)) ==
               0 && ((*(uint *)(param_1 + 0xd) ^ *(uint *)(param_2 + 0x1d)) &
                    *(uint *)(param_2 + 0x2d)) == 0);
    }
  }
  else {
    bVar1 = false;
    if (*param_2 == '\x02') {
      bVar1 = ((*(uint *)(param_1 + 1) ^ *(uint *)(param_2 + 6)) & *(uint *)(param_2 + 10)) == 0;
    }
  }
  return bVar1;
}

