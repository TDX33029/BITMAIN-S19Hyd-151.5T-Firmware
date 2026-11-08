// FUN_01261e28 @ 01261e28 size=7000 calls_out=60 calls_in=1
// strings: assertion failed: right_node.len() == 0 | assertion failed: left_node.height == right_node.height | assertion failed: old_right_len >= count

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffdf24 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01261e28(uint *param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  short sVar3;
  int *******pppppppiVar4;
  int *******pppppppiVar5;
  byte bVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  undefined *puVar14;
  int ******ppppppiVar15;
  undefined4 uVar16;
  int iVar17;
  int *******pppppppiVar18;
  int *******pppppppiVar19;
  int *******pppppppiVar20;
  char *pcVar21;
  int ******ppppppiVar22;
  int *******pppppppiVar23;
  uint uVar24;
  int iVar25;
  int *******pppppppiVar26;
  uint uVar27;
  int *******pppppppiVar28;
  uint unaff_r6;
  int *******pppppppiVar29;
  undefined4 uVar30;
  int *******pppppppiVar31;
  int iVar32;
  int *******pppppppiVar33;
  int *******pppppppiVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  int *******pppppppiVar38;
  uint uVar39;
  bool bVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  undefined8 uVar43;
  uint local_21c0;
  uint local_21b8;
  uint local_21b4;
  undefined *local_21b0;
  int local_2174;
  int *******local_213c;
  undefined *local_2134;
  int *******local_2124;
  int *******local_2118;
  int *******local_2114;
  undefined4 local_2110;
  undefined4 local_210c;
  int local_2108;
  int local_2104;
  int local_2100;
  int local_20fc;
  undefined8 local_20f8;
  int *******local_20f0;
  int *******local_20ec;
  int *******local_20e8;
  int *******local_20e4;
  int *******local_20e0;
  int *******local_20dc;
  int *******local_20d8;
  int *******local_20d4;
  int *******pppppppiStack_20d0;
  int *******pppppppiStack_20cc;
  int *******local_20c8;
  uint local_20c4;
  int local_20c0;
  uint local_20bc;
  int local_20b8;
  int *******local_20b4;
  int *******local_20b0;
  int *******local_20ac;
  undefined4 local_20a8;
  int *******local_20a4;
  int *******local_20a0;
  int *******local_209c;
  int *******local_2098;
  int *******pppppppiStack_2094;
  int *******local_2090;
  undefined4 local_208c;
  int *******local_2088;
  int *******local_2084;
  int *******local_2078;
  int *******local_2074;
  int *******local_2070;
  undefined4 local_206c;
  undefined4 local_2068;
  int *******local_2064;
  int *******local_2060;
  int *******local_205c;
  int *******local_2058;
  int *******local_2050;
  int *******local_204c;
  int *******local_2048;
  undefined4 local_2044;
  undefined4 local_2040;
  int *******local_203c;
  int *******local_2038;
  int *******local_2034;
  int *******pppppppiStack_2030;
  int *******pppppppiStack_202c;
  undefined8 local_2028;
  int *******local_2020;
  int *******local_201c;
  int *******local_2018;
  int *******local_2014;
  int *******local_2010;
  int *******pppppppiStack_200c;
  int *******local_2008;
  int *******local_2004;
  int *******local_1ff8;
  
  FUN_012609a0(&local_2028);
  if (((char)local_2028 == '\x04') || (((uint)(int *******)local_2028 & 0xff) == 4)) {
    FUN_0126117c(&local_2028,param_2);
    if (((char)local_2028 == '\x04') || (((uint)(int *******)local_2028 & 0xff) == 4)) {
      FUN_0125feac(&local_2028,param_2);
      if (((char)local_2028 == '\x04') || (((uint)(int *******)local_2028 & 0xff) == 4)) {
        iVar7 = *(int *)(param_2 + 0x2c);
        *(undefined4 *)(param_2 + 0x2c) = 0xffffffff;
        if (iVar7 != -1) {
          FUN_01bf01d6();
        }
        FUN_01260548(&local_2028,param_2);
        if ((int *******)local_2028 == (int *******)0x1) {
          local_2028._0_4_ = local_2028._4_4_;
          goto LAB_01261ef8;
        }
        piVar8 = (int *)(param_2 + 0x48);
        FUN_01268fc0(piVar8,local_2028._4_4_,(uint)local_2020 & 0xff);
        FUN_012610cc(param_2);
        local_2118 = (int *******)CONCAT31(local_2118._1_3_,4);
        local_2020 = *(int ********)(param_2 + 0x48);
        local_201c = *(int ********)(param_2 + 0x4c);
        local_2008 = *(int ********)(param_2 + 0x50);
        local_2014 = (int *******)0x0;
        if (local_2020 == (int *******)0x0) {
          local_2008 = (int *******)0x0;
        }
        local_213c = local_2118;
        bVar40 = true;
        local_2028._4_4_ = (int *******)0x0;
        local_2028._0_4_ = (int *******)(uint)(local_2020 != (int *******)0x0);
        *(undefined4 *)(param_2 + 0x40) = 0;
        local_2004 = (int *******)0x0;
        pppppppiVar31 = local_2114;
        local_2018 = (int *******)local_2028;
        local_2010 = local_2020;
        pppppppiStack_200c = local_201c;
        while( true ) {
          puVar9 = (uint *)FUN_012684c0(&local_2028);
          if ((puVar9 == (uint *)0x0) ||
             ((undefined1 *)((int)local_2008 + (int)local_2004) < *(undefined1 **)(param_2 + 0x44)))
          break;
          FUN_01260464(&local_20f8,*puVar9,(char)puVar9[1],*(undefined4 *)(param_2 + 4),
                       *(undefined4 *)(param_2 + 8));
          pppppppiVar26 = local_20f8._4_4_;
          FUN_019ac798(&local_20a8,local_20f8._4_4_,local_20f0);
          FUN_0134bd64((int *******)local_20f8,pppppppiVar26);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((uint)local_20a8 & 0xff) {
          case 0:
            if (local_20a4 != (int *******)0x2) goto LAB_0126205c;
            goto LAB_01262034;
          case 1:
            cVar2 = local_20a8._1_1_;
            break;
          case 2:
          case 3:
            cVar2 = *(char *)(local_20a4 + 2);
            break;
          default:
            goto switchD_01262008_default;
          }
          if (cVar2 == '\0') {
LAB_01262034:
            local_20f8._4_4_ = local_20a4;
            local_20f8._0_4_ = local_20a8;
            FUN_0069603c(&local_20f8);
          }
          else {
LAB_0126205c:
            local_20f8._4_4_ = local_20a4;
            local_20f8._0_4_ = local_20a8;
            if (((uint)local_213c & 0xff) == 4) {
              local_213c = local_20a8;
              pppppppiVar31 = local_20a4;
            }
            else if (((uint)local_20a8 & 0xff) != 4) {
              FUN_0069603c(&local_20f8);
            }
          }
switchD_01262008_default:
          unaff_r6 = *puVar9;
          bVar40 = false;
        }
        uVar36 = (uint)local_213c & 0xff;
        local_2118 = local_213c;
        if (bVar40) goto LAB_012625e8;
        iVar7 = *(int *)(param_2 + 0x50);
        if (iVar7 != 0) {
          if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01c253c4);
          }
          iVar32 = *(int *)(param_2 + 0x4c);
          uVar10 = FUN_006c8e68();
          uVar41 = (ulonglong)uVar10;
          *(undefined2 *)(uVar10 + 0x5e) = 0;
          *(undefined4 *)(uVar10 + 0x58) = 0;
          if (iVar32 != 0) {
            iVar25 = iVar32;
            uVar41 = (ulonglong)uVar10;
            do {
              uVar41 = FUN_0125fd10((int)uVar41,(int)(uVar41 >> 0x20));
              iVar25 = iVar25 + -1;
            } while (iVar25 != 0);
          }
          uVar30 = 0x27;
          piVar13 = piVar8;
          local_20f8 = uVar41;
          do {
            iVar35 = (int)(uVar41 >> 0x20);
            iVar17 = (int)uVar41;
            iVar37 = *piVar13;
            uVar11 = (uint)*(ushort *)(iVar37 + 0x5e);
            iVar25 = uVar11 << 3;
            uVar10 = 0;
            do {
              uVar27 = uVar10;
              if (iVar25 == 0) {
                uVar27 = uVar11;
                goto LAB_01262174;
              }
              iVar25 = iVar25 + -8;
              uVar10 = uVar27 + 1;
            } while (*(uint *)(iVar37 + uVar27 * 8) < unaff_r6);
LAB_01262174:
            if (*(short *)(iVar17 + 0x5e) != 0) {
              pcVar21 = "assertion failed: right_node.len() == 0";
              puVar14 = &DAT_01c2514c;
              goto LAB_01263768;
            }
            if (iVar32 != iVar35) {
              uVar30 = 0x37;
              puVar14 = &DAT_01c2513c;
              pcVar21 = "assertion failed: left_node.height == right_node.height";
              local_2028 = CONCAT44(local_2028._4_4_,(int *******)local_2028);
              goto LAB_01263768;
            }
            iVar32 = uVar11 - uVar27;
            if (iVar32 == 0) {
              if (iVar35 == 0) goto LAB_01262210;
            }
            else {
              *(short *)(iVar37 + 0x5e) = (short)uVar27;
              *(short *)(iVar17 + 0x5e) = (short)iVar32;
              FUN_01bed4e2(iVar17,iVar37 + uVar27 * 8,iVar32 * 8);
              if (iVar35 == 0) goto LAB_01262210;
              FUN_01bed4e2(iVar17 + 100,iVar37 + uVar27 * 4 + 100,iVar32 * 4);
              if (iVar32 != -1) {
                iVar25 = 0;
                do {
                  iVar12 = iVar25 + 1;
                  iVar25 = *(int *)(iVar17 + (iVar25 + 0x19) * 4);
                  *(short *)(iVar25 + 0x5c) = (short)iVar12;
                  *(int *)(iVar25 + 0x58) = iVar17;
                  iVar25 = iVar12;
                } while (iVar32 != iVar12);
              }
            }
            iVar32 = iVar35 + -1;
            uVar41 = CONCAT44(iVar32,*(undefined4 *)(iVar17 + 0x60));
            piVar13 = (int *)(iVar37 + uVar27 * 4 + 0x60);
          } while( true );
        }
        local_2020 = (int *******)0x0;
        local_2028._0_4_ = (int *******)0x0;
        goto LAB_012625dc;
      }
    }
  }
  local_2020 = local_2028._4_4_;
