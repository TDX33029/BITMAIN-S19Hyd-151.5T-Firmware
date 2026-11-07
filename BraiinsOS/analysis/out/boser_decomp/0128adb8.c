// FUN_0128adb8 @ 0128adb8 size=984 calls_out=9 calls_in=2
// strings: 

void FUN_0128adb8(undefined1 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint extraout_r3;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  undefined4 local_2c;
  uint local_28;
  
  FUN_0128b320(&local_2c,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
               *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
               *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24));
  uVar1 = local_28;
  uVar2 = local_2c;
  if (local_2c == 2) {
LAB_0128ae54:
    param_1[1] = (undefined1)local_28;
  }
  else {
    iVar7 = *(int *)(param_2 + 0x28);
    uVar9 = *(uint *)(param_2 + 0x2c);
    uVar10 = *(uint *)(param_2 + 0x30);
    uVar14 = *(uint *)(param_2 + 0x34);
    uVar13 = *(uint *)(param_2 + 0x38);
    uVar11 = *(uint *)(param_2 + 0x3c);
    FUN_0128b320(&local_2c,iVar7,uVar9,uVar10,uVar14,uVar13,uVar11);
    if (local_2c == 2) {
      goto LAB_0128ae54;
    }
    if ((uVar2 & 1) == 0) {
LAB_0128afcc:
      uVar12 = 2;
      uVar2 = local_2c & 1;
      local_2c._1_1_ = uVar12;
      if (((uVar2 != 0) && (*(int *)(param_2 + 0x60) == 1)) && (*(char *)(param_2 + 0xa8) != '\a'))
      {
        uVar2 = FUN_01291f74(local_28,*(undefined4 *)(param_2 + 100));
        if (uVar2 == 0) {
          local_2c._1_1_ = 0;
        }
        else {
          iVar7 = FUN_0128b4c4(param_2,uVar2);
LAB_0128b144:
          local_2c._1_1_ = 1;
          if (iVar7 != 0) {
            iVar7 = FUN_0128b444(param_2,uVar2);
LAB_0128b158:
            local_2c._1_1_ = 1;
            if (iVar7 != 0) {
              if (*(int *)(param_2 + 0x40) != 0) {
                iVar8 = *(int *)(param_2 + 0x44);
                iVar7 = FUN_0128b828(uVar2);
                local_2c._1_1_ = 1;
                if (iVar8 != iVar7) goto LAB_0128b104;
              }
              *(uint *)(param_1 + 4) = uVar2;
              uVar12 = 0;
              goto LAB_0128b10c;
            }
          }
        }
      }
    }
    else if ((*(int *)(param_2 + 0x48) == 1) && (*(int *)(param_2 + 0x70) != 0)) {
      uVar2 = FUN_01291b34(uVar1,*(undefined4 *)(param_2 + 0x4c),*(undefined4 *)(param_2 + 0x74));
      if (uVar2 == 0) {
        local_2c._1_1_ = 0;
      }
      else {
        uVar4 = (uVar2 & 0x1fff) >> 4;
        uVar3 = FUN_0128e728((int)uVar2 >> 0xd,uVar4,uVar2 & 0xf);
        uVar1 = (int)uVar3 >> 10;
        local_2c._1_1_ = 1;
        if (iVar7 == 0 || uVar9 == uVar1) {
          if ((uVar1 < 0x80000000) || (uVar10 != 0)) {
            if (((int)uVar1 < 0) || ((uVar10 & uVar14 != uVar1 / 100) != 0)) goto LAB_0128b104;
            uVar13 = uVar13 & uVar11 != uVar1 % 100;
          }
          if (((uVar13 == 0) &&
              ((*(int *)(param_2 + 0x60) != 1 || (*(uint *)(param_2 + 100) == (uVar3 & 0x3ff) >> 4))
              )) && ((*(byte *)(param_2 + 0xa8) == 7 ||
                     (iVar7 = uVar4 + (uVar2 & 7),
                     (uint)*(byte *)(param_2 + 0xa8) ==
                     (iVar7 + ((uint)((short)iVar7 * 0x2493) >> 0x10) * -7 & 0xffff))))) {
            iVar7 = FUN_0128b444(param_2);
            goto LAB_0128b158;
          }
        }
      }
    }
    else if (*(int *)(param_2 + 0x68) == 0) {
      bVar15 = *(int *)(param_2 + 0x50) != 0;
      uVar2 = extraout_r3;
      if (bVar15) {
        uVar2 = (uint)*(byte *)(param_2 + 0xa8);
      }
      if (bVar15 && uVar2 != 7) {
        uVar6 = *(undefined4 *)(param_2 + 0x54);
      }
      else {
        bVar15 = *(int *)(param_2 + 0x58) != 0;
        if (bVar15) {
          uVar2 = (uint)*(byte *)(param_2 + 0xa8);
        }
        if (!bVar15 || uVar2 == 7) goto LAB_0128afcc;
        uVar6 = *(undefined4 *)(param_2 + 0x5c);
      }
      FUN_0128b6fc(&local_2c,uVar1,uVar6);
      if ((char)local_2c == '\x01') {
      }
      else {
        iVar7 = FUN_0128b4c4(param_2,local_28);
        uVar2 = local_28;
LAB_0128b12c:
        local_2c._1_1_ = 1;
        if (iVar7 != 0) {
          iVar7 = FUN_0128b5e0(param_2,uVar2);
          goto LAB_0128b144;
        }
      }
    }
    else {
      local_2c._1_1_ = 0;
      if ((0xfff80001 < uVar1 - 0x3ffff) && (0xfffffe91 < *(int *)(param_2 + 0x6c) - 0x16fU)) {
        puVar5 = &DAT_00405081;
        if ((int)uVar1 % 400 < 0) {
          puVar5 = &DAT_00405211;
        }
        uVar2 = *(int *)(param_2 + 0x6c) << 4 | uVar1 << 0xd | (uint)(byte)puVar5[(int)uVar1 % 400];
        if ((uVar2 & 0x1ff8) < 0x16e1) {
          iVar7 = FUN_0128b4c4(param_2,uVar2);
          goto LAB_0128b12c;
        }
      }
    }
LAB_0128b104:
    param_1[1] = local_2c._1_1_;
  }
  uVar12 = 1;
LAB_0128b10c:
  *param_1 = uVar12;
  return;
}

