// FUN_00f6403c @ 00f6403c size=5412 calls_out=10 calls_in=4
// strings: 

void FUN_00f6403c(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  char cVar5;
  byte *pbVar6;
  undefined1 uVar7;
  uint uVar8;
  byte *pbVar9;
  uint extraout_r3;
  byte *pbVar10;
  int unaff_r5;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  undefined2 uVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  byte in_r12;
  byte extraout_r12;
  byte *pbVar18;
  undefined1 unaff_lr;
  ulonglong uVar19;
  byte *local_64;
  byte *local_60;
  uint local_5c;
  undefined4 local_58;
  byte *local_54;
  byte *local_50;
  undefined4 local_48;
  byte *local_44;
  byte *local_40;
  byte *local_38;
  byte *local_34;
  byte *local_30;
  byte *local_2c;
  byte *pbStack_28;
  
  if (param_2[3] != 0) {
    puVar16 = (undefined1 *)param_2[2];
    uVar8 = param_2[3] - 1;
    puVar14 = puVar16 + 0xc;
    uVar7 = *puVar16;
    param_2[2] = puVar14;
    param_2[3] = uVar8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar7) {
    default:
      uVar8 = (uint)(byte)puVar16[2];
      unaff_lr = puVar16[3];
      puVar14 = *(undefined1 **)(puVar16 + 4);
      unaff_r5 = *(int *)(puVar16 + 8);
      in_r12 = puVar16[1];
      break;
    case 1:
    case 3:
      unaff_r5 = *(int *)(puVar16 + 8);
      uVar17 = *(undefined4 *)(puVar16 + 4);
      if (unaff_r5 == 0) {
        puVar14 = &DAT_00000001;
      }
      else {
        puVar14 = (undefined1 *)thunk_FUN_016d4a50(unaff_r5);
        if (puVar14 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(1,unaff_r5);
        }
      }
      unaff_lr = 0x7c;
      FUN_016dd1aa(puVar14,uVar17,unaff_r5);
      uVar8 = extraout_r3;
      in_r12 = extraout_r12;
      break;
    case 4:
      uVar8 = (uint)(byte)puVar16[2];
      in_r12 = puVar16[1];
      break;
    case 5:
      bVar1 = puVar16[1];
      cVar5 = '\x13';
      if (3 < bVar1) {
        cVar5 = bVar1 - 4;
      }
      in_r12 = 4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(cVar5) {
      case '\x01':
        in_r12 = 5;
        break;
      case '\x02':
        in_r12 = 6;
        break;
      case '\x03':
        in_r12 = 7;
        break;
      case '\x04':
        in_r12 = 8;
        break;
      case '\x05':
        in_r12 = 9;
        break;
      case '\x06':
        in_r12 = 10;
        break;
      case '\a':
        in_r12 = 0xb;
        break;
      case '\b':
        in_r12 = 0xc;
        break;
      case '\t':
        in_r12 = 0xd;
        break;
      case '\n':
        in_r12 = 0xe;
        break;
      case '\v':
        in_r12 = 0xf;
        break;
      case '\f':
        in_r12 = 0x10;
        break;
      case '\r':
        in_r12 = 0x11;
        break;
      case '\x0e':
        in_r12 = 0x12;
        break;
      case '\x0f':
        in_r12 = 0x13;
        break;
      case '\x10':
        in_r12 = 0x14;
        break;
      case '\x11':
        in_r12 = 0x15;
        break;
      case '\x12':
        in_r12 = 0x16;
        break;
      case '\x13':
        in_r12 = bVar1;
      }
      break;
    case 6:
      break;
    }
    param_1[1] = puVar14;
    param_1[2] = unaff_r5;
    *(undefined1 *)((int)param_1 + 3) = unaff_lr;
    *(char *)((int)param_1 + 2) = (char)uVar8;
    *(byte *)((int)param_1 + 1) = in_r12;
    *(undefined1 *)param_1 = uVar7;
    return;
  }
  pbVar9 = (byte *)param_2[1];
  if (pbVar9 == (byte *)0x0) {
    local_58 = (byte *)CONCAT31(local_58._1_3_,7);
    goto LAB_00f646dc;
  }
  pbVar6 = (byte *)*param_2;
  uVar8 = (uint)*pbVar6;
  if ((char)*pbVar6 < '\0') {
    if (uVar8 < 0xe0) {
      uVar8 = pbVar6[1] & 0x3f | (uVar8 & 0x1f) << 6;
    }
    else {
      uVar11 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
      if (uVar8 < 0xf0) {
        uVar8 = uVar11 | (uVar8 & 0x1f) << 0xc;
        goto joined_r0x00f640d0;
      }
      uVar8 = pbVar6[3] & 0x3f | uVar11 << 6 | (uVar8 & 7) << 0x12;
    }
    if (uVar8 != 0x20) goto LAB_00f640d4;
LAB_00f64560:
    local_50 = (byte *)0x0;
    pbVar13 = pbVar6;
    do {
      pbVar10 = pbVar13 + 1;
      uVar8 = (uint)*pbVar13;
      if (0x7fffffff < (uint)(int)(char)*pbVar13) {
        if (uVar8 < 0xe0) {
          uVar8 = pbVar13[1] & 0x3f | (uVar8 & 0x1f) << 6;
          pbVar10 = pbVar13 + 2;
        }
        else {
          uVar11 = pbVar13[2] & 0x3f | (pbVar13[1] & 0x3f) << 6;
          if (uVar8 < 0xf0) {
            uVar8 = uVar11 | (uVar8 & 0x1f) << 0xc;
            pbVar10 = pbVar13 + 3;
          }
          else {
            uVar8 = pbVar13[3] & 0x3f | uVar11 << 6 | (uVar8 & 7) << 0x12;
            pbVar10 = pbVar13 + 4;
          }
        }
      }
      if ((4 < uVar8 - 9) && (uVar8 != 0x20)) {
        if (uVar8 < 0x80) goto LAB_00f6467c;
        uVar11 = uVar8 >> 8;
        if (uVar11 < 0x20) {
          if (uVar11 == 0) {
            bVar1 = (&DAT_0041951b)[uVar8 & 0xff] & 1;
joined_r0x00f64670:
            if (bVar1 == 0) goto LAB_00f6467c;
          }
          else if ((uVar11 != 0x16) || (uVar8 != 0x1680)) goto LAB_00f6467c;
        }
        else {
          if (uVar11 == 0x20) {
            bVar1 = (&DAT_0041951b)[uVar8 & 0xff] & 2;
            goto joined_r0x00f64670;
          }
          if ((uVar11 != 0x30) || (uVar8 != 0x3000)) goto LAB_00f6467c;
        }
      }
      local_50 = pbVar10 + ((int)local_50 - (int)pbVar13);
      pbVar13 = pbVar10;
    } while (pbVar10 != pbVar6 + (int)pbVar9);
    local_50 = pbVar9;
LAB_00f6467c:
    if (local_50 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("ass",0x1e,&DAT_0187fe98);
    }
    local_60 = pbVar6 + (int)local_50;
    if (local_50 < pbVar9) {
      if ((char)*local_60 < -0x40) {
LAB_00f6469c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(pbVar6,pbVar9,0,local_50,&DAT_0187fea8);
      }
    }
    else if (pbVar9 != local_50) goto LAB_00f6469c;
    local_58 = (byte *)CONCAT31(local_58._1_3_,2);
LAB_00f646d4:
    local_5c = (int)pbVar9 - (int)local_50;
    local_54 = pbVar6;
    goto LAB_00f646dc;
  }
