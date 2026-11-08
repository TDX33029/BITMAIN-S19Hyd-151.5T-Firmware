// FUN_01b695d0 @ 01b695d0 size=272 calls_out=4 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_ec.c

void FUN_01b695d0(int param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint local_28;
  uint local_24;
  
  local_24 = DAT_01d53560;
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  if (param_2 == 0) {
    uVar5 = FUN_01b03e58(uVar3);
    uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
    *param_3 = (uint)uVar5;
LAB_01b69628:
    uVar1 = 1;
  }
  else {
    uVar4 = *param_3;
    uVar2 = FUN_01b03e58(uVar3);
    if (uVar4 < uVar2) {
      FUN_01b053d4(6,0,100,"/aws-lc/crypto/fipsmodule/evp/p_ec.c",0x49);
      uVar3 = extraout_r1;
    }
    else {
      uVar5 = FUN_01b69460(0,param_4,param_5,param_2,&local_28,uVar3);
      uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar5 != 0) {
        *param_3 = local_28;
        goto LAB_01b69628;
      }
    }
    uVar1 = 0;
  }
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,uVar3,local_24 ^ DAT_01d53560,0);
  }
  return;
}

