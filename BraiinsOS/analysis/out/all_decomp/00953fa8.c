// FUN_00953fa8 @ 00953fa8 size=2332 calls_out=23 calls_in=4
// strings: stratum2+tcpv2.stratum.braiins.comu95GEReVMjK6k5YqiSFNqqTnKU4ypU2Wm8awa6tmbmDmk1bWt | stratum+tcp | stratum2+tcp+insecure | Missing upstream authority key | a Display implementation returned an error unexpectedly | Missing upstream authority key

void FUN_00953fa8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                 undefined1 param_5)

{
  undefined2 uVar1;
  int *piVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  byte *pbVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined2 uVar16;
  byte *pbVar17;
  int iVar18;
  int iVar19;
  undefined1 uVar20;
  int iVar21;
  undefined8 uVar22;
  undefined4 *local_4e0;
  undefined1 local_4dc;
  int local_4c8;
  undefined4 local_4c0;
  undefined4 local_4bc;
  int *local_4b8;
  int *piStack_4b4;
  int *local_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined1 local_4a0;
  undefined2 local_3f8;
  undefined2 local_3f6;
  uint local_3f4;
  int local_3f0;
  uint local_3ec;
  int local_3e8;
  int local_3e4;
  undefined4 local_3e0;
  undefined1 auStack_3d8 [198];
  undefined2 local_312;
  int *local_310;
  undefined1 local_30c;
  uint local_308;
  int local_304;
  int local_300;
  int local_2fc;
  uint local_2f8;
  undefined2 local_2f4;
  undefined2 local_2f2;
  uint local_2f0;
  uint local_2e8;
  uint local_2e4;
  undefined1 local_2dc;
  uint3 local_2db;
  undefined4 *local_2d8;
  int *local_2d4;
  int *local_2d0;
  undefined1 local_2cc;
  int local_2c8;
  int local_2c4;
  undefined4 local_2c0;
  undefined1 auStack_208 [198];
  undefined2 local_142;
  int local_140;
  uint local_13c;
  int *local_138;
  int *local_134;
  int *local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined1 local_120;
  undefined2 local_76;
  undefined1 auStack_74 [12];
  int *local_68;
  int *piStack_64;
  int *piStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50;
  int *local_48;
  int *local_44;
  int *local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  
  uVar20 = 0;
  local_130 = (int *)0x0;
  local_138 = (int *)0x0;
  local_128 = 0;
  FUN_016b18bc(&local_4c0,&local_138,param_2,param_3);
  piVar11 = local_4c0;
  if (local_4c0 == (int *)&SUB_00000002) goto LAB_009548a8;
  uVar20 = (undefined1)local_4bc;
  FUN_016dd1aa((uint)&local_310 | 5,(int)&local_4bc + 1,0x43);
  iVar15 = local_2fc;
  local_30c = uVar20;
  local_310 = piVar11;
  local_4c8 = local_2fc;
  if (local_2f0 != 0) {
    puVar4 = &DAT_018af070;
    if (local_2f0 < local_2f8) {
      if (*(char *)(local_2fc + local_2f0) < -0x40) {
LAB_00954054:
        local_2e8 = 0;
        goto LAB_00954448;
      }
    }
    else if (local_2f0 != local_2f8) goto LAB_00954054;
  }
  uVar22 = FUN_016b3674(&local_310);
  iVar21 = (int)((ulonglong)uVar22 >> 0x20);
  iVar6 = (int)uVar22;
  local_13c = local_2f0;
  local_140 = iVar15;
  switch(local_2f0) {
  case 5:
    iVar6 = thunk_FUN_016dd50a(iVar15,&DAT_0034e521,5);
    if (iVar6 != 0) break;
    uVar20 = 0;
LAB_009542b4:
    uVar16 = local_76;
    FUN_016dd1aa(&local_2c8,&local_138,0xc0);
    local_142 = uVar16;
    FUN_016dd1aa(auStack_208,&local_2c8,0xc0);
    uVar1 = (undefined2)(local_2db >> 8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(local_2dc) {
    case 0:
      uVar20 = 2;
      goto LAB_00954894;
    case 1:
      puVar4 = &DAT_018aedb8;
      local_2f0 = local_2e4;
      if (local_2e4 < local_2e8) goto LAB_00954448;
      if (local_2e8 != 0) {
        if (local_2e8 < local_2f8) {
          if (*(char *)(iVar15 + local_2e8) < -0x40) goto LAB_00954448;
        }
        else if (local_2e8 != local_2f8) goto LAB_00954448;
      }
      if (local_2e4 != 0) {
        if (local_2e4 < local_2f8) {
          if (*(char *)(iVar15 + local_2e4) < -0x40) {
LAB_00954448:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(iVar15,local_2f8,local_2e8,local_2f0,puVar4);
          }
        }
        else if (local_2e4 != local_2f8) goto LAB_00954448;
      }
      local_2d8 = (undefined4 *)(iVar15 + local_2e8);
      local_2d4 = (int *)(local_2e4 - local_2e8);
      cVar3 = '\0';
      uVar13 = local_2f8;
      break;
    case 2:
      local_2d4 = (int *)(uint)(ushort)local_2db;
      local_2d8 = (undefined4 *)((uint)local_2d8 & 0xff);
      cVar3 = '\x01';
      uVar13 = (uint)local_2db;
      uVar16 = uVar1;
      break;
    case 3:
      cVar3 = '\x02';
      local_138 = local_2d0;
      local_134 = (int *)CONCAT31(local_134._1_3_,local_2cc);
      uVar13 = (uint)local_2db;
      uVar16 = uVar1;
    }
    local_4c0 = (int *)((uVar13 & 0xff) << 8);
    local_2c0 = 0;
    local_2c8 = 0;
    local_12c = 0;
    local_4b0 = local_134;
    local_130 = (int *)&DAT_60000020;
    local_4c0 = (int *)CONCAT22(uVar16,(undefined2)local_4c0);
    piStack_4b4 = local_138;
    local_4c0 = (int *)CONCAT31(local_4c0._1_3_,cVar3);
    local_2c4 = 1;
    local_134 = (int *)&DAT_01868248;
    local_4bc = local_2d8;
    local_4b8 = local_2d4;
    local_138 = &local_2c8;
    if (cVar3 == '\x02') {
      iVar6 = FUN_008fdce4(&local_2c8,&DAT_00418df9,1);
      if ((iVar6 != 0) ||
         (iVar6 = FUN_016bb784((uint)&local_4c0 | 1,&local_2c8,&DAT_01868248), iVar6 != 0))
      goto LAB_009548c8;
      iVar6 = FUN_008fdce4(&local_2c8,&DAT_00418ec5,1);
    }
    else if (cVar3 == '\x01') {
      iVar6 = FUN_00fb974c((uint)&local_4c0 | 1,&local_138);
    }
    else {
      iVar6 = FUN_00faace8(&local_138);
    }
    uVar9 = local_2c0;
    iVar5 = local_2c4;
    iVar21 = local_2c8;
    if (iVar6 != 0) {
LAB_009548c8:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_48,
                   &DAT_01868260,&DAT_018af130);
    }
    if ((local_308 & 1) == 0) {
      uVar12 = 0x80000000;
      uVar13 = local_2f8;
      iVar6 = local_2c4;
    }
    else {
      uVar14 = local_304 + 1;
      if (local_304 != -1) {
        if (uVar14 < local_2f8) {
          if (*(char *)(iVar15 + uVar14) < -0x40) {
LAB_009545a0:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(iVar15,local_2f8,uVar14,local_2f8,&DAT_018af080);
          }
        }
        else if (local_2f8 != uVar14) goto LAB_009545a0;
      }
      uVar13 = local_2f8 - uVar14;
      uVar7 = 0;
      if ((int)uVar13 < 0) {
LAB_009545ec:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar7,uVar13);
      }
      if (uVar13 == 0) {
        iVar6 = 1;
        uVar12 = 0;
      }
      else {
        iVar6 = thunk_FUN_016d4a50(uVar13);
        uVar12 = uVar13;
        if (iVar6 == 0) {
          uVar7 = 1;
          goto LAB_009545ec;
        }
      }
      FUN_016dd1aa(iVar6,iVar15 + uVar14,uVar13);
    }
    local_312 = local_142;
    FUN_016dd1aa(auStack_3d8,auStack_208,0xc0);
    if (local_300 != 0) {
      thunk_FUN_016d3fb4(iVar15);
    }
    if (iVar21 != -0x80000000) {
      local_4c0._0_2_ = CONCAT11(local_4dc,(undefined1)local_4c0);
      local_4c0 = (int *)CONCAT22(local_312,(undefined2)local_4c0);
      local_4bc = local_4e0;
      FUN_016dd1aa(&local_4b8,auStack_3d8,0xc0);
      local_3e0 = uVar9;
      local_3e4 = iVar5;
      local_3f6 = local_2f2;
      local_3f8 = local_2f4;
      iVar15 = param_4[1];
      local_3e8 = iVar21;
      local_4c0 = (int *)CONCAT31(local_4c0._1_3_,uVar20);
      local_3f4 = uVar12;
      local_3f0 = iVar6;
      local_3ec = uVar13;
      if (iVar15 < 0) {
        uVar9 = 0;
LAB_009546f0:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar9,iVar15);
      }
      iVar6 = *param_4;
      if (iVar15 == 0) {
        iVar21 = 0;
        iVar5 = 1;
      }
      else {
        iVar5 = thunk_FUN_016d4a50(iVar15);
        if (iVar5 == 0) {
          uVar9 = 1;
          goto LAB_009546f0;
        }
        iVar21 = iVar15;
      }
      FUN_016dd1aa(iVar5,iVar6,iVar15);
      iVar18 = param_4[2];
      if (iVar18 == 0) {
        iVar19 = -0x80000000;
      }
      else {
        iVar6 = param_4[3];
        if (iVar6 < 0) {
          uVar9 = 0;
LAB_0095475c:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar9,iVar6);
        }
        if (iVar6 == 0) {
          iVar19 = 0;
          local_4c8 = 1;
        }
        else {
          local_4c8 = thunk_FUN_016d4a50(iVar6);
          if (local_4c8 == 0) {
            uVar9 = 1;
            goto LAB_0095475c;
          }
          iVar19 = iVar6;
        }
        FUN_016dd1aa(local_4c8,iVar18,iVar6);
      }
      param_1[0x36] = local_3f4;
      param_1[0x37] = local_3f0;
      param_1[0x38] = local_3ec;
      param_1[0x3e] = local_3e0;
      param_1[0x3c] = local_3e8;
      param_1[0x3d] = local_3e4;
      FUN_016dd1aa(param_1,&local_4c0,200);
      *(undefined1 *)(param_1 + 0x3f) = param_5;
      param_1[0x34] = local_4c8;
      *(undefined2 *)((int)param_1 + 0xca) = local_2f2;
      param_1[0x39] = iVar21;
      param_1[0x3a] = iVar5;
      param_1[0x3b] = iVar15;
      param_1[0x33] = iVar19;
      param_1[0x35] = iVar6;
      *(undefined2 *)(param_1 + 0x32) = local_2f4;
      return;
    }
    goto LAB_009548a8;
  case 0xb:
    iVar6 = thunk_FUN_016dd50a(iVar15,"stratum+tcp",0xb);
    if (iVar6 == 0) {
      uVar20 = 1;
      goto LAB_009542b4;
    }
    break;
  case 0xc:
    iVar5 = thunk_FUN_016dd50a(iVar15,
                               "stratum2+tcpv2.stratum.braiins.comu95GEReVMjK6k5YqiSFNqqTnKU4ypU2Wm8awa6tmbmDmk1bWt"
                               ,0xc);
    if (iVar5 != 0) break;
    iVar5 = 0;
    do {
      iVar18 = iVar5;
      if (iVar21 == iVar18) {
        puVar8 = (undefined4 *)FUN_009337b0("Missing upstream authority key",0x1e);
        goto LAB_00954210;
      }
      pbVar10 = (byte *)(iVar6 + iVar18);
      pbVar17 = pbVar10 + 1;
      uVar13 = (uint)*pbVar10;
      if (0x7fffffff < (uint)(int)(char)*pbVar10) {
        if (uVar13 < 0xe0) {
          uVar13 = pbVar10[1] & 0x3f | (uVar13 & 0x1f) << 6;
          pbVar17 = pbVar10 + 2;
        }
        else {
          uVar12 = pbVar10[2] & 0x3f | (pbVar10[1] & 0x3f) << 6;
          if (uVar13 < 0xf0) {
            uVar13 = uVar12 | (uVar13 & 0x1f) << 0xc;
            pbVar17 = pbVar10 + 3;
          }
          else {
            pbVar17 = pbVar10 + 4;
            uVar13 = pbVar10[3] & 0x3f | uVar12 << 6 | (uVar13 & 7) << 0x12;
          }
        }
      }
      iVar5 = (int)pbVar17 - iVar6;
    } while (uVar13 == 0x2f);
    FUN_01128110(&local_4c0,pbVar10,iVar21 - iVar18);
    if (((uint)local_4c0 & 1) == 0) {
      local_4dc = (undefined1)((uint)local_4c0 >> 8);
      local_4e0 = local_4bc;
      uVar20 = 3;
      local_76 = local_4c0._2_2_;
      local_48 = local_4b8;
      local_44 = piStack_4b4;
      local_40 = local_4b0;
      uStack_3c = uStack_4ac;
      uStack_38 = uStack_4a8;
      uStack_34 = uStack_4a4;
      local_30 = local_4a0;
      local_68 = local_4b8;
      piStack_64 = piStack_4b4;
      piStack_60 = local_4b0;
      uStack_5c = uStack_4ac;
      uStack_58 = uStack_4a8;
      uStack_54 = uStack_4a4;
      local_50 = local_4a0;
      local_138 = local_4b8;
      local_134 = piStack_4b4;
      local_130 = local_4b0;
      local_12c = uStack_4ac;
      local_128 = uStack_4a8;
      uStack_124 = uStack_4a4;
      local_120 = local_4a0;
      goto LAB_009542b4;
    }
    puVar8 = (undefined4 *)FUN_00954a3c();
