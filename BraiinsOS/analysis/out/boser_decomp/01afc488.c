// FUN_01afc488 @ 01afc488 size=364 calls_out=8 calls_in=1
// strings: /aws-lc/crypto/bn_extra/convert.c

int FUN_01afc488(int *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_2 != (char *)0x0) && (cVar1 = *param_2, cVar1 != '\0')) {
    if (cVar1 == '-') {
      param_2 = param_2 + 1;
    }
    uVar2 = (uint)(cVar1 == '-');
    iVar5 = 0;
    while (iVar3 = FUN_01b6b7e4(param_2[iVar5]), iVar3 != 0) {
      if (iVar5 == 0x7fffffff - uVar2) goto LAB_01afc0c0;
      iVar5 = iVar5 + 1;
    }
    if (iVar5 != 0) {
LAB_01afc0c0:
      if (param_1 != (int *)0x0) {
        iVar3 = *param_1;
        if (iVar3 == 0) {
          iVar3 = FUN_01b2adb8();
          if (iVar3 == 0) {
            return 0;
          }
        }
        else {
          FUN_01b2af70(iVar3);
        }
        iVar4 = FUN_01afc218(iVar3,param_2,iVar5);
        if (iVar4 == 0) {
          if (*param_1 == 0) {
            FUN_01b1f904(iVar3);
            return 0;
          }
          return 0;
        }
        FUN_01b2b964(iVar3);
        iVar4 = FUN_01b2e300(iVar3);
        if (iVar4 == 0) {
          *(uint *)(iVar3 + 0xc) = uVar2;
        }
        *param_1 = iVar3;
      }
      return uVar2 + iVar5;
    }
    FUN_01b053d4(3,0,0x77,"/aws-lc/crypto/bn_extra/convert.c",0x90);
  }
  return 0;
}

