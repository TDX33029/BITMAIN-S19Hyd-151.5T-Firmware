// FUN_01132ab8 @ 01132ab8 size=240 calls_out=3 calls_in=1
// strings: 

void FUN_01132ab8(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_24;
  
  local_58 = *param_5;
  uStack_54 = param_5[1];
  uStack_50 = param_5[2];
  uStack_4c = param_5[3];
  uStack_48 = param_5[4];
  uStack_44 = param_5[5];
  local_5c = 0;
  local_60 = 1;
  local_24 = 0;
  if ((param_3 & 1) != 0) {
    local_24 = param_4;
  }
  local_40 = 0x80000000;
  FUN_01134f40(&local_78,param_2 + 0x1a4,&local_60);
  if ((char)local_68 == '\x02') {
    *param_1 = 0x11;
    return;
  }
  local_60 = local_78;
  local_5c = uStack_74;
  local_58 = uStack_70;
  uStack_54 = uStack_6c;
  uStack_50 = local_68;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *puVar1 = local_60;
  puVar1[1] = local_5c;
  puVar1[2] = local_58;
  puVar1[3] = uStack_54;
  puVar1[4] = uStack_50;
  piVar2 = (int *)thunk_FUN_016d4a50(0xc);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined1 *)(piVar2 + 2) = 0x28;
  *(undefined1 *)(param_1 + 1) = 3;
  param_1[2] = piVar2;
  *param_1 = 0xe;
  *piVar2 = (int)puVar1;
  piVar2[1] = (int)&DAT_018880f8;
  return;
}

