// FUN_00a965e4 @ 00a965e4 size=380 calls_out=7 calls_in=1
// strings: 

void FUN_00a965e4(uint *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  uVar1 = *param_1;
  if ((uVar1 & 0x1f) == 0x1d) {
    FUN_009200d0(param_1 + 2);
    return;
  }
  if (uVar1 == 0x1e) {
    return;
  }
  uVar5 = param_1[1];
  iVar3 = 4;
  if ((uint)(uVar1 < 4) <= -uVar5) {
    iVar3 = uVar1 - 4;
  }
  switch(iVar3) {
  case 0:
    FUN_019bb7e0(param_1[2],param_1[3]);
    return;
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
      FUN_00a93080();
      return;
    }
    break;
  case 4:
    if (uVar1 != 3 || uVar5 != 0) {
      if (*param_1 != 2 || param_1[1] != 0) {
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
      if (param_1[0xb3] != 0x80000000) {
        FUN_00a9303c();
      }
      FUN_00855fc4(param_1 + 0x30);
      if (param_1[0x46] != 2 || param_1[0x47] != 0) {
        FUN_00a93080();
      }
      FUN_00856028(param_1 + 0xaa);
      FUN_019bb7e0(param_1[0xad],param_1[0xae]);
      return;
    }
    break;
  case 5:
  case 6:
    puVar4 = (undefined1 *)param_1[2];
    if ((int)puVar4 < -0x7ffffffe) {
      return;
    }
    goto LAB_00a966d4;
  case 9:
  case 0xd:
    puVar4 = (undefined1 *)param_1[2];
    if (puVar4 == (undefined1 *)0x80000000) {
      return;
    }
    goto LAB_00a966d4;
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
    uVar1 = param_1[4];
    if (param_1[2] == 0) {
      FUN_0132b958(puVar4,uVar1,8,0x50);
      return;
    }
    goto LAB_00a966d8;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
    if (param_1[2] != 2 || param_1[3] != 0) {
      FUN_00a930fc();
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
LAB_00a966d4:
    uVar1 = param_1[3];
LAB_00a966d8:
    FUN_019bb7e0(puVar4,uVar1);
    return;
  case 0x14:
    puVar4 = (undefined1 *)0x2;
    if (&DAT_3b9ac9ff < (undefined1 *)param_1[4]) {
      puVar4 = (undefined1 *)param_1[4] + -1000000000;
    }
    if ((undefined1 *)0x1 < puVar4) {
      iVar3 = 0x10;
      if (puVar4 != (undefined1 *)0x2) {
        iVar3 = 0xc;
      }
      puVar2 = (undefined4 *)((int)param_1 + iVar3 + 8);
      FUN_019bb7e0(*puVar2,puVar2[1]);
      return;
    }
    break;
  default:
    if (1 < param_1[2] - 1) {
      FUN_00963164(param_1 + 3,param_1[2] - 1,-(uVar5 + (uVar1 >= 4)));
      return;
    }
  }
  return;
}

