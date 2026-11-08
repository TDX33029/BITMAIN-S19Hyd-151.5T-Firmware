// FUN_0062ca8c @ 0062ca8c size=2624 calls_out=11 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0062ca8c(undefined4 *param_1,undefined4 *param_2,uint *param_3)

{
  undefined1 uVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  bool bVar11;
  int *local_330;
  uint *local_32c;
  int *local_324;
  uint *local_320;
  int *local_31c;
  uint *local_318;
  uint *local_314;
  int *local_310;
  int *local_30c;
  int local_308;
  uint local_304;
  uint *local_300;
  int *local_2fc;
  uint *local_2f8;
  uint *local_2dc;
  uint *local_2d4;
  undefined4 local_2d0;
  int *local_2cc;
  uint *local_2c8;
  int *local_2c4;
  uint local_2c0;
  uint local_2bc;
  undefined1 auStack_2b8 [88];
  int local_260;
  undefined4 local_25c;
  int local_254;
  undefined4 local_250;
  int local_248;
  undefined4 local_244;
  int local_23c;
  undefined4 local_238;
  uint local_218;
  uint local_214;
  uint local_210;
  uint local_20c;
  uint *local_208;
  int *local_204;
  uint local_200;
  uint local_1fc;
  undefined4 local_1f8;
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  uint local_1e8;
  uint *local_1e4;
  uint local_1e0;
  uint *local_1dc;
  uint *local_1d8;
  int *local_1d4;
  int *local_1d0;
  uint *local_1cc;
  uint *local_1c8;
  uint *local_1c4;
  uint *local_1c0;
  uint *local_1b8;
  int *piStack_1b4;
  uint *local_1b0;
  int *local_1ac;
  uint **local_1a8;
  uint *local_1a0;
  int *local_19c;
  uint *local_198;
  int *local_194;
  uint *local_190;
  int *local_18c;
  uint *local_188;
  int *local_184;
  uint local_180;
  uint local_17c;
  uint *local_178;
  int *local_174;
  uint *local_170;
  int *local_16c;
  int *local_168 [3];
  uint *local_15c;
  undefined4 local_154;
  undefined4 local_d8;
  int *local_d4;
  uint *local_d0;
  int *local_cc;
  uint *local_c8;
  int *local_c4;
  uint *local_38;
  int *local_34;
  uint *local_30;
  int *local_2c;
  
  FUN_006147d8(&local_2d0,param_2[0x1b],param_2[0x1c],*param_2,param_2[1],param_3[10]);
  piVar3 = local_2cc;
  if ((char)local_2d0 != 'O') {
    *(undefined2 *)((int)param_1 + 9) = local_2d0._1_2_;
    param_1[4] = local_2c8;
    param_1[5] = local_2c4;
    *param_1 = 2;
    *(undefined1 *)((int)param_1 + 0xb) = local_2d0._3_1_;
    param_1[1] = 0;
    param_1[3] = local_2cc;
    *(char *)(param_1 + 2) = (char)local_2d0;
    return;
  }
  local_200 = param_3[6];
  local_2c8 = (uint *)param_3[4];
  local_2c4 = (int *)param_3[5];
  local_1fc = param_3[7];
  local_20c = param_3[3];
  local_214 = param_3[1];
  local_210 = param_3[2];
  local_1f8 = param_3[8];
  local_1f4 = param_3[9];
  local_1f0 = param_3[10];
  local_2d0 = (uint)(local_210 - 3 < 2);
  local_218 = *param_3;
  local_1ec = param_3[0xb];
  local_1d8 = (uint *)0x0;
  local_1cc = (uint *)&DAT_00000008;
  local_1c4 = (uint *)&DAT_0000000c;
  local_178 = &local_218;
  if ((local_1f8 & 0xff00) == 0x800) {
    local_1cc = (uint *)&DAT_00000010;
    local_1c4 = (uint *)&DAT_00000014;
  }
  bVar11 = (4 < local_1f8 >> 0x10 & *(byte *)(param_2 + 0x1e)) == 0;
  if (bVar11) {
    local_1cc = (uint *)0x0;
  }
  local_1d4 = (int *)0x0;
  local_2c0 = 0x2f;
  local_174 = local_2cc + 2;
  local_1e0 = 0;
  local_1e8 = 0;
  if (bVar11) {
    local_1c4 = (uint *)0x0;
  }
  local_2bc = 0;
  local_1c8 = (uint *)0x0;
  local_2cc = (int *)0x0;
  local_154 = 0;
  local_170 = (uint *)0x0;
  local_1d0 = piVar3;
  local_208 = local_2c8;
  local_204 = local_2c4;
  local_1c0 = local_1c4;
  local_180 = local_200;
  local_17c = local_1fc;
  do {
    FUN_006096b4(&local_d8,&local_180);
    if ((char)local_d8 != 'O') {
      local_1b8 = (uint *)CONCAT22(local_1b8._2_2_,local_d8._2_2_);
      *(undefined1 *)((int)param_1 + 9) = local_d8._1_1_;
      *(undefined2 *)((int)param_1 + 10) = local_d8._2_2_;
      param_1[3] = local_d4;
      param_1[4] = local_d0;
      param_1[5] = local_cc;
      cVar4 = (char)local_d8;
      goto LAB_0062cd18;
    }
  } while ((((uint)local_d8 & 0x100) != 0) && (local_170 == (uint *)0x0));
  if (local_170 == (uint *)0x0) {
    cVar4 = 'E';
LAB_0062cd18:
    *(char *)(param_1 + 2) = cVar4;
    *param_1 = 2;
    param_1[1] = 0;
    goto LAB_0062cd28;
  }
  if (*local_168[0] == 1) {
    local_1b0 = (uint *)local_168[0][2];
    piVar9 = (int *)local_168[0][3];
  }
  else {
    piVar9 = (int *)local_168[0][1];
    if (&DAT_00000005 < piVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,piVar9,5,&DAT_01882304);
    }
    local_1b0 = (uint *)(local_168[0] + 2);
  }
  local_1a8 = &local_170;
  local_1b8 = local_170;
  piStack_1b4 = local_16c;
  local_1ac = piVar9;
  if (piVar9 == (int *)0x0) {
    local_30c = (int *)0x0;
    local_2f8 = (uint *)&DAT_0000002e;
    local_2d4 = (uint *)0x0;
    local_2fc = (int *)0x0;
    local_2dc = (uint *)&DAT_0000002e;
    puVar8 = (uint *)0x62cc4c;
    puVar2 = (uint *)&DAT_0000002e;
    piVar9 = (int *)0x0;
    local_1a0 = local_190;
    local_19c = local_18c;
    local_198 = local_188;
    local_194 = local_184;
  }
  else {
    local_304 = local_2d0;
    local_308 = (int)local_2cc;
    local_310 = (int *)0x0;
    local_314 = (uint *)&DAT_0000002e;
    local_2dc = (uint *)&DAT_0000002e;
    local_30c = (int *)0x0;
    local_2f8 = (uint *)&DAT_0000002e;
    local_2fc = (int *)0x0;
    local_2d4 = (uint *)0x0;
    puVar8 = local_1b0;
    do {
      piVar9 = (int *)((int)piVar9 + -1);
      local_2c = (int *)puVar8[3];
      local_30 = (uint *)puVar8[2];
      local_34 = (int *)puVar8[1];
      local_38 = (uint *)*puVar8;
      FUN_006067fc(&local_d8,&local_1b8,local_1a8[3][8],&local_38);
      if (local_d8 == (uint *)&DAT_0000002e && local_d4 == (int *)0x0) {
        local_1a0 = local_d0;
        local_19c = local_cc;
        local_198 = local_c8;
        local_194 = local_c4;
        *param_1 = 2;
        param_1[1] = 0;
        param_1[2] = local_d0;
        param_1[3] = local_cc;
        param_1[4] = local_c8;
        param_1[5] = local_c4;
        goto LAB_0062cd28;
      }
      local_1a0 = local_d0;
      local_19c = local_cc;
      local_198 = local_c8;
      local_194 = local_c4;
      uVar5 = (uint)local_c8 & 0xffff;
      local_1ac = piVar9;
      local_1b0 = puVar8 + 4;
      local_184 = local_c4;
      local_188 = local_c8;
      if (uVar5 < 0x72) {
        switch(uVar5) {
        case 3:
          FUN_0060872c(&local_38,&local_d8);
          local_32c = local_30;
          local_330 = local_2c;
          local_314 = local_38;
          local_310 = local_34;
          break;
        case 0x10:
          FUN_0060872c(&local_38,&local_d8);
          if (((uint)local_38 ^ 0x10) == 0 && local_34 == (int *)0x0) {
            local_300 = local_30;
          }
          local_2d4 = (uint *)((uint)(((uint)local_38 ^ 0x10) == 0 && local_34 == (int *)0x0) |
                              (uint)local_2d4);
          break;
        case 0x11:
          FUN_0060872c(&local_38,&local_d8);
          local_320 = local_30;
          local_324 = local_2c;
          local_2f8 = local_38;
          local_2fc = local_34;
          break;
        case 0x1b:
          FUN_0060872c(&local_38,&local_d8);
          local_318 = local_30;
          local_31c = local_2c;
          local_2dc = local_38;
          local_30c = local_34;
        }
      }
      else if (uVar5 < 0x2131) {
        switch(uVar5) {
        case 0x72:
          FUN_0060872c(&local_38,&local_d8);
          if (local_38 == (uint *)&DAT_0000001c && local_34 == (int *)0x0) {
            local_1cc = local_30;
          }
          break;
        case 0x73:
switchD_0062cf34_caseD_73:
          FUN_0060872c(&local_38,&local_d8);
          if (local_38 == (uint *)&DAT_0000000b && local_34 == (int *)0x0) {
            local_1c8 = local_30;
          }
          break;
        case 0x74:
switchD_0062cf34_caseD_74:
          FUN_0060872c(&local_38,&local_d8);
          if (local_38 == (uint *)&DAT_00000017 && local_34 == (int *)0x0) {
            local_1c0 = local_30;
          }
          break;
        case 0x8c:
          FUN_0060872c(&local_38,&local_d8);
          if (local_38 == (uint *)&DAT_00000012 && local_34 == (int *)0x0) {
            local_1c4 = local_30;
          }
        }
      }
      else {
        if (uVar5 == 0x2133) goto switchD_0062cf34_caseD_73;
        if (uVar5 == 0x2132) goto switchD_0062cf34_caseD_74;
        iVar6 = 0x2131;
        uVar7 = uVar5;
        if (uVar5 == 0x2131) {
          iVar6 = local_308;
          uVar7 = local_304;
        }
        if (uVar5 == 0x2131 && (uVar7 == 0 && iVar6 == 0)) {
          FUN_0060872c(&local_38,&local_d8);
          local_304 = 0;
          local_308 = 0;
          if (local_38 == (uint *)&DAT_0000002d && local_34 == (int *)0x0) {
            local_2c8 = local_30;
            local_2c4 = local_2c;
            local_2cc = (int *)0x0;
            local_308 = 0;
            local_2d0 = 1;
            local_304 = 1;
          }
        }
      }
      puVar8 = puVar8 + 4;
    } while (piVar9 != (int *)0x0);
    local_15c = local_1a8[5];
    puVar8 = local_32c;
    puVar2 = local_314;
    piVar9 = local_310;
    piVar3 = local_330;
    local_1a0 = local_190;
    local_19c = local_18c;
    local_198 = local_188;
    local_194 = local_184;
  }
  local_184 = piVar3;
  local_18c = piVar9;
  local_190 = puVar2;
  local_188 = puVar8;
  if (local_15c == (uint *)0x0) {
    local_1a8[5] = (uint *)0x1;
    local_1a8[6] = (uint *)((int)local_1b8 - (int)*local_1a8);
  }
  if (local_190 == (uint *)&DAT_0000002e && local_18c == (int *)0x0) {
    puVar8 = &local_2c0;
    uVar5 = 0;
    local_190 = local_1a0;
    local_18c = local_19c;
    local_188 = local_198;
    local_184 = local_194;
  }
  else {
    local_1f8._1_1_ = (undefined1)(local_1f8 >> 8);
    uVar1 = local_1f8._1_1_;
    FUN_00611d9c(&local_180,param_2,uVar1,local_1cc,&local_190);
    puVar8 = local_178;
    uVar5 = local_17c;
    if ((char)local_180 != 'O') {
      uVar5 = 0;
    }
  }
  local_1e4 = puVar8;
  local_1e8 = uVar5;
  if (local_2dc == (uint *)&DAT_0000002e && local_30c == (int *)0x0) {
    uVar7 = 0x2f;
    local_1e0 = 0;
    if (local_2d4 == (uint *)0x0) {
      uVar10 = 0;
    }
    else {
LAB_0062d34c:
      FUN_0060a058(&local_180,param_2[8],param_2[9],local_300,local_1f8 & 0xff,local_1e0,local_2d4,
                   uVar5,puVar8);
      uVar10 = local_17c;
      uVar7 = local_180;
      local_1b8 = local_178;
      piStack_1b4 = local_174;
      local_1b0 = local_170;
      local_1ac = local_16c;
      if (local_180 == 0x2f && local_17c == 0) {
        *param_1 = 2;
        param_1[1] = 0;
        param_1[2] = local_178;
        param_1[3] = local_174;
        param_1[4] = local_170;
        param_1[5] = local_16c;
        goto LAB_0062cd28;
      }
      FUN_016dd1aa(&local_c8,local_168,0x90);
      local_d8 = local_1b8;
      local_d4 = piStack_1b4;
      local_d0 = local_1b0;
      local_cc = local_1ac;
    }
  }
  else {
    local_38 = local_2dc;
    local_34 = local_30c;
    local_30 = local_318;
    local_2c = local_31c;
    FUN_00611d9c(&local_180,param_2,local_1f8._1_1_,local_1cc,&local_38);
    uVar10 = 0;
    uVar7 = 0x2f;
    local_1e0 = local_17c;
    if ((char)local_180 != 'O') {
      local_1e0 = 0;
    }
    local_1dc = local_178;
    bVar11 = local_2d4 != (uint *)0x0;
    local_2d4 = local_178;
    if (bVar11) goto LAB_0062d34c;
  }
  if (local_2c0 != 0x2f || local_2bc != 0) {
    if (local_260 != 0) {
      thunk_FUN_016d3fb4(local_25c);
    }
    if (local_254 != 0) {
      thunk_FUN_016d3fb4(local_250);
    }
    if (local_248 != 0) {
      thunk_FUN_016d3fb4(local_244);
    }
    if (local_23c != 0) {
      thunk_FUN_016d3fb4(local_238);
    }
  }
  local_2c0 = uVar7;
  local_2bc = uVar10;
  FUN_016dd1aa(auStack_2b8,&local_d8,0xa0);
  if (local_2f8 != (uint *)&DAT_0000002e || local_2fc != (int *)0x0) {
    local_1b8 = local_2f8;
    piStack_1b4 = local_2fc;
    local_1b0 = local_320;
    local_1ac = local_324;
    FUN_00611fb0(&local_180,param_2[2],param_2[3],local_1f8 & 0xff,local_1c8,&local_1b8);
    if ((local_180 & 1) != 0) {
      *param_1 = 2;
      param_1[1] = 0;
      param_1[2] = local_178;
      param_1[3] = local_174;
      param_1[4] = local_170;
      param_1[5] = local_16c;
LAB_0062cd28:
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *local_1d0;
        bVar11 = (bool)hasExclusiveAccess(local_1d0);
      } while (!bVar11);
      *local_1d0 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00614130(local_1d0);
      }
      if (local_2c0 != 0x2f || local_2bc != 0) {
        if (local_260 != 0) {
          thunk_FUN_016d3fb4(local_25c);
        }
        if (local_254 != 0) {
          thunk_FUN_016d3fb4(local_250);
        }
        if (local_248 != 0) {
          thunk_FUN_016d3fb4(local_244);
        }
        if (local_23c != 0) {
          thunk_FUN_016d3fb4(local_238);
          return;
        }
      }
      return;
    }
    if (((uint)local_178 & 1) != 0) {
      local_1d8 = local_170;
      local_1d4 = local_16c;
    }
  }
  FUN_016dd1aa(param_1,&local_2d0,0x118);
  return;
}

