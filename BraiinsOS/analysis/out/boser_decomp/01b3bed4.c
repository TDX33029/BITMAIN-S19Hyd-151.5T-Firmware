// FUN_01b3bed4 @ 01b3bed4 size=1012 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_rsa.c | /aws-lc/crypto/fipsmodule/evp/p_rsa.c | /aws-lc/crypto/fipsmodule/evp/p_rsa.c | /aws-lc/crypto/fipsmodule/evp/p_rsa.c | /aws-lc/crypto/fipsmodule/evp/p_rsa.c | /aws-lc/crypto/fipsmodule/evp/p_rsa.c

undefined4 FUN_01b3bed4(undefined4 *param_1,int param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  
  if (0x100c < param_2) {
LAB_01b3bf1c:
    uVar6 = 0x255;
    uVar3 = 0x65;
    goto LAB_01b3bfc4;
  }
  puVar5 = (uint *)param_1[5];
  if (param_2 < 0x1001) {
    if (param_2 == 1) {
      if (param_4 == (uint *)0x0 || puVar5[2] != 3) {
        iVar2 = FUN_01b3b600(*param_1,puVar5[6],puVar5[3]);
        if (iVar2 != 0) goto LAB_01b3c1d8;
        uVar6 = 0x21e;
        uVar3 = 500;
        goto LAB_01b3bfc4;
      }
      uVar6 = 0x1a7;
      goto LAB_01b3c158;
    }
    if (param_2 != 2) goto LAB_01b3bf1c;
    goto LAB_01b3c16c;
  }
  switch(param_2) {
  case 0x1002:
    uVar4 = puVar5[2];
    goto LAB_01b3c064;
  case 0x1003:
  case 0x1004:
    if (puVar5[2] == 6) {
      if (param_2 == 0x1004) {
        uVar4 = puVar5[5];
        goto LAB_01b3c064;
      }
      if ((int)param_3 < -2) {
        return 0;
      }
      uVar4 = puVar5[6];
      if (uVar4 == 0xffffffff) {
LAB_01b3c0f8:
        puVar5[5] = param_3;
        return 1;
      }
      if (param_3 == 0xffffffff) {
        uVar1 = FUN_01b3b6b4(puVar5[3]);
        if (uVar4 <= uVar1) goto LAB_01b3c0f8;
      }
      else {
        uVar1 = ~param_3 >> 0x1f;
        if ((int)uVar4 <= (int)param_3) {
          uVar1 = 0;
        }
        if (uVar1 == 0) goto LAB_01b3c0f8;
      }
      uVar6 = 0x1ed;
    }
    else {
      uVar6 = 0x1d8;
    }
    uVar3 = 0x74;
    break;
  case 0x1005:
    if (0xff < (int)param_3) {
      *puVar5 = param_3;
      return 1;
    }
    uVar6 = 0x1f7;
    uVar3 = 0x70;
    break;
  case 0x1006:
    if (param_4 == (uint *)0x0) {
      return 0;
    }
    FUN_01b1f904(puVar5[1]);
    puVar5[1] = (uint)param_4;
    return 1;
  case 0x1007:
  case 0x1008:
    if (puVar5[2] != 4) {
      uVar6 = 0x20d;
      goto LAB_01b3c158;
    }
    if (param_2 != 0x1008) {
LAB_01b3c1d8:
      puVar5[3] = (uint)param_4;
      return 1;
    }
    goto LAB_01b3c16c;
  case 0x1009:
  case 0x100a:
    if ((puVar5[2] & 0xfffffffd) != 4) {
      uVar6 = 0x22c;
      uVar3 = 0x71;
      break;
    }
    uVar4 = puVar5[4];
    if (param_2 != 0x100a) {
      iVar2 = FUN_01b3b600(*param_1,puVar5[6],uVar4,param_4);
      if (iVar2 != 0) {
        puVar5[4] = (uint)param_4;
        return 1;
      }
      uVar6 = 0x239;
      uVar3 = 0x71;
      break;
    }
    if (uVar4 != 0) {
      *param_4 = uVar4;
      return 1;
    }
LAB_01b3c16c:
    uVar4 = puVar5[3];
LAB_01b3c064:
    *param_4 = uVar4;
    return 1;
  case 0x100b:
    if (puVar5[2] == 4) {
      FUN_01b6b1c4(puVar5[8]);
      puVar5[8] = *param_4;
      puVar5[9] = param_4[1];
      return 1;
    }
    uVar6 = 0x242;
    goto LAB_01b3c158;
  case 0x100c:
    if (puVar5[2] == 4) {
      FUN_01afd61c(param_4,puVar5[8],puVar5[9]);
      return 1;
    }
    uVar6 = 0x24e;
LAB_01b3c158:
    uVar3 = 0x73;
    break;
  default:
    if ((param_3 < 7) && ((0x5aU >> (param_3 & 0xff) & 1) != 0)) {
      if (param_3 == 3 && puVar5[3] != 0) {
        FUN_01b053d4(6,0,0x73,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",0x1a7);
        goto LAB_01b3bfac;
      }
      if (param_3 == 6) {
        if ((param_1[4] & 0x18) != 0) {
LAB_01b3bffc:
          if (puVar5[3] == 0) {
            uVar4 = FUN_01b3be88();
            puVar5[3] = uVar4;
          }
LAB_01b3c054:
          puVar5[2] = param_3;
          return 1;
        }
        goto LAB_01b3bfac;
      }
      if ((param_3 == 4) && ((param_1[4] & 0xc0) == 0)) goto LAB_01b3bfac;
      if (*(int *)*param_1 != 0x390) {
        if ((param_3 & 0xfffffffd) != 4) goto LAB_01b3c054;
        goto LAB_01b3bffc;
      }
      uVar6 = 0x1c7;
    }
    else {
LAB_01b3bfac:
      uVar6 = 0x1c3;
    }
    uVar3 = 0x6d;
  }
LAB_01b3bfc4:
  FUN_01b053d4(6,0,uVar3,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",uVar6);
  return 0;
}

