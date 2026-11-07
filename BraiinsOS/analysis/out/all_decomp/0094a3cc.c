// FUN_0094a3cc @ 0094a3cc size=1216 calls_out=16 calls_in=1
// strings: struc | struc

void FUN_0094a3cc(undefined4 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *unaff_r8;
  bool bVar13;
  ulonglong uVar14;
  char *local_48;
  undefined4 local_44;
  char *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  int local_30;
  char *local_2c;
  undefined4 local_28;
  
  uVar9 = *(uint *)(param_2 + 0x14);
  local_44 = 0x15;
  local_48 = "struc";
  if (uVar9 < *(uint *)(param_2 + 0x10)) {
    puVar12 = (undefined4 *)&LAB_00800012_1;
    do {
      uVar11 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar9);
      if ((0x17 < uVar11 - 9) || ((1 << (uVar11 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar11 == 0x5b) {
          cVar1 = param_2[0x24];
          param_2[0x24] = cVar1 + -1;
          if ((char)(cVar1 + -1) != '\0') {
            *(uint *)(param_2 + 0x14) = uVar9 + 1;
            local_3c = 0x15;
            local_28 = CONCAT31(local_28._1_3_,1);
            local_40 = "struc";
            local_2c = param_2;
            FUN_005e5d80(&local_38,&local_2c);
            if ((char)local_38 == '\x01') {
LAB_0094a620:
              unaff_r8 = local_34;
LAB_0094a624:
              bVar13 = true;
            }
            else {
              if (local_38._1_1_ != '\x01') {
                unaff_r8 = (undefined4 *)FUN_00f2c2f0(0,&local_40,&DAT_01868238);
                goto LAB_0094a624;
              }
              uVar14 = FUN_008fa5b8(local_2c);
              puVar10 = (undefined4 *)(uVar14 >> 0x20);
              bVar13 = true;
              if ((uVar14 & 1) == 0) {
                FUN_005e5d80(&local_38,&local_2c);
                if ((char)local_38 == '\x01') goto LAB_0094a620;
                if (local_38._1_1_ != '\x01') {
                  unaff_r8 = (undefined4 *)FUN_00f2c2f0(1,&local_40,&DAT_01868238);
                  goto LAB_0094a624;
                }
                uVar14 = FUN_008fa5b8(local_2c);
                unaff_r8 = (undefined4 *)(uVar14 >> 0x20);
                bVar13 = (uVar14 & 1) != 0;
                if (!bVar13) {
                  puVar12 = unaff_r8;
                  unaff_r8 = puVar10;
                }
              }
              else {
                unaff_r8 = puVar10;
              }
            }
            param_2[0x24] = param_2[0x24] + '\x01';
            puVar7 = (undefined4 *)FUN_008fad50(param_2);
            puVar10 = unaff_r8;
            if (!bVar13) goto joined_r0x0094a6ec;
            if (puVar7 == (undefined4 *)0x0) goto LAB_0094a76c;
            FUN_005c3974();
            goto LAB_0094a764;
          }
        }
        else {
          if (uVar11 != 0x7b) {
            unaff_r8 = (undefined4 *)FUN_005b8238(param_2,&local_48,&DAT_01868238);
            goto LAB_0094a76c;
          }
          cVar1 = param_2[0x24];
          param_2[0x24] = cVar1 + -1;
          if ((char)(cVar1 + -1) != '\0') {
            *(uint *)(param_2 + 0x14) = uVar9 + 1;
            bVar2 = false;
            bVar13 = false;
            local_3c = CONCAT31(local_3c._1_3_,1);
            local_40 = param_2;
            goto LAB_0094a4b0;
          }
        }
        local_38 = (char **)0x18;
        goto LAB_0094a43c;
      }
      uVar9 = uVar9 + 1;
      *(uint *)(param_2 + 0x14) = uVar9;
    } while (*(uint *)(param_2 + 0x10) != uVar9);
  }
  local_38 = (char **)0x5;
LAB_0094a43c:
  uVar4 = FUN_008f9984(param_2,&local_38);
  goto LAB_0094a778;
LAB_0094a4b0:
  FUN_008fa450(&local_38,&local_40);
  if ((char)local_38 == '\x01') goto LAB_0094a650;
  if (local_38._1_1_ != '\x01') {
    if (bVar13) {
      bVar13 = false;
      if (bVar2) goto LAB_0094a700;
      puVar8 = &DAT_0057a25d;
LAB_0094a824:
      local_28 = 3;
      local_2c = &DAT_003cf225;
    }
    else {
      puVar8 = &DAT_0057a25d;
LAB_0094a800:
      local_28 = 5;
      local_2c = &DAT_003cf220;
    }
    local_34 = &DAT_0157d360;
    local_38 = &local_2c;
    unaff_r8 = (undefined4 *)FUN_00f56780(puVar8,&local_38);
LAB_0094a84c:
    goto LAB_0094a6fc;
  }
  iVar5 = *(int *)(local_40 + 0x14);
  local_40[8] = '\0';
  local_40[9] = '\0';
  local_40[10] = '\0';
  local_40[0xb] = '\0';
  *(int *)(local_40 + 0x14) = iVar5 + 1;
  FUN_0157e384(&local_38,local_40 + 0xc);
  iVar5 = local_30;
  puVar10 = local_34;
  if (local_38 == (char **)&SUB_00000002) {
    unaff_r8 = local_34;
    goto LAB_0094a6fc;
  }
  if (local_30 != 5) {
    if (local_30 == 3) {
      iVar6 = thunk_FUN_016dd50a(local_34,&DAT_003cf225,3);
      pcVar3 = local_40;
      if (iVar6 == 0) {
        if (bVar2) {
          puVar8 = &DAT_00582dbd;
          goto LAB_0094a824;
        }
        puVar12 = (undefined4 *)FUN_01114eb4(local_40);
        if (puVar12 == (undefined4 *)0x0) {
          uVar14 = FUN_008fa5b8(pcVar3);
          puVar12 = (undefined4 *)(uVar14 >> 0x20);
          if ((uVar14 & 1) == 0) {
            bVar2 = true;
            goto LAB_0094a4b0;
          }
        }
        unaff_r8 = puVar12;
        goto LAB_0094a6fc;
      }
    }
LAB_0094a7d4:
    unaff_r8 = (undefined4 *)FUN_00953cf8(puVar10,iVar5,&DAT_018681c0,2);
    goto LAB_0094a84c;
  }
  iVar6 = thunk_FUN_016dd50a(local_34,&DAT_003cf220,5);
  pcVar3 = local_40;
  if (iVar6 != 0) goto LAB_0094a7d4;
  if (bVar13) {
    puVar8 = &DAT_00582dbd;
    goto LAB_0094a800;
  }
  unaff_r8 = (undefined4 *)FUN_01114eb4(local_40);
  if (unaff_r8 != (undefined4 *)0x0) goto LAB_0094a6fc;
  uVar14 = FUN_008fa5b8(pcVar3);
  unaff_r8 = (undefined4 *)(uVar14 >> 0x20);
  if ((uVar14 & 1) != 0) goto LAB_0094a6fc;
  bVar13 = true;
  goto LAB_0094a4b0;
LAB_0094a650:
  unaff_r8 = local_34;
LAB_0094a6fc:
  bVar13 = true;
LAB_0094a700:
  param_2[0x24] = param_2[0x24] + '\x01';
  puVar7 = (undefined4 *)FUN_008fb5ec(param_2);
  puVar10 = unaff_r8;
  if (bVar13) {
    if (puVar7 != (undefined4 *)0x0) {
      FUN_005c3974();
LAB_0094a764:
      thunk_FUN_016d3fb4(puVar7);
    }
  }
  else {
joined_r0x0094a6ec:
    unaff_r8 = puVar7;
    if (unaff_r8 == (undefined4 *)0x0) {
      param_1[1] = puVar12;
      *(undefined1 *)(param_1 + 2) = 0;
      *param_1 = puVar10;
      return;
    }
  }
LAB_0094a76c:
  uVar4 = FUN_00e959bc(unaff_r8,param_2);
LAB_0094a778:
  *(undefined1 *)(param_1 + 2) = 2;
  *param_1 = uVar4;
  return;
}

