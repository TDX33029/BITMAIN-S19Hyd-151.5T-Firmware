// FUN_014f9f38 @ 014f9f38 size=172 calls_out=2 calls_in=1
// strings: 

longlong FUN_014f9f38(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  uVar4 = 0;
  while( true ) {
    if (uVar1 == 0) {
      return (ulonglong)uVar4 << 0x20;
    }
    uVar3 = param_1[2];
    if ((uVar3 < param_1[1]) && (uVar1 = (uint)*(byte *)(uVar1 + uVar3), uVar1 == 0x45)) break;
    if (uVar4 != 0) {
      uVar1 = param_1[4];
    }
    if (((uVar4 != 0 && uVar1 != 0) && (iVar2 = FUN_00faace8(uVar1,&DAT_0041950f,2), iVar2 != 0)) ||
       (iVar2 = FUN_014f7080(param_1), iVar2 != 0)) {
      return CONCAT44(uVar4,1);
    }
    uVar1 = *param_1;
    uVar4 = uVar4 + 1;
  }
  param_1[2] = uVar3 + 1;
  return (ulonglong)uVar4 << 0x20;
}

