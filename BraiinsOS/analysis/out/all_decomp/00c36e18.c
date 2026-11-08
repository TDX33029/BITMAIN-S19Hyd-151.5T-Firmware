// FUN_00c36e18 @ 00c36e18 size=1416 calls_out=7 calls_in=1
// strings: sale_rate

void FUN_00c36e18(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  uint local_48;
  undefined4 local_44;
  int *local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  int local_30;
  undefined4 *local_2c;
  int local_28;
  
  cVar1 = *(char *)(param_2 + 0x48);
  local_50 = 0;
  local_58 = 0;
  if (cVar1 == '\x02' || *(int *)(param_2 + 0x10) == 0) {
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(7);
    if (puVar2 == (undefined4 *)0x0) {
      uVar11 = 7;
      goto LAB_00c37378;
    }
    *(undefined4 *)((int)puVar2 + 3) = 0x646e656b;
    *puVar2 = 0x6b636162;
    local_3c = (int *)0x7;
    local_34 = 7;
    local_38 = puVar2;
    local_2c = (undefined4 *)thunk_FUN_016d4a50(5);
    if (local_2c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4();
    }
    *(undefined1 *)(local_2c + 1) = 0x79;
    *local_2c = &DAT_6d6d7564;
    local_30 = 5;
    local_28 = 5;
    FUN_00c40da4(&local_48,&local_58,&local_3c,&local_30);
    if ((local_48 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_44);
    }
  }
  iVar7 = *(int *)(param_2 + 0x2c) * 0x108;
  piVar5 = (int *)(*(int *)(param_2 + 0x28) + 0xf8);
  do {
    piVar3 = piVar5;
    if (iVar7 == 0) {
      iVar7 = *(int *)(param_2 + 0x38) << 2;
      piVar5 = *(int **)(param_2 + 0x34);
      goto LAB_00c36ffc;
    }
    iVar7 = iVar7 + -0x108;
    piVar5 = piVar3 + 0x42;
  } while (*piVar3 != param_3);
  iVar7 = piVar3[1];
  if (iVar7 != 0) {
    local_68 = piVar3[2];
    do {
      uVar12 = (uint)*(ushort *)(iVar7 + 0x10e);
      iVar14 = iVar7 + 4;
      uVar10 = 0xffffffff;
      iVar13 = uVar12 * 0xc;
      do {
        if (iVar13 == 0) goto LAB_00c36fd0;
        uVar9 = *(uint *)(iVar14 + 8);
        uVar8 = uVar9;
        if (8 < uVar9) {
          uVar8 = 9;
        }
        iVar4 = FUN_016dd50a("sale_rate",*(undefined4 *)(iVar14 + 4),uVar8);
        if (iVar4 == 0) {
          iVar4 = 9 - uVar9;
        }
        iVar13 = iVar13 + -0xc;
        uVar10 = uVar10 + 1;
        iVar14 = iVar14 + 0xc;
      } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
      uVar12 = uVar10;
      if (0 < iVar4 == iVar4 < 0) {
        puVar2 = (undefined4 *)thunk_FUN_016d4a50(9);
        if (puVar2 == (undefined4 *)0x0) {
          uVar11 = 9;
          goto LAB_00c37378;
        }
        *(undefined1 *)(puVar2 + 2) = 0x65;
        puVar2[1] = 0x7461725f;
        *puVar2 = 0x656c6173;
        local_34 = 9;
        iVar7 = iVar7 + uVar10 * 0xc;
        local_3c = (int *)0x9;
        iVar13 = *(int *)(iVar7 + 0x90);
        uVar11 = *(undefined4 *)(iVar7 + 0x8c);
        local_38 = puVar2;
        if (iVar13 == 0) {
          puVar2 = (undefined4 *)&DAT_00000001;
        }
        else {
          puVar2 = (undefined4 *)thunk_FUN_016d4a50(iVar13);
          if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar13);
          }
        }
        FUN_016dd1aa(puVar2,uVar11,iVar13);
        local_30 = iVar13;
        local_2c = puVar2;
        local_28 = iVar13;
        FUN_00c40da4(&local_48,&local_58,&local_3c,&local_30);
        goto LAB_00c3723c;
      }
LAB_00c36fd0:
      if (local_68 == 0) break;
      local_68 = local_68 + -1;
      iVar7 = *(int *)(iVar7 + uVar12 * 4 + 0x110);
    } while( true );
  }
  goto LAB_00c37254;
  while( true ) {
    iVar13 = *piVar5;
    iVar7 = iVar7 + -4;
    piVar5 = piVar5 + 1;
    if (iVar13 == param_3) break;
LAB_00c36ffc:
    if (iVar7 == 0) {
      puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x13);
      if (puVar2 == (undefined4 *)0x0) {
        uVar11 = 0x13;
        goto LAB_00c37378;
      }
      FUN_016dd1aa(puVar2,&DAT_00354540,0x13);
      local_3c = (int *)0x13;
      local_34 = 0x13;
      local_38 = puVar2;
      puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xe);
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4();
      }
      *(undefined2 *)(puVar2 + 3) = 0x6461;
      puVar2[2] = 0x65725f6f;
      puVar2[1] = 0x745f6465;
      *puVar2 = 0x6c696166;
      local_30 = 0xe;
      local_28 = 0xe;
      local_2c = puVar2;
      FUN_00c40da4(&local_48,&local_58,&local_3c,&local_30);
      goto LAB_00c3734c;
    }
  }
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x13);
  if (puVar2 == (undefined4 *)0x0) {
    uVar11 = 0x13;
LAB_00c37378:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,uVar11);
  }
  FUN_016dd1aa(puVar2,&DAT_00354540,0x13);
  local_3c = (int *)0x13;
  local_34 = 0x13;
  local_38 = puVar2;
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xf);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  *(undefined4 *)((int)puVar2 + 0xb) = 0x65737261;
  puVar2[2] = 0x61705f6f;
  puVar2[1] = 0x745f6465;
  *puVar2 = 0x6c696166;
  local_30 = 0xf;
  local_28 = 0xf;
  local_2c = puVar2;
  FUN_00c40da4(&local_48,&local_58,&local_3c,&local_30);
