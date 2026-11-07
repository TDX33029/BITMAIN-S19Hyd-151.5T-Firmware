// FUN_01282144 @ 01282144 size=52 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01282144(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_013025ec();
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01282174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_00404754,2);
    return uVar2;
  }
  return 1;
}

