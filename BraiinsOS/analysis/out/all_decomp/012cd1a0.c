// FUN_012cd1a0 @ 012cd1a0 size=356 calls_out=5 calls_in=1
// strings: 

void FUN_012cd1a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined8 uVar9;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  iVar1 = thunk_FUN_016d4a50(param_3);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_3);
  }
  FUN_016dd1aa(iVar1,param_2,param_3);
  iVar2 = thunk_FUN_016d4a50(param_5);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_5);
  }
  uVar3 = FUN_016dd1aa(iVar2,param_4,param_5);
  uVar9 = thunk_FUN_016de0ee(uVar3,0x2c0);
  puVar7 = (uint *)((int)uVar9 + (int)((ulonglong)uVar9 >> 0x20));
  if ((char)puVar7[4] == '\0') {
    FUN_015f62e4(&local_38);
    *puVar7 = local_38;
    puVar7[1] = uStack_34;
    puVar7[2] = uStack_30;
    puVar7[3] = uStack_2c;
    *(undefined1 *)(puVar7 + 4) = 1;
  }
  param_1[0x10] = param_3;
  param_1[0x13] = param_5;
  param_1[0x12] = iVar2;
  param_1[0x11] = param_5;
  uVar4 = *puVar7;
  uVar5 = puVar7[1];
  uVar6 = puVar7[2];
  uVar8 = puVar7[3];
  *puVar7 = uVar4 + 1;
  puVar7[1] = uVar5 + (0xfffffffe < uVar4);
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar8;
  param_1[9] = 1;
  param_1[0xc] = 1;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = param_3;
  param_1[0xf] = iVar1;
  *param_1 = &DAT_005674cc;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 4;
  param_1[0x16] = 0;
  return;
}

