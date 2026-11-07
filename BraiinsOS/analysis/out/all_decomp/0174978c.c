// FUN_0174978c @ 0174978c size=1224 calls_out=2 calls_in=4
// strings: 

void FUN_0174978c(int param_1,uint *param_2,uint *param_3,uint param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uStack_94;
  uint uStack_90;
  undefined4 local_8c;
  uint local_88 [6];
  uint local_70;
  uint local_6c;
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
  uint *local_38;
  uint local_34;
  uint local_30;
  uint local_2c [2];
  
  puVar7 = param_2 + 0xc;
  local_2c[0] = DAT_018ddaf8;
  puVar3 = (uint *)0x0;
  if ((puVar7 <= param_3) || (puVar3 = (uint *)((int)param_3 + param_4), puVar3 <= param_2)) {
    puVar11 = param_2;
    if (param_4 == 0) goto LAB_017499c4;
    if (param_4 < 0x31) {
      puVar11 = &local_8c;
      if ((param_2 < &local_5c && puVar11 < param_2) || ((param_2 < puVar11 && (puVar11 < puVar7))))
      goto LAB_01749be0;
      puVar3 = puVar11;
      do {
        uVar4 = param_2[1];
        puVar8 = param_2 + 4;
        uVar5 = param_2[2];
        uVar6 = param_2[3];
        *puVar3 = *param_2;
        puVar3[1] = uVar4;
        puVar3[2] = uVar5;
        puVar3[3] = uVar6;
        puVar3 = puVar3 + 4;
        param_2 = puVar8;
      } while (puVar8 != puVar7);
      if (param_4 - 1 < 3) {
        uVar4 = 0;
LAB_01749bf0:
        *(byte *)((int)local_88 + (uVar4 - 4)) =
             *(byte *)((int)param_3 + uVar4) ^ *(byte *)((int)local_88 + (uVar4 - 4));
        if (uVar4 + 1 < param_4) {
          *(byte *)((int)local_88 + (uVar4 - 3)) =
               *(byte *)((int)param_3 + uVar4 + 1) ^ *(byte *)((int)local_88 + (uVar4 - 3));
          if (uVar4 + 2 < param_4) {
            *(byte *)((int)local_88 + (uVar4 - 2)) =
                 *(byte *)((int)param_3 + uVar4 + 2) ^ *(byte *)((int)local_88 + (uVar4 - 2));
          }
        }
      }
      else {
        uVar4 = param_4 >> 2;
        local_8c = *param_3 ^ local_8c;
        if (((((uVar4 == 1) || (local_88[0] = param_3[1] ^ local_88[0], uVar4 == 2)) ||
             (local_88[1] = param_3[2] ^ local_88[1], uVar4 == 3)) ||
            ((((local_88[2] = param_3[3] ^ local_88[2], uVar4 == 4 ||
               (local_88[3] = param_3[4] ^ local_88[3], uVar4 == 5)) ||
              ((local_88[4] = param_3[5] ^ local_88[4], uVar4 == 6 ||
               ((local_88[5] = param_3[6] ^ local_88[5], uVar4 == 7 ||
                (local_70 = param_3[7] ^ local_70, uVar4 == 8)))))) ||
             (local_6c = param_3[8] ^ local_6c, uVar4 == 9)))) ||
           ((local_68 = param_3[9] ^ local_68, uVar4 == 10 ||
            (local_64 = param_3[10] ^ local_64, uVar4 != 0xc)))) {
          if ((param_4 & 3) != 0) {
            uVar4 = param_4 & 0xfffffffc;
            goto LAB_01749bf0;
          }
        }
        else {
          local_60 = param_3[0xb] ^ local_60;
        }
      }
LAB_017499c4:
      puVar3 = (uint *)(param_1 + 0x108);
      if ((!(puVar3 <= &uStack_94 || &uStack_90 <= puVar3)) ||
         (puVar7 = (uint *)(param_1 + 0x10c), !(puVar3 <= &uStack_90 || &local_8c <= puVar3))) {
LAB_01749be0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0,0x1749be0);
        (*pcVar1)();
      }
      puVar10 = (uint *)(param_1 + 0xfc);
      puVar8 = &local_5c;
      do {
        if (((puVar3 < &uStack_94) && (&uStack_94 < puVar7)) ||
           ((uVar4 = *(uint *)(param_1 + 0x108), puVar3 < &uStack_90 && (&uStack_90 < puVar7))))
        goto LAB_01749be0;
        uVar4 = (uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                uVar4 >> 0x18) + 1;
        *(uint *)(param_1 + 0x108) =
             uVar4 * 0x1000000 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
             uVar4 >> 0x18;
        puVar9 = puVar8 + 4;
        (**(code **)(param_1 + 0xf4))(puVar10,puVar8,param_1);
        puVar8 = puVar9;
      } while (puVar9 != local_2c);
      local_5c = *puVar11 ^ local_5c;
      local_58 = puVar11[1] ^ local_58;
      local_54 = puVar11[2] ^ local_54;
      local_50 = puVar11[3] ^ local_50;
      local_4c = puVar11[4] ^ local_4c;
      local_48 = puVar11[5] ^ local_48;
      local_44 = puVar11[6] ^ local_44;
      local_40 = puVar11[7] ^ local_40;
      local_3c = puVar11[8] ^ local_3c;
      local_38 = (uint *)(puVar11[9] ^ (uint)local_38);
      local_34 = puVar11[10] ^ local_34;
      local_30 = puVar11[0xb] ^ local_30;
      uVar2 = FUN_017474f4(param_1,0,param_1 + 0xf4,&local_5c,0x20);
      *(undefined4 *)(param_1 + 0xf8) = uVar2;
      if (((puVar10 < &local_3c) && (&local_3c < puVar7)) ||
         (!(local_2c <= puVar10 || puVar10 <= &local_3c))) goto LAB_01749be0;
      *(uint *)(param_1 + 0xfc) = local_3c;
      *(uint **)(param_1 + 0x100) = local_38;
      *(uint *)(param_1 + 0x104) = local_34;
      uVar2 = 1;
      *(uint *)(param_1 + 0x108) = local_30;
      *(undefined4 *)(param_1 + 0x110) = 1;
      *(undefined4 *)(param_1 + 0x114) = 0;
      puVar3 = local_38;
      goto LAB_017497e4;
    }
  }
  uVar2 = 0;
LAB_017497e4:
  if ((local_2c[0] ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,puVar3,local_2c[0] ^ DAT_018ddaf8,0);
  }
  return;
}

