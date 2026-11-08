// FUN_01823bf8 @ 01823bf8 size=572 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_01823bf8(undefined8 *param_1,uint *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74 [10];
  
  local_74[8] = DAT_018ddaf8;
  if ((&local_94 < param_2 && param_2 < local_74) ||
     ((param_2 < &local_94 && (&local_94 < param_2 + 8)))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x1823e30);
    (*pcVar1)();
  }
  uVar2 = *param_2;
  uVar4 = param_2[1];
  uVar6 = param_2[2];
  uVar8 = param_2[3];
  local_94 = uVar2 ^ 0x5c5c5c5c;
  local_90 = uVar4 ^ 0x5c5c5c5c;
  local_8c = uVar6 ^ 0x5c5c5c5c;
  local_88 = uVar8 ^ 0x5c5c5c5c;
  uVar3 = param_2[4];
  uVar5 = param_2[5];
  uVar7 = param_2[6];
  uVar9 = param_2[7];
  param_1[0xd] = 0xbb67ae856a09e667;
  param_1[0xe] = 0xa54ff53a3c6ef372;
  local_84 = uVar3 ^ 0x5c5c5c5c;
  param_1[0xf] = 0x9b05688c510e527f;
  param_1[0x10] = 0x5be0cd191f83d9ab;
  param_1[0x19] = 0;
  local_80 = uVar5 ^ 0x5c5c5c5c;
  local_7c = uVar7 ^ 0x5c5c5c5c;
  local_74[0] = 0x5c5c5c5c;
  local_74[1] = 0x5c5c5c5c;
  local_74[2] = 0x5c5c5c5c;
  local_74[3] = 0x5c5c5c5c;
  local_74[4] = 0x5c5c5c5c;
  local_74[5] = 0x5c5c5c5c;
  local_74[6] = 0x5c5c5c5c;
  local_74[7] = 0x5c5c5c5c;
  local_78 = uVar9 ^ 0x5c5c5c5c;
  FUN_0182169c(param_1 + 0xd,&local_94,0x40);
  local_8c = uVar6 ^ 0x36363636;
  local_88 = uVar8 ^ 0x36363636;
  *param_1 = 0xbb67ae856a09e667;
  local_84 = uVar3 ^ 0x36363636;
  param_1[1] = 0xa54ff53a3c6ef372;
  local_94 = uVar2 ^ 0x36363636;
  param_1[2] = 0x9b05688c510e527f;
  local_90 = uVar4 ^ 0x36363636;
  param_1[3] = 0x5be0cd191f83d9ab;
  local_80 = uVar5 ^ 0x36363636;
  param_1[0xc] = 0;
  local_7c = uVar7 ^ 0x36363636;
  local_78 = uVar9 ^ 0x36363636;
  local_74[0] = 0x36363636;
  local_74[1] = 0x36363636;
  local_74[2] = 0x36363636;
  local_74[3] = 0x36363636;
  local_74[4] = 0x36363636;
  local_74[5] = 0x36363636;
  local_74[6] = 0x36363636;
  local_74[7] = 0x36363636;
  FUN_0182169c(param_1,&local_94,0x40);
  if (local_74[8] != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

