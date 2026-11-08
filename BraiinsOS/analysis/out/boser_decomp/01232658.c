// FUN_01232658 @ 01232658 size=260 calls_out=1 calls_in=1
// strings: hash_chain | temp_control | hash_chain_global | fan_control

void FUN_01232658(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  switch(param_3) {
  case 10:
    iVar2 = thunk_FUN_01bed842(param_2,"hash_chain",10);
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_01232764;
    }
    break;
  case 0xb:
    iVar2 = thunk_FUN_01bed842(param_2,"fan_control",0xb);
    if (iVar2 == 0) {
      uVar1 = 3;
      goto LAB_01232764;
    }
    break;
  case 0xc:
    iVar2 = thunk_FUN_01bed842(param_2,"temp_control",0xc);
    if (iVar2 == 0) {
      uVar1 = 2;
      goto LAB_01232764;
    }
    break;
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    break;
  case 0x11:
    iVar2 = thunk_FUN_01bed842(param_2,"hash_chain_global",0x11);
    if (iVar2 == 0) {
      uVar1 = 0;
      goto LAB_01232764;
    }
    break;
  default:
    if ((param_3 == 5) && (iVar2 = thunk_FUN_01bed842(param_2,&DAT_0051d8de,5), iVar2 == 0)) {
      uVar1 = 4;
      goto LAB_01232764;
    }
  }
  uVar1 = 5;
LAB_01232764:
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = 2;
  return;
}

