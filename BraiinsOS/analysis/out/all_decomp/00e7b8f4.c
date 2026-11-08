// FUN_00e7b8f4 @ 00e7b8f4 size=1112 calls_out=5 calls_in=3
// strings: 

void FUN_00e7b8f4(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar4 = *param_1;
  iVar5 = 4;
  if ((uint)(uVar4 < 4) <= -param_1[1]) {
    iVar5 = uVar4 - 4;
  }
  switch(iVar5) {
  case 0:
    uVar4 = param_1[2];
    goto LAB_00e7ba80;
  case 1:
  case 7:
  case 8:
  case 0x15:
  case 0x16:
  case 0x17:
    break;
  case 2:
    uVar4 = param_1[3];
    iVar5 = param_1[4] + 1;
    uVar9 = uVar4;
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      FUN_00f244b0(uVar9);
      uVar9 = uVar9 + 0x28;
    }
    if (param_1[2] == 0) {
      return;
    }
    goto LAB_014b47f4;
  case 3:
    if (param_1[2] == 2 && param_1[3] == 0) {
      return;
    }
    if (param_1[0x1a] == 0x80000000 || param_1[0x1a] == 0) {
      if (!(param_1[0x24] != 0x80000000 && param_1[0x24] != 0)) goto LAB_00e7ba50;
LAB_00e7bb64:
      thunk_FUN_016d3fb4(param_1[0x25]);
      if (!(param_1[0x2e] == 0x80000000 || param_1[0x2e] == 0)) goto LAB_00e7bb7c;
LAB_00e7ba60:
      if (param_1[0x38] == 0x80000000 || param_1[0x38] == 0) {
        return;
      }
    }
    else {
      thunk_FUN_016d3fb4(param_1[0x1b]);
      if (!(param_1[0x24] == 0x80000000 || param_1[0x24] == 0)) goto LAB_00e7bb64;
LAB_00e7ba50:
      if (!(param_1[0x2e] != 0x80000000 && param_1[0x2e] != 0)) goto LAB_00e7ba60;
LAB_00e7bb7c:
      thunk_FUN_016d3fb4(param_1[0x2f]);
      if (param_1[0x38] == 0x80000000 || param_1[0x38] == 0) {
        return;
      }
    }
    uVar4 = param_1[0x39];
    goto LAB_014b47f4;
  case 4:
    if (uVar4 == 3 && param_1[1] == 0) {
      return;
    }
    if (*param_1 == 2 && param_1[1] == 0) {
LAB_00e7acd8:
      if (!(param_1[0xb0] != 0x80000000 && param_1[0xb0] != 0)) goto LAB_00e7ace8;
LAB_00e7ad88:
      thunk_FUN_016d3fb4(param_1[0xb1]);
      uVar4 = param_1[0xb3];
    }
    else {
      if (param_1[6] == 0x80000000 || param_1[6] == 0) {
        if (!(param_1[9] != 0x80000000 && param_1[9] != 0)) goto LAB_00e7acc8;
LAB_00e7ad58:
        thunk_FUN_016d3fb4(param_1[10]);
        if (param_1[0xc] == 0x80000000 || param_1[0xc] == 0) goto LAB_00e7acd8;
      }
      else {
        thunk_FUN_016d3fb4(param_1[7]);
        if (!(param_1[9] == 0x80000000 || param_1[9] == 0)) goto LAB_00e7ad58;
LAB_00e7acc8:
        if (param_1[0xc] == 0x80000000 || param_1[0xc] == 0) goto LAB_00e7acd8;
      }
      thunk_FUN_016d3fb4(param_1[0xd]);
      if (!(param_1[0xb0] == 0x80000000 || param_1[0xb0] == 0)) goto LAB_00e7ad88;
LAB_00e7ace8:
      uVar4 = param_1[0xb3];
    }
    if (uVar4 != 0x80000000) {
      uVar9 = param_1[0xb4];
      uVar13 = param_1[0xb5];
      for (uVar11 = 0; uVar13 != uVar11; uVar11 = uVar11 + 1) {
        iVar5 = uVar9 + uVar11 * 0x20;
        if (*(int *)(iVar5 + 0x10) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar5 + 0x14));
        }
      }
      if (uVar4 != 0) {
        thunk_FUN_016d3fb4(uVar9);
      }
    }
    FUN_005c7b40(param_1 + 0x30);
    if (param_1[0x46] != 2 || param_1[0x47] != 0) {
      if (param_1[0x5e] == 0x80000000 || param_1[0x5e] == 0) {
        if (!(param_1[0x68] != 0x80000000 && param_1[0x68] != 0)) goto LAB_00e7add8;
LAB_00e7ae68:
        thunk_FUN_016d3fb4(param_1[0x69]);
        if (!(param_1[0x72] == 0x80000000 || param_1[0x72] == 0)) goto LAB_00e7ae80;
LAB_00e7ade8:
        if (param_1[0x7c] == 0x80000000 || param_1[0x7c] == 0) goto LAB_00e7adf8;
      }
      else {
        thunk_FUN_016d3fb4(param_1[0x5f]);
        if (!(param_1[0x68] == 0x80000000 || param_1[0x68] == 0)) goto LAB_00e7ae68;
LAB_00e7add8:
        if (!(param_1[0x72] != 0x80000000 && param_1[0x72] != 0)) goto LAB_00e7ade8;
LAB_00e7ae80:
        thunk_FUN_016d3fb4(param_1[0x73]);
        if (param_1[0x7c] == 0x80000000 || param_1[0x7c] == 0) goto LAB_00e7adf8;
      }
      thunk_FUN_016d3fb4(param_1[0x7d]);
    }
