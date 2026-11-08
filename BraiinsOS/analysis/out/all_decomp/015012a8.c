// FUN_015012a8 @ 015012a8 size=64 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_015012a8(uint *param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *param_1 | (uint)(param_1[1] < param_3);
  *param_1 = uVar2;
  param_1[1] = param_1[1] - param_3;
  if (uVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x015012e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(((undefined4 *)param_1[2])[1] + 0xc))(*(undefined4 *)param_1[2]);
    return uVar1;
  }
  return 1;
}

