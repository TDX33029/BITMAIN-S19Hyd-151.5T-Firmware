// FUN_00f00504 @ 00f00504 size=156 calls_out=2 calls_in=2
// strings: 

void FUN_00f00504(char param_1,uint param_2,undefined4 param_3)

{
  byte local_12;
  char local_11;
  
  local_12 = param_1 << 3 | 2;
  FUN_01284394(param_3,&local_12,1);
  if (param_2 == 0) {
    local_11 = '\0';
    FUN_01284394(param_3,&local_11,1);
    return;
  }
  local_11 = (char)((LZCOUNT(param_2 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x01';
  FUN_01284394(param_3,&local_11,1);
  FUN_00efc9fc(1,param_2,param_3);
  return;
}

