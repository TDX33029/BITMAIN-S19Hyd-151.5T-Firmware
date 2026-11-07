// FUN_01a698a4 @ 01a698a4 size=476 calls_out=4 calls_in=2
// strings: 

void FUN_01a698a4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint **ppuVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint *local_68;
  undefined4 *local_64;
  undefined1 local_60;
  uint *local_5c;
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
  uint local_2c;
  
  local_58 = 0;
  uVar2 = FUN_01427160(&local_58);
  local_48 = FUN_013cec90(0);
  local_40 = 1;
  local_3c = 0x80000000;
  local_2c = 0;
  local_34 = 0;
  local_38 = 1;
  local_54 = 1;
  local_58 = 1;
  local_50 = uVar2;
  local_4c = uVar2;
  local_44 = local_48;
  puVar3 = (uint *)thunk_FUN_01be5118(0x30);
  if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x30);
  }
  *puVar3 = local_58;
  puVar3[1] = local_54;
  puVar3[2] = local_50;
  puVar3[3] = local_4c;
  puVar3[4] = local_48;
  puVar3[5] = local_44;
  puVar3[6] = local_40;
  puVar3[7] = local_3c;
  puVar3[8] = local_38;
  puVar3[9] = local_34;
  puVar3[10] = local_30;
  puVar3[0xb] = local_2c;
  do {
    uVar2 = *puVar3;
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = uVar2 + 1;
  if (-1 < (int)uVar2) {
    local_64 = (undefined4 *)thunk_FUN_01be5118(0x1c);
    if (local_64 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x1c);
    }
    local_64[6] = 0;
    *local_64 = 1;
    local_64[1] = 1;
    local_64[2] = 0;
    local_64[3] = 0;
    local_64[4] = 0;
    local_60 = 0;
    local_34 = local_34 & 0xffffff00;
    local_3c = 0;
    local_40 = local_40 & 0xffffff00;
    local_48 = 0;
    local_4c = local_4c & 0xffffff00;
    local_50 = 0;
    local_30 = local_30 & 0xffffff00;
    local_54 = 1;
    local_58 = 1;
    local_68 = puVar3;
    local_5c = puVar3;
    puVar4 = (uint *)thunk_FUN_01be5118(0x2c);
    if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x2c);
    }
    *puVar4 = local_58;
    puVar4[1] = local_54;
    puVar4[2] = local_50;
    puVar4[3] = local_4c;
    puVar4[4] = local_48;
    puVar4[5] = local_44;
    puVar4[6] = local_40;
    puVar4[7] = local_3c;
    puVar4[8] = local_38;
    puVar4[9] = local_34;
    puVar4[10] = local_30;
    do {
      puVar5 = (undefined *)*puVar4;
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = (uint)(puVar5 + 1);
    ppuVar7 = (uint **)0x0;
    puVar6 = puVar5;
    if (puVar5 < (undefined *)0x80000000) {
      ppuVar7 = &local_68;
      puVar6 = &DAT_002c3484;
    }
    if (-1 < (int)puVar5) {
      puVar9 = ppuVar7[1];
      puVar10 = ppuVar7[2];
      param_1[9] = *ppuVar7;
      param_1[10] = puVar9;
      param_1[0xb] = puVar10;
      uVar8 = param_3[1];
      uVar11 = param_3[2];
      param_1[5] = *param_3;
      param_1[6] = uVar8;
      param_1[7] = uVar11;
      uVar8 = param_2[1];
      uVar11 = param_2[2];
      uVar12 = param_2[3];
      param_1[0xc] = *param_2;
      param_1[0xd] = uVar8;
      param_1[0xe] = uVar11;
      param_1[0xf] = uVar12;
      param_1[0x10] = puVar3;
      param_1[0x11] = puVar4;
      param_1[8] = puVar4;
      *param_1 = puVar6 + 0x1a69a0c;
      param_1[1] = 1;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = param_4;
      return;
    }
  }
  software_udf(0xfdee,0x1a69a58);
  return;
}

