// FUN_0172c878 @ 0172c878 size=236 calls_out=1 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ec/ec.c

undefined4 FUN_0172c878(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if (param_3 == 0 || (param_4 == 0 || param_5 == 0)) {
    FUN_016e9cd0(0xf,0,0x43,"/aws-lc/crypto/fipsmodule/ec/ec.c",0x360);
    return 0;
  }
  pcVar2 = *(code **)(*param_1 + 0x1c);
  if (pcVar2 == (code *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x20))();
    return uVar1;
  }
  (*pcVar2)();
  return 1;
}

