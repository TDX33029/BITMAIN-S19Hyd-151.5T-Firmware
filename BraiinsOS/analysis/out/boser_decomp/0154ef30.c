// FUN_0154ef30 @ 0154ef30 size=1656 calls_out=10 calls_in=4
// strings: 

void FUN_0154ef30(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  undefined8 uVar19;
  int local_78;
  int local_5c;
  char local_58;
  uint local_48 [3];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (param_1[0x17] != 0) {
    FUN_0154ef30(param_1[0x17],param_2,param_3,param_4,1);
  }
  iVar3 = param_1[0x19];
  if ((iVar3 != 0) && (DataMemoryBarrier(0xb), *(int *)(iVar3 + 0xb0) == 0)) {
    FUN_0154ef30(iVar3 + 8,param_2,param_3,param_4,1);
  }
  if (param_1[0x18] != 0) {
    FUN_0154ef30(param_1[0x18],param_2,param_3,param_4,1);
  }
  if (*param_2 == '\x05') {
    iVar3 = *(int *)(param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 8);
    uVar11 = *(undefined4 *)(param_2 + 0xc);
    iVar17 = *param_1;
    if (iVar3 == 0) {
      uVar11 = 0;
    }
    uVar12 = param_1[1];
    iVar13 = param_1[3];
    uVar10 = (uint)(iVar3 != 0);
    local_48[1] = 0;
    local_34 = 0;
    local_48[0] = uVar10;
    local_48[2] = iVar3;
    local_3c = uVar4;
    local_38 = uVar10;
    local_30 = iVar3;
    local_2c = uVar4;
    local_28 = uVar11;
LAB_0154f058:
    iVar5 = FUN_01a41998(local_48);
    if (iVar5 != 0) {
      uVar14 = *(undefined4 *)(iVar5 + 4);
      iVar15 = *(int *)(iVar5 + 8);
      if (iVar13 != 0) {
        uVar6 = FUN_01676700(param_1 + 4,uVar14,iVar15);
        uVar1 = uVar6 >> 0x19;
        local_78 = 0;
        while( true ) {
          uVar6 = uVar12 & uVar6;
          uVar18 = *(uint *)(iVar17 + uVar6);
          uVar7 = uVar18 ^ uVar1 * 0x1010101;
          uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
          while (uVar7 != 0) {
            iVar8 = iVar17 + -0xc +
                    (uVar6 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                            (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) &
                    uVar12) * -0xc;
            uVar7 = uVar7 - 1 & uVar7;
            if ((iVar15 == *(int *)(iVar8 + 8)) &&
               (iVar8 = thunk_FUN_01bed842(uVar14,*(undefined4 *)(iVar8 + 4),iVar15), iVar8 == 0)) {
              FUN_01541a24(param_3,iVar5);
              goto LAB_0154f058;
            }
          }
          if ((uVar18 & 0x80808080 & uVar18 << 1) != 0) break;
          local_78 = local_78 + 4;
          uVar6 = uVar6 + local_78;
        }
      }
      goto LAB_0154f058;
    }
    iVar17 = param_1[0x1c];
    if (iVar17 != 0) {
      iVar13 = param_1[0x1b];
      local_34 = 0;
      local_48[1] = 0;
      local_48[0] = uVar10;
      local_48[2] = iVar3;
      local_3c = uVar4;
      local_38 = uVar10;
      local_30 = iVar3;
      local_2c = uVar4;
      local_28 = uVar11;
LAB_0154f1d8:
      iVar5 = FUN_01a41998(local_48);
      if (iVar5 != 0) {
        iVar9 = FUN_01540d6c(param_3,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
        iVar15 = iVar13;
        iVar8 = iVar17 * 100;
        if (iVar9 == 0) {
          do {
            FUN_01338048(&local_5c,iVar15,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
            if (local_5c == 0x12) {
              if (local_58 != '\0') {
                FUN_01541a24(param_3,iVar5);
                break;
              }
            }
            else {
              FUN_0150174c(&local_5c);
            }
            iVar15 = iVar15 + 100;
            iVar8 = iVar8 + -100;
          } while (iVar8 != 0);
        }
        goto LAB_0154f1d8;
      }
    }
    if (param_1[0xc] != 0) {
      local_34 = 0;
      local_48[1] = 0;
      local_48[0] = uVar10;
      local_48[2] = iVar3;
      local_3c = uVar4;
      local_38 = uVar10;
      local_30 = iVar3;
      local_2c = uVar4;
      local_28 = uVar11;
      while (iVar17 = FUN_01a41998(local_48), iVar17 != 0) {
        iVar13 = FUN_01540d6c(param_3,*(undefined4 *)(iVar17 + 4),*(undefined4 *)(iVar17 + 8));
        if (iVar13 == 0) {
          FUN_01541a24(param_3,iVar17);
        }
      }
    }
    if ((param_5 != 0) && (param_1[0x11] != 0)) {
      local_34 = 0;
      local_48[1] = 0;
      local_48[0] = uVar10;
      local_48[2] = iVar3;
      local_3c = uVar4;
      local_38 = uVar10;
      local_30 = iVar3;
      local_2c = uVar4;
      local_28 = uVar11;
      while( true ) {
        uVar19 = FUN_01a41998(local_48);
        iVar17 = (int)uVar19;
        if (iVar17 == 0) break;
        iVar13 = FUN_01540d6c(param_3,*(undefined4 *)(iVar17 + 4),*(undefined4 *)(iVar17 + 8));
        if ((iVar13 == 0) &&
           (iVar13 = FUN_01577618(param_1 + 0x11,(int)((ulonglong)uVar19 >> 0x20),param_4),
           iVar13 != 0)) {
          FUN_01541a24(param_3,iVar17);
        }
      }
    }
    if (param_1[0x28] != 0) {
      iVar17 = param_1[0x28] * 0xb8;
      puVar16 = (undefined4 *)(param_1[0x27] + 8);
      do {
        iVar13 = FUN_0196b2cc(iVar3,uVar4,puVar16[-1],*puVar16);
        if (iVar13 != 0) {
          FUN_0154ef30(puVar16 + 2,param_2,param_3,param_4,1);
        }
        puVar16 = puVar16 + 0x2e;
        iVar17 = iVar17 + -0xb8;
      } while (iVar17 != 0);
    }
  }
  iVar3 = param_1[0x16];
  if (iVar3 != 0) {
    iVar17 = FUN_01577618(iVar3 + 0x1f8,param_2,param_4);
    if (iVar17 == 0) {
      if (*(int *)(iVar3 + 0x140) == -0x80000000) goto LAB_0154f474;
      iVar3 = iVar3 + 0xa8;
    }
    else {
      FUN_0154ef30(iVar3 + 0x150,param_2,param_3,param_4,1);
      if (*(int *)(iVar3 + 0x98) == -0x80000000) goto LAB_0154f474;
    }
    FUN_0154ef30(iVar3,param_2,param_3,param_4,1);
  }
LAB_0154f474:
  if (param_1[0x1f] != 0) {
    iVar17 = param_1[0x1e];
    iVar3 = param_1[0x1f] * 0xc0;
    do {
      iVar13 = FUN_01577618(iVar17,param_2,param_4);
      if (iVar13 != 0) {
        FUN_0154ef30(iVar17 + 0x18,param_2,param_3,param_4,1);
      }
      iVar17 = iVar17 + 0xc0;
      iVar3 = iVar3 + -0xc0;
    } while (iVar3 != 0);
  }
  if (param_1[0x22] != 0) {
    iVar17 = param_1[0x21];
    iVar3 = param_1[0x22] * 0xc0;
    do {
      iVar13 = FUN_01577618(iVar17,param_2,param_4);
      if (iVar13 != 0) {
        FUN_0154ef30(iVar17 + 0x18,param_2,param_3,param_4,1);
      }
      iVar17 = iVar17 + 0xc0;
      iVar3 = iVar3 + -0xc0;
    } while (iVar3 != 0);
  }
  if (param_1[0x25] != 0) {
    iVar17 = param_1[0x24];
    iVar13 = 0;
    bVar2 = false;
    iVar3 = param_1[0x25] * 0xc0;
    do {
      iVar5 = FUN_01577618(iVar17,param_2,param_4);
      if (iVar5 != 0) {
        if (bVar2) {
          return;
        }
        iVar13 = iVar17 + 0x18;
        bVar2 = true;
      }
      iVar17 = iVar17 + 0xc0;
      iVar3 = iVar3 + -0xc0;
    } while (iVar3 != 0);
    if (bVar2 && iVar13 != 0) {
      FUN_0154ef30(iVar13,param_2,param_3,param_4,1);
    }
  }
  return;
}

