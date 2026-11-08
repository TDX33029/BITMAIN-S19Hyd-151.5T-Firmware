// FUN_008516b4 @ 008516b4 size=644 calls_out=9 calls_in=0
// strings: 

void FUN_008516b4(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  
  uVar1 = *param_1;
  uVar3 = 4;
  if ((uint)(uVar1 < 4) <= -param_1[1]) {
    uVar3 = uVar1 - 4;
  }
  if (0x17 < uVar3) {
    if (param_1[2] - 1 < 2) {
      return;
    }
    switch((char)param_1[3]) {
    case '\0':
    case '\x02':
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
      return;
    case '\x01':
      uVar1 = param_1[5];
      puVar7 = (undefined4 *)(uVar1 + 4);
      break;
    default:
      FUN_019bb7e0(param_1[4],param_1[5],-(param_1[1] + (uint)(uVar1 >= 4)));
      return;
    }
    for (uVar3 = param_1[6]; uVar3 != 0; uVar3 = uVar3 - 1) {
      FUN_0134bd64(puVar7[-1],*puVar7);
      puVar7 = puVar7 + 3;
    }
    FUN_0134aee0(param_1[4],uVar1,4,0xc);
    return;
  }
  puVar6 = param_1 + 2;
  switch(uVar3) {
  case 0:
    puVar4 = (undefined1 *)param_1[2];
    uVar1 = param_1[3];
    break;
  default:
    return;
  case 2:
    uVar1 = param_1[3];
    FUN_00b21dec(uVar1,param_1[4]);
    puVar4 = (undefined1 *)param_1[2];
    uVar5 = 0x28;
LAB_008518a0:
    FUN_0132b958(puVar4,uVar1,8,uVar5);
    return;
  case 3:
    if (*puVar6 == 2 && param_1[3] == 0) {
      return;
    }
    FUN_00b9a764(puVar6);
    return;
  case 4:
    if ((uVar1 & 3) != 2) {
      if (uVar1 == 3) {
        return;
      }
      if (param_1[6] != 0x80000000) {
        FUN_019bb7e0(param_1[6],param_1[7]);
      }
      if (param_1[9] != 0x80000000) {
        FUN_019bb7e0(param_1[9],param_1[10]);
      }
      if (param_1[0xc] != 0x80000000) {
        FUN_019bb7e0(param_1[0xc],param_1[0xd]);
      }
    }
    if (param_1[0xb0] != 0x80000000) {
      FUN_0132b958(param_1[0xb0],param_1[0xb1],8,0x30);
    }
    FUN_00855f74(param_1 + 0xb3);
    FUN_00855fc4(param_1 + 0x30);
    if (param_1[0x46] != 2 || param_1[0x47] != 0) {
      FUN_00b9a764(param_1 + 0x46);
    }
    FUN_00856028(param_1 + 0xaa);
    puVar4 = (undefined1 *)param_1[0xad];
    uVar1 = param_1[0xae];
    break;
  case 5:
  case 6:
    puVar4 = (undefined1 *)param_1[2];
    if ((int)puVar4 < -0x7ffffffe) {
      return;
    }
    goto LAB_00851798;
  case 9:
  case 0xd:
    puVar4 = (undefined1 *)param_1[2];
    if (puVar4 == (undefined1 *)0x80000000) {
      return;
    }
    goto LAB_00851798;
  case 10:
  case 0xb:
    if (*puVar6 == 0) {
      FUN_0132b958(param_1[3],param_1[4],8,0x68);
      return;
    }
    FUN_019bb7e0();
    return;
  case 0xc:
    puVar4 = (undefined1 *)param_1[3];
    uVar1 = param_1[4];
    if (param_1[2] == 0) {
      uVar5 = 0x50;
      goto LAB_008518a0;
    }
    break;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
    if (*puVar6 != 2 || param_1[3] != 0) {
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
LAB_00851798:
    uVar1 = param_1[3];
    break;
  case 0x14:
    puVar4 = (undefined1 *)0x2;
    if (&DAT_3b9ac9ff < (undefined1 *)param_1[4]) {
      puVar4 = (undefined1 *)param_1[4] + -1000000000;
    }
    if (puVar4 < (undefined1 *)0x2) {
      return;
    }
    iVar2 = 0x10;
    if (puVar4 != (undefined1 *)0x2) {
      iVar2 = 0xc;
    }
    puVar4 = *(undefined1 **)((int)puVar6 + iVar2);
    uVar1 = ((undefined4 *)((int)puVar6 + iVar2))[1];
  }
  FUN_019bb7e0(puVar4,uVar1);
  return;
}

