// FUN_0102f4c0 @ 0102f4c0 size=1680 calls_out=4 calls_in=1
// strings: 

void FUN_0102f4c0(byte *param_1,int param_2,int *param_3)

{
  undefined1 *puVar1;
  ushort uVar2;
  uint3 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  uint local_44;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  uint local_2c;
  uint local_28;
  
  if (param_2 == 0) {
    iVar22 = param_3[1];
    if (param_3[2] != iVar22) {
      *(undefined1 *)(*param_3 + iVar22) = 0;
      param_3[1] = iVar22 + 1;
      return;
    }
    FUN_00f5f538(param_3,1);
    iVar22 = param_3[1];
    iVar14 = param_3[2];
    *(undefined1 *)(*param_3 + iVar22) = 0;
    if (iVar14 == iVar22) {
      local_28 = 0;
      local_2c = 1;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_2c);
    }
    param_3[1] = iVar22 + 1;
    return;
  }
  uVar15 = param_3[1];
  uVar20 = param_3[2];
  if (uVar20 == uVar15) {
    FUN_00f5f538(param_3,1);
    uVar10 = param_3[1];
    uVar20 = param_3[2];
    iVar22 = *param_3;
    *(undefined1 *)(iVar22 + uVar10) = 0;
    if (uVar20 == uVar10) {
      local_28 = 0;
      local_2c = 1;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_2c);
    }
  }
  else {
    iVar22 = *param_3;
    *(undefined1 *)(iVar22 + uVar15) = 0;
    uVar10 = uVar15;
  }
  uVar10 = uVar10 + 1;
  param_3[1] = uVar10;
  uVar11 = 0;
  uVar18 = 0x28;
  uVar21 = 0;
  do {
    iVar14 = (uint)*param_1 * 0x10;
    uVar18 = uVar18 - *(int *)(&DAT_0037a038 + iVar14);
    uVar19 = *(uint *)(&DAT_0037a040 + iVar14);
    uVar13 = uVar18 & 0x3f;
    uVar8 = uVar13 - 0x20;
    uVar16 = uVar19 << uVar13;
    if (-1 < (int)uVar8) {
      uVar16 = 0;
    }
    uVar16 = uVar16 | uVar11;
    uVar11 = uVar19 >> (0x20 - uVar13 & 0xff) | *(int *)(&DAT_0037a044 + iVar14) << uVar13;
    if (-1 < (int)uVar8) {
      uVar11 = uVar19 << (uVar8 & 0xff);
    }
    uVar21 = uVar11 | uVar21;
    if (uVar18 < 0x21) {
      if (uVar20 == uVar10) {
        FUN_00f5f538(param_3,1);
        uVar10 = param_3[1];
        uVar20 = param_3[2];
        iVar22 = *param_3;
        *(char *)(iVar22 + uVar10) = (char)uVar21;
        if (uVar20 == uVar10) goto LAB_0102fae0;
      }
      else {
        *(char *)(iVar22 + uVar10) = (char)uVar21;
      }
      uVar10 = uVar10 + 1;
      uVar21 = uVar16 >> 0x18;
      param_3[1] = uVar10;
      if (uVar18 < 0x19) {
        uVar7 = (undefined1)(uVar16 >> 0x18);
        if (uVar20 == uVar10) {
          FUN_00f5f538(param_3,1);
          uVar10 = param_3[1];
          uVar20 = param_3[2];
          iVar22 = *param_3;
          *(undefined1 *)(iVar22 + uVar10) = uVar7;
          if (uVar20 == uVar10) goto LAB_0102fae0;
        }
        else {
          *(undefined1 *)(iVar22 + uVar10) = uVar7;
        }
        uVar10 = uVar10 + 1;
        uVar21 = uVar16 >> 0x10;
        param_3[1] = uVar10;
        if (uVar18 < 0x11) {
          uVar7 = (undefined1)(uVar16 >> 0x10);
          if (uVar20 == uVar10) {
            FUN_00f5f538(param_3,1);
            uVar11 = param_3[1];
            uVar20 = param_3[2];
            iVar22 = *param_3;
            *(undefined1 *)(iVar22 + uVar11) = uVar7;
            if (uVar20 == uVar11) goto LAB_0102fae0;
          }
          else {
            *(undefined1 *)(iVar22 + uVar10) = uVar7;
            uVar11 = uVar10;
          }
          uVar10 = uVar11 + 1;
          uVar21 = uVar16 >> 8;
          param_3[1] = uVar10;
          if (uVar18 < 9) {
            uVar7 = (undefined1)(uVar16 >> 8);
            if (uVar20 == uVar10) {
              FUN_00f5f538(param_3,1);
              uVar10 = param_3[1];
              uVar20 = param_3[2];
              iVar22 = *param_3;
              *(undefined1 *)(iVar22 + uVar10) = uVar7;
              if (uVar20 == uVar10) goto LAB_0102fae0;
              uVar10 = uVar10 + 1;
              param_3[1] = uVar10;
            }
            else {
              *(undefined1 *)(iVar22 + uVar10) = uVar7;
              uVar10 = uVar11 + 2;
              param_3[1] = uVar10;
            }
            if (uVar18 == 0) {
              if (uVar20 == uVar10) {
                FUN_00f5f538(param_3,1);
                uVar10 = param_3[1];
                uVar20 = param_3[2];
                iVar22 = *param_3;
                *(char *)(iVar22 + uVar10) = (char)uVar16;
                if (uVar20 == uVar10) {
LAB_0102fae0:
                  local_28 = 0;
                  local_2c = 1;
                    /* WARNING: Subroutine does not return */
                  FUN_00f600c0(&local_2c);
                }
              }
              else {
                *(char *)(iVar22 + uVar10) = (char)uVar16;
              }
              uVar10 = uVar10 + 1;
              param_3[1] = uVar10;
              uVar18 = 0x28;
              uVar21 = 0;
              uVar11 = 0;
            }
            else {
              uVar18 = uVar18 | 0x20;
              uVar11 = 0;
              uVar21 = uVar16;
            }
          }
          else {
            uVar18 = uVar18 + 0x18;
            uVar11 = uVar16 << 0x18;
          }
        }
        else {
          uVar18 = uVar18 + 0x10;
          uVar11 = uVar16 << 0x10;
        }
      }
      else {
        uVar18 = uVar18 + 8;
        uVar11 = uVar16 << 8;
      }
    }
    else {
      uVar11 = uVar16;
    }
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  } while (param_2 != 0);
  if (uVar18 == 0x28) {
    uVar20 = ~uVar15 + uVar10;
  }
  else {
    bVar9 = 0xff;
    uVar11 = (uVar18 & 0x3f) - 0x20;
    if (-1 < (int)uVar11) {
      bVar9 = (byte)(-1 << (uVar11 & 0xff));
    }
    bVar9 = (byte)uVar21 | ~bVar9;
    if (uVar20 == uVar10) {
      FUN_00f5f538(param_3,1);
      uVar10 = param_3[1];
      uVar20 = param_3[2];
      *(byte *)(*param_3 + uVar10) = bVar9;
      if (uVar20 == uVar10) {
        local_28 = 0;
        local_2c = 1;
                    /* WARNING: Subroutine does not return */
        FUN_00f600c0(&local_2c);
      }
    }
    else {
      *(byte *)(iVar22 + uVar10) = bVar9;
    }
    uVar10 = uVar10 + 1;
    param_3[1] = uVar10;
    uVar20 = ~uVar15 + uVar10;
  }
  if (uVar20 < 0x7f) {
    if (uVar10 <= uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar15,uVar10,&DAT_01883190);
    }
    *(byte *)(*param_3 + uVar15) = (byte)uVar20 | 0x80;
    return;
  }
  uVar20 = uVar20 - 0x7f;
  local_32 = 0;
  uVar21 = uVar20 >> 7;
  local_34 = 0;
  local_38 = 0;
  if (uVar21 == 0) {
    puVar12 = &local_38;
    bVar6 = false;
    iVar22 = 7;
    uVar21 = uVar20;
LAB_0102f92c:
    bVar4 = false;
  }
  else {
    local_38 = (uint)(byte)((byte)uVar20 | 0x80);
    if (uVar20 < 0x4000) {
      puVar12 = (undefined4 *)((uint)&local_38 | 1);
      bVar6 = false;
      bVar4 = true;
      iVar22 = 6;
    }
    else {
      uVar2 = CONCAT11((char)uVar21,(byte)uVar20);
      local_38 = (uint)(uVar2 | 0x8080);
      uVar7 = (undefined1)(uVar20 >> 0xe);
      if (uVar20 < 0x200000) {
        puVar12 = (undefined4 *)((uint)&local_38 | 2);
        bVar6 = false;
        bVar5 = true;
        iVar22 = 5;
        bVar4 = false;
        goto LAB_0102f958;
      }
      uVar3 = CONCAT12(uVar7,uVar2);
      local_38 = (uint)(uVar3 | 0x808080);
      if (uVar20 < 0x10000000) {
        puVar12 = (undefined4 *)((uint)&local_38 | 3);
        iVar22 = 4;
        bVar6 = true;
        uVar21 = uVar20 >> 0x15;
        goto LAB_0102f92c;
      }
      local_38 = CONCAT13((char)(uVar20 >> 0x15),uVar3) | 0x80808080;
      uVar21 = uVar20 >> 0x1c;
      bVar6 = false;
      puVar12 = (undefined4 *)((uint)&local_38 | 4);
      iVar22 = 3;
      bVar4 = false;
    }
  }
  uVar7 = (undefined1)uVar21;
  bVar5 = false;
