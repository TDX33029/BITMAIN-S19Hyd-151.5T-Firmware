// FUN_0124950c @ 0124950c size=1120 calls_out=14 calls_in=1
// strings: struct RangeInclusivestruct FormatHeader with 4 elements | start | struct RangeInclusivestruct FormatHeader with 4 elements | start | start

void FUN_0124950c(undefined4 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined2 *unaff_r8;
  bool bVar14;
  ulonglong uVar15;
  undefined2 *local_4c;
  char *local_48;
  undefined4 local_44;
  char *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 *local_34;
  int local_30;
  char *local_2c;
  undefined4 local_28;
  
  uVar12 = *(uint *)(param_2 + 0x14);
  local_48 = "struct RangeInclusivestruct FormatHeader with 4 elements";
  local_44 = 0x15;
  if (uVar12 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar13 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar12);
      if ((0x17 < uVar13 - 9) || ((1 << (uVar13 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar13 == 0x5b) {
          cVar1 = param_2[0x24];
          param_2[0x24] = cVar1 + -1;
          if ((char)(cVar1 + -1) != '\0') {
            *(uint *)(param_2 + 0x14) = uVar12 + 1;
            local_28 = CONCAT31(local_28._1_3_,1);
            local_3c = 0x15;
            local_40 = "struct RangeInclusivestruct FormatHeader with 4 elements";
            local_2c = param_2;
            FUN_01224e64(&local_38,&local_2c);
            puVar11 = local_34;
            if (local_38 == (char **)0x2) {
LAB_0124974c:
              puVar11 = local_34;
LAB_01249750:
              bVar2 = true;
            }
            else {
              if (((uint)local_38 & 1) == 0) {
                uVar5 = 0;
LAB_01249960:
                puVar11 = (undefined2 *)FUN_014b5c7c(uVar5,&local_40,&DAT_01c24d8c);
                goto LAB_01249750;
              }
              FUN_01224e64(&local_38,&local_2c);
              if (local_38 == (char **)0x2) goto LAB_0124974c;
              if (((uint)local_38 & 1) == 0) {
                uVar5 = 1;
                goto LAB_01249960;
              }
              bVar2 = false;
              unaff_r8 = local_34;
            }
            param_2[0x24] = param_2[0x24] + '\x01';
            puVar9 = (undefined2 *)FUN_01964fb0(param_2);
            if (!bVar2) {
              puVar8 = puVar9;
              if (puVar9 != (undefined2 *)0x0) goto LAB_01249834;
              goto LAB_012497fc;
            }
            puVar8 = puVar11;
            if (puVar9 == (undefined2 *)0x0) goto LAB_01249834;
            FUN_01225578(puVar9);
            goto LAB_01249830;
          }
        }
        else {
          if (uVar13 != 0x7b) {
            puVar8 = (undefined2 *)FUN_019659c8(param_2,&local_48,&DAT_01c24d8c);
            goto LAB_01249834;
          }
          cVar1 = param_2[0x24];
          param_2[0x24] = cVar1 + -1;
          if ((char)(cVar1 + -1) != '\0') {
            bVar3 = false;
            *(uint *)(param_2 + 0x14) = uVar12 + 1;
            bVar2 = false;
            bVar14 = false;
            local_3c = CONCAT31(local_3c._1_3_,1);
            local_40 = param_2;
            goto LAB_012495e4;
          }
        }
        local_38 = (char **)0x18;
        goto LAB_0124957c;
      }
      uVar12 = uVar12 + 1;
      *(uint *)(param_2 + 0x14) = uVar12;
    } while (*(uint *)(param_2 + 0x10) != uVar12);
  }
  local_38 = (char **)0x5;
LAB_0124957c:
  uVar5 = FUN_01964674(param_2,&local_38);
  goto LAB_0124958c;
LAB_012495e4:
  FUN_01965d20(&local_38,&local_40);
  if ((char)local_38 != '\x01') {
    if (local_38._1_1_ != '\x01') {
      if (bVar14) {
        if (bVar3) {
          bVar2 = false;
          puVar11 = unaff_r8;
          unaff_r8 = local_4c;
        }
        else {
          local_28 = 3;
          local_34 = &DAT_0132b6a0;
          local_38 = &local_2c;
          local_2c = "end";
          puVar11 = (undefined2 *)FUN_019676ac(&DAT_0057cd64,&local_38);
          bVar2 = true;
        }
        goto LAB_01249794;
      }
      puVar10 = &DAT_0057cd64;
LAB_01249890:
      local_28 = 5;
      local_2c = "start";
LAB_012498a0:
      local_34 = &DAT_0132b6a0;
      local_38 = &local_2c;
      puVar11 = (undefined2 *)FUN_019676ac(puVar10,&local_38);
LAB_012498b8:
      goto LAB_01249760;
    }
    iVar6 = *(int *)(local_40 + 0x14);
    local_40[8] = '\0';
    local_40[9] = '\0';
    local_40[10] = '\0';
    local_40[0xb] = '\0';
    *(int *)(local_40 + 0x14) = iVar6 + 1;
    FUN_019686b4(&local_38,local_40 + 0xc);
    iVar6 = local_30;
    puVar11 = local_34;
    if (local_38 == (char **)0x2) goto LAB_01249760;
    if (local_30 == 5) {
      iVar7 = thunk_FUN_01bed842(local_34,"start",5);
      if (iVar7 != 0) {
LAB_01249840:
        puVar11 = (undefined2 *)FUN_0124a068(puVar11,iVar6,&DAT_01c24cdc,2);
        goto LAB_012498b8;
      }
      if (bVar2) {
        puVar10 = &DAT_005ab34f;
        goto LAB_01249890;
      }
      uVar15 = FUN_01224b8c(local_40);
      puVar11 = (undefined2 *)(uVar15 >> 0x20);
      if ((uVar15 & 1) != 0) goto LAB_01249760;
      bVar2 = true;
      bVar14 = true;
      unaff_r8 = puVar11;
    }
    else {
      if ((local_30 != 3) || (iVar7 = thunk_FUN_01bed842(local_34,"end",3), iVar7 != 0))
      goto LAB_01249840;
      if (bVar3) {
        local_28 = 3;
        puVar10 = &DAT_005ab34f;
        local_2c = "end";
        goto LAB_012498a0;
      }
      uVar15 = FUN_01224b8c(local_40);
      local_4c = (undefined2 *)(uVar15 >> 0x20);
      puVar11 = local_4c;
      if ((uVar15 & 1) != 0) goto LAB_01249760;
      bVar3 = true;
    }
    goto LAB_012495e4;
  }
  puVar11 = local_34;
LAB_01249760:
  bVar2 = true;
LAB_01249794:
  param_2[0x24] = param_2[0x24] + '\x01';
  puVar8 = (undefined2 *)FUN_019650c4(param_2);
  if (bVar2) {
    if (puVar8 != (undefined2 *)0x0) {
      FUN_01225578();
    }
LAB_01249830:
    puVar8 = puVar11;
  }
  else if (puVar8 == (undefined2 *)0x0) {
LAB_012497fc:
    *param_1 = puVar11;
    param_1[1] = unaff_r8;
    uVar4 = 0;
    goto LAB_01249804;
  }
LAB_01249834:
  uVar5 = FUN_01966f00(puVar8,param_2);
LAB_0124958c:
  *param_1 = uVar5;
  uVar4 = 2;
LAB_01249804:
  *(undefined1 *)(param_1 + 2) = uVar4;
  return;
}

