// FUN_01b3d464 @ 01b3d464 size=180 calls_out=1 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ec/ec.c

undefined4 FUN_01b3d464(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if (param_3 == 0 || (param_4 == 0 || param_5 == 0)) {
    FUN_01b053d4(0xf,0,0x43,"/aws-lc/crypto/fipsmodule/ec/ec.c",0x360);
    uVar1 = 0;
  }
  else {
    pcVar2 = *(code **)(*param_1 + 0x1c);
    if (pcVar2 == (code *)0x0) {
      uVar1 = (**(code **)(*param_1 + 0x20))();
    }
    else {
      (*pcVar2)();
      uVar1 = 1;
    }
  }
  return uVar1;
}