LAB_0102f958:
  iVar14 = param_3[2];
  uVar11 = 8 - iVar22;
  *(undefined1 *)puVar12 = uVar7;
  uVar18 = iVar14 - uVar10;
  uVar21 = uVar10;
  if (uVar18 < uVar11) {
    FUN_00f5f538(param_3,uVar11);
    uVar21 = param_3[1];
    uVar18 = param_3[2] - uVar21;
  }
  iVar14 = *param_3;
  FUN_016dd1aa(iVar14 + uVar21,&local_38,uVar11);
  if (uVar18 < uVar11) {
    local_2c = uVar11;
    local_28 = uVar18;
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&local_2c);
  }
  uVar21 = uVar21 + uVar11;
  param_3[1] = uVar21;
  uVar10 = uVar10 - 1;
  do {
    if (uVar21 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar10,uVar21,&DAT_01883170);
    }
    uVar11 = (uVar10 - iVar22) + 8;
    if (uVar21 <= uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar11,uVar21,&DAT_01883180);
    }
    puVar1 = (undefined1 *)(iVar14 + uVar10);
    iVar17 = (iVar14 - iVar22) + uVar10;
    uVar10 = uVar10 - 1;
    *(undefined1 *)(iVar17 + 8) = *puVar1;
  } while (uVar15 != uVar10);
  iVar22 = uVar21 - uVar15;
  bVar23 = iVar22 != 0;
  if (uVar21 < uVar15) {
    iVar22 = 0;
  }
  local_44 = uVar15;
  if (uVar21 >= uVar15 && bVar23) {
    *(undefined1 *)(iVar14 + uVar15) = 0xff;
    local_44 = uVar15 + 1;
    if (iVar22 != 1) {
      *(undefined1 *)(iVar14 + local_44) = (undefined1)local_38;
      if (uVar20 < 0x80) {
        return;
      }
      local_44 = uVar15 + 2;
      if (iVar22 != 2) {
        *(undefined1 *)(iVar14 + local_44) = local_38._1_1_;
        if (bVar4) {
          return;
        }
        local_44 = uVar15 + 3;
        if (iVar22 != 3) {
          *(undefined1 *)(iVar14 + local_44) = local_38._2_1_;
          if (bVar5) {
            return;
          }
          local_44 = uVar15 + 4;
          if (iVar22 != 4) {
            *(undefined1 *)(iVar14 + local_44) = local_38._3_1_;
            if (bVar6) {
              return;
            }
            local_44 = uVar15 + 5;
            if (iVar22 != 5) {
              *(undefined1 *)(iVar14 + local_44) = (undefined1)local_34;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(local_44,uVar21,&DAT_01883160);
}

