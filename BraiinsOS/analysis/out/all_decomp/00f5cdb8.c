// FUN_00f5cdb8 @ 00f5cdb8 size=100 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00f5cdb8(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = param_2[2];
  if ((uVar3 & 0x10000000) == 0) {
    iVar1 = FUN_00fb1850((int)*param_1,param_2,(uVar3 & 0x3fffff) >> 0x15,0);
  }
  else {
    iVar1 = FUN_00fb1470(param_2,(uVar3 & 0x3fffff) >> 0x15,*(undefined2 *)((int)param_2 + 0xe));
  }
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00f5ce18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2," V",2);
    return uVar2;
  }
  return 1;
}

