// FUN_01a48be8 @ 01a48be8 size=2772 calls_out=15 calls_in=1
// strings: digit | hexadecimal integer | hexadecimal integer | octal integer | digit | octal integer

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01a48be8(int *param_1,int param_2)

{
  char cVar1;
  uint3 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  uint uVar11;
  uint local_128;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  undefined1 *local_e8;
  undefined *local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  char *local_cc;
  undefined4 local_c8;
  char *local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  char *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  char *local_ac;
  undefined4 local_a8;
  int local_a0;
  char *pcStack_9c;
  int iStack_98;
  char *local_90;
  uint local_8c;
  int local_88;
  char *local_84;
  int local_7c;
  char **ppcStack_78;
  undefined4 uStack_74;
  int local_60;
  char **ppcStack_5c;
  undefined4 uStack_58;
  undefined4 local_40;
  char *local_3c;
  int local_38;
  int local_34;
  char **local_30;
  undefined4 uStack_2c;
  
  uVar11 = *(uint *)(param_2 + 0xc);
  pcVar10 = *(char **)(param_2 + 8);
  piVar9 = param_1 + 2;
  if (uVar11 < 2) {
    FUN_0134aee0(0,4,4,0xc);
    FUN_012d40d0(0);
    *(char **)(param_2 + 8) = pcVar10;
    *(uint *)(param_2 + 0xc) = uVar11;
LAB_01a48d74:
    FUN_01a48800(&local_e0,param_2);
    if (local_e0 != 3) {
      param_1[3] = local_d4;
      param_1[4] = local_d0;
      param_1[5] = (int)local_cc;
      *param_1 = local_e0;
      param_1[1] = local_dc;
      param_1[2] = local_d8;
      return;
    }
    FUN_01a497c8(&local_e0);
    FUN_01a49970(&local_40,local_dc,local_d8,10);
    FUN_0134bd64(local_e0,local_dc);
    if ((char)local_40 != '\0') {
      local_d4 = 0;
      local_d8 = 0;
      local_e0 = 0;
      local_dc = 4;
      puVar5 = (undefined1 *)thunk_FUN_01be5118(1);
      if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(1,1);
      }
      *puVar5 = local_40._1_1_;
      FUN_012d40d0(0);
      *param_1 = 2;
      *piVar9 = local_dc;
      param_1[3] = local_d8;
      param_1[4] = (int)puVar5;
      param_1[5] = (int)&DAT_01d2c028;
      *(char **)(param_2 + 8) = pcVar10;
      *(uint *)(param_2 + 0xc) = uVar11;
      param_1[1] = 0;
      return;
    }
  }
  else {
    *(char **)(param_2 + 8) = pcVar10;
    *(uint *)(param_2 + 0xc) = uVar11;
    if (*pcVar10 != '0') goto LAB_01a48d74;
    cVar1 = pcVar10[1];
    local_90 = pcVar10;
    local_8c = uVar11;
    if (cVar1 == 'b') {
      local_d4 = 0;
      local_dc = 0;
      local_c0 = 5;
      local_ac = "binary integer";
      local_c4 = "digit";
      local_cc = (char *)CONCAT31(local_cc._1_3_,0x5f);
      local_b0 = 3;
      local_d0 = CONCAT13(local_d0._3_1_,0x313000);
      local_bc = CONCAT13(local_bc._3_1_,0x313000);
      local_c8 = 2;
      local_b4 = 2;
      local_a8 = 0xe;
      local_b8 = "0b";
      local_e0 = CONCAT13(local_e0._3_1_,0x313000);
      local_a0 = 3;
      pcStack_9c = "binary integer";
      iStack_98 = 0xe;
      FUN_01a45090(&local_40,param_2,"0b",2);
      if (local_40 == 3) {
        iVar8 = *(int *)(param_2 + 8);
        uVar7 = *(uint *)(param_2 + 0xc);
        FUN_01a47c80(&local_40,0x30,0x31,param_2);
        if (local_40 != 3) {
LAB_01a4932c:
          if (local_40 == 1) {
            local_40 = 2;
          }
          local_60 = local_34;
          ppcStack_5c = local_30;
          uStack_58 = uStack_2c;
          goto LAB_01a4935c;
        }
        FUN_01a46664(&local_40,&local_d0,param_2);
        if (local_40 != 3) {
          goto LAB_01a4932c;
        }
        iVar4 = *(int *)(param_2 + 8);
        *(int *)(param_2 + 8) = iVar8;
        uVar6 = iVar4 - iVar8;
        *(uint *)(param_2 + 0xc) = uVar7;
        if (uVar7 < uVar6) {
LAB_01a49684:
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d2c054);
        }
        *(uint *)(param_2 + 8) = iVar8 + uVar6;
        *(uint *)(param_2 + 0xc) = uVar7 - uVar6;
        local_f4 = iVar8;
      }
      else {
LAB_01a4935c:
        local_7c = local_34;
        ppcStack_78 = local_30;
        uStack_74 = uStack_2c;
        local_38 = iStack_98;
        local_30 = &local_90;
        local_88 = local_40;
        local_84 = local_3c;
        local_40 = local_a0;
        local_3c = pcStack_9c;
        local_34 = param_2;
        FUN_01a5cbd0(&local_f8,&local_88,&local_40);
        if (local_f8 != 3) goto LAB_01a49468;
      }
      FUN_01a497c8(&local_e0,local_f4);
      iVar8 = local_dc;
      FUN_01a49970(&local_40,local_dc,local_d8,2);
      FUN_0134bd64(local_e0,iVar8);
      if ((char)local_40 == '\x01') {
        local_d4 = 0;
        local_d8 = 0;
        local_e0 = 0;
        *(char **)(param_2 + 8) = pcVar10;
        uVar3 = local_40._1_1_;
        *(uint *)(param_2 + 0xc) = uVar11;
        local_dc = 4;
        puVar5 = (undefined1 *)thunk_FUN_01be5118(1);
        if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(1,1);
        }
        *puVar5 = uVar3;
        FUN_012d40d0(0);
        local_e8 = puVar5;
LAB_01a49440:
        local_f4 = 0;
        local_e4 = &DAT_01d2c028;
LAB_01a49480:
        *param_1 = 2;
        param_1[1] = local_f4;
LAB_01a4965c:
        *piVar9 = local_dc;
        param_1[3] = local_d8;
        param_1[4] = (int)local_e8;
        param_1[5] = (int)local_e4;
        return;
      }
