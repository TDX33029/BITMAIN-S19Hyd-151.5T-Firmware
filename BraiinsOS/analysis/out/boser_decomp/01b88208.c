// FUN_01b88208 @ 01b88208 size=1768 calls_out=3 calls_in=1
// strings: 

uint FUN_01b88208(int param_1,uint param_2,uint param_3)

{
  uint extraout_r1;
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  if (*(int *)(param_1 + 0x974) == 0) {
    if (param_2 == 400) {
      if (param_3 != 0) {
        bVar1 = *(int *)(param_1 + 0x2d8) == 0;
LAB_01b882c0:
        if (!bVar1) {
          return 0xffffffd8;
        }
      }
    }
    else if (param_2 < 0x191) {
      if (param_2 != 0x82) {
        if (param_2 < 0x83) {
          if (param_2 != 10) {
            bVar2 = 6 < param_2 - 100;
            bVar1 = param_2 - 100 == 7;
LAB_01b88270:
            if (bVar2 && !bVar1) {
              return 0xffffffd8;
            }
          }
        }
        else {
          if (0xa4 < param_2) {
            bVar2 = 1 < param_2 - 200;
            bVar1 = param_2 - 200 == 2;
            goto LAB_01b88270;
          }
          if (param_2 < 0xa0) {
            return 0xffffffd8;
          }
        }
      }
    }
    else {
      if (0x3ea < param_2) {
        bVar2 = 0xb < param_2 - 0x3ec;
        bVar1 = param_2 - 0x3ec == 0xc;
        goto LAB_01b88270;
      }
      if ((param_2 < 1000) && (0x192 < param_2)) {
        bVar1 = param_2 == 500;
        goto LAB_01b882c0;
      }
    }
  }
  else {
    if ((param_2 != 100) && (5 < param_2 - 0x66)) {
      return 0xffffffc4;
    }
    *(undefined4 *)(param_1 + 4) = 1;
  }
  local_14 = DAT_01d53560;
  if (param_2 < 0x193) {
    if (399 < param_2) goto LAB_01b87f3c;
    if (param_2 == 0x82) {
      local_20 = param_3;
      if (param_3 != 0) {
        if ((int)param_3 < 0x53c) {
          param_3 = 0x53c;
        }
        uVar3 = FUN_01b87b38(0x82,param_3);
        param_2 = (uint)((ulonglong)uVar3 >> 0x20);
        local_20 = param_3;
        if ((int)uVar3 == 0) goto LAB_01b87d3c;
      }
      *(uint *)(param_1 + 0x40) = local_20;
      goto LAB_01b87d8c;
    }
    if (param_2 < 0x83) {
      if (param_2 == 10) {
        uVar3 = FUN_01b87b38(10,param_3);
        param_2 = (uint)((ulonglong)uVar3 >> 0x20);
        if ((int)uVar3 != 0) {
          *(uint *)(param_1 + 0xc) = param_3;
          local_20 = param_3;
          goto LAB_01b87d8c;
        }
        goto LAB_01b87d3c;
      }
      if (7 < param_2 - 100) goto switchD_01b87d1c_caseD_3eb;
      switch(param_2) {
      case 0x65:
        if (param_3 != 0) {
          uVar3 = FUN_01b87b38(0x65,param_3);
          param_2 = (uint)((ulonglong)uVar3 >> 0x20);
          if ((int)uVar3 == 0) goto LAB_01b87d3c;
        }
        *(uint *)(param_1 + 0x10) = param_3;
        local_20 = param_3;
        goto LAB_01b87d8c;
      case 0x66:
        if (param_3 != 0) {
          uVar3 = FUN_01b87b38(0x66,param_3);
          param_2 = (uint)((ulonglong)uVar3 >> 0x20);
          if ((int)uVar3 == 0) goto LAB_01b87d3c;
        }
        *(uint *)(param_1 + 0x18) = param_3;
        local_20 = param_3;
        goto LAB_01b87d8c;
      case 0x67:
        if (param_3 != 0) {
          uVar3 = FUN_01b87b38(0x67,param_3);
          param_2 = (uint)((ulonglong)uVar3 >> 0x20);
          if ((int)uVar3 == 0) goto LAB_01b87d3c;
        }
        *(uint *)(param_1 + 0x14) = param_3;
        local_20 = param_3;
        goto LAB_01b87d8c;
      case 0x68:
        if (param_3 != 0) {
          uVar3 = FUN_01b87b38(0x68,param_3);
          param_2 = (uint)((ulonglong)uVar3 >> 0x20);
          if ((int)uVar3 == 0) goto LAB_01b87d3c;
        }
        *(uint *)(param_1 + 0x1c) = param_3;
        local_20 = param_3;
        goto LAB_01b87d8c;
      case 0x69:
        if (param_3 != 0) {
          uVar3 = FUN_01b87b38(0x69,param_3);
          param_2 = (uint)((ulonglong)uVar3 >> 0x20);
          if ((int)uVar3 == 0) goto LAB_01b87d3c;
        }
        *(uint *)(param_1 + 0x20) = param_3;
        local_20 = param_3;
        goto LAB_01b87d8c;
      case 0x6a:
        uVar3 = FUN_01b87b38(0x6a,param_3);
        param_2 = (uint)((ulonglong)uVar3 >> 0x20);
        if ((int)uVar3 != 0) {
          *(uint *)(param_1 + 0x24) = param_3;
          local_20 = param_3;
          goto LAB_01b87d8c;
        }
        goto LAB_01b87d3c;
      case 0x6b:
        if (param_3 != 0) {
          uVar3 = FUN_01b87b38(0x6b,param_3);
          param_2 = (uint)((ulonglong)uVar3 >> 0x20);
          if ((int)uVar3 == 0) goto LAB_01b87d3c;
        }
        *(uint *)(param_1 + 0x28) = param_3;
        local_20 = param_3;
        goto LAB_01b87d8c;
      default:
        FUN_01b878f4(&local_20,100);
        param_2 = extraout_r1;
        if (0xffffff88 < local_20) goto LAB_01b87d8c;
        local_20 = local_1c;
        if ((int)local_1c <= (int)param_3) {
          local_20 = param_3;
        }
        if ((int)local_18 <= (int)local_20) {
          local_20 = local_18;
        }
        if (local_20 == 0) {
          local_20 = 3;
          *(undefined4 *)(param_1 + 0x38) = 3;
          goto LAB_01b87d8c;
        }
        *(uint *)(param_1 + 0x38) = local_20;
        if (-1 < (int)local_20) goto LAB_01b87d8c;
      }
      goto LAB_01b87f44;
    }
    if (param_2 < 0xa5) {
      if (0x9f < param_2) {
        switch(param_2) {
        case 0xa1:
          if (param_3 != 0) {
            uVar3 = FUN_01b87b38(0xa1,param_3);
            param_2 = (uint)((ulonglong)uVar3 >> 0x20);
            if ((int)uVar3 == 0) break;
          }
          *(uint *)(param_1 + 100) = param_3;
          local_20 = param_3;
          goto LAB_01b87d8c;
        case 0xa2:
          if (param_3 != 0) {
            uVar3 = FUN_01b87b38(0xa2,param_3);
            param_2 = (uint)((ulonglong)uVar3 >> 0x20);
            if ((int)uVar3 == 0) break;
          }
          *(uint *)(param_1 + 0x6c) = param_3;
          local_20 = param_3;
          goto LAB_01b87d8c;
        case 0xa3:
          if (param_3 != 0) {
            uVar3 = FUN_01b87b38(0xa3,param_3);
            param_2 = (uint)((ulonglong)uVar3 >> 0x20);
            if ((int)uVar3 == 0) break;
          }
          *(uint *)(param_1 + 0x68) = param_3;
          local_20 = param_3;
          goto LAB_01b87d8c;
        case 0xa4:
          if (param_3 != 0) {
            uVar3 = FUN_01b87b38(0xa4,param_3);
            param_2 = (uint)((ulonglong)uVar3 >> 0x20);
            if ((int)uVar3 == 0) break;
          }
          *(uint *)(param_1 + 0x70) = param_3;
          local_20 = param_3;
          goto LAB_01b87d8c;
        default:
          uVar3 = FUN_01b87b38(0xa0,param_3);
          param_2 = (uint)((ulonglong)uVar3 >> 0x20);
          if ((int)uVar3 != 0) {
            *(uint *)(param_1 + 0x60) = param_3;
            local_20 = param_3;
            goto LAB_01b87d8c;
          }
        }
        goto LAB_01b87d3c;
      }
    }
    else {
      if (param_2 == 0xc9) {
        local_20 = param_3;
        if (param_3 != 0) {
          local_20 = 1;
        }
        *(uint *)(param_1 + 0x30) = local_20;
        goto LAB_01b87d8c;
      }
      if (param_2 == 0xca) {
        local_20 = param_3;
        if (param_3 != 0) {
          local_20 = 1;
        }
        *(uint *)(param_1 + 0x34) = (uint)(param_3 == 0);
        goto LAB_01b87d8c;
      }
      if (param_2 == 200) {
        local_20 = param_3;
        if (param_3 != 0) {
          local_20 = 1;
        }
        *(uint *)(param_1 + 0x2c) = local_20;
        goto LAB_01b87d8c;
      }
    }
switchD_01b87d1c_caseD_3eb:
    local_20 = 0xffffffd8;
    goto LAB_01b87d8c;
  }
  if (param_2 == 500) {
LAB_01b87f3c:
    if (param_3 == 0) {
LAB_01b87f44:
      local_20 = 0;
      goto LAB_01b87d8c;
    }
    goto switchD_01b87d1c_caseD_3eb;
  }
  switch(param_2) {
  case 1000:
    local_20 = param_3;
    if (param_3 != 0) {
      local_20 = 1;
    }
    *(uint *)(param_1 + 0x3c) = local_20;
    goto LAB_01b87d8c;
  case 0x3e9:
    uVar3 = FUN_01b87b38(0x3e9,param_3);
    param_2 = (uint)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      *(uint *)(param_1 + 0x48) = param_3;
      local_20 = param_3;
      goto LAB_01b87d8c;
    }
    break;
  case 0x3ea:
    uVar3 = FUN_01b87b38(0x3ea,param_3);
    param_2 = (uint)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      *(uint *)(param_1 + 0x4c) = param_3;
      local_20 = param_3;
      goto LAB_01b87d8c;
    }
    break;
  default:
    goto switchD_01b87d1c_caseD_3eb;
  case 0x3ec:
    if (param_3 != 0) {
      uVar3 = FUN_01b87b38(0x3ec,param_3);
      param_2 = (uint)((ulonglong)uVar3 >> 0x20);
      if ((int)uVar3 == 0) break;
    }
    *(uint *)(param_1 + 0x44) = param_3;
