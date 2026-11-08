// FUN_0167f190 @ 0167f190 size=372 calls_out=4 calls_in=1
// strings: 

undefined4 FUN_0167f190(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_004144ff,0x17,&DAT_018adb68);
  }
  iVar4 = param_1 + param_2 * 0x48 + -0x30;
  iVar1 = FUN_0168b2d0(iVar4,param_3,1,0);
  if ((iVar1 == 0) && (iVar1 = FUN_0167ef2c(param_1,param_3), iVar1 == 0)) {
    if (param_2 == 1) {
      uVar2 = FUN_0168b404(iVar4,param_3,1,0);
      return uVar2;
    }
    iVar1 = FUN_0168b404(param_1 + 0x30,param_3,1,0);
    if (iVar1 == 0) {
      iVar1 = param_2 + -2;
      iVar5 = param_2 * 0x48 + -0x48;
      while( true ) {
        iVar3 = (**(code **)(param_3[1] + 0xc))(*param_3,&DAT_00418eb7,1);
        if (iVar3 != 0) break;
        iVar3 = FUN_0168b2d0(param_1 + 0x78,param_3,1,0);
        if (iVar3 != 0) {
          return 1;
        }
        iVar3 = FUN_0167ef2c(param_1 + 0x48,param_3);
        if (iVar3 != 0) {
          return 1;
        }
        if (iVar1 == 0) {
          iVar3 = iVar4;
        }
        else {
          iVar3 = param_1 + 0x78;
        }
        iVar3 = FUN_0168b404(iVar3,param_3,1,0);
        if (iVar3 != 0) {
          return 1;
        }
        iVar1 = iVar1 + -1;
        iVar5 = iVar5 + -0x48;
        param_1 = param_1 + 0x48;
        if (iVar5 == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}

