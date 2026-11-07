// FUN_0174afc4 @ 0174afc4 size=376 calls_out=4 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/bn/random.c | /aws-lc/crypto/fipsmodule/bn/random.c

undefined8 FUN_0174afc4(int param_1,uint param_2,uint *param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  
  if (param_4 != 0) {
    puVar3 = param_3 + param_4;
    iVar4 = param_4;
    do {
      if (puVar3[-1] != 0) {
        if ((iVar4 != 1) || (param_2 < *param_3)) {
          iVar2 = (int)puVar3 + (-4 - (int)param_3);
          uVar5 = *(uint *)((int)param_3 + iVar2);
          uVar5 = uVar5 | uVar5 >> 1;
          uVar5 = uVar5 | uVar5 >> 2;
          uVar5 = uVar5 | uVar5 >> 4;
          uVar5 = uVar5 | uVar5 >> 8;
          if ((param_4 - iVar4 & 0x3fffffffU) != 0) {
            FUN_016dd606(param_1 + iVar4 * 4,0);
          }
          puVar3 = (uint *)(param_1 + iVar2);
          iVar2 = 99;
          do {
            FUN_0174af64(param_1,iVar4 * 4,param_5);
            *puVar3 = *puVar3 & (uVar5 | uVar5 >> 0x10);
            iVar1 = FUN_0171e59c(param_1,param_2,param_3,iVar4);
            if (iVar1 != 0) {
              return 1;
            }
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          FUN_016e9cd0(3,0,0x73,"/aws-lc/crypto/fipsmodule/bn/random.c",0xac);
          return 0;
        }
        break;
      }
      iVar4 = iVar4 + -1;
      puVar3 = puVar3 + -1;
    } while (iVar4 != 0);
  }
  FUN_016e9cd0(3,0,0x6c,"/aws-lc/crypto/fipsmodule/bn/random.c",0x7e);
  return 0;
}

