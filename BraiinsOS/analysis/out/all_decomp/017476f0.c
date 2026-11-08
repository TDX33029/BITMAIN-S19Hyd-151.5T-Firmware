// FUN_017476f0 @ 017476f0 size=860 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_017476f0(int param_1,uint *param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uStack_64;
  uint uStack_60;
  undefined4 local_5c;
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
  uint local_2c [2];
  
  puVar8 = (uint *)(param_1 + 0x108);
  local_2c[0] = DAT_018ddaf8;
  if (puVar8 < &uStack_60 && &uStack_64 < puVar8) goto LAB_01747a48;
  puVar4 = (uint *)(param_1 + 0x10c);
  if (puVar8 < &local_5c && &uStack_60 < puVar8) goto LAB_01747a48;
  puVar9 = (uint *)(param_1 + 0xfc);
  puVar6 = &local_5c;
  do {
    if (((puVar8 < &uStack_64) && (&uStack_64 < puVar4)) ||
       ((uVar5 = *(uint *)(param_1 + 0x108), puVar8 < &uStack_60 && (&uStack_60 < puVar4))))
    goto LAB_01747a48;
    uVar5 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
            uVar5 >> 0x18) + 1;
    *(uint *)(param_1 + 0x108) =
         uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
         uVar5 >> 0x18;
    puVar7 = puVar6 + 4;
    (**(code **)(param_1 + 0xf4))(puVar9,puVar6,param_1);
    puVar6 = puVar7;
  } while (puVar7 != local_2c);
  if (param_3 != 0) {
    if (param_3 - 1 < 3) {
      uVar5 = 0;
    }
    else {
      local_5c = *param_2 ^ local_5c;
      uVar5 = param_3 >> 2;
      if ((((((uVar5 != 1) && (local_58 = param_2[1] ^ local_58, uVar5 != 2)) &&
            (local_54 = param_2[2] ^ local_54, uVar5 != 3)) &&
           ((local_50 = param_2[3] ^ local_50, uVar5 != 4 &&
            (local_4c = param_2[4] ^ local_4c, uVar5 != 5)))) &&
          ((local_48 = param_2[5] ^ local_48, uVar5 != 6 &&
           ((local_44 = param_2[6] ^ local_44, uVar5 != 7 &&
            (local_40 = param_2[7] ^ local_40, uVar5 != 8)))))) &&
         ((local_3c = param_2[8] ^ local_3c, uVar5 != 9 &&
          (local_38 = param_2[9] ^ local_38, uVar5 != 10)))) {
        uVar2 = local_34;
        if (uVar5 != 0xb) {
          uVar2 = local_30;
        }
        local_34 = param_2[10] ^ local_34;
        if (uVar5 != 0xb) {
          local_30 = param_2[0xb] ^ uVar2;
        }
      }
      if ((param_3 & 3) == 0) goto LAB_0174798c;
      uVar5 = param_3 & 0xfffffffc;
    }
    *(byte *)((int)local_2c + (uVar5 - 0x30)) =
         *(byte *)((int)param_2 + uVar5) ^ *(byte *)((int)local_2c + (uVar5 - 0x30));
    if (uVar5 + 1 < param_3) {
      *(byte *)((int)local_2c + (uVar5 - 0x2f)) =
           *(byte *)((int)param_2 + uVar5 + 1) ^ *(byte *)((int)local_2c + (uVar5 - 0x2f));
      if (uVar5 + 2 < param_3) {
        *(byte *)((int)local_2c + (uVar5 - 0x2e)) =
             *(byte *)((int)param_2 + uVar5 + 2) ^ *(byte *)((int)local_2c + (uVar5 - 0x2e));
      }
    }
  }
LAB_0174798c:
  uVar3 = FUN_017474f4(param_1,0,param_1 + 0xf4,&local_5c,0x20);
  *(undefined4 *)(param_1 + 0xf8) = uVar3;
  if (((&local_3c <= puVar9) || (puVar4 <= &local_3c)) &&
     (local_2c <= puVar9 || puVar9 <= &local_3c)) {
    *(uint *)(param_1 + 0xfc) = local_3c;
    *(uint *)(param_1 + 0x104) = local_34;
    *(uint *)(param_1 + 0x108) = local_30;
    *(uint *)(param_1 + 0x100) = local_38;
    if (local_2c[0] != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78();
    }
    return 1;
  }
LAB_01747a48:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x1747a48);
  (*pcVar1)();
}

