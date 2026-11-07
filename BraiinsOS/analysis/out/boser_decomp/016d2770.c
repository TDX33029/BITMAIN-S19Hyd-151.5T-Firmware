// FUN_016d2770 @ 016d2770 size=744 calls_out=3 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016d2770(int *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if ((*(byte *)(param_2 + 0xb) & 1) == 0) {
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    if (uVar7 <= uVar6) goto LAB_016d2860;
    local_e4 = *param_3;
    local_e0 = param_3[1];
    FUN_016cfa44(&local_68);
    uVar6 = uVar6 + 1;
  }
  else {
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    if (uVar7 <= uVar6) goto LAB_016d2860;
    local_e4 = *param_3;
    local_e0 = param_3[1];
    FUN_016cfa44(&local_68);
    uVar7 = uVar7 - 1;
  }
  iVar2 = local_64;
  if (local_68 == 0x2a) {
    iVar3 = local_60;
    while( true ) {
      if ((*(byte *)(param_2 + 0xb) & 1) == 0) {
        if (uVar7 <= uVar6) goto LAB_016d29e4;
        FUN_016cfa44(&local_68,local_e4,local_e0);
        uVar6 = uVar6 + 1;
      }
      else {
        if (uVar7 <= uVar6) goto LAB_016d29e4;
        FUN_016cfa44(&local_68,local_e4,local_e0);
        uVar7 = uVar7 - 1;
      }
      iVar4 = local_60;
      if (local_68 != 0x2a) break;
      FUN_016ced90(&local_68,param_2);
      if (local_68 != 0x2a) {
        piVar1 = (int *)((uint)&local_68 | 4);
        iVar2 = piVar1[1];
        iVar3 = piVar1[2];
        iVar4 = piVar1[3];
        iVar5 = piVar1[4];
        param_1[1] = *piVar1;
        param_1[2] = iVar2;
        param_1[3] = iVar3;
        param_1[4] = iVar4;
        param_1[5] = iVar5;
        iVar2 = piVar1[6];
        iVar3 = piVar1[7];
        iVar4 = piVar1[8];
        iVar5 = piVar1[9];
        param_1[6] = piVar1[5];
        param_1[7] = iVar2;
        param_1[8] = iVar3;
        param_1[9] = iVar4;
        param_1[10] = iVar5;
        iVar2 = piVar1[0xb];
        iVar3 = piVar1[0xc];
        iVar4 = piVar1[0xd];
        iVar5 = piVar1[0xe];
        param_1[0xb] = piVar1[10];
        param_1[0xc] = iVar2;
        param_1[0xd] = iVar3;
        param_1[0xe] = iVar4;
        param_1[0xf] = iVar5;
        *param_1 = local_68;
        return;
      }
      iVar3 = iVar4;
    }
    if (local_68 != 0x2b) {
      param_1[3] = local_5c;
      param_1[4] = iStack_58;
      param_1[5] = iStack_54;
      param_1[6] = local_50;
      param_1[7] = local_4c;
      param_1[8] = iStack_48;
      param_1[9] = iStack_44;
      param_1[10] = iStack_40;
      param_1[0xb] = local_3c;
      param_1[0xc] = iStack_38;
      param_1[0xd] = iStack_34;
      param_1[0xe] = iStack_30;
      param_1[0xf] = iStack_2c;
      *param_1 = local_68;
      param_1[1] = local_64;
      param_1[2] = local_60;
      return;
    }
LAB_016d29e4:
    *param_1 = 0x2a;
    param_1[1] = iVar2;
    param_1[2] = iVar3;
    return;
  }
  if (local_68 != 0x2b) {
    param_1[3] = local_5c;
    param_1[4] = iStack_58;
    param_1[5] = iStack_54;
    param_1[6] = local_50;
    param_1[7] = local_4c;
    param_1[8] = iStack_48;
    param_1[9] = iStack_44;
    param_1[10] = iStack_40;
    param_1[0xb] = local_3c;
    param_1[0xc] = iStack_38;
    param_1[0xd] = iStack_34;
    param_1[0xe] = iStack_30;
    param_1[0xf] = iStack_2c;
    *param_1 = local_68;
    param_1[1] = local_64;
    param_1[2] = local_60;
    return;
  }
LAB_016d2860:
  FUN_016ce364(&local_68,param_2);
  if (local_68 == 0x2a) {
    param_1[2] = local_64;
  }
  else {
    param_1[2] = local_60;
    param_1[3] = local_5c;
    param_1[4] = iStack_58;
    param_1[5] = iStack_54;
    param_1[6] = local_50;
    param_1[7] = local_4c;
    param_1[8] = iStack_48;
    param_1[9] = iStack_44;
    param_1[10] = iStack_40;
    param_1[0xb] = local_3c;
    param_1[0xc] = iStack_38;
    param_1[0xd] = iStack_34;
    param_1[0xe] = iStack_30;
    param_1[0xf] = iStack_2c;
  }
  *param_1 = local_68;
  param_1[1] = local_64;
  return;
}