joined_r0x00f640d0:
  if (uVar8 == 0x20) goto LAB_00f64560;
LAB_00f640d4:
  pbVar13 = pbVar6 + (int)pbVar9;
  if (uVar8 != 0x25) {
    if (uVar8 - 9 < 5) goto LAB_00f64560;
    if (0x7f < uVar8) {
      uVar11 = uVar8 >> 8;
      if (uVar11 < 0x20) {
        if (uVar11 == 0) {
          bVar1 = (&DAT_0041951b)[uVar8 & 0xff] & 1;
joined_r0x00f6455c:
          if (bVar1 != 0) goto LAB_00f64560;
        }
        else if ((uVar11 == 0x16) && (uVar8 == 0x1680)) goto LAB_00f64560;
      }
      else {
        if (uVar11 == 0x20) {
          bVar1 = (&DAT_0041951b)[uVar8 & 0xff] & 2;
          goto joined_r0x00f6455c;
        }
        if (uVar11 == 0x30 && uVar8 == 0x3000) goto LAB_00f64560;
      }
    }
    local_50 = (byte *)0x0;
    pbVar10 = pbVar6;
    do {
      pbVar18 = pbVar10 + 1;
      uVar8 = (uint)*pbVar10;
      if ((char)*pbVar10 < '\0') {
        if (uVar8 < 0xe0) {
          uVar8 = pbVar10[1] & 0x3f | (uVar8 & 0x1f) << 6;
          pbVar18 = pbVar10 + 2;
        }
        else {
          uVar11 = pbVar10[2] & 0x3f | (pbVar10[1] & 0x3f) << 6;
          if (uVar8 < 0xf0) {
            uVar8 = uVar11 | (uVar8 & 0x1f) << 0xc;
            pbVar18 = pbVar10 + 3;
          }
          else {
            uVar8 = pbVar10[3] & 0x3f | uVar11 << 6 | (uVar8 & 7) << 0x12;
            pbVar18 = pbVar10 + 4;
          }
        }
      }
      if ((uVar8 - 9 < 0x18) && ((1 << (uVar8 - 9 & 0xff) & 0x80001fU) != 0)) goto LAB_00f64728;
      if (uVar8 < 0x80) {
        if (uVar8 == 0x25) goto LAB_00f64728;
      }
      else {
        uVar11 = uVar8 >> 8;
        if (uVar11 < 0x20) {
          if (uVar11 == 0) {
            bVar1 = (&DAT_0041951b)[uVar8 & 0xff] & 1;
joined_r0x00f64470:
            if (bVar1 != 0) goto LAB_00f64728;
          }
          else if ((uVar11 == 0x16) && (uVar8 == 0x1680)) goto LAB_00f64728;
        }
        else {
          if (uVar11 == 0x20) {
            bVar1 = (&DAT_0041951b)[uVar8 & 0xff] & 2;
            goto joined_r0x00f64470;
          }
          if ((uVar11 == 0x30) && (uVar8 == 0x3000)) goto LAB_00f64728;
        }
      }
      local_50 = pbVar18 + ((int)local_50 - (int)pbVar10);
      pbVar10 = pbVar18;
    } while (pbVar18 != pbVar13);
    local_50 = pbVar9;
LAB_00f64728:
    if (local_50 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("ass",0x1e,&DAT_0187fe78);
    }
    local_60 = pbVar6 + (int)local_50;
    if (local_50 < pbVar9) {
      if ((char)*local_60 < -0x40) {
LAB_00f64748:
        puVar4 = &DAT_0187fe88;
        goto LAB_00f64750;
      }
    }
    else if (pbVar9 != local_50) goto LAB_00f64748;
    local_58 = (byte *)((uint)local_58._1_3_ << 8);
    goto LAB_00f646d4;
  }
  local_60 = pbVar6 + 1;
  if (pbVar9 == &DAT_00000001) {
    local_5c = 0;
    local_50 = &DAT_00000001;
    uVar7 = 6;
    if (*(char *)(param_2 + 4) != '\0') {
      uVar7 = 0;
    }
    local_58 = (byte *)CONCAT31(local_58._1_3_,uVar7);
    local_54 = pbVar6;
    goto LAB_00f646dc;
  }
  bVar1 = *local_60;
  if ((char)bVar1 < -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(pbVar6,pbVar9,1,pbVar9,&DAT_0187fcd0);
  }
  pbVar18 = pbVar9 + -1;
  uVar8 = (uint)bVar1;
  pbVar10 = &DAT_00000001;
  if ((uint)(int)(char)bVar1 < 0x80000000) {
LAB_00f64798:
    if (pbVar10 < pbVar18) goto LAB_00f647a0;
LAB_00f647e4:
    if (pbVar18 != pbVar10) goto LAB_00f647b0;
  }
  else {
    if (uVar8 < 0xe0) {
      uVar8 = pbVar6[2] & 0x3f | (uVar8 & 0x1f) << 6;
    }
    else {
      uVar11 = pbVar6[3] & 0x3f | (pbVar6[2] & 0x3f) << 6;
      if (uVar8 < 0xf0) {
        uVar8 = uVar11 | (uVar8 & 0x1f) << 0xc;
      }
      else {
        uVar8 = pbVar6[4] & 0x3f | uVar11 << 6 | (uVar8 & 7) << 0x12;
      }
    }
    if (0x7f < uVar8) {
      pbVar10 = &SUB_00000002;
    }
    if (uVar8 < 0x800) goto LAB_00f64798;
    pbVar10 = &DAT_00000004;
    if (uVar8 < 0x10000) {
      pbVar10 = (byte *)0x3;
    }
    if (pbVar18 <= pbVar10) goto LAB_00f647e4;
LAB_00f647a0:
    if ((char)local_60[(int)pbVar10] < -0x40) {
LAB_00f647b0:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(local_60,pbVar18,pbVar10,pbVar18,&DAT_0187fce0);
    }
  }
  local_60 = local_60 + (int)pbVar10;
  local_5c = (int)pbVar18 - (int)pbVar10;
  cVar5 = '\x03';
  if (0x2f < uVar8) {
    if (uVar8 == 0x30) {
      cVar5 = '\x01';
    }
    else {
      if (uVar8 != 0x5f) goto LAB_00f649a8;
      cVar5 = '\x02';
    }
    bVar2 = false;
LAB_00f64840:
    if (local_60 == pbVar13) {
      local_50 = (byte *)(uint)*(byte *)(param_2 + 4);
      if (local_50 == &DAT_00000001) {
        local_50 = pbVar9 + -local_5c;
        if (local_50 < pbVar9) {
          uVar7 = 0;
          if ((char)pbVar6[(int)local_50] < -0x40) {
LAB_00f656ec:
            puVar4 = &DAT_0187feb8;
LAB_00f64750:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(pbVar6,pbVar9,0,local_50,puVar4);
          }
        }
        else {
          uVar7 = 0;
          if (local_5c != 0) goto LAB_00f656ec;
          local_5c = 0;
        }
      }
      else {
        uVar7 = 6;
      }
      local_58 = (byte *)CONCAT31(local_58._1_3_,uVar7);
      local_60 = pbVar13;
      local_54 = pbVar6;
      goto LAB_00f646dc;
    }
    uVar11 = 1;
    uVar8 = (uint)*local_60;
    if ((uint)(int)(char)*local_60 < 0x80000000) {
LAB_00f64918:
      if (uVar11 < local_5c) goto LAB_00f64920;
LAB_00f64964:
      if (local_5c != uVar11) goto LAB_00f64930;
    }
    else {
      if (uVar8 < 0xe0) {
        uVar8 = local_60[1] & 0x3f | (uVar8 & 0x1f) << 6;
      }
      else {
        uVar12 = local_60[2] & 0x3f | (local_60[1] & 0x3f) << 6;
        if (uVar8 < 0xf0) {
          uVar8 = uVar12 | (uVar8 & 0x1f) << 0xc;
        }
        else {
          uVar8 = local_60[3] & 0x3f | uVar12 << 6 | (uVar8 & 7) << 0x12;
        }
      }
      if (0x7f < uVar8) {
        uVar11 = 2;
      }
      if (uVar8 < 0x800) goto LAB_00f64918;
      uVar11 = 4;
      if (uVar8 < 0x10000) {
        uVar11 = 3;
      }
      if (local_5c <= uVar11) goto LAB_00f64964;
LAB_00f64920:
      if ((char)local_60[uVar11] < -0x40) {
LAB_00f64930:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(local_60,local_5c,uVar11,local_5c,&DAT_0187fcf0);
      }
    }
    local_60 = local_60 + uVar11;
    local_5c = local_5c - uVar11;
    if (!bVar2) goto LAB_00f649a8;
    if (uVar8 == 0x7a) {
      uVar15 = 5;
      goto LAB_00f64984;
    }
    FUN_00f657cc(&local_58,*(undefined1 *)(param_2 + 4),pbVar6,pbVar9,local_5c);
    goto LAB_00f64bc4;
  }
  if (uVar8 == 0x23) {
    bVar2 = true;
    goto LAB_00f64840;
  }
  if (uVar8 == 0x2d) {
    bVar2 = false;
    cVar5 = '\0';
    goto LAB_00f64840;
  }
