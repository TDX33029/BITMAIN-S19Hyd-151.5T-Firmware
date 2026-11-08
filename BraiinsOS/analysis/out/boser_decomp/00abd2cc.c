// FUN_00abd2cc @ 00abd2cc size=252 calls_out=3 calls_in=2
// strings: 

void FUN_00abd2cc(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [11];
  undefined1 auStack_6d [13];
  int local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_2[4] == -0x7ffffff9) {
    local_98 = -0x80000000;
  }
  else {
    local_a8 = *param_2;
    uStack_a4 = param_2[1];
    uStack_a0 = param_2[2];
    uStack_9c = param_2[3];
    local_98 = param_2[4];
    uStack_94 = param_2[5];
    local_90 = param_2[6];
    uStack_8c = param_2[7];
    uStack_88 = param_2[8];
    uStack_84 = param_2[9];
    uStack_80 = param_2[10];
    uStack_7c = param_2[0xb];
    if (local_98 != -0x80000000) {
      FUN_006dec3c(&local_60);
      if (local_60 == 2) {
        uVar2 = (undefined1)local_5c;
      }
      else {
        local_40 = local_60;
        local_3c = local_5c;
        uStack_38 = uStack_58;
        local_34 = local_54;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        uStack_28 = uStack_48;
        FUN_01bed4e2(auStack_6d,&uStack_50,0xc);
        iVar1 = local_40;
        uVar2 = (undefined1)local_3c;
        FUN_01bed4e2(auStack_78,(uint)&local_60 | 5,0xb);
        if (iVar1 != 2) {
          FUN_01bed4e2((int)param_1 + 5,auStack_78,0x17);
          *(undefined1 *)(param_1 + 1) = uVar2;
          *param_1 = iVar1;
          return;
        }
      }
      *(undefined1 *)(param_1 + 1) = uVar2;
      *param_1 = 2;
      return;
    }
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 2;
  FUN_00abbec8(&local_a8);
  return;
}

