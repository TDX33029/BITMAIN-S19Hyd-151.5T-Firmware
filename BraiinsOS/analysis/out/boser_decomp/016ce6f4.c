// FUN_016ce6f4 @ 016ce6f4 size=1692 calls_out=6 calls_in=2
// strings: 

void FUN_016ce6f4(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
  int local_30;
  undefined4 local_2c;
  int local_28;
  
  if (param_5 == 1) {
    FUN_016cfa44(&local_78,param_2,param_3);
    iVar3 = local_70;
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
LAB_016cea54:
      param_1[2] = local_70;
      return;
    }
    if (param_4 == 0) {
      FUN_016d241c(&local_78,param_2);
    }
    else {
      FUN_016cf0f8();
    }
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
    FUN_016ced90(&local_78,param_2,iVar3,local_74);
    if (local_78 == 0x2a) {
      FUN_016ced90(&local_78,param_2,local_74,iVar2);
      if (local_78 == 0x2a) {
        param_1[2] = local_74;
        *param_1 = 0x2a;
        param_1[1] = iVar2;
        return;
      }
LAB_016cec28:
      piVar1 = (int *)((uint)&local_78 | 4);
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
      goto LAB_016cec40;
    }
  }
  else {
    if (param_5 == 0) {
      if ((**(int **)(param_3 + 0x18) == 1) && ((*(int **)(param_3 + 0x18))[1] != 0)) {
        if (param_4 == 0) {
          FUN_016d241c(&local_78,param_2);
        }
        else {
          FUN_016cf0f8();
        }
        iVar2 = local_74;
        if (local_78 != 0x2a) {
LAB_016ce9d4:
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
LAB_016ce9f0:
          *param_1 = local_78;
          param_1[1] = local_74;
          return;
        }
        FUN_016cfa44(&local_78,param_2,param_3);
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
        FUN_016ced90(&local_78,param_2,iVar2);
        if (local_78 == 0x2a) {
          FUN_016ced90(&local_78,param_2,local_70,iVar2);
          if (local_78 == 0x2a) {
            local_78 = 0x2a;
            param_1[2] = iVar2;
            local_74 = iVar2;
            goto LAB_016ce9f0;
          }
LAB_016cec58:
          piVar1 = (int *)((uint)&local_78 | 4);
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
          goto LAB_016ced34;
        }
      }
      else {
        FUN_016cfa44(&local_78,param_2,param_3);
        iVar3 = local_70;
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
          local_74 = local_70;
          goto LAB_016ce8d0;
        }
        if (param_4 == 0) {
          FUN_016d241c(&local_78,param_2);
        }
        else {
          FUN_016cf0f8();
        }
        iVar4 = local_74;
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
        FUN_016ced90(&local_78,param_2,iVar3,local_74);
        if ((local_78 == 0x2a) && (FUN_016ced90(&local_78,param_2,iVar4,iVar2), local_78 == 0x2a)) {
          if (param_4 == 0) {
            FUN_016d241c(&local_78,param_2);
          }
          else {
            FUN_016cf0f8();
          }
          iVar3 = local_74;
          if (local_78 != 0x2a) goto LAB_016ce9d4;
          FUN_016ce364(&local_78,param_2);
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
          FUN_016ced90(&local_78,param_2,iVar3,iVar2);
          if ((local_78 == 0x2a) &&
             (FUN_016ced90(&local_78,param_2,iVar3,local_74), local_78 == 0x2a)) {
            FUN_016ced90(&local_78,param_2,iVar4,local_74);
            if (local_78 != 0x2a) goto LAB_016cec58;
            local_78 = 0x2a;
            goto LAB_016ce8a0;
          }
        }
      }
      piVar1 = (int *)((uint)&local_78 | 4);
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
LAB_016ced34:
      *param_1 = local_78;
      return;
    }
    local_28 = param_5 + -1;
    local_2c = 0;
    local_34 = param_2;
    local_30 = param_3;
    FUN_016d2770(&local_78,param_2,&local_34);
    iVar3 = local_70;
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
      iVar3 = local_74;
      local_74 = local_70;
LAB_016ce8a0:
      *param_1 = local_78;
      param_1[1] = iVar3;
LAB_016ce8d0:
      param_1[2] = local_74;
      return;
    }
    FUN_016cfa44(&local_78,param_2,param_3);
    iVar5 = local_70;
    iVar4 = local_74;
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
      goto LAB_016cea54;
    }
    if (param_4 == 0) {
      FUN_016d241c(&local_78,param_2);
    }
    else {
      FUN_016cf0f8();
    }
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
    FUN_016ced90(&local_78,param_2,iVar3,iVar4);
    if ((local_78 == 0x2a) && (FUN_016ced90(&local_78,param_2,iVar5,local_74), local_78 == 0x2a)) {
      FUN_016ced90(&local_78,param_2,local_74,iVar4);
      if (local_78 == 0x2a) {
        param_1[2] = local_74;
        *param_1 = 0x2a;
        param_1[1] = iVar2;
        return;
      }
      goto LAB_016cec28;
    }
  }
  piVar1 = (int *)((uint)&local_78 | 4);
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
LAB_016cec40:
  *param_1 = local_78;
  return;
}

