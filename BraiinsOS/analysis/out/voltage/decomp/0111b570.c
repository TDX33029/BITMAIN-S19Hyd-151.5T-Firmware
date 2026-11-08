// function @ 0111b570  size=592  volt_strings=1
// strings: mining.submit | mining.notify | mining.extranonce.subscribe | mining.set_version_mask | mining.set_difficulty | mining.set_extranonce | mining.ping

void FUN_0111b570(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(param_3) {
  case 0xb:
    iVar1 = thunk_FUN_016dd50a(param_2,"mining.ping",0xb);
    if (iVar1 == 0) {
      param_1[1] = 10;
      *param_1 = 0;
      return;
    }
    break;
  case 0xd:
    iVar1 = thunk_FUN_016dd50a(param_2,"mining.submit",0xd);
    if (iVar1 == 0) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    iVar1 = thunk_FUN_016dd50a(param_2,"mining.notify",0xd);
    if (iVar1 == 0) {
      param_1[1] = 7;
      *param_1 = 0;
      return;
    }
    break;
  case 0x10:
    iVar1 = thunk_FUN_016dd50a(param_2,&DAT_00563d80,0x10);
    if (iVar1 == 0) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    iVar1 = thunk_FUN_016dd50a(param_2,&DAT_00564b10,0x10);
    if (iVar1 == 0) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    iVar1 = thunk_FUN_016dd50a(param_2,&DAT_00564990,0x10);
    if (iVar1 == 0) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    iVar1 = thunk_FUN_016dd50a(param_2,&DAT_005656d0,0x10);
    if (iVar1 == 0) {
      param_1[1] = 9;
      *param_1 = 0;
      return;
    }
    break;
  case 0x15:
    iVar1 = thunk_FUN_016dd50a(param_2,"mining.set_difficulty",0x15);
    if (iVar1 == 0) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    iVar1 = thunk_FUN_016dd50a(param_2,"mining.set_extranonce",0x15);
    if (iVar1 == 0) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 0x17:
    iVar1 = thunk_FUN_016dd50a(param_2,"mining.set_version_mask",0x17);
    if (iVar1 == 0) {
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
    break;
  case 0x1b:
    iVar1 = thunk_FUN_016dd50a(param_2,"mining.extranonce.subscribe",0x1b);
    if (iVar1 == 0) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  uVar2 = FUN_01125770(param_2,param_3);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *param_1 = 1;
  return;
}