LAB_00c3723c:
  if ((local_48 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_44);
  }
LAB_00c37254:
  if ((cVar1 == '\x02') || (*(int *)(param_2 + 0x38) != 0)) {
    iVar7 = *(int *)(param_2 + 0x44) * 0x14;
    piVar5 = (int *)(*(int *)(param_2 + 0x40) + 0x10);
    do {
      if (iVar7 == 0) goto LAB_00c37364;
      local_3c = piVar5 + -4;
      iVar13 = *piVar5;
      iVar7 = iVar7 + -0x14;
      piVar5 = piVar5 + 5;
    } while (iVar13 != param_3);
    local_38 = (undefined4 *)&LAB_00f5ee9c;
    FUN_00600d2c(&local_30,&DAT_00354553,&local_3c);
    iVar13 = local_28;
    puVar2 = local_2c;
    iVar7 = local_30;
    puVar6 = (undefined4 *)thunk_FUN_016d4a50(0xb);
    if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4();
    }
    *(undefined4 *)((int)puVar6 + 7) = 0x706d7564;
    puVar6[1] = 0x645f6d6f;
    *puVar6 = 0x72706565;
    local_3c = (int *)0xb;
    local_34 = 0xb;
    local_38 = puVar6;
    local_30 = iVar7;
    local_2c = puVar2;
    local_28 = iVar13;
    FUN_00c40da4(&local_48,&local_58,&local_3c,&local_30);
LAB_00c3734c:
    if ((local_48 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_44);
    }
  }
LAB_00c37364:
  *param_1 = local_58;
  param_1[1] = uStack_54;
  param_1[2] = local_50;
  return;
}

