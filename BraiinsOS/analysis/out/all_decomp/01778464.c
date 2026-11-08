// FUN_01778464 @ 01778464 size=232 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_ed25519.c | /aws-lc/crypto/fipsmodule/evp/p_ed25519.c

undefined8 FUN_01778464(int param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if (*(char *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x40) == '\0') {
    FUN_016e9cd0(6,0,0x82,"/aws-lc/crypto/fipsmodule/evp/p_ed25519.c",0x29);
  }
  else {
    if (param_2 == 0) {
LAB_017784c4:
      *param_3 = 0x40;
      return 1;
    }
    if (*param_3 < 0x40) {
      FUN_016e9cd0(6,0,100,"/aws-lc/crypto/fipsmodule/evp/p_ed25519.c",0x33);
    }
    else {
      iVar1 = FUN_01778450(param_2,param_4,param_5);
      if (iVar1 != 0) goto LAB_017784c4;
    }
  }
  return 0;
}

