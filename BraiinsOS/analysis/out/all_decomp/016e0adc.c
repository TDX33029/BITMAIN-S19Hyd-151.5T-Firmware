// FUN_016e0adc @ 016e0adc size=468 calls_out=9 calls_in=1
// strings: /aws-lc/crypto/bn_extra/convert.c

byte * FUN_016e0adc(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  
  if ((param_2 != (char *)0x0) && (cVar1 = *param_2, cVar1 != '\0')) {
    if (cVar1 == '-') {
      param_2 = param_2 + 1;
    }
    uVar4 = (uint)(cVar1 == '-');
    pbVar5 = (byte *)(param_2 + -1);
    pbVar6 = pbVar5;
    do {
      pbVar8 = pbVar6;
      pbVar6 = pbVar8 + 1;
      iVar2 = FUN_0177b23c(*pbVar6);
      if (iVar2 == 0) break;
    } while ((byte *)(param_2 + (0x7fffffff - uVar4)) != pbVar6);
    pbVar8 = pbVar8 + (1 - (int)param_2);
    if (pbVar8 != (byte *)0x0) {
      if (param_1 != (int *)0x0) {
        iVar2 = *param_1;
        if (iVar2 == 0) {
          iVar2 = FUN_017141d0();
          if (iVar2 == 0) {
            return (byte *)0x0;
          }
        }
        else {
          FUN_01714350(iVar2);
        }
        iVar3 = 0;
        if ((int)pbVar8 % 9 != 0) {
          iVar3 = 9 - (int)pbVar8 % 9;
        }
        if (0 < (int)pbVar8) {
          pbVar6 = pbVar8 + (int)pbVar5;
          iVar7 = 0;
          do {
            while( true ) {
              pbVar5 = pbVar5 + 1;
              iVar3 = iVar3 + 1;
              iVar7 = iVar7 * 10 + (*pbVar5 - 0x30);
              if (iVar3 == 9) break;
              if (pbVar6 == pbVar5) goto LAB_016e0c14;
            }
            iVar3 = FUN_0171da24(iVar2,&DAT_3b9aca00);
            if (iVar3 == 0) {
LAB_016e0c44:
              if (*param_1 == 0) {
                FUN_017046e0(iVar2);
                return (byte *)0x0;
              }
              return (byte *)0x0;
            }
            iVar3 = FUN_0171801c(iVar2,iVar7);
            if (iVar3 == 0) goto LAB_016e0c44;
            iVar3 = 0;
            iVar7 = 0;
          } while (pbVar6 != pbVar5);
        }
LAB_016e0c14:
        FUN_01714f48(iVar2);
        iVar3 = FUN_01717e5c(iVar2);
        if (iVar3 == 0) {
          *(uint *)(iVar2 + 0xc) = uVar4;
        }
        *param_1 = iVar2;
      }
      return pbVar8 + uVar4;
    }
    FUN_016e9cd0(3,0,0x77,"/aws-lc/crypto/bn_extra/convert.c",0x90);
  }
  return (byte *)0x0;
}

