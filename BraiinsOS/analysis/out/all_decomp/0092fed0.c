// FUN_0092fed0 @ 0092fed0 size=1204 calls_out=16 calls_in=1
// strings: min_voltage | max_voltage | min_voltage | max_voltage | max_voltage

void FUN_0092fed0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  uint in_fpscr;
  double unaff_d8;
  double unaff_d9;
  double dVar11;
  ulonglong uVar12;
  char *local_5c;
  undefined1 local_58;
  undefined4 local_54;
  char *local_50;
  int local_4c;
  char *local_48;
  undefined4 local_44;
  
  uVar9 = *(uint *)(param_2 + 0x14);
  if (uVar9 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar10 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar9);
      if ((0x17 < uVar10 - 9) || ((1 << (uVar10 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar10 == 0x5b) {
          cVar1 = param_2[0x24];
          param_2[0x24] = cVar1 + -1;
          if ((char)(cVar1 + -1) != '\0') {
            *(uint *)(param_2 + 0x14) = uVar9 + 1;
            local_44 = CONCAT31(local_44._1_3_,1);
            local_48 = param_2;
            FUN_005e5d80(&local_54,&local_48);
            if ((char)local_54 == '\x01') {
LAB_0093012c:
              bVar2 = true;
              pcVar6 = local_50;
            }
            else if (local_54._1_1_ == '\x01') {
              uVar12 = FUN_008faf0c(local_48);
              pcVar6 = (char *)(uVar12 >> 0x20);
              bVar2 = true;
              if ((uVar12 & 1) == 0) {
                FUN_005e5d80(&local_54,&local_48);
                if ((char)local_54 == '\x01') goto LAB_0093012c;
                if (local_54._1_1_ == '\x01') {
                  uVar12 = FUN_008faf0c(local_48);
                  pcVar7 = (char *)(uVar12 >> 0x20);
                  if ((uVar12 & 1) == 0) {
                    bVar2 = false;
                    dVar11 = (double)VectorUnsignedToFloat(pcVar6,(byte)(in_fpscr >> 0x16) & 3);
                    unaff_d8 = dVar11 / 1000.0;
                    dVar11 = (double)VectorUnsignedToFloat(pcVar7,(byte)(in_fpscr >> 0x16) & 3);
                    unaff_d9 = dVar11 / 1000.0;
                  }
                  else {
                    pcVar6 = pcVar7;
                  }
                }
                else {
                  bVar2 = true;
                  pcVar6 = (char *)FUN_00f2c2f0(1,&DAT_018673e0,&DAT_018ab990);
                }
              }
            }
            else {
              pcVar6 = (char *)FUN_00f2c2f0(0,&DAT_018673e0,&DAT_018ab990);
              bVar2 = true;
            }
            param_2[0x24] = param_2[0x24] + '\x01';
            pcVar7 = (char *)FUN_008fad50(param_2);
            if (!bVar2) goto LAB_009302b8;
            if (pcVar7 == (char *)0x0) goto LAB_009302f8;
            FUN_005c3974();
            goto LAB_009302f0;
          }
        }
        else {
          if (uVar10 != 0x7b) {
            pcVar7 = (char *)FUN_005b8238(param_2,&local_54,&DAT_018674f8);
            goto LAB_009302fc;
          }
          cVar1 = param_2[0x24];
          param_2[0x24] = cVar1 + -1;
          if ((char)(cVar1 + -1) != '\0') {
            *(uint *)(param_2 + 0x14) = uVar9 + 1;
            local_58 = 1;
            bVar2 = false;
            bVar3 = false;
            pcVar7 = (char *)0x7b;
            local_5c = param_2;
            goto LAB_0092ffa0;
          }
        }
        local_54 = (char **)0x18;
        goto LAB_0092ff30;
      }
      uVar9 = uVar9 + 1;
      *(uint *)(param_2 + 0x14) = uVar9;
    } while (*(uint *)(param_2 + 0x10) != uVar9);
  }
  local_54 = (char **)0x5;
LAB_0092ff30:
  uVar4 = FUN_008f9984(param_2,&local_54);
  goto LAB_00930304;
