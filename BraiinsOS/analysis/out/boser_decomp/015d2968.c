// FUN_015d2968 @ 015d2968 size=460 calls_out=1 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015d2968(undefined4 *param_1,int *param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  int local_3c;
  
  iVar16 = *param_2;
  uVar14 = param_2[1];
  uVar9 = param_3 >> 0x19;
  local_3c = 0;
  do {
    param_3 = uVar14 & param_3;
    uVar8 = *(uint *)(iVar16 + param_3);
    uVar4 = uVar8 ^ uVar9 * 0x1010101;
    uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
    while (uVar4 != 0) {
      uVar5 = uVar4 >> 8;
      uVar1 = uVar4 >> 0x10;
      uVar2 = uVar4 >> 0x18;
      uVar3 = uVar4 << 0x18;
      uVar4 = uVar4 - 1 & uVar4;
      uVar5 = param_3 + ((uint)LZCOUNT(uVar3 | (uVar5 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2)
                        >> 3) & uVar14;
      iVar6 = iVar16 + -0x28 + uVar5 * -0x28;
      if ((param_6 == *(int *)(iVar6 + 8)) &&
         (iVar6 = thunk_FUN_01bed842(param_5,*(undefined4 *)(iVar6 + 4),param_6), iVar6 == 0)) {
        iVar6 = ((int)(uVar5 * 0x28) >> 3) * -0x33333333;
        puVar7 = (uint *)(iVar16 + (iVar6 - 4U & uVar14));
        uVar14 = *puVar7;
        uVar9 = *(uint *)(iVar16 + iVar6) & 0x80808080 & *(uint *)(iVar16 + iVar6) << 1;
        uVar11 = 0x80;
        if (((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8
                           | uVar9 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar14 & 0x80808080 & uVar14 << 1) >> 3) < 4) {
          param_2[2] = param_2[2] + 1;
          uVar11 = 0xff;
        }
        *(undefined1 *)(iVar16 + iVar6) = uVar11;
        iVar16 = iVar16 + uVar5 * -0x28;
        iVar6 = param_2[3];
        *(undefined1 *)(puVar7 + 1) = uVar11;
        param_2[3] = iVar6 + -1;
        uVar10 = *(undefined4 *)(iVar16 + -0x24);
        uVar12 = *(undefined4 *)(iVar16 + -0x20);
        uVar13 = *(undefined4 *)(iVar16 + -0x1c);
        uVar15 = *(undefined4 *)(iVar16 + -0x18);
        *param_1 = *(undefined4 *)(iVar16 + -0x28);
        param_1[1] = uVar10;
        param_1[2] = uVar12;
        param_1[3] = uVar13;
        param_1[4] = uVar15;
        uVar10 = *(undefined4 *)(iVar16 + -0x10);
        uVar12 = *(undefined4 *)(iVar16 + -0xc);
        uVar13 = *(undefined4 *)(iVar16 + -8);
        uVar15 = *(undefined4 *)(iVar16 + -4);
        param_1[5] = *(undefined4 *)(iVar16 + -0x14);
        param_1[6] = uVar10;
        param_1[7] = uVar12;
        param_1[8] = uVar13;
        param_1[9] = uVar15;
        return;
      }
    }
    if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) {
      param_1[6] = 2;
      param_1[7] = 0;
      return;
    }
    local_3c = local_3c + 4;
    param_3 = param_3 + local_3c;
  } while( true );
}

