// FUN_00ce7ba0 @ 00ce7ba0 size=636 calls_out=7 calls_in=1
// strings: 

void FUN_00ce7ba0(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 extraout_s1;
  undefined8 uVar14;
  undefined8 uVar15;
  uint local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar10 = param_2[10];
  do {
    if (iVar10 != 0) {
      puVar1 = (undefined4 *)param_2[0xb];
      if (puVar1 != (undefined4 *)param_2[0xd]) {
        param_2[0xb] = (int)(puVar1 + 6);
        uVar2 = puVar1[1];
        uVar7 = puVar1[2];
        uVar13 = puVar1[3];
        uVar8 = puVar1[4];
        uVar9 = puVar1[5];
        param_1[2] = *puVar1;
        param_1[3] = uVar2;
        param_1[4] = uVar7;
        param_1[5] = uVar13;
        param_1[6] = uVar8;
        param_1[7] = uVar9;
        *param_1 = 1;
        param_1[1] = 0;
        return;
      }
      if (param_2[0xc] != 0) {
        thunk_FUN_016d3fb4(iVar10);
      }
      param_2[10] = 0;
    }
    if (*param_2 == 2) {
LAB_00ce7d28:
      if (param_2[0xe] == 0) {
        *param_1 = 0;
        param_1[1] = 0;
        return;
      }
      puVar1 = (undefined4 *)param_2[0xf];
      if (puVar1 == (undefined4 *)param_2[0x11]) {
        if (param_2[0x10] != 0) {
          thunk_FUN_016d3fb4();
        }
        uVar2 = 0;
        param_2[0xe] = 0;
      }
      else {
        param_2[0xf] = (int)(puVar1 + 6);
        local_40 = *puVar1;
        uStack_3c = puVar1[1];
        uStack_38 = puVar1[2];
        uStack_34 = puVar1[3];
        uStack_30 = puVar1[4];
        uStack_2c = puVar1[5];
        uVar2 = 1;
      }
      *param_1 = uVar2;
      param_1[1] = 0;
      param_1[2] = local_40;
      param_1[3] = uStack_3c;
      param_1[4] = uStack_38;
      param_1[5] = uStack_34;
      param_1[6] = uStack_30;
      param_1[7] = uStack_2c;
      return;
    }
    uVar14 = FUN_00c38db8(param_2);
    iVar5 = (int)((ulonglong)uVar14 >> 0x20);
    if ((undefined4 *)uVar14 == (undefined4 *)0x0) goto LAB_00ce7d28;
    uVar12 = *(uint *)(*(int *)(param_2[9] + 0x204) + 0xb8);
    uVar2 = 0;
    if (0x5555555 < uVar12) goto LAB_00ce7e1c;
    uVar6 = 0;
    iVar10 = uVar12 * 0x18;
    if (iVar10 == 0) {
      iVar11 = 8;
      uVar15 = CONCAT44(iVar5,8);
      local_44 = 0;
    }
    else {
      uVar15 = thunk_FUN_016d4a50(iVar10);
      iVar11 = (int)uVar15;
      local_44 = uVar12;
      if (iVar11 == 0) {
        uVar2 = 8;
LAB_00ce7e1c:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar2,iVar10);
      }
    }
    if (uVar12 != 0) {
      iVar10 = 0;
      uVar6 = 0;
      do {
        if (*(uint *)(iVar5 + 0x70) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar6,*(uint *)(iVar5 + 0x70),&DAT_0186abf8);
        }
        iVar3 = *(int *)(iVar5 + 0x6c) + iVar10;
        if (*(int *)(iVar3 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_0034ae12,0x13,&DAT_0186ab88);
        }
        uVar7 = **(undefined4 **)(iVar3 + 4);
        uVar13 = FUN_00c6f548(iVar5,uVar6);
        uVar2 = *(undefined4 *)uVar14;
        uVar15 = CONCAT44(uVar2,iVar11);
        puVar1 = (undefined4 *)(iVar11 + iVar10);
        *puVar1 = uVar2;
        uVar4 = uVar6 + 1;
        iVar10 = iVar10 + 0x18;
        puVar1[1] = uVar6;
        puVar1[2] = uVar7;
        *(ulonglong *)(puVar1 + 4) = CONCAT44(extraout_s1,uVar13);
        uVar6 = uVar4;
      } while (uVar12 != uVar4);
      uVar6 = uVar12;
    }
    iVar5 = (int)((ulonglong)uVar15 >> 0x20);
    iVar10 = (int)uVar15;
    if (param_2[10] != 0) {
      iVar5 = param_2[0xc];
    }
    if (param_2[10] != 0 && iVar5 != 0) {
      thunk_FUN_016d3fb4();
    }
    param_2[10] = iVar10;
    param_2[0xb] = iVar10;
    param_2[0xc] = local_44;
    param_2[0xd] = iVar10 + uVar6 * 0x18;
  } while( true );
}

