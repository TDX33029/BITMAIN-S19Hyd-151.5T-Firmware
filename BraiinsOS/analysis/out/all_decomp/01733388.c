// FUN_01733388 @ 01733388 size=284 calls_out=5 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ec/ec_key.c | /aws-lc/crypto/fipsmodule/ec/ec_key.c

undefined8 FUN_01733388(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *param_1;
  if (iVar3 == 0) {
    FUN_016e9cd0(0xf,0,0x72,"/aws-lc/crypto/fipsmodule/ec/ec_key.c",0xb1);
  }
  else {
    piVar1 = (int *)FUN_0177a9c0(0x58);
    if (piVar1 != (int *)0x0) {
      iVar2 = *(int *)(iVar3 + 0xec);
      piVar4 = piVar1 + 5;
      piVar1[4] = 2;
      iVar3 = *param_1;
      *piVar1 = (int)piVar4;
      piVar1[1] = iVar2;
      piVar1[2] = iVar2;
      iVar3 = FUN_017330f0(iVar3,piVar4,param_2);
      if ((iVar3 != 0) && (iVar3 = FUN_01733208(*param_1,piVar4), iVar3 == 0)) {
        FUN_0177aafc(param_1[2]);
        param_1[2] = (int)piVar1;
        return 1;
      }
      FUN_016e9cd0(0xf,0,0x71,"/aws-lc/crypto/fipsmodule/ec/ec_key.c",0xbe);
      FUN_0177aafc(piVar1);
    }
  }
  return 0;
}

