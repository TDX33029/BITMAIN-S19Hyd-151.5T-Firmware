// FUN_01429058 @ 01429058 size=372 calls_out=6 calls_in=3
// strings: internal error: entered unreachable code

undefined4 * FUN_01429058(undefined4 *param_1,uint *param_2)

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
    if (*(char *)(param_1 + 0x14) == '\x01') {
      return param_1;
    }
    return (undefined4 *)0x0;
  }
  if (param_2 != (uint *)0x0) {
    uVar2 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    if ((uVar2 & 1) != 0) {
      FUN_01bed4e2(param_1,param_2 + 2,0x50);
      *(undefined1 *)(param_1 + 0x14) = 1;
      goto LAB_014291a0;
    }
  }
  FUN_019ac130(&local_78,0);
  FUN_01bed93e(auStack_54,0,0x21);
  local_58 = local_58 & 0xffffff00;
  local_5c = 0;
  local_60 = 0;
  local_64 = 1;
  local_68 = &PTR_FUN_01cf46d0;
  FUN_014208b4(&local_78,extraout_r1,local_78,local_74,local_70);
  FUN_01bed4e2((uint)auStack_c8 | 4,&local_78,0x48);
  cVar1 = *(char *)(param_1 + 0x14);
  FUN_01bed4e2(&local_78,param_1,0x50);
  *param_1 = 0;
  FUN_01bed4e2(param_1 + 1,auStack_c8,0x4c);
  *(undefined1 *)(param_1 + 0x14) = 1;
  if (cVar1 == '\x01') {
    (**(code **)(local_60 + 0x10))(auStack_54,local_5c,local_58);
    return param_1;
  }
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2f25c);
  }
LAB_014291a0:
  FUN_019a2bcc(param_1,FUN_01429200);
  return param_1;
}

