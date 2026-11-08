// FUN_00f597d4 @ 00f597d4 size=1240 calls_out=19 calls_in=1
// strings: period_s | period_s

void FUN_00f597d4(undefined4 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  char *unaff_r10;
  ulonglong uVar14;
  int local_5c;
  undefined4 local_58;
  undefined4 local_50;
  char *local_4c;
  undefined *local_48;
  undefined1 *local_44;
  undefined *local_40;
  undefined1 *local_3c;
  char *local_38;
  undefined1 local_34;
  char *local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  uVar5 = *(uint *)(param_2 + 0x10);
  uVar11 = *(uint *)(param_2 + 0x14);
  if (uVar11 < uVar5) {
    do {
      uVar13 = *(byte *)(*(int *)(param_2 + 0xc) + uVar11) - 9;
      if ((0x17 < uVar13) || ((1 << (uVar13 & 0xff) & 0x800013U) == 0)) {
        if (*(byte *)(*(int *)(param_2 + 0xc) + uVar11) != 0x6e) goto LAB_00f5983c;
        uVar12 = uVar11 + 1;
        *(uint *)(param_2 + 0x14) = uVar12;
        uVar13 = uVar5;
        if (uVar5 < uVar12) {
          uVar13 = uVar12;
        }
        if (uVar12 < uVar5) {
          iVar8 = *(int *)(param_2 + 0xc);
          cVar1 = *(char *)(iVar8 + uVar12);
          uVar5 = uVar11 + 2;
          *(uint *)(param_2 + 0x14) = uVar5;
          if (cVar1 == 'u') {
            if (uVar5 == uVar13) goto LAB_00f59bd4;
            cVar1 = *(char *)(iVar8 + uVar5);
            uVar5 = uVar11 + 3;
            *(uint *)(param_2 + 0x14) = uVar5;
            if (cVar1 == 'l') {
              if (uVar5 == uVar13) goto LAB_00f59bd4;
              cVar1 = *(char *)(iVar8 + uVar5);
              *(uint *)(param_2 + 0x14) = uVar11 + 4;
              if (cVar1 == 'l') {
                *param_1 = 0;
                return;
              }
            }
          }
          local_50 = (char **)0x9;
        }
        else {
LAB_00f59bd4:
          local_50 = (char **)0x5;
        }
        uVar6 = FUN_00f4c908(param_2,&local_50);
        goto LAB_00f59c34;
      }
      uVar11 = uVar11 + 1;
      *(uint *)(param_2 + 0x14) = uVar11;
    } while (uVar5 != uVar11);
  }
  else {
LAB_00f5983c:
    if (uVar11 < uVar5) {
      do {
        uVar13 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar11);
        if ((0x17 < uVar13 - 9) || ((1 << (uVar13 - 9 & 0xff) & 0x800013U) == 0)) {
          if (uVar13 == 0x5b) {
            cVar1 = param_2[0x1c];
            param_2[0x1c] = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              *(uint *)(param_2 + 0x14) = uVar11 + 1;
              local_2c = CONCAT31(local_2c._1_3_,1);
              local_30 = param_2;
              FUN_00f4df24(&local_50,&local_30);
              uVar14 = CONCAT44(local_4c,1);
              if ((char)local_50 != '\x01') {
                if (local_50._1_1_ == '\x01') {
                  uVar14 = FUN_00f4e104(local_30);
                }
                else {
                  uVar6 = FUN_00f2c2f0(0,&DAT_0187f238,&DAT_018ab990);
                  uVar14 = CONCAT44(uVar6,1);
                }
              }
              unaff_r10 = (char *)(uVar14 >> 0x20);
              param_2[0x1c] = param_2[0x1c] + '\x01';
              pcVar9 = (char *)FUN_00f4cc54(param_2);
              pcVar4 = unaff_r10;
              pcVar7 = local_30;
              if ((uVar14 & 1) == 0) goto joined_r0x00f59ab0;
              if (pcVar9 == (char *)0x0) goto LAB_00f59c1c;
              FUN_005c3974();
              goto LAB_00f59c14;
            }
          }
          else {
            if (uVar13 != 0x7b) {
              unaff_r10 = (char *)FUN_00f4db6c(param_2,&uStack_25,&DAT_0187f298);
              goto LAB_00f59c1c;
            }
            cVar1 = param_2[0x1c];
            param_2[0x1c] = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              *(uint *)(param_2 + 0x14) = uVar11 + 1;
              local_34 = 1;
              bVar3 = false;
              local_38 = param_2;
              goto LAB_00f598f4;
            }
          }
          local_50 = (char **)0x18;
          goto LAB_00f59878;
        }
        uVar11 = uVar11 + 1;
        *(uint *)(param_2 + 0x14) = uVar11;
      } while (uVar5 != uVar11);
    }
  }
  local_50 = (char **)0x5;
