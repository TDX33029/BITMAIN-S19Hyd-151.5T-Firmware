// FUN_00028838 @ 00028838  size=620  callers=7
// program: cgminer


/* WARNING: Type propagation algorithm not settling */

void FUN_00028838(uint param_1,uint param_2,char *param_3,size_t param_4,int param_5)

{
  undefined4 uVar1;
  int param4;
  bool bVar2;
  uint in_fpscr;
  double dVar3;
  double __x;
  undefined2 local_2c [2];
  
  bVar2 = 0xde0b6b2 < param_2;
  local_2c[0] = 0;
  if (param_2 == 0xde0b6b3) {
    bVar2 = 0xa763fffe < param_1;
  }
  if (!bVar2 || param_2 == 0xde0b6b3 && param_1 == 0xa763ffff) {
    bVar2 = 0x38d7d < param_2;
    if (param_2 == 0x38d7e) {
      bVar2 = 0xa4c67ffe < param_1;
    }
    if (bVar2 && (param_2 != 0x38d7e || param_1 != 0xa4c67fff)) {
      uVar1 = FUN_0004ad28(param_1,param_2,0xd4a51000,0xe8);
      __x = (double)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
      local_2c[0] = 0x50;
    }
    else {
      bVar2 = 0xe7 < param_2;
      if (param_2 == 0xe8) {
        bVar2 = 0xd4a50ffe < param_1;
      }
      if (bVar2 && (param_2 != 0xe8 || param_1 != 0xd4a50fff)) {
        uVar1 = FUN_0004ad28(param_1,param_2,1000000000,0);
        __x = (double)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
        local_2c[0] = 0x54;
      }
      else if (param_2 == 0 && param_1 < 1000000000) {
        if (param_2 == 0 && param_1 < 1000000) {
          __x = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
          if (param_2 == 0 && param_1 < 1000) {
            if (param_5 == 0) {
              snprintf(param_3,param_4,"%d%s",param_1,local_2c);
              return;
            }
            goto LAB_0002890c;
          }
          local_2c[0] = 0x4b;
        }
        else {
          uVar1 = FUN_0004ad28(param_1,param_2,1000,0);
          __x = (double)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
          local_2c[0] = 0x4d;
        }
      }
      else {
        uVar1 = FUN_0004ad28(param_1,param_2,1000000,0);
        __x = (double)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
        local_2c[0] = 0x47;
      }
    }
  }
  else {
    uVar1 = FUN_0004ad28(param_1,param_2,0xa4c68000,0x38d7e);
    __x = (double)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    local_2c[0] = 0x45;
  }
  __x = __x / 1000.0;
  if (param_5 == 0) {
    snprintf(param_3,param_4,"%.3g%s",__x,(char *)local_2c);
    return;
  }
LAB_0002890c:
  if (__x <= 0.0) {
    param4 = 3;
  }
  else {
    dVar3 = log10(__x);
    dVar3 = floor(dVar3);
    param4 = (int)(longlong)(3.0 - dVar3);
  }
  snprintf(param_3,param_4,"%*.*f%s",param_5 + 1,param4,__x,(char *)local_2c);
  return;
}

