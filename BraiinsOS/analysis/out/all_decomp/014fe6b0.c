// FUN_014fe6b0 @ 014fe6b0 size=980 calls_out=7 calls_in=1
// strings: {recursion limit reached}

undefined4 FUN_014fe6b0(int *param_1)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  code *pcVar9;
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
    if (param_1[4] == 0) {
      return 0;
    }
    uVar8 = FUN_00faace8(param_1[4],"?",1);
    return uVar8;
  }
  FUN_014fe234(&local_5c,param_1);
  if (local_5c == 0) {
    if (param_1[4] != 0) {
      pcVar5 = "{recursion limit reached}";
      if ((char)local_58 == '\0') {
        pcVar5 = &DAT_00564580;
      }
      uVar8 = 0x10;
      if ((char)local_58 != '\0') {
        uVar8 = 0x19;
      }
      iVar3 = FUN_00faace8(param_1[4],pcVar5,uVar8);
      if (iVar3 != 0) {
        return 1;
      }
    }
    *(char *)(param_1 + 1) = (char)local_58;
  }
  else {
    if ((local_58 & 1) == 0) {
      uVar10 = local_58 & 0x7ffffffe;
      local_4c = 2;
      local_50 = 0;
      local_58 = uVar10;
      local_54 = local_5c + uVar10;
      do {
        puVar2 = (undefined1 *)FUN_014fedec(&local_5c);
        if (puVar2 == (undefined1 *)0x110001) {
          puVar7 = (undefined4 *)param_1[4];
          if (puVar7 == (undefined4 *)0x0) {
            return 0;
          }
          iVar3 = (**(code **)(puVar7[1] + 0x10))(*puVar7,0x22);
          if (iVar3 != 0) {
            return 1;
          }
          local_4c = 2;
          local_50 = 0;
          puVar4 = (undefined4 *)((uint)&local_48 | 2);
          local_58 = uVar10;
          local_54 = local_5c + uVar10;
          goto LAB_014fe838;
        }
      } while (puVar2 != &DAT_00110000);
    }
    if ((param_1[4] != 0) && (iVar3 = FUN_00faace8(param_1[4],&DAT_00564580,0x10), iVar3 != 0)) {
      return 1;
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  *param_1 = 0;
  return 0;
LAB_014fe838:
  while( true ) {
    puVar2 = (undefined1 *)FUN_014fedec(&local_5c);
    if (puVar2 == (undefined1 *)0x110001) {
      uVar8 = (**(code **)(puVar7[1] + 0x10))(*puVar7,0x22);
      return uVar8;
    }
    if (puVar2 == &DAT_00110000) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_38,&DAT_018a73c8,&DAT_018a7388);
    }
    if (puVar2 != (undefined1 *)0x27) break;
    iVar3 = (**(code **)(puVar7[1] + 0x10))(*puVar7,0x27);
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
      if (puVar2 != (undefined1 *)0xa) goto LAB_014fe918;
      puVar4[1] = 0;
      *puVar4 = 0;
      uVar1 = 0x6e5c;
    }
LAB_014fe980:
    uVar10 = 0;
    local_48 = (undefined1 *)CONCAT22(local_48._2_2_,uVar1);
    uVar11 = 2;
LAB_014fe988:
    local_38 = local_48;
    uStack_34 = uStack_44;
    local_30 = local_40;
  }
  else {
    if (puVar2 == (undefined1 *)0xd) {
      puVar4[1] = 0;
      *puVar4 = 0;
      uVar1 = 0x725c;
      goto LAB_014fe980;
    }
    if (puVar2 == (undefined1 *)0x22) {
      puVar4[1] = 0;
      *puVar4 = 0;
      uVar1 = 0x225c;
      goto LAB_014fe980;
    }
    if (puVar2 == (undefined1 *)0x5c) {
      puVar4[1] = 0;
      *puVar4 = 0;
      uVar1 = 0x5c5c;
      goto LAB_014fe980;
    }
LAB_014fe918:
    if ((((uint)puVar2 >> 8 < 3) || (iVar3 = FUN_00faa250(puVar2), iVar3 == 0)) &&
       (iVar3 = FUN_00fa9eec(puVar2), iVar3 != 0)) {
      uVar10 = 0x80;
      uVar11 = 0x81;
      local_48 = puVar2;
      goto LAB_014fe988;
    }
    FUN_014ff0e4(&local_38,puVar2);
    local_48 = local_38;
    uStack_44 = uStack_34;
    local_40 = local_30;
    uVar10 = (uint)local_2e;
    uVar11 = (uint)local_2d;
    if (uVar11 <= uVar10) goto LAB_014fe838;
  }
  puVar2 = local_38;
  uVar8 = *puVar7;
  pcVar9 = *(code **)(puVar7[1] + 0x10);
  local_48 = local_38;
  uStack_44 = uStack_34;
  local_40 = local_30;
  do {
    puVar6 = puVar2;
    if (uVar11 < 0x81) {
      puVar6 = (undefined1 *)(uint)*(byte *)((int)&local_38 + uVar10);
    }
    iVar3 = (*pcVar9)(uVar8,puVar6);
    if (iVar3 != 0) {
      return 1;
    }
    uVar10 = uVar10 + 1;
  } while (uVar11 != uVar10);
  goto LAB_014fe838;
}

