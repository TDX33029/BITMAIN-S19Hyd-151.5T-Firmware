// FUN_018bdc08 @ 018bdc08 size=676 calls_out=6 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018bdc08(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  uint local_9c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint local_2c;
  
  uVar16 = thunk_FUN_01bee35a(0,0x2c0);
  puVar9 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
  if ((char)puVar9[4] == '\0') {
    FUN_019ae6ac(&local_68);
    *puVar9 = local_68;
    puVar9[1] = uStack_64;
    puVar9[2] = uStack_60;
    puVar9[3] = uStack_5c;
    *(undefined1 *)(puVar9 + 4) = 1;
  }
  uVar2 = puVar9[2];
  uVar12 = *puVar9;
  uVar14 = puVar9[1];
  uVar3 = puVar9[3];
  *puVar9 = uVar12 + 1;
  puVar9[1] = uVar14 + (0xfffffffe < uVar12);
  iVar4 = thunk_FUN_01be5118(0x2444);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x2444);
  }
  FUN_01bed93e(iVar4 + 0x2400U,0xff,0x44);
  local_40 = 0x38;
  local_44 = 0x3f;
  local_3c = 0;
  local_48 = iVar4 + 0x2400U;
  local_38 = uVar12;
  uStack_34 = uVar14;
  local_30 = uVar2;
  local_2c = uVar3;
  iVar4 = thunk_FUN_01be5118(0x280);
  uVar1 = local_2c;
  uVar14 = local_30;
  uVar12 = uStack_34;
  uVar3 = local_38;
  uVar13 = local_3c;
  uVar10 = local_40;
  uVar6 = local_44;
  uVar2 = local_48;
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x280);
  }
  local_68 = local_48;
  uStack_64 = local_44;
  uStack_60 = local_40;
  uStack_5c = local_3c;
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = local_30;
  uStack_4c = local_2c;
  local_9c = local_9c & 0xffffff00;
  puVar5 = (undefined4 *)thunk_FUN_01be5118(0x40);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x40);
  }
  *puVar5 = 1;
  puVar5[1] = 1;
  puVar5[2] = 0;
  puVar5[3] = local_9c;
  puVar5[4] = 0x20;
  puVar5[5] = iVar4;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = uVar2;
  puVar5[9] = uVar6;
  puVar5[10] = uVar10;
  puVar5[0xb] = uVar13;
  puVar5[0xc] = uVar3;
  puVar5[0xd] = uVar12;
  puVar5[0xe] = uVar14;
  puVar5[0xf] = uVar1;
  uVar6 = param_2[7];
  uVar15 = param_2[6];
  uVar13 = param_2[8];
  uVar10 = param_2[9];
  puVar7 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *puVar7 = 1;
  puVar7[1] = 1;
  uVar8 = param_2[1];
  uVar11 = param_2[2];
  param_1[2] = *param_2;
  param_1[3] = uVar8;
  param_1[4] = uVar11;
  uVar8 = param_2[4];
  uVar11 = param_2[5];
  param_1[5] = param_2[3];
  param_1[6] = uVar8;
  param_1[7] = uVar11;
  param_1[8] = 0;
  param_1[9] = 4;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xd) = 2;
  param_1[0xb] = puVar5;
  param_1[0xc] = &DAT_01d22cb4;
  *(undefined2 *)(param_1 + 0x16) = 1;
  *param_1 = 0;
  param_1[0xf] = param_4;
  param_1[0xe] = param_3;
  param_1[0x10] = uVar15;
  param_1[0x11] = uVar6;
  param_1[0x12] = puVar7;
  param_1[0x14] = uVar13;
  param_1[0x13] = &DAT_01d22814;
  param_1[0x15] = uVar10;
  return;
}