LAB_01261ef8:
  *param_1 = (uint)(int *******)local_2028;
  param_1[1] = (uint)local_2020;
  return;
code_r0x01262fe4:
  local_2124 = local_20a8;
  pppppppiVar18 = local_20a0;
  do {
    if (local_20b8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01304210(0,&local_20b8,&DAT_00533278,0);
    }
    FUN_01341298(&local_2040,&local_20f8);
    if (((char)local_2040 == '\x04') || (uVar11 = (uint)local_2040 & 0xff, uVar11 == 4)) {
      do {
        FUN_01340f5c(&local_2060,&local_20e0);
        uVar27 = local_20bc;
        uVar11 = local_20c4;
        pppppppiVar20 = local_20d8;
        pppppppiVar33 = local_20e0;
        if (((char)local_2060 != '\x04') && (((uint)local_2060 & 0xff) != 4)) {
          local_203c = local_2060;
          local_2038 = local_205c;
          goto LAB_01263120;
        }
        iVar35 = local_20c4 - local_20bc;
        iVar17 = local_20c0 + local_20bc;
        FUN_01bed93e(iVar17,0,iVar35);
        bVar6 = FUN_01341760(&local_20e0,local_2124,pppppppiVar18,iVar17,iVar35,0);
        uVar27 = (int)local_20d8 + (uVar27 - (int)pppppppiVar20);
        local_20bc = uVar11;
        if (uVar27 < uVar11) {
          local_20bc = uVar27;
        }
      } while (((int *******)((int)local_20e0 - (int)pppppppiVar33) == (int *******)0x0) &&
              (bVar6 < 2));
      pppppppiVar33 = (int *******)((int)local_20e0 - (int)pppppppiVar33);
      if (bVar6 == 3) {
        FUN_019a18a8(&local_203c,0x14,&DAT_00450e3d,0x16);
LAB_01263120:
        uVar11 = (uint)local_203c & 0xff;
        pppppppiVar33 = local_2038;
        if (uVar11 != 4) {
          pppppppiVar33 = local_203c;
          pppppppiVar20 = local_2038;
          goto LAB_01263140;
        }
      }
      if (pppppppiVar18 < pppppppiVar33) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,pppppppiVar33,pppppppiVar18,&DAT_01ce6884);
      }
      local_20e8 = (int *******)((int)local_20e8 + (int)pppppppiVar33);
      FUN_0130a5b0(&local_20f8,local_2124,pppppppiVar33);
      if (pppppppiVar33 == (int *******)0x0) {
        uVar11 = 2;
        uVar27 = 0x1d2e7;
        uVar39 = 0xb8000000;
        goto LAB_012631fc;
      }
      if (pppppppiVar18 < pppppppiVar33) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(pppppppiVar33,pppppppiVar18,pppppppiVar18,&DAT_01d2e7d0);
      }
      pppppppiVar18 = (int *******)((int)pppppppiVar18 - (int)pppppppiVar33);
      local_2124 = (int *******)((int)local_2124 + (int)pppppppiVar33);
    }
    else {
      pppppppiVar33 = local_2040;
      pppppppiVar20 = local_203c;
LAB_01263140:
      uVar39 = (uint)pppppppiVar33 >> 8 | (int)pppppppiVar20 << 0x18;
      uVar24 = (uint)pppppppiVar33 >> 8 & 0xff;
      uVar27 = (uint)pppppppiVar20 >> 8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((uint)pppppppiVar33 & 0xff) {
      case 0:
        if (pppppppiVar20 != (int *******)&SUB_00000004) goto LAB_012631fc;
        goto LAB_012631d8;
      case 1:
        break;
      default:
        uVar24 = (uint)*(byte *)(pppppppiVar20 + 2);
      }
      if (uVar24 != 0x23) {
LAB_012631fc:
        if (uVar11 != 4) {
          local_2078 = (int *******)(uVar11 | uVar39 << 8);
          local_2074 = (int *******)(uVar27 << 8 | uVar39 >> 0x18);
          goto LAB_01263248;
        }
        break;
      }
LAB_012631d8:
      FUN_0069263c(pppppppiVar33,pppppppiVar20);
    }
  } while (pppppppiVar18 != (int *******)0x0);
  local_20a0 = (int *******)0x0;
  bVar40 = CARRY4(local_21b4,(uint)pppppppiVar29);
  local_21b4 = local_21b4 + (int)pppppppiVar29;
  local_21b8 = local_21b8 + bVar40;
  goto LAB_01262f5c;
