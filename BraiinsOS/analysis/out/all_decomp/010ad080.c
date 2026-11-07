// FUN_010ad080 @ 010ad080 size=1328 calls_out=8 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010ad080(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  int *piVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int local_98;
  uint local_94;
  int local_90;
  undefined4 local_8c;
  int local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined2 local_74;
  undefined1 local_72;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  int local_60;
  uint uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_48;
  undefined4 uStack_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [8];
  
  local_8c = 0;
  local_90 = 0;
  local_94 = 0x18;
  local_98 = 0;
  FUN_010a6d6c(&local_88);
  iVar6 = FUN_010b1088(param_2);
  if (iVar6 == 0) {
    uVar5 = FUN_010b0a24(param_2,&local_98);
    iVar6 = local_90;
    uVar16 = local_94;
    uVar18 = 0;
    uVar2 = *(ushort *)(param_2 + 0xe);
    bVar4 = local_98 == 0;
    iVar13 = param_2[9];
    uVar7 = local_94 & 0xff;
    iVar14 = param_2[6];
    uVar15 = param_2[7];
    uVar19 = param_2[10];
    uVar17 = (uint)(uVar2 & uVar5);
LAB_010ad158:
    do {
      uVar8 = uVar17;
      uVar17 = 0;
    } while (uVar15 <= uVar8);
    puVar9 = (ushort *)(iVar14 + uVar8 * 4);
    uVar17 = (uint)*puVar9;
    if (uVar17 == 0xffff) {
      local_60 = local_98;
      uStack_5c = local_94;
      iStack_58 = local_90;
      uStack_54 = local_8c;
      iVar6 = FUN_0145da44(param_2,uVar5,&local_60);
      if (iVar6 != 0) goto LAB_010ad568;
      if ((uint)param_2[7] <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar8,param_2[7],&DAT_018a6354);
      }
      puVar12 = (undefined2 *)(param_2[6] + uVar8 * 4);
      *puVar12 = (short)uVar19;
      puVar12[1] = uVar5;
      goto LAB_010ad40c;
    }
    uVar3 = puVar9[1];
    if ((uVar8 - (uVar2 & uVar3) & (uint)uVar2) < uVar18) {
      iVar6 = param_2[1];
      iVar14 = *param_2;
      local_60 = local_98;
      uStack_5c = local_94;
      iStack_58 = local_90;
      uStack_54 = local_8c;
      iVar13 = FUN_0145da44(param_2,uVar5,&local_60);
      if (iVar13 == 0) {
        iVar13 = param_2[6];
        uVar7 = param_2[7];
        uVar17 = 0;
        uVar16 = uVar19 & 0xffff;
        while( true ) {
          do {
            uVar15 = uVar8;
            uVar8 = 0;
          } while (uVar7 <= uVar15);
          puVar9 = (ushort *)(iVar13 + uVar15 * 4);
          uVar2 = *puVar9;
          if (uVar2 == 0xffff) break;
          uVar3 = puVar9[1];
          *puVar9 = (ushort)uVar16;
          uVar17 = uVar17 + 1;
          puVar9[1] = uVar5;
          uVar16 = (uint)uVar2;
          uVar8 = uVar15 + 1;
          uVar5 = uVar3;
        }
        puVar9[1] = uVar5;
        *puVar9 = (ushort)uVar16;
        if ((uVar18 >> 9 != 0 && (iVar14 != 2 || iVar6 != 0) || 0x7f < uVar17) &&
            (*param_2 == 0 && param_2[1] == 0)) {
          *param_2 = 1;
          param_2[1] = 0;
        }
        goto LAB_010ad40c;
      }
      goto LAB_010ad568;
    }
    if (uVar3 == uVar5) {
      if (uVar19 <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar17,uVar19,&DAT_018a6344);
      }
      iVar10 = uVar17 * 0x34 + iVar13;
      if ((*(int *)(iVar10 + 0x20) != 0) != bVar4) {
        if (*(int *)(iVar10 + 0x20) == 0) {
          if (*(byte *)(iVar10 + 0x24) == uVar7) goto LAB_010ad20c;
        }
        else if ((*(int *)(iVar10 + 0x28) == iVar6) &&
                (iVar10 = thunk_FUN_016dd50a(*(undefined4 *)(iVar10 + 0x24),uVar16,iVar6),
                iVar10 == 0)) goto LAB_010ad20c;
      }
    }
    uVar18 = uVar18 + 1;
    uVar17 = uVar8 + 1;
    goto LAB_010ad158;
  }
  (**(code **)(local_88 + 0x10))(&uStack_7c,uStack_84,iStack_80);
  if (local_98 != 0) {
    (**(code **)(local_98 + 0x10))(&local_8c,local_94,local_90);
  }
LAB_010ad568:
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8(&DAT_0040929f,0x17,&local_60,&DAT_018a62e4,&DAT_018a6184);
LAB_010ad20c:
  local_60 = local_88;
  uStack_5c = uStack_84;
  iStack_58 = iStack_80;
  uStack_54 = uStack_7c;
  uStack_50 = uStack_78;
  piVar11 = (int *)(iVar13 + uVar17 * 0x34);
  if (*piVar11 != 0) {
    iVar6 = piVar11[1];
    while (FUN_010b1bc4(&local_48,iVar13,uVar19,param_2 + 0xb,iVar6), iVar6 = local_3c,
          local_40 == 1) {
      (**(code **)(local_38 + 0x10))(auStack_2c,uStack_34,uStack_30);
      iVar13 = param_2[9];
      uVar19 = param_2[10];
    }
    (**(code **)(local_38 + 0x10))(auStack_2c,uStack_34,uStack_30);
    uVar19 = param_2[10];
  }
  if (uVar19 <= uVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar17,uVar19,&DAT_018a63b4);
  }
  iVar6 = uVar17 * 0x34 + param_2[9];
  local_70 = *(int *)(iVar6 + 0xc);
  local_74 = *(undefined2 *)(iVar6 + 0x1d);
  local_72 = *(undefined1 *)(iVar6 + 0x1f);
  uStack_6c = *(undefined4 *)(iVar6 + 0x10);
  uStack_68 = *(undefined4 *)(iVar6 + 0x14);
  iStack_64 = *(int *)(iVar6 + 0x18);
  cVar1 = *(char *)(iVar6 + 0x1c);
  *(int *)(iVar6 + 0xc) = local_60;
  *(uint *)(iVar6 + 0x10) = uStack_5c;
  *(int *)(iVar6 + 0x14) = iStack_58;
  *(undefined4 *)(iVar6 + 0x18) = uStack_54;
  *(undefined4 *)(iVar6 + 0x1c) = uStack_50;
  if (local_98 != 0) {
    (**(code **)(local_98 + 0x10))(&local_8c,local_94,local_90);
  }
  if (cVar1 != '\x03') {
    local_48 = local_70;
    uStack_44 = uStack_6c;
    local_40 = uStack_68;
    local_3c = iStack_64;
    local_38 = CONCAT13(local_72,CONCAT21(local_74,cVar1));
    if (cVar1 != '\x02') {
      (**(code **)(local_70 + 0x10))(&local_3c,uStack_6c,uStack_68);
    }
LAB_010ad40c:
    *(undefined1 *)(param_1 + 4) = 0;
    *param_1 = 1;
    param_1[2] = param_3;
    param_1[3] = param_4;
    return;
  }
  goto LAB_010ad568;
}

