// FUN_010182e8 @ 010182e8 size=476 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_010182e8(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  int unaff_r11;
  int iVar16;
  int local_38;
  
  uVar4 = FUN_01adafd4(param_1[4],param_1[5],param_1[6],param_1[7],param_2,param_3);
  uVar10 = uVar4 >> 0x19;
  iVar16 = *param_1;
  uVar13 = param_1[1];
  local_38 = 0;
  do {
    uVar4 = uVar13 & uVar4;
    uVar5 = *(uint *)(iVar16 + uVar4);
    uVar6 = uVar5 ^ uVar10 * 0x1010101;
    uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
    while (uVar6 != 0) {
      uVar7 = uVar6 >> 8;
      uVar1 = uVar6 >> 0x10;
      uVar2 = uVar6 >> 0x18;
      uVar3 = uVar6 << 0x18;
      uVar6 = uVar6 - 1 & uVar6;
      uVar7 = uVar4 + ((uint)LZCOUNT(uVar3 | (uVar7 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2)
                      >> 3) & uVar13;
      iVar8 = iVar16 + -0x14 + uVar7 * -0x14;
      if ((param_3 == *(int *)(iVar8 + 8)) &&
         (iVar8 = thunk_FUN_01bed842(param_2,*(undefined4 *)(iVar8 + 4),param_3), unaff_r11 = iVar16
         , iVar8 == 0)) {
        iVar8 = ((int)(uVar7 * 0x14) >> 2) * -0x33333333;
        puVar9 = (uint *)(iVar16 + (iVar8 - 4U & uVar13));
        uVar4 = *puVar9;
        uVar10 = *(uint *)(iVar16 + iVar8) & 0x80808080 & *(uint *)(iVar16 + iVar8) << 1;
        iVar14 = param_1[3];
        uVar12 = 0x80;
        if (((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                           (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar4 & 0x80808080 & uVar4 << 1) >> 3) < 4) {
          param_1[2] = param_1[2] + 1;
          uVar12 = 0xff;
        }
        iVar11 = iVar16 + uVar7 * -0x14;
        *(undefined1 *)(iVar16 + iVar8) = uVar12;
        *(undefined1 *)(puVar9 + 1) = uVar12;
        iVar16 = *(int *)(iVar11 + -0x14);
        param_1[3] = iVar14 + -1;
        if (iVar16 == -0x80000000) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined4 *)(iVar11 + -8);
          unaff_r11 = *(int *)(iVar11 + -4);
          FUN_019bb7e0(iVar16,*(undefined4 *)(iVar11 + -0x10));
        }
        goto LAB_010184b4;
      }
    }
    uVar15 = 0;
    if ((uVar5 & 0x80808080 & uVar5 << 1) != 0) {
LAB_010184b4:
      return CONCAT44(unaff_r11,uVar15);
    }
    local_38 = local_38 + 4;
    uVar4 = uVar4 + local_38;
  } while( true );
}

