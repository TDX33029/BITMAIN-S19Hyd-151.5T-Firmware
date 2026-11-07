// FUN_00714c58 @ 00714c58 size=1112 calls_out=7 calls_in=105
// strings: size overflows MAX_SIZE

void FUN_00714c58(int *param_1,int *param_2,int *param_3,int *param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined2 local_4c;
  undefined1 local_4a;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  iVar4 = FUN_007142a8(param_2);
  if (iVar4 == 0) {
    uVar3 = FUN_0137e53c(param_2,param_3);
    iVar11 = *param_3;
    uVar18 = 0;
    iVar12 = param_3[1];
    iVar4 = param_3[1];
    iVar5 = param_2[6];
    uVar1 = *(ushort *)(param_2 + 0xe);
    iVar6 = param_2[9];
    iVar14 = param_3[2];
    uVar17 = param_2[7];
    uVar20 = param_2[10];
    uVar19 = (uint)(uVar1 & uVar3);
LAB_00714ce8:
    do {
      uVar7 = uVar19;
      uVar19 = 0;
    } while (uVar17 <= uVar7);
    puVar8 = (ushort *)(iVar5 + uVar7 * 4);
    uVar19 = (uint)*puVar8;
    if (uVar19 == 0xffff) {
      local_48 = *param_3;
      iStack_44 = param_3[1];
      iStack_40 = param_3[2];
      iStack_3c = param_3[3];
      local_38 = *param_4;
      iStack_34 = param_4[1];
      iStack_30 = param_4[2];
      iStack_2c = param_4[3];
      iStack_28 = param_4[4];
      iVar4 = FUN_0071418c(param_2);
      if (iVar4 != 0) goto LAB_00715068;
      if ((uint)param_2[7] <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar7,param_2[7],&DAT_01d1e414);
      }
      puVar10 = (undefined2 *)(param_2[6] + uVar7 * 4);
      *puVar10 = (short)uVar20;
      puVar10[1] = uVar3;
      goto LAB_00714f20;
    }
    uVar2 = puVar8[1];
    if ((uVar7 - (uVar1 & uVar2) & (uint)uVar1) < uVar18) {
      iVar4 = param_2[1];
      iVar6 = *param_2;
      local_48 = *param_3;
      iStack_44 = param_3[1];
      iStack_40 = param_3[2];
      iStack_3c = param_3[3];
      local_38 = *param_4;
      iStack_34 = param_4[1];
      iStack_30 = param_4[2];
      iStack_2c = param_4[3];
      iStack_28 = param_4[4];
      iVar5 = FUN_0071418c(param_2);
      if (iVar5 != 0) goto LAB_00715068;
      iVar5 = param_2[6];
      uVar17 = 0;
      uVar15 = param_2[7];
      uVar19 = uVar20 & 0xffff;
      while( true ) {
        do {
          uVar20 = uVar7;
          uVar7 = 0;
        } while (uVar15 <= uVar20);
        puVar8 = (ushort *)(iVar5 + uVar20 * 4);
        uVar1 = *puVar8;
        if (uVar1 == 0xffff) break;
        uVar2 = puVar8[1];
        *puVar8 = (ushort)uVar19;
        uVar17 = uVar17 + 1;
        puVar8[1] = uVar3;
        uVar19 = (uint)uVar1;
        uVar7 = uVar20 + 1;
        uVar3 = uVar2;
      }
      puVar8[1] = uVar3;
      *puVar8 = (ushort)uVar19;
      if (!(bool)(~(uVar18 >> 9 != 0 && (iVar6 != 2 || iVar4 != 0)) & uVar17 < 0x80) &&
          (*param_2 == 0 && param_2[1] == 0)) {
        *param_2 = 1;
        param_2[1] = 0;
      }
LAB_00714f20:
      cVar16 = '\x02';
      goto LAB_00714f24;
    }
    if (uVar2 == uVar3) {
      if (uVar20 <= uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar19,uVar20,&DAT_01d1e404);
      }
      iVar9 = uVar19 * 0x34 + iVar6;
      if ((*(int *)(iVar9 + 0x20) != 0) != (iVar11 == 0)) {
        if (*(int *)(iVar9 + 0x20) == 0) {
          if (*(char *)(iVar9 + 0x24) == (char)iVar4) goto LAB_00714f54;
        }
        else if ((*(int *)(iVar9 + 0x28) == iVar14) &&
                (iVar9 = thunk_FUN_01bed842(*(undefined4 *)(iVar9 + 0x24),iVar12), iVar9 == 0))
        goto LAB_00714f54;
      }
    }
    uVar18 = uVar18 + 1;
    uVar19 = uVar7 + 1;
    goto LAB_00714ce8;
  }
  (**(code **)(*param_4 + 0x10))(param_4 + 3,param_4[1],param_4[2]);
  if (*param_3 != 0) {
    (**(code **)(*param_3 + 0x10))(param_3 + 3,param_3[1],param_3[2]);
  }
LAB_00715068:
                    /* WARNING: Subroutine does not return */
  FUN_013073dc("size overflows MAX_SIZE",0x17,&local_38,&DAT_01d2f38c,&DAT_01d1e464);
LAB_00714f54:
  local_38 = *param_4;
  iStack_34 = param_4[1];
  iStack_30 = param_4[2];
  iStack_2c = param_4[3];
  iStack_28 = param_4[4];
  piVar13 = (int *)(iVar6 + uVar19 * 0x34);
  if (*piVar13 != 0) {
    FUN_00713d00(param_2,piVar13[1]);
    uVar20 = param_2[10];
  }
  if (uVar20 <= uVar19) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar19,uVar20,&DAT_01d1e444);
  }
  iVar4 = uVar19 * 0x34 + param_2[9];
  local_48 = *(int *)(iVar4 + 0xc);
  iStack_44 = *(int *)(iVar4 + 0x10);
  iStack_40 = *(int *)(iVar4 + 0x14);
  iStack_3c = *(int *)(iVar4 + 0x18);
  local_4c = *(undefined2 *)(iVar4 + 0x1d);
  cVar16 = *(char *)(iVar4 + 0x1c);
  local_4a = *(undefined1 *)(iVar4 + 0x1f);
  *(int *)(iVar4 + 0xc) = local_38;
  *(int *)(iVar4 + 0x10) = iStack_34;
  *(int *)(iVar4 + 0x14) = iStack_30;
  *(int *)(iVar4 + 0x18) = iStack_2c;
  *(int *)(iVar4 + 0x1c) = iStack_28;
  if (iVar11 != 0) {
    (**(code **)(iVar11 + 0x10))(param_3 + 3,iVar12,iVar14);
  }
  if (cVar16 != '\x03') {
LAB_00714f24:
    *param_1 = local_48;
    param_1[1] = iStack_44;
    param_1[2] = iStack_40;
    param_1[3] = iStack_3c;
    *(char *)(param_1 + 4) = cVar16;
    *(undefined2 *)((int)param_1 + 0x11) = local_4c;
    *(undefined1 *)((int)param_1 + 0x13) = local_4a;
    return;
  }
  goto LAB_00715068;
}