switchD_01262b44_default:
  if (local_2070 == (int *******)0x0) {
    *(undefined4 *)((uint)&local_2088 | 4) = local_2124;
    ((undefined4 *)((uint)&local_2088 | 4))[1] = local_21b4;
    local_20f8._0_4_ = local_20a8;
    local_20f8._4_4_ = local_20a4;
    local_20f0 = local_20a0;
    local_20ec = local_209c;
    local_20e8 = local_2098;
    local_20e4 = pppppppiStack_2094;
    local_20e0 = local_2090;
    local_20dc = local_208c;
    goto LAB_0126342c;
  }
  pppppppiVar18 = local_2070;
  pppppppiVar33 = local_2078;
  do {
    do {
      FUN_01341078(&local_20f8,&local_20a8);
      if (((char)local_20f8 != '\x04') && (((uint)(int *******)local_20f8 & 0xff) != 4)) {
LAB_01262d84:
        pppppppiVar20 = (int *******)local_20f8;
        pppppppiVar19 = local_20f8._4_4_;
LAB_01262d88:
        local_2068 = pppppppiVar20;
        local_2064 = pppppppiVar19;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((uint)pppppppiVar20 & 0xff) {
        case 0:
          if (pppppppiVar19 == (int *******)&SUB_00000004) goto LAB_01262dd0;
          goto LAB_01262de4;
        case 1:
          local_2068._1_1_ = (char)((uint)pppppppiVar20 >> 8);
          break;
        default:
          local_2068._1_1_ = *(char *)(pppppppiVar19 + 2);
        }
        if (local_2068._1_1_ == '#') {
LAB_01262dd0:
          FUN_0069d8a4(pppppppiVar20,pppppppiVar19);
          goto LAB_01262dd8;
        }
LAB_01262de4:
        if (((uint)pppppppiVar20 & 0xff) != 4) {
          local_2088 = pppppppiVar20;
          local_2084 = pppppppiVar19;
LAB_0126328c:
          pppppppiVar33 = local_2084;
          pppppppiVar18 = local_2088;
          FUN_01341048(&local_20a8);
          goto LAB_012632cc;
        }
        goto LAB_01262df4;
      }
      if (local_208c._1_1_ != '\0') {
        pppppppiVar20 = local_20a4;
        if (((uint)local_20a8 & 1) == 0) {
          pppppppiVar20 = pppppppiVar28;
        }
        uVar16 = FUN_01b8bd70(*pppppppiVar20,1);
        iVar17 = FUN_01b81c5c();
        if (iVar17 != 0) {
          FUN_01afbc88(&local_20f8,uVar16);
          if (((char)local_20f8 != '\x04') && (((uint)(int *******)local_20f8 & 0xff) != 4))
          goto LAB_01262d84;
        }
        local_208c._0_2_ = (ushort)(byte)local_208c;
      }
      local_2058 = (int *******)0x0;
      pppppppiVar20 = local_20a4;
      if (((uint)local_20a8 & 1) == 0) {
        pppppppiVar20 = pppppppiVar28;
      }
      local_2098 = (int *******)0x0;
      local_2044 = 0;
      local_2040 = (int *******)&local_2048;
      local_20f8._0_4_ = (int *******)&local_2060;
      local_2038 = local_20a0;
      local_2034 = (int *******)0x0;
      local_203c = local_209c;
      local_20ec = (int *******)0x0;
      local_20f8._4_4_ = pppppppiVar33;
      local_20f0 = pppppppiVar18;
      local_2060 = pppppppiVar33;
      local_205c = pppppppiVar18;
      local_2048 = (int *******)&local_20a0;
      pppppppiVar19 = (int *******)FUN_01b8ccf8(*pppppppiVar20,&local_203c,(int)&local_20f8 + 4);
      iVar17 = FUN_01b81c5c();
      pppppppiVar20 = local_2040;
      if (((int *******)local_20f8)[1] < local_20ec) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00534af4,0x2c,&DAT_01d308e4);
      }
      ((int *******)local_20f8)[2] = (int ******)local_20ec;
      pppppppiVar5 = local_2034;
      ppppppiVar15 = *pppppppiVar20;
      if (*ppppppiVar15 < local_2034) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00534af4,0x2c,&DAT_01ce68a4);
      }
      pppppppiVar20[1] = (int ******)local_2034;
      ppppppiVar15[2] = (int *****)pppppppiVar5;
      if (iVar17 == 0) {
        local_2050 = (int *******)CONCAT31(local_2050._1_3_,4);
        local_204c = pppppppiVar19;
      }
      else {
        FUN_01afbc88(&local_2050,pppppppiVar19);
        local_2090 = (int *******)0x0;
        if (((uint)local_2050 & 0xff) == 4) {
        }
        else {
          pppppppiVar20 = local_2050;
          pppppppiVar19 = local_204c;
          if (((uint)local_2050 & 0xff) != 4) goto LAB_01262d88;
        }
      }
      local_2090 = (int *******)0x0;
      if (local_204c == (int *******)0x0) {
        local_208c._0_2_ = CONCAT11(1,(byte)local_208c);
      }
    } while (local_2058 == (int *******)0x0);
    local_2068 = (int *******)CONCAT31(local_2068._1_3_,4);
    local_2064 = local_2058;
    if (pppppppiVar18 < local_2058) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(local_2058,pppppppiVar18,pppppppiVar18,&DAT_01d2e7d0);
    }
    pppppppiVar33 = (int *******)((int)pppppppiVar33 + (int)local_2058);
    pppppppiVar18 = (int *******)((int)pppppppiVar18 - (int)local_2058);