LAB_00e7adf8:
    uVar9 = param_1[0xab];
    iVar5 = param_1[0xac] + 1;
    uVar4 = uVar9;
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      FUN_00f24560(uVar4);
      uVar4 = uVar4 + 0x2e0;
    }
    if (param_1[0xaa] != 0) {
      thunk_FUN_016d3fb4(uVar9);
    }
    if (param_1[0xad] == 0) {
      return;
    }
    uVar4 = param_1[0xae];
    goto LAB_014b47f4;
  case 5:
  case 6:
    uVar4 = param_1[2];
    if ((int)uVar4 < -0x7ffffffe) {
      return;
    }
    goto LAB_00e7ba80;
  case 9:
  case 0xd:
    uVar4 = param_1[2];
    if (uVar4 == 0x80000000) {
      return;
    }
LAB_00e7ba80:
    if (uVar4 != 0) {
LAB_00e7ba88:
      uVar4 = param_1[3];
LAB_014b47f4:
      if (uVar4 == 0) {
        return;
      }
      iVar5 = FUN_016d3bc8();
      uVar9 = *(byte *)(uVar4 - 3) & 0x1f;
      if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
         (uVar11 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar11 - 0x10, uVar11 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar11 = (uint)(*(byte *)(uVar4 - 3) >> 5);
      iVar12 = *(int *)(iVar5 + 8) + 0x10;
      iVar10 = iVar6 * uVar9 + iVar6 + -4;
      iVar6 = iVar12 + iVar10;
      if (4 < uVar11) {
        if (uVar11 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar11 = *(uint *)(iVar6 + -4);
        if (uVar11 < 5) {
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
      if (iVar6 - uVar4 < uVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar6 - uVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar5 + 0x14);
      uVar11 = 1 << uVar9;
      *(undefined1 *)(uVar4 - 3) = 0xff;
      *(undefined2 *)(uVar4 - 2) = 0;
      do {
        uVar13 = *(uint *)(iVar5 + 0x10);
        uVar4 = *(uint *)(iVar5 + 0xc) | uVar13;
        if ((uVar11 & uVar4) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar13 == 0) || (uVar4 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar5,uVar9);
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
          *(uint *)(iVar5 + 0x10) = uVar11 + uVar13;
          return;
        }
        puVar14 = (uint *)(iVar5 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar14);
          uVar4 = *puVar14;
          if (uVar13 != uVar4) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar14);
        } while (!bVar3);
        *puVar14 = uVar11 + uVar13;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar13 == uVar4) {
          return;
        }
      } while( true );
    }
    break;
  case 10:
  case 0xb:
  case 0xc:
    if (param_1[3] != 0) {
      uVar4 = param_1[4];
      goto LAB_014b47f4;
    }
    break;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
    if (param_1[2] != 2 || param_1[3] != 0) {
      FUN_00e7a910();
      return;
    }
    if ((-1 < (int)param_1[4]) && (param_1[4] != 0)) {
      uVar4 = param_1[5];
      goto LAB_014b47f4;
    }
    break;
  case 0x12:
  case 0x13:
    uVar4 = param_1[2];
    if (uVar4 == 0x80000005) {
      return;
    }
    if ((int)uVar4 < 0) {
      return;
    }
    if (uVar4 == 0) {
      return;
    }
    goto LAB_00e7ba88;
  case 0x14:
    uVar4 = 2;
    if (999999999 < param_1[4]) {
      uVar4 = param_1[4] + 0xc4653600;
    }
    if (1 < uVar4) {
      iVar5 = 0x18;
      if (uVar4 != 2) {
        iVar5 = 0x14;
      }
      if (*(int *)((int)param_1 + iVar5) != 0) {
        uVar4 = ((int *)((int)param_1 + iVar5))[1];
        goto LAB_014b47f4;
      }
    }
    break;
  default:
    if (1 < param_1[2] - 1) {
      switch((char)param_1[3]) {
      case '\0':
      case '\x02':
      case '\x03':
      case '\x04':
      case '\x05':
      case '\x06':
        break;
      case '\x01':
        uVar4 = param_1[5];
        puVar8 = (undefined4 *)(uVar4 + 4);
        for (uVar9 = param_1[6]; uVar9 != 0; uVar9 = uVar9 - 1) {
          if (puVar8[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar8);
          }
          puVar8 = puVar8 + 3;
        }
        if (param_1[4] != 0) goto LAB_014b47f4;
        break;
      default:
        if (param_1[4] != 0) {
          uVar4 = param_1[5];
          goto LAB_014b47f4;
        }
      }
      return;
    }
  }
  return;
}

