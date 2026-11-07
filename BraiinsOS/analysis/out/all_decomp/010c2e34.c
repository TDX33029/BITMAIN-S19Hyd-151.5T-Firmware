// FUN_010c2e34 @ 010c2e34 size=388 calls_out=6 calls_in=3
// strings: 

undefined4 * FUN_010c2e34(undefined4 *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 extraout_r1;
  undefined1 auStack_c8 [80];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined **local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  uint local_58;
  undefined1 auStack_54 [48];
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    if (*(char *)(param_1 + 0x14) != '\x01') {
      param_1 = (undefined4 *)0x0;
    }
    return param_1;
  }
  if (param_2 != (uint *)0x0) {
    uVar2 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    if ((uVar2 & 1) != 0) {
      FUN_016dd1aa(param_1,param_2 + 2,0x50);
      *(undefined1 *)(param_1 + 0x14) = 1;
      goto LAB_010c2f84;
    }
  }
  FUN_015f3b0c(&local_78,0);
  FUN_016dd606(auStack_54,0,0x21);
  local_58 = local_58 & 0xffffff00;
  local_5c = 0;
  local_60 = 0;
  local_64 = 1;
  local_68 = &PTR_LAB_01884b10;
  FUN_010bcee4(&local_78,extraout_r1,local_78,local_74,local_70);
  FUN_016dd1aa((uint)auStack_c8 | 4,&local_78,0x48);
  cVar1 = *(char *)(param_1 + 0x14);
  FUN_016dd1aa(&local_78,param_1,0x50);
  *param_1 = 0;
  FUN_016dd1aa(param_1 + 1,auStack_c8,0x4c);
  *(undefined1 *)(param_1 + 0x14) = 1;
  if (cVar1 == '\x01') {
    (**(code **)(local_60 + 0x10))(auStack_54,local_5c,local_58);
    return param_1;
  }
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018ae210);
  }
LAB_010c2f84:
  FUN_015e8e6c(param_1,FUN_010c2fec);
  return param_1;
}