LAB_01262dd8:
  } while (pppppppiVar18 != (int *******)0x0);
LAB_01262df4:
  bVar40 = CARRY4((uint)local_2124,(uint)pppppppiVar29);
  local_2124 = (int *******)((int)local_2124 + (int)pppppppiVar29);
  local_21b4 = local_21b4 + bVar40;
  goto LAB_01262b1c;
LAB_0126342c:
  FUN_01341078(&local_2028,&local_20f8);
  if (((char)local_2028 != '\x04') && (((uint)(int *******)local_2028 & 0xff) != 4)) {
    pppppppiVar29 = (int *******)local_2028;
    pppppppiVar18 = local_2028._4_4_;
LAB_01263608:
    local_2088 = pppppppiVar29;
    local_2084 = pppppppiVar18;
    goto LAB_01263610;
  }
  if ((char)local_20dc != '\0') goto LAB_012635c0;
  local_20e8 = (int *******)0x0;
  pppppppiVar29 = local_20f8._4_4_;
  if (((uint)(int *******)local_20f8 & 1) == 0) {
    pppppppiVar29 = (int *******)((uint)&local_20f8 | 4);
  }
  local_2074 = (int *******)0x0;
  local_201c = (int *******)0x0;
  local_2020 = local_20f0;
  local_2028._4_4_ = local_20ec;
  local_2078 = (int *******)&local_20f0;
  local_2028._0_4_ = (int *******)&local_2078;
  pppppppiVar18 = (int *******)FUN_01b8cd8c(*pppppppiVar29,(int)&local_2028 + 4);
  iVar17 = FUN_01b81c5c();
  pppppppiVar29 = local_201c;
  ppppppiVar15 = *(int *******)local_2028;
  if (*ppppppiVar15 < local_201c) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00534af4,0x2c,&DAT_01ce68a4);
  }
  ((int *******)local_2028)[1] = (int ******)local_201c;
  ppppppiVar15[2] = (int *****)pppppppiVar29;
  if (iVar17 == 0) {
    local_2060 = (int *******)CONCAT31(local_2060._1_3_,4);
    local_205c = pppppppiVar18;
  }
  else {
    FUN_01afbc88(&local_2060,pppppppiVar18);
    local_20e0 = (int *******)0x0;
    if ((char)local_2060 == '\x04') {
    }
    else {
      pppppppiVar29 = local_2060;
      pppppppiVar18 = local_205c;
      if (((uint)local_2060 & 0xff) != 4) goto LAB_01263608;
    }
  }
  local_20e0 = (int *******)0x0;
  if ((local_205c != (int *******)0x0) && (local_20e8 == (int *******)0x0)) goto LAB_01263598;
  local_20dc = (int *******)CONCAT31(local_20dc._1_3_,local_205c == (int *******)0x0);
  goto LAB_0126342c;
LAB_01263598:
  FUN_019a18a8(&local_2088,0x25,&DAT_00569a28,0x10);
  bVar40 = (char)local_2088 == '\x04';
  if (bVar40) {
LAB_012635c0:
    pppppppiVar29 = local_20e4;
    pppppppiVar33 = local_20f8._4_4_;
    pppppppiVar18 = (int *******)local_20f8;
    FUN_019bb7e0(local_20f0,local_20ec);
    if (pppppppiVar18 == (int *******)0x0) {
      FUN_01b8bbd4(pppppppiVar33);
    }
LAB_01263680:
    FUN_01bf01d6(pppppppiVar29);
LAB_012632e8:
    FUN_019ac798(&local_2028,uVar30,iVar7);
    if (((char)local_2028 == '\x04') || (uVar11 = (uint)(int *******)local_2028 & 0xff, uVar11 == 4)
       ) {
      FUN_01bf01d6(pppppppiVar4);
      FUN_019bb7e0(iVar32,iVar25);
      goto LAB_0126335c;
    }
    uVar27 = (uint)(int *******)local_2028 >> 8 | (int)local_2028._4_4_ << 0x18;
    uVar39 = (uint)local_2028._4_4_ >> 8;
  }
  else {
LAB_01263610:
    pppppppiVar29 = local_2084;
    pppppppiVar18 = local_2088;
    local_2040 = local_20f0;
    local_203c = local_20ec;
    local_2038 = local_20e8;
    local_2034 = local_20e4;
    pppppppiStack_2030 = local_20e0;
    pppppppiStack_202c = local_20dc;
    if ((int *******)local_20f8 == (int *******)0x2) {
      pppppppiVar29 = local_20f8._4_4_;
      goto LAB_01263680;
    }
    local_2028._4_4_ = local_20f8._4_4_;
    local_2028._0_4_ = (int *******)local_20f8;
    local_2020 = local_20f0;
    local_201c = local_20ec;
    local_2018 = local_20e8;
    local_2014 = local_20e4;
    local_2010 = local_20e0;
    pppppppiStack_200c = local_20dc;
    local_2008 = local_2088;
    local_2004 = local_2084;
    FUN_01341048(&local_2028);
    uVar11 = (uint)pppppppiVar18 & 0xff;
    if (uVar11 == 4) goto LAB_01263680;
    uVar27 = (uint)pppppppiVar18 >> 8;
LAB_0126358c:
    uVar27 = uVar27 | (int)pppppppiVar29 << 0x18;
    uVar39 = (uint)pppppppiVar29 >> 8;
  }
LAB_01263340:
  FUN_01bf01d6(pppppppiVar4);
  FUN_019bb7e0(iVar32,iVar25);
  if (uVar11 != 4) {
LAB_0126379c:
    FUN_019bb7e0(local_2110,local_210c);
    FUN_0134c054(pppppppiVar34,pppppppiVar38,4,8);
    if (uVar36 != 4) {
      FUN_0069603c(&local_2118);
    }
    goto LAB_012626ac;
  }
LAB_0126335c:
  FUN_01269070(piVar8,ppppppiVar22,cVar2);
  FUN_019bb7e0(local_2110,local_210c);
  pppppppiVar29 = pppppppiVar23;
  if (pppppppiVar23 == pppppppiVar26) goto LAB_01262670;
  goto LAB_01262870;