LAB_00f649a8:
  local_64 = local_60;
  switch(uVar8) {
  case 0x25:
    uVar7 = 0;
    local_44 = (byte *)0x35c7f0;
    goto LAB_00f64e64;
  default:
    FUN_00f657cc(&local_48,*(undefined1 *)(param_2 + 4),pbVar6,pbVar9,local_5c);
    goto LAB_00f64988;
  case 0x2b:
    uVar15 = 0x1605;
    goto LAB_00f64984;
  case 0x2e:
    pbVar13 = local_60 + local_5c;
    local_38 = local_60;
    local_34 = pbVar13;
    uVar19 = FUN_00f65b48(&local_38);
    uVar8 = (uint)(uVar19 >> 0x20);
    if ((uVar19 & 1) == 0) {
      FUN_00f657cc(&local_58,*(undefined1 *)(param_2 + 4),pbVar6,pbVar9,local_5c);
      goto LAB_00f646dc;
    }
    uVar11 = 1;
    if (0x7fffffffff < uVar19) {
      uVar11 = 2;
    }
    if (uVar8 < 0x800) {
      local_64 = local_60 + uVar11;
      if (uVar11 < local_5c) goto LAB_00f64dec;
LAB_00f65384:
      if (local_5c != uVar11) goto LAB_00f64dfc;
    }
    else {
      uVar11 = 4;
      if (uVar19 < 0x1000000000000) {
        uVar11 = 3;
      }
      local_64 = local_60 + uVar11;
      if (local_5c <= uVar11) goto LAB_00f65384;
LAB_00f64dec:
      if ((char)*local_64 < -0x40) {
LAB_00f64dfc:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(local_60,local_5c,uVar11,local_5c,&DAT_0187fe08);
      }
    }
    local_5c = local_5c - uVar11;
    if ((int)uVar8 < 0x39) {
      if (uVar8 == 0x33) {
        local_30 = local_64;
        local_2c = pbVar13;
        uVar19 = FUN_00f65b48(&local_30);
        uVar8 = (uint)(uVar19 >> 0x20);
        if ((uVar19 & 1) == 0) {
LAB_00f655b8:
          FUN_00f657cc(&local_58,*(undefined1 *)(param_2 + 4),pbVar6,pbVar9,local_5c);
          local_60 = local_64;
          goto LAB_00f646dc;
        }
        uVar11 = 1;
        if (0x7fffffffff < uVar19) {
          uVar11 = 2;
        }
        if (uVar8 < 0x800) {
          if (uVar11 < local_5c) goto LAB_00f65524;
LAB_00f65648:
          if (local_5c == uVar11) goto LAB_00f6564c;
        }
        else {
          uVar11 = 4;
          if (uVar19 < 0x1000000000000) {
            uVar11 = 3;
          }
          if (local_5c <= uVar11) goto LAB_00f65648;
LAB_00f65524:
          if (-0x41 < (char)local_64[uVar11]) {
LAB_00f6564c:
            local_5c = local_5c - uVar11;
            if (uVar8 == 0x66) {
              local_48 = (byte *)CONCAT22(local_48._2_2_,0xb05);
              goto LAB_00f656b0;
            }
            goto LAB_00f65698;
          }
        }
        puVar4 = &DAT_0187fe18;
LAB_00f655a0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(local_64,local_5c,uVar11,local_5c,puVar4);
      }
      if (uVar8 != 0x36) {
LAB_00f654b4:
        FUN_00f657cc(&local_48,*(undefined1 *)(param_2 + 4),pbVar6,pbVar9,local_5c);
        bVar1 = 1;
        break;
      }
      local_30 = local_64;
      local_2c = pbVar13;
      uVar19 = FUN_00f65b48(&local_30);
      uVar8 = (uint)(uVar19 >> 0x20);
      if ((uVar19 & 1) == 0) goto LAB_00f655b8;
      uVar11 = 1;
      if (0x7fffffffff < uVar19) {
        uVar11 = 2;
      }
      if (uVar8 < 0x800) {
        if (uVar11 < local_5c) goto LAB_00f653dc;
LAB_00f65618:
        if (local_5c != uVar11) {
LAB_00f653f0:
          puVar4 = &DAT_0187fe28;
          goto LAB_00f655a0;
        }
      }
      else {
        uVar11 = 4;
        if (uVar19 < 0x1000000000000) {
          uVar11 = 3;
        }
        if (local_5c <= uVar11) goto LAB_00f65618;
LAB_00f653dc:
        if ((char)local_64[uVar11] < -0x40) goto LAB_00f653f0;
      }
      local_5c = local_5c - uVar11;
      if (uVar8 == 0x66) {
        local_48 = (byte *)CONCAT22(local_48._2_2_,0xc05);
        goto LAB_00f656b0;
      }
LAB_00f65698:
      FUN_00f657cc(&local_48,*(undefined1 *)(param_2 + 4),pbVar6,pbVar9,local_5c);
LAB_00f656b0:
      local_64 = local_64 + uVar11;
    }
    else {
      if (uVar8 == 0x39) {
        local_30 = local_64;
        local_2c = pbVar13;
        uVar19 = FUN_00f65b48(&local_30);
        uVar8 = (uint)(uVar19 >> 0x20);
        if ((uVar19 & 1) == 0) goto LAB_00f655b8;
        uVar11 = 1;
        if (0x7fffffffff < uVar19) {
          uVar11 = 2;
        }
        if (uVar8 < 0x800) {
          if (uVar11 < local_5c) goto LAB_00f65584;
LAB_00f65678:
          if (local_5c != uVar11) {
LAB_00f65598:
            puVar4 = &DAT_0187fe38;
            goto LAB_00f655a0;
          }
        }
        else {
          uVar11 = 4;
          if (uVar19 < 0x1000000000000) {
            uVar11 = 3;
          }
          if (local_5c <= uVar11) goto LAB_00f65678;
LAB_00f65584:
          if ((char)local_64[uVar11] < -0x40) goto LAB_00f65598;
        }
        local_5c = local_5c - uVar11;
        if (uVar8 != 0x66) goto LAB_00f65698;
        local_48 = (byte *)CONCAT22(local_48._2_2_,0xd05);
        goto LAB_00f656b0;
      }
      if (uVar8 != 0x66) goto LAB_00f654b4;
      local_48 = (byte *)CONCAT22(local_48._2_2_,0xa05);
    }
    bVar1 = 1;
    break;
  case 0x33:
    local_2c = local_60 + local_5c;
    local_30 = local_60;
    uVar19 = FUN_00f65b48(&local_30);
    uVar8 = (uint)(uVar19 >> 0x20);
    if ((uVar19 & 1) == 0) {
LAB_00f64fdc:
      FUN_00f657cc(&local_58,*(undefined1 *)(param_2 + 4),pbVar6,pbVar9,local_5c);
      goto LAB_00f646dc;
    }
    uVar11 = 1;
    if (0x7fffffffff < uVar19) {
      uVar11 = 2;
    }
    if (uVar8 < 0x800) {
      if (uVar11 < local_5c) goto LAB_00f64d80;
LAB_00f6534c:
      if (local_5c == uVar11) goto LAB_00f65350;
    }
    else {
      uVar11 = 4;
      if (uVar19 < 0x1000000000000) {
        uVar11 = 3;
      }
      if (local_5c <= uVar11) goto LAB_00f6534c;
LAB_00f64d80:
      if (-0x41 < (char)local_60[uVar11]) {
LAB_00f65350:
        local_64 = local_60 + uVar11;
        local_5c = local_5c - uVar11;
        if (uVar8 != 0x66) goto LAB_00f65484;
        uVar15 = 0x105;
        goto LAB_00f6547c;
      }
    }
    puVar4 = &DAT_0187fe48;
LAB_00f64fc4:
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(local_60,local_5c,uVar11,local_5c,puVar4);
  case 0x36:
    local_2c = local_60 + local_5c;
    local_30 = local_60;
    uVar19 = FUN_00f65b48(&local_30);
    uVar8 = (uint)(uVar19 >> 0x20);
    if ((uVar19 & 1) == 0) goto LAB_00f64fdc;
    uVar11 = 1;
    if (0x7fffffffff < uVar19) {
      uVar11 = 2;
    }
    if (uVar8 < 0x800) {
      if (uVar11 < local_5c) goto LAB_00f64eec;
LAB_00f65434:
      if (local_5c != uVar11) {
LAB_00f64efc:
        puVar4 = &DAT_0187fe58;
        goto LAB_00f64fc4;
      }
    }
    else {
      uVar11 = 4;
      if (uVar19 < 0x1000000000000) {
        uVar11 = 3;
      }
      if (local_5c <= uVar11) goto LAB_00f65434;
LAB_00f64eec:
      if ((char)local_60[uVar11] < -0x40) goto LAB_00f64efc;
    }
    local_64 = local_60 + uVar11;
    local_5c = local_5c - uVar11;
    if (uVar8 == 0x66) {
      uVar15 = 0x205;
      goto LAB_00f6547c;
    }
LAB_00f65484:
    FUN_00f657cc(&local_48,*(undefined1 *)(param_2 + 4),pbVar6,pbVar9,local_5c);
    goto LAB_00f654a8;
  case 0x39:
    local_2c = local_60 + local_5c;
    local_30 = local_60;
    uVar19 = FUN_00f65b48(&local_30);
    uVar8 = (uint)(uVar19 >> 0x20);
    if ((uVar19 & 1) == 0) goto LAB_00f64fdc;
    uVar11 = 1;
    if (0x7fffffffff < uVar19) {
      uVar11 = 2;
    }
    if (uVar8 < 0x800) {
      if (uVar11 < local_5c) goto LAB_00f64fac;
LAB_00f65464:
      if (local_5c != uVar11) {
LAB_00f64fbc:
        puVar4 = &DAT_0187fe68;
        goto LAB_00f64fc4;
      }
    }
    else {
      uVar11 = 4;
      if (uVar19 < 0x1000000000000) {
        uVar11 = 3;
      }
      if (local_5c <= uVar11) goto LAB_00f65464;
LAB_00f64fac:
      if ((char)local_60[uVar11] < -0x40) goto LAB_00f64fbc;
    }
    local_64 = local_60 + uVar11;
    local_5c = local_5c - uVar11;
    if (uVar8 != 0x66) goto LAB_00f65484;
    uVar15 = 0x305;
LAB_00f6547c:
    local_48 = (byte *)CONCAT22(local_48._2_2_,uVar15);
LAB_00f654a8:
    bVar1 = 1;
    break;
  case 0x3a:
    if (local_5c < 3) {
      if (local_5c != 0) {
        if (local_5c == 2) {
          if (*(short *)local_60 == 0x7a3a) goto LAB_00f6531c;
          bVar1 = *local_60;
joined_r0x00f651fc:
          if (bVar1 == 0x7a) {
            if ((char)local_60[1] < -0x40) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa8ac(local_60,local_5c,1,local_5c,&DAT_0187fdd8);
            }
LAB_00f652bc:
            local_64 = local_60 + 1;
            local_5c = local_5c - 1;
            local_48 = (byte *)CONCAT22(local_48._2_2_,0xf05);
            goto LAB_00f6532c;
          }
        }
        else if (*local_60 == 0x7a) goto LAB_00f652bc;
      }
      FUN_00f657cc(&local_48,*(undefined1 *)(param_2 + 4),pbVar6,pbVar9,local_5c);
    }
    else {
      iVar3 = thunk_FUN_016dd50a("::z",local_60,3);
      if (iVar3 == 0) {
        if ((local_5c != 3) && ((char)local_60[3] < -0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(local_60,local_5c,3,local_5c,&DAT_0187fdf8);
        }
        local_64 = local_60 + 3;
        local_48 = (byte *)CONCAT22(local_48._2_2_,0x1105);
        local_5c = local_5c - 3;
        bVar1 = 1;
        break;
      }
      if (*(short *)local_60 != 0x7a3a) {
        bVar1 = *local_60;
        goto joined_r0x00f651fc;
      }
      if ((char)local_60[2] < -0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(local_60,local_5c,2,local_5c,&DAT_0187fde8);
      }
LAB_00f6531c:
      local_64 = local_60 + 2;
      local_48 = (byte *)CONCAT22(local_48._2_2_,0x1005);
      local_5c = local_5c - 2;
    }
LAB_00f6532c:
    bVar1 = 1;
    break;
  case 0x41:
    uVar15 = 0x705;
    goto LAB_00f64984;
  case 0x42:
    uVar15 = 0x505;
    goto LAB_00f64984;
  case 0x43:
    bVar1 = 1;
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0x104);
    break;
  case 0x44:
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    param_2[2] = &DAT_0187fd00;
    param_2[3] = 4;
    uVar15 = 0x704;
    goto LAB_00f650d8;
  case 0x46:
    param_2[2] = &DAT_0187fd30;
    param_2[3] = 4;
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10004);
    bVar1 = 0;
    break;
  case 0x47:
    bVar1 = 1;
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0x304);
    break;
  case 0x48:
    bVar1 = 1;
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0xf04);
    break;
  case 0x49:
    bVar1 = 1;
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0x1004);
    break;
  case 0x4d:
    bVar1 = 1;
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0x1104);
    break;
  case 0x50:
    uVar15 = 0x805;
    goto LAB_00f64984;
  case 0x52:
    uVar17 = 2;
    puVar4 = &DAT_0187fd60;
    goto LAB_00f650c8;
  case 0x53:
    bVar1 = 1;
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0x1204);
    break;
  case 0x54:
    uVar17 = 4;
    puVar4 = &DAT_0187fd78;
