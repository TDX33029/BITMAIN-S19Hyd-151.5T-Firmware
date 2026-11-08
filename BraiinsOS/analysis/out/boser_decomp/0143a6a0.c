// FUN_0143a6a0 @ 0143a6a0 size=172 calls_out=2 calls_in=4
// strings: 

void FUN_0143a6a0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uStack_1c;
  
  if ((char)*param_2 != '\x04') {
    uStack_1c = param_2[5];
    FUN_0143ad1c(param_1,0x28);
    return;
  }
  uVar1 = param_2[2];
  uStack_1c = param_2[5];
  if ((*param_2 & 0xff) == 4) {
    if ((param_2[1] & 0xff) != 4) {
      *param_1 = param_2[1];
      param_1[1] = uVar1;
      return;
    }
  }
  else if ((*param_2 & 0xff) == 1) {
    (**(code **)(uVar1 + 0x10))(&uStack_1c,param_2[3],param_2[4]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb0cc(&DAT_01cf7440);
}

