// FUN_01111b68 @ 01111b68 size=700 calls_out=11 calls_in=1
// strings: 

void FUN_01111b68(uint *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  char *pcVar13;
  int iVar14;
  uint unaff_r10;
  int iVar15;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  int local_30;
  uint local_2c;
  int local_28;
  
  if (*param_2 == '\x04') {
    uVar12 = *(uint *)(param_2 + 0xc);
    pcVar6 = *(char **)(param_2 + 8);
    iVar8 = *(int *)(param_2 + 4);
    uVar10 = 0x15555;
    if (uVar12 < 0x15555) {
      uVar10 = uVar12;
    }
    iVar14 = 0;
    pcVar7 = pcVar6 + uVar12 * 0x18;
    if (uVar12 == 0) {
      uVar4 = 4;
      uVar10 = 0;
    }
    else {
      uVar4 = thunk_FUN_016d4a50(uVar10 * 0xc);
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar10 * 0xc);
      }
    }
    iVar15 = 0;
    local_4c = 0;
    pcVar9 = pcVar6;
    local_54 = uVar10;
    local_50 = uVar4;
LAB_01111c5c:
    unaff_r10 = local_4c;
    if (uVar12 * 0x18 == iVar14) {
      pcVar13 = pcVar7;
      unaff_r10 = uVar12;
    }
    else {
      if (*pcVar9 != '\x06') {
        local_48 = CONCAT31(local_48._1_3_,*pcVar9);
        pcVar13 = pcVar6 + iVar14 + 0x18;
        FUN_016dd1aa((uint)&local_48 | 1,pcVar9 + 1,0x17);
        FUN_0111dd00(&local_30,&local_48);
        iVar3 = local_28;
        uVar2 = local_2c;
        iVar1 = local_30;
        uVar10 = local_50;
        if (local_30 != -0x80000000) goto code_r0x01111cb4;
        puVar11 = (undefined4 *)(local_50 + 4);
        for (uVar4 = unaff_r10; uVar4 != 0; uVar4 = uVar4 - 1) {
          if (puVar11[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar11);
          }
          puVar11 = puVar11 + 3;
        }
        if (local_54 != 0) {
          thunk_FUN_016d3fb4(uVar10);
        }
        uVar10 = 0x80000000;
        uVar4 = local_2c;
        goto LAB_01111d88;
      }
      pcVar13 = pcVar6 + iVar14 + 0x18;
    }
    uVar10 = 0x80000000;
    uVar4 = local_50;
    if (local_54 != 0x80000000) {
      local_48 = local_54;
      uStack_44 = local_50;
      uStack_40 = unaff_r10;
      if (pcVar7 == pcVar13) {
        uVar10 = local_54;
      }
      else {
        uVar4 = FUN_00f2c2f0(uVar12,&DAT_0188738c,&DAT_018ab990);
        FUN_0111d548(&local_48);
      }
    }
LAB_01111d88:
    FUN_01127284(pcVar13,((uint)((int)pcVar7 - (int)pcVar13) >> 3) * -0x55555555);
    if (iVar8 != 0) {
      thunk_FUN_016d3fb4(pcVar6);
    }
  }
  else {
    uVar4 = FUN_00f36124(param_2,&local_48,&DAT_01887558);
    uVar10 = 0x80000000;
    FUN_01111ad8(param_2);
  }
  *param_1 = uVar10;
  param_1[1] = uVar4;
  if (uVar10 != 0x80000000) {
    param_1[2] = unaff_r10;
  }
  return;
code_r0x01111cb4:
  if (unaff_r10 == local_54) {
    FUN_01120040(&local_54);
    uVar4 = local_50;
  }
  local_4c = unaff_r10 + 1;
  piVar5 = (int *)(uVar4 + iVar15);
  *piVar5 = iVar1;
  iVar14 = iVar14 + 0x18;
  iVar15 = iVar15 + 0xc;
  piVar5[1] = uVar2;
  piVar5[2] = iVar3;
  pcVar9 = pcVar9 + 0x18;
  goto LAB_01111c5c;
}

