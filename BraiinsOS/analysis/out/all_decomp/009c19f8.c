// FUN_009c19f8 @ 009c19f8 size=364 calls_out=5 calls_in=7
// strings: 

void FUN_009c19f8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  int local_3c;
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
  uVar2 = 0;
  if (param_5 < 0) {
LAB_009c1a50:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar2,param_5);
  }
  if (param_5 == 0) {
    iVar3 = 1;
    local_3c = 0;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(param_5);
    if (iVar3 == 0) {
      uVar2 = 1;
      goto LAB_009c1a50;
    }
    local_3c = param_5;
  }
  uVar2 = FUN_016dd1aa(iVar3,param_4,param_5);
  uVar9 = thunk_FUN_016de0ee(uVar2,0x2c0);
  puVar6 = (uint *)((int)uVar9 + (int)((ulonglong)uVar9 >> 0x20));
  if ((char)puVar6[4] == '\0') {
    FUN_015f62e4(&local_38);
    *puVar6 = local_38;
    puVar6[1] = uStack_34;
    puVar6[2] = uStack_30;
    puVar6[3] = uStack_2c;
    *(undefined1 *)(puVar6 + 4) = 1;
  }
  param_1[0x10] = param_3;
  param_1[0x13] = param_5;
  param_1[0x12] = iVar3;
  param_1[0x11] = local_3c;
  uVar4 = *puVar6;
  uVar5 = puVar6[1];
  uVar7 = puVar6[2];
  uVar8 = puVar6[3];
  *puVar6 = uVar4 + 1;
  puVar6[1] = uVar5 + (0xfffffffe < uVar4);
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  param_1[8] = 0;
  param_1[9] = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 1;
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

