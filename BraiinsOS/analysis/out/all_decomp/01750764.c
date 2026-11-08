// FUN_01750764 @ 01750764 size=1080 calls_out=17 calls_in=1
// strings: aws_lc_0_39_0_RSA_padding_add_PKCS1_PSS_mgf1 | /aws-lc/crypto/fipsmodule/rsa/padding.c | emLen >= 1 | /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c

undefined4
FUN_01750764(int param_1,byte *param_2,undefined4 param_3,int param_4,int param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint *puVar6;
  byte *pbVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  byte *pbVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int local_5c;
  uint *local_4c;
  undefined1 auStack_44 [24];
  int local_2c;
  
  if (param_5 == 0) {
    param_5 = param_4;
  }
  local_2c = DAT_018ddaf8;
  uVar1 = FUN_0172a898(param_4,param_2,&PTR_018bc3f4,0);
  iVar2 = FUN_01717e5c(*(undefined4 *)(param_1 + 4));
  if (iVar2 == 0) {
    iVar2 = FUN_01714eb4(*(undefined4 *)(param_1 + 4));
    uVar13 = iVar2 - 1U & 7;
    uVar3 = FUN_0175009c(param_1);
    pbVar11 = param_2;
    if (uVar13 == 0) {
      if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2c94("emLen >= 1","/aws-lc/crypto/fipsmodule/rsa/padding.c",0x125,
                     "aws_lc_0_39_0_RSA_padding_add_PKCS1_PSS_mgf1");
      }
      uVar3 = uVar3 - 1;
      pbVar11 = param_2 + 1;
      *param_2 = 0;
    }
    uVar12 = 0;
    if (uVar3 < uVar1 + 2) {
      FUN_016e9cd0(4,0,0x72,"/aws-lc/crypto/fipsmodule/rsa/padding.c",299);
      local_4c = (uint *)0x0;
      goto LAB_01750870;
    }
    if (param_6 == 0xffffffff) {
      param_6 = uVar1;
LAB_01750820:
      local_5c = uVar3 - uVar1;
      if (local_5c - 2U < param_6) {
        FUN_016e9cd0(4,0,0x72,"/aws-lc/crypto/fipsmodule/rsa/padding.c",0x140);
        goto LAB_01750910;
      }
    }
    else {
      if (param_6 != 0xfffffffe) {
        if ((int)param_6 < 0) {
          FUN_016e9cd0(4,0,0x8a,"/aws-lc/crypto/fipsmodule/rsa/padding.c",0x139);
          goto LAB_01750910;
        }
        goto LAB_01750820;
      }
      local_5c = uVar3 - uVar1;
      param_6 = (-2 - uVar1) + uVar3;
    }
    if (param_6 == 0) {
      local_4c = (uint *)0x0;
    }
    else {
      local_4c = (uint *)FUN_0177a6c0(param_6);
      if (local_4c == (uint *)0x0) goto LAB_01750910;
      iVar2 = FUN_0174bccc(local_4c,param_6);
      if (iVar2 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2c24();
      }
    }
    FUN_0172aab0(auStack_44);
    iVar2 = FUN_0173e2d8(auStack_44,param_4,0);
    if ((((iVar2 != 0) && (iVar2 = FUN_0172af78(auStack_44,&DAT_00428f08,8), iVar2 != 0)) &&
        (iVar2 = FUN_0172af78(auStack_44,param_3,uVar1), iVar2 != 0)) &&
       (iVar2 = FUN_0172af78(auStack_44,local_4c,param_6), iVar2 != 0)) {
      local_5c = local_5c + -1;
      iVar2 = FUN_0172afb8(auStack_44,pbVar11 + local_5c,0);
      if (iVar2 != 0) {
        FUN_0172aae8(auStack_44);
        iVar2 = FUN_0174eaac(pbVar11,local_5c,pbVar11 + local_5c,uVar1,param_5);
        if (iVar2 != 0) {
          iVar2 = ((uVar3 - uVar1) + -2) - param_6;
          pbVar11[iVar2] = pbVar11[iVar2] ^ 1;
          if (param_6 != 0) {
            pbVar4 = pbVar11 + iVar2 + 1;
            if ((param_6 - 1 < 4) ||
               (puVar8 = (uint *)(pbVar11 + (local_5c - param_6)),
               (byte *)((int)puVar8 + (-1 - (int)local_4c)) < (byte *)0x3)) {
              pbVar7 = (byte *)((int)local_4c + -1);
              do {
                pbVar5 = pbVar4 + 1;
                pbVar7 = pbVar7 + 1;
                *pbVar4 = *pbVar4 ^ *pbVar7;
                pbVar4 = pbVar5;
              } while (pbVar5 != pbVar11 + param_6 + 1 + iVar2);
            }
            else {
              uVar14 = param_6 & 0xfffffffc;
              uVar1 = param_6 >> 2;
              puVar6 = local_4c;
              puVar9 = puVar8;
              do {
                puVar10 = puVar9 + 1;
                *puVar9 = *puVar6 ^ *puVar9;
                puVar6 = puVar6 + 1;
                puVar9 = puVar10;
              } while ((uint *)((int)puVar8 + uVar14) != puVar10);
              if (param_6 != uVar14) {
                pbVar4[uVar1 * 4] = (byte)local_4c[uVar1] ^ pbVar4[uVar1 * 4];
                if (uVar14 + 1 < param_6) {
                  pbVar4[uVar14 + 1] = *(byte *)((int)local_4c + uVar14 + 1) ^ pbVar4[uVar14 + 1];
                  if (uVar14 + 2 < param_6) {
                    pbVar4[uVar14 + 2] = *(byte *)((int)local_4c + uVar14 + 2) ^ pbVar4[uVar14 + 2];
                  }
                }
              }
            }
          }
          uVar12 = 1;
          if (uVar13 != 0) {
            *pbVar11 = *pbVar11 & (byte)(0xff >> (8 - uVar13 & 0xff));
          }
          pbVar11[uVar3 - 1] = 0xbc;
        }
        goto LAB_01750870;
      }
    }
    FUN_0172aae8(auStack_44);
  }
  else {
    FUN_016e9cd0(4,0,0x78,"/aws-lc/crypto/fipsmodule/rsa/padding.c",0x11e);
LAB_01750910:
    local_4c = (uint *)0x0;
    uVar12 = 0;
  }
LAB_01750870:
  FUN_0177aafc(local_4c);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar12;
}

