// FUN_0139daac @ 0139daac size=712 calls_out=6 calls_in=8
// strings: reverse search must match if forward search does

void FUN_0139daac(undefined4 *param_1,int param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint *puVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uint local_60;
  undefined4 local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined1 local_48;
  undefined2 local_47;
  undefined1 local_45;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint *local_34;
  code *local_30;
  uint *local_2c;
  undefined1 *local_28;
  
  iVar3 = *(int *)(param_2 + 0x278);
  bVar4 = 0;
  if (*(char *)(iVar3 + 0x15a) == '\x01') {
    bVar4 = *(byte *)(iVar3 + 0x15b);
  }
  FUN_0137a9fc(&local_60,param_2,param_3,param_4);
  if (local_60 == 2) {
LAB_0139dafc:
    param_1[1] = local_5c;
    uVar1 = 2;
LAB_0139db04:
    *param_1 = uVar1;
    return;
  }
  if ((local_60 & 1) == 0) {
    *param_1 = 0;
    return;
  }
  if ((bVar4 & 1) == 0) {
    uVar2 = param_4[4];
    puVar5 = (uint *)local_58;
    pcVar6 = local_5c;
    if (uVar2 == local_58) {
LAB_0139db30:
      *param_1 = 1;
      param_1[1] = puVar5;
      param_1[2] = puVar5;
      param_1[3] = local_5c;
      return;
    }
  }
  else {
    FUN_013b7ec0(&local_34,param_4,local_5c,local_58,local_58,param_2,param_3);
    local_5c = local_30;
    if (local_34 == (uint *)0x2) goto LAB_0139dafc;
    uVar1 = 0;
    if (((uint)local_34 & 1) == 0) goto LAB_0139db04;
    uVar2 = param_4[4];
    puVar5 = local_2c;
    pcVar6 = local_30;
    if ((uint *)uVar2 == local_2c) goto LAB_0139db30;
  }
  if ((*param_4 == 0) && (*(int *)(iVar3 + 0x128) != *(int *)(iVar3 + 300))) {
    local_58 = param_4[2];
    local_54 = param_4[3];
    bVar8 = (int)puVar5 + 1U <= uVar2;
    bVar7 = uVar2 == (int)puVar5 + 1U;
    if (!bVar8 || bVar7) {
      bVar8 = local_54 <= puVar5;
      bVar7 = puVar5 == (uint *)local_54;
    }
    local_44 = uVar2;
    if (bVar8 && !bVar7) {
      local_2c = &local_38;
      local_34 = &local_44;
      local_28 = &LAB_00fac484;
      local_30 = FUN_005ffff4;
      local_38 = local_54;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0057a181,&local_34,&DAT_01893ee0);
    }
    local_60 = 1;
    local_45 = (undefined1)((uint)param_4[6] >> 0x18);
    local_47 = (undefined2)((uint)param_4[6] >> 8);
    bVar4 = 0;
    local_48 = 0;
    if (*(char *)(*(int *)(param_2 + 0x500) + 0x15a) == '\x01') {
      bVar4 = *(byte *)(*(int *)(param_2 + 0x500) + 0x15b);
    }
    local_50 = uVar2;
    local_40 = (uint)puVar5;
    FUN_0137d1fc(&local_34,param_2 + 0x288,param_3 + 0xc0,&local_60);
    if (local_34 == (uint *)0x2) {
      *param_1 = 2;
      param_1[1] = local_30;
      return;
    }
    if (((uint)local_34 & 1) == 0) {
LAB_0139dd5c:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("reverse search must match if forward search does",0x30,&DAT_018935c8);
    }
    if ((bVar4 & 1) != 0) {
      FUN_013b809c(&local_44,&local_60,local_30,local_2c,local_2c,param_2 + 0x288,param_3 + 0xc0);
      if (local_44 == 2) {
        *param_1 = 2;
        param_1[1] = local_40;
        return;
      }
      local_2c = (uint *)local_3c;
      if ((local_44 & 1) == 0) goto LAB_0139dd5c;
    }
    if (local_2c <= puVar5) {
      *param_1 = 1;
      param_1[1] = local_2c;
      param_1[2] = puVar5;
      param_1[3] = pcVar6;
      return;
    }
  }
  else if (uVar2 <= puVar5) {
    param_1[1] = uVar2;
    *param_1 = 1;
    param_1[2] = puVar5;
    param_1[3] = pcVar6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
}

