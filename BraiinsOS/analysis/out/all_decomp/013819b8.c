// FUN_013819b8 @ 013819b8 size=544 calls_out=5 calls_in=0
// strings: 

void FUN_013819b8(int *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int local_68 [17];
  
  if (*(int *)(param_2 + 0x30) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01892bd0);
  }
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0xffffffff;
  if (*(int *)(param_2 + 0x40) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01892bc0);
  }
  *(undefined4 *)(param_2 + 0x4c) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0xffffffff;
  if (*(int *)(param_2 + 0x34) == 0) {
    FUN_013c3fcc(param_2 + 0x34);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x38);
  iVar2 = 1;
  *puVar4 = 1;
  puVar4[1] = 0;
  uVar5 = *(uint *)(param_2 + 8);
  *(undefined4 *)(param_2 + 0x3c) = 1;
  while( true ) {
    *(int *)(param_2 + 0x3c) = iVar2 + -1;
    puVar7 = (uint *)(*(int *)(param_2 + 0x38) + (iVar2 + -1) * 8);
    uVar10 = *puVar7;
    if (uVar5 <= uVar10) break;
    uVar8 = puVar7[1];
    while (iVar2 = *(int *)(param_2 + 4) + uVar10 * 0xc, uVar8 < *(uint *)(iVar2 + 8)) {
      iVar12 = *(int *)(param_2 + 0x4c);
      puVar7 = (uint *)(*(int *)(iVar2 + 4) + uVar8 * 8);
      uVar5 = puVar7[1];
      uVar1 = *(undefined1 *)((int)puVar7 + 5);
      if (iVar12 == *(int *)(param_2 + 0x44)) {
        FUN_013c408c(param_2 + 0x44);
      }
      puVar3 = (undefined1 *)(*(int *)(param_2 + 0x48) + iVar12 * 2);
      *puVar3 = (char)uVar5;
      puVar3[1] = uVar1;
      *(int *)(param_2 + 0x4c) = iVar12 + 1;
      if (*puVar7 == 0) {
        FUN_0136e864(local_68,param_3,*(undefined4 *)(param_2 + 0x48));
        if (local_68[0] != 0x2a) {
          piVar13 = (int *)((uint)local_68 | 4);
          iVar2 = piVar13[1];
          iVar12 = piVar13[2];
          iVar9 = piVar13[3];
          iVar11 = piVar13[4];
          param_1[1] = *piVar13;
          param_1[2] = iVar2;
          param_1[3] = iVar12;
          param_1[4] = iVar9;
          param_1[5] = iVar11;
          iVar2 = piVar13[6];
          iVar12 = piVar13[7];
          iVar9 = piVar13[8];
          iVar11 = piVar13[9];
          param_1[6] = piVar13[5];
          param_1[7] = iVar2;
          param_1[8] = iVar12;
          param_1[9] = iVar9;
          param_1[10] = iVar11;
          iVar2 = piVar13[0xb];
          iVar12 = piVar13[0xc];
          iVar9 = piVar13[0xd];
          iVar11 = piVar13[0xe];
          param_1[0xb] = piVar13[10];
          param_1[0xc] = iVar2;
          param_1[0xd] = iVar12;
          param_1[0xe] = iVar9;
          param_1[0xf] = iVar11;
          goto LAB_01381b94;
        }
        uVar8 = uVar8 + 1;
        if (*(int *)(param_2 + 0x4c) != 0) {
          *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + -1;
        }
        uVar5 = *(uint *)(param_2 + 8);
        if (uVar5 <= uVar10) goto LAB_01381b58;
      }
      else {
        iVar2 = *(int *)(param_2 + 0x3c);
        if (iVar2 == *(int *)(param_2 + 0x34)) {
          FUN_013c3fcc(param_2 + 0x34);
        }
        uVar5 = uVar8 + 1;
        uVar8 = 0;
        puVar6 = (uint *)(*(int *)(param_2 + 0x38) + iVar2 * 8);
        *puVar6 = uVar10;
        puVar6[1] = uVar5;
        *(int *)(param_2 + 0x3c) = iVar2 + 1;
        uVar10 = *puVar7;
        uVar5 = *(uint *)(param_2 + 8);
        if (uVar5 <= uVar10) goto LAB_01381b58;
      }
    }
    if (*(int *)(param_2 + 0x4c) != 0) {
      *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + -1;
    }
    iVar2 = *(int *)(param_2 + 0x3c);
    if (iVar2 == 0) {
      local_68[0] = 0x2a;
LAB_01381b94:
      iVar12 = *(int *)(param_2 + 0x40);
      iVar2 = *(int *)(param_2 + 0x30);
      *param_1 = local_68[0];
      *(int *)(param_2 + 0x40) = iVar12 + 1;
      *(int *)(param_2 + 0x30) = iVar2 + 1;
      return;
    }
  }
LAB_01381b58:
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(uVar10,uVar5,&DAT_01892bb0);
}

