// FUN_017803dc @ 017803dc size=1396 calls_out=12 calls_in=2
// strings: /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c

undefined4
FUN_017803dc(undefined1 *param_1,uint param_2,undefined1 *param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,int param_7,int param_8)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined4 local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  if (param_7 == 0) {
    param_7 = FUN_0172b1f4();
  }
  if (param_8 == 0) {
    param_8 = param_7;
  }
  uVar2 = FUN_0172a898(param_7);
  if (param_2 < (uVar2 + 1) * 2) {
    uVar12 = 0x2f;
LAB_0178082c:
    FUN_016e9cd0(4,0,0x7e,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",uVar12);
  }
  else {
    if (param_4 <= (param_2 - 2) + uVar2 * -2) {
      param_2 = param_2 - 1;
      if (param_2 < uVar2 * 2 + 1) {
        uVar12 = 0x3a;
        goto LAB_0178082c;
      }
      puVar13 = (uint *)(param_1 + uVar2 + 1);
      *param_1 = 0;
      iVar3 = FUN_0173e488(param_5,param_6,puVar13,0,param_7,0);
      if (iVar3 == 0) {
LAB_01780888:
        uVar12 = 0;
        puVar5 = (uint *)0x0;
      }
      else {
        if ((param_2 - param_4) + -1 + uVar2 * -2 != 0) {
          FUN_016dd606((undefined1 *)((int)puVar13 + uVar2),0);
        }
        puVar4 = (undefined1 *)((int)puVar13 + ((param_2 - param_4) - uVar2));
        puVar4[-1] = 1;
        if (param_4 != 0) {
          if (puVar4 < param_3) {
            if (param_3 < puVar4 + param_4) {
LAB_017808ec:
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0,0x17808ec);
              (*pcVar1)();
            }
          }
          else if ((puVar4 != param_3) && (puVar4 < param_3 + param_4)) goto LAB_017808ec;
          FUN_016dd1aa(puVar4,param_3,param_4);
        }
        puVar4 = param_1 + 1;
        iVar3 = FUN_0174bccc(puVar4,uVar2);
        if (iVar3 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_016d2c24();
        }
        param_2 = param_2 - uVar2;
        puVar5 = (uint *)FUN_0177a6c0(param_2);
        if (puVar5 == (uint *)0x0) goto LAB_01780888;
        iVar3 = FUN_0174eaac(puVar5,param_2,puVar4,uVar2,param_8);
        if (iVar3 == 0) {
LAB_01780918:
          uVar12 = 0;
        }
        else {
          uVar12 = 1;
          if (param_2 == 0) {
            iVar3 = FUN_0174eaac(&local_6c,uVar2,puVar13,0,param_8);
            if (iVar3 == 0) goto LAB_01780918;
LAB_01780634:
            if (uVar2 - 1 < 3) {
              uVar10 = 0;
            }
            else {
              uVar10 = uVar2 >> 2;
              *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) ^ local_6c;
              if (((((uVar10 != 1) &&
                    (*(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) ^ local_68, uVar10 != 2)) &&
                   (*(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) ^ local_64, uVar10 != 3)) &&
                  ((((*(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) ^ local_60, uVar10 != 4 &&
                     (*(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) ^ local_5c, uVar10 != 5)
                     ) && ((*(uint *)(param_1 + 0x15) = *(uint *)(param_1 + 0x15) ^ local_58,
                           uVar10 != 6 &&
                           ((*(uint *)(param_1 + 0x19) = *(uint *)(param_1 + 0x19) ^ local_54,
                            uVar10 != 7 &&
                            (*(uint *)(param_1 + 0x1d) = *(uint *)(param_1 + 0x1d) ^ local_50,
                            uVar10 != 8)))))) &&
                   (*(uint *)(param_1 + 0x21) = *(uint *)(param_1 + 0x21) ^ local_4c, uVar10 != 9)))
                  ) && ((((*(uint *)(param_1 + 0x25) = *(uint *)(param_1 + 0x25) ^ local_48,
                          uVar10 != 10 &&
                          (*(uint *)(param_1 + 0x29) = *(uint *)(param_1 + 0x29) ^ local_44,
                          uVar10 != 0xb)) &&
                         (*(uint *)(param_1 + 0x2d) = *(uint *)(param_1 + 0x2d) ^ local_40,
                         uVar10 != 0xc)) &&
                        ((*(uint *)(param_1 + 0x31) = *(uint *)(param_1 + 0x31) ^ local_3c,
                         uVar10 != 0xd &&
                         (*(uint *)(param_1 + 0x35) = *(uint *)(param_1 + 0x35) ^ local_38,
                         uVar10 != 0xe)))))) {
                uVar7 = *(uint *)(param_1 + 0x39) ^ local_34;
                if (uVar10 != 0xf) {
                  local_34 = local_30;
                }
                *(uint *)(param_1 + 0x39) = uVar7;
                if (uVar10 != 0xf) {
                  *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) ^ local_34;
                }
              }
              if ((uVar2 & 3) == 0) goto LAB_01780890;
              uVar10 = uVar2 & 0xfffffffc;
            }
            puVar4[uVar10] = puVar4[uVar10] ^ *(byte *)((int)&local_6c + uVar10);
            uVar7 = uVar10 + 1;
            if (uVar7 < uVar2) {
              uVar11 = uVar10 + 2;
              puVar4[uVar7] = puVar4[uVar7] ^ *(byte *)((int)&local_6c + uVar10 + 1);
              if (uVar11 < uVar2) {
                puVar4[uVar11] = *(byte *)((int)&local_6c + uVar10 + 2) ^ puVar4[uVar11];
              }
            }
          }
          else {
            pbVar14 = (byte *)((int)puVar13 + -1);
            if ((param_2 - 1 < 4) || ((uint)((int)pbVar14 - (int)puVar5) < 3)) {
              pbVar15 = (byte *)((int)puVar5 + -1);
              do {
                pbVar14 = pbVar14 + 1;
                pbVar15 = pbVar15 + 1;
                *pbVar14 = *pbVar14 ^ *pbVar15;
              } while (pbVar14 != (byte *)((int)puVar13 + (param_2 - 1)));
            }
            else {
              uVar7 = param_2 & 0xfffffffc;
              uVar10 = param_2 >> 2;
              puVar6 = puVar5;
              puVar8 = puVar13;
              do {
                puVar9 = puVar8 + 1;
                *puVar8 = *puVar6 ^ *puVar8;
                puVar6 = puVar6 + 1;
                puVar8 = puVar9;
              } while (puVar9 != (uint *)((int)puVar13 + uVar7));
              if (param_2 != uVar7) {
                *(byte *)(puVar13 + uVar10) = (byte)puVar5[uVar10] ^ (byte)puVar13[uVar10];
                uVar10 = uVar7 + 1;
                if (uVar10 < param_2) {
                  uVar7 = uVar7 + 2;
                  *(byte *)((int)puVar13 + uVar10) =
                       *(byte *)((int)puVar5 + uVar10) ^ *(byte *)((int)puVar13 + uVar10);
                  if (uVar7 < param_2) {
                    *(byte *)((int)puVar13 + uVar7) =
                         *(byte *)((int)puVar5 + uVar7) ^ *(byte *)((int)puVar13 + uVar7);
                  }
                }
              }
            }
            iVar3 = FUN_0174eaac(&local_6c,uVar2,puVar13,param_2,param_8);
            if (iVar3 == 0) goto LAB_01780918;
            if (uVar2 != 0) goto LAB_01780634;
          }
        }
      }
LAB_01780890:
      FUN_0177aafc(puVar5);
      goto LAB_01780844;
    }
    FUN_016e9cd0(4,0,0x72,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",0x35);
  }
  uVar12 = 0;
LAB_01780844:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar12;
}

