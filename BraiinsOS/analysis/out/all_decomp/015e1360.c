// FUN_015e1360 @ 015e1360 size=772 calls_out=1 calls_in=1
// strings: 

void FUN_015e1360(byte *param_1,undefined4 *param_2,undefined4 param_3)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int extraout_r1;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  byte unaff_r10;
  byte bVar12;
  uint3 *puVar13;
  ushort *puVar14;
  
  puVar8 = (uint *)*param_2;
  uVar10 = param_2[1];
  puVar6 = (uint *)(param_1 + 0x10);
  if (uVar10 < 4) {
    uVar7 = (uint)puVar8 >> 8;
    bVar3 = 0x13;
    puVar9 = puVar8;
  }
  else {
    uVar11 = uVar10 - 4;
    puVar9 = puVar8 + 1;
    uVar5 = *puVar8;
    bVar3 = 4;
    *param_2 = puVar9;
    param_2[1] = uVar11;
    if (uVar5 < 0xfffffff0) {
      puVar8 = puVar9;
      uVar10 = uVar5;
      if (uVar5 <= uVar11) {
LAB_015e13c8:
        *param_2 = (byte *)((int)puVar9 + uVar10);
        param_2[1] = uVar11 - uVar10;
        puVar8 = puVar9;
        if (1 < uVar10) {
          puVar13 = (uint3 *)((int)puVar9 + 2);
          uVar1 = (ushort)*puVar9;
          if ((uVar1 & 0xfffffffe) != 2) {
            bVar3 = 0x11;
            *puVar6 = (uint)uVar1;
            param_1[0x14] = 0;
            param_1[0x15] = 0;
            param_1[0x16] = 0;
            param_1[0x17] = 0;
            goto LAB_015e1420;
          }
          if (uVar5 < 0xfffffff0) {
            if (uVar10 - 2 < 4) goto LAB_015e14f4;
            uVar11 = *(uint *)((int)puVar9 + 2);
            puVar14 = (ushort *)((int)puVar9 + 6);
            iVar4 = uVar10 - 6;
          }
          else {
            if (uVar10 - 2 < 8) {
LAB_015e14f4:
              uVar5 = 0;
              bVar3 = 0x13;
LAB_015e14fc:
              *puVar6 = (uint)puVar13;
              *(uint3 **)(param_1 + 0xc) = puVar13;
              param_1[8] = bVar3;
              param_1[1] = 3;
              *(uint *)(param_1 + 0x14) = uVar5;
              return;
            }
            if (*(byte *)((int)puVar9 + 9) != 0 || *(uint *)((int)puVar9 + 5) >> 8 != 0) {
              bVar3 = 0x38;
              goto LAB_015e14fc;
            }
            puVar14 = (ushort *)((int)puVar9 + 10);
            uVar11 = *(uint *)((int)puVar9 + 5) << 0x18 | (uint)*puVar13;
            iVar4 = uVar10 - 10;
          }
          if (iVar4 == 0) {
            bVar12 = 0x13;
LAB_015e1588:
            *(ushort **)(param_1 + 0xc) = puVar14;
            *(ushort **)(param_1 + 0x10) = puVar14;
            param_1[0x14] = 0;
            param_1[0x15] = 0;
            param_1[0x16] = 0;
            param_1[0x17] = 0;
            param_1[9] = unaff_r10;
            param_1[8] = bVar12;
            param_1[1] = 3;
            return;
          }
          unaff_r10 = (byte)*puVar14;
          uVar7 = (uint)unaff_r10;
          bVar12 = 0x19;
          if (8 < uVar7) goto LAB_015e1588;
          if ((1 << uVar7 & 0x116U) == 0) {
            bVar12 = 0x19;
            goto LAB_015e1588;
          }
          puVar8 = (uint *)((int)puVar14 + 1);
          if (iVar4 != 1) {
            if (*(byte *)((int)puVar14 + 1) != 0) {
              param_1[1] = 3;
              param_1[8] = 0x44;
              return;
            }
            cVar2 = '\b';
            if (0xffffffef < uVar5) {
              cVar2 = '\x10';
            }
            FUN_0184606c(cVar2 + bVar3,(uVar7 & 0x7f) << 1);
            uVar5 = 0;
            if (extraout_r1 != 0) {
              uVar5 = uVar7 * 2 - extraout_r1;
            }
            uVar5 = uVar5 & 0xff;
            if (iVar4 - 2U < uVar5) {
              *puVar6 = (uint)(puVar14 + 1);
              param_1[0x14] = 0;
              param_1[0x15] = 0;
              param_1[0x16] = 0;
              param_1[0x17] = 0;
              param_1[8] = 0x13;
              param_1[1] = 3;
              return;
            }
            *(byte **)(param_1 + 4) = (byte *)((int)(puVar14 + 1) + uVar5);
            *(uint *)(param_1 + 8) = (iVar4 - 2U) - uVar5;
            *(undefined4 *)(param_1 + 0xc) = param_3;
            *(uint *)(param_1 + 0x10) = uVar10;
            *(uint *)(param_1 + 0x14) = uVar11;
            *(ushort *)(param_1 + 2) = uVar1;
            param_1[1] = bVar3;
            *param_1 = unaff_r10;
            return;
          }
        }
      }
LAB_015e13dc:
      *(uint **)(param_1 + 0xc) = puVar8;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      bVar3 = 0x13;
      *(uint **)(param_1 + 0x10) = puVar8;
      goto LAB_015e1420;
    }
    uVar7 = 0;
    if (uVar5 == 0xffffffff) {
      if (uVar11 < 8) {
        uVar7 = (uint)puVar9 >> 8;
        bVar3 = 0x13;
        goto LAB_015e1408;
      }
      bVar3 = *(byte *)((int)puVar8 + 0xb);
      uVar11 = uVar10 - 0xc;
      uVar10 = *(uint *)((int)puVar8 + 7);
      puVar8 = puVar8 + 3;
      *param_2 = puVar8;
      param_2[1] = uVar11;
      if (bVar3 == 0 && uVar10 >> 8 == 0) {
        bVar3 = 8;
        uVar10 = uVar10 << 0x18 | (uint)(uint3)*puVar9;
        puVar9 = puVar8;
        if (uVar10 <= uVar11) goto LAB_015e13c8;
        goto LAB_015e13dc;
      }
      bVar3 = 0x38;
    }
    else {
      bVar3 = 0x10;
    }
    puVar9 = puVar8;
  }
LAB_015e1408:
  *(uint *)(param_1 + 0x11) = uVar7;
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x10] = (byte)puVar9;
  *(uint **)(param_1 + 0xc) = puVar9;
LAB_015e1420:
  param_1[8] = bVar3;
  param_1[1] = 3;
  return;
}