LAB_0092ffa0:
  pcVar6 = pcVar7;
  FUN_008fa450(&local_54,&local_5c);
  pcVar7 = local_5c;
  if ((char)local_54 == '\x01') {
    pcVar6 = local_50;
LAB_00930298:
    bVar2 = true;
    goto LAB_0093029c;
  }
  if (local_54._1_1_ != '\x01') {
    if (bVar2) {
      if (bVar3) {
        bVar2 = false;
        goto LAB_0093029c;
      }
      puVar8 = &DAT_0057a25d;
LAB_0093026c:
      local_48 = "max_voltage";
    }
    else {
      puVar8 = &DAT_0057a25d;
LAB_0093024c:
      local_48 = "min_voltage";
    }
    local_50 = (char *)&DAT_0157d360;
    local_44 = 0xb;
    local_54 = &local_48;
    pcVar6 = (char *)FUN_00f56780(puVar8,&local_54);
LAB_00930294:
    goto LAB_00930298;
  }
  iVar5 = *(int *)(local_5c + 0x14);
  local_5c[8] = '\0';
  local_5c[9] = '\0';
  local_5c[10] = '\0';
  local_5c[0xb] = '\0';
  *(int *)(local_5c + 0x14) = iVar5 + 1;
  FUN_0157e384(&local_54,local_5c + 0xc,local_5c);
  pcVar6 = local_50;
  if (local_54 == (char **)&SUB_00000002) goto LAB_00930294;
  if (local_4c == 0xb) {
    iVar5 = thunk_FUN_016dd50a(local_50,"min_voltage",0xb);
    if (iVar5 == 0) {
      if (bVar2) {
        puVar8 = &DAT_00582dbd;
        goto LAB_0093024c;
      }
      pcVar6 = (char *)FUN_01114eb4(pcVar7);
      if (pcVar6 != (char *)0x0) goto LAB_00930188;
      uVar12 = FUN_008faf0c(pcVar7);
      pcVar6 = (char *)(uVar12 >> 0x20);
      if ((uVar12 & 1) == 0) {
        bVar2 = true;
        dVar11 = (double)VectorUnsignedToFloat(pcVar6,(byte)(in_fpscr >> 0x16) & 3);
        unaff_d8 = dVar11 / 1000.0;
        goto LAB_0092ffa0;
      }
    }
    else {
      iVar5 = thunk_FUN_016dd50a(pcVar6,"max_voltage",0xb);
      if (iVar5 != 0) goto LAB_00930038;
      if (bVar3) {
        puVar8 = &DAT_00582dbd;
        goto LAB_0093026c;
      }
      pcVar6 = (char *)FUN_01114eb4(pcVar7);
      if (pcVar6 != (char *)0x0) goto LAB_00930188;
      uVar12 = FUN_008faf0c(pcVar7);
      pcVar6 = (char *)(uVar12 >> 0x20);
      if ((uVar12 & 1) == 0) {
        bVar3 = true;
        dVar11 = (double)VectorUnsignedToFloat(pcVar6,(byte)(in_fpscr >> 0x16) & 3);
        unaff_d9 = dVar11 / 1000.0;
        goto LAB_0092ffa0;
      }
    }
    bVar2 = true;
    goto LAB_0093029c;
  }
LAB_00930038:
  pcVar6 = (char *)FUN_01114eb4(pcVar7);
  if ((pcVar6 != (char *)0x0) || (pcVar6 = (char *)FUN_008f9ac0(pcVar7), pcVar6 != (char *)0x0))
  goto LAB_00930188;
  goto LAB_0092ffa0;
LAB_00930188:
  bVar2 = true;
LAB_0093029c:
  param_2[0x24] = param_2[0x24] + '\x01';
  pcVar7 = (char *)FUN_008fb5ec(param_2);
  if (bVar2) {
    if (pcVar7 != (char *)0x0) {
      FUN_005c3974();
LAB_009302f0:
      thunk_FUN_016d3fb4(pcVar7);
    }
LAB_009302f8:
    pcVar7 = pcVar6;
  }
  else {
LAB_009302b8:
    if (pcVar7 == (char *)0x0) {
      uVar4 = 0;
      *(double *)(param_1 + 2) = unaff_d8;
      *(double *)(param_1 + 4) = unaff_d9;
      goto LAB_009302cc;
    }
  }
LAB_009302fc:
  uVar4 = FUN_00e959bc(pcVar7,param_2);
LAB_00930304:
  param_1[1] = uVar4;
  uVar4 = 1;
LAB_009302cc:
  *param_1 = uVar4;
  return;
}