LAB_01262210:
  FUN_0125fb10(piVar8);
  uVar10 = (uint)*(ushort *)(*piVar8 + 0x5e);
  if (uVar10 != 0) {
    if (*(int *)(param_2 + 0x4c) != 0) {
      local_2134 = &DAT_01d305a8;
      uVar41 = CONCAT44(*(int *)(param_2 + 0x4c),*piVar8);
      do {
        iVar32 = (int)uVar41;
        pppppppiVar29 = (int *******)(uVar10 - 1);
        pppppppiVar26 = (int *******)((int)(uVar41 >> 0x20) + -1);
        pppppppiVar34 = *(int ********)(iVar32 + (int)(pppppppiVar29 + 6) * 4);
        pppppppiVar38 = *(int ********)(iVar32 + (uVar10 + 0x18) * 4);
        uVar10 = (uint)*(ushort *)((int)pppppppiVar38 + 0x5e);
        uVar11 = (uint)*(ushort *)((int)pppppppiVar34 + 0x5e);
        local_2020 = pppppppiVar29;
        local_201c = pppppppiVar34;
        local_2018 = pppppppiVar26;
        local_2014 = pppppppiVar38;
        local_2010 = pppppppiVar26;
        local_2028 = uVar41;
        if (uVar10 + uVar11 + 1 < 0xc) {
          uVar41 = FUN_0125fb68(&local_2028);
        }
        else {
          uVar41 = CONCAT44(pppppppiVar26,pppppppiVar38);
          if (uVar10 < 6) {
            uVar27 = 6 - uVar10;
            if (uVar11 < uVar27) {
              pcVar21 = &DAT_00533acc;
              puVar14 = &DAT_01d30618;
              goto LAB_01263768;
            }
            iVar25 = uVar11 - uVar27;
            *(short *)((int)pppppppiVar34 + 0x5e) = (short)iVar25;
            *(undefined2 *)((int)pppppppiVar38 + 0x5e) = 6;
            FUN_01bed864(pppppppiVar38 + uVar27 * 2,pppppppiVar38,uVar10 << 3);
            iVar17 = uVar11 - (iVar25 + 1);
            if (iVar17 != 5 - uVar10) {
              uVar30 = 0x28;
              puVar14 = &DAT_01d305f8;
              pcVar21 = &DAT_00533a71;
              goto LAB_01263768;
            }
            FUN_01bed4e2(pppppppiVar38,pppppppiVar34 + (iVar25 + 1) * 2,iVar17 * 8);
            piVar13 = (int *)(iVar32 + (int)pppppppiVar29 * 8);
            ppppppiVar22 = (int ******)*piVar13;
            ppppppiVar15 = pppppppiVar34[iVar25 * 2];
            iVar32 = piVar13[1];
            *(undefined1 *)(piVar13 + 1) = *(undefined1 *)(pppppppiVar34 + iVar25 * 2 + 1);
            *piVar13 = (int)ppppppiVar15;
            pppppppiVar38[iVar17 * 2] = ppppppiVar22;
            *(char *)(pppppppiVar38 + iVar17 * 2 + 1) = (char)iVar32;
            uVar41 = CONCAT44(pppppppiVar26,pppppppiVar38);
            if (pppppppiVar26 != (int *******)0x0) {
              pppppppiVar29 = pppppppiVar38 + 0x18;
              FUN_01bed864(pppppppiVar29 + uVar27,pppppppiVar29,uVar10 * 4 + 4);
              FUN_01bed4e2(pppppppiVar29,pppppppiVar34 + iVar25 + 0x19,uVar27 * 4);
              iVar32 = 0;
              do {
                ppppppiVar22 = pppppppiVar38[iVar32 + 0x18];
                *(short *)(ppppppiVar22 + 0x17) = (short)iVar32;
                iVar32 = iVar32 + 1;
                ppppppiVar22[0x16] = (int *****)pppppppiVar38;
                uVar41 = CONCAT44(pppppppiVar26,pppppppiVar38);
              } while (iVar32 != 7);
            }
          }
        }
        uVar10 = (uint)*(ushort *)((int)uVar41 + 0x5e);
        if (uVar10 == 0) goto LAB_012637d4;
      } while ((int)(uVar41 >> 0x20) != 0);
    }
    FUN_0125fb10(piVar8);
  }
  FUN_0125fb10(&local_20f8);
  uVar41 = local_20f8;
  if (*(short *)((int)(int *******)local_20f8 + 0x5e) != 0) {
    if (local_20f8._4_4_ != (int *******)0x0) {
      local_2134 = &DAT_01c2512c;
      do {
        piVar13 = (int *)uVar41;
        pppppppiVar26 = (int *******)piVar13[0x18];
        pppppppiVar29 = (int *******)piVar13[0x19];
        pppppppiVar34 = (int *******)((int)(uVar41 >> 0x20) + -1);
        uVar42 = CONCAT44(pppppppiVar34,pppppppiVar26);
        uVar10 = (uint)*(ushort *)((int)pppppppiVar29 + 0x5e);
        uVar11 = (uint)*(ushort *)((int)pppppppiVar26 + 0x5e);
        local_2020 = (int *******)0x0;
        local_201c = pppppppiVar26;
        local_2018 = pppppppiVar34;
        local_2014 = pppppppiVar29;
        local_2010 = pppppppiVar34;
        local_2028 = uVar41;
        if (uVar11 + 1 + uVar10 < 0xc) {
          uVar42 = FUN_0125fb68(&local_2028);
        }
        else if (uVar11 < 6) {
          uVar27 = 6 - uVar11;
          if (uVar10 < uVar27) {
            uVar30 = 0x28;
            puVar14 = &DAT_01d2ff70;
            pcVar21 = "assertion failed: old_right_len >= count";
LAB_01263768:
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(pcVar21,uVar30,puVar14);
          }
          *(undefined2 *)((int)pppppppiVar26 + 0x5e) = 6;
          ppppppiVar22 = pppppppiVar29[(5 - uVar11) * 2];
          iVar25 = uVar10 - uVar27;
          *(short *)((int)pppppppiVar29 + 0x5e) = (short)iVar25;
          uVar1 = *(undefined1 *)(pppppppiVar29 + (5 - uVar11) * 2 + 1);
          ppppppiVar15 = (int ******)*piVar13;
          *piVar13 = (int)ppppppiVar22;
          iVar32 = piVar13[1];
          *(undefined1 *)(piVar13 + 1) = uVar1;
          pppppppiVar26[uVar11 * 2] = ppppppiVar15;
          *(char *)(pppppppiVar26 + uVar11 * 2 + 1) = (char)iVar32;
          FUN_01bed4e2(pppppppiVar26 + (uVar11 + 1) * 2,pppppppiVar29,(5 - uVar11) * 8);
          FUN_01bed864(pppppppiVar29,pppppppiVar29 + uVar27 * 2,iVar25 * 8);
          if (pppppppiVar34 != (int *******)0x0) {
            pppppppiVar34 = pppppppiVar29 + 0x18;
            FUN_01bed4e2(pppppppiVar26 + uVar11 + 0x19,pppppppiVar34,uVar27 * 4);
            FUN_01bed864(pppppppiVar34,pppppppiVar34 + uVar27,iVar25 * 4 + 4);
            iVar32 = uVar11 + 0x19;
            do {
              ppppppiVar22 = pppppppiVar26[iVar32];
              sVar3 = (short)iVar32;
              iVar32 = iVar32 + 1;
              *(short *)(ppppppiVar22 + 0x17) = sVar3 + -0x18;
              ppppppiVar22[0x16] = (int *****)pppppppiVar26;
            } while (iVar32 != 0x1f);
            iVar32 = 0;
            do {
              ppppppiVar22 = pppppppiVar29[iVar32 + 0x18];
              *(short *)(ppppppiVar22 + 0x17) = (short)iVar32;
              iVar32 = iVar32 + 1;
              ppppppiVar22[0x16] = (int *****)pppppppiVar29;
            } while (uVar10 + uVar11 + -5 != iVar32);
          }
        }
        if (*(short *)((int)uVar42 + 0x5e) == 0) {
LAB_012637d4:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(&DAT_00533a28,0x19,local_2134);
        }
        uVar41 = uVar42;
      } while ((int)(uVar42 >> 0x20) != 0);
    }
    FUN_0125fb10(&local_20f8);
    uVar41 = local_20f8;
  }
  local_20f8._4_4_ = (int *******)(uVar41 >> 0x20);
  pppppppiVar29 = local_20f8._4_4_;
  local_20f8._0_4_ = (int *******)uVar41;
  pppppppiVar26 = (int *******)local_20f8;
  if (*(int ********)(param_2 + 0x4c) < local_20f8._4_4_) {
    local_2028._0_4_ = (int *******)0x0;
    local_20f8 = uVar41;
    FUN_0125fe1c(*piVar8,*(int ********)(param_2 + 0x4c),&local_2028);
    local_2020 = (int *******)(iVar7 - (int)(int *******)local_2028);
    ppppppiVar22 = (int ******)(int *******)local_2028;
  }
  else {
    local_2028._0_4_ = (int *******)0x0;
    FUN_0125fe1c((int *******)local_20f8,local_20f8._4_4_,&local_2028);
    local_20f8 = uVar41;
    ppppppiVar22 = (int ******)(iVar7 - (int)(int *******)local_2028);
    local_2020 = (int *******)local_2028;
  }
  *(int *******)(param_2 + 0x50) = ppppppiVar22;
  local_2028._4_4_ = pppppppiVar29;
  local_2028._0_4_ = pppppppiVar26;
