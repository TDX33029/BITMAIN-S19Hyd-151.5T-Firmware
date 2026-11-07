// FUN_018a4d18 @ 018a4d18 size=944 calls_out=7 calls_in=1
// strings: {recursion limit reached}

undefined4 FUN_018a4d18(int *param_1)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int local_5c;
  uint local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  undefined4 uStack_44;
  undefined2 local_40;
  undefined1 *local_38;
  undefined4 uStack_34;
  undefined2 local_30;
  byte local_2e;
  byte local_2d;
  
  if (*param_1 == 0) {
    if (param_1[4] != 0) {
      uVar5 = FUN_012fb940(param_1[4],&DAT_005258a1,1);
      return uVar5;
    }
  }
  else {
    FUN_018a45bc(&local_5c,param_1);
    if (local_5c == 0) {
      if (param_1[4] != 0) {
        pcVar6 = "{recursion limit reached}";
        if ((char)local_58 == '\0') {
          pcVar6 = 
          "{invalid syntax}struct ErrorCodeInvalidCrlNumber/etc/bos_ref.cfgSessionTicketAck\x05";
        }
        uVar5 = 0x10;
        if ((char)local_58 != '\0') {
          uVar5 = 0x19;
        }
        iVar3 = FUN_012fb940(param_1[4],pcVar6,uVar5);
        if (iVar3 != 0) {
          return 1;
        }
      }
      *(char *)(param_1 + 1) = (char)local_58;
    }
    else {
      if ((local_58 & 1) == 0) {
        uVar9 = local_58 & 0x7ffffffe;
        local_4c = 2;
        local_50 = 0;
        local_58 = uVar9;
        local_54 = local_5c + uVar9;
        do {
          puVar2 = (undefined1 *)FUN_018a53f8(&local_5c);
          if (puVar2 == (undefined1 *)0x110001) {
            puVar8 = (undefined4 *)param_1[4];
            if (puVar8 == (undefined4 *)0x0) {
              return 0;
            }
            iVar3 = (**(code **)(puVar8[1] + 0x10))(*puVar8,0x22);
            if (iVar3 != 0) {
              return 1;
            }
            local_4c = 2;
            local_50 = 0;
            puVar4 = (undefined4 *)((uint)&local_48 | 2);
            local_58 = uVar9;
            local_54 = local_5c + uVar9;
            goto LAB_018a4e94;
          }
        } while (puVar2 != &DAT_00110000);
      }
      if ((param_1[4] != 0) && (iVar3 = FUN_012fb940(param_1[4],&DAT_005687f8,0x10), iVar3 != 0)) {
        return 1;
      }
      *(undefined1 *)(param_1 + 1) = 0;
    }
    *param_1 = 0;
  }
  return 0;
LAB_018a4e94:
  while( true ) {
    puVar2 = (undefined1 *)FUN_018a53f8(&local_5c);
    if (puVar2 == (undefined1 *)0x110001) {
                    /* WARNING: Could not recover jumptable at 0x018a509c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(puVar8[1] + 0x10))(*puVar8,0x22);
      return uVar5;
    }
    if (puVar2 == &DAT_00110000) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_38,&DAT_01d22394,&DAT_01d22374);
    }
    if (puVar2 != (undefined1 *)0x27) break;
    iVar3 = (**(code **)(puVar8[1] + 0x10))(*puVar8,0x27);
    if (iVar3 != 0) {
      return 1;
    }
  }
  if ((int)puVar2 < 0xd) {
    if (puVar2 == (undefined1 *)0x0) {
      puVar4[1] = 0;
      *puVar4 = 0;
      uVar1 = 0x305c;
    }
    else if (puVar2 == (undefined1 *)0x9) {
      puVar4[1] = 0;
      *puVar4 = 0;
      uVar1 = 0x745c;
    }
    else {
      if (puVar2 != (undefined1 *)0xa) goto LAB_018a4f70;
      puVar4[1] = 0;
      *puVar4 = 0;
      uVar1 = 0x6e5c;
    }
LAB_018a4fd8:
    uVar9 = 0;
    local_48 = (undefined1 *)CONCAT22(local_48._2_2_,uVar1);
    uVar11 = 2;
  }
  else {
    if (puVar2 == (undefined1 *)0xd) {
      puVar4[1] = 0;
      *puVar4 = 0;
      uVar1 = 0x725c;
      goto LAB_018a4fd8;
    }
    if (puVar2 == (undefined1 *)0x22) {
      puVar4[1] = 0;
      *puVar4 = 0;
      uVar1 = 0x225c;
      goto LAB_018a4fd8;
    }
    if (puVar2 == (undefined1 *)0x5c) {
      puVar4[1] = 0;
      *puVar4 = 0;
      uVar1 = 0x5c5c;
      goto LAB_018a4fd8;
    }
LAB_018a4f70:
    if ((((uint)puVar2 >> 8 < 3) || (iVar3 = FUN_012faed8(puVar2), iVar3 == 0)) &&
       (iVar3 = FUN_012fab74(puVar2), iVar3 != 0)) {
      uVar11 = 0x81;
      uVar9 = 0x80;
      local_48 = puVar2;
    }
    else {
      FUN_01af79b0(&local_38,puVar2);
      local_48 = local_38;
      uStack_44 = uStack_34;
      uVar9 = (uint)local_2e;
      uVar11 = (uint)local_2d;
      local_40 = local_30;
    }
  }
  puVar2 = local_48;
  local_38 = local_48;
  uStack_34 = uStack_44;
  uVar10 = uVar11;
  if (uVar11 < uVar9) {
    uVar10 = uVar9;
  }
  local_30 = local_40;
  while (uVar10 != uVar9) {
    puVar7 = puVar2;
    if (uVar11 < 0x81) {
      puVar7 = (undefined1 *)(uint)*(byte *)((int)&local_38 + uVar9);
    }
    iVar3 = (**(code **)(puVar8[1] + 0x10))(*puVar8,puVar7);
    uVar9 = uVar9 + 1;
    if (iVar3 != 0) {
      return 1;
    }
  }
  goto LAB_018a4e94;
}