LAB_01b8806c:
    local_20 = param_3;
    goto LAB_01b87d8c;
  case 0x3ed:
    local_20 = param_3;
    if (param_3 != 0) {
      local_20 = 1;
    }
    *(uint *)(param_1 + 0x78) = local_20;
    goto LAB_01b87d8c;
  case 0x3ee:
    uVar3 = FUN_01b87b38(0x3ee,param_3);
    param_2 = (uint)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      *(uint *)(param_1 + 0x7c) = param_3;
      local_20 = param_3;
      goto LAB_01b87d8c;
    }
    break;
  case 0x3ef:
    uVar3 = FUN_01b87b38(0x3ef,param_3);
    param_2 = (uint)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      *(uint *)(param_1 + 0x80) = param_3;
      local_20 = param_3;
      goto LAB_01b87d8c;
    }
    break;
  case 0x3f0:
    uVar3 = FUN_01b87b38(0x3f0,param_3);
    param_2 = (uint)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      *(uint *)(param_1 + 0x84) = param_3;
      local_20 = param_3;
      goto LAB_01b87d8c;
    }
    break;
  case 0x3f1:
    uVar3 = FUN_01b87b38(0x3f1,param_3);
    param_2 = (uint)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      *(uint *)(param_1 + 0x88) = param_3;
      goto LAB_01b8806c;
    }
    break;
  case 0x3f2:
    uVar3 = FUN_01b87b38(0x3f2,param_3);
    param_2 = (uint)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      *(uint *)(param_1 + 0x8c) = param_3;
      local_20 = param_3;
      goto LAB_01b87d8c;
    }
    break;
  case 0x3f3:
    uVar3 = FUN_01b87b38(0x3f3,param_3);
    param_2 = (uint)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      *(uint *)(param_1 + 0x90) = param_3;
      local_20 = param_3;
      goto LAB_01b87d8c;
    }
    break;
  case 0x3f4:
    uVar3 = FUN_01b87b38(0x3f4,param_3);
    param_2 = (uint)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      local_20 = param_3;
      if (param_3 != 0) {
        local_20 = 1;
      }
      *(uint *)(param_1 + 0x94) = local_20;
      goto LAB_01b87d8c;
    }
    break;
  case 0x3f5:
    uVar3 = FUN_01b87b38(0x3f5,param_3);
    param_2 = (uint)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      *(uint *)(param_1 + 0xa4) = param_3;
      local_20 = param_3;
      goto LAB_01b87d8c;
    }
    break;
  case 0x3f6:
    uVar3 = FUN_01b87b38(0x3f6,param_3);
    param_2 = (uint)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      *(uint *)(param_1 + 0xa8) = param_3;
      goto LAB_01b8806c;
    }
    break;
  case 0x3f7:
    if (param_3 != 0) {
      uVar3 = FUN_01b87b38(0x3f7,param_3);
      param_2 = (uint)((ulonglong)uVar3 >> 0x20);
      if ((int)uVar3 == 0) break;
    }
    *(uint *)(param_1 + 0xb4) = param_3;
    local_20 = param_3;
    goto LAB_01b87d8c;
  case 0x3f8:
    uVar3 = FUN_01b87b38(0x3f8,param_3);
    param_2 = (uint)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      *(uint *)(param_1 + 0xb8) = param_3;
      local_20 = param_3;
      goto LAB_01b87d8c;
    }
  }
LAB_01b87d3c:
  local_20 = 0xffffffd6;
LAB_01b87d8c:
  if ((local_14 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(local_20,param_2,local_14 ^ DAT_01d53560,0);
  }
  return local_20;
}

