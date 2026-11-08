// FUN_00c4452c @ 00c4452c size=340 calls_out=6 calls_in=1
// strings: 

void FUN_00c4452c(uint *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  uVar2 = *param_1;
  iVar3 = 4;
  if ((uint)(uVar2 < 4) <= -param_1[1]) {
    iVar3 = uVar2 - 4;
  }
  switch(iVar3) {
  case 0:
    puVar4 = (undefined1 *)param_1[2];
    uVar2 = param_1[3];
    goto LAB_00c446bc;
  case 1:
  case 7:
  case 8:
  case 0x15:
  case 0x16:
  case 0x17:
    break;
  case 2:
    FUN_00a573e8(param_1 + 2);
    return;
  case 3:
    if (param_1[2] != 2 || param_1[3] != 0) {
      FUN_00b9a764();
      return;
    }
    break;
  case 4:
    if (uVar2 != 3 || param_1[1] != 0) {
      FUN_00a57438();
      return;
    }
    break;
  case 5:
  case 6:
    puVar4 = (undefined1 *)param_1[2];
    if ((int)puVar4 < -0x7ffffffe) {
      return;
    }
    goto LAB_00c44608;
  case 9:
  case 0xd:
    puVar4 = (undefined1 *)param_1[2];
    if (puVar4 == (undefined1 *)0x80000000) {
      return;
    }
    goto LAB_00c44608;
  case 10:
  case 0xb:
    if (param_1[2] == 0) {
      FUN_0132b958(param_1[3],param_1[4],8,0x68);
      return;
    }
    FUN_019bb7e0();
    return;
  case 0xc:
    puVar4 = (undefined1 *)param_1[3];
    uVar2 = param_1[4];
    if (param_1[2] == 0) {
      FUN_0132b958(puVar4,uVar2,8,0x50);
      return;
    }
    goto LAB_00c446bc;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
    if (param_1[2] != 2 || param_1[3] != 0) {
      FUN_019bb7e0(param_1[0x68],param_1[0x69]);
      if (param_1[0x6b] != 0x80000000) {
        FUN_019bb7e0(param_1[0x6b],param_1[0x6c]);
      }
      if (param_1[0x6e] != 0x80000000) {
        FUN_019bb7e0(param_1[0x6e],param_1[0x6f]);
      }
      if (param_1[0x71] != 0x80000000) {
        FUN_019bb7e0(param_1[0x71],param_1[0x72]);
      }
      if (param_1[0x74] != 0x80000000) {
        FUN_019bb7e0(param_1[0x74],param_1[0x75]);
      }
      FUN_00b9c078(param_1 + 10);
      return;
    }
    if ((int)param_1[4] < 0) {
      return;
    }
    FUN_019bb7e0(param_1[4],param_1[5]);
    return;
  case 0x12:
  case 0x13:
    puVar4 = (undefined1 *)param_1[2];
    if (puVar4 == &DAT_80000005) {
      return;
    }
    if ((int)puVar4 < 0) {
      return;
    }
LAB_00c44608:
    uVar2 = param_1[3];
LAB_00c446bc:
    FUN_019bb7e0(puVar4,uVar2);
    return;
  case 0x14:
    puVar4 = (undefined1 *)0x2;
    if (&DAT_3b9ac9ff < (undefined1 *)param_1[4]) {
      puVar4 = (undefined1 *)param_1[4] + -1000000000;
    }
    if (puVar4 < (undefined1 *)0x2) {
      return;
    }
    iVar3 = 0x10;
    if (puVar4 != (undefined1 *)0x2) {
      iVar3 = 0xc;
    }
    puVar1 = (undefined4 *)((int)param_1 + iVar3 + 8);
    puVar4 = (undefined1 *)*puVar1;
    uVar2 = puVar1[1];
    goto LAB_00c446bc;
  default:
    if (1 < param_1[2] - 1) {
      FUN_00963164(param_1 + 3);
      return;
    }
  }
  return;
}

