// FUN_0189f8d0 @ 0189f8d0 size=172 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_0189f8d0(uint *param_1)

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
      if ((iVar4 != 0 && uVar1 != 0) && (iVar2 = FUN_012fb940(uVar1,&DAT_00533bc1,2), iVar2 != 0)) {
        return 1;
      }
      iVar2 = FUN_0189e514(param_1,1);
      if (iVar2 != 0) {
        return 1;
      }
      uVar1 = *param_1;
      iVar4 = iVar4 + -1;
    } while (uVar1 != 0);
  }
  return 0;
}

