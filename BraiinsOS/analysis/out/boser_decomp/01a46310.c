// FUN_01a46310 @ 01a46310 size=472 calls_out=7 calls_in=1
// strings: 

void FUN_01a46310(int *param_1,int param_2)

{
  undefined4 extraout_r1;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  int local_160;
  int local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  int local_98;
  
  uVar4 = *(undefined4 *)(param_2 + 8);
  uVar6 = *(undefined4 *)(param_2 + 0xc);
  local_1c0 = 0;
  local_1c4 = 8;
  local_1c8 = 0;
  piVar9 = &local_1b8;
  FUN_01a4e77c(piVar9,param_2);
  if (local_160 == 4) {
    if (local_1b8 == 1) {
      *(undefined4 *)(param_2 + 8) = uVar4;
      *(undefined4 *)(param_2 + 0xc) = uVar6;
      param_1[1] = local_1c8;
      param_1[2] = local_1c4;
      param_1[3] = local_1c0;
      *param_1 = 3;
      FUN_0134aee0(local_1b4,local_1b0,4,0xc);
      FUN_012d40d0(local_1a8,local_1a4);
      return;
    }
LAB_01a464d0:
    iVar1 = piVar9[1];
    iVar2 = piVar9[2];
    iVar3 = piVar9[3];
    iVar7 = piVar9[4];
    iVar8 = piVar9[5];
    *param_1 = *piVar9;
    param_1[1] = iVar1;
    param_1[2] = iVar2;
    param_1[3] = iVar3;
    param_1[4] = iVar7;
    param_1[5] = iVar8;
    FUN_01a4655c(&local_1c8);
  }
  else {
    FUN_01a54b78(&local_1c8);
    iVar1 = local_1c4;
    iVar2 = 200;
    FUN_01bed4e2(local_1c4,&local_1b8,200);
    piVar9 = &local_f0;
    local_1c0 = 1;
    while( true ) {
      iVar3 = local_1c0;
      pcVar5 = *(char **)(param_2 + 8);
      iVar7 = *(int *)(param_2 + 0xc);
      if ((iVar7 == 0) || (*pcVar5 != ',')) break;
      *(char **)(param_2 + 8) = pcVar5 + 1;
      *(int *)(param_2 + 0xc) = iVar7 + -1;
      FUN_01a4e77c(piVar9,param_2);
      if (local_98 == 4) {
        if (local_f0 != 1) goto LAB_01a464d0;
        *(char **)(param_2 + 8) = pcVar5;
        *(int *)(param_2 + 0xc) = iVar7;
        param_1[1] = local_1c8;
        param_1[2] = local_1c4;
        param_1[3] = local_1c0;
        *param_1 = 3;
        FUN_0134aee0(local_ec,local_e8,4,0xc);
        goto LAB_01a46480;
      }
      if (iVar3 == local_1c8) {
        FUN_01a54b78(&local_1c8);
        iVar1 = local_1c4;
      }
      FUN_01bed864(iVar1 + iVar2,piVar9,200);
      local_1c0 = iVar3 + 1;
      iVar2 = iVar2 + 200;
    }
    *(char **)(param_2 + 8) = pcVar5;
    *(int *)(param_2 + 0xc) = iVar7;
    param_1[1] = local_1c8;
    param_1[2] = local_1c4;
    param_1[3] = local_1c0;
    *param_1 = 3;
    FUN_0134aee0(0,4,4,0xc);
    local_e0 = 0;
    local_dc = extraout_r1;
LAB_01a46480:
    FUN_012d40d0(local_e0,local_dc);
  }
  return;
}