LAB_00f650c8:
    param_2[2] = puVar4;
    param_2[3] = uVar17;
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    uVar15 = 0xf04;
    goto LAB_00f650d8;
  case 0x55:
    bVar1 = 1;
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0x904);
    break;
  case 0x56:
    bVar1 = 1;
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0xb04);
    break;
  case 0x57:
    bVar1 = 1;
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0xa04);
    break;
  case 0x58:
    puVar4 = &DAT_0187ff04;
    goto LAB_00f6512c;
  case 0x59:
    bVar1 = 1;
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,4);
    break;
  case 0x5a:
    uVar15 = 0xe05;
    goto LAB_00f64984;
  case 0x61:
    uVar15 = 0x605;
    goto LAB_00f64984;
  case 0x62:
  case 0x68:
    uVar15 = 0x405;
    goto LAB_00f64984;
  case 99:
    uVar17 = 0xc;
    puVar4 = &DAT_0187ff40;
    goto LAB_00f65130;
  case 100:
    bVar1 = 1;
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0x804);
    break;
  case 0x65:
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x20000);
    uVar15 = 0x804;
    goto LAB_00f64984;
  case 0x66:
    bVar1 = 1;
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0x1304);
    break;
  case 0x67:
    bVar1 = 1;
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0x504);
    break;
  case 0x6a:
    bVar1 = 1;
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0xe04);
    break;
  case 0x6b:
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x20000);
    uVar15 = 0xf04;
    goto LAB_00f64984;
  case 0x6c:
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x20000);
    uVar15 = 0x1004;
    goto LAB_00f64984;
  case 0x6d:
    bVar1 = 1;
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0x704);
    break;
  case 0x6e:
    local_44 = &DAT_0041950e;
    goto LAB_00f64c20;
  case 0x70:
    uVar15 = 0x905;
    goto LAB_00f64984;
  case 0x71:
    local_48 = (byte *)((uint)local_48._3_1_ << 0x18);
    uVar15 = 0x604;
    goto LAB_00f64984;
  case 0x72:
    uVar17 = 6;
    puVar4 = &DAT_0187fc7c;
    goto LAB_00f65130;
  case 0x73:
    local_48 = (byte *)((uint)local_48._3_1_ << 0x18);
    uVar15 = 0x1404;
    goto LAB_00f64984;
  case 0x74:
    local_44 = &DAT_0040c271;
