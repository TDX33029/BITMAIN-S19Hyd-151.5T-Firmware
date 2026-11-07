// FUN_014c2740 @ 014c2740 size=384 calls_out=5 calls_in=2
// strings: 

void FUN_014c2740(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_r5;
  int iVar5;
  int iVar6;
  uint *local_1190;
  uint *local_1188;
  int local_1184;
  undefined4 uStack_1180;
  undefined4 local_117c;
  undefined4 local_1178;
  undefined4 uStack_1174;
  undefined4 local_1170;
  undefined4 uStack_116c;
  int local_1168;
  int iStack_1164;
  int iStack_1160;
  int iStack_115c;
  uint *local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  int local_44;
  uint *local_40;
  uint *local_3c;
  uint local_38;
  uint *local_34;
  int iStack_30;
  undefined4 local_2c;
  
  iVar3 = *param_2;
  if (iVar3 == 2) {
    FUN_014c3e78(&local_1188,param_2 + 1);
    FUN_014c2740(param_1,&local_1188);
  }
  else {
    FUN_014c28ec(&local_1188,param_2 + 4);
    if (local_1184 == 0) {
      local_48 = 0;
    }
    else {
      local_48 = 4;
      unaff_r5 = local_1184 * 0xe9 + 0xed;
      local_1190 = local_1188 + local_1184 * -0x3a + -0x3a;
    }
    local_34 = local_1188 + 1;
    local_38 = ~*local_1188 & 0x80808080;
    iStack_30 = (int)local_1188 + local_1184 + 1;
    local_40 = local_1190;
    local_3c = local_1188;
    local_2c = local_117c;
    local_44 = unaff_r5;
    FUN_014c42e8(&local_68,&local_48);
    local_1168 = param_2[0x442];
    iStack_1164 = param_2[0x443];
    iStack_1160 = param_2[0x444];
    iStack_115c = param_2[0x445];
    iVar6 = param_2[0x446];
    iVar2 = param_2[0x447];
    iVar4 = param_2[0x440];
    iVar5 = param_2[0x441];
    param_1[0xd] = param_2[0x43f];
    param_1[0xe] = iVar4;
    param_1[0xf] = iVar5;
    uVar1 = *(undefined1 *)((int)param_2 + 0x111d);
    local_1188 = local_68;
    local_1184 = uStack_64;
    uStack_1180 = uStack_60;
    local_117c = uStack_5c;
    local_1178 = local_58;
    uStack_1174 = uStack_54;
    local_1170 = uStack_50;
    uStack_116c = uStack_4c;
    *param_1 = local_68;
    param_1[1] = uStack_64;
    param_1[2] = uStack_60;
    param_1[3] = uStack_5c;
    param_1[4] = local_58;
    param_1[5] = uStack_54;
    param_1[6] = uStack_50;
    param_1[7] = uStack_4c;
    param_1[8] = local_1168;
    param_1[9] = iStack_1164;
    param_1[10] = iStack_1160;
    param_1[0xb] = iStack_115c;
    *(undefined1 *)((int)param_1 + 0x41) = uVar1;
    *(char *)(param_1 + 0x10) = (char)iVar2;
    param_1[0xc] = iVar6;
    if (iVar3 != 0) {
      FUN_01960c70(param_2 + 1);
      return;
    }
  }
  return;
}

