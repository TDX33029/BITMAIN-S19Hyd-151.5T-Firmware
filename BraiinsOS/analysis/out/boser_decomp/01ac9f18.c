// FUN_01ac9f18 @ 01ac9f18 size=192 calls_out=1 calls_in=4
// strings: 

undefined8 FUN_01ac9f18(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar1 = 0;
  uVar5 = 0x15;
  switch(param_2) {
  case 2:
    uVar3 = (uint)(ushort)*param_1;
    uVar4 = 0x7377;
    break;
  case 3:
    iVar2 = thunk_FUN_01bed842(param_1,&DAT_00532790,3);
    if (iVar2 == 0) {
      uVar1 = 1;
      uVar5 = 0x1bb;
      goto switchD_01ac9f3c_default;
    }
    iVar2 = thunk_FUN_01bed842(param_1,&DAT_00532793,3);
    goto LAB_01ac9fcc;
  case 4:
    uVar3 = *param_1;
    uVar4 = 0x70747468;
    break;
  case 5:
    iVar2 = thunk_FUN_01bed842(param_1,&DAT_0053278b,5);
    uVar5 = 0x15;
    if (iVar2 == 0) {
      uVar5 = 0x1bb;
    }
LAB_01ac9fcc:
    uVar1 = (uint)(iVar2 == 0);
  default:
    goto switchD_01ac9f3c_default;
  }
  uVar1 = (uint)(uVar3 == uVar4);
  if (uVar3 == uVar4) {
    uVar5 = 0x50;
  }
switchD_01ac9f3c_default:
  return CONCAT44(uVar5,uVar1);
}

