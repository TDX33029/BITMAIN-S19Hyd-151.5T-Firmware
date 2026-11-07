// FUN_016c0898 @ 016c0898 size=440 calls_out=8 calls_in=1
// strings: 

void FUN_016c0898(int *param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  int local_68;
  int local_64;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int *local_48;
  int local_44;
  undefined4 local_40;
  int local_38;
  int iStack_34;
  int *piStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  local_6c = 1;
  local_70 = 0xfa;
  local_74 = 100;
  local_78 = 10;
  local_7c = 10;
  local_60 = 0;
  local_64 = 4;
  local_68 = 0;
  if (param_4 != 0) {
    param_4 = param_4 << 2;
    do {
      FUN_016e5160(&local_5c,&local_7c,*param_3);
      iVar2 = local_54;
      if (local_5c == -0x80000000) {
        FUN_016bd8cc(&local_68);
        local_68 = -0x80000000;
      }
      else {
        local_50 = local_58;
        local_4c = local_58 + local_54 * 0x10;
        local_54 = 0;
        local_40 = 0;
        local_44 = iVar2;
        local_48 = &local_5c;
        if (local_68 == -0x80000000) {
          FUN_016f1e44(&local_50);
        }
        else {
          local_38 = local_58;
          iStack_2c = iVar2;
          uStack_28 = 0;
          iStack_34 = local_4c;
          piStack_30 = &local_5c;
          FUN_016e435c(&local_68);
          if (local_68 != -0x80000000) {
            FUN_016e34a4(&local_68);
          }
        }
      }
      FUN_016bd8cc(&local_5c);
      param_4 = param_4 + -4;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  iVar2 = local_64;
  if (param_2 == 0) {
    if (local_68 != -0x80000000) {
      if (1 < local_60) {
        if (local_60 < 0x15) {
          iVar1 = local_60 * 0x10;
          iVar3 = 0x10;
          do {
            FUN_0169433c(iVar2,iVar2 + iVar3);
            iVar3 = iVar3 + 0x10;
          } while (iVar1 != iVar3);
        }
        else {
          FUN_016c8f58(local_64);
        }
      }
      FUN_016e34a4(&local_68);
    }
  }
  else {
    FUN_016e4a80(&local_68,0);
  }
  *param_1 = local_68;
  param_1[1] = local_64;
  param_1[2] = local_60;
  return;
}

