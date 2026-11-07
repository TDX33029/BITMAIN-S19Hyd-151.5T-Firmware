// FUN_0179bb68 @ 0179bb68 size=1960 calls_out=3 calls_in=1
// strings: 

ushort * FUN_0179bb68(int param_1,uint param_2,ushort *param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *extraout_r1;
  ushort *extraout_r1_00;
  undefined8 uVar3;
  ushort *local_20;
  ushort *local_1c;
  ushort *local_18;
  uint local_14;
  
  if (*(int *)(param_1 + 0x974) == 0) {
    if (param_2 == 400) {
      if ((param_3 != (ushort *)0x0) && (*(int *)(param_1 + 0x2d8) != 0)) {
        return (ushort *)0xffffffd8;
      }
    }
    else if (param_2 < 0x191) {
      if (0xca < param_2) {
        return (ushort *)0xffffffd8;
      }
      if (param_2 < 200) {
        if (0xa4 < param_2) {
          return (ushort *)0xffffffd8;
        }
        if ((param_2 < 0xa0) && (param_2 != 0x82)) {
          if (0x82 < param_2) {
            return (ushort *)0xffffffd8;
          }
          if ((param_2 != 10) && (7 < param_2 - 100)) {
            return (ushort *)0xffffffd8;
          }
        }
      }
    }
    else if ((0x3f8 < param_2) ||
            ((param_2 < 0x3ec &&
             ((param_2 == 0x3eb || (((param_2 < 1000 && (0x192 < param_2)) && (param_2 != 500)))))))
            ) {
      return (ushort *)0xffffffd8;
    }
  }
  else {
    if ((param_2 != 100) && (5 < param_2 - 0x66)) {
      return (ushort *)0xffffffc4;
    }
    *(undefined4 *)(param_1 + 4) = 1;
  }
  local_14 = DAT_018ddaf8;
  puVar2 = (ushort *)0x0;
  puVar1 = param_3;
  if (param_2 < 0x193) {
    if (399 < param_2) goto LAB_0179b5bc;
    if (param_2 == 10) {
      uVar3 = FUN_0179b400(10,param_3);
      puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
      if ((int)uVar3 != 0) {
        *(ushort **)(param_1 + 0xc) = param_3;
        goto LAB_0179b54c;
      }
      goto LAB_0179bb1c;
    }
    if (0x66 < param_2 - 100) goto switchD_0179b540_caseD_6c;
    puVar2 = &switchD_0179b540::switchdataD_00450412;
    switch(param_2) {
    case 100:
      FUN_0179b1bc(&local_20,100);
      puVar1 = local_20;
      puVar2 = extraout_r1_00;
      if ((ushort *)0xffffff88 < local_20) break;
      if ((int)local_1c <= (int)param_3) {
        local_1c = param_3;
      }
      if ((int)local_18 <= (int)local_1c) {
        local_1c = local_18;
      }
      puVar2 = local_18;
      if (local_1c == (ushort *)0x0) {
        *(undefined4 *)(param_1 + 0x38) = 3;
        puVar1 = (ushort *)0x3;
        break;
      }
      *(ushort **)(param_1 + 0x38) = local_1c;
      if (-1 < (int)local_1c) {
        puVar1 = local_1c;
        break;
      }
      goto LAB_0179b5c4;
    case 0x65:
      if (param_3 != (ushort *)0x0) {
        uVar3 = FUN_0179b400(0x65,param_3);
        puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
        if ((int)uVar3 == 0) goto LAB_0179bb1c;
      }
      *(ushort **)(param_1 + 0x10) = param_3;
      break;
    case 0x66:
      if (param_3 != (ushort *)0x0) {
        uVar3 = FUN_0179b400(0x66,param_3);
        puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
        if ((int)uVar3 == 0) goto LAB_0179bb1c;
      }
      *(ushort **)(param_1 + 0x18) = param_3;
      break;
    case 0x67:
      if (param_3 != (ushort *)0x0) {
        uVar3 = FUN_0179b400(0x67,param_3);
        puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
        if ((int)uVar3 == 0) goto LAB_0179bb1c;
      }
      *(ushort **)(param_1 + 0x14) = param_3;
      break;
    case 0x68:
      if (param_3 != (ushort *)0x0) {
        uVar3 = FUN_0179b400(0x68,param_3);
        puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
        if ((int)uVar3 == 0) goto LAB_0179bb1c;
      }
      *(ushort **)(param_1 + 0x1c) = param_3;
      break;
    case 0x69:
      if (param_3 != (ushort *)0x0) {
        uVar3 = FUN_0179b400(0x69,param_3);
        puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
        if ((int)uVar3 == 0) goto LAB_0179bb1c;
      }
      *(ushort **)(param_1 + 0x20) = param_3;
      break;
    case 0x6a:
      uVar3 = FUN_0179b400(0x6a,param_3);
      puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
      if ((int)uVar3 != 0) {
        *(ushort **)(param_1 + 0x24) = param_3;
        break;
      }
      goto LAB_0179bb1c;
    case 0x6b:
      if (param_3 != (ushort *)0x0) {
        uVar3 = FUN_0179b400(0x6b,param_3);
        puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
        if ((int)uVar3 == 0) goto LAB_0179bb1c;
      }
      *(ushort **)(param_1 + 0x28) = param_3;
      break;
    default:
      goto switchD_0179b540_caseD_6c;
    case 0x82:
      if (param_3 != (ushort *)0x0) {
        if ((int)param_3 < 0x53c) {
          param_3 = (ushort *)0x53c;
        }
        uVar3 = FUN_0179b400(0x82);
        puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
        if ((int)uVar3 == 0) goto LAB_0179bb1c;
      }
      *(ushort **)(param_1 + 0x40) = param_3;
      puVar1 = param_3;
      break;
    case 0xa0:
      uVar3 = FUN_0179b400(0xa0,param_3);
      puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
      if ((int)uVar3 != 0) {
        *(ushort **)(param_1 + 0x60) = param_3;
        break;
      }
      goto LAB_0179bb1c;
    case 0xa1:
      if (param_3 != (ushort *)0x0) {
        uVar3 = FUN_0179b400(0xa1,param_3);
        puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
        if ((int)uVar3 == 0) goto LAB_0179bb1c;
      }
      *(ushort **)(param_1 + 100) = param_3;
      break;
    case 0xa2:
      if (param_3 != (ushort *)0x0) {
        uVar3 = FUN_0179b400(0xa2,param_3);
        puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
        if ((int)uVar3 == 0) goto LAB_0179bb1c;
      }
      *(ushort **)(param_1 + 0x6c) = param_3;
      break;
    case 0xa3:
      if (param_3 != (ushort *)0x0) {
        uVar3 = FUN_0179b400(0xa3,param_3);
        puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
        if ((int)uVar3 == 0) goto LAB_0179bb1c;
      }
      *(ushort **)(param_1 + 0x68) = param_3;
      break;
    case 0xa4:
      if (param_3 != (ushort *)0x0) {
        uVar3 = FUN_0179b400(0xa4,param_3);
        puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
        if ((int)uVar3 == 0) goto LAB_0179bb1c;
      }
      *(ushort **)(param_1 + 0x70) = param_3;
      break;
    case 200:
      if (param_3 != (ushort *)0x0) {
        param_3 = (ushort *)0x1;
      }
      *(ushort **)(param_1 + 0x2c) = param_3;
      puVar1 = param_3;
      break;
    case 0xc9:
      if (param_3 != (ushort *)0x0) {
        param_3 = (ushort *)0x1;
      }
      *(ushort **)(param_1 + 0x30) = param_3;
      puVar1 = param_3;
      break;
    case 0xca:
      if (param_3 != (ushort *)0x0) {
        puVar1 = (ushort *)0x1;
      }
      *(uint *)(param_1 + 0x34) = (uint)(param_3 == (ushort *)0x0);
    }
    goto LAB_0179b54c;
  }
  if (param_2 == 500) {
LAB_0179b5bc:
    local_18 = puVar2;
    if (param_3 == (ushort *)0x0) {
LAB_0179b5c4:
      puVar1 = (ushort *)0x0;
      puVar2 = local_18;
      goto LAB_0179b54c;
    }
switchD_0179b540_caseD_6c:
    puVar1 = (ushort *)0xffffffd8;
    goto LAB_0179b54c;
  }
  if (0x10 < param_2 - 1000) goto switchD_0179b540_caseD_6c;
  puVar2 = &switchD_0179b5b4::switchdataD_004504e0;
  switch(param_2) {
  case 1000:
    if (param_3 != (ushort *)0x0) {
      puVar1 = (ushort *)0x1;
    }
    *(ushort **)(param_1 + 0x3c) = puVar1;
    goto LAB_0179b54c;
  case 0x3e9:
    uVar3 = FUN_0179b400(0x3e9,param_3);
    puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      *(ushort **)(param_1 + 0x48) = param_3;
      goto LAB_0179b54c;
    }
    break;
  case 0x3ea:
    uVar3 = FUN_0179b400(0x3ea,param_3);
    puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      *(ushort **)(param_1 + 0x4c) = param_3;
      goto LAB_0179b54c;
    }
    break;
  default:
    goto switchD_0179b540_caseD_6c;
  case 0x3ec:
    if (param_3 != (ushort *)0x0) {
      uVar3 = FUN_0179b400(0x3ec,param_3);
      puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
      if ((int)uVar3 == 0) break;
    }
    *(ushort **)(param_1 + 0x44) = param_3;
    goto LAB_0179b54c;
  case 0x3ed:
    if (param_3 != (ushort *)0x0) {
      param_3 = (ushort *)0x1;
    }
    *(ushort **)(param_1 + 0x78) = param_3;
    puVar1 = param_3;
    goto LAB_0179b54c;
  case 0x3ee:
    uVar3 = FUN_0179b400(0x3ee,param_3);
    puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      *(ushort **)(param_1 + 0x7c) = param_3;
      goto LAB_0179b54c;
    }
    break;
  case 0x3ef:
    uVar3 = FUN_0179b400(0x3ef,param_3);
    puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      *(ushort **)(param_1 + 0x80) = param_3;
      goto LAB_0179b54c;
    }
    break;
  case 0x3f0:
    uVar3 = FUN_0179b400(0x3f0,param_3);
    puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      *(ushort **)(param_1 + 0x84) = param_3;
      goto LAB_0179b54c;
    }
    break;
  case 0x3f1:
    uVar3 = FUN_0179b400(0x3f1,param_3);
    puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      *(ushort **)(param_1 + 0x88) = param_3;
      goto LAB_0179b54c;
    }
    break;
  case 0x3f2:
    uVar3 = FUN_0179b400(0x3f2,param_3);
    puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      *(ushort **)(param_1 + 0x8c) = param_3;
      goto LAB_0179b54c;
    }
    break;
  case 0x3f3:
    uVar3 = FUN_0179b400(0x3f3,param_3);
    puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      *(ushort **)(param_1 + 0x90) = param_3;
      goto LAB_0179b54c;
    }
    break;
  case 0x3f4:
    uVar3 = FUN_0179b400(0x3f4,param_3);
    puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      if (param_3 != (ushort *)0x0) {
        param_3 = (ushort *)0x1;
      }
      *(ushort **)(param_1 + 0x94) = param_3;
      puVar1 = param_3;
      goto LAB_0179b54c;
    }
    break;
  case 0x3f5:
    uVar3 = FUN_0179b400(0x3f5,param_3);
    puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      *(ushort **)(param_1 + 0xa4) = param_3;
      goto LAB_0179b54c;
    }
    break;
  case 0x3f6:
    uVar3 = FUN_0179b400(0x3f6,param_3);
    puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      *(ushort **)(param_1 + 0xa8) = param_3;
      goto LAB_0179b54c;
    }
    break;
  case 0x3f7:
    if (param_3 != (ushort *)0x0) {
      uVar3 = FUN_0179b400(0x3f7,param_3);
      puVar2 = (ushort *)((ulonglong)uVar3 >> 0x20);
      if ((int)uVar3 == 0) break;
    }
    *(ushort **)(param_1 + 0xb4) = param_3;
    goto LAB_0179b54c;
  case 0x3f8:
    FUN_0179b1bc(&local_20,0x3f8);
    puVar2 = extraout_r1;
    if (((local_20 < (ushort *)0xffffff89) && ((int)local_1c <= (int)param_3)) &&
       ((int)param_3 <= (int)local_18)) {
      *(ushort **)(param_1 + 0xb8) = param_3;
      goto LAB_0179b54c;
    }
  }
LAB_0179bb1c:
  puVar1 = (ushort *)0xffffffd6;
LAB_0179b54c:
  if ((local_14 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(puVar1,puVar2,local_14 ^ DAT_018ddaf8,0);
  }
  return puVar1;
}

