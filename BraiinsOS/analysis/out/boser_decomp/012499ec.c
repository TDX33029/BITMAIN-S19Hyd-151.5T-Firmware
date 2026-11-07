// FUN_012499ec @ 012499ec size=1212 calls_out=15 calls_in=1
// strings: min_voltage | max_voltage | min_voltage | max_voltage | max_voltage | min_voltage

void FUN_012499ec(undefined4 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  undefined2 *puVar10;
  uint uVar11;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  char *local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined2 *local_4c;
  undefined2 *local_48;
  undefined4 uStack_44;
  char *local_40;
  undefined4 local_3c;
  
  uVar9 = *(uint *)(param_2 + 0x14);
  if (uVar9 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar11 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar9);
      puVar10 = (undefined2 *)(uVar11 - 9);
      if (((undefined2 *)0x17 < puVar10) || ((1 << ((uint)puVar10 & 0xff) & 0x800013U) == 0)) {
        if (uVar11 == 0x5b) {
          cVar1 = param_2[0x24];
          param_2[0x24] = cVar1 + -1;
          if ((char)(cVar1 + -1) != '\0') {
            *(uint *)(param_2 + 0x14) = uVar9 + 1;
            local_3c = CONCAT31(local_3c._1_3_,1);
            local_40 = param_2;
            FUN_01224fc0(&local_50,&local_40);
            if (local_50 == (char **)0x2 && local_4c == (undefined2 *)0x0) {
LAB_01249c9c:
              bVar2 = true;
              puVar10 = local_48;
            }
            else {
              if (((uint)local_50 & 1) == 0) {
                local_48 = (undefined2 *)FUN_014b5c7c(0,&DAT_01c249a4,&DAT_01d064b8);
                goto LAB_01249c9c;
              }
              unaff_d8 = CONCAT44(uStack_44,local_48);
              FUN_01224fc0(&local_50,&local_40);
              if (local_50 == (char **)0x2 && local_4c == (undefined2 *)0x0) goto LAB_01249c9c;
              if (((uint)local_50 & 1) == 0) {
                local_48 = (undefined2 *)FUN_014b5c7c(1,&DAT_01c249a4,&DAT_01d064b8);
                goto LAB_01249c9c;
              }
              unaff_d9 = CONCAT44(uStack_44,local_48);
              bVar2 = false;
            }
            param_2[0x24] = param_2[0x24] + '\x01';
            puVar8 = (undefined2 *)FUN_01964fb0(param_2);
            goto joined_r0x01249cd4;
          }
        }
        else {
          if (uVar11 != 0x7b) {
            puVar8 = (undefined2 *)FUN_019659c8(param_2,&local_50,&DAT_01c24aac);
            goto LAB_01249d38;
          }
          cVar1 = param_2[0x24];
          param_2[0x24] = cVar1 + -1;
          if ((char)(cVar1 + -1) != '\0') {
            *(uint *)(param_2 + 0x14) = uVar9 + 1;
            local_54 = 1;
            bVar4 = false;
            bVar3 = false;
            bVar2 = false;
            local_58 = param_2;
            goto LAB_01249ad0;
          }
        }
        local_50 = (char **)0x18;
        goto LAB_01249a4c;
      }
      uVar9 = uVar9 + 1;
      *(uint *)(param_2 + 0x14) = uVar9;
    } while (*(uint *)(param_2 + 0x10) != uVar9);
  }
  local_50 = (char **)0x5;
LAB_01249a4c:
  uVar6 = FUN_01964674(param_2,&local_50);
  goto LAB_01249a5c;
LAB_01249ad0:
  FUN_01965d20(&local_50,&local_58);
  if ((char)local_50 == '\x01') goto LAB_01249d00;
  if (local_50._1_1_ != '\x01') {
    if (bVar2) {
      if (bVar4) {
        bVar2 = false;
        goto LAB_01249d10;
      }
      local_40 = "max_voltage";
    }
    else {
      local_40 = "min_voltage";
    }
    local_3c = 0xb;
    local_4c = &DAT_0132b6a0;
    local_50 = &local_40;
    puVar10 = (undefined2 *)FUN_019676ac(&DAT_0057cd64,&local_50);
    bVar2 = true;
    goto LAB_01249d10;
  }
  iVar7 = *(int *)(local_58 + 0x14);
  local_58[8] = '\0';
  local_58[9] = '\0';
  local_58[10] = '\0';
  local_58[0xb] = '\0';
  *(int *)(local_58 + 0x14) = iVar7 + 1;
  FUN_019686b4(&local_50,local_58 + 0xc);
  puVar10 = local_4c;
  if (local_50 == (char **)0x2) goto LAB_01249d0c;
  if (local_48 == (undefined2 *)0xb) {
    iVar7 = thunk_FUN_01bed842(local_4c,"min_voltage",0xb);
    if (iVar7 == 0) {
      if (bVar3) {
        local_40 = "min_voltage";
LAB_01249e88:
        local_3c = 0xb;
        local_4c = &DAT_0132b6a0;
        local_50 = &local_40;
        puVar10 = (undefined2 *)FUN_019676ac(&DAT_005ab34f,&local_50);
        goto LAB_01249d0c;
      }
      FUN_01224bf0(&local_50,local_58);
      if (local_50 == (char **)0x0) {
        unaff_d8 = CONCAT44(uStack_44,local_48);
        bVar3 = true;
        bVar2 = true;
        goto LAB_01249ad0;
      }
    }
    else {
      iVar7 = thunk_FUN_01bed842(puVar10,"max_voltage",0xb);
      if (iVar7 != 0) goto LAB_01249b68;
      if (bVar4) {
        local_40 = "max_voltage";
        goto LAB_01249e88;
      }
      FUN_01224bf0(&local_50,local_58);
      if (local_50 == (char **)0x0) {
        unaff_d9 = CONCAT44(uStack_44,local_48);
        bVar4 = true;
        goto LAB_01249ad0;
      }
    }
LAB_01249d00:
    puVar10 = local_4c;
    goto LAB_01249d0c;
  }
LAB_01249b68:
  pcVar5 = local_58;
  puVar8 = (undefined2 *)FUN_01965c98(local_58);
  if ((puVar8 != (undefined2 *)0x0) ||
     (puVar8 = (undefined2 *)FUN_01965eac(pcVar5), puVar8 != (undefined2 *)0x0)) goto LAB_01249ca0;
  goto LAB_01249ad0;
LAB_01249ca0:
  puVar10 = puVar8;
LAB_01249d0c:
  bVar2 = true;
LAB_01249d10:
  param_2[0x24] = param_2[0x24] + '\x01';
  puVar8 = (undefined2 *)FUN_019650c4(param_2);
joined_r0x01249cd4:
  if (bVar2) {
    if (puVar8 != (undefined2 *)0x0) {
      FUN_01225578();
    }
    puVar8 = puVar10;
  }
  else if (puVar8 == (undefined2 *)0x0) {
    uVar6 = 0;
    *(undefined8 *)(param_1 + 2) = unaff_d8;
    *(undefined8 *)(param_1 + 4) = unaff_d9;
    goto LAB_01249cec;
  }
LAB_01249d38:
  uVar6 = FUN_01966f00(puVar8,param_2);
LAB_01249a5c:
  param_1[1] = uVar6;
  uVar6 = 1;
LAB_01249cec:
  *param_1 = uVar6;
  return;
}

