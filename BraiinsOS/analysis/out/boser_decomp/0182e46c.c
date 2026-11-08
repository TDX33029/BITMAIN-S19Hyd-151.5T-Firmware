// FUN_0182e46c @ 0182e46c size=1096 calls_out=7 calls_in=4
// strings: size overflows MAX_SIZE

void FUN_0182e46c(int *param_1,int *param_2,int *param_3,int *param_4)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  undefined2 *puVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined2 local_4c;
  undefined1 local_4a;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  iVar5 = FUN_01aa5cdc(param_2);
  if (iVar5 == 0) {
    uVar4 = FUN_0141c4b0(param_2,param_3);
    uVar1 = *(ushort *)(param_2 + 0xe);
    iVar5 = param_2[9];
    iVar15 = param_2[6];
    uVar12 = param_2[7];
    uVar16 = 0;
    uVar13 = param_2[10];
    uVar17 = (uint)(uVar1 & uVar4);
LAB_0182e4d4:
    do {
      uVar6 = uVar17;
      uVar17 = 0;
    } while (uVar12 <= uVar6);
    puVar7 = (ushort *)(iVar15 + uVar6 * 4);
    uVar17 = (uint)*puVar7;
    if (uVar17 == 0xffff) {
      if ((undefined4 *)*param_3 == (undefined4 *)0x0) {
        local_38 = 0;
        local_34 = CONCAT31(local_34._1_3_,(char)param_3[1]);
      }
      else {
        (**(code **)*param_3)(&local_38,param_3 + 3,param_3[1],param_3[2]);
      }
      local_48 = local_38;
      iStack_44 = local_34;
      iStack_40 = iStack_30;
      iStack_3c = iStack_2c;
      local_38 = *param_4;
      local_34 = param_4[1];
      iStack_30 = param_4[2];
      iStack_2c = param_4[3];
      iStack_28 = param_4[4];
      iVar5 = FUN_0141c310(param_2,uVar4);
      if (iVar5 != 0) goto LAB_0182e870;
      if ((uint)param_2[7] <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar6,param_2[7],&DAT_01d1e414);
      }
      puVar9 = (undefined2 *)(param_2[6] + uVar6 * 4);
      *puVar9 = (short)uVar13;
      puVar9[1] = uVar4;
      goto LAB_0182e774;
    }
    uVar2 = puVar7[1];
    if ((uVar6 - (uVar1 & uVar2) & (uint)uVar1) < uVar16) {
      iVar5 = *param_2;
      iVar15 = param_2[1];
      if ((undefined4 *)*param_3 == (undefined4 *)0x0) {
        local_38 = 0;
        local_34 = CONCAT31(local_34._1_3_,(char)param_3[1]);
      }
      else {
        (**(code **)*param_3)(&local_38,param_3 + 3,param_3[1],param_3[2]);
      }
      local_48 = local_38;
      iStack_44 = local_34;
      iStack_40 = iStack_30;
      iStack_3c = iStack_2c;
      local_38 = *param_4;
      local_34 = param_4[1];
      iStack_30 = param_4[2];
      iStack_2c = param_4[3];
      iStack_28 = param_4[4];
      iVar8 = FUN_0141c310(param_2,uVar4);
      if (iVar8 != 0) goto LAB_0182e870;
      iVar8 = param_2[6];
      uVar12 = 0;
      uVar11 = param_2[7];
      uVar17 = uVar13 & 0xffff;
      while( true ) {
        do {
          uVar13 = uVar6;
          uVar6 = 0;
        } while (uVar11 <= uVar13);
        puVar7 = (ushort *)(iVar8 + uVar13 * 4);
        uVar1 = *puVar7;
        if (uVar1 == 0xffff) break;
        *puVar7 = (ushort)uVar17;
        uVar2 = puVar7[1];
        uVar12 = uVar12 + 1;
        puVar7[1] = uVar4;
        uVar17 = (uint)uVar1;
        uVar6 = uVar13 + 1;
        uVar4 = uVar2;
      }
      *puVar7 = (ushort)uVar17;
      iVar14 = *param_2;
      iVar8 = param_2[1];
      puVar7[1] = uVar4;
      if (!(bool)(~(uVar16 >> 9 != 0 && (iVar5 != 2 || iVar15 != 0)) & uVar12 < 0x80) &&
          (iVar14 == 0 && iVar8 == 0)) {
        *param_2 = 1;
        param_2[1] = 0;
      }
LAB_0182e774:
      cVar3 = '\x02';
      goto LAB_0182e778;
    }
    if (uVar2 == uVar4) {
      if (uVar13 <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar17,uVar13,&DAT_01d1e404);
      }
      iVar8 = uVar17 * 0x34 + iVar5;
      if ((*(int *)(iVar8 + 0x20) != 0) != (*param_3 == 0)) {
        if (*(int *)(iVar8 + 0x20) == 0) {
          if (*(char *)(iVar8 + 0x24) == (char)param_3[1]) goto LAB_0182e7a8;
        }
        else if ((*(int *)(iVar8 + 0x28) == param_3[2]) &&
                (iVar8 = thunk_FUN_01bed842(*(undefined4 *)(iVar8 + 0x24),param_3[1]), iVar8 == 0))
        goto LAB_0182e7a8;
      }
    }
    uVar16 = uVar16 + 1;
    uVar17 = uVar6 + 1;
    goto LAB_0182e4d4;
  }
  (**(code **)(*param_4 + 0x10))(param_4 + 3,param_4[1],param_4[2]);
LAB_0182e870:
                    /* WARNING: Subroutine does not return */
  FUN_013073dc("size overflows MAX_SIZE",0x17,&local_38,&DAT_01d2f38c,&DAT_01d1e464);
LAB_0182e7a8:
  local_38 = *param_4;
  local_34 = param_4[1];
  iStack_30 = param_4[2];
  iStack_2c = param_4[3];
  iStack_28 = param_4[4];
  piVar10 = (int *)(iVar5 + uVar17 * 0x34);
  if (*piVar10 != 0) {
    FUN_0141ce48(param_2,piVar10[1]);
    uVar13 = param_2[10];
  }
  if (uVar13 <= uVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar17,uVar13,&DAT_01d1e444);
  }
  iVar5 = uVar17 * 0x34 + param_2[9];
  local_48 = *(int *)(iVar5 + 0xc);
  iStack_44 = *(int *)(iVar5 + 0x10);
  iStack_40 = *(int *)(iVar5 + 0x14);
  iStack_3c = *(int *)(iVar5 + 0x18);
  local_4c = *(undefined2 *)(iVar5 + 0x1d);
  cVar3 = *(char *)(iVar5 + 0x1c);
  local_4a = *(undefined1 *)(iVar5 + 0x1f);
  *(int *)(iVar5 + 0xc) = local_38;
  *(int *)(iVar5 + 0x10) = local_34;
  *(int *)(iVar5 + 0x14) = iStack_30;
  *(int *)(iVar5 + 0x18) = iStack_2c;
  *(int *)(iVar5 + 0x1c) = iStack_28;
  if (cVar3 != '\x03') {
LAB_0182e778:
    *param_1 = local_48;
    param_1[1] = iStack_44;
    param_1[2] = iStack_40;
    param_1[3] = iStack_3c;
    *(char *)(param_1 + 4) = cVar3;
    *(undefined2 *)((int)param_1 + 0x11) = local_4c;
    *(undefined1 *)((int)param_1 + 0x13) = local_4a;
    return;
  }
  goto LAB_0182e870;
}

