// FUN_00f4694c @ 00f4694c size=392 calls_out=3 calls_in=0
// strings: 

void FUN_00f4694c(undefined4 *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int *unaff_r6;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int local_54;
  int local_50;
  int iStack_4c;
  uint uStack_48;
  int *local_44;
  int local_40;
  undefined4 local_3c;
  int *local_38;
  undefined1 auStack_34 [16];
  
  iVar6 = *param_2;
  if (iVar6 != 0) {
    iVar15 = param_3[1];
    uVar16 = param_3[2];
    local_54 = param_2[1];
    do {
      iVar12 = iVar6 + 0x10c;
      uVar1 = *(ushort *)(iVar6 + 0x192);
      piVar10 = (int *)0xffffffff;
      iVar14 = (int)(uint)uVar1 * 0xc;
      do {
        if (iVar14 == 0) {
          piVar10 = (int *)(uint)uVar1;
          goto LAB_00f46a00;
        }
        uVar8 = *(uint *)(iVar12 + 8);
        uVar4 = uVar8;
        if (uVar16 < uVar8) {
          uVar4 = uVar16;
        }
        iVar2 = FUN_016dd50a(iVar15,*(undefined4 *)(iVar12 + 4),uVar4);
        if (iVar2 == 0) {
          iVar2 = uVar16 - uVar8;
        }
        iVar14 = iVar14 + -0xc;
        piVar10 = (int *)((int)piVar10 + 1);
        iVar12 = iVar12 + 0xc;
      } while ((char)((0 < iVar2) - (iVar2 < 0)) == '\x01');
      if (0 < iVar2 == iVar2 < 0) {
        if (*param_3 != 0) {
          thunk_FUN_016d3fb4(iVar15);
        }
        goto LAB_00f46a54;
      }
LAB_00f46a00:
      if (local_54 == 0) goto LAB_00f46a80;
      local_54 = local_54 + -1;
      iVar6 = *(int *)(iVar6 + (int)piVar10 * 4 + 0x198);
    } while( true );
  }
  local_50 = *param_3;
  iVar15 = param_3[1];
  uStack_48 = param_3[2];
  local_40 = 0;
  local_38 = unaff_r6;
joined_r0x00f46a48:
  iVar6 = iVar15;
  if (local_50 != -0x80000000) {
    local_3c = 0;
    iStack_4c = iVar6;
    local_44 = param_2;
    FUN_00f46c2c(auStack_34,&local_50,param_4);
    *param_1 = 9;
    return;
  }
  piVar10 = param_2;
LAB_00f46a54:
  puVar3 = (undefined4 *)(iVar6 + (int)piVar10 * 0x18);
  uVar5 = puVar3[1];
  uVar7 = puVar3[2];
  uVar9 = puVar3[3];
  uVar11 = puVar3[4];
  uVar13 = puVar3[5];
  *param_1 = *puVar3;
  param_1[1] = uVar5;
  param_1[2] = uVar7;
  param_1[3] = uVar9;
  param_1[4] = uVar11;
  param_1[5] = uVar13;
  uVar5 = param_4[1];
  uVar7 = param_4[2];
  uVar9 = param_4[3];
  uVar11 = param_4[4];
  uVar13 = param_4[5];
  *puVar3 = *param_4;
  puVar3[1] = uVar5;
  puVar3[2] = uVar7;
  puVar3[3] = uVar9;
  puVar3[4] = uVar11;
  puVar3[5] = uVar13;
  return;
LAB_00f46a80:
  local_50 = *param_3;
  uStack_48 = uVar16;
  local_40 = iVar6;
  local_38 = piVar10;
  goto joined_r0x00f46a48;
}

