// FUN_0099c61c @ 0099c61c size=820 calls_out=7 calls_in=0
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffb0 : 0x0099c85c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0099c61c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined4 *local_70;
  undefined4 local_6c;
  uint local_68;
  undefined4 uStack_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  puVar3[1] = 0x1c0;
  puVar3[2] = 0x1c1;
  puVar3[3] = 0x1c2;
  uVar10 = thunk_FUN_016de0ee(0x1c2,0x2c0);
  puVar9 = (uint *)((int)uVar10 + (int)((ulonglong)uVar10 >> 0x20));
  *puVar3 = 0x1bf;
  if ((char)puVar9[4] == '\x01') {
    local_60 = *puVar9;
    uStack_5c = puVar9[1];
    uStack_58 = puVar9[2];
    uStack_54 = puVar9[3];
  }
  else {
    FUN_015f62e4(&local_50);
    *(undefined1 *)(puVar9 + 4) = 1;
    puVar9[2] = local_48;
    puVar9[3] = local_44;
    local_60 = local_50;
    uStack_5c = local_4c;
    uStack_58 = local_48;
    uStack_54 = local_44;
  }
  *puVar9 = local_60 + 1;
  puVar9[1] = uStack_5c + (0xfffffffe < local_60);
  local_6c = 0;
  local_68 = 0;
  uStack_64 = 0;
  local_70 = &DAT_005674cc;
  local_2c = 1;
  local_30 = 0;
  local_34 = 0;
  local_38 = 1;
  local_3c = CONCAT31(local_3c._1_3_,1);
  local_40 = local_40 & 0xffffff00;
  local_44 = 1;
  local_48 = 0;
  local_4c = 1;
  local_50 = local_50 & 0xffffff00;
  FUN_009a0000(&local_70,&local_50);
  uVar2 = local_6c;
  puVar1 = local_70;
  local_50 = local_68;
  local_4c = uStack_64;
  local_48 = local_60;
  local_44 = uStack_5c;
  local_40 = uStack_58;
  local_3c = uStack_54;
  iVar4 = thunk_FUN_016d4a50(0x16);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x16);
  }
  FUN_016dd1aa(iVar4,&DAT_00349200,0x16);
  puVar5 = (undefined4 *)thunk_FUN_016d4a50(6);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1);
  }
  *(undefined2 *)(puVar5 + 1) = 0x646f;
  *puVar5 = 0x69726570;
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,8);
  }
  puVar6[1] = 0x79746972;
  *puVar6 = 0x616c6f70;
  puVar7 = (undefined4 *)thunk_FUN_016d4a50(6);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,6);
  }
  *(undefined2 *)(puVar7 + 1) = 0x6c61;
  *puVar7 = 0x6d726f6e;
  puVar8 = (undefined4 *)thunk_FUN_016d4a50(10);
  if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,10);
  }
  *(undefined2 *)(puVar8 + 2) = 0x656c;
  puVar8[1] = 0x6379635f;
  *puVar8 = 0x79747564;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  param_1[2] = local_50;
  param_1[3] = local_4c;
  param_1[4] = local_48;
  param_1[5] = local_44;
  param_1[6] = local_40;
  param_1[7] = local_3c;
  param_1[0x15] = 10;
  param_1[0x17] = 10;
  param_1[8] = 100000;
  param_1[9] = 0x16;
  param_1[10] = iVar4;
  param_1[0xc] = 6;
  param_1[0xd] = puVar5;
  param_1[0x11] = 8;
  param_1[0x18] = 4;
  param_1[0x19] = puVar3;
  param_1[0x1a] = 4;
  param_1[0x10] = puVar6;
  param_1[0x12] = 6;
  param_1[0x13] = puVar7;
  param_1[0x14] = 6;
  param_1[0x16] = puVar8;
  param_1[0xb] = 0x16;
  param_1[0xe] = 6;
  param_1[0xf] = 8;
  return;
}

