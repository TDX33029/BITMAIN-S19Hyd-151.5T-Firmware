// FUN_01b6b0fc @ 01b6b0fc size=116 calls_out=2 calls_in=4
// strings: /aws-lc/crypto/mem.c

undefined4 FUN_01b6b0fc(uint param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  
  uVar1 = (ulonglong)param_3;
  if ((param_2 == 0) || (uVar1 = (ulonglong)param_2 * (ulonglong)param_1, (int)(uVar1 >> 0x20) == 0)
     ) {
    uVar2 = FUN_01b6b0a8(param_1 * param_2,param_2,(int)uVar1);
    return uVar2;
  }
  FUN_01b053d4(0xe,0,0x45,"/aws-lc/crypto/mem.c",0xa4);
  return 0;
}

