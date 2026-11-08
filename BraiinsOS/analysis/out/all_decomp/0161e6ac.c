// FUN_0161e6ac @ 0161e6ac size=516 calls_out=7 calls_in=2
// strings: a Display implementation returned an error unexpectedly

void FUN_0161e6ac(undefined4 *param_1,int param_2,int *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 uVar11;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint *local_38;
  uint *local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  local_38 = (uint *)(param_2 + 0xc);
  uVar9 = *local_38;
  if (0xffffff < uVar9) {
    local_34 = (uint *)&LAB_00fac484;
    FUN_00600d2c((uint)&local_68 | 4,&DAT_0058bf1c,&local_38);
    local_34 = (uint *)&DAT_018aba80;
    local_38 = &local_48;
    local_54 = local_64;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    local_40 = 0;
    local_48 = 0;
    local_2c = 0;
    local_68 = 2;
    local_58 = 2;
    local_44 = 1;
    local_30 = &DAT_60000020;
    iVar4 = FUN_01127ff8(&local_58,&local_38);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                   &DAT_018aba98,&DAT_018af130);
    }
    param_1[1] = local_48;
    param_1[2] = local_44;
    param_1[3] = local_40;
    FUN_0161e5e4(&local_68);
    *param_1 = 0x80000001;
    return;
  }
  iVar4 = param_3[1];
  iVar8 = param_3[2];
  puVar10 = *(uint **)(param_2 + 8);
  uVar1 = *(undefined1 *)(param_2 + 0x12);
  bVar2 = *(byte *)(param_2 + 0x13);
  uVar3 = *(ushort *)(param_2 + 0x10);
  uVar5 = iVar8 - iVar4;
  if (uVar5 < (int)puVar10 + 6U) {
    FUN_00f5f538(param_3);
    iVar4 = param_3[1];
    iVar8 = param_3[2];
    uVar5 = iVar8 - iVar4;
  }
  if (uVar5 < 6) {
    FUN_00f5f538(param_3,6);
    iVar4 = param_3[1];
    iVar8 = param_3[2];
  }
  iVar6 = *param_3;
  puVar7 = (ushort *)(iVar6 + iVar4);
  *puVar7 = uVar3 | (ushort)bVar2 << 0xf;
  *(char *)((int)puVar7 + 5) = (char)(uVar9 >> 0x10);
  *(short *)((int)puVar7 + 3) = (short)uVar9;
  *(undefined1 *)(puVar7 + 1) = uVar1;
  local_34 = (uint *)(iVar8 - iVar4);
  if (local_34 < 6) {
    local_38 = (uint *)0x6;
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&local_38);
  }
  iVar4 = iVar4 + 6;
  uVar11 = *(undefined4 *)(param_2 + 4);
  local_34 = (uint *)(iVar8 - iVar4);
  param_3[1] = iVar4;
  if (local_34 < puVar10) {
    FUN_00f5f538(param_3,puVar10);
    iVar6 = *param_3;
    iVar4 = param_3[1];
    local_34 = (uint *)(param_3[2] - iVar4);
  }
  FUN_016dd1aa(iVar6 + iVar4,uVar11,puVar10);
  if (local_34 < puVar10) {
    local_38 = puVar10;
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&local_38);
  }
  param_3[1] = iVar4 + (int)puVar10;
  *param_1 = &DAT_80000008;
  return;
}

