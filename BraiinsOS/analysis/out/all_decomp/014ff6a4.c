// FUN_014ff6a4 @ 014ff6a4 size=164 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_014ff6a4(uint *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = *param_1;
  iVar5 = 0;
  do {
    if (uVar1 == 0) {
LAB_014ff73c:
      uVar3 = 0;
LAB_014ff740:
      return CONCAT44(iVar5,uVar3);
    }
    uVar4 = param_1[2];
    if ((uVar4 < param_1[1]) && (uVar1 = (uint)*(byte *)(uVar1 + uVar4), uVar1 == 0x45)) {
      param_1[2] = uVar4 + 1;
      goto LAB_014ff73c;
    }
    if (iVar5 != 0) {
      uVar1 = param_1[4];
    }
    if (((iVar5 != 0 && uVar1 != 0) && (iVar2 = FUN_00faace8(uVar1,&DAT_0041950f,2), iVar2 != 0)) ||
       (iVar2 = FUN_014fcdc8(param_1), iVar2 != 0)) {
      uVar3 = 1;
      goto LAB_014ff740;
    }
    uVar1 = *param_1;
    iVar5 = iVar5 + 1;
  } while( true );
}

