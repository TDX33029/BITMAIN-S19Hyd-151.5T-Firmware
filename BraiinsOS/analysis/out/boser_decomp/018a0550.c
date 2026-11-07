// FUN_018a0550 @ 018a0550 size=164 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_018a0550(uint *param_1)

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
LAB_018a05e8:
      uVar3 = 0;
LAB_018a05ec:
      return CONCAT44(iVar5,uVar3);
    }
    uVar4 = param_1[2];
    if ((uVar4 < param_1[1]) && (uVar1 = (uint)*(byte *)(uVar1 + uVar4), uVar1 == 0x45)) {
      param_1[2] = uVar4 + 1;
      goto LAB_018a05e8;
    }
    if (iVar5 != 0) {
      uVar1 = param_1[4];
    }
    if (((iVar5 != 0 && uVar1 != 0) && (iVar2 = FUN_012fb940(uVar1,&DAT_00533bc1,2), iVar2 != 0)) ||
       (iVar2 = FUN_0189dc34(param_1), iVar2 != 0)) {
      uVar3 = 1;
      goto LAB_018a05ec;
    }
    uVar1 = *param_1;
    iVar5 = iVar5 + 1;
  } while( true );
}

