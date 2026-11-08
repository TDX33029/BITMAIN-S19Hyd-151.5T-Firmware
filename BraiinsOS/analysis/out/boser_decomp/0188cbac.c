// FUN_0188cbac @ 0188cbac size=280 calls_out=2 calls_in=2
// strings: 

void FUN_0188cbac(undefined4 *param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 unaff_r6;
  
  puVar2 = (uint *)thunk_FUN_01be5118(8);
  if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *puVar2 = 1;
  puVar2[1] = 1;
  do {
    uVar4 = *puVar2;
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = uVar4 + 1;
  uVar3 = 0;
  if (uVar4 < 0x80000000) {
    unaff_r6 = 0x14;
    uVar3 = 0x4000;
  }
  if ((int)uVar4 < 0) {
    software_udf(0xfdee,0x188ccb4);
    return;
  }
  param_1[10] = unaff_r6;
  param_1[1] = uVar3;
  param_1[2] = 0;
  param_1[0x15] = uVar3;
  *param_1 = 1;
  *(undefined2 *)(param_1 + 0x2f) = 0x101;
  param_1[0x14] = 100;
  param_1[0x10] = &DAT_3b9aca00;
  param_1[0x22] = puVar2;
  param_1[0x18] = puVar2;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  *(undefined1 *)((int)param_1 + 0xbe) = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  param_1[0x12] = &DAT_00500000;
  param_1[0x13] = 0x200000;
  param_1[0x16] = 0x100000;
  param_1[0xc] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x23] = &DAT_01d1de94;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)((int)param_1 + 0xba) = 2;
  param_1[0x19] = &DAT_01d1de94;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0x5a;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0xffffffff;
  param_1[0x24] = 0;
  return;
}

