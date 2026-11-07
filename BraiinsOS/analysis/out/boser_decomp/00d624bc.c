// FUN_00d624bc @ 00d624bc size=816 calls_out=9 calls_in=1
// strings: application/grpc

/* WARNING: Removing unreachable block (ram,0x00d62704) */

void FUN_00d624bc(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_e98 [104];
  undefined1 auStack_e30 [72];
  undefined **local_de8;
  undefined4 uStack_de4;
  undefined4 uStack_de0;
  undefined4 uStack_ddc;
  undefined4 uStack_dd8;
  undefined4 local_dd4;
  undefined4 uStack_dd0;
  undefined4 uStack_dcc;
  undefined4 uStack_dc8;
  undefined4 uStack_dc4;
  undefined4 local_dc0;
  undefined4 uStack_dbc;
  undefined4 uStack_db8;
  undefined4 uStack_db4;
  undefined4 uStack_db0;
  undefined4 uStack_dac;
  int local_ae8;
  int iStack_ae4;
  int iStack_ae0;
  int iStack_adc;
  int local_ad8;
  int local_ad4;
  int iStack_ad0;
  int iStack_acc;
  int iStack_ac8;
  int iStack_ac4;
  int local_ac0;
  int iStack_abc;
  int iStack_ab8;
  int iStack_ab4;
  int iStack_ab0;
  int iStack_aac;
  undefined1 auStack_aa0 [768];
  undefined1 auStack_7a0 [96];
  undefined1 auStack_740 [768];
  int local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined **local_430;
  char *local_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  int local_3f0;
  undefined2 local_3ec;
  undefined1 local_3ea;
  undefined1 auStack_3e8 [800];
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined2 uStack_30;
  
  if (*param_2 == 3 && param_2[1] == 0) {
    FUN_01bed4e2(auStack_e98,param_2 + 2,0x68);
    FUN_010a5cf0(param_1,auStack_e98);
  }
  else {
    FUN_01bed4e2(auStack_3e8,param_2 + 0x10,0x300);
    local_3ea = 3;
    local_3ec = 200;
    local_42c = (char *)0x0;
    local_430 = (undefined **)0x0;
    local_3f0 = 0;
    local_3f8 = (uint)local_3f8._2_2_ << 0x10;
    local_3fc = 0;
    local_404 = 0;
    local_408 = 0;
    local_410 = 0;
    local_414 = 0;
    local_418 = 2;
    local_400 = 4;
    local_40c = 4;
    local_ae8 = *param_2;
    iStack_ae4 = param_2[1];
    iStack_ae0 = param_2[2];
    iStack_adc = param_2[3];
    local_ad8 = param_2[4];
    local_ad4 = param_2[5];
    iStack_ad0 = param_2[6];
    iStack_acc = param_2[7];
    iStack_ac8 = param_2[8];
    iStack_ac4 = param_2[9];
    local_ac0 = param_2[10];
    iStack_abc = param_2[0xb];
    iStack_ab8 = param_2[0xc];
    iStack_ab4 = param_2[0xd];
    iStack_ab0 = param_2[0xe];
    iStack_aac = param_2[0xf];
    FUN_01a68e2c(&local_de8,&local_ae8);
    FUN_0142e6dc(&local_430);
    local_430 = local_de8;
    local_42c = (char *)uStack_de4;
    uStack_428 = uStack_de0;
    uStack_424 = uStack_ddc;
    uStack_420 = uStack_dd8;
    local_41c = local_dd4;
    local_418 = uStack_dd0;
    local_414 = uStack_dcc;
    local_410 = uStack_dc8;
    local_40c = uStack_dc4;
    local_408 = local_dc0;
    local_404 = uStack_dbc;
    local_400 = uStack_db8;
    local_3fc = uStack_db4;
    local_3f8 = uStack_db0;
    uStack_3f4 = uStack_dac;
    iVar1 = param_2[0xd0];
    FUN_0178e884(0);
    local_3f0 = iVar1;
    FUN_01bed4e2(&local_ae8,&local_430,0x348);
    FUN_01bed4e2(auStack_3e8,auStack_aa0,0x300);
    FUN_01bed4e2(&local_430,&local_ae8,0x48);
    FUN_01bed4e2(auStack_e30,&local_430,0x48);
    FUN_01bed4e2(&local_de8,auStack_3e8,0x300);
    local_440 = 0;
    local_43c = 0x1d;
    local_438 = 0;
    local_434 = 0;
    local_430 = &PTR_FUN_01c15c88;
    local_42c = "application/grpc";
    uStack_428 = 0x10;
    uStack_424 = 0;
    uStack_420 = 0;
    FUN_00714c58(&local_ae8,auStack_e30,&local_440,&local_430);
    if ((char)local_ad8 != '\x02') {
      (**(code **)(local_ae8 + 0x10))(&iStack_adc,iStack_ae4,iStack_ae0);
    }
    FUN_01bed4e2(&local_ae8,&local_de8,0x300);
    iVar1 = thunk_FUN_01be5118(0x2000);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
    local_438 = 0x2000;
    local_434 = 0x11;
    local_43c = 0;
    local_440 = iVar1;
    FUN_01bed4e2(auStack_740,&local_de8,0x300);
    local_c0 = local_440;
    uStack_bc = local_43c;
    uStack_b8 = local_438;
    uStack_b4 = local_434;
    local_a4 = 1;
    local_a8 = 0;
    local_ac = 0;
    local_b0 = 1;
    FUN_01bed4e2(&uStack_428,auStack_7a0,0x360);
    local_94 = 0;
    uStack_30 = 1;
    local_98 = 3;
    local_430 = (undefined **)0x3;
    local_9c = 0x8000;
    local_42c = (char *)0x0;
    local_a0 = 0x2000;
    local_c8 = param_3;
    local_c4 = param_4;
    iVar1 = thunk_FUN_01be5118(0x408);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x408);
    }
    FUN_01bed4e2(iVar1,&local_430,0x408);
    FUN_01bed4e2(param_1,auStack_e30,0x48);
    *(int *)(param_1 + 0x48) = iVar1;
    *(undefined **)(param_1 + 0x4c) = &DAT_01c15520;
  }
  return;
}

