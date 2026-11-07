// FUN_00699224 @ 00699224 size=1408 calls_out=15 calls_in=1
// strings: user_agents_rotated_count | user_agents_rotated_count | user_agents_rotated_endpoints_count | endpoints_rotated_count | endpoints_rotated_calls_count | endpoints_rotated_calls_count

/* WARNING: Removing unreachable block (ram,0x0069973c) */
/* WARNING: Removing unreachable block (ram,0x0069983c) */
/* WARNING: Removing unreachable block (ram,0x00699720) */
/* WARNING: Removing unreachable block (ram,0x006997f4) */
/* WARNING: Removing unreachable block (ram,0x00699730) */
/* WARNING: Removing unreachable block (ram,0x00699818) */
/* WARNING: Removing unreachable block (ram,0x0069985c) */
/* WARNING: Removing unreachable block (ram,0x00699748) */
/* WARNING: Removing unreachable block (ram,0x006996c8) */

void FUN_00699224(undefined4 *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined1 *unaff_r10;
  undefined1 *local_5c;
  undefined1 *local_58;
  undefined1 *local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  char *local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_00677900(&local_2c);
  if ((char)local_2c == '\x01') goto LAB_0069924c;
  if (local_2c._1_1_ != '\x01') {
    uVar9 = *(undefined4 *)(param_2 + 0x1c);
    uVar11 = *(undefined4 *)(param_2 + 0x20);
    local_40 = (undefined4 *)0x5;
LAB_006998a8:
    local_28 = FUN_01966fbc(&local_40,uVar9,uVar11);
LAB_0069924c:
    *param_1 = 1;
    param_1[1] = local_28;
    return;
  }
  if (local_2c._2_1_ == '[') {
    cVar2 = param_2[0x2c];
    param_2[0x2c] = cVar2 + -1;
    if ((char)(cVar2 + -1) == '\0') {
LAB_006998a0:
      uVar9 = *(undefined4 *)(param_2 + 0x1c);
      uVar11 = *(undefined4 *)(param_2 + 0x20);
      local_40 = (undefined4 *)0x18;
      goto LAB_006998a8;
    }
    FUN_0157653c(param_2 + 0xc);
    local_28 = CONCAT31(local_28._1_3_,1);
    local_2c = param_2;
    FUN_00679bd0(&local_40,&local_2c);
    uVar9 = local_34;
    puVar7 = local_38;
    if (local_40 == (undefined4 *)0x2 && local_3c == (undefined1 *)0x0) {
      uVar11 = unaff_r6;
      uVar9 = unaff_r9;
LAB_00699650:
      bVar3 = true;
      unaff_r6 = uVar11;
      unaff_r9 = uVar9;
      local_50 = local_38;
    }
    else {
      if (((uint)local_40 & 1) != 0) {
        FUN_00679bd0(&local_40,&local_2c);
        uVar11 = local_34;
        puVar5 = local_38;
        if (local_40 != (undefined4 *)0x2 || local_3c != (undefined1 *)0x0) {
          if (((uint)local_40 & 1) == 0) {
            local_38 = (undefined1 *)FUN_014dee0c(1,&DAT_01c0475c,&DAT_01d064b8);
            uVar11 = unaff_r6;
            goto LAB_00699650;
          }
          FUN_00679bd0(&local_40,&local_2c);
          uVar10 = local_34;
          puVar6 = local_38;
          unaff_r6 = uVar11;
          if (local_40 != (undefined4 *)0x2 || local_3c != (undefined1 *)0x0) {
            if (((uint)local_40 & 1) == 0) {
              uVar10 = 2;
            }
            else {
              FUN_00679bd0(&local_40,&local_2c);
              unaff_r8 = uVar10;
              unaff_r10 = puVar6;
              if (local_40 == (undefined4 *)0x2 && local_3c == (undefined1 *)0x0) goto LAB_00699648;
              local_5c = puVar7;
              local_58 = puVar5;
              local_54 = puVar6;
              if (((uint)local_40 & 1) != 0) {
                bVar3 = false;
                local_4c = local_34;
                unaff_r9 = uVar9;
                unaff_r10 = local_38;
                goto LAB_00699658;
              }
              uVar10 = 3;
            }
            local_38 = (undefined1 *)FUN_014dee0c(uVar10,&DAT_01c0475c,&DAT_01d064b8);
            goto LAB_00699650;
          }
        }
LAB_00699648:
        uVar11 = unaff_r6;
        goto LAB_00699650;
      }
      local_50 = (undefined1 *)FUN_014dee0c(0,&DAT_01c0475c,&DAT_01d064b8);
      bVar3 = true;
    }
LAB_00699658:
    param_2[0x2c] = param_2[0x2c] + '\x01';
    puVar7 = (undefined1 *)FUN_006795cc(param_2);
    if (bVar3) {
      if (puVar7 != (undefined1 *)0x0) {
        FUN_0067904c();
      }
    }
    else {
      local_50 = puVar7;
      if (puVar7 == (undefined1 *)0x0) {
        param_1[2] = local_5c;
        param_1[4] = local_58;
        param_1[3] = unaff_r9;
        param_1[6] = local_54;
        param_1[7] = unaff_r8;
        param_1[8] = unaff_r10;
        param_1[9] = local_4c;
        uVar9 = 0;
        param_1[5] = unaff_r6;
        goto LAB_00699704;
      }
    }
  }
  else if (local_2c._2_1_ == '{') {
    cVar2 = param_2[0x2c];
    param_2[0x2c] = cVar2 + -1;
    if ((char)(cVar2 + -1) == '\0') goto LAB_006998a0;
    FUN_0157653c(param_2 + 0xc);
    local_44 = 1;
    local_48 = param_2;
    do {
      FUN_006796f4(&local_40,&local_48);
      pcVar4 = local_48;
      local_50 = local_3c;
      if ((char)local_40 == '\x01') goto LAB_006996ac;
      if (local_40._1_1_ != '\x01') {
        local_28 = 0x19;
        local_2c = "user_agents_rotated_count";
        local_3c = &LAB_018a13b8;
        local_40 = &local_2c;
        local_50 = (undefined1 *)FUN_019676ac(&DAT_0057cd64,&local_40);
        goto LAB_006996ac;
      }
      pcVar12 = local_48 + 0xc;
      FUN_0157653c(pcVar12);
      pcVar4[8] = '\0';
      pcVar4[9] = '\0';
      pcVar4[10] = '\0';
      pcVar4[0xb] = '\0';
      FUN_0069e49c(&local_40,pcVar12,pcVar4);
      pcVar4 = local_48;
      local_50 = local_3c;
      if (local_40 == (undefined4 *)0x2) goto LAB_006996ac;
      uVar1 = (uint)(local_38 + -0x17) >> 1;
      if ((uVar1 | (int)(local_38 + -0x17) * -0x80000000) < 7) {
                    /* WARNING: Could not recover jumptable at 0x0069937c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00699380 + *(int *)(&DAT_00699380 + uVar1 * 4)))();
        return;
      }
      local_50 = (undefined1 *)FUN_006794bc(local_48);
    } while ((local_50 == (undefined1 *)0x0) &&
            (local_50 = (undefined1 *)FUN_00677d34(pcVar4), local_50 == (undefined1 *)0x0));
LAB_006996ac:
    param_2[0x2c] = param_2[0x2c] + '\x01';
    iVar8 = FUN_00679540(param_2);
    if (iVar8 != 0) {
      FUN_0067904c();
    }
  }
  else {
    local_50 = (undefined1 *)FUN_00678df8(param_2,&local_40,&DAT_01c047c4);
  }
  uVar9 = FUN_012c6694(local_50,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
  param_1[1] = uVar9;
  uVar9 = 1;
LAB_00699704:
  *param_1 = uVar9;
  return;
}

