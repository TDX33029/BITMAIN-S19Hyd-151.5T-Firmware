// FUN_01afcfcc @ 01afcfcc size=172 calls_out=3 calls_in=14
// strings: 

void FUN_01afcfcc(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_01d53560;
  uVar3 = FUN_01afcf38(param_1,&local_18,param_3,0);
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uVar1 = 0;
  if ((int)uVar3 != 0) {
    if (param_3 != 0) {
      FUN_01afc740(local_18,param_2,param_3);
      uVar2 = extraout_r1;
    }
    uVar1 = 1;
  }
  if ((local_14 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,uVar2,local_14 ^ DAT_01d53560,0);
  }
  return;
}

