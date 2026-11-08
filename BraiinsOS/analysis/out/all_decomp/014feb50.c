// FUN_014feb50 @ 014feb50 size=176 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_014feb50(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = *param_1;
  iVar4 = 0;
  if (uVar1 != 0) {
    uVar5 = 1;
    do {
      uVar3 = param_1[2];
      if ((uVar3 < param_1[1]) && (uVar1 = (uint)*(byte *)(uVar1 + uVar3), uVar1 == 0x45)) {
        param_1[2] = uVar3 + 1;
        break;
      }
      if (iVar4 != 0) {
        uVar1 = param_1[4];
      }
      if ((iVar4 != 0 && uVar1 != 0) && (iVar2 = FUN_00faace8(uVar1,&DAT_0041950f,2), iVar2 != 0)) {
        uVar5 = 1;
        goto LAB_014febec;
      }
      iVar2 = FUN_014fd6a8(param_1,1);
      if (iVar2 != 0) goto LAB_014febec;
      uVar1 = *param_1;
      iVar4 = iVar4 + 1;
    } while (uVar1 != 0);
  }
  uVar5 = 0;
LAB_014febec:
  return CONCAT44(iVar4,uVar5);
}

