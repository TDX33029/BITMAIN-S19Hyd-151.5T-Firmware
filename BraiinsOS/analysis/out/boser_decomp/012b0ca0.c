// FUN_012b0ca0 @ 012b0ca0 size=76 calls_out=0 calls_in=1
// strings: 

uint FUN_012b0ca0(char *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  
  if ((param_2 & 4) != 0) {
    return 0;
  }
  if ((param_2 & 0x2000) == 0) {
    uVar1 = 1;
    if (((param_2 & 0x1000) != 0) && (*param_1 == '\0')) {
      uVar1 = (param_2 & 0xf) >> 3;
    }
  }
  else {
    bVar2 = (param_2 & 0x1000) == 0;
    uVar1 = (uint)bVar2;
    if (!bVar2 || *param_1 != '\0') {
      return (param_2 & 0xf) >> 3;
    }
  }
  return uVar1;
}

