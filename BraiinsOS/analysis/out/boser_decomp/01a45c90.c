// FUN_01a45c90 @ 01a45c90 size=484 calls_out=7 calls_in=1
// strings: 

void FUN_01a45c90(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 extraout_r1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int local_118;
  int local_114;
  int local_110;
  int local_108;
  int local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f4;
  undefined4 local_f0;
  int local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_84;
  undefined4 local_80;
  
  uVar6 = *(undefined4 *)(param_2 + 8);
  uVar9 = *(undefined4 *)(param_2 + 0xc);
  local_110 = 0;
  local_114 = 8;
  local_118 = 0;
  piVar3 = &local_108;
  FUN_01a4f0b8(piVar3,param_2);
  if (local_108 == 4) {
    if (local_104 == 1) {
      *(undefined4 *)(param_2 + 8) = uVar6;
      *(undefined4 *)(param_2 + 0xc) = uVar9;
      param_1[1] = local_118;
      param_1[2] = local_114;
      param_1[3] = local_110;
      *param_1 = 3;
      FUN_0134aee0(local_100,local_fc,4,0xc);
      FUN_012d40d0(local_f4,local_f0);
      return;
    }
LAB_01a45e5c:
    puVar1 = (undefined4 *)((uint)piVar3 | 4);
    uVar6 = puVar1[1];
    uVar9 = puVar1[2];
    uVar5 = puVar1[3];
    uVar8 = puVar1[4];
    uVar11 = puVar1[5];
    *param_1 = *puVar1;
    param_1[1] = uVar6;
    param_1[2] = uVar9;
    param_1[3] = uVar5;
    param_1[4] = uVar8;
    param_1[5] = uVar11;
    FUN_01272b34(&local_118);
  }
  else {
    FUN_01a54bd8(&local_118);
    iVar12 = local_114;
    iVar7 = 0x70;
    FUN_01bed4e2(local_114,&local_108,0x70);
    piVar3 = &local_98;
    iVar10 = 1;
    while( true ) {
      pcVar2 = *(char **)(param_2 + 8);
      iVar4 = *(int *)(param_2 + 0xc);
      local_110 = iVar10;
      if ((iVar4 == 0) || (*pcVar2 != ',')) break;
      *(char **)(param_2 + 8) = pcVar2 + 1;
      *(int *)(param_2 + 0xc) = iVar4 + -1;
      FUN_01a4f0b8(piVar3,param_2);
      if (local_98 == 4) {
        if (local_94 != 1) goto LAB_01a45e5c;
        *(char **)(param_2 + 8) = pcVar2;
        *(int *)(param_2 + 0xc) = iVar4;
        param_1[1] = local_118;
        param_1[2] = local_114;
        param_1[3] = local_110;
        *param_1 = 3;
        FUN_0134aee0(local_90,local_8c,4,0xc);
        goto LAB_01a45dfc;
      }
      if (iVar10 == local_118) {
        FUN_01a54bd8(&local_118);
        iVar12 = local_114;
      }
      FUN_01bed864(iVar12 + iVar7,piVar3,0x70);
      iVar7 = iVar7 + 0x70;
      iVar10 = iVar10 + 1;
    }
    *(char **)(param_2 + 8) = pcVar2;
    *(int *)(param_2 + 0xc) = iVar4;
    param_1[1] = local_118;
    param_1[2] = local_114;
    param_1[3] = iVar10;
    *param_1 = 3;
    FUN_0134aee0(0,4,4,0xc);
    local_84 = 0;
    local_80 = extraout_r1;
LAB_01a45dfc:
    FUN_012d40d0(local_84,local_80);
  }
  return;
}