LAB_00f64c20:
    uVar7 = 2;
LAB_00f64e64:
    local_40 = &DAT_00000001;
    bVar1 = 1;
    local_48 = (byte *)CONCAT31(local_48._1_3_,uVar7);
    break;
  case 0x75:
    local_48 = (byte *)((uint)local_48._3_1_ << 0x18);
    uVar15 = 0xd04;
    goto LAB_00f64984;
  case 0x76:
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x20000);
    param_2[2] = &DAT_0187fda8;
    param_2[3] = 4;
    uVar15 = 0x804;
LAB_00f650d8:
    local_48 = (byte *)CONCAT22(local_48._2_2_,uVar15);
    bVar1 = 0;
    break;
  case 0x77:
    local_48 = (byte *)((uint)local_48._3_1_ << 0x18);
    uVar15 = 0xc04;
    goto LAB_00f64984;
  case 0x78:
    puVar4 = &DAT_0187fec8;
LAB_00f6512c:
    uVar17 = 4;
LAB_00f65130:
    param_2[2] = puVar4 + 0xc;
    param_2[3] = uVar17;
    FUN_00f65848(&local_48,puVar4);
    bVar1 = 0;
    break;
  case 0x79:
    bVar1 = 1;
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0x204);
    break;
  case 0x7a:
    uVar15 = 0x1305;
LAB_00f64984:
    local_48 = (byte *)CONCAT22(local_48._2_2_,uVar15);
LAB_00f64988:
    bVar1 = 1;
    local_64 = local_60;
  }
  if (cVar5 == '\x03') {
    local_58 = local_48;
    local_54 = local_44;
    local_50 = local_40;
    local_60 = local_64;
LAB_00f64bc4:
  }
  else {
    if ((bool)((char)local_48 == '\x04' & bVar1)) {
      local_58 = (byte *)CONCAT31(CONCAT12(local_58._3_1_,CONCAT11(cVar5,local_48._1_1_)),4);
    }
    else {
      FUN_00f657cc(&local_30,*(undefined1 *)(param_2 + 4),pbVar6,pbVar9,local_5c);
      local_58 = local_30;
      local_54 = local_2c;
      local_50 = pbStack_28;
    }
    FUN_00ce5c94(&local_48);
    local_60 = local_64;
  }
LAB_00f646dc:
  if ((char)local_58 == '\a') {
    *(undefined1 *)param_1 = 7;
    return;
  }
  *param_1 = local_58;
  param_1[1] = local_54;
  param_1[2] = local_50;
  *param_2 = local_60;
  param_2[1] = local_5c;
  return;
}

