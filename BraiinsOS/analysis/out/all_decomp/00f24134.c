// FUN_00f24134 @ 00f24134 size=108 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_00f24134(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_3 & 0xff) < 100) {
    uVar1 = (short)(param_3 & 0xff) * 0xcd;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0x10);
    iVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,uVar1 >> 0xb | 0x30);
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00f2419c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)(param_1,param_3 + (uVar1 >> 0xb) * -10 & 0xff | 0x30);
      return uVar3;
    }
  }
  return 1;
}

