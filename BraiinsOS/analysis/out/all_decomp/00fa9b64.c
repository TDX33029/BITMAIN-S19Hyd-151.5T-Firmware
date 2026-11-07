// FUN_00fa9b64 @ 00fa9b64 size=104 calls_out=0 calls_in=1
// strings: 

undefined4
FUN_00fa9b64(undefined4 param_1,int param_2,undefined1 *param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_3 != &DAT_00110000) &&
     (iVar1 = (**(code **)(param_2 + 0x10))(param_1,param_3), iVar1 != 0)) {
    return 1;
  }
  if (param_4 == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00fa9bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(param_2 + 0xc))(param_1,param_4,param_5);
  return uVar2;
}

