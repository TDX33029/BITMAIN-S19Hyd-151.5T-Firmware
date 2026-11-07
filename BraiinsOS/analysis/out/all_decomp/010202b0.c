// FUN_010202b0 @ 010202b0 size=260 calls_out=1 calls_in=3
// strings: 

undefined4 FUN_010202b0(byte *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  uVar3 = (uint)*param_1;
  uVar1 = uVar3 - 6;
  if (uVar3 < 6) {
    uVar1 = 6;
  }
  bVar6 = (byte)(&switchD_010202e0::switchdataD_010202e4)[uVar1 & 0xff];
  uVar2 = 1;
  switch(uVar1 & 0xff) {
  case 0:
    bVar4 = 9;
    if (param_2 != 0) {
      bVar4 = 10;
    }
    bVar6 = 0;
    bVar5 = (byte)param_2 ^ 1;
    break;
  default:
    goto switchD_010202e0_caseD_2;
  case 3:
    if (param_1[1] != 0) {
      return 1;
    }
    bVar6 = param_1[2];
    bVar4 = 9;
    if (param_2 == 0) {
      bVar5 = 1;
    }
    else {
      bVar4 = 10;
      bVar5 = bVar6;
    }
    break;
  case 5:
    bVar6 = 0;
    if (param_1[1] != 0) {
      return 1;
    }
  case 1:
    bVar4 = 0xb;
    if (param_2 != 0) {
      bVar4 = 3;
    }
    bVar5 = 1;
  }
  if (((5 < uVar3 - 6) && (uVar3 < 3)) && (uVar3 != 0)) {
    if (uVar3 == 1) {
      (**(code **)(*(int *)(param_1 + 8) + 0x10))
                (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    }
    else if ((*(uint *)(param_1 + 4) & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 8));
    }
  }
  uVar2 = 0xc;
  param_1[2] = bVar6;
  param_1[1] = bVar5;
  *param_1 = bVar4;
switchD_010202e0_caseD_2:
  return uVar2;
}