LAB_012625dc:
  FUN_012681c8(&local_2028);
LAB_012625e8:
  if (*(char *)(param_2 + 0xc) != '\0') {
    cVar2 = *(char *)(param_2 + 0xd);
    local_20f0 = *(int ********)(param_2 + 0x48);
    local_20ec = *(int ********)(param_2 + 0x4c);
    uVar10 = (int)*(int ********)(param_2 + 0x50) - *(int *)(param_2 + 0x10);
    local_20d4 = (int *******)(uVar10 & ~((int)uVar10 >> 0x1f));
    local_20d8 = (int *******)0x0;
    if (local_20f0 != (int *******)0x0) {
      local_20d8 = *(int ********)(param_2 + 0x50);
    }
    local_20f8._0_4_ = (int *******)(uint)(local_20f0 != (int *******)0x0);
    local_20e4 = (int *******)0x0;
    local_20f8._4_4_ = (int *******)0x0;
    local_20e8 = (int *******)local_20f8;
    local_20e0 = local_20f0;
    local_20dc = local_20ec;
    uVar43 = FUN_01268344(&local_20f8);
    if (((uint)((ulonglong)uVar43 >> 0x20) & 0xff) != 3) {
      pppppppiVar26 = (int *******)FUN_01298504(0x20,4);
      if (pppppppiVar26 == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x20);
      }
      *(char *)(pppppppiVar26 + 1) = (char)((ulonglong)uVar43 >> 0x20);
      *pppppppiVar26 = (int ******)uVar43;
      local_20a0 = (int *******)&DAT_00000001;
      local_20a8 = (int *******)&SUB_00000004;
      local_2028._0_4_ = (int *******)local_20f8;
      local_2028._4_4_ = local_20f8._4_4_;
      local_2020 = local_20f0;
      local_201c = local_20ec;
      local_2018 = local_20e8;
      local_2014 = local_20e4;
      local_2010 = local_20e0;
      pppppppiStack_200c = local_20dc;
      local_2008 = local_20d8;
      local_2004 = local_20d4;
      pppppppiVar29 = (int *******)0x0;
      local_20a4 = pppppppiVar26;
      while( true ) {
        uVar43 = FUN_01268344(&local_2028);
        pppppppiVar38 = local_20a4;
        pppppppiVar34 = local_20a8;
        pppppppiVar28 = (int *******)((int)pppppppiVar29 + 1);
        if (((uint)((ulonglong)uVar43 >> 0x20) & 0xff) == 3) break;
        if (pppppppiVar28 == local_20a8) {
          FUN_016092cc(&local_20a8,pppppppiVar28,1,4,8);
          pppppppiVar26 = local_20a4;
        }
        *(char *)(pppppppiVar26 + (int)pppppppiVar29 * 2 + 3) = (char)((ulonglong)uVar43 >> 0x20);
        pppppppiVar26[(int)pppppppiVar29 * 2 + 2] = (int ******)uVar43;
        local_20a0 = (int *******)((int)pppppppiVar29 + 2);
        pppppppiVar29 = pppppppiVar28;
      }
      uVar10 = 3;
      puVar14 = &DAT_00450e53;
      pppppppiVar26 = local_20a4 + (int)pppppppiVar28 * 2;
      if (cVar2 != '\0') {
        uVar10 = 4;
        puVar14 = &DAT_0056e75c;
      }
      pppppppiVar28 = (int *******)((uint)&local_20a8 | 4);
      local_21b0 = &DAT_01ce692c;
      pppppppiVar29 = local_20a4;
LAB_01262870:
      pppppppiVar23 = pppppppiVar29 + 2;
      ppppppiVar22 = *pppppppiVar29;
      FUN_0126520c(&local_2110,ppppppiVar22,*(undefined4 *)(param_2 + 4),
                   *(undefined4 *)(param_2 + 8));
      iVar7 = local_2108;
      uVar30 = local_210c;
      iVar32 = 0;
      if (local_2108 < 0) {
LAB_0126392c:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(iVar32,local_2174);
      }
      if (local_2108 == 0) {
        local_2174 = 1;
      }
      else {
        iVar32 = 1;
        local_2174 = FUN_01298504(local_2108,1);
        if (local_2174 == 0) {
          local_2174 = iVar7;
          goto LAB_0126392c;
        }
        iVar32 = iVar7;
      }
      FUN_01bed4e2(local_2174,uVar30,iVar7);
      local_20fc = iVar7;
      local_2104 = iVar32;
      local_2100 = local_2174;
      if ((uint)(iVar32 - iVar7) < uVar10) {
        FUN_016092cc(&local_2104,iVar7,uVar10,1,1);
      }
      iVar17 = local_20fc;
      iVar25 = local_2100;
      iVar32 = local_2104;
      FUN_01bed4e2(local_2100 + local_20fc,puVar14,uVar10);
      local_2028._0_4_ = (int *******)0x0;
      local_201c = (int *******)((uint)local_201c & 0xffff0000);
      local_2028._4_4_ = (int *******)&DAT_000001b6;
      local_2020 = (int *******)&DAT_00000001;
      local_20fc = iVar17 + uVar10;
      FUN_019a581c(&local_20f8,&local_2028,uVar30,iVar7);
      pppppppiVar4 = local_20f8._4_4_;
      pppppppiVar29 = (int *******)local_20f8;
      if (((char)local_20f8 == '\x04') ||
         (uVar11 = (uint)(int *******)local_20f8 & 0xff, uVar11 == 4)) {
        local_2028._0_4_ = (int *******)0x0;
        uVar11 = (uint)local_201c >> 8;
        local_2028._4_4_ = (int *******)&DAT_000001b6;
        local_201c = (int *******)CONCAT31((uint3)uVar11 & 0xffff00,1);
        local_2020 = (int *******)&LAB_01000100;
        FUN_019a581c(&local_20f8,&local_2028,iVar25,iVar17 + uVar10);
        pppppppiVar29 = local_20f8._4_4_;
        if (((char)local_20f8 == '\x04') ||
           (uVar11 = (uint)(int *******)local_20f8 & 0xff, uVar11 == 4)) {
          if (cVar2 == '\0') {
            FUN_018a7af8(&local_2028,10);
            pppppppiVar20 = local_2020;
            pppppppiVar33 = local_2028._4_4_;
            pppppppiVar18 = (int *******)local_2028;
            if (local_2020 == (int *******)0x0) {
              uVar16 = 0;
              pppppppiVar31 = (int *******)0x0;
            }
            else {
              *(undefined1 *)local_2028._4_4_ = 0x1f;
              if (local_2020 == (int *******)&DAT_00000001) {
                uVar16 = 1;
                local_21b0 = &DAT_01ce693c;
              }
              else {
                *(undefined1 *)((int)local_2028._4_4_ + 1) = 0x8b;
                if (local_2020 < &DAT_00000003) {
                  uVar16 = 2;
                  local_21b0 = &DAT_01ce694c;
                }
                else {
                  uVar16 = 8;
                  *(undefined1 *)((int)local_2028._4_4_ + 2) = 8;
                  if (local_2020 == (int *******)&DAT_00000003) {
                    uVar16 = 3;
                    local_21b0 = &DAT_01ce695c;
                  }
                  else {
                    *(undefined1 *)((int)local_2028._4_4_ + 3) = 0;
                    if (local_2020 < &DAT_00000005) {
                      uVar16 = 4;
                      local_21b0 = &DAT_01ce696c;
                    }
                    else {
                      *(undefined1 *)(local_2028._4_4_ + 1) = 0;
                      if (local_2020 == (int *******)&DAT_00000005) {
                        uVar16 = 5;
                        local_21b0 = &DAT_01ce697c;
                      }
                      else {
                        *(undefined1 *)((int)local_2028._4_4_ + 5) = 0;
                        if (local_2020 < &DAT_00000007) {
                          uVar16 = 6;
                          local_21b0 = &DAT_01ce698c;
                        }
                        else {
                          *(undefined1 *)((int)local_2028._4_4_ + 6) = 0;
                          if (local_2020 == (int *******)&DAT_00000007) {
                            uVar16 = 7;
                            local_21b0 = &DAT_01ce699c;
                          }
                          else {
                            *(undefined1 *)((int)local_2028._4_4_ + 7) = 0;
                            if (local_2020 < &DAT_00000009) {
                              local_21b0 = &DAT_01ce69ac;
                            }
                            else {
                              *(undefined1 *)(local_2028._4_4_ + 2) = 0;
                              if (local_2020 != (int *******)&DAT_00000009) {
                                *(undefined1 *)((int)local_2028._4_4_ + 9) = 0xff;
                                FUN_01343338(&local_2028,6);
                                iVar17 = thunk_FUN_01be5118(0x8000);
                                if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_00664620(1,0x8000);
                                }
                                local_20e0 = (int *******)local_2028;
                                local_20dc = local_2028._4_4_;
                                local_20d8 = local_2020;
                                local_20d4 = local_201c;
                                pppppppiStack_20d0 = local_2018;
                                pppppppiStack_20cc = local_2014;
                                local_20c4 = 0x8000;
                                local_20b0 = pppppppiVar33;
                                local_20c8 = pppppppiVar29;
                                local_21b4 = 0;
                                local_20a4 = (int *******)0x2000;
                                local_20a8 = (int *******)&local_2028;
                                local_20f8._4_4_ = (int *******)0x0;
                                local_20f8._0_4_ = (int *******)0x0;
                                local_20ac = pppppppiVar20;
                                local_20b4 = pppppppiVar18;
                                local_20bc = 0;
                                local_20b8 = 0;
                                local_20e8 = (int *******)0x0;
                                local_20f0 = (int *******)0x0;
                                local_209c = (int *******)0x0;
                                local_20a0 = (int *******)0x0;
                                local_21b8 = 0;
                                local_20c0 = iVar17;
LAB_01262f5c:
                                FUN_019ba410(&local_2040,pppppppiVar4,&local_20a8);
                                pppppppiVar29 = local_20a0;
                                pppppppiVar18 = local_203c;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                                switch((uint)local_2040 & 0xff) {
                                case 0:
                                  pppppppiVar18 = (int *******)&SUB_00000004;
                                  if (local_203c == (int *******)&SUB_00000004) {
LAB_01262fcc:
                                    FUN_0069263c(local_2040,pppppppiVar18);
                                    goto LAB_01262f5c;
                                  }
                                  break;
                                case 1:
                                  if (local_2040._1_1_ == '#') goto LAB_01262fcc;
                                  break;
                                case 2:
                                case 3:
                                  if (*(char *)(local_203c + 2) == '#') goto LAB_01262fcc;
                                  break;
                                default:
                                  if (local_20a0 != (int *******)0x0) goto code_r0x01262fe4;
                                  *(uint *)((uint)&local_2078 | 4) = local_21b4;
                                  ((uint *)((uint)&local_2078 | 4))[1] = local_21b8;
                                  FUN_01bed4e2(&local_2028,&local_20f8,0x50);
                                  FUN_0134136c(&local_20a8,&local_2028);
                                  pppppppiVar29 = local_1ff8;
                                  if (((char)local_20a8 == '\x04') ||
                                     (uVar11 = (uint)local_20a8 & 0xff, uVar11 == 4)) {
                                    uVar11 = 4;
                                    local_1ff8 = (int *******)&DAT_ffffffff;
                                    if (pppppppiVar29 == (int *******)&DAT_ffffffff) {
                    /* WARNING: Subroutine does not return */
                                      FUN_012fb0cc(&DAT_01ce6854);
                                    }
                                  }
                                  else {
                                    local_21c0 = (uint)local_20a8 >> 8;
                                    pppppppiVar29 = local_20a4;
                                  }
                                  FUN_01340d3c(&local_2028);
                                  if (uVar11 == 4) goto LAB_01263680;
                                  uVar27 = local_21c0 & 0xffffff;
                                  goto LAB_0126358c;
                                }
                                local_2074 = local_203c;
                                local_2078 = local_2040;
LAB_01263248:
                                pppppppiVar18 = local_2074;
                                pppppppiVar29 = local_2078;
                                FUN_01340d3c(&local_20f8);
                                uVar27 = (uint)pppppppiVar29 >> 8 | (int)pppppppiVar18 << 0x18;
                                uVar39 = (uint)pppppppiVar18 >> 8;
                                uVar11 = (uint)pppppppiVar29 & 0xff;
                                goto LAB_01263340;
                              }
                              uVar16 = 9;
                              local_21b0 = &DAT_01ce69bc;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              pppppppiVar31 = local_2020;
            }
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar16,pppppppiVar31,local_21b0);
          }
          ppppppiVar15 = (int ******)FUN_01b8beb4();
          if (ppppppiVar15 == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c(&DAT_00534ac0,0x34,&DAT_01d308d4);
          }
          uVar16 = FUN_01b88208(ppppppiVar15,100,3);
          iVar17 = FUN_01b81c5c();
          if (iVar17 == 0) {
LAB_01262a68:
            uVar16 = FUN_01b8bd30(ppppppiVar15,1,0);
            iVar17 = FUN_01b81c5c();
            if (iVar17 == 0) {
LAB_01262ab4:
              pppppppiVar18 = (int *******)thunk_FUN_01be5118(0x8000);
              if (pppppppiVar18 == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00664620(1,0x8000);
              }
              *pppppppiVar28 = ppppppiVar15;
              pppppppiVar28[1] = (int ******)0x8000;
              local_2098 = (int *******)0x0;
              pppppppiStack_2094 = pppppppiVar29;
              local_2124 = (int *******)0x0;
              local_2074 = (int *******)0x2000;
              local_2078 = (int *******)&local_2028;
              local_208c = (int *******)((uint)local_208c & 0xffff0000);
              local_2090 = (int *******)0x0;
              local_20a8 = (int *******)0x0;
              local_206c = 0;
              local_21b4 = 0;
              local_209c = pppppppiVar18;
LAB_01262b1c:
              local_2070 = (int *******)0x0;
              do {
                FUN_019ba410(&local_20f8,pppppppiVar4,&local_2078);
                pppppppiVar29 = local_2070;
                pppppppiVar18 = local_20f8._4_4_;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                switch((uint)(int *******)local_20f8 & 0xff) {
                case 0:
                  pppppppiVar18 = (int *******)&SUB_00000004;
                  if (local_20f8._4_4_ != (int *******)&SUB_00000004) {
LAB_0126327c:
                    local_2084 = local_20f8._4_4_;
                    local_2088 = (int *******)local_20f8;
                    goto LAB_0126328c;
                  }
                  break;
                case 1:
                  if (local_20f8._1_1_ != '#') goto LAB_0126327c;
                  break;
                case 2:
                case 3:
                  if (*(char *)(local_20f8._4_4_ + 2) != '#') goto LAB_0126327c;
                  break;
                default:
                  goto switchD_01262b44_default;
                }
                FUN_0069263c((int *******)local_20f8,pppppppiVar18);
              } while( true );
            }
            FUN_01afbc88(&local_2028,uVar16);
            if (((char)local_2028 == '\x04') || (((uint)(int *******)local_2028 & 0xff) == 4))
            goto LAB_01262ab4;
          }
          else {
            FUN_01afbc88(&local_2028,uVar16);
            if (((char)local_2028 == '\x04') || (((uint)(int *******)local_2028 & 0xff) == 4))
            goto LAB_01262a68;
          }
          pppppppiVar33 = local_2028._4_4_;
          pppppppiVar18 = (int *******)local_2028;
          FUN_01b8bbd4(ppppppiVar15);
          FUN_01bf01d6(pppppppiVar29);
LAB_012632cc:
          uVar27 = (uint)pppppppiVar18 >> 8 | (int)pppppppiVar33 << 0x18;
          uVar11 = (uint)pppppppiVar18 & 0xff;
          uVar39 = (uint)pppppppiVar33 >> 8;
          if (uVar11 != 4) goto LAB_01263340;
          goto LAB_012632e8;
        }
        uVar27 = (uint)(int *******)local_20f8 >> 8 | (int)local_20f8._4_4_ << 0x18;
        uVar39 = (uint)local_20f8._4_4_ >> 8;
        goto LAB_01263340;
      }
      FUN_019bb7e0(iVar32,iVar25);
      uVar27 = (uint)pppppppiVar29 >> 8 | (int)pppppppiVar4 << 0x18;
      uVar39 = (uint)pppppppiVar4 >> 8;
      goto LAB_0126379c;
    }
    pppppppiVar38 = (int *******)&SUB_00000004;
    pppppppiVar34 = (int *******)0x0;
LAB_01262670:
    FUN_0134c054(pppppppiVar34,pppppppiVar38,4,8);
  }
  if (uVar36 == 4) {
    *(undefined1 *)param_1 = 4;
  }
  else {
    uVar27 = (uint)local_213c >> 8 | (int)pppppppiVar31 << 0x18;
    uVar39 = (uint)pppppppiVar31 >> 8;
    uVar11 = uVar36;
LAB_012626ac:
    *param_1 = uVar11 | uVar27 << 8;
    param_1[1] = uVar39 << 8 | uVar27 >> 0x18;
  }
  return;
}