LAB_00954210:
    (**(code **)*puVar8)();
    uVar22 = FUN_0095b144(iVar6,iVar21);
    piVar11 = (int *)((ulonglong)uVar22 >> 0x20);
    if (piVar11 == (int *)0x0) {
      puVar8 = (undefined4 *)FUN_009337b0("Missing upstream authority key",0x1e);
    }
    else {
      FUN_00933588(&local_48,piVar11,1,1);
      piVar2 = local_44;
      if (local_48 == (int *)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(local_44,local_40);
      }
      FUN_016dd1aa(local_40,(int)uVar22,piVar11);
      local_44 = local_40;
      local_48 = piVar2;
      local_40 = piVar11;
      FUN_0110e108(&local_4c0,&local_48);
      if (local_4c0 != (int *)&DAT_00000001) {
        FUN_016dd1aa(&local_138,&local_4b8,0xc0);
        uVar20 = 2;
        goto LAB_009542b4;
      }
      puVar8 = (undefined4 *)FUN_00954a70((uint)local_4bc & 0xff,local_4b8);
    }
    goto LAB_00954884;
  case 0x15:
    iVar6 = thunk_FUN_016dd50a(iVar15,"stratum2+tcp+insecure",0x15);
    if (iVar6 == 0) {
      uVar20 = 4;
      goto LAB_009542b4;
    }
  }
  local_4c0 = &local_140;
  local_4bc = &DAT_0157d360;
  FUN_00600d2c(auStack_74,&DAT_0056cae5,&local_4c0);
  puVar8 = (undefined4 *)FUN_009337e4(auStack_74);
LAB_00954884:
  (**(code **)*puVar8)();
  uVar20 = 1;
LAB_00954894:
  if (local_300 != 0) {
    thunk_FUN_016d3fb4(local_2fc);
  }
LAB_009548a8:
  uVar9 = FUN_00933944(uVar20);
  *param_1 = uVar9;
  param_1[0x3c] = 0x80000000;
  return;
}

