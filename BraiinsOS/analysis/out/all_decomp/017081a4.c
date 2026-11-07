// FUN_017081a4 @ 017081a4 size=416 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_017081a4(int param_1,uint *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c [2];
  
  uVar2 = DAT_018ddaf8;
  puVar5 = (uint *)(param_1 + 8);
  uVar7 = 0;
  local_2c[0] = DAT_018ddaf8;
  puVar4 = param_2;
  while (puVar4 <= &local_3c || local_2c <= puVar4) {
    puVar9 = puVar5 + -2;
    do {
      puVar8 = puVar9;
      if ((puVar4 < &local_3c) && (&local_3c < puVar4 + 4)) goto LAB_01708340;
      local_3c = *puVar4;
      local_34 = puVar4[2];
      local_30 = puVar4[3];
      local_38 = puVar4[1];
      puVar9 = puVar8 + 1;
      *puVar8 = local_3c;
      puVar8[2] = local_38;
      puVar8[4] = local_34;
      puVar8[6] = local_30;
    } while (puVar9 != puVar5);
    uVar7 = uVar7 + 1;
    uVar6 = (*puVar8 ^ puVar8[-1] >> 1) & 0x55555555;
    *puVar8 = *puVar8 ^ uVar6;
    puVar8[-1] = puVar8[-1] ^ uVar6 << 1;
    uVar6 = (local_34 ^ puVar8[3] >> 1) & 0x55555555;
    puVar8[4] = local_34 ^ uVar6;
    puVar8[3] = puVar8[3] ^ uVar6 << 1;
    uVar3 = (local_38 ^ *puVar9 >> 1) & 0x55555555;
    puVar5 = puVar8 + 9;
    puVar8[2] = local_38 ^ uVar3;
    uVar6 = (local_30 ^ puVar8[5] >> 1) & 0x55555555;
    *puVar9 = *puVar9 ^ uVar3 << 1;
    puVar8[6] = local_30 ^ uVar6;
    puVar8[5] = puVar8[5] ^ uVar6 << 1;
    puVar4 = puVar4 + 4;
    if (param_2[0x3c] < uVar7) {
      if (uVar2 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2b78();
      }
      return 0;
    }
  }
LAB_01708340:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x1708340);
  (*pcVar1)();
}

