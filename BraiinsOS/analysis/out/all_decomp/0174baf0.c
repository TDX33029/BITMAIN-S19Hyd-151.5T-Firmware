// FUN_0174baf0 @ 0174baf0 size=344 calls_out=8 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/ec/ec_key.c | /aws-lc/crypto/fipsmodule/ec/ec_key.c

undefined4 FUN_0174baf0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    FUN_016e9cd0(0xf,0,0x43,"/aws-lc/crypto/fipsmodule/ec/ec_key.c",0x1aa);
  }
  else {
    iVar1 = FUN_0172c66c();
    if (iVar1 < 0xa0) {
      FUN_016e9cd0(0xf,0,0x70,"/aws-lc/crypto/fipsmodule/ec/ec_key.c",0x1b0);
    }
    else {
      iVar3 = *param_1;
      piVar2 = (int *)FUN_0177a9c0(0x58);
      iVar1 = *param_1;
      if (piVar2 == (int *)0x0) {
        iVar1 = FUN_01733c9c(iVar1);
      }
      else {
        iVar3 = *(int *)(iVar3 + 0xec);
        piVar4 = piVar2 + 5;
        piVar2[1] = iVar3;
        *piVar2 = (int)piVar4;
        piVar2[2] = iVar3;
        piVar2[4] = 2;
        iVar1 = FUN_01733c9c(iVar1);
        if (((iVar1 != 0) && (iVar3 = FUN_0174baa4(*param_1,piVar4,&DAT_0042855c), iVar3 != 0)) &&
           (iVar3 = FUN_01736458(*param_1,iVar1 + 4,piVar4), iVar3 != 0)) {
          FUN_0177aafc(param_1[2]);
          param_1[2] = (int)piVar2;
          FUN_0172c788(param_1[1]);
          param_1[1] = iVar1;
          return 1;
        }
      }
      FUN_0172c788(iVar1);
      FUN_0177aafc(piVar2);
    }
  }
  return 0;
}

