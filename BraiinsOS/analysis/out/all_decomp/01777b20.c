// FUN_01777b20 @ 01777b20 size=288 calls_out=4 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_ec.c

void FUN_01777b20(int param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint local_20;
  uint local_1c;
  
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  local_1c = DAT_018ddaf8;
  if (param_2 == 0) {
    uVar5 = FUN_016e879c(uVar4,0);
    uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
    *param_3 = (uint)uVar5;
    uVar2 = 1;
  }
  else {
    uVar3 = *param_3;
    uVar1 = FUN_016e879c(uVar4,0);
    if (uVar3 < uVar1) {
      FUN_016e9cd0(6,0,100,"/aws-lc/crypto/fipsmodule/evp/p_ec.c",0x49);
      uVar4 = extraout_r1;
    }
    else {
      uVar5 = FUN_017779a0(0,param_4,param_5,param_2,&local_20,uVar4);
      uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar5 != 0) {
        *param_3 = local_20;
        uVar2 = 1;
        goto LAB_01777be8;
      }
    }
    uVar2 = 0;
  }
LAB_01777be8:
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,uVar4,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}

