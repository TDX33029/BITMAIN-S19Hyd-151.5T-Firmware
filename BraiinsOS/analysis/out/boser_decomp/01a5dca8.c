// FUN_01a5dca8 @ 01a5dca8 size=272 calls_out=4 calls_in=1
// strings: always at least one key

undefined4 FUN_01a5dca8(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *unaff_r4;
  int unaff_r5;
  int iVar4;
  
  iVar1 = 0;
  iVar2 = param_1;
  if (param_2 != 0) {
    iVar1 = param_2 * 9;
    iVar2 = param_1 + param_2 * 0x48;
    unaff_r4 = param_3;
    unaff_r5 = param_1;
  }
  if (param_2 == 0 || iVar2 == 0x48) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("always at least one key",0x17,&DAT_01d2c618);
  }
  iVar4 = 0;
  while( true ) {
    if (iVar4 == 0) {
      iVar3 = iVar2 + -0x30;
    }
    else {
      iVar3 = (**(code **)(unaff_r4[1] + 0xc))(*unaff_r4,".",1);
      if (iVar3 != 0) {
        return 1;
      }
      iVar3 = unaff_r5 + 0x30;
    }
    iVar3 = FUN_01a559a0(iVar3,unaff_r4,1,0);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_01a5db00(unaff_r5,unaff_r4);
    if (iVar3 != 0) {
      return 1;
    }
    if (iVar1 * 8 + iVar4 == 0x48) {
      iVar3 = iVar2 + -0x30;
    }
    else {
      iVar3 = unaff_r5 + 0x30;
    }
    iVar3 = FUN_01a55a04(iVar3,unaff_r4,1,0);
    if (iVar3 != 0) break;
    iVar4 = iVar4 + -0x48;
    unaff_r5 = unaff_r5 + 0x48;
    if (iVar1 * 8 + iVar4 == 0) {
      return 0;
    }
  }
  return 1;
}

