// FUN_00fe1bf4 @ 00fe1bf4 size=392 calls_out=5 calls_in=0
// strings: 

void FUN_00fe1bf4(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_138;
  int local_134;
  undefined1 auStack_130 [64];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  int local_e0;
  int local_dc;
  undefined1 auStack_d8 [64];
  int local_98;
  int local_94;
  int local_90;
  int local_88;
  int local_84;
  undefined1 auStack_80 [64];
  undefined4 local_40;
  undefined4 local_3c;
  
  if (*param_2 == 4 && param_2[1] == 0) {
    (**(code **)(param_2[3] + 0xc))(&local_88,param_2[2]);
    if (local_88 == 3 && local_84 == 0) {
      local_134 = 0;
      local_138 = 3;
    }
    else {
      FUN_01bed4e2(&local_138,&local_88,0x48);
      local_e8 = local_3c;
      local_ec = local_40;
      local_f0 = 1;
    }
  }
  else {
    local_88 = *param_2;
    local_84 = param_2[1];
    *param_2 = 3;
    param_2[1] = 0;
    if (local_88 == 3 && local_84 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c1d068);
    }
    FUN_01bed4e2(auStack_80,param_2 + 2,0x60);
    FUN_01a753d4(&local_138,&local_88);
    local_f0 = 0;
  }
  iVar2 = local_134;
  iVar1 = local_138;
  if (local_138 == 3 && local_134 == 0) {
    *param_1 = 3;
    param_1[1] = 0;
  }
  else {
    FUN_01bed4e2(auStack_d8,auStack_130,0x50);
    local_dc = iVar2;
    local_e0 = iVar1;
    if (local_98 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c15fcc);
    }
    piVar3 = (int *)thunk_FUN_01be5118(0xc);
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    *piVar3 = local_98;
    piVar3[1] = local_94;
    piVar3[2] = local_90;
    FUN_01bed4e2(param_1,&local_e0,0x48);
    param_1[0x12] = piVar3;
    param_1[0x13] = &DAT_01c15898;
  }
  return;
}

