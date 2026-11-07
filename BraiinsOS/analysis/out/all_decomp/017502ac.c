// FUN_017502ac @ 017502ac size=1164 calls_out=14 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c

undefined4
FUN_017502ac(int param_1,undefined4 param_2,int param_3,int param_4,uint *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  undefined4 uVar12;
  byte *pbVar13;
  uint *puVar14;
  undefined1 auStack_84 [24];
  undefined1 auStack_6c [64];
  int local_2c;
  
  if (param_4 == 0) {
    param_4 = param_3;
  }
  local_2c = DAT_018ddaf8;
  FUN_0172aab0(auStack_84,param_2,&PTR_018bc3f4,0);
  iVar1 = FUN_0172a898(param_3);
  if (param_6 == -1) {
    param_6 = iVar1;
LAB_0175032c:
    iVar2 = FUN_01714eb4(*(undefined4 *)(param_1 + 4));
    uVar11 = iVar2 - 1U & 7;
    uVar3 = FUN_0175009c(param_1);
    if (((uint)(byte)*param_5 & 0xff << uVar11) != 0) {
      puVar14 = (uint *)0x0;
      uVar12 = 0;
      FUN_016e9cd0(4,0,0x7a,"/aws-lc/crypto/fipsmodule/rsa/padding.c",0xc1);
      goto LAB_017503bc;
    }
    if (uVar11 == 0) {
      uVar3 = uVar3 - 1;
      param_5 = (uint *)((int)param_5 + 1);
    }
    if ((uVar3 < iVar1 + 2U) || ((-1 < param_6 && (uVar3 < param_6 + iVar1 + 2U)))) {
      FUN_016e9cd0(4,0,0x71,"/aws-lc/crypto/fipsmodule/rsa/padding.c",0xcb);
    }
    else if (*(byte *)((int)param_5 + (uVar3 - 1)) == 0xbc) {
      iVar2 = uVar3 - iVar1;
      uVar3 = iVar2 - 1;
      puVar14 = (uint *)FUN_0177a6c0(uVar3);
      if (puVar14 != (uint *)0x0) {
        iVar4 = FUN_0174eaac();
        uVar12 = 0;
        if (iVar4 != 0) {
          if (uVar3 != 0) {
            if ((iVar2 - 2U < 4) || ((byte *)((int)puVar14 + (-1 - (int)param_5)) < (byte *)0x3)) {
              pbVar13 = (byte *)((int)param_5 + -1);
              pbVar10 = (byte *)((int)puVar14 + -1);
              do {
                pbVar10 = pbVar10 + 1;
                pbVar13 = pbVar13 + 1;
                *pbVar10 = *pbVar13 ^ *pbVar10;
              } while (pbVar10 != (byte *)((iVar2 - 2U) + (int)puVar14));
            }
            else {
              uVar5 = uVar3 & 0xfffffffc;
              uVar9 = uVar3 >> 2;
              puVar6 = param_5;
              puVar7 = puVar14;
              do {
                puVar8 = puVar7 + 1;
                *puVar7 = *puVar6 ^ *puVar7;
                puVar6 = puVar6 + 1;
                puVar7 = puVar8;
              } while (puVar8 != (uint *)((int)puVar14 + uVar5));
              if (uVar3 != uVar5) {
                *(byte *)(puVar14 + uVar9) = (byte)param_5[uVar9] ^ (byte)puVar14[uVar9];
                uVar9 = uVar5 + 1;
                if (uVar9 < uVar3) {
                  uVar5 = uVar5 + 2;
                  *(byte *)((int)puVar14 + uVar9) =
                       *(byte *)((int)param_5 + uVar9) ^ *(byte *)((int)puVar14 + uVar9);
                  if (uVar5 < uVar3) {
                    *(byte *)((int)puVar14 + uVar5) =
                         *(byte *)((int)param_5 + uVar5) ^ *(byte *)((int)puVar14 + uVar5);
                  }
                }
              }
            }
          }
          uVar9 = (uint)(byte)*puVar14;
          if (uVar11 != 0) {
            uVar9 = uVar9 & 0xff >> (8 - uVar11 & 0xff);
            *(byte *)puVar14 = (byte)uVar9;
          }
          if (uVar9 == 0) {
            iVar4 = 0;
            puVar6 = puVar14;
            do {
              if (iVar4 == iVar2 + -2) goto LAB_01750578;
              puVar6 = (uint *)((int)puVar6 + 1);
              uVar9 = (uint)*(byte *)puVar6;
              iVar4 = iVar4 + 1;
            } while (uVar9 == 0);
          }
          else {
            iVar4 = 0;
          }
          if (uVar9 == 1) {
            iVar4 = iVar4 + 1;
            iVar2 = param_6;
            if ((param_6 < 0) || (iVar2 = uVar3 - iVar4, iVar2 == param_6)) {
              iVar2 = FUN_0173e2d8(auStack_84,param_3,0,iVar2,param_4);
              if (((iVar2 != 0) &&
                  (((iVar2 = FUN_0172af78(auStack_84,&DAT_00428f08,8), iVar2 != 0 &&
                    (iVar2 = FUN_0172af78(auStack_84,param_2,iVar1), iVar2 != 0)) &&
                   (iVar2 = FUN_0172af78(auStack_84,(byte *)((int)puVar14 + iVar4),uVar3 - iVar4),
                   iVar2 != 0)))) && (iVar2 = FUN_0172afb8(auStack_84,auStack_6c,0), iVar2 != 0)) {
                if ((iVar1 == 0) ||
                   (iVar1 = FUN_016dd50a(auStack_6c,(byte *)((int)param_5 + uVar3),iVar1),
                   iVar1 == 0)) {
                  uVar12 = 1;
                }
                else {
                  FUN_016e9cd0(4,0,0x69,"/aws-lc/crypto/fipsmodule/rsa/padding.c",0xfe);
                }
              }
            }
            else {
              FUN_016e9cd0(4,0,0x8a,"/aws-lc/crypto/fipsmodule/rsa/padding.c",0xf2);
            }
          }
          else {
LAB_01750578:
            FUN_016e9cd0(4,0,0x8b,"/aws-lc/crypto/fipsmodule/rsa/padding.c",0xec);
          }
        }
        goto LAB_017503bc;
      }
    }
    else {
      FUN_016e9cd0(4,0,0x7f,"/aws-lc/crypto/fipsmodule/rsa/padding.c",0xcf);
    }
  }
  else {
    if ((param_6 == -2) || (-3 < param_6)) goto LAB_0175032c;
    FUN_016e9cd0(4,0,0x8a,"/aws-lc/crypto/fipsmodule/rsa/padding.c",0xba);
  }
  puVar14 = (uint *)0x0;
  uVar12 = 0;
LAB_017503bc:
  FUN_0177aafc(puVar14);
  FUN_0172aae8(auStack_84);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar12;
}

