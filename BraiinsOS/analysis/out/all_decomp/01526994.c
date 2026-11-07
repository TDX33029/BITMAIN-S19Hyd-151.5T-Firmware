// FUN_01526994 @ 01526994 size=1064 calls_out=5 calls_in=2
// strings: 

uint FUN_01526994(int param_1,int *param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint unaff_r5;
  int iVar9;
  uint uVar10;
  uint unaff_r8;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint local_ec;
  undefined2 local_c8 [2];
  int local_c4;
  int local_c0;
  uint uStack_bc;
  uint uStack_b8;
  undefined1 local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined2 local_28;
  
  if (param_3 == 0) {
    uVar10 = param_2[2];
    iVar11 = *param_2;
    uVar7 = param_2[3];
    unaff_r8 = uVar10;
    if (iVar11 != 0) {
      unaff_r8 = uVar7 - uVar10;
    }
    local_ec = unaff_r8;
    if (*(int *)(param_1 + 500) == 1) {
      uVar2 = *(uint *)(param_1 + 0x208);
      iVar8 = 0;
      if (uVar2 != 0) {
        uVar4 = 0;
        uVar5 = *(uint *)(param_1 + 0x1fc);
        uVar12 = *(uint *)(param_1 + 0x204);
        uVar14 = uVar5;
        if (uVar12 < uVar5) {
          uVar14 = 0;
        }
        unaff_r5 = uVar12 - uVar14;
        iVar3 = uVar2 - (uVar5 - unaff_r5);
        if (uVar2 < uVar5 - unaff_r5 || iVar3 == 0) {
          uVar5 = unaff_r5 + uVar2;
        }
        else {
          uVar4 = iVar3 * 0xc;
        }
        if (uVar5 != unaff_r5) {
          iVar3 = ((uVar5 - unaff_r5) * 0xc >> 2) * -0x55555555;
          puVar1 = (uint *)(uVar12 * 0xc + uVar14 * -0xc + *(int *)(param_1 + 0x200) + 8);
          do {
            unaff_r5 = *puVar1;
            iVar3 = iVar3 + -1;
            iVar8 = unaff_r5 + iVar8;
            puVar1 = puVar1 + 3;
          } while (iVar3 != 0);
        }
        if (uVar4 != 0) {
          iVar3 = (uVar4 >> 2) * -0x55555555;
          puVar1 = (uint *)(*(int *)(param_1 + 0x200) + 8);
          do {
            unaff_r5 = *puVar1;
            iVar3 = iVar3 + -1;
            iVar8 = unaff_r5 + iVar8;
            puVar1 = puVar1 + 3;
          } while (iVar3 != 0);
        }
      }
      uVar2 = iVar8 - *(int *)(param_1 + 0x20c);
      local_ec = 0;
      if (uVar2 <= *(uint *)(param_1 + 0x1f8)) {
        local_ec = *(uint *)(param_1 + 0x1f8) - uVar2;
      }
      if (unaff_r8 <= local_ec) {
        local_ec = unaff_r8;
      }
    }
    if (iVar11 == 0) goto LAB_01526b38;
  }
  else {
    iVar11 = *param_2;
    if (iVar11 == 0) {
      local_ec = param_2[2];
      uVar10 = local_ec;
LAB_01526b38:
      iVar8 = param_2[1];
      if (local_ec <= uVar10) {
        uVar10 = local_ec;
      }
      iVar11 = 0;
      goto LAB_01526b4c;
    }
    uVar10 = param_2[2];
    uVar7 = param_2[3];
    local_ec = uVar7 - uVar10;
  }
  iVar8 = param_2[1];
  unaff_r5 = uVar10 + local_ec;
  if (uVar7 < uVar10 + local_ec) {
    unaff_r5 = uVar7;
  }
LAB_01526b4c:
  uVar7 = *(uint *)(param_1 + 0x244);
LAB_01526bb8:
  while( true ) {
    local_c0 = iVar8;
    uVar2 = uVar10;
    if (iVar11 != 0) {
      uVar2 = unaff_r5 - uVar10;
    }
    if (uVar2 == 0) {
      return local_ec;
    }
    if (iVar11 == 0) {
      uStack_bc = uVar7;
      if (uVar10 < uVar7) {
        uStack_bc = uVar10;
      }
      iVar8 = local_c0 + uStack_bc;
      uVar2 = uVar10 - uStack_bc;
    }
    else {
      uVar2 = uVar10 + uVar7;
      if (unaff_r5 < uVar10 + uVar7) {
        uVar2 = unaff_r5;
      }
      uStack_bc = uVar10;
      iVar8 = local_c0;
      unaff_r8 = uVar2;
    }
    local_b4 = 3;
    local_c8[0] = 4;
    iVar3 = *(int *)(param_1 + 0x24);
    uVar10 = uVar2;
    local_c4 = iVar11;
    uStack_b8 = unaff_r8;
    if (*(uint *)(param_1 + 0x20) != *(uint *)(param_1 + 0x18) || iVar3 != *(int *)(param_1 + 0x1c))
    goto LAB_01526c5c;
    if (*(short *)(param_1 + 0x240) == 5) break;
    if (*(char *)(param_1 + 0x255) == '\0') {
      *(undefined2 *)(param_1 + 0x255) = 0x101;
      local_9c = 0;
      local_a0 = 0x80000001;
      local_28 = 4;
      FUN_01525ed4(param_1,&local_a0,*(char *)(param_1 + 0x31) == '\x02');
    }
  }
  *(undefined1 *)(param_1 + 0x25b) = 1;
  goto LAB_01526c70;
LAB_01526c5c:
  if (iVar3 != -1 || -iVar3 - 1U < (uint)(*(uint *)(param_1 + 0x20) < 0xfffffffe)) {
LAB_01526c70:
    FUN_0152c928(&local_a0,param_1,local_c8);
    iVar13 = *(int *)(param_1 + 0x234);
    iVar3 = *(int *)(param_1 + 0x238);
    iVar9 = *(int *)(param_1 + 0x23c);
    *(undefined4 *)(param_1 + 0x234) = 0x80000000;
    if (iVar13 != -0x80000000) {
      if (iVar9 == 0) {
        if (iVar13 != 0) {
          thunk_FUN_016d3fb4(iVar3);
        }
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x1fc);
        uVar4 = *(uint *)(param_1 + 0x208);
        if (uVar4 == uVar2) {
          FUN_01561020(param_1 + 0x1fc);
          uVar2 = *(uint *)(param_1 + 0x1fc);
          uVar4 = *(uint *)(param_1 + 0x208);
        }
        uVar5 = *(int *)(param_1 + 0x204) + uVar4;
        *(uint *)(param_1 + 0x208) = uVar4 + 1;
        uVar4 = uVar5 - uVar2;
        if (uVar5 < uVar2) {
          uVar4 = uVar5;
        }
        piVar6 = (int *)(*(int *)(param_1 + 0x200) + uVar4 * 0xc);
        *piVar6 = iVar13;
        piVar6[1] = iVar3;
        piVar6[2] = iVar9;
      }
    }
    FUN_01533edc(&local_b0,&local_a0);
    if (local_a8 == 0) {
      if (local_b0 != 0) {
        thunk_FUN_016d3fb4(local_ac);
      }
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x1fc);
      uVar4 = *(uint *)(param_1 + 0x208);
      if (uVar4 == uVar2) {
        FUN_01561020(param_1 + 0x1fc);
        uVar2 = *(uint *)(param_1 + 0x1fc);
        uVar4 = *(uint *)(param_1 + 0x208);
      }
      uVar5 = *(int *)(param_1 + 0x204) + uVar4;
      *(uint *)(param_1 + 0x208) = uVar4 + 1;
      uVar4 = uVar5 - uVar2;
      if (uVar5 < uVar2) {
        uVar4 = uVar5;
      }
      piVar6 = (int *)(*(int *)(param_1 + 0x200) + uVar4 * 0xc);
      *piVar6 = local_b0;
      piVar6[1] = local_ac;
      piVar6[2] = local_a8;
    }
  }
  goto LAB_01526bb8;
}