LAB_00f59878:
  uVar6 = FUN_01143ab8(param_2,&local_50);
  goto LAB_00f59c34;
  while (pcVar7 = (char *)FUN_00f4e360(pcVar7), pcVar7 == (char *)0x0) {
LAB_00f598f4:
    FUN_00f4d74c(&local_50,&local_38);
    pcVar7 = local_38;
    if ((char)local_50 == '\x01') {
      pcVar9 = local_4c;
LAB_00f59b04:
      bVar2 = true;
      unaff_r10 = pcVar9;
      goto LAB_00f59b14;
    }
    if (local_50._1_1_ != '\x01') {
      bVar2 = false;
      if (!bVar3) {
        puVar10 = &DAT_0057a25d;
LAB_00f59ae0:
        local_4c = (char *)&DAT_0157d360;
        local_50 = &local_30;
        local_30 = "period_s";
        local_2c = 8;
        pcVar9 = (char *)FUN_00f56780(puVar10,&local_50);
LAB_00f59b00:
        goto LAB_00f59b04;
      }
      goto LAB_00f59b14;
    }
    iVar8 = *(int *)(local_38 + 0x14);
    local_38[8] = '\0';
    local_38[9] = '\0';
    local_38[10] = '\0';
    local_38[0xb] = '\0';
    *(int *)(local_38 + 0x14) = iVar8 + 1;
    FUN_0157e5fc(&local_50,local_38 + 0xc,local_38);
    pcVar9 = local_4c;
    if (local_50 == (char **)&SUB_00000002) goto LAB_00f59b00;
    if ((local_48 == (undefined *)0x8) &&
       (iVar8 = thunk_FUN_016dd50a(local_4c,"period_s",8), iVar8 == 0)) {
      if (bVar3) {
        puVar10 = &DAT_00582dbd;
        goto LAB_00f59ae0;
      }
      unaff_r10 = (char *)FUN_00f4d8b4(pcVar7);
      if (unaff_r10 != (char *)0x0) {
        bVar2 = true;
        goto LAB_00f59b14;
      }
      uVar14 = FUN_00f4e104(pcVar7);
      unaff_r10 = (char *)(uVar14 >> 0x20);
      bVar2 = true;
      bVar3 = bVar2;
      if ((uVar14 & 1) != 0) goto LAB_00f59b14;
      goto LAB_00f598f4;
    }
  }
  bVar2 = true;
  unaff_r10 = pcVar7;
LAB_00f59b14:
  param_2[0x1c] = param_2[0x1c] + '\x01';
  pcVar9 = (char *)FUN_00f4cfec(param_2);
  pcVar4 = unaff_r10;
  pcVar7 = local_30;
  if (bVar2) {
    if (pcVar9 != (char *)0x0) {
      FUN_005c3974();
LAB_00f59c14:
      thunk_FUN_016d3fb4(pcVar9);
    }
  }
  else {
joined_r0x00f59ab0:
    local_30 = pcVar4;
    unaff_r10 = pcVar9;
    if (unaff_r10 == (char *)0x0) {
      if (local_30 + -300 < (char *)0x93955) {
        param_1[1] = local_30;
        *param_1 = 1;
        return;
      }
      local_50 = &local_30;
      local_40 = &DAT_005a2bb4;
      local_3c = &LAB_00fac484;
      local_44 = &LAB_00fac484;
      local_4c = &LAB_00fac484;
      local_48 = &DAT_00568fac;
      FUN_00600d2c(&local_5c,&DAT_0059647e,&local_50);
      if (local_5c == -0x80000000) {
        param_1[1] = local_58;
        *param_1 = 1;
        return;
      }
      uVar6 = FUN_00f57eb4(&local_5c);
      goto LAB_00f59c34;
    }
    local_30 = pcVar7;
  }
LAB_00f59c1c:
  uVar6 = FUN_011257e4(unaff_r10,param_2);
LAB_00f59c34:
  param_1[1] = uVar6;
  *param_1 = 2;
  return;
}

