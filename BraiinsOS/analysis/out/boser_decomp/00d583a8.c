// FUN_00d583a8 @ 00d583a8 size=376 calls_out=1 calls_in=1
// strings: 

void FUN_00d583a8(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  uint uVar3;
  int iVar4;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar1 = *(code **)(param_3 + 0xc);
  do {
    (*pcVar1)(&local_68,param_2,param_4);
    iVar4 = 0;
    if ((local_68 & 7) == 5) {
      uVar3 = 4;
    }
    else {
      uVar3 = 5;
      if (local_68 != 6) {
        if (local_68 == 4) {
LAB_00d58500:
          param_1[1] = 0;
          param_1[2] = local_60;
          *param_1 = 1;
          param_1[3] = local_5c;
          return;
        }
        local_c8 = local_58;
        local_c4 = uStack_54;
        uStack_c0 = uStack_50;
        uStack_bc = uStack_4c;
        uStack_b8 = uStack_48;
        uStack_b4 = uStack_44;
        local_b0 = local_40;
        uStack_ac = uStack_3c;
        uStack_a8 = uStack_38;
        uStack_a4 = uStack_34;
        uStack_a0 = uStack_30;
        uStack_9c = uStack_2c;
        unaff_r9 = local_5c;
        unaff_r11 = local_60;
        uVar3 = local_68;
        iVar4 = local_64;
        if (local_68 == 6 && local_64 == 0) goto LAB_00d58500;
      }
    }
    if (uVar3 == 4 && iVar4 == 0) {
      uVar2 = 0;
LAB_00d584c8:
      *param_1 = uVar2;
      return;
    }
    if (uVar3 == 5 && iVar4 == 0) {
      uVar2 = 2;
      goto LAB_00d584c8;
    }
    if (uVar3 == 3 && iVar4 == 0) {
      *param_1 = 1;
      param_1[1] = unaff_r11;
      param_1[2] = unaff_r9;
      param_1[3] = local_c8;
      param_1[4] = local_c4;
      return;
    }
    local_58 = local_c8;
    uStack_54 = local_c4;
    uStack_50 = uStack_c0;
    uStack_4c = uStack_bc;
    uStack_48 = uStack_b8;
    uStack_44 = uStack_b4;
    local_40 = local_b0;
    uStack_3c = uStack_ac;
    uStack_38 = uStack_a8;
    uStack_34 = uStack_a4;
    uStack_30 = uStack_a0;
    uStack_2c = uStack_9c;
    local_68 = uVar3;
    local_64 = iVar4;
    local_60 = unaff_r11;
    local_5c = unaff_r9;
    FUN_01760ec4(&local_68);
  } while( true );
}

