// FUN_01690900 @ 01690900 size=368 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_01690900(byte *param_1,uint param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  do {
    if (param_2 == 0) {
      param_2 = 0;
LAB_01690a14:
      uVar3 = FUN_01690a7c(param_1,param_2);
      return uVar3;
    }
    uVar5 = 0;
    while (param_1[uVar5] != 0x25) {
      uVar5 = uVar5 + 1;
      if (param_2 == uVar5) goto LAB_01690a14;
    }
    if ((uVar5 != 0) && ((char)param_1[uVar5] < -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(param_1,param_2,0,uVar5,&DAT_01888dbc);
    }
    uVar4 = uVar5 + 1;
    if (uVar4 < param_2) {
      if ((char)param_1[uVar4] < -0x40) {
LAB_01690a48:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac();
      }
      uVar6 = uVar4;
    }
    else {
      uVar6 = param_2;
      if (uVar4 != param_2) goto LAB_01690a48;
    }
    param_2 = param_2 - uVar6;
    if (uVar5 == 0) {
      if (param_2 < 2) {
        return 0;
      }
    }
    else {
      iVar2 = FUN_01690a7c(param_1,uVar5);
      pbVar1 = (byte *)0x0;
      if (iVar2 != 0) {
        pbVar1 = param_1;
      }
      param_1 = pbVar1;
      if (iVar2 == 0 || param_2 < 2) {
        return 0;
      }
    }
    param_1 = param_1 + uVar6;
    if (((9 < *param_1 - 0x30) && (5 < (*param_1 & 0xdf) - 0x41)) ||
       ((9 < param_1[1] - 0x30 && (5 < (param_1[1] & 0xdf) - 0x41)))) {
      return 0;
    }
    if ((param_2 != 2) && ((char)param_1[2] < -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(param_1,param_2,2,param_2,&DAT_018adf80);
    }
    param_2 = param_2 - 2;
    param_1 = param_1 + 2;
  } while( true );
}

