// FUN_0161ce50 @ 0161ce50 size=256 calls_out=4 calls_in=1
// strings: 

void FUN_0161ce50(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1;
  iVar1 = 3;
  if (0x8000000b < uVar2) {
    iVar1 = uVar2 + 0x7ffffff4;
  }
  switch(iVar1) {
  case 0:
    uVar3 = param_1[1];
    if (-0x7ffffff6 < (int)uVar3) {
switchD_0161ceb8_default:
      FUN_0134bd64(uVar3,param_1[2]);
      return;
    }
    break;
  default:
switchD_0161ce70_caseD_1:
    FUN_0134bd64(param_1[1],param_1[2]);
    return;
  case 2:
    uVar2 = (uint)(byte)param_1[1];
    if (0x5c < uVar2 - 3) {
      if (uVar2 < 0x60) {
        if (uVar2 < 2) {
          return;
        }
        if (uVar2 == 2) goto switchD_0161ceb8_caseD_1;
      }
      else {
        if (uVar2 - 0x61 < 2) {
          return;
        }
        if (uVar2 == 0x60) {
          FUN_0161d008(param_1 + 2);
          return;
        }
      }
switchD_0161ceb8_caseD_2:
      FUN_0134bd64(param_1[2],param_1[3]);
      return;
    }
    break;
  case 3:
    uVar3 = 4;
    if ((int)uVar2 < 0) {
      uVar3 = uVar2 ^ 0x80000000;
    }
    switch(uVar3) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      break;
    case 4:
      FUN_0134aee0(uVar2,param_1[1],4,0x10);
      return;
    default:
      goto switchD_0161ce70_caseD_1;
    case 6:
      FUN_0161cfb8(param_1 + 1);
      return;
    }
  case 4:
    uVar3 = param_1[1];
    uVar2 = 4;
    if ((int)uVar3 < 0) {
      uVar2 = uVar3 ^ 0x80000000;
    }
    switch(uVar2) {
    case 0:
    case 3:
      break;
    case 1:
switchD_0161ceb8_caseD_1:
      FUN_0161cfb8(param_1 + 2);
      return;
    case 2:
      goto switchD_0161ceb8_caseD_2;
    default:
      goto switchD_0161ceb8_default;
    }
  }
  return;
}

