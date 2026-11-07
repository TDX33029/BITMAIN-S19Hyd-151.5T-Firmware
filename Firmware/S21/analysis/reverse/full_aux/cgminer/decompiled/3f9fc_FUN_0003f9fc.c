// FUN_0003f9fc @ 0003f9fc  size=276  callers=1
// program: cgminer


uint * FUN_0003f9fc(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 == 0) {
    return (uint *)0x0;
  }
  uVar4 = param_2 & 0xff;
  if (((uint)param_1 & 3) == 0) {
LAB_0003fa54:
    uVar3 = (param_2 & 0xff) << 8 | uVar4;
    uVar3 = uVar3 | uVar3 << 0x10;
    if (3 < param_3) {
      uVar2 = *param_1 ^ uVar3;
      for (uVar2 = uVar2 + 0xfefefeff & ~uVar2; (uVar2 & 0x80808080) == 0;
          uVar2 = uVar2 + 0xfefefeff & ~uVar2) {
        param_1 = param_1 + 1;
        param_3 = param_3 - 4;
        if (param_3 < 4) {
          if (param_3 == 0) {
            return (uint *)0x0;
          }
          break;
        }
        uVar2 = *param_1 ^ uVar3;
      }
    }
    if ((byte)*param_1 == uVar4) {
      return param_1;
    }
    puVar1 = (uint *)((int)param_1 + param_3);
    while (param_1 = (uint *)((int)param_1 + 1), param_1 != puVar1) {
      if (*(byte *)param_1 == uVar4) {
        return param_1;
      }
    }
  }
  else {
    if ((byte)*param_1 == uVar4) {
      return param_1;
    }
    while( true ) {
      param_1 = (uint *)((int)param_1 + 1);
      param_3 = param_3 - 1;
      if (param_3 == 0) break;
      if (((uint)param_1 & 3) == 0) goto LAB_0003fa54;
      if (*(byte *)param_1 == uVar4) {
        return param_1;
      }
    }
  }
  return (uint *)0x0;
}

