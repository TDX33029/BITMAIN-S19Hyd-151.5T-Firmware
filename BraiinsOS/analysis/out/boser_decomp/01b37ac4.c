// FUN_01b37ac4 @ 01b37ac4 size=172 calls_out=1 calls_in=4
// strings: /aws-lc/crypto/fipsmodule/cipher/aead.c

void FUN_01b37ac4(undefined4 *param_1,byte *param_2,undefined4 param_3,uint param_4,
                 undefined4 param_5,undefined4 param_6)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  
  bVar1 = *param_2;
  if (bVar1 == param_4) {
    pcVar3 = *(code **)(param_2 + 0xc);
    *param_1 = param_2;
    if (pcVar3 == (code *)0x0) {
      iVar2 = (**(code **)(param_2 + 0x10))(param_1,param_3,(uint)bVar1,param_5,param_6);
    }
    else {
      iVar2 = (*pcVar3)();
    }
    if (iVar2 != 0) {
      return;
    }
  }
  else {
    FUN_01b053d4(0x1e,0,0x78,"/aws-lc/crypto/fipsmodule/cipher/aead.c",0x49);
  }
  *param_1 = 0;
  return;
}

