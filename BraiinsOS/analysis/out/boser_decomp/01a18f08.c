// FUN_01a18f08 @ 01a18f08 size=436 calls_out=4 calls_in=2
// strings: 

void FUN_01a18f08(int *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined8 uVar9;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined4 *puStack_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  uVar9 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar7 = (uint *)((int)uVar9 + (int)((ulonglong)uVar9 >> 0x20));
  if ((char)puVar7[4] == '\0') {
    FUN_019ae6ac(&local_68);
    *puVar7 = local_68;
    puVar7[1] = local_64;
    puVar7[2] = local_60;
    puVar7[3] = local_5c;
    *(undefined1 *)(puVar7 + 4) = 1;
  }
  uVar6 = *puVar7;
  uVar5 = puVar7[1];
  uVar3 = uVar5 + (0xfffffffe < uVar6);
  uVar4 = puVar7[2];
  *puVar7 = uVar6 + 1;
  puVar7[1] = uVar3;
  uVar8 = puVar7[3];
  puStack_48 = &DAT_0056d238;
  uStack_44 = 0;
  local_40 = 0;
  uStack_3c = 0;
  local_4c = 0x3ffffffe;
  local_50 = local_50 & 0xffffff00;
  local_54 = 0;
  local_58 = 0;
  local_5c = local_5c & 0xffffff00;
  local_60 = 0x1fffffff;
  local_64 = 1;
  local_68 = 1;
  local_38 = uVar6;
  local_34 = uVar5;
  local_30 = uVar4;
  local_2c = uVar8;
  puVar1 = (uint *)thunk_FUN_01be5118(0x40);
  if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x40);
  }
  *puVar1 = local_68;
  puVar1[1] = local_64;
  puVar1[2] = local_60;
  puVar1[3] = local_5c;
  puVar1[4] = local_58;
  puVar1[5] = local_54;
  puVar1[6] = local_50;
  puVar1[7] = local_4c;
  puVar1[8] = (uint)puStack_48;
  puVar1[9] = uStack_44;
  puVar1[10] = local_40;
  puVar1[0xb] = uStack_3c;
  puVar1[0xc] = local_38;
  puVar1[0xd] = local_34;
  puVar1[0xe] = local_30;
  puVar1[0xf] = local_2c;
  *puVar7 = uVar6 + 2;
  puVar7[1] = uVar5 + (0xfffffffd < uVar6);
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0x40);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x40);
  }
  puVar2[7] = 0x3ffffffe;
  puVar2[2] = 0x1fffffff;
  puVar2[9] = 0;
  *(undefined1 *)(puVar2 + 6) = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = uVar6 + 1;
  puVar2[0xd] = uVar3;
  puVar2[0xe] = uVar4;
  *puVar2 = 1;
  puVar2[1] = 1;
  *param_1 = (int)puVar1;
  param_1[1] = (int)puVar2;
  puVar2[0xf] = uVar8;
  puVar2[8] = &DAT_0056d238;
  return;
}

