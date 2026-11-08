// FUN_00fa3d10 @ 00fa3d10 size=404 calls_out=1 calls_in=5
// strings: 

void FUN_00fa3d10(int *param_1,int param_2,byte param_3)

{
  byte *pbVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  bool bVar6;
  int local_48;
  int iStack_44;
  int iStack_40;
  int local_38;
  int iStack_34;
  int iStack_30;
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 **local_20;
  code *local_1c;
  
  uVar4 = *(uint *)(param_2 + 0x144);
  bVar6 = (uVar4 & 0x80000) == 0;
  if (bVar6) {
    param_3 = *(byte *)(param_2 + 0x14a);
  }
  if (bVar6 && (param_3 & 8) == 0) {
    iVar3 = 6;
    puVar2 = &DAT_0035df61;
    goto LAB_00fa3e64;
  }
  iVar3 = *(int *)(param_2 + 0x4c) * 0x134;
  pbVar1 = (byte *)(*(int *)(param_2 + 0x48) + 0x130);
  do {
    pbVar5 = pbVar1;
    if (iVar3 == 0) goto LAB_00fa3e18;
    iVar3 = iVar3 + -0x134;
    pbVar1 = pbVar5 + 0x134;
  } while (2 < *pbVar5 - 5);
  local_28 = *(undefined1 **)(pbVar5 + -0x10);
  if (local_28 == (undefined1 *)0x0) {
LAB_00fa3dbc:
    local_28 = *(undefined1 **)(pbVar5 + -0xfc);
    if (local_28 != &DAT_00110000) {
      local_20 = &local_28;
      local_1c = FUN_00faaf34;
      FUN_00600d2c(&local_48,&DAT_0057dbf4,&local_20);
      goto joined_r0x00fa3e14;
    }
  }
  else {
    local_24 = *(undefined4 *)(pbVar5 + -0xc);
    local_20 = &local_28;
    local_1c = (code *)&DAT_0157d360;
    FUN_00600d2c(&local_38,&DAT_0058bf43,&local_20);
    if (local_38 == -0x80000000) goto LAB_00fa3dbc;
    iStack_44 = iStack_34;
    iStack_40 = iStack_30;
    local_48 = local_38;
joined_r0x00fa3e14:
    if (local_48 != -0x80000000) {
      *param_1 = local_48;
      param_1[1] = iStack_44;
      param_1[2] = iStack_40;
      return;
    }
  }
LAB_00fa3e18:
  if ((((uVar4 & 0x100000) != 0) || (*(int *)(param_2 + 100) == 0)) ||
     ((*(byte *)(param_2 + 0x14a) & 0x10) != 0)) {
    *param_1 = -0x7fffffff;
    return;
  }
  iVar3 = 4;
  puVar2 = &DAT_00567744;
LAB_00fa3e64:
  param_1[1] = (int)puVar2;
  *param_1 = -0x80000000;
  param_1[2] = iVar3;
  return;
}

