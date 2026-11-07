// FUN_0167f310 @ 0167f310 size=408 calls_out=4 calls_in=1
// strings: 

undefined4 FUN_0167f310(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_004144ff,0x17,&DAT_018adb78);
  }
  uVar7 = param_4[2];
  iVar8 = param_1[param_2 + -1] + 0x18;
  uVar3 = param_4[3];
  iVar6 = *param_1;
  iVar1 = FUN_0168b2d0(iVar8,param_3,*param_4,param_4[1]);
  if ((iVar1 == 0) && (iVar1 = FUN_0167ef2c(iVar6,param_3), iVar1 == 0)) {
    if (param_2 == 1) {
      uVar3 = FUN_0168b404(iVar8,param_3,uVar7,uVar3);
      return uVar3;
    }
    iVar1 = FUN_0168b404(iVar6 + 0x30,param_3,1,0);
    if (iVar1 == 0) {
      iVar1 = param_2 + -2;
      iVar6 = param_2 * 4 + -4;
      while( true ) {
        param_1 = param_1 + 1;
        iVar5 = *param_1;
        iVar2 = (**(code **)(param_3[1] + 0xc))(*param_3,&DAT_00418eb7,1);
        if (iVar2 != 0) break;
        iVar4 = iVar5 + 0x30;
        iVar2 = FUN_0168b2d0(iVar4,param_3,1,0);
        if (iVar2 != 0) {
          return 1;
        }
        iVar2 = FUN_0167ef2c(iVar5,param_3);
        if (iVar2 != 0) {
          return 1;
        }
        if (iVar1 == 0) {
          iVar2 = FUN_0168b404(iVar8,param_3,uVar7,uVar3);
        }
        else {
          iVar2 = FUN_0168b404(iVar4,param_3,1,0);
        }
        if (iVar2 != 0) {
          return 1;
        }
        iVar1 = iVar1 + -1;
        iVar6 = iVar6 + -4;
        if (iVar6 == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}

