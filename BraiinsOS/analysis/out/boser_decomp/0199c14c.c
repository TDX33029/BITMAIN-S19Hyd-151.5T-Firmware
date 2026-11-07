// FUN_0199c14c @ 0199c14c size=860 calls_out=0 calls_in=1
// strings: 

void FUN_0199c14c(undefined4 *param_1,uint *param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_3 == 0) {
    param_1[2] = param_2;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[4] = param_2;
    param_1[5] = 0;
    param_1[6] = param_2;
    param_1[7] = 0;
    param_1[8] = param_2;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    *(undefined2 *)(param_1 + 0xd) = 0;
    return;
  }
  if (param_3 < 4) {
    param_1[3] = param_2;
    param_1[4] = param_2;
    *(undefined1 *)(param_1 + 2) = 0x13;
    param_1[5] = 0;
    *(undefined1 *)param_1 = 10;
    return;
  }
  uVar3 = 2;
  puVar11 = param_2 + 1;
  uVar5 = *param_2;
  if (uVar5 != 2) {
    uVar3 = 5;
    if ((uVar5 & 0xffff) != 5) {
      uVar1 = 0x11;
      param_1[4] = uVar5 & 0xffff;
      param_1[5] = 0;
      goto LAB_0199c250;
    }
  }
  uVar8 = param_3 & 0xfffffffc;
  if (uVar8 == 4) {
LAB_0199c1f8:
    param_1[3] = puVar11;
    param_1[4] = puVar11;
    goto LAB_0199c204;
  }
  if (uVar8 == 8) {
    param_2 = param_2 + 2;
  }
  else {
    if (uVar8 != 0xc) {
      uVar8 = param_2[2];
      param_3 = param_3 - 0x10;
      uVar15 = param_2[3];
      puVar16 = param_2 + 4;
      uVar13 = param_2[1];
      if (uVar15 == 0) {
        iVar4 = 0;
        uVar12 = 0;
        puVar10 = puVar16;
LAB_0199c2cc:
        local_24 = 0;
        local_28 = 0;
        if (8 < uVar13) {
          *(undefined1 *)param_1 = 10;
          uVar1 = 0x4a;
LAB_0199c2f8:
          *(undefined1 *)(param_1 + 2) = uVar1;
          return;
        }
        puVar11 = (uint *)((int)puVar10 + iVar4);
        uVar2 = param_3 - iVar4;
        uVar9 = uVar2;
        if (uVar13 != 0) {
          iVar17 = iVar4 + uVar13 * 4;
          uVar9 = param_3 - iVar17;
          if (uVar5 == 2) {
            uVar5 = uVar13;
            puVar6 = &local_28;
            do {
              if (uVar2 < 4) goto LAB_0199c1f8;
              uVar14 = *puVar11;
              if (7 < uVar14 - 1) {
                uVar1 = 0x4e;
LAB_0199c450:
                param_1[3] = uVar14;
                *(undefined1 *)(param_1 + 2) = uVar1;
                goto LAB_0199c254;
              }
              uVar2 = uVar2 - 4;
              puVar11 = puVar11 + 1;
              *(undefined *)puVar6 = (&DAT_00570fdf)[uVar14];
              uVar5 = uVar5 - 1;
              puVar6 = (undefined4 *)((int)puVar6 + 1);
            } while (uVar5 != 0);
          }
          else {
            uVar1 = 0x4d;
            puVar6 = &local_28;
            uVar5 = uVar13;
            do {
              if (uVar2 < 4) goto LAB_0199c1f8;
              uVar14 = *puVar11;
              if ((7 < uVar14 - 1) || ((0xfdU >> (uVar14 - 1 & 0xff) & 1) == 0)) goto LAB_0199c450;
              uVar2 = uVar2 - 4;
              puVar11 = puVar11 + 1;
              uVar5 = uVar5 - 1;
              *(undefined *)puVar6 = (&DAT_0057088f)[uVar14];
              puVar6 = (undefined4 *)((int)puVar6 + 1);
            } while (uVar5 != 0);
          }
          puVar11 = (uint *)(iVar17 + (int)puVar10);
        }
        uVar2 = (uint)((ulonglong)uVar13 * (ulonglong)uVar8);
        uVar5 = (uint)((ulonglong)uVar13 * (ulonglong)uVar8 >> 0x20);
        if (uVar5 != 0 || uVar5 < (0x3fffffff < uVar2)) {
LAB_0199c444:
          uVar1 = 0x38;
          goto LAB_0199c250;
        }
        if (uVar9 < uVar2 << 2) goto LAB_0199c1f8;
        uVar5 = uVar2 * 4;
        puVar7 = puVar11 + uVar2;
        if (uVar5 <= uVar9 + uVar2 * -4) {
          param_1[8] = puVar7;
          param_1[9] = uVar5;
          param_1[10] = uVar13;
          param_1[0xb] = uVar8;
          param_1[3] = uVar12;
          param_1[4] = puVar10;
          *(undefined2 *)(param_1 + 0xd) = uVar3;
          param_1[0xc] = uVar15;
          *param_1 = local_28;
          param_1[1] = local_24;
          param_1[2] = puVar16;
          param_1[5] = iVar4;
          param_1[6] = puVar11;
          param_1[7] = uVar5;
          return;
        }
        param_1[3] = puVar7;
        param_1[4] = puVar7;
      }
      else {
        if ((uVar15 <= uVar8) || ((uVar15 & uVar15 - 1) != 0)) {
          *(undefined1 *)param_1 = 10;
          uVar1 = 0x4b;
          goto LAB_0199c2f8;
        }
        if (0x1fffffff < uVar15) goto LAB_0199c444;
        uVar12 = uVar15 * 8;
        if (uVar12 <= param_3) {
          param_3 = param_3 + uVar15 * -8;
          puVar11 = puVar16 + uVar15 * 2;
          if (param_3 < uVar15 << 2) goto LAB_0199c1f8;
          iVar4 = uVar15 << 2;
          puVar10 = puVar11;
          goto LAB_0199c2cc;
        }
        param_1[3] = puVar16;
        param_1[4] = puVar16;
      }
LAB_0199c204:
      param_1[5] = 0;
      uVar1 = 0x13;
      goto LAB_0199c250;
    }
    param_2 = param_2 + 3;
  }
  param_1[4] = param_2;
  param_1[3] = param_2;
  uVar1 = 0x13;
  param_1[5] = 0;
LAB_0199c250:
  *(undefined1 *)(param_1 + 2) = uVar1;
LAB_0199c254:
  *(undefined1 *)param_1 = 10;
  return;
}

