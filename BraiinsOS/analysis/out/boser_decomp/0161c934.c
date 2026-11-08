// FUN_0161c934 @ 0161c934 size=676 calls_out=20 calls_in=0
// strings: 

void FUN_0161c934(uint *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = *param_1;
  iVar1 = 2;
  if (0x80000019 < uVar6) {
    iVar1 = uVar6 + 0x7fffffe6;
  }
  switch(iVar1) {
  default:
    goto switchD_0161c95c_caseD_0;
  case 1:
    uVar6 = param_1[1];
    if ((int)uVar6 < -0x7fffffe2) {
      return;
    }
    goto LAB_0161ca38;
  case 2:
    iVar1 = 3;
    if (0x80000000 < uVar6) {
      iVar1 = uVar6 + 0x7fffffff;
    }
    break;
  case 3:
    uVar6 = param_1[1];
    if ((int)uVar6 < -0x7ffffffd) {
      return;
    }
LAB_0161ca38:
    uVar2 = param_1[2];
LAB_0161ca3c:
    FUN_0134bd64(uVar6,uVar2);
    return;
  case 4:
    FUN_0161cd7c(param_1 + 1);
    return;
  }
  switch(iVar1) {
  case 0:
    uVar2 = param_1[2];
    FUN_01631b0c(uVar2,param_1[3]);
    uVar6 = param_1[1];
    uVar4 = 8;
    goto LAB_0161cbd4;
  case 1:
    uVar2 = param_1[2];
    uVar7 = param_1[3];
    for (uVar6 = 0; uVar7 != uVar6; uVar6 = uVar6 + 1) {
      puVar3 = (undefined4 *)(uVar2 + uVar6 * 0x10);
      FUN_0134bd64(*puVar3,puVar3[1]);
    }
    break;
  case 2:
    uVar2 = param_1[2];
    FUN_01631abc(uVar2,param_1[3]);
    break;
  case 3:
    if (uVar6 != 0x80000000) {
      uVar2 = param_1[1];
      FUN_01631dd0(uVar2,param_1[2]);
      uVar4 = 8;
      uVar5 = 0xd0;
      goto LAB_0161cbd8;
    }
  default:
switchD_0161c95c_caseD_0:
    uVar6 = param_1[1];
    uVar2 = param_1[2];
    goto LAB_0161ca3c;
  case 4:
    uVar2 = param_1[2];
    FUN_01631a84(uVar2,param_1[3]);
    goto LAB_0161cbf0;
  case 5:
    uVar2 = param_1[2];
    FUN_016319fc(uVar2,param_1[3]);
    break;
  case 6:
  case 7:
  case 0x12:
    uVar2 = param_1[2];
    FUN_016319c4(uVar2,param_1[3]);
    break;
  case 8:
    uVar2 = param_1[2];
    FUN_01631940(uVar2,param_1[3]);
    break;
  case 9:
    uVar2 = param_1[2];
    FUN_016318bc(uVar2,param_1[3]);
    break;
  case 10:
  case 0xc:
    FUN_0161aad4(param_1 + 1);
    return;
  case 0xb:
  case 0xd:
    FUN_0161ab04(param_1 + 1);
    return;
  case 0xe:
    uVar2 = param_1[2];
    uVar7 = param_1[3];
    for (uVar6 = 0; uVar7 != uVar6; uVar6 = uVar6 + 1) {
      puVar3 = (undefined4 *)(uVar2 + uVar6 * 0x10);
      FUN_0134bd64(*puVar3,puVar3[1]);
    }
    break;
  case 0xf:
    FUN_0161ac8c(param_1 + 1);
    return;
  case 0x10:
    uVar2 = param_1[2];
    uVar7 = param_1[3];
    for (uVar6 = 0; uVar7 != uVar6; uVar6 = uVar6 + 1) {
      puVar3 = (undefined4 *)(uVar2 + uVar6 * 0x10);
      FUN_0134bd64(*puVar3,puVar3[1]);
    }
    break;
  case 0x11:
    uVar2 = param_1[2];
    FUN_01631320(uVar2,param_1[3]);
    break;
  case 0x13:
    uVar2 = param_1[2];
    FUN_01631814(uVar2,param_1[3]);
    uVar6 = param_1[1];
    uVar4 = 8;
    uVar5 = 0x18;
    goto LAB_0161cbd8;
  case 0x14:
    uVar2 = param_1[2];
    FUN_01631b94(uVar2,param_1[3]);
    break;
  case 0x15:
    uVar2 = param_1[2];
    FUN_016317dc(uVar2,param_1[3]);
    goto LAB_0161cbf0;
  case 0x16:
    uVar2 = param_1[2];
    FUN_016317a4(uVar2,param_1[3]);
LAB_0161cbf0:
    uVar6 = param_1[1];
    uVar4 = 4;
    uVar5 = 0x14;
    goto LAB_0161cbd8;
  case 0x17:
    uVar2 = param_1[2];
    FUN_01631728(uVar2,param_1[3]);
    uVar6 = param_1[1];
    uVar4 = 4;
    uVar5 = 0x1c;
    goto LAB_0161cbd8;
  }
  uVar6 = param_1[1];
  uVar4 = 4;
LAB_0161cbd4:
  uVar5 = 0x10;
LAB_0161cbd8:
  FUN_0134aee0(uVar6,uVar2,uVar4,uVar5);
  return;
}

