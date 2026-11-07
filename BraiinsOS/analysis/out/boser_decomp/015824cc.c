// FUN_015824cc @ 015824cc size=320 calls_out=4 calls_in=1
// strings: 

void FUN_015824cc(int *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int local_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    if (param_3 == 2) {
      cVar1 = *(char *)(param_4 + 0x1c);
      bVar2 = cVar1 == '\x06';
      if (bVar2) {
        cVar1 = *(char *)(param_4 + 0x1d);
      }
      if (bVar2 && cVar1 == '\0') {
        local_30 = 1;
        local_28 = 0xfa;
        local_34 = 1;
        local_40 = 1;
        local_2c = 0;
        local_38 = 0;
        local_24 = 0;
        local_84 = 0;
        local_88 = 0;
        local_3c = 0;
        local_44 = 0;
        local_48 = 0;
        local_4c = 0;
        local_50 = 4;
        local_54 = 0;
        local_58 = 0;
        local_5c = 0;
        local_60 = 4;
        local_64 = 0;
        local_68 = 0;
        local_6c = 0;
        local_70 = 4;
        local_74 = 0;
        local_78 = 0;
        local_7c = 0;
        local_80 = 4;
        FUN_016dd884(&local_c8,&local_88,&DAT_0053340d,1);
        if (local_c8 == 0x22) {
          local_1c = iStack_c0;
          local_20 = iStack_c4;
          FUN_0157cac0(&local_20);
          *param_1 = 0x22;
        }
        else {
          *param_1 = local_c8;
          param_1[1] = iStack_c4;
          param_1[2] = iStack_c0;
          param_1[3] = iStack_bc;
          param_1[4] = iStack_b8;
          param_1[5] = local_b4;
          param_1[6] = iStack_b0;
          param_1[7] = iStack_ac;
          param_1[8] = iStack_a8;
          param_1[9] = iStack_a4;
          param_1[10] = local_a0;
          param_1[0xb] = iStack_9c;
          param_1[0xc] = iStack_98;
          param_1[0xd] = iStack_94;
          param_1[0xe] = iStack_90;
          param_1[0xf] = iStack_8c;
        }
        FUN_0157ca2c(&local_88);
        return;
      }
    }
    else if (param_3 == 6) {
      FUN_01582628(param_2,param_4);
    }
  }
  *param_1 = 0x22;
  return;
}

