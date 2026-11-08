// FUN_012cc44c @ 012cc44c size=2168 calls_out=9 calls_in=1
// strings: a Display implementation returned an error unexpectedly

void FUN_012cc44c(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,int param_5,
                 uint param_6,uint *param_7,int *param_8)

{
  undefined *puVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint ***pppuVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  uint ***local_58;
  uint local_54;
  uint local_50;
  undefined4 ****local_48;
  undefined *local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined1 uStack_31;
  
  iVar8 = param_2[2];
  if ((uint)(*param_2 - iVar8) < param_4) {
    FUN_011096d4(param_2,iVar8,param_4,1,1);
    iVar8 = param_2[2];
  }
  FUN_016dd1aa(param_2[1] + iVar8,param_3,param_4);
  iVar8 = iVar8 + param_4;
  param_2[2] = iVar8;
  if (param_5 != 0) {
    if ((uint)(*param_2 - iVar8) < param_6) {
      FUN_011096d4(param_2,iVar8,param_6,1,1);
      iVar8 = param_2[2];
    }
    FUN_016dd1aa(param_2[1] + iVar8,param_5,param_6);
    iVar8 = iVar8 + param_6;
    param_2[2] = iVar8;
  }
  uVar5 = param_7[7];
  if (param_7[6] < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar5,param_7[6],&DAT_0188f948);
  }
  uVar11 = param_7[5];
  iVar9 = *param_8;
  if (uVar5 == 0 && iVar9 == 0) goto LAB_012cc7a0;
  if (uVar5 == 0) {
    puVar3 = &DAT_004144eb;
    iVar2 = param_2[2];
joined_r0x012cc588:
    if (iVar9 == 0) {
LAB_012cc780:
      if (*param_2 == iVar2) {
        FUN_011096d4(param_2,iVar2,1,1,1);
        iVar2 = param_2[2];
      }
      iVar8 = iVar2 + 1;
      *(undefined1 *)(param_2[1] + iVar2) = 0x7d;
      param_2[2] = iVar8;
LAB_012cc7a0:
      if (*param_2 == iVar8) {
        FUN_011096d4(param_2,iVar8,1,1,1);
        iVar8 = param_2[2];
      }
      *(undefined1 *)(param_2[1] + iVar8) = 0x20;
      param_2[2] = iVar8 + 1;
      local_54 = 1;
      local_50 = 0;
      local_40 = &DAT_60000020;
      local_48 = &local_58;
      local_58 = (undefined4 ***)0x0;
      local_3c = 0;
      local_44 = &DAT_0188d3d4;
      iVar8 = FUN_00fb1850(&local_48,0);
      uVar11 = local_50;
      uVar5 = local_54;
      pppuVar7 = local_58;
      if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_31,
                     &DAT_0188d3ec,&DAT_018af130);
      }
      iVar8 = param_2[2];
      if ((uint)(*param_2 - iVar8) < local_50) {
        FUN_011096d4(param_2,iVar8,local_50,1,1);
        iVar8 = param_2[2];
      }
      FUN_016dd1aa(param_2[1] + iVar8,uVar5,uVar11);
      param_2[2] = iVar8 + uVar11;
      if (pppuVar7 != (undefined4 ***)0x0) {
        thunk_FUN_016d3fb4(uVar5);
      }
      bVar14 = (*param_7 & 1) != 0;
      if (bVar14) {
        uVar5 = param_7[2];
        uVar11 = param_7[3];
      }
      if (bVar14 && (uVar5 != 0 || uVar11 != 0)) {
        FUN_01108114(&local_48,param_2,&DAT_0041545b,1);
        if ((char)local_48 != '\x04') {
          *param_1 = 3;
          param_1[1] = local_48;
          param_1[2] = local_44;
          return;
        }
        FUN_012ccf00(&local_48,extraout_r1,uVar5,uVar11);
        puVar1 = local_44;
        FUN_01108114(&local_58,param_2,local_44,local_40);
        if ((char)local_58 != '\x04') {
          *param_1 = 3;
          param_1[1] = local_58;
          param_1[2] = local_54;
          if (local_48 == (undefined4 ****)0x0) {
            return;
          }
          thunk_FUN_016d3fb4(puVar1);
          return;
        }
        if (local_48 != (undefined4 ****)0x0) {
          thunk_FUN_016d3fb4(puVar1);
        }
      }
      iVar8 = param_2[2];
      if (*param_2 == iVar8) {
        FUN_011096d4(param_2,iVar8,1,1,1);
        iVar8 = param_2[2];
      }
      *(undefined1 *)(param_2[1] + iVar8) = 10;
      param_2[2] = iVar8 + 1;
      *param_1 = 5;
      return;
    }
    uVar5 = param_8[1];
    iVar8 = param_8[2];
    iVar13 = param_8[3];
    if (*param_2 == iVar2) {
      FUN_011096d4(param_2,iVar2,1,1,1);
      iVar2 = param_2[2];
    }
    iVar6 = iVar2 + 1;
    *(undefined1 *)(param_2[1] + iVar2) = *puVar3;
    param_2[2] = iVar6;
    if ((uint)(*param_2 - iVar6) < uVar5) {
      FUN_011096d4(param_2,iVar6,uVar5,1,1);
      iVar6 = param_2[2];
    }
    FUN_016dd1aa(param_2[1] + iVar6,iVar9,uVar5);
    param_2[2] = iVar6 + uVar5;
    FUN_01108114(&local_48,param_2,"=\"",2);
    if ((char)local_48 == '\x04') {
      FUN_012cb96c(&local_48,iVar8,iVar13,1);
      puVar1 = local_44;
      FUN_01108114(&local_58,param_2,local_44,local_40);
      if ((char)local_58 != '\x04') {
        uVar5 = (uint)local_48 & 0x7fffffff;
        local_48 = (undefined4 ****)local_58;
        local_44 = (undefined *)local_54;
        if (uVar5 == 0) goto LAB_012ccb10;
        pppuVar7 = local_58;
        uVar5 = local_54;
        goto LAB_012ccb0c;
      }
      if (((uint)local_48 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(puVar1);
      }
      FUN_01108114(&local_48,param_2,&DAT_004144ec,1);
      if ((char)local_48 == '\x04') {
        iVar2 = param_2[2];
        goto LAB_012cc780;
      }
    }
  }
  else {
    if (*param_2 == iVar8) {
      FUN_011096d4(param_2,iVar8,1,1,1);
      iVar8 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar8) = 0x7b;
    iVar8 = iVar8 + 1;
    param_2[2] = iVar8;
    if (*(char *)(uVar11 + 0xc) == '\x01') {
      uVar10 = *(undefined4 *)(uVar11 + 4);
      uVar12 = *(uint *)(uVar11 + 8);
      if ((uint)(*param_2 - iVar8) < uVar12) {
        FUN_011096d4(param_2,iVar8,uVar12,1,1);
        iVar8 = param_2[2];
      }
    }
    else {
      uVar12 = 0;
      uVar10 = 1;
    }
    FUN_016dd1aa(param_2[1] + iVar8,uVar10,uVar12);
    iVar8 = iVar8 + uVar12;
    param_2[2] = iVar8;
    if ((uint)(*param_2 - iVar8) < 2) {
      FUN_011096d4(param_2,iVar8,2,1,1);
      iVar8 = param_2[2];
    }
    param_2[2] = iVar8 + 2;
    *(undefined2 *)(param_2[1] + iVar8) = 0x223d;
    if (*(char *)(uVar11 + 0x1c) == '\x01') {
      uVar10 = *(undefined4 *)(uVar11 + 0x14);
      uVar4 = *(undefined4 *)(uVar11 + 0x18);
    }
    else {
      uVar10 = 1;
      uVar4 = 0;
    }
    FUN_012cb96c(&local_48,uVar10,uVar4,1);
    puVar1 = local_44;
    FUN_01108114(&local_58,param_2,local_44,local_40);
    if ((char)local_58 == '\x04') {
      if (((uint)local_48 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(puVar1);
      }
      FUN_01108114(&local_48,param_2,&DAT_004144ec,1);
      if ((char)local_48 != '\x04') goto LAB_012ccb10;
      if (uVar5 != 1) {
        iVar8 = 0;
        do {
          FUN_01108114(&local_48,param_2,&DAT_004144ea,1);
          if ((char)local_48 != '\x04') goto LAB_012ccb10;
          iVar2 = uVar11 + iVar8;
          if (*(char *)(iVar2 + 0x34) == '\x01') {
            uVar10 = *(undefined4 *)(iVar2 + 0x2c);
            uVar4 = *(undefined4 *)(iVar2 + 0x30);
          }
          else {
            uVar10 = 1;
            uVar4 = 0;
          }
          FUN_01108114(&local_48,param_2,uVar10,uVar4);
          if ((char)local_48 != '\x04') goto LAB_012ccb10;
          FUN_01108114(&local_48,param_2,"=\"",2);
          if ((char)local_48 != '\x04') goto LAB_012ccb10;
          if (*(char *)(iVar2 + 0x44) == '\x01') {
            uVar10 = *(undefined4 *)(iVar2 + 0x3c);
            uVar4 = *(undefined4 *)(iVar2 + 0x40);
          }
          else {
            uVar10 = 1;
            uVar4 = 0;
          }
          FUN_012cb96c(&local_48,uVar10,uVar4,1);
          puVar1 = local_44;
          FUN_01108114(&local_58,param_2,local_44,local_40);
          if ((char)local_58 != '\x04') goto LAB_012ccaf0;
          if (((uint)local_48 & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(puVar1);
          }
          FUN_01108114(&local_48,param_2,&DAT_004144ec,1);
          if ((char)local_48 != '\x04') goto LAB_012ccb10;
          iVar8 = iVar8 + 0x28;
        } while (uVar5 * 0x28 + -0x28 != iVar8);
      }
      puVar3 = &DAT_004144ea;
      iVar2 = param_2[2];
      goto joined_r0x012cc588;
    }
LAB_012ccaf0:
    uVar5 = (uint)local_48 & 0x7fffffff;
    local_48 = (undefined4 ****)local_58;
    local_44 = (undefined *)local_54;
    if (uVar5 == 0) goto LAB_012ccb10;
    pppuVar7 = local_58;
    uVar5 = local_54;
LAB_012ccb0c:
    thunk_FUN_016d3fb4(puVar1);
    local_48 = (undefined4 ****)pppuVar7;
    local_44 = (undefined *)uVar5;
  }
LAB_012ccb10:
  *param_1 = 3;
  param_1[1] = local_48;
  param_1[2] = local_44;
  return;
}

