// FUN_0007e6b8 @ 0007e6b8  size=216  callers=1
// program: bmminer


byte * FUN_0007e6b8(byte *param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint local_10;
  uint local_c;
  
  if (param_2 != 0) {
    local_c = FUN_0007e428(*param_1);
    if (local_c == 0) {
      param_1 = (byte *)0x0;
    }
    else {
      if (local_c == 1) {
        local_10 = (uint)*param_1;
      }
      else if ((param_2 < local_c) || (iVar1 = FUN_0007e50c(param_1,local_c,&local_10), iVar1 == 0))
      {
        return (byte *)0x0;
      }
      if (param_3 != (uint *)0x0) {
        *param_3 = local_10;
      }
      param_1 = param_1 + local_c;
    }
  }
  return param_1;
}

