// FUN_01b3d3e8 @ 01b3d3e8 size=120 calls_out=1 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ec/ec.c

undefined8 FUN_01b3d3e8(int *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 4) == (code *)0x0) {
    FUN_01b053d4(0xf,0,0x42,"/aws-lc/crypto/fipsmodule/ec/ec.c",0x294);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x01b3d41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 4))();
  return uVar1;
}