LAB_01a4948c:
      *piVar9 = local_38;
      param_1[3] = local_34;
      goto LAB_01a49634;
    }
    if (cVar1 == 'o') {
      local_d0 = CONCAT13(local_d0._3_1_,0x370000);
      local_bc = CONCAT13(local_bc._3_1_,0x370000);
      local_e0 = CONCAT13(local_e0._3_1_,0x370000);
      local_d4 = 0;
      local_dc = 0;
      local_c0 = 5;
      local_ac = "octal integer";
      local_c4 = "digit";
      local_cc = (char *)CONCAT31(local_cc._1_3_,0x5f);
      local_b0 = 3;
      local_d0 = CONCAT22(local_d0._2_2_,0x3000);
      local_bc = CONCAT22(local_bc._2_2_,0x3000);
      local_e0 = CONCAT22(local_e0._2_2_,0x3000);
      local_c8 = 2;
      local_b4 = 2;
      local_a8 = 0xd;
      local_b8 = "0o";
      local_a0 = 3;
      pcStack_9c = "octal integer";
      iStack_98 = 0xd;
      FUN_01a45090(&local_40,param_2,"0o",2);
      if (local_40 != 3) {
LAB_01a4921c:
        local_7c = local_34;
        ppcStack_78 = local_30;
        uStack_74 = uStack_2c;
        local_38 = iStack_98;
        local_30 = &local_90;
        local_88 = local_40;
        local_84 = local_3c;
        local_40 = local_a0;
        local_3c = pcStack_9c;
        local_34 = param_2;
        FUN_01a5cbd0(&local_f8,&local_88,&local_40);
        if (local_f8 == 3) goto LAB_01a49274;
LAB_01a49468:
        local_dc = local_f0;
        local_d8 = local_ec;
        if (local_f8 != 1) {
          *param_1 = local_f8;
          param_1[1] = local_f4;
          goto LAB_01a4965c;
        }
        goto LAB_01a49480;
      }
      iVar8 = *(int *)(param_2 + 8);
      uVar7 = *(uint *)(param_2 + 0xc);
      FUN_01a47c80(&local_40,0x30,0x37,param_2);
      if (local_40 != 3) {
LAB_01a491ec:
        if (local_40 == 1) {
          local_40 = 2;
        }
        local_60 = local_34;
        ppcStack_5c = local_30;
        uStack_58 = uStack_2c;
        goto LAB_01a4921c;
      }
      FUN_01a46664(&local_40,&local_d0,param_2);
      if (local_40 != 3) {
        goto LAB_01a491ec;
      }
      iVar4 = *(int *)(param_2 + 8);
      *(int *)(param_2 + 8) = iVar8;
      uVar6 = iVar4 - iVar8;
      *(uint *)(param_2 + 0xc) = uVar7;
      if (uVar7 < uVar6) goto LAB_01a49684;
      *(uint *)(param_2 + 8) = iVar8 + uVar6;
      *(uint *)(param_2 + 0xc) = uVar7 - uVar6;
      local_f4 = iVar8;
LAB_01a49274:
      FUN_01a497c8(&local_e0,local_f4);
      iVar8 = local_dc;
      FUN_01a49970(&local_40,local_dc,local_d8,8);
      FUN_0134bd64(local_e0,iVar8);
      if ((char)local_40 == '\x01') {
        local_d4 = 0;
        local_d8 = 0;
        local_e0 = 0;
        *(char **)(param_2 + 8) = pcVar10;
        uVar3 = local_40._1_1_;
        *(uint *)(param_2 + 0xc) = uVar11;
        local_dc = 4;
        puVar5 = (undefined1 *)thunk_FUN_01be5118(1);
        if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(1,1);
        }
        *puVar5 = uVar3;
        FUN_012d40d0(0);
        local_e8 = puVar5;
        goto LAB_01a49440;
      }
      goto LAB_01a4948c;
    }
    if (cVar1 != 'x') goto LAB_01a48d74;
    local_cc = "digit";
    local_b8 = "hexadecimal integer";
    local_d4 = CONCAT31(local_d4._1_3_,0x5f);
    local_b4 = 0x13;
    local_bc = 3;
    local_d8 = 0;
    local_e0 = 0;
    local_c0 = 2;
    local_d0 = 2;
    local_c4 = "0x";
    local_c8 = 5;
    local_a0 = 3;
    pcStack_9c = "hexadecimal integer";
    iStack_98 = 0x13;
    FUN_01a45090(&local_40,param_2,"0x",2);
    if (local_40 != 3) {
LAB_01a49514:
      local_7c = local_34;
      ppcStack_78 = local_30;
      uStack_74 = uStack_2c;
      local_38 = iStack_98;
      local_30 = &local_90;
      local_88 = local_40;
      local_84 = local_3c;
      local_40 = local_a0;
      local_3c = pcStack_9c;
      local_34 = param_2;
      FUN_01a5cbd0(&local_f8);
      if (local_f8 == 3) goto LAB_01a49570;
      if (local_f8 == 1) {
        local_f8 = 2;
      }
      local_dc = local_f0;
      local_d8 = local_ec;
LAB_01a49658:
      *param_1 = local_f8;
      param_1[1] = local_f4;
      goto LAB_01a4965c;
    }
    iVar8 = *(int *)(param_2 + 8);
    uVar7 = *(uint *)(param_2 + 0xc);
    FUN_01a48b48(&local_40,param_2);
    if (local_40 != 3) {
      uVar2 = local_3c._1_3_;
LAB_01a494d8:
      local_128 = (uint)local_3c & 0xff;
      if (local_40 == 1) {
        local_40 = 2;
      }
      local_60 = local_34;
      ppcStack_5c = local_30;
      uStack_58 = uStack_2c;
      local_3c = (char *)(local_128 | (uint)uVar2 << 8);
      goto LAB_01a49514;
    }
    FUN_01a468b0(&local_40,&local_d4,param_2);
    if (local_40 != 3) {
      uVar2 = (uint3)((uint)local_3c >> 8);
      goto LAB_01a494d8;
    }
    iVar4 = *(int *)(param_2 + 8);
    *(int *)(param_2 + 8) = iVar8;
    uVar6 = iVar4 - iVar8;
    *(uint *)(param_2 + 0xc) = uVar7;
    if (uVar7 < uVar6) goto LAB_01a49684;
    *(uint *)(param_2 + 8) = iVar8 + uVar6;
    *(uint *)(param_2 + 0xc) = uVar7 - uVar6;
    local_f4 = iVar8;
LAB_01a49570:
    FUN_01a497c8(&local_e0,local_f4);
    FUN_01a49970(&local_40,local_dc,local_d8,0x10);
    FUN_0134bd64(local_e0,local_dc);
    if ((char)local_40 == '\x01') {
      local_d4 = 0;
      local_d8 = 0;
      local_e0 = 0;
      *(char **)(param_2 + 8) = pcVar10;
      uVar3 = local_40._1_1_;
      *(uint *)(param_2 + 0xc) = uVar11;
      local_dc = 4;
      puVar5 = (undefined1 *)thunk_FUN_01be5118(1);
      if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(1,1);
      }
      *puVar5 = uVar3;
      FUN_012d40d0(0);
      local_f8 = 2;
      local_e4 = &DAT_01d2c028;
      local_e8 = puVar5;
      local_f4 = 0;
      goto LAB_01a49658;
    }
  }
  *piVar9 = local_38;
  param_1[3] = local_34;
LAB_01a49634:
  *param_1 = 3;
  return;
}

