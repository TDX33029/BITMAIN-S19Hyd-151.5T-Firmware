// FUN_006ccebc @ 006ccebc size=152 calls_out=4 calls_in=1
// strings: 

void FUN_006ccebc(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_01965d20(&local_1c);
  if ((char)local_1c != '\x01') {
    if (local_1c._1_1_ == '\0') {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    FUN_0196a870(&local_1c,*param_2);
    if (local_1c != -0x80000000) {
      FUN_016571c0(&local_1c);
      uVar1 = FUN_0070153c();
      local_18 = (undefined4)((ulonglong)uVar1 >> 0x20);
      if ((int)uVar1 != 0) {
        *(undefined8 *)(param_1 + 1) = uVar1;
        *param_1 = 0;
        return;
      }
    }
  }
  *param_1 = 1;
  param_1[1] = local_18;
  return;
}

