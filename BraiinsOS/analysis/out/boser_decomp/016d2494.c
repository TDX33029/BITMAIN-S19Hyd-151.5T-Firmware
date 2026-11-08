// FUN_016d2494 @ 016d2494 size=732 calls_out=6 calls_in=0
// strings: 

void FUN_016d2494(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
                 uint param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  
  local_2c = 0;
  local_28 = param_5;
  local_34 = param_2;
  local_30 = param_3;
  FUN_016d2770(&local_78,param_2,&local_34);
  iVar5 = local_70;
  iVar4 = local_74;
  if (local_78 == 0x2a) {
    if (param_6 != param_5) {
      FUN_016ce364(&local_78,param_2);
      iVar7 = local_74;
      if (local_78 != 0x2a) {
        param_1[2] = local_70;
        param_1[3] = local_6c;
        param_1[4] = iStack_68;
        param_1[5] = iStack_64;
        param_1[6] = local_60;
        param_1[7] = local_5c;
        param_1[8] = iStack_58;
        param_1[9] = iStack_54;
        param_1[10] = iStack_50;
        param_1[0xb] = local_4c;
        param_1[0xc] = iStack_48;
        param_1[0xd] = iStack_44;
        param_1[0xe] = iStack_40;
        param_1[0xf] = iStack_3c;
        *param_1 = local_78;
        param_1[1] = local_74;
        return;
      }
      if (param_5 < param_6) {
        iVar6 = param_6 - param_5;
        iVar8 = iVar5;
        do {
          if (param_4 == 0) {
            FUN_016d241c(&local_78,param_2);
          }
          else {
            FUN_016cf0f8(&local_78,param_2);
          }
          iVar1 = local_74;
          if (local_78 != 0x2a) {
            param_1[2] = local_70;
            param_1[3] = local_6c;
            param_1[4] = iStack_68;
            param_1[5] = iStack_64;
            param_1[6] = local_60;
            param_1[7] = local_5c;
            param_1[8] = iStack_58;
            param_1[9] = iStack_54;
            param_1[10] = iStack_50;
            param_1[0xb] = local_4c;
            param_1[0xc] = iStack_48;
            param_1[0xd] = iStack_44;
            param_1[0xe] = iStack_40;
            param_1[0xf] = iStack_3c;
            *param_1 = local_78;
            param_1[1] = local_74;
            return;
          }
          FUN_016cfa44(&local_78,param_2,param_3);
          iVar5 = local_70;
          iVar2 = local_74;
          if (local_78 != 0x2a) {
            param_1[3] = local_6c;
            param_1[4] = iStack_68;
            param_1[5] = iStack_64;
            param_1[6] = local_60;
            param_1[7] = local_5c;
            param_1[8] = iStack_58;
            param_1[9] = iStack_54;
            param_1[10] = iStack_50;
            param_1[0xb] = local_4c;
            param_1[0xc] = iStack_48;
            param_1[0xd] = iStack_44;
            param_1[0xe] = iStack_40;
            param_1[0xf] = iStack_3c;
            *param_1 = local_78;
            param_1[1] = local_74;
            param_1[2] = local_70;
            return;
          }
          FUN_016ced90(&local_78,param_2,iVar8,iVar1);
          if ((local_78 != 0x2a) || (FUN_016ced90(&local_78,param_2,iVar1,iVar2), local_78 != 0x2a))
          {
            piVar3 = (int *)((uint)&local_78 | 4);
            iVar4 = piVar3[1];
            iVar5 = piVar3[2];
            iVar7 = piVar3[3];
            iVar8 = piVar3[4];
            param_1[1] = *piVar3;
            param_1[2] = iVar4;
            param_1[3] = iVar5;
            param_1[4] = iVar7;
            param_1[5] = iVar8;
            iVar4 = piVar3[6];
            iVar5 = piVar3[7];
            iVar7 = piVar3[8];
            iVar8 = piVar3[9];
            param_1[6] = piVar3[5];
            param_1[7] = iVar4;
            param_1[8] = iVar5;
            param_1[9] = iVar7;
            param_1[10] = iVar8;
            iVar4 = piVar3[0xb];
            iVar5 = piVar3[0xc];
            iVar7 = piVar3[0xd];
            iVar8 = piVar3[0xe];
            param_1[0xb] = piVar3[10];
            param_1[0xc] = iVar4;
            param_1[0xd] = iVar5;
            param_1[0xe] = iVar7;
            param_1[0xf] = iVar8;
            *param_1 = local_78;
            return;
          }
          FUN_016ced90(&local_78,param_2,iVar1,iVar7);
          if (local_78 != 0x2a) {
            piVar3 = (int *)((uint)&local_78 | 4);
            iVar4 = piVar3[1];
            iVar5 = piVar3[2];
            iVar7 = piVar3[3];
            iVar8 = piVar3[4];
            param_1[1] = *piVar3;
            param_1[2] = iVar4;
            param_1[3] = iVar5;
            param_1[4] = iVar7;
            param_1[5] = iVar8;
            iVar4 = piVar3[6];
            iVar5 = piVar3[7];
            iVar7 = piVar3[8];
            iVar8 = piVar3[9];
            param_1[6] = piVar3[5];
            param_1[7] = iVar4;
            param_1[8] = iVar5;
            param_1[9] = iVar7;
            param_1[10] = iVar8;
            iVar4 = piVar3[0xb];
            iVar5 = piVar3[0xc];
            iVar7 = piVar3[0xd];
            iVar8 = piVar3[0xe];
            param_1[0xb] = piVar3[10];
            param_1[0xc] = iVar4;
            param_1[0xd] = iVar5;
            param_1[0xe] = iVar7;
            param_1[0xf] = iVar8;
            goto LAB_016d2768;
          }
          iVar6 = iVar6 + -1;
          iVar8 = iVar5;
        } while (iVar6 != 0);
      }
      FUN_016ced90(&local_78,param_2,iVar5,iVar7);
      if (local_78 == 0x2a) {
        *param_1 = 0x2a;
        param_1[1] = iVar4;
        param_1[2] = iVar7;
        return;
      }
      piVar3 = (int *)((uint)&local_78 | 4);
      iVar4 = piVar3[1];
      iVar5 = piVar3[2];
      iVar7 = piVar3[3];
      iVar8 = piVar3[4];
      param_1[1] = *piVar3;
      param_1[2] = iVar4;
      param_1[3] = iVar5;
      param_1[4] = iVar7;
      param_1[5] = iVar8;
      iVar4 = piVar3[6];
      iVar5 = piVar3[7];
      iVar7 = piVar3[8];
      iVar8 = piVar3[9];
      param_1[6] = piVar3[5];
      param_1[7] = iVar4;
      param_1[8] = iVar5;
      param_1[9] = iVar7;
      param_1[10] = iVar8;
      iVar4 = piVar3[0xb];
      iVar5 = piVar3[0xc];
      iVar7 = piVar3[0xd];
      iVar8 = piVar3[0xe];
      param_1[0xb] = piVar3[10];
      param_1[0xc] = iVar4;
      param_1[0xd] = iVar5;
      param_1[0xe] = iVar7;
      param_1[0xf] = iVar8;
LAB_016d2768:
      *param_1 = local_78;
      return;
    }
    local_78 = 0x2a;
  }
  else {
    param_1[3] = local_6c;
    param_1[4] = iStack_68;
    param_1[5] = iStack_64;
    param_1[6] = local_60;
    param_1[7] = local_5c;
    param_1[8] = iStack_58;
    param_1[9] = iStack_54;
    param_1[10] = iStack_50;
    param_1[0xb] = local_4c;
    param_1[0xc] = iStack_48;
    param_1[0xd] = iStack_44;
    param_1[0xe] = iStack_40;
    param_1[0xf] = iStack_3c;
  }
  *param_1 = local_78;
  param_1[1] = local_74;
  param_1[2] = local_70;
  return;
}

