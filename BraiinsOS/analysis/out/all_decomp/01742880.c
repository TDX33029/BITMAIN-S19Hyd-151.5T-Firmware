// FUN_01742880 @ 01742880 size=2652 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01742880(uint *param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  code *pcVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint auStack_48 [3];
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c [2];
  
  local_2c[0] = DAT_018ddaf8;
  pcVar1 = (code *)param_1[0x54];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  if (param_4 == 0xc) {
    if (param_1 < param_3) {
      if (param_3 < param_1 + 3) goto LAB_01742fa4;
    }
    else if ((param_3 < param_1) && (param_1 < param_3 + 3)) goto LAB_01742fa4;
    uVar5 = 2;
    uVar2 = param_3[1];
    uVar4 = param_3[2];
    *param_1 = *param_3;
    param_1[1] = uVar2;
    param_1[2] = uVar4;
    *(byte *)((int)param_1 + 0xf) = 1;
  }
  else {
    uVar2 = param_4;
    if (0xf < param_4) {
      puVar3 = param_1 + 1;
      puVar10 = param_1 + 2;
      puVar8 = param_1 + 3;
      puVar7 = param_3 + 1;
      puVar9 = param_3 + 2;
      puVar6 = param_3 + 3;
      if (&uStack_60 < param_1 && param_1 < &uStack_5c) goto LAB_01742fa4;
      do {
        if (((((((param_1 < &uStack_60) && (&uStack_60 < puVar3)) ||
               (&uStack_5c < param_3 && param_3 < &uStack_58)) ||
              ((((param_3 < &uStack_5c && (&uStack_5c < puVar7)) ||
                ((param_1 < &uStack_58 && (&uStack_58 < puVar3)))) ||
               ((&uStack_58 < param_1 && param_1 < &uStack_54 ||
                (*param_1 = *param_1 ^ *param_3, &uStack_60 < puVar3 && puVar3 < &uStack_5c)))))) ||
             (((puVar3 < &uStack_60 && (&uStack_60 < puVar10)) ||
              (((&uStack_5c < puVar7 && puVar7 < &uStack_58 ||
                ((puVar7 < &uStack_5c && (&uStack_5c < puVar9)))) ||
               ((puVar3 < &uStack_58 && (&uStack_58 < puVar10)))))))) ||
            (((((&uStack_58 < puVar3 && puVar3 < &uStack_54 ||
                (param_1[1] = param_1[1] ^ *puVar7, &uStack_60 < puVar10 && puVar10 < &uStack_5c))
               || ((puVar10 < &uStack_60 && (&uStack_60 < puVar8)))) ||
              ((&uStack_5c < puVar9 && puVar9 < &uStack_58 ||
               ((puVar9 < &uStack_5c && (&uStack_5c < puVar6)))))) ||
             (((puVar10 < &uStack_58 && (&uStack_58 < puVar8)) ||
              ((&uStack_58 < puVar10 && puVar10 < &uStack_54 ||
               (param_1[2] = param_1[2] ^ *puVar9, puVar8 < &uStack_5c && &uStack_60 < puVar8)))))))
            ) || (((puVar8 < &uStack_60 && (&uStack_60 < param_1 + 4)) ||
                  ((((&uStack_5c < puVar6 && puVar6 < &uStack_58 ||
                     ((puVar6 < &uStack_5c && (&uStack_5c < param_3 + 4)))) ||
                    ((puVar8 < &uStack_58 && (&uStack_58 < param_1 + 4)))) ||
                   (&uStack_58 < puVar8 && puVar8 < &uStack_54)))))) goto LAB_01742fa4;
        param_1[3] = param_1[3] ^ *puVar6;
        param_3 = param_3 + 4;
        puVar6 = puVar6 + 4;
        puVar9 = puVar9 + 4;
        puVar7 = puVar7 + 4;
        (*pcVar1)(param_1,param_1 + 0x14);
        uVar2 = uVar2 - 0x10;
      } while (0xf < uVar2);
    }
    if (uVar2 != 0) {
      if (uVar2 - 1 < 4) {
        *(byte *)param_1 = (byte)*param_1 ^ (byte)*param_3;
        if ((uVar2 != 1) &&
           (*(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) ^ *(byte *)((int)param_3 + 1),
           uVar2 != 2)) goto LAB_01743184;
      }
      else if ((byte *)((int)param_1 + (-1 - (int)param_3)) < (byte *)0x3) {
        *(byte *)param_1 = (byte)*param_3 ^ (byte)*param_1;
        *(byte *)((int)param_1 + 1) = *(byte *)((int)param_3 + 1) ^ *(byte *)((int)param_1 + 1);
LAB_01743184:
        *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) ^ *(byte *)((int)param_3 + 2);
        if (((((uVar2 != 3) &&
              (*(byte *)((int)param_1 + 3) =
                    *(byte *)((int)param_1 + 3) ^ *(byte *)((int)param_3 + 3), uVar2 != 4)) &&
             (*(byte *)(param_1 + 1) = (byte)param_1[1] ^ (byte)param_3[1], uVar2 != 5)) &&
            (((*(byte *)((int)param_1 + 5) =
                    *(byte *)((int)param_1 + 5) ^ *(byte *)((int)param_3 + 5), uVar2 != 6 &&
              (*(byte *)((int)param_1 + 6) =
                    *(byte *)((int)param_1 + 6) ^ *(byte *)((int)param_3 + 6), uVar2 != 7)) &&
             ((*(byte *)((int)param_1 + 7) =
                    *(byte *)((int)param_1 + 7) ^ *(byte *)((int)param_3 + 7), uVar2 != 8 &&
              ((*(byte *)(param_1 + 2) = (byte)param_1[2] ^ (byte)param_3[2], uVar2 != 9 &&
               (*(byte *)((int)param_1 + 9) =
                     *(byte *)((int)param_1 + 9) ^ *(byte *)((int)param_3 + 9), uVar2 != 10))))))))
           && ((*(byte *)((int)param_1 + 10) =
                     *(byte *)((int)param_1 + 10) ^ *(byte *)((int)param_3 + 10), uVar2 != 0xb &&
               (((*(byte *)((int)param_1 + 0xb) =
                       *(byte *)((int)param_1 + 0xb) ^ *(byte *)((int)param_3 + 0xb), uVar2 != 0xc
                 && (*(byte *)(param_1 + 3) = (byte)param_1[3] ^ (byte)param_3[3], uVar2 != 0xd)) &&
                (*(byte *)((int)param_1 + 0xd) =
                      *(byte *)((int)param_1 + 0xd) ^ *(byte *)((int)param_3 + 0xd), uVar2 == 0xf)))
               ))) {
          *(byte *)((int)param_1 + 0xe) =
               *(byte *)((int)param_3 + 0xe) ^ *(byte *)((int)param_1 + 0xe);
        }
      }
      else {
        *param_1 = *param_3 ^ *param_1;
        if (uVar2 >> 2 == 1) {
          uVar4 = 4;
        }
        else {
          param_1[1] = param_3[1] ^ param_1[1];
          if (uVar2 >> 2 == 3) {
            param_1[2] = param_3[2] ^ param_1[2];
          }
          if ((uVar2 & 3) == 0) goto LAB_017430d4;
          uVar4 = uVar2 & 0xfffffffc;
        }
        *(byte *)((int)param_1 + uVar4) =
             *(byte *)((int)param_3 + uVar4) ^ *(byte *)((int)param_1 + uVar4);
        uVar5 = uVar4 + 1;
        if (uVar5 < uVar2) {
          uVar4 = uVar4 + 2;
          *(byte *)((int)param_1 + uVar5) =
               *(byte *)((int)param_3 + uVar5) ^ *(byte *)((int)param_1 + uVar5);
          if (uVar4 < uVar2) {
            *(byte *)((int)param_1 + uVar4) =
                 *(byte *)((int)param_3 + uVar4) ^ *(byte *)((int)param_1 + uVar4);
          }
        }
      }
LAB_017430d4:
      (*pcVar1)(param_1,param_1 + 0x14);
    }
    if ((auStack_48 < local_2c && &uStack_34 < auStack_48) ||
       (&uStack_3c < auStack_48 && auStack_48 < &uStack_34)) goto LAB_01742fa4;
    if ((((&uStack_54 < param_1 && param_1 < &uStack_50) ||
         ((param_1 < &uStack_54 && (&uStack_54 < param_1 + 1)))) ||
        (((&uStack_3c < &uStack_4c && &uStack_50 < &uStack_3c ||
          (((&uStack_3c < &uStack_50 && (&uStack_50 < &uStack_38)) ||
           ((param_1 < &uStack_4c && (&uStack_4c < param_1 + 1)))))) ||
         ((param_1 < auStack_48 && &uStack_4c < param_1 ||
          (puVar3 = param_1 + 1, &uStack_54 < puVar3 && puVar3 < &uStack_50)))))) ||
       ((((puVar3 < &uStack_54 && (&uStack_54 < param_1 + 2)) ||
         (((&uStack_50 < &uStack_38 && &uStack_38 < &uStack_4c ||
           ((&uStack_38 < &uStack_50 && (&uStack_50 < &uStack_34)))) ||
          ((puVar3 < &uStack_4c && (&uStack_4c < param_1 + 2)))))) ||
        ((((((&uStack_4c < puVar3 && puVar3 < auStack_48 ||
             (puVar3 = param_1 + 2, &uStack_54 < puVar3 && puVar3 < &uStack_50)) ||
            ((puVar3 < &uStack_54 && (&uStack_54 < param_1 + 3)))) ||
           (&uStack_50 < &uStack_34 && &uStack_34 < &uStack_4c)) ||
          ((&uStack_34 < &uStack_50 && (&uStack_50 < &uStack_30)))) ||
         ((puVar3 < &uStack_4c && (&uStack_4c < param_1 + 3)))))))) goto LAB_01742fa4;
    if (&uStack_4c < puVar3 && puVar3 < auStack_48) goto LAB_01742fa4;
    puVar3 = param_1 + 3;
    param_1[2] = param_1[2] ^ (param_4 >> 0x1d) << 0x18;
    if ((puVar3 < &uStack_50 && &uStack_54 < puVar3) ||
       ((puVar3 < &uStack_54 && (&uStack_54 < param_1 + 4)))) goto LAB_01742fa4;
    if (((&uStack_30 < &uStack_4c && &uStack_50 < &uStack_30) ||
        (((&uStack_30 < &uStack_50 && (&uStack_50 < local_2c)) ||
         ((puVar3 < &uStack_4c && (&uStack_4c < param_1 + 4)))))) ||
       (puVar3 < auStack_48 && &uStack_4c < puVar3)) goto LAB_01742fa4;
    param_1[3] = param_1[3] ^
                 (param_4 << 0x1b | ((param_4 & 0x1fffffff) >> 5 & 0xff) << 0x10 |
                  ((param_4 & 0x1fffffff) >> 0xd & 0xff) << 8 | (param_4 & 0x1fffffff) >> 0x15);
    (*pcVar1)(param_1,param_1 + 0x14);
    if ((puVar3 < &uStack_64 && &uStack_68 < puVar3) ||
       ((puVar3 < &uStack_68 && (&uStack_68 < param_1 + 4)))) goto LAB_01742fa4;
    uVar2 = param_1[3];
    uVar5 = (uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
            uVar2 >> 0x18) + 1;
  }
  puVar3 = param_1 + 3;
  (*(code *)param_1[0x56])(param_1,param_1 + 8,param_2);
  if (((&uStack_64 <= puVar3) || (param_1 + 4 <= &uStack_64)) &&
     (puVar3 <= &uStack_64 || &uStack_60 <= puVar3)) {
    param_1[3] = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                 uVar5 >> 0x18;
    if (local_2c[0] != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78();
    }
    return 0;
  }
LAB_01742fa4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x1742fa4);
  (*pcVar1)();
}

