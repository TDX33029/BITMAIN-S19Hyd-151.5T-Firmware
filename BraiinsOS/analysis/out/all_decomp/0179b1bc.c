// FUN_0179b1bc @ 0179b1bc size=564 calls_out=0 calls_in=2
// strings: 

void FUN_0179b1bc(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_2 < 0x193) {
    if (399 < param_2) {
      uVar2 = 0;
      uVar3 = 0;
      uVar4 = 0;
      goto LAB_0179b214;
    }
    if (param_2 == 10) {
switchD_0179b200_caseD_c8:
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 1;
      return;
    }
    switch(param_2) {
    case 100:
      uVar3 = 0xfffe0000;
      uVar2 = 0;
      uVar4 = 0x16;
      break;
    case 0x65:
      uVar2 = 0;
      uVar3 = 10;
      uVar4 = 0x1e;
      break;
    case 0x66:
    case 0xa1:
      uVar2 = 0;
      uVar3 = 6;
      uVar4 = 0x1e;
      break;
    case 0x67:
      uVar2 = 0;
      uVar3 = 6;
      uVar4 = 0x1d;
      break;
    case 0x68:
      uVar2 = 0;
      uVar3 = 1;
      uVar4 = 0x1d;
      break;
    case 0x69:
      uVar2 = 0;
      uVar3 = 3;
      uVar4 = 7;
      break;
    case 0x6a:
      uVar2 = 0;
      uVar4 = 0x20000;
      uVar3 = 0;
      break;
    case 0x6b:
      uVar2 = 0;
      uVar3 = 1;
      uVar4 = 9;
      break;
    default:
      goto switchD_0179b200_caseD_6c;
    case 0x82:
      uVar2 = 0;
      uVar4 = 0x20000;
      uVar3 = 0x53c;
      break;
    case 0xa0:
switchD_0179b200_caseD_a0:
      uVar2 = 0;
      uVar4 = 2;
      uVar3 = 0;
      break;
    case 0xa2:
      uVar2 = 0;
      uVar3 = 4;
      uVar4 = 0x1000;
      break;
    case 0xa3:
      uVar2 = 0;
      uVar3 = 1;
      uVar4 = 8;
      break;
    case 0xa4:
      uVar2 = 0;
      uVar4 = 0x18;
      uVar3 = 0;
      break;
    case 200:
    case 0xc9:
    case 0xca:
      goto switchD_0179b200_caseD_c8;
    }
    goto LAB_0179b214;
  }
  if (param_2 < 0x3f9) {
    if (0x3ec < param_2) {
      uVar4 = 1;
      uVar1 = 1 << (param_2 - 0x3ed & 0xff);
      if ((uVar1 & 0x29f) == 0) {
        if ((uVar1 & 0x960) == 0) {
          *param_1 = 0;
          param_1[1] = 0x400;
          param_1[2] = 0x20000;
          return;
        }
        uVar4 = 2;
        uVar2 = 0;
        uVar3 = 0;
      }
      else {
        uVar2 = 0;
        uVar3 = 0;
      }
      goto LAB_0179b214;
    }
    if (param_2 == 500) goto switchD_0179b200_caseD_c8;
    switch(param_2) {
    case 1000:
      goto switchD_0179b200_caseD_c8;
    case 0x3e9:
      uVar2 = 0;
      uVar4 = 3;
      uVar3 = 0;
      break;
    case 0x3ea:
      goto switchD_0179b200_caseD_a0;
    default:
      goto switchD_0179b200_caseD_6c;
    case 0x3ec:
      uVar2 = 0;
      uVar4 = 0x7fffffff;
      uVar3 = 0;
    }
  }
  else {
switchD_0179b200_caseD_6c:
    uVar3 = 0;
    uVar2 = 0xffffffd8;
    uVar4 = 0;
  }
LAB_0179b214:
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  return;
}

