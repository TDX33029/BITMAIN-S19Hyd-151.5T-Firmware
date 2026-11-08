// FUN_00dabfa4 @ 00dabfa4 size=640 calls_out=13 calls_in=0
// strings: status | Stream error

void FUN_00dabfa4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_118;
  int local_114;
  undefined1 auStack_110 [96];
  int local_b0;
  int local_ac;
  undefined4 local_a8 [25];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int *local_24;
  uint local_20;
  int **local_1c;
  
  (**(code **)(param_2[1] + 0xc))(&local_b0,*param_2);
  if (local_b0 == 5 && local_ac == 0) {
    uVar1 = 6;
LAB_00dac010:
    *param_1 = uVar1;
    param_1[1] = 0;
    return;
  }
  FUN_01bed4e2(auStack_110,local_a8,0x60);
  if (local_b0 == 4 && local_ac == 0) {
    uVar1 = 5;
    goto LAB_00dac010;
  }
  FUN_01bed4e2(local_a8,auStack_110,0x60);
  if (local_b0 != 3 || local_ac != 0) {
    FUN_01af9864(&local_38,"Stream error",0xc);
    iVar3 = local_34;
    iVar2 = local_38;
    FUN_005f6588(&local_b0);
    goto LAB_00dac1bc;
  }
  local_34 = thunk_FUN_01be5118(0x80);
  if (local_34 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x80);
  }
  local_24 = &local_38;
  local_30 = 0;
  local_38 = 0x80;
  FUN_01ac6cbc(local_24,"{",1);
  local_1c = &local_24;
  local_20 = 0x100;
  iVar2 = FUN_014ad148(&local_20,"status",6,local_a8[0]);
  if (iVar2 == 0) {
    if (((local_20 & 0xff00) != 0) && ((local_20 & 1) == 0)) {
      FUN_01ac6cbc(*local_1c,"}",1);
    }
    iVar2 = local_34;
    if (local_38 == -0x80000000) goto LAB_00dac128;
    local_3c = local_30;
    local_40 = local_34;
    local_44 = local_38;
    iVar2 = local_38;
    if (local_38 == local_30) goto LAB_00dac144;
  }
  else {
    FUN_019bb7e0(local_38,local_34);
LAB_00dac128:
    local_40 = 1;
    local_3c = 0;
    local_44 = 0;
    FUN_012c696c(iVar2);
    iVar2 = 0;
LAB_00dac144:
    FUN_0132b898(&local_44,iVar2,1,1,1);
  }
  *(undefined1 *)(local_40 + local_3c) = 10;
  local_3c = local_3c + 1;
  FUN_01283524(&local_38,&local_44);
  iVar2 = local_34;
  iVar3 = local_30;
  if (local_38 != 0) {
    param_1[1] = 0;
    *param_1 = 3;
    param_1[2] = local_38;
    param_1[3] = local_34;
    param_1[4] = local_30;
    param_1[5] = local_2c;
    return;
  }
LAB_00dac1bc:
  local_118 = iVar2;
  local_114 = iVar3;
  uVar1 = FUN_014333d0(&local_118);
  uVar1 = FUN_00715ebc(uVar1,&DAT_01cf5e1c);
  param_1[1] = 0;
  *param_1 = 4;
  param_1[2] = uVar1;
  param_1[3] = &DAT_01c07620;
  return;
}

