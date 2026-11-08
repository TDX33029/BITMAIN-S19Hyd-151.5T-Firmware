// FUN_01723218 @ 01723218 size=212 calls_out=1 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/cipher/aead.c

int FUN_01723218(undefined4 *param_1,byte *param_2,undefined4 param_3,uint param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  
  uVar2 = (uint)*param_2;
  if (uVar2 != param_4) {
    FUN_016e9cd0(0x1e,0,0x78,"/aws-lc/crypto/fipsmodule/cipher/aead.c",0x49);
    *param_1 = 0;
    return 0;
  }
  pcVar3 = *(code **)(param_2 + 0xc);
  *param_1 = param_2;
  if (pcVar3 == (code *)0x0) {
    iVar1 = (**(code **)(param_2 + 0x10))(param_1,param_3,uVar2,param_5,param_6);
  }
  else {
    iVar1 = (*pcVar3)(param_1,param_3,uVar2,param_5);
  }
  if (iVar1 == 0) {
    *param_1 = 0;
  }
  return iVar1;
}

