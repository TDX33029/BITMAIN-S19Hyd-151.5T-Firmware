// FUN_014296e8 @ 014296e8 size=416 calls_out=2 calls_in=3
// strings: 

void FUN_014296e8(uint *param_1,uint param_2,int *param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_20;
  uint local_1c;
  
  iVar3 = param_3[1];
  iVar4 = param_3[2];
  uVar2 = (ushort)(((param_2 >> 8 & 0xff) << 0x10) >> 8) | (ushort)(param_2 >> 0x10) & 0xff;
  if ((uint)(iVar4 - iVar3) < 3) {
    FUN_00f5f538(param_3,3);
    iVar6 = *param_3;
    iVar3 = param_3[1];
    iVar4 = param_3[2];
    *(ushort *)(iVar6 + iVar3) = uVar2;
    *(char *)((ushort *)(iVar6 + iVar3) + 1) = (char)param_2;
    local_1c = iVar4 - iVar3;
    if (local_1c < 3) {
      local_20 = 3;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_20);
    }
  }
  else {
    iVar6 = *param_3;
    *(ushort *)(iVar6 + iVar3) = uVar2;
    *(char *)((ushort *)(iVar6 + iVar3) + 1) = (char)param_2;
  }
  uVar1 = *(undefined1 *)((int)param_1 + 5);
  iVar3 = iVar3 + 3;
  param_3[1] = iVar3;
  if (iVar4 == iVar3) {
    FUN_00f5f538(param_3,1);
    iVar3 = param_3[1];
    iVar4 = param_3[2];
    iVar6 = *param_3;
    *(undefined1 *)(iVar6 + iVar3) = uVar1;
    if (iVar4 == iVar3) {
      local_1c = 0;
      local_20 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_20);
    }
  }
  else {
    *(undefined1 *)(iVar6 + iVar3) = uVar1;
  }
  uVar5 = param_1[1];
  iVar3 = iVar3 + 1;
  param_3[1] = iVar3;
  if (iVar4 == iVar3) {
    FUN_00f5f538(param_3,1);
    iVar3 = param_3[1];
    iVar4 = param_3[2];
    *(char *)(*param_3 + iVar3) = (char)uVar5;
    if (iVar4 == iVar3) {
      local_1c = 0;
      local_20 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_20);
    }
  }
  else {
    *(char *)(iVar6 + iVar3) = (char)uVar5;
    iVar4 = param_3[2];
  }
  uVar5 = *param_1;
  iVar6 = iVar3 + 1;
  param_3[1] = iVar6;
  uVar5 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  if (3 < (uint)(iVar4 - iVar6)) {
    *(uint *)(*param_3 + iVar6) = uVar5;
    param_3[1] = iVar3 + 5;
    return;
  }
  FUN_00f5f538(param_3,4);
  iVar3 = param_3[1];
  iVar4 = param_3[2];
  *(uint *)(*param_3 + iVar3) = uVar5;
  local_1c = iVar4 - iVar3;
  if (local_1c < 4) {
    local_20 = 4;
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&local_20);
  }
  param_3[1] = iVar3 + 4;
  return;
}

