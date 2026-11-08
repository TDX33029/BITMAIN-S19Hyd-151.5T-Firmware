// FUN_01a416cc @ 01a416cc size=484 calls_out=9 calls_in=3
// strings: failed to parse datetime

void FUN_01a416cc(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined4 **local_1c8;
  undefined *local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  int local_174;
  undefined4 local_160 [2];
  undefined1 auStack_158 [104];
  int local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 uStack_25;
  
  if (*(int *)(param_2 + 0x10) == -0x80000000) {
    if ((param_4 == 0x18) && (iVar1 = thunk_FUN_01bed842(param_3,&DAT_0052cf49,0x18), iVar1 == 0)) {
      FUN_01a444e4(&local_f0,param_5,param_6);
      if (local_f0 == 2) {
        local_1c8 = &local_80;
        local_78 = 0;
        local_80 = (undefined4 *)0x0;
        local_1bc = 0;
        local_7c = (undefined *)0x1;
        local_1c0 = 0x60000020;
        local_1c4 = &DAT_01d2c2a8;
        iVar1 = FUN_012fb940(&local_1c8,"failed to parse datetime",0x18);
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01d2c2c0,&DAT_01d30334);
        }
        goto LAB_01a417d8;
      }
      *(int *)(param_2 + 0x14) = local_f0;
      *(undefined4 *)(param_2 + 0x18) = local_ec;
      *(undefined4 *)(param_2 + 0x1c) = uStack_e8;
      *(undefined4 *)(param_2 + 0x20) = uStack_e4;
      *(undefined4 *)(param_2 + 0x24) = local_e0;
      *(undefined4 *)(param_2 + 0x28) = local_dc;
    }
  }
  else {
    FUN_01a5bfb4(&local_1c8,param_5,param_6);
    if (local_174 == 8) {
      local_80 = local_1c8;
      local_7c = local_1c4;
      local_78 = local_1c0;
LAB_01a417d8:
      *param_1 = local_80;
      param_1[1] = local_7c;
      param_1[2] = local_78;
      return;
    }
    FUN_01bed4e2(auStack_158,&local_1c8,0x68);
    local_160[0] = 1;
    FUN_01a60d04(&local_80,param_3,param_4);
    FUN_01a4b734(&local_f0,param_2,&local_80,local_160);
    if (local_f0 != 4) {
      FUN_01a41098(&local_f0);
    }
  }
  *param_1 = &DAT_80000005;
  return;
}

