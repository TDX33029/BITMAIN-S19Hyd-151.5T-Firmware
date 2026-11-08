// FUN_0173fae8 @ 0173fae8 size=1280 calls_out=10 calls_in=1
// strings: tls1_P_hash | /aws-lc/crypto/fipsmodule/tls/kdf.c | len == chunk

undefined4
FUN_0173fae8(uint *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 local_ef8;
  uint local_ef4;
  undefined1 auStack_ef0 [1216];
  undefined1 auStack_a30 [1216];
  undefined1 auStack_570 [1220];
  undefined1 auStack_ac [64];
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
  uVar1 = FUN_0172a898(param_3);
  FUN_0173dbd0(auStack_ef0);
  FUN_0173dbd0(auStack_a30);
  FUN_0173dbd0(auStack_570);
  iVar2 = FUN_0173dcc4(auStack_570,param_4,param_5,param_3,0);
  if ((((iVar2 != 0) && (iVar2 = FUN_0173f97c(auStack_ef0,auStack_570), iVar2 != 0)) &&
      (iVar2 = FUN_0173e95c(auStack_ef0,param_6,param_7), iVar2 != 0)) &&
     ((iVar2 = FUN_0173e95c(auStack_ef0,param_8,param_9), iVar2 != 0 &&
      (iVar2 = FUN_0173e95c(auStack_ef0,param_10,param_11), iVar2 != 0)))) {
    iVar2 = FUN_0173e9d4(auStack_ef0,auStack_ac);
    if (iVar2 != 0) {
      while (((((iVar2 = FUN_0173f97c(auStack_ef0,auStack_570), iVar2 != 0 &&
                (iVar2 = FUN_0173e95c(auStack_ef0,auStack_ac,local_ef8), iVar2 != 0)) &&
               ((param_2 <= uVar1 || (iVar2 = FUN_0173f97c(auStack_a30,auStack_ef0), iVar2 != 0))))
              && (((iVar2 = FUN_0173e95c(auStack_ef0,param_6,param_7), iVar2 != 0 &&
                   (iVar2 = FUN_0173e95c(auStack_ef0,param_8,param_9), iVar2 != 0)) &&
                  (iVar2 = FUN_0173e95c(auStack_ef0,param_10,param_11), iVar2 != 0)))) &&
             (iVar2 = FUN_0173e9d4(auStack_ef0,&local_6c,&local_ef4), iVar2 != 0))) {
        if (uVar1 != local_ef4) {
                    /* WARNING: Subroutine does not return */
          FUN_016d2c94("len == chunk","/aws-lc/crypto/fipsmodule/tls/kdf.c",0x38,"tls1_P_hash");
        }
        if (param_2 < uVar1) {
          uVar6 = param_2;
        }
        else {
          uVar6 = uVar1;
        }
        if (uVar6 != 0) {
          if (uVar6 - 1 < 3) {
            uVar5 = 0;
          }
          else {
            *param_1 = *param_1 ^ local_6c;
            uVar5 = uVar6 >> 2;
            if (((uVar5 != 1) && (param_1[1] = param_1[1] ^ local_68, uVar5 != 2)) &&
               ((((param_1[2] = param_1[2] ^ local_64, uVar5 != 3 &&
                  ((param_1[3] = param_1[3] ^ local_60, uVar5 != 4 &&
                   (param_1[4] = param_1[4] ^ local_5c, uVar5 != 5)))) &&
                 (param_1[5] = param_1[5] ^ local_58, uVar5 != 6)) &&
                ((((param_1[6] = param_1[6] ^ local_54, uVar5 != 7 &&
                   (param_1[7] = param_1[7] ^ local_50, uVar5 != 8)) &&
                  (param_1[8] = param_1[8] ^ local_4c, uVar5 != 9)) &&
                 (((param_1[9] = param_1[9] ^ local_48, uVar5 != 10 &&
                   (param_1[10] = param_1[10] ^ local_44, uVar5 != 0xb)) &&
                  ((param_1[0xb] = param_1[0xb] ^ local_40, uVar5 != 0xc &&
                   ((param_1[0xc] = param_1[0xc] ^ local_3c, uVar5 != 0xd &&
                    (param_1[0xd] = param_1[0xd] ^ local_38, uVar5 != 0xe)))))))))))) {
              uVar3 = local_34;
              if (uVar5 != 0xf) {
                uVar3 = local_30;
              }
              param_1[0xe] = param_1[0xe] ^ local_34;
              if (uVar5 != 0xf) {
                param_1[0xf] = param_1[0xf] ^ uVar3;
              }
            }
            if ((uVar6 & 3) == 0) goto LAB_0173fe98;
            uVar5 = uVar6 & 0xfffffffc;
          }
          *(byte *)((int)param_1 + uVar5) =
               *(byte *)((int)param_1 + uVar5) ^ auStack_ac[uVar5 + 0x40];
          uVar3 = uVar5 + 1;
          if (uVar3 < uVar6) {
            uVar4 = uVar5 + 2;
            *(byte *)((int)param_1 + uVar3) =
                 *(byte *)((int)param_1 + uVar3) ^ auStack_ac[uVar5 + 0x41];
            if (uVar4 < uVar6) {
              *(byte *)((int)param_1 + uVar4) =
                   auStack_ac[uVar5 + 0x42] ^ *(byte *)((int)param_1 + uVar4);
            }
          }
        }
LAB_0173fe98:
        param_2 = param_2 - uVar6;
        if (param_2 == 0) {
          uVar7 = 1;
          goto LAB_0173fba8;
        }
        iVar2 = FUN_0173e9d4(auStack_a30,auStack_ac,&local_ef8);
        if (iVar2 == 0) break;
        param_1 = (uint *)((int)param_1 + uVar6);
      }
    }
  }
  uVar7 = 0;
LAB_0173fba8:
  FUN_0177aaa0(auStack_ac,0x40);
  FUN_0173dc48(auStack_ef0);
  FUN_0173dc48(auStack_a30);
  FUN_0173dc48(auStack_570);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar7;
}

