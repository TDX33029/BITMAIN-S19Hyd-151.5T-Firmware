// FUN_0172b240 @ 0172b240 size=1288 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_rsa.c | /aws-lc/crypto/fipsmodule/evp/p_rsa.c | /aws-lc/crypto/fipsmodule/evp/p_rsa.c | /aws-lc/crypto/fipsmodule/evp/p_rsa.c | /aws-lc/crypto/fipsmodule/evp/p_rsa.c | /aws-lc/crypto/fipsmodule/evp/p_rsa.c

undefined8 FUN_0172b240(undefined4 *param_1,int param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  
  if (0x100c < param_2) {
LAB_0172b488:
    FUN_016e9cd0(6,0,0x65,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",0x255);
    return 0;
  }
  puVar5 = (uint *)param_1[5];
  if (param_2 < 0x1001) {
    if (param_2 == 1) {
      if (puVar5[2] == 3 && param_4 != (uint *)0x0) {
        uVar6 = 0x1a7;
        goto LAB_0172b460;
      }
      if (puVar5[6] == 0xffffffff || *(int *)*param_1 != 0x390) {
LAB_0172b3bc:
        puVar5[3] = (uint)param_4;
        return 1;
      }
      if (puVar5[3] != 0 && param_4 != (uint *)0x0) {
        iVar2 = FUN_0172a6f0();
        iVar3 = FUN_0172a6f0(param_4);
        if (iVar2 == iVar3) goto LAB_0172b3bc;
      }
      FUN_016e9cd0(6,0,500,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",0x21e);
      return 0;
    }
    if (param_2 == 2) goto LAB_0172b2a8;
    goto LAB_0172b488;
  }
  switch(param_2) {
  case 0x1002:
    *param_4 = puVar5[2];
    return 1;
  case 0x1003:
  case 0x1004:
    if (puVar5[2] == 6) {
      if (param_2 == 0x1004) {
        *param_4 = puVar5[5];
        return 1;
      }
      if ((int)param_3 < -2) {
        return 0;
      }
      uVar4 = puVar5[6];
      if (uVar4 == 0xffffffff) {
LAB_0172b350:
        puVar5[5] = param_3;
        return 1;
      }
      if (param_3 == 0xffffffff) {
        uVar1 = FUN_0172a898(puVar5[3]);
        if (uVar4 <= uVar1) goto LAB_0172b350;
      }
      else {
        uVar1 = ~param_3 >> 0x1f;
        if ((int)uVar4 <= (int)param_3) {
          uVar1 = 0;
        }
        if (uVar1 == 0) goto LAB_0172b350;
      }
      uVar6 = 0x1ed;
    }
    else {
      uVar6 = 0x1d8;
    }
    FUN_016e9cd0(6,0,0x74,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",uVar6);
    return 0;
  case 0x1005:
    if ((int)param_3 < 0x100) {
      FUN_016e9cd0(6,0,0x70,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",0x1f7);
      return 0;
    }
    *puVar5 = param_3;
    return 1;
  case 0x1006:
    if (param_4 == (uint *)0x0) {
      return 0;
    }
    FUN_017046e0(puVar5[1]);
    puVar5[1] = (uint)param_4;
    return 1;
  case 0x1007:
  case 0x1008:
    if (puVar5[2] == 4) {
      if (param_2 != 0x1008) goto LAB_0172b3bc;
LAB_0172b2a8:
      *param_4 = puVar5[3];
      return 1;
    }
    uVar6 = 0x20d;
    break;
  case 0x1009:
  case 0x100a:
    if ((puVar5[2] & 0xfffffffd) == 4) {
      uVar4 = puVar5[4];
      if (param_2 == 0x100a) {
        if (uVar4 != 0) {
          *param_4 = uVar4;
          return 1;
        }
        goto LAB_0172b2a8;
      }
      if (puVar5[6] == 0xffffffff || *(int *)*param_1 != 0x390) {
LAB_0172b508:
        puVar5[4] = (uint)param_4;
        return 1;
      }
      if (uVar4 != 0 && param_4 != (uint *)0x0) {
        iVar2 = FUN_0172a6f0(uVar4);
        iVar3 = FUN_0172a6f0(param_4);
        if (iVar2 == iVar3) goto LAB_0172b508;
      }
      uVar6 = 0x239;
    }
    else {
      uVar6 = 0x22c;
    }
    FUN_016e9cd0(6,0,0x71,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",uVar6);
    return 0;
  case 0x100b:
    if (puVar5[2] == 4) {
      FUN_0177aafc(puVar5[8]);
      uVar4 = param_4[1];
      puVar5[8] = *param_4;
      puVar5[9] = uVar4;
      return 1;
    }
    uVar6 = 0x242;
    break;
  case 0x100c:
    if (puVar5[2] == 4) {
      FUN_016e1d94(param_4,puVar5[8],puVar5[9]);
      return 1;
    }
    uVar6 = 0x24e;
    break;
  default:
    if ((param_3 < 7) && ((0x5aU >> (param_3 & 0xff) & 1) != 0)) {
      if (param_3 == 3 && puVar5[3] != 0) {
        FUN_016e9cd0(6,0,0x73,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",0x1a7);
      }
      else {
        if (param_3 != 6) {
          if (param_3 == 4) {
            if ((param_1[4] & 0xc0) == 0) goto LAB_0172b6d0;
            if (*(int *)*param_1 != 0x390) goto LAB_0172b700;
          }
          else if (*(int *)*param_1 != 0x390) goto LAB_0172b6a8;
          uVar6 = 0x1c7;
          goto LAB_0172b6dc;
        }
        if ((param_1[4] & 0x18) != 0) {
LAB_0172b700:
          if (puVar5[3] == 0) {
            uVar4 = FUN_0172b1f4();
            puVar5[3] = uVar4;
          }
LAB_0172b6a8:
          puVar5[2] = param_3;
          return 1;
        }
      }
    }
LAB_0172b6d0:
    uVar6 = 0x1c3;
LAB_0172b6dc:
    FUN_016e9cd0(6,0,0x6d,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",uVar6);
    return 0;
  }
LAB_0172b460:
  FUN_016e9cd0(6,0,0x73,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",uVar6);
  return 0;
}

