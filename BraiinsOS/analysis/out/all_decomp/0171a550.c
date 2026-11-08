// FUN_0171a550 @ 0171a550 size=492 calls_out=1 calls_in=13
// strings: CRYPTO_subc_u32 | /aws-lc/crypto/fipsmodule/../internal.h | constant_time_declassify_int(borrow <= 1)

/* WARNING: Removing unreachable block (ram,0x0171a714) */

uint FUN_0171a550(int *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_4 == 0) {
    return 0;
  }
  if (param_4 < 4) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    puVar1 = param_2;
    puVar2 = param_3;
    piVar3 = param_1;
    do {
      param_1 = piVar3 + 4;
      param_3 = puVar2 + 4;
      param_2 = puVar1 + 4;
      uVar4 = *puVar2;
      uVar6 = *puVar1;
      uVar7 = uVar6 - uVar4;
      *piVar3 = uVar7 - uVar5;
      uVar4 = (uint)(uVar6 < uVar4 || uVar7 < uVar5);
      param_4 = param_4 - 4;
      uVar6 = puVar1[1] - puVar2[1];
      uVar5 = (uint)(puVar1[1] < puVar2[1]);
      piVar3[1] = uVar6 - uVar4;
      if (uVar6 < uVar4) {
        uVar5 = 1;
      }
      uVar6 = puVar1[2] - puVar2[2];
      uVar4 = (uint)(puVar1[2] < puVar2[2]);
      piVar3[2] = uVar6 - uVar5;
      if (uVar6 < uVar5) {
        uVar4 = 1;
      }
      uVar6 = puVar1[3] - puVar2[3];
      uVar5 = (uint)(puVar1[3] < puVar2[3]);
      piVar3[3] = uVar6 - uVar4;
      if (uVar6 < uVar4) {
        uVar5 = 1;
      }
      puVar1 = param_2;
      puVar2 = param_3;
      piVar3 = param_1;
    } while (3 < param_4);
    if (param_4 == 0) {
      return uVar5;
    }
  }
  uVar6 = *param_2 - *param_3;
  uVar4 = (uint)(*param_2 < *param_3);
  *param_1 = uVar6 - uVar5;
  if (uVar6 < uVar5) {
    uVar4 = 1;
  }
  if (param_4 != 1) {
    uVar6 = param_2[1] - param_3[1];
    uVar5 = (uint)(param_2[1] < param_3[1]);
    param_1[1] = uVar6 - uVar4;
    if (uVar6 < uVar4) {
      uVar5 = 1;
    }
    uVar4 = uVar5;
    if (param_4 != 2) {
      uVar6 = param_2[2] - param_3[2];
      uVar4 = (uint)(param_2[2] < param_3[2]);
      param_1[2] = uVar6 - uVar5;
      if (uVar6 < uVar5) {
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

