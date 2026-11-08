// FUN_01631468 @ 01631468 size=444 calls_out=20 calls_in=1
// strings: 

void FUN_01631468(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = 2;
  if (0x80000019 < uVar1) {
    iVar2 = uVar1 + 0x7fffffe6;
  }
  switch(iVar2) {
  case 1:
    uVar1 = param_1[1];
    if ((int)uVar1 < -0x7fffffe2) {
      return;
    }
    break;
  case 2:
    iVar2 = 3;
    if (0x80000000 < uVar1) {
      iVar2 = uVar1 + 0x7fffffff;
    }
    switch(iVar2) {
    case 0:
      FUN_0161a6c4(param_1 + 1);
      return;
    case 1:
    case 0xe:
    case 0x10:
      FUN_0161f174(param_1 + 1);
      return;
    case 2:
      FUN_0161a780(param_1 + 1);
      return;
    case 3:
      if (*param_1 == 0x80000000) {
        FUN_0134bd64(param_1[1],param_1[2]);
        return;
      }
      FUN_01630f48();
      return;
    case 4:
      FUN_0161a820(param_1 + 1);
      return;
    case 5:
      FUN_0161a850(param_1 + 1);
      return;
    case 6:
    case 7:
    case 0x12:
      FUN_0161a99c(param_1 + 1);
      return;
    case 8:
      uVar1 = param_1[2];
      FUN_01631940(uVar1,param_1[3]);
      FUN_0134aee0(param_1[1],uVar1,4,0x10);
      return;
    case 9:
      uVar1 = param_1[2];
      FUN_016318bc(uVar1,param_1[3]);
      FUN_0134aee0(param_1[1],uVar1,4,0x10);
      return;
    case 10:
    case 0xc:
      FUN_0161aad4(param_1 + 1);
      return;
    case 0xb:
    case 0xd:
      FUN_0161ab04(param_1 + 1);
      return;
    case 0xf:
      FUN_0161ac8c(param_1 + 1);
      return;
    case 0x11:
      FUN_016325a4(param_1 + 1);
      return;
    case 0x13:
      FUN_0161ab64(param_1 + 1);
      return;
    case 0x14:
      FUN_0161dec0(param_1 + 1);
      return;
    case 0x15:
      FUN_0161ab94(param_1 + 1);
      return;
    case 0x16:
      FUN_0161ab34(param_1 + 1);
      return;
    case 0x17:
      uVar1 = param_1[2];
      FUN_01631728(uVar1,param_1[3]);
      FUN_0134aee0(param_1[1],uVar1,4,0x1c);
      return;
    }
  default:
    FUN_0134bd64(param_1[1],param_1[2]);
    return;
  case 3:
    uVar1 = param_1[1];
    if ((int)uVar1 < -0x7ffffffd) {
      return;
    }
    break;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x016314b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_016314bc + *(int *)(&DAT_016314bc + param_1[1] * 4)))(param_1,param_1 + 2);
    return;
  }
  FUN_0134bd64(uVar1,param_1[2]);
  return;
}

