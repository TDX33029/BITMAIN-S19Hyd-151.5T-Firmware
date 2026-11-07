// FUN_006d1004 @ 006d1004 size=512 calls_out=5 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006d1004(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint local_58;
  int *local_54;
  uint local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_3c;
  uint local_38;
  uint *local_34;
  undefined4 uStack_30;
  int local_2c;
  
  if (param_2[7] != 0) {
    iVar1 = FUN_015d14f4(param_2 + 3);
    uVar3 = param_2[7];
    iVar13 = *(int *)(iVar1 + -4);
    iVar11 = *(int *)(iVar1 + -8);
    iVar1 = *(int *)(iVar1 + -0xc);
    param_2[7] = uVar3 - 1;
    if (iVar1 != -0x80000000) {
      if (uVar3 - 1 == -1) {
        uVar3 = 0xffffffff;
      }
      piVar2 = (int *)&SUB_00000004;
      uVar8 = 4;
      if (4 < uVar3) {
        uVar8 = uVar3;
      }
      uVar12 = 0;
      iVar5 = uVar8 * 0xc;
      if (0xaaaaaaa < uVar3) {
LAB_006d1098:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar12,iVar5);
      }
      local_58 = 0;
      if (iVar5 != 0) {
        uVar12 = 4;
        piVar2 = (int *)FUN_01298504(iVar5,4);
        local_58 = uVar8;
        if (piVar2 == (int *)0x0) goto LAB_006d1098;
      }
      *piVar2 = iVar1;
      piVar2[1] = iVar11;
      piVar2[2] = iVar13;
      local_50 = 1;
      local_48 = *param_2;
      uStack_44 = param_2[1];
      uStack_40 = param_2[2];
      iVar11 = param_2[3];
      uVar3 = param_2[4];
      puVar7 = (uint *)param_2[5];
      uStack_30 = param_2[6];
      local_2c = param_2[7];
      iVar1 = local_2c;
      local_54 = piVar2;
      local_3c = iVar11;
      local_38 = uVar3;
      local_34 = puVar7;
      while (uVar8 = local_50, iVar1 != 0) {
        uVar4 = uVar3;
        puVar9 = puVar7;
        if (uVar3 == 0) {
          do {
            puVar7 = puVar9 + 1;
            uVar3 = *puVar9;
            iVar11 = iVar11 + -0x30;
            puVar9 = puVar7;
          } while ((uVar3 & 0x80808080) == 0x80808080);
          uVar4 = uVar3 & 0x80808080 ^ 0x80808080;
          local_3c = iVar11;
          local_34 = puVar7;
        }
        iVar13 = iVar1 + -1;
        uVar3 = uVar4 - 1 & uVar4;
        iVar5 = iVar11 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                        (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) * -0xc;
        iVar10 = *(int *)(iVar5 + -0xc);
        local_38 = uVar3;
        if (iVar10 == -0x80000000) goto LAB_006d11e4;
        iVar14 = *(int *)(iVar5 + -4);
        iVar5 = *(int *)(iVar5 + -8);
        if (local_50 == local_58) {
          if (iVar13 == -1) {
            iVar1 = -1;
          }
          FUN_006520b4(&local_58,local_50,iVar1,4,0xc);
          piVar2 = local_54;
        }
        local_50 = uVar8 + 1;
        piVar6 = piVar2 + uVar8 * 3;
        *piVar6 = iVar10;
        piVar6[1] = iVar5;
        piVar6[2] = iVar14;
        iVar1 = iVar13;
      }
      iVar13 = 0;
LAB_006d11e4:
      local_2c = iVar13;
      FUN_006b435c(&local_48);
      *param_1 = local_58;
      param_1[1] = (uint)local_54;
      param_1[2] = local_50;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 4;
  param_1[2] = 0;
  FUN_006b435c(param_2);
  return;
}

