// FUN_01752c0c @ 01752c0c size=232 calls_out=2 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa.c

ulonglong FUN_01752c0c(int *param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5,
                      undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  ulonglong uVar4;
  
  if ((*param_1 == 0) || (pcVar3 = *(code **)(*param_1 + 0x14), pcVar3 == (code *)0x0)) {
    uVar4 = FUN_017526d8(param_1,param_2,param_3);
    return uVar4;
  }
  if (param_4 < 0) {
    FUN_016e9cd0(4,0,0x45,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x229);
    *param_2 = 0;
  }
  else {
    iVar1 = (*pcVar3)(param_4,param_5,param_3,param_1,param_7);
    if (-1 < iVar1) {
      uVar2 = 1;
      *param_2 = iVar1;
      goto LAB_01752c80;
    }
    *param_2 = 0;
  }
  uVar2 = 0;
LAB_01752c80:
  return (ulonglong)uVar2;
}

