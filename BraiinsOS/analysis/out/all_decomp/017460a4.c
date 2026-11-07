// FUN_017460a4 @ 017460a4 size=1724 calls_out=2 calls_in=1
// strings: 

void FUN_017460a4(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  uint *puVar2;
  code *pcVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint auStack_50 [2];
  uint auStack_48 [2];
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c [2];
  
  pcVar3 = *(code **)(param_1 + 0x150);
  local_2c[0] = DAT_018ddaf8;
  if ((*(int *)(param_1 + 0x160) != 0) || (*(int *)(param_1 + 0x164) != 0)) {
    (*pcVar3)(param_1 + 0x40,param_1 + 0x50);
  }
  uVar6 = *(uint *)(param_1 + 0x30);
  uVar11 = *(uint *)(param_1 + 0x34);
  if ((auStack_48 <= &uStack_3c || &uStack_34 <= auStack_48) &&
     (&uStack_40 <= &uStack_3c || &uStack_3c <= auStack_48)) {
    uVar4 = *(uint *)(param_1 + 0x3c);
    uVar9 = *(uint *)(param_1 + 0x38);
    if ((local_2c <= auStack_50 || auStack_50 <= &uStack_34) &&
       (&uStack_34 <= auStack_50 || auStack_50 <= &uStack_3c)) {
      puVar2 = (uint *)(param_1 + 0x40);
      if ((puVar2 <= &uStack_5c || &uStack_58 <= puVar2) &&
         ((&uStack_5c <= puVar2 || ((uint *)(param_1 + 0x44U) <= &uStack_5c)))) {
        if (((&uStack_3c <= &uStack_58 || &uStack_54 <= &uStack_3c) &&
            ((&uStack_58 <= &uStack_3c || (&uStack_38 <= &uStack_58)))) &&
           ((&uStack_54 <= puVar2 || ((uint *)(param_1 + 0x44) <= &uStack_54)))) {
          if (puVar2 <= &uStack_54 || auStack_50 <= puVar2) {
            puVar8 = (uint *)(param_1 + 0x44);
            *(uint *)(param_1 + 0x40) =
                 (((uVar11 & 0x1f) << 3 | uVar6 >> 0x1d) << 0x18 |
                  ((uVar11 & 0x1fffffff) >> 5 & 0xff) << 0x10 |
                  ((uVar11 & 0x1fffffff) >> 0xd & 0xff) << 8 | (uVar11 & 0x1fffffff) >> 0x15) ^
                 *(uint *)(param_1 + 0x40);
            if ((puVar8 <= &uStack_5c || &uStack_58 <= puVar8) &&
               ((&uStack_5c <= puVar8 || ((uint *)(param_1 + 0x48U) <= &uStack_5c)))) {
              if (((&uStack_38 <= &uStack_58 || &uStack_54 <= &uStack_38) &&
                  (((&uStack_58 <= &uStack_38 || (&uStack_34 <= &uStack_58)) &&
                   ((&uStack_54 <= puVar8 || ((uint *)(param_1 + 0x48) <= &uStack_54)))))) &&
                 (puVar8 <= &uStack_54 || auStack_50 <= puVar8)) {
                puVar7 = (uint *)(param_1 + 0x48);
                *(uint *)(param_1 + 0x44) =
                     *(uint *)(param_1 + 0x44) ^
                     (uVar6 << 0x1b | ((uVar6 & 0x1fffffff) >> 5 & 0xff) << 0x10 |
                      ((uVar6 & 0x1fffffff) >> 0xd & 0xff) << 8 | (uVar6 & 0x1fffffff) >> 0x15);
                if (((puVar7 <= &uStack_5c || &uStack_58 <= puVar7) &&
                    ((((&uStack_5c <= puVar7 || ((uint *)(param_1 + 0x4cU) <= &uStack_5c)) &&
                      (&uStack_34 <= &uStack_58 || &uStack_54 <= &uStack_34)) &&
                     ((&uStack_58 <= &uStack_34 || (&uStack_30 <= &uStack_58)))))) &&
                   ((&uStack_54 <= puVar7 || ((uint *)(param_1 + 0x4c) <= &uStack_54)))) {
                  if (puVar7 <= &uStack_54 || auStack_50 <= puVar7) {
                    puVar5 = (uint *)(param_1 + 0x4c);
                    *(uint *)(param_1 + 0x48) =
                         (((uVar4 & 0x1f) << 3 | uVar9 >> 0x1d) << 0x18 |
                          ((uVar4 & 0x1fffffff) >> 5 & 0xff) << 0x10 |
                          ((uVar4 & 0x1fffffff) >> 0xd & 0xff) << 8 | (uVar4 & 0x1fffffff) >> 0x15)
                         ^ *(uint *)(param_1 + 0x48);
                    if ((&uStack_58 <= puVar5 || puVar5 <= &uStack_5c) &&
                       ((&uStack_5c <= puVar5 || ((uint *)(param_1 + 0x50U) <= &uStack_5c)))) {
                      if (((&uStack_30 <= &uStack_58 || &uStack_54 <= &uStack_30) &&
                          ((&uStack_58 <= &uStack_30 || (local_2c <= &uStack_58)))) &&
                         (((&uStack_54 <= puVar5 || ((uint *)(param_1 + 0x50U) <= &uStack_54)) &&
                          (puVar5 <= &uStack_54 || auStack_50 <= puVar5)))) {
                        puVar10 = (uint *)(param_1 + 0x50);
                        *(uint *)(param_1 + 0x4c) =
                             *(uint *)(param_1 + 0x4c) ^
                             (uVar9 << 0x1b | ((uVar9 & 0x1fffffff) >> 5 & 0xff) << 0x10 |
                              ((uVar9 & 0x1fffffff) >> 0xd & 0xff) << 8 |
                             (uVar9 & 0x1fffffff) >> 0x15);
                        (*pcVar3)(puVar2,puVar10);
                        if ((&uStack_64 <= puVar2 || puVar2 <= &uStack_68) &&
                           ((&uStack_68 <= puVar2 || (puVar8 <= &uStack_68)))) {
                          puVar12 = (uint *)(param_1 + 0x20);
                          if ((&uStack_60 <= puVar12 || puVar12 <= &uStack_64) &&
                             (((((&uStack_64 <= puVar12 || ((uint *)(param_1 + 0x24U) <= &uStack_64)
                                 ) && ((&uStack_60 <= puVar2 || (puVar8 <= &uStack_60)))) &&
                               ((&uStack_5c <= puVar2 || puVar2 <= &uStack_60 &&
                                (*(uint *)(param_1 + 0x40) =
                                      *(uint *)(param_1 + 0x20) ^ *(uint *)(param_1 + 0x40),
                                &uStack_64 <= puVar8 || puVar8 <= &uStack_68)))) &&
                              ((&uStack_68 <= puVar8 || (puVar7 <= &uStack_68)))))) {
                            puVar12 = (uint *)(param_1 + 0x24);
                            if ((((&uStack_60 <= puVar12 || puVar12 <= &uStack_64) &&
                                 ((&uStack_64 <= puVar12 ||
                                  ((uint *)(param_1 + 0x28U) <= &uStack_64)))) &&
                                ((&uStack_60 <= puVar8 || (puVar7 <= &uStack_60)))) &&
                               (((&uStack_5c <= puVar8 || puVar8 <= &uStack_60 &&
                                 (*(uint *)(param_1 + 0x44) =
                                       *(uint *)(param_1 + 0x24) ^ *(uint *)(param_1 + 0x44),
                                 puVar7 <= &uStack_68 || &uStack_64 <= puVar7)) &&
                                ((&uStack_68 <= puVar7 || (puVar5 <= &uStack_68)))))) {
                              puVar8 = (uint *)(param_1 + 0x28);
                              if (((puVar8 <= &uStack_64 || &uStack_60 <= puVar8) &&
                                  ((&uStack_64 <= puVar8 || ((uint *)(param_1 + 0x2c) <= &uStack_64)
                                   ))) && ((((&uStack_60 <= puVar7 || (puVar5 <= &uStack_60)) &&
                                            ((puVar7 <= &uStack_60 || &uStack_5c <= puVar7 &&
                                             (*(uint *)(param_1 + 0x48) =
                                                   *(uint *)(param_1 + 0x48) ^
                                                   *(uint *)(param_1 + 0x28),
                                             puVar5 <= &uStack_68 || &uStack_64 <= puVar5)))) &&
                                           ((&uStack_68 <= puVar5 || (puVar10 <= &uStack_68)))))) {
                                puVar8 = (uint *)(param_1 + 0x2c);
                                if ((((&uStack_60 <= puVar8 || puVar8 <= &uStack_64) &&
                                     ((&uStack_64 <= puVar8 ||
                                      ((uint *)(param_1 + 0x30U) <= &uStack_64)))) &&
                                    ((&uStack_60 <= puVar5 || (puVar10 <= &uStack_60)))) &&
                                   (uVar6 = *(uint *)(param_1 + 0x4c) ^ *(uint *)(param_1 + 0x2c),
                                   puVar5 <= &uStack_60 || &uStack_5c <= puVar5)) {
                                  *(uint *)(param_1 + 0x4c) = uVar6;
                                  if (param_3 < 0x11 && param_2 != 0) {
                                    uVar13 = FUN_0177b0d8(puVar2,param_2);
                                    uVar6 = (uint)((ulonglong)uVar13 >> 0x20);
                                    bVar1 = (int)uVar13 == 0;
                                  }
                                  else {
                                    bVar1 = false;
                                  }
                                  if ((local_2c[0] ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_016d2b78(bVar1,uVar6,local_2c[0] ^ DAT_018ddaf8,0);
                                  }
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)software_udf(0,0x174675c);
  (*pcVar3)();
}

