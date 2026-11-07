// FUN_008eccb8 @ 008eccb8 size=104 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_008eccb8(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[2];
  if ((uVar1 & 0x10000000) == 0) {
    iVar2 = FUN_00fb1850((int)*(undefined8 *)*param_1,param_2,(uVar1 & 0x3fffff) >> 0x15,0);
  }
  else {
    iVar2 = FUN_00fb1470(param_2,(uVar1 & 0x3fffff) >> 0x15,*(undefined2 *)((int)param_2 + 0xe));
  }
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x008ecd1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2," V",2);
    return uVar3;
  }
  return 1;
}

