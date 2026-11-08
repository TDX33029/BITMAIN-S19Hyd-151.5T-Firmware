// FUN_01780968 @ 01780968 size=1436 calls_out=10 calls_in=2
// strings: /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c

void FUN_01780968(uint param_1,uint *param_2,uint param_3,byte *param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7,int param_8,int param_9)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 extraout_r1;
  undefined4 uVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 extraout_r1_00;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  byte *pbVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  undefined4 local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  undefined1 auStack_6c [64];
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  if (param_8 == 0) {
    param_8 = FUN_0172b1f4();
  }
  if (param_9 == 0) {
    param_9 = param_8;
  }
  uVar2 = FUN_0172a898(param_8);
  if (param_5 < (uVar2 + 1) * 2) {
    puVar15 = (uint *)0x0;
LAB_017809e4:
    FUN_016e9cd0(4,0,0x85,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",0xcd);
  }
  else {
    uVar14 = (param_5 - 1) - uVar2;
    puVar15 = (uint *)FUN_0177a6c0(uVar14);
    if (puVar15 != (uint *)0x0) {
      puVar10 = (uint *)(param_4 + uVar2 + 1);
      iVar4 = FUN_0174eaac(&local_ac,uVar2,puVar10,uVar14,param_9);
      if (iVar4 != 0) {
        if (uVar2 != 0) {
          if (uVar2 - 1 < 3) {
            uVar8 = 0;
          }
          else {
            local_ac = *(uint *)(param_4 + 1) ^ local_ac;
            uVar8 = uVar2 >> 2;
            if ((((((uVar8 != 1) && (local_a8 = *(uint *)(param_4 + 5) ^ local_a8, uVar8 != 2)) &&
                  (local_a4 = *(uint *)(param_4 + 9) ^ local_a4, uVar8 != 3)) &&
                 ((local_a0 = *(uint *)(param_4 + 0xd) ^ local_a0, uVar8 != 4 &&
                  (local_9c = *(uint *)(param_4 + 0x11) ^ local_9c, uVar8 != 5)))) &&
                ((local_98 = *(uint *)(param_4 + 0x15) ^ local_98, uVar8 != 6 &&
                 ((local_94 = *(uint *)(param_4 + 0x19) ^ local_94, uVar8 != 7 &&
                  (local_90 = *(uint *)(param_4 + 0x1d) ^ local_90, uVar8 != 8)))))) &&
               ((local_8c = *(uint *)(param_4 + 0x21) ^ local_8c, uVar8 != 9 &&
                ((((local_88 = *(uint *)(param_4 + 0x25) ^ local_88, uVar8 != 10 &&
                   (local_84 = *(uint *)(param_4 + 0x29) ^ local_84, uVar8 != 0xb)) &&
                  (local_80 = *(uint *)(param_4 + 0x2d) ^ local_80, uVar8 != 0xc)) &&
                 ((local_7c = *(uint *)(param_4 + 0x31) ^ local_7c, uVar8 != 0xd &&
                  (local_78 = *(uint *)(param_4 + 0x35) ^ local_78, uVar8 != 0xe)))))))) {
              uVar17 = local_74;
              if (uVar8 != 0xf) {
                uVar17 = local_70;
              }
              local_74 = *(uint *)(param_4 + 0x39) ^ local_74;
              if (uVar8 != 0xf) {
                local_70 = *(uint *)(param_4 + 0x3d) ^ uVar17;
              }
            }
            if ((uVar2 & 3) == 0) goto LAB_01780c88;
            uVar8 = uVar2 & 0xfffffffc;
          }
          auStack_6c[uVar8 - 0x40] = param_4[uVar8 + 1] ^ auStack_6c[uVar8 - 0x40];
          if ((uVar8 + 1 < uVar2) &&
             (auStack_6c[uVar8 - 0x3f] = param_4[uVar8 + 2] ^ auStack_6c[uVar8 - 0x3f],
             uVar8 + 2 < uVar2)) {
            auStack_6c[uVar8 - 0x3e] = param_4[uVar8 + 3] ^ auStack_6c[uVar8 - 0x3e];
          }
        }
LAB_01780c88:
        iVar4 = FUN_0174eaac(puVar15,uVar14,&local_ac,uVar2,param_9);
        if (iVar4 != 0) {
          if (uVar14 != 0) {
            if ((uVar14 - 1 < 4) || ((uint)((int)puVar15 - (int)(param_4 + uVar2 + 2)) < 3)) {
              pbVar13 = (byte *)((int)puVar10 + -1);
              pbVar18 = (byte *)((int)puVar15 + -1);
              do {
                pbVar18 = pbVar18 + 1;
                pbVar13 = pbVar13 + 1;
                *pbVar18 = *pbVar13 ^ *pbVar18;
              } while (pbVar18 != (byte *)((uVar14 - 1) + (int)puVar15));
            }
            else {
              uVar17 = uVar14 & 0xfffffffc;
              uVar8 = uVar14 >> 2;
              puVar9 = puVar10;
              puVar11 = puVar15;
              do {
                puVar12 = puVar11 + 1;
                *puVar11 = *puVar11 ^ *puVar9;
                puVar9 = puVar9 + 1;
                puVar11 = puVar12;
              } while (puVar12 != (uint *)((int)puVar15 + uVar17));
              if (uVar14 != uVar17) {
                *(byte *)(puVar15 + uVar8) = (byte)puVar10[uVar8] ^ (byte)puVar15[uVar8];
                uVar8 = uVar17 + 1;
                if (uVar8 < uVar14) {
                  uVar17 = uVar17 + 2;
                  *(byte *)((int)puVar15 + uVar8) =
                       *(byte *)((int)puVar10 + uVar8) ^ *(byte *)((int)puVar15 + uVar8);
                  if (uVar17 < uVar14) {
                    *(byte *)((int)puVar15 + uVar17) =
                         *(byte *)((int)puVar10 + uVar17) ^ *(byte *)((int)puVar15 + uVar17);
                  }
                }
              }
            }
          }
          iVar4 = FUN_0173e488(param_6,param_7,auStack_6c,0,param_8,0);
          if (iVar4 != 0) {
            uVar8 = FUN_0177b0d8(puVar15,auStack_6c,uVar2);
            if (uVar2 < uVar14) {
              pbVar13 = (byte *)((uVar2 - 1) + (int)puVar15);
              uVar17 = 0;
              uVar16 = 0xffffffff;
              uVar2 = ~((int)(*param_4 - 1 & ~(uint)*param_4 & ~uVar8 & uVar8 - 1) >> 0x1f);
              do {
                pbVar18 = pbVar13 + (1 - (int)puVar15);
                pbVar13 = pbVar13 + 1;
                uVar5 = (uint)*pbVar13;
                uVar8 = (int)((uVar5 ^ 1) - 1 & ~(uVar5 ^ 1)) >> 0x1f;
                uVar6 = uVar8 & uVar16;
                uVar16 = uVar16 & ~uVar8;
                uVar2 = uVar2 | uVar16 & ~((int)(uVar5 - 1 & ~uVar5) >> 0x1f);
                uVar17 = uVar6 & (uint)pbVar18 | ~uVar6 & uVar17;
              } while (pbVar13 != (byte *)((uVar14 - 1) + (int)puVar15));
              uVar2 = uVar2 | uVar16;
            }
            else {
              uVar17 = 0;
              uVar2 = 0xffffffff;
            }
            if (uVar2 != 0) goto LAB_017809e4;
            uVar2 = uVar14 - (uVar17 + 1);
            if (uVar2 <= param_3) {
              if (uVar2 != 0) {
                uVar8 = (int)puVar15 + uVar17 + 1;
                if (param_1 < uVar8) {
                  if (uVar8 < param_1 + uVar2) {
LAB_01780ed0:
                    /* WARNING: Does not return */
                    pcVar1 = (code *)software_udf(0,0x1780ed0);
                    (*pcVar1)();
                  }
                }
                else if ((uVar8 < param_1) && (param_1 < (int)puVar15 + uVar14)) goto LAB_01780ed0;
                FUN_016dd1aa(param_1,uVar8,uVar2);
              }
              *param_2 = uVar2;
              FUN_0177aafc(puVar15);
              uVar3 = 1;
              uVar7 = extraout_r1_00;
              goto LAB_01780a10;
            }
            FUN_016e9cd0(4,0,0x71,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",0xc1);
          }
        }
      }
    }
  }
  FUN_0177aafc(puVar15);
  uVar3 = 0;
  uVar7 = extraout_r1;
LAB_01780a10:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar3,uVar7,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

