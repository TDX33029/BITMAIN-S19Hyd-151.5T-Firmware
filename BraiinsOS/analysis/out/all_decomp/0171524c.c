// FUN_0171524c @ 0171524c size=360 calls_out=1 calls_in=4
// strings: aws_lc_0_39_0_bn_words_to_big_endian | /aws-lc/crypto/fipsmodule/bn/bytes.c | constant_time_declassify_int(fits_in_bytes(in; in_len; out_len))

void FUN_0171524c(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar5;
  uint *puVar4;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  bool bVar9;
  
  uVar1 = param_4 * 4;
  if (uVar1 <= param_2) {
    bVar9 = true;
    goto LAB_01715320;
  }
  uVar3 = uVar1 - param_2;
  if (uVar3 - 1 < 5) {
    uVar3 = 0;
    uVar2 = param_2;
LAB_017152c0:
    uVar3 = uVar3 | *(byte *)(param_3 + uVar2);
    if (uVar2 + 1 < uVar1) {
      uVar3 = uVar3 | *(byte *)(param_3 + uVar2 + 1);
      if (uVar2 + 2 < uVar1) {
        uVar3 = uVar3 | *(byte *)(param_3 + uVar2 + 2);
        if (uVar2 + 3 < uVar1) {
          uVar3 = uVar3 | *(byte *)(param_3 + uVar2 + 3);
          if (uVar2 + 4 < uVar1) {
            uVar3 = uVar3 | *(byte *)(param_3 + uVar2 + 4);
          }
        }
      }
    }
  }
  else {
    uVar2 = uVar3 & 0xfffffffc;
    uVar7 = 0;
    puVar4 = (uint *)(param_3 + param_2);
    do {
      puVar5 = puVar4 + 1;
      uVar7 = *puVar4 | uVar7;
      puVar4 = puVar5;
    } while (puVar5 != (uint *)((int)(param_3 + param_2) + uVar2));
    bVar9 = uVar3 != uVar2;
    if (bVar9) {
      uVar2 = param_2 + uVar2;
    }
    uVar3 = uVar7 & 0xff | (uVar7 & 0xffff) >> 8 | (uVar7 & 0xffffff) >> 0x10 | uVar7 >> 0x18;
    if (bVar9) goto LAB_017152c0;
  }
  bVar9 = uVar3 == 0;
LAB_01715320:
  if (!bVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int(fits_in_bytes(in, in_len, out_len))",
                 "/aws-lc/crypto/fipsmodule/bn/bytes.c",0xc4,"aws_lc_0_39_0_bn_words_to_big_endian")
    ;
  }
  if (param_2 < uVar1) {
    uVar1 = param_2;
  }
  if (uVar1 != 0) {
    puVar6 = (undefined1 *)(param_3 + -1);
    puVar8 = (undefined1 *)(param_1 + param_2);
    do {
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + -1;
      *puVar8 = *puVar6;
    } while (puVar6 != (undefined1 *)(param_3 + uVar1 + -1));
  }
  if (param_2 - uVar1 == 0) {
    return;
  }
  FUN_016dd606(param_1,0,param_2 - uVar1,0);
  return;
}

