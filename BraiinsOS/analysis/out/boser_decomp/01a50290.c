// FUN_01a50290 @ 01a50290 size=588 calls_out=4 calls_in=1
// strings: 

void FUN_01a50290(int *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char **ppcVar5;
  int iVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  uint uVar9;
  ushort uVar10;
  char *pcVar11;
  int *piVar12;
  int iVar13;
  int local_9c;
  int local_90;
  int local_8c;
  char *local_88;
  int iStack_84;
  char **local_80;
  int local_7c;
  int local_78;
  undefined1 local_74;
  undefined1 local_73;
  ushort local_72;
  int local_70;
  char *local_6c;
  int local_68;
  int local_64;
  char *local_60;
  uint local_5c;
  int local_58 [6];
  int local_40;
  int local_3c;
  char *pcStack_38;
  int local_34;
  char **local_30;
  int iStack_2c;
  
  pcVar11 = *(char **)(param_3 + 8);
  iVar13 = *(int *)(param_3 + 0xc);
  FUN_01a48b48(&local_40,param_3);
  ppcVar5 = local_30;
  pcVar4 = pcStack_38;
  iVar3 = local_3c;
  if (local_40 == 3) {
    local_90 = 3;
LAB_01a50370:
    *param_1 = local_90;
    param_1[1] = local_8c;
    param_1[2] = (int)local_88;
    param_1[3] = iStack_84;
    param_1[4] = (int)local_80;
    param_1[5] = local_7c;
    return;
  }
  local_90 = local_40;
  local_8c = local_3c;
  local_88 = pcStack_38;
  iStack_84 = local_34;
  local_80 = local_30;
  local_7c = iStack_2c;
  if (local_40 != 1) goto LAB_01a50370;
  iVar6 = 4;
  *(char **)(param_3 + 8) = pcVar11;
  *(int *)(param_3 + 0xc) = iVar13;
  if (iVar13 != 0) {
    cVar1 = *param_2;
    cVar2 = *pcVar11;
    uVar9 = iVar13 - 1;
    *(char **)(param_3 + 8) = pcVar11 + 1;
    *(uint *)(param_3 + 0xc) = uVar9;
    if (cVar1 == cVar2) {
      piVar12 = &local_40;
      local_60 = pcVar11 + 1;
      local_5c = uVar9;
      FUN_01a48b48(piVar12,param_3);
      iVar13 = local_34;
      if (local_40 != 3) {
        if (local_40 == 1) {
          local_58[0] = 2;
        }
        else {
          local_58[0] = local_40;
        }
        local_40 = *(int *)(param_2 + 4);
        local_3c = *(int *)(param_2 + 8);
        param_2 = *(char **)(param_2 + 0xc);
        uVar9 = (uint)&local_90 | 4;
        local_30 = &local_60;
        pcStack_38 = param_2;
        local_34 = param_3;
        FUN_01a5cbd0(&local_78,local_58,piVar12);
        iVar6 = iVar13;
        if (local_78 != 3) {
          piVar12 = (int *)(uint)local_72;
          local_9c = local_64;
          iVar6 = local_70;
          iVar13 = local_68;
          param_3 = local_68;
          pcVar11 = local_6c;
          uVar10 = local_72;
          uVar8 = local_73;
          uVar7 = local_74;
          if (local_78 != 1) goto LAB_01a5046c;
          goto LAB_01a5039c;
        }
      }
      local_70 = iVar6;
      local_74 = SUB41(param_2,0);
      local_73 = (undefined1)uVar9;
      local_78 = 3;
      local_6c = pcVar4;
LAB_01a5046c:
      param_1[5] = local_9c;
      *param_1 = local_78;
      param_1[2] = local_70;
      param_1[3] = (int)local_6c;
      param_1[4] = param_3;
      *(short *)((int)param_1 + 6) = (short)piVar12;
      *(undefined1 *)((int)param_1 + 5) = local_73;
      *(undefined1 *)(param_1 + 1) = local_74;
      FUN_0134aee0(iVar3,pcVar4,4,0xc);
      FUN_012d40d0(ppcVar5,iStack_2c);
      return;
    }
    *(char **)(param_3 + 8) = pcVar11;
    *(int *)(param_3 + 0xc) = iVar13;
  }
  uVar7 = 0;
  uVar8 = 0;
  iVar13 = 0;
  pcVar11 = (char *)0x0;
  uVar10 = 0;
LAB_01a5039c:
  FUN_0134aee0(iVar3,pcVar4,4,0xc);
  FUN_012d40d0(ppcVar5,iStack_2c);
  param_1[5] = local_9c;
  param_1[2] = iVar6;
  param_1[3] = (int)pcVar11;
  param_1[4] = iVar13;
  *(ushort *)((int)param_1 + 6) = uVar10;
  *(undefined1 *)((int)param_1 + 5) = uVar8;
  *(undefined1 *)(param_1 + 1) = uVar7;
  *param_1 = 1;
  return;
}

