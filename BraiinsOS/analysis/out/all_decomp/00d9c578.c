// FUN_00d9c578 @ 00d9c578 size=520 calls_out=3 calls_in=0
// strings: 

void FUN_00d9c578(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint *extraout_r1;
  uint *puVar5;
  uint *extraout_r1_00;
  uint *extraout_r1_01;
  uint *extraout_r1_02;
  uint *extraout_r1_03;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar4 = 4;
  if ((uint)(*param_1 < 4) <= -param_1[1]) {
    iVar4 = *param_1 - 4;
  }
  puVar5 = &switchD_00d9c5a4::switchdataD_00d9c5a8;
  switch(iVar4) {
  case 0:
    uVar12 = param_1[2];
    goto LAB_00d9c6d4;
  case 1:
  case 7:
  case 8:
  case 0x15:
  case 0x16:
  case 0x17:
    break;
  case 2:
    uVar12 = param_1[3];
    iVar4 = param_1[4] + 1;
    uVar14 = uVar12;
    while (iVar4 = iVar4 + -1, iVar4 != 0) {
      FUN_00f244b0(uVar14);
      uVar14 = uVar14 + 0x28;
      puVar5 = extraout_r1_00;
    }
    if (param_1[2] == 0) {
      return;
    }
    goto LAB_014b47f4;
  case 3:
    puVar5 = (uint *)param_1[3];
    if (param_1[2] == 2 && puVar5 == (uint *)0x0) {
      return;
    }
    if (param_1[0x1a] == 0x80000000 || param_1[0x1a] == 0) {
      if (!(param_1[0x24] != 0x80000000 && param_1[0x24] != 0)) goto LAB_00d9c6a4;
LAB_00d9c7ac:
      thunk_FUN_016d3fb4(param_1[0x25]);
      puVar5 = extraout_r1_02;
      if (!(param_1[0x2e] == 0x80000000 || param_1[0x2e] == 0)) goto LAB_00d9c7c4;
LAB_00d9c6b4:
      if (param_1[0x38] == 0x80000000 || param_1[0x38] == 0) {
        return;
      }
    }
    else {
      thunk_FUN_016d3fb4(param_1[0x1b]);
      puVar5 = extraout_r1_01;
      if (!(param_1[0x24] == 0x80000000 || param_1[0x24] == 0)) goto LAB_00d9c7ac;
LAB_00d9c6a4:
      if (!(param_1[0x2e] != 0x80000000 && param_1[0x2e] != 0)) goto LAB_00d9c6b4;
LAB_00d9c7c4:
      thunk_FUN_016d3fb4(param_1[0x2f]);
      puVar5 = extraout_r1_03;
      if (param_1[0x38] == 0x80000000 || param_1[0x38] == 0) {
        return;
      }
    }
    uVar12 = param_1[0x39];
    goto LAB_014b47f4;
  case 4:
    FUN_00d9c91c(param_1);
    return;
  case 5:
  case 6:
    uVar12 = param_1[2];
    if ((int)uVar12 < -0x7ffffffe) {
      return;
    }
    goto LAB_00d9c6d4;
  case 9:
  case 0xd:
    uVar12 = param_1[2];
    if (uVar12 == 0x80000000) {
      return;
    }
LAB_00d9c6d4:
    if (uVar12 != 0) {
LAB_00d9c6dc:
      uVar12 = param_1[3];
LAB_014b47f4:
      if (uVar12 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8(uVar12,puVar5);
      uVar14 = *(byte *)(uVar12 - 3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar9 = (uint)(*(byte *)(uVar12 - 3) >> 5);
      iVar13 = *(int *)(iVar4 + 8) + 0x10;
      iVar10 = iVar6 * uVar14 + iVar6 + -4;
      iVar6 = iVar13 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar9 = *(uint *)(iVar6 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if (iVar6 - uVar12 < uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar4 + 0x14);
      uVar9 = 1 << uVar14;
      *(undefined1 *)(uVar12 - 3) = 0xff;
      *(undefined2 *)(uVar12 - 2) = 0;
      do {
        uVar11 = *(uint *)(iVar4 + 0x10);
        uVar12 = *(uint *)(iVar4 + 0xc) | uVar11;
        if ((uVar9 & uVar12) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar11 == 0) || (uVar12 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar4,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar8 = (undefined4 *)FUN_016d2bc8();
          uVar7 = *puVar8;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar8 = uVar7;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar5 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar5);
          uVar12 = *puVar5;
          if (uVar11 != uVar12) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar3);
        *puVar5 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar12) {
          return;
        }
      } while( true );
    }
    break;
  case 10:
  case 0xb:
  case 0xc:
    if (param_1[3] != 0) {
      uVar12 = param_1[4];
      goto LAB_014b47f4;
    }
    break;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
    puVar5 = (uint *)param_1[3];
    if (param_1[2] == 2 && puVar5 == (uint *)0x0) {
      if ((int)param_1[4] < 0) {
        return;
      }
      if (param_1[4] == 0) {
        return;
      }
      uVar12 = param_1[5];
      goto LAB_014b47f4;
    }
    if (param_1[0x68] != 0) {
      thunk_FUN_016d3fb4(param_1[0x69]);
    }
    if (param_1[0x6b] == 0x80000000 || param_1[0x6b] == 0) {
      if (!(param_1[0x6e] != 0x80000000 && param_1[0x6e] != 0)) goto LAB_005be734;
LAB_005be7fc:
      thunk_FUN_016d3fb4(param_1[0x6f]);
      if (!(param_1[0x71] == 0x80000000 || param_1[0x71] == 0)) goto LAB_005be814;
LAB_005be744:
      if (!(param_1[0x74] != 0x80000000 && param_1[0x74] != 0)) goto LAB_005be754;
LAB_005be82c:
      thunk_FUN_016d3fb4(param_1[0x75]);
      if (param_1[10] == 2 && param_1[0xb] == 0) {
        return;
      }
    }
    else {
      thunk_FUN_016d3fb4(param_1[0x6c]);
      if (!(param_1[0x6e] == 0x80000000 || param_1[0x6e] == 0)) goto LAB_005be7fc;
LAB_005be734:
      if (!(param_1[0x71] != 0x80000000 && param_1[0x71] != 0)) goto LAB_005be744;
LAB_005be814:
      thunk_FUN_016d3fb4(param_1[0x72]);
      if (!(param_1[0x74] == 0x80000000 || param_1[0x74] == 0)) goto LAB_005be82c;
LAB_005be754:
      if (param_1[10] == 2 && param_1[0xb] == 0) {
        return;
      }
    }
    if (param_1[0x22] == 0x80000000 || param_1[0x22] == 0) {
      if (!(param_1[0x2c] != 0x80000000 && param_1[0x2c] != 0)) goto LAB_005be784;
LAB_005be860:
      thunk_FUN_016d3fb4(param_1[0x2d]);
      if (!(param_1[0x36] == 0x80000000 || param_1[0x36] == 0)) goto LAB_005be878;
LAB_005be794:
      if (!(param_1[0x40] != 0x80000000 && param_1[0x40] != 0)) goto LAB_005be7a4;
LAB_005be890:
      thunk_FUN_016d3fb4(param_1[0x41]);
      if (!(param_1[0x4e] == 0x80000000 || param_1[0x4e] == 0)) goto LAB_005be8a8;
LAB_005be7b4:
      if (!(param_1[0x58] != 0x80000000 && param_1[0x58] != 0)) goto LAB_005be7c4;
LAB_005be8c0:
      thunk_FUN_016d3fb4(param_1[0x59]);
      uVar12 = param_1[0x62];
    }
    else {
      thunk_FUN_016d3fb4(param_1[0x23]);
      if (!(param_1[0x2c] == 0x80000000 || param_1[0x2c] == 0)) goto LAB_005be860;
LAB_005be784:
      if (!(param_1[0x36] != 0x80000000 && param_1[0x36] != 0)) goto LAB_005be794;
LAB_005be878:
      thunk_FUN_016d3fb4(param_1[0x37]);
      if (!(param_1[0x40] == 0x80000000 || param_1[0x40] == 0)) goto LAB_005be890;
LAB_005be7a4:
      if (!(param_1[0x4e] != 0x80000000 && param_1[0x4e] != 0)) goto LAB_005be7b4;
LAB_005be8a8:
      thunk_FUN_016d3fb4(param_1[0x4f]);
      if (!(param_1[0x58] == 0x80000000 || param_1[0x58] == 0)) goto LAB_005be8c0;
LAB_005be7c4:
      uVar12 = param_1[0x62];
    }
    if ((uVar12 & 0x7fffffff) == 0) {
      return;
    }
    puVar5 = (uint *)0x7fffffff;
    uVar12 = param_1[99];
    goto LAB_014b47f4;
  case 0x12:
  case 0x13:
    uVar12 = param_1[2];
    if (uVar12 == 0x80000005) {
      return;
    }
    if ((int)uVar12 < 0) {
      return;
    }
    if (uVar12 == 0) {
      return;
    }
    goto LAB_00d9c6dc;
  case 0x14:
    uVar12 = 2;
    puVar5 = (uint *)0xc4653600;
    if (999999999 < param_1[4]) {
      uVar12 = param_1[4] + 0xc4653600;
    }
    if (1 < uVar12) {
      iVar4 = 0x18;
      if (uVar12 != 2) {
        iVar4 = 0x14;
      }
      if (*(int *)((int)param_1 + iVar4) != 0) {
        uVar12 = ((int *)((int)param_1 + iVar4))[1];
        goto LAB_014b47f4;
      }
    }
    break;
  default:
    if (1 < param_1[2] - 1) {
      puVar5 = &switchD_005c3e90::switchdataD_005c3e94;
      switch((char)param_1[3]) {
      case '\0':
      case '\x02':
      case '\x03':
      case '\x04':
      case '\x05':
      case '\x06':
        break;
      case '\x01':
        uVar12 = param_1[5];
        puVar8 = (undefined4 *)(uVar12 + 4);
        for (uVar14 = param_1[6]; uVar14 != 0; uVar14 = uVar14 - 1) {
          if (puVar8[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar8);
            puVar5 = extraout_r1;
          }
          puVar8 = puVar8 + 3;
        }
        if (param_1[4] != 0) goto LAB_014b47f4;
        break;
      default:
        if (param_1[4] != 0) {
          uVar12 = param_1[5];
          goto LAB_014b47f4;
        }
      }
      return;
    }
  }
  return;
}

