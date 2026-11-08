// FUN_010c0c60 @ 010c0c60 size=836 calls_out=5 calls_in=4
// strings: 

void FUN_010c0c60(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_r3;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint extraout_r12;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  uint local_70;
  uint local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  int local_54;
  undefined4 local_50;
  byte *local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  int local_30;
  undefined2 local_2c;
  
  local_4c = &DAT_00000018;
  local_44 = 0;
  local_48 = 0;
  local_50 = 0;
  FUN_010b246c(&local_5c,param_2,&local_50);
  uVar14 = extraout_r12;
  if (local_5c == 1) {
    if (*(uint *)(local_54 + 0x28) <= local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(local_58,*(uint *)(local_54 + 0x28),&DAT_01884ca0);
    }
    uVar12 = 0;
    puVar3 = (uint *)(*(int *)(local_54 + 0x24) + local_58 * 0x34);
    uVar1 = local_58;
    if ((*puVar3 & 1) == 0) {
      iVar15 = 0;
    }
    else {
      uVar14 = puVar3[2];
      iVar15 = 1;
    }
  }
  else {
    uVar1 = 0xffffffff;
    iVar15 = 2;
    uVar12 = 2;
  }
  puVar3 = (uint *)(param_1 + 2);
  local_60 = *puVar3;
  iVar13 = 0;
  local_64 = param_1[3];
  local_70 = extraout_r3;
  do {
    if (uVar12 == 2) {
      *puVar3 = local_60;
      param_1[3] = local_64;
      *param_1 = iVar13;
      param_1[1] = 0;
      return;
    }
    if ((uVar12 & 1) == 0) {
      if (*(uint *)(local_54 + 0x28) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar1,*(uint *)(local_54 + 0x28),&DAT_018847b8);
      }
      piVar2 = (int *)(uVar1 * 0x34 + *(int *)(local_54 + 0x24));
      if (iVar15 == 0) {
        iVar15 = 2;
        uVar12 = 2;
      }
      else {
        if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00419463,0x28,&DAT_018847c8);
        }
        local_70 = piVar2[1];
        uVar12 = 1;
      }
      piVar2 = piVar2 + 3;
    }
    else {
      if (*(uint *)(local_54 + 0x34) <= local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(local_70,*(uint *)(local_54 + 0x34),&DAT_018847d8);
      }
      uVar12 = 2;
      iVar4 = *(int *)(local_54 + 0x30) + local_70 * 0x24;
      if (iVar15 == 1 && local_70 == uVar14) {
        iVar15 = 2;
        local_70 = uVar14;
      }
      else if (*(int *)(iVar4 + 8) == 1) {
        local_70 = *(uint *)(iVar4 + 0xc);
        uVar12 = 1;
      }
      piVar2 = (int *)(iVar4 + 0x10);
    }
    local_4c = (byte *)piVar2[1];
    local_48 = piVar2[2];
    pbVar9 = local_4c;
    for (iVar4 = local_48; iVar4 != 0; iVar4 = iVar4 + -1) {
      if ((*pbVar9 != 9) && (0x5e < *pbVar9 - 0x20)) goto LAB_010c0f40;
      pbVar9 = pbVar9 + 1;
    }
    local_2c = 1;
    local_38 = 1;
    local_34 = 0;
    local_3c = 0x2c;
    local_44 = 0;
    local_50 = 0x2c;
    local_40 = local_48;
    local_30 = local_48;
    while (iVar4 = FUN_014f1360(&local_50), iVar4 != 0) {
      uVar16 = FUN_010ceb84();
      if ((int)((ulonglong)uVar16 >> 0x20) == 0) goto LAB_010c0f40;
      uVar5 = 0;
      uVar7 = 0;
      while( true ) {
        iVar4 = (int)((ulonglong)uVar16 >> 0x20);
        if (iVar4 == 0) break;
        uVar11 = *(byte *)uVar16 - 0x30 & 0xff;
        if (9 < uVar11) goto LAB_010c0f40;
        uVar6 = (uint)((ulonglong)uVar5 * 10);
        uVar10 = (uint)((ulonglong)uVar5 * 10 >> 0x20);
        uVar5 = (uint)((ulonglong)uVar7 * 10);
        uVar8 = uVar10 + uVar5;
        if ((int)((ulonglong)uVar7 * 10 >> 0x20) != 0 || CARRY4(uVar10,uVar5)) goto LAB_010c0f40;
        uVar5 = uVar6 + uVar11;
        uVar16 = CONCAT44(iVar4 + -1,(byte *)uVar16 + 1);
        uVar7 = uVar8 + CARRY4(uVar6,uVar11);
        if (CARRY4(uVar8,(uint)CARRY4(uVar6,uVar11))) goto LAB_010c0f40;
      }
      if (iVar13 == 0) {
        iVar13 = 1;
        local_64 = uVar7;
        local_60 = uVar5;
      }
      else {
        iVar13 = 1;
        if (local_60 != uVar5 || local_64 != uVar7) {
LAB_010c0f40:
          *param_1 = 0;
          param_1[1] = 0;
          *puVar3 = local_60;
          param_1[3] = local_64;
          return;
        }
      }
    }
  } while( true );
}

