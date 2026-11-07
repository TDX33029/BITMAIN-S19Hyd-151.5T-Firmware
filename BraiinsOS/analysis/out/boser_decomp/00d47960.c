// FUN_00d47960 @ 00d47960 size=368 calls_out=6 calls_in=0
// strings: 

void FUN_00d47960(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  iVar4 = 4;
  if ((uint)(uVar1 < 4) <= -uVar2) {
    iVar4 = uVar1 - 4;
  }
  switch(iVar4) {
  case 0:
    puVar5 = (undefined1 *)param_1[2];
    uVar1 = param_1[3];
    goto LAB_00d47b0c;
  case 1:
  case 7:
  case 8:
  case 0x15:
  case 0x16:
  case 0x17:
    break;
  case 2:
    uVar1 = param_1[3];
    FUN_00b21dec(uVar1,param_1[4]);
    puVar5 = (undefined1 *)param_1[2];
    uVar6 = 0x28;
LAB_00d47ac8:
    FUN_0132b958(puVar5,uVar1,8,uVar6);
    return;
  case 3:
    if (param_1[2] != 2 || param_1[3] != 0) {
      FUN_00b9a764(param_1 + 2);
      return;
    }
    break;
  case 4:
    if (uVar1 != 3 || uVar2 != 0) {
      FUN_00a57438(param_1);
      return;
    }
    break;
  case 5:
  case 6:
    puVar5 = (undefined1 *)param_1[2];
    if ((int)puVar5 < -0x7ffffffe) {
      return;
    }
    goto LAB_00d47a40;
  case 9:
  case 0xd:
    puVar5 = (undefined1 *)param_1[2];
    if (puVar5 == (undefined1 *)0x80000000) {
      return;
    }
    goto LAB_00d47a40;
  case 10:
  case 0xb:
    if (param_1[2] == 0) {
      FUN_0132b958(param_1[3],param_1[4],8,0x68);
      return;
    }
    FUN_019bb7e0();
    return;
  case 0xc:
    puVar5 = (undefined1 *)param_1[3];
    uVar1 = param_1[4];
    if (param_1[2] == 0) {
      uVar6 = 0x50;
      goto LAB_00d47ac8;
    }
    goto LAB_00d47b0c;
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
    puVar5 = (undefined1 *)param_1[2];
    if (puVar5 == &DAT_80000005) {
      return;
    }
    if ((int)puVar5 < 0) {
      return;
    }
LAB_00d47a40:
    uVar1 = param_1[3];
LAB_00d47b0c:
    FUN_019bb7e0(puVar5,uVar1);
    return;
  case 0x14:
    puVar5 = (undefined1 *)0x2;
    if (&DAT_3b9ac9ff < (undefined1 *)param_1[4]) {
      puVar5 = (undefined1 *)param_1[4] + -1000000000;
    }
    if (puVar5 < (undefined1 *)0x2) {
      return;
    }
    iVar4 = 0x10;
    if (puVar5 != (undefined1 *)0x2) {
      iVar4 = 0xc;
    }
    puVar3 = (undefined4 *)((int)param_1 + iVar4 + 8);
    puVar5 = (undefined1 *)*puVar3;
    uVar1 = puVar3[1];
    goto LAB_00d47b0c;
  default:
    if (1 < param_1[2] - 1) {
      FUN_00963164(param_1 + 3,uVar2,iVar4,-(uVar2 + (uVar1 >= 4)));
      return;
    }
  }
  return;
}

