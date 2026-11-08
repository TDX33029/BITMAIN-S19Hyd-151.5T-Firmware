// FUN_018fafcc @ 018fafcc size=892 calls_out=8 calls_in=2
// strings: 

void FUN_018fafcc(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint extraout_r2;
  uint uVar12;
  undefined4 uVar13;
  uint *puVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  uint local_9c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar18 = *(undefined4 *)(param_2 + 0x54);
  uVar19 = thunk_FUN_01bee35a(0,0x2c0);
  puVar14 = (uint *)((int)uVar19 + (int)((ulonglong)uVar19 >> 0x20));
  if ((char)puVar14[4] == '\0') {
    FUN_019ae6ac(&local_48);
    *puVar14 = local_48;
    puVar14[1] = local_44;
    puVar14[2] = local_40;
    puVar14[3] = local_3c;
    *(undefined1 *)(puVar14 + 4) = 1;
  }
  uVar1 = *puVar14;
  uVar8 = puVar14[1];
  uVar10 = puVar14[2];
  uVar11 = puVar14[3];
  *puVar14 = uVar1 + 1;
  puVar14[1] = uVar8 + (0xfffffffe < uVar1);
  FUN_018f66d4(&local_48,0x40);
  if (local_48 == 0) {
    uVar16 = 0;
    uVar12 = extraout_r2;
  }
  else {
    FUN_01bed93e(local_48,0xff,local_44 + 5);
    uVar12 = local_3c;
    uVar16 = local_48;
  }
  iVar2 = thunk_FUN_01be5118(0x280);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x280);
  }
  local_9c = local_9c & 0xffffff00;
  local_48 = uVar16;
  local_38 = uVar1;
  uStack_34 = uVar8;
  uStack_30 = uVar10;
  uStack_2c = uVar11;
  puVar3 = (undefined4 *)thunk_FUN_01be5118(0x40);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x40);
  }
  *puVar3 = 1;
  puVar3[1] = 1;
  puVar3[2] = 0;
  puVar3[3] = local_9c;
  puVar3[4] = 0x20;
  puVar3[5] = iVar2;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = uVar16;
  puVar3[9] = local_44;
  puVar3[10] = local_40;
  puVar3[0xb] = uVar12;
  puVar3[0xc] = uVar1;
  puVar3[0xd] = uVar8;
  puVar3[0xe] = uVar10;
  puVar3[0xf] = uVar11;
  uVar4 = *(undefined4 *)(param_2 + 0x44);
  uVar5 = *(undefined4 *)(param_2 + 0x50);
  uVar17 = *(undefined4 *)(param_2 + 0x48);
  uVar15 = *(undefined4 *)(param_2 + 0x4c);
  puVar6 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  uVar13 = *(undefined4 *)(param_2 + 0x58);
  uVar9 = *(undefined4 *)(param_2 + 0x5c);
  *puVar6 = 1;
  puVar6[1] = 1;
  iVar2 = thunk_FUN_01be5118(0x10);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x10);
  }
  puVar7 = (undefined4 *)thunk_FUN_01be5118(0x28);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x28);
  }
  *puVar7 = 1;
  puVar7[1] = 1;
  puVar7[2] = 1;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 4;
  puVar7[6] = iVar2;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[9] = 4;
  FUN_01bed4e2(param_1 + 0xb,param_2,0x44);
  param_1[2] = 0;
  param_1[3] = 4;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 2;
  param_1[0x1c] = puVar3;
  param_1[0x1d] = &DAT_01d25038;
  *(undefined1 *)(param_1 + 0x2b) = 1;
  param_1[0x20] = param_4;
  param_1[0x21] = puVar6;
  param_1[0x23] = uVar13;
  param_1[0x24] = uVar9;
  param_1[0x26] = uVar4;
  param_1[6] = 4;
  param_1[9] = 4;
  param_1[0x27] = uVar17;
  param_1[0x29] = uVar15;
  *param_1 = 0;
  *(undefined1 *)((int)param_1 + 0xaf) = 0;
  *(undefined2 *)((int)param_1 + 0xad) = 0;
  param_1[0x1f] = param_3;
  param_1[0x22] = &DAT_01d240bc;
  param_1[0x25] = uVar18;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0x28] = puVar7;
  param_1[0x2a] = uVar5;
  return;
}

