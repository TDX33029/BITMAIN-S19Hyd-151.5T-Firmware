// FUN_00797a34 @ 00797a34 size=236 calls_out=3 calls_in=4
// strings: 

void FUN_00797a34(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *local_68;
  int *local_64;
  int local_60;
  int *local_5c;
  int local_58;
  int *local_54;
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  FUN_01656528(&local_58);
  piVar7 = local_54 + local_50 * 0xd;
  local_60 = local_58;
  local_68 = local_54;
  local_64 = local_54;
  iVar1 = -0x80000000;
  local_5c = piVar7;
  if (local_50 != 0) {
    iVar2 = local_50 * 0x34;
    piVar8 = local_54;
    do {
      iVar1 = *piVar8;
      local_54 = (int *)piVar8[1];
      local_50 = piVar8[2];
      iStack_4c = piVar8[3];
      local_48 = piVar8[4];
      iStack_44 = piVar8[5];
      iStack_40 = piVar8[6];
      iStack_3c = piVar8[7];
      local_38 = piVar8[8];
      iStack_34 = piVar8[9];
      local_30 = piVar8[10];
      iStack_2c = piVar8[0xb];
      iStack_28 = piVar8[0xc];
      local_58 = iVar1;
      if (((local_30 & 9) == 1) && (local_38 != 0)) {
        if (iVar1 != -0x80000000) {
          iVar2 = piVar8[2];
          iVar3 = piVar8[3];
          iVar4 = piVar8[4];
          iVar5 = piVar8[5];
          iVar6 = piVar8[6];
          param_1[1] = piVar8[1];
          param_1[2] = iVar2;
          param_1[3] = iVar3;
          param_1[4] = iVar4;
          param_1[5] = iVar5;
          param_1[6] = iVar6;
          iVar2 = piVar8[8];
          iVar3 = piVar8[9];
          iVar4 = piVar8[10];
          iVar5 = piVar8[0xb];
          iVar6 = piVar8[0xc];
          param_1[7] = piVar8[7];
          param_1[8] = iVar2;
          param_1[9] = iVar3;
          param_1[10] = iVar4;
          param_1[0xb] = iVar5;
          param_1[0xc] = iVar6;
          local_64 = piVar8 + 0xd;
          goto LAB_00797b0c;
        }
      }
      else {
        FUN_007390c4(&local_58);
      }
      iVar2 = iVar2 + -0x34;
      piVar8 = piVar8 + 0xd;
    } while (iVar2 != 0);
    iVar1 = -0x80000000;
    local_64 = piVar7;
  }
LAB_00797b0c:
  *param_1 = iVar1;
  FUN_012e8d04(&local_68);
  return;
}

