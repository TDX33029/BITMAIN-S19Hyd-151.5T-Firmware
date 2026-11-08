// FUN_014f7730 @ 014f7730 size=160 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_014f7730(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    iVar4 = 0;
    do {
      uVar3 = param_1[2];
      if ((uVar3 < param_1[1]) && (uVar1 = (uint)*(byte *)(uVar1 + uVar3), uVar1 == 0x45)) {
        param_1[2] = uVar3 + 1;
        return 0;
      }
      if (iVar4 != 0) {
        uVar1 = param_1[4];
      }
      if (((iVar4 != 0 && uVar1 != 0) && (iVar2 = FUN_00faace8(uVar1,&DAT_0041950f,2), iVar2 != 0))
         || (iVar2 = FUN_014f77d4(param_1), iVar2 != 0)) {
        return 1;
      }
      uVar1 = *param_1;
      iVar4 = iVar4 + -1;
    } while (uVar1 != 0);
  }
  return 0;
}

