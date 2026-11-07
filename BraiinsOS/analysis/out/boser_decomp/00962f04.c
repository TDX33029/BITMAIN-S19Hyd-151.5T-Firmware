// FUN_00962f04 @ 00962f04 size=460 calls_out=10 calls_in=1
// strings: 

void FUN_00962f04(uint *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  
  uVar1 = *param_1;
  uVar4 = param_1[1];
  if (uVar1 == 0x1d && uVar4 == 0) {
switchD_00962f4c_caseD_0:
    puVar2 = (undefined1 *)param_1[2];
    uVar1 = param_1[3];
    goto LAB_00962f20;
  }
  uVar5 = 4;
  if ((uint)(uVar1 < 4) <= -uVar4) {
    uVar5 = uVar1 - 4;
  }
  if (0x17 < uVar5) {
    if (param_1[2] - 1 < 2) {
      return;
    }
    FUN_00963164(param_1 + 3,uVar4,uVar5,-(uVar4 + (uVar1 >= 4)));
    return;
  }
  puVar7 = param_1 + 2;
  switch(uVar5) {
  case 0:
    goto switchD_00962f4c_caseD_0;
  default:
    return;
  case 2:
    uVar1 = param_1[3];
    FUN_00b21dec(uVar1,param_1[4]);
    puVar2 = (undefined1 *)param_1[2];
    uVar6 = 0x28;
LAB_009630d0:
    FUN_0132b958(puVar2,uVar1,8,uVar6);
    return;
  case 3:
    if (*puVar7 == 2 && param_1[3] == 0) {
      return;
    }
    FUN_00b9a764(puVar7);
    return;
  case 4:
    if (uVar1 == 3 && uVar4 == 0) {
      return;
    }
    FUN_00e84018(param_1);
    if (param_1[0xb0] != 0x80000000) {
      FUN_0132b958(param_1[0xb0],param_1[0xb1],8,0x30);
    }
    FUN_00855f74(param_1 + 0xb3);
    FUN_00855fc4(param_1 + 0x30);
    if (param_1[0x46] != 2 || param_1[0x47] != 0) {
      FUN_00b9a764(param_1 + 0x46);
    }
    FUN_00856028(param_1 + 0xaa);
    puVar2 = (undefined1 *)param_1[0xad];
    uVar1 = param_1[0xae];
    goto LAB_00962f20;
  case 5:
  case 6:
    puVar2 = (undefined1 *)param_1[2];
    if ((int)puVar2 < -0x7ffffffe) {
      return;
    }
    break;
  case 9:
  case 0xd:
    puVar2 = (undefined1 *)param_1[2];
    if (puVar2 == (undefined1 *)0x80000000) {
      return;
    }
    break;
  case 10:
  case 0xb:
    if (*puVar7 == 0) {
      FUN_0132b958(param_1[3],param_1[4],8,0x68);
      return;
    }
    FUN_019bb7e0();
    return;
  case 0xc:
    puVar2 = (undefined1 *)param_1[3];
    uVar1 = param_1[4];
    if (param_1[2] == 0) {
      uVar6 = 0x50;
      goto LAB_009630d0;
    }
    goto LAB_00962f20;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
    FUN_00dfb9c4(puVar7);
    return;
  case 0x12:
  case 0x13:
    puVar2 = (undefined1 *)param_1[2];
    if (puVar2 == &DAT_80000005) {
      return;
    }
    if ((int)puVar2 < 0) {
      return;
    }
    break;
  case 0x14:
    puVar2 = (undefined1 *)0x2;
    if (&DAT_3b9ac9ff < (undefined1 *)param_1[4]) {
      puVar2 = (undefined1 *)param_1[4] + -1000000000;
    }
    if (puVar2 < (undefined1 *)0x2) {
      return;
    }
    iVar3 = 0x10;
    if (puVar2 != (undefined1 *)0x2) {
      iVar3 = 0xc;
    }
    puVar2 = *(undefined1 **)((int)puVar7 + iVar3);
    uVar1 = ((undefined4 *)((int)puVar7 + iVar3))[1];
    goto LAB_00962f20;
  }
  uVar1 = param_1[3];
LAB_00962f20:
  FUN_019bb7e0(puVar2,uVar1);
  return;
}

