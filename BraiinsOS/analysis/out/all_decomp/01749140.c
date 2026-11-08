// FUN_01749140 @ 01749140 size=1176 calls_out=2 calls_in=3
// strings: 

void FUN_01749140(int param_1,uint *param_2,uint *param_3,uint param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint local_78;
  uint local_74;
  uint local_6c;
  uint local_68;
  uint local_64;
  undefined4 local_5c;
  uint local_58 [6];
  uint local_40;
  uint local_3c;
  uint *local_38;
  uint local_34;
  uint local_30;
  uint local_2c [2];
  
  puVar8 = param_2 + 0xc;
  local_2c[0] = DAT_018ddaf8;
  if (((param_3 < puVar8) && (param_2 < (uint *)((int)param_3 + param_4))) || (0x30 < param_4)) {
    uVar2 = 0;
    goto LAB_01749198;
  }
  if ((&local_5c < param_2 && param_2 < local_2c) || ((param_2 < &local_5c && (&local_5c < puVar8)))
     ) goto LAB_01749518;
  puVar6 = &local_5c;
  do {
    uVar3 = param_2[1];
    puVar7 = param_2 + 4;
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *puVar6 = *param_2;
    puVar6[1] = uVar3;
    puVar6[2] = uVar4;
    puVar6[3] = uVar5;
    puVar6 = puVar6 + 4;
    param_2 = puVar7;
  } while (puVar7 != puVar8);
  if (param_4 == 0) {
LAB_01749590:
    local_64 = local_58[5];
    local_68 = local_40;
    local_6c = local_3c;
    local_74 = local_34;
    local_78 = local_30;
  }
  else {
    if (param_4 - 1 < 3) {
      uVar3 = 0;
LAB_01749528:
      *(byte *)((int)local_58 + (uVar3 - 4)) =
           *(byte *)((int)param_3 + uVar3) ^ *(byte *)((int)local_58 + (uVar3 - 4));
      if (uVar3 + 1 < param_4) {
        *(byte *)((int)local_58 + (uVar3 - 3)) =
             *(byte *)((int)param_3 + uVar3 + 1) ^ *(byte *)((int)local_58 + (uVar3 - 3));
        if (uVar3 + 2 < param_4) {
          *(byte *)((int)local_58 + (uVar3 - 2)) =
               *(byte *)((int)param_3 + uVar3 + 2) ^ *(byte *)((int)local_58 + (uVar3 - 2));
        }
      }
      goto LAB_01749590;
    }
    uVar3 = param_4 >> 2;
    local_5c = local_5c ^ *param_3;
    if (uVar3 == 1) {
LAB_0174951c:
      uVar3 = param_4 & 0xfffffffc;
      if ((param_4 & 3) == 0) goto LAB_01749590;
      goto LAB_01749528;
    }
    local_58[0] = param_3[1] ^ local_58[0];
    if (uVar3 == 2) goto LAB_0174951c;
    local_58[1] = param_3[2] ^ local_58[1];
    if (uVar3 == 3) goto LAB_0174951c;
    local_58[2] = param_3[3] ^ local_58[2];
    if (uVar3 == 4) goto LAB_0174951c;
    local_58[3] = param_3[4] ^ local_58[3];
    if (uVar3 == 5) goto LAB_0174951c;
    local_58[4] = param_3[5] ^ local_58[4];
    if (uVar3 == 6) goto LAB_0174951c;
    local_64 = param_3[6] ^ local_58[5];
    local_58[5] = local_64;
    if (uVar3 == 7) goto LAB_0174951c;
    local_68 = param_3[7] ^ local_40;
    local_40 = local_68;
    if (uVar3 == 8) goto LAB_0174951c;
    local_6c = param_3[8] ^ local_3c;
    local_3c = local_6c;
    if (uVar3 == 9) goto LAB_0174951c;
    local_38 = (uint *)(param_3[9] ^ (uint)local_38);
    if (uVar3 == 10) goto LAB_0174951c;
    local_74 = param_3[10] ^ local_34;
    local_34 = local_74;
    if (uVar3 != 0xc) goto LAB_0174951c;
    local_78 = param_3[0xb] ^ local_30;
  }
  local_5c = local_5c ^ 0xfb8a0f53;
  local_58[0] = local_58[0] ^ 0xb93645c7;
  local_58[1] = local_58[1] ^ 0xf1b463a9;
  local_58[2] = local_58[2] ^ 0x8b73cbc4;
  local_58[3] = local_58[3] ^ 0x3d40a7ce;
  local_58[4] = local_58[4] ^ 0x6e6b604d;
  local_58[5] = local_64 ^ 0xd3c54e07;
  local_40 = local_68 ^ 0x189df3ba;
  local_3c = local_6c ^ 0xca036072;
  local_38 = (uint *)((uint)local_38 ^ 0x742aa637);
  local_34 = local_74 ^ 0x8ef5a2d1;
  local_30 = local_78 ^ 0x8e350675;
  uVar2 = FUN_017474f4(param_1,0,param_1 + 0xf4,&local_5c,0x20);
  puVar8 = (uint *)(param_1 + 0xfc);
  *(undefined4 *)(param_1 + 0xf8) = uVar2;
  if (((puVar8 < &local_3c) && (&local_3c < (uint *)(param_1 + 0x10c))) ||
     (puVar8 < local_2c && &local_3c < puVar8)) {
LAB_01749518:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x1749518);
    (*pcVar1)();
  }
  *(uint *)(param_1 + 0xfc) = local_3c;
  *(uint **)(param_1 + 0x100) = local_38;
  uVar2 = 1;
  *(uint *)(param_1 + 0x104) = local_34;
  *(uint *)(param_1 + 0x108) = local_30;
  *(undefined8 *)(param_1 + 0x110) = 1;
  param_2 = local_38;
LAB_01749198:
  if ((local_2c[0] ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,param_2,local_2c[0] ^ DAT_018ddaf8,0);
  }
  return;
}

