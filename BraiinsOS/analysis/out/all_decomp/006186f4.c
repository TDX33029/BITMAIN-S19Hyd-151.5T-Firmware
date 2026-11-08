// FUN_006186f4 @ 006186f4 size=712 calls_out=1 calls_in=1
// strings: 

void FUN_006186f4(byte *param_1,undefined4 *param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  byte bVar4;
  ushort *puVar5;
  int extraout_r1;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  byte bVar15;
  ushort *puVar16;
  
  puVar7 = (uint *)(param_1 + 0x10);
  puVar8 = (uint *)*param_2;
  uVar14 = param_2[1];
  if (uVar14 < 4) {
    uVar9 = (uint)puVar8 >> 8;
    bVar4 = 0x13;
    puVar13 = puVar8;
  }
  else {
    uVar11 = uVar14 - 4;
    puVar13 = puVar8 + 1;
    uVar6 = *puVar8;
    bVar4 = 4;
    *param_2 = puVar13;
    param_2[1] = uVar11;
    if (uVar6 < 0xfffffff0) {
      uVar14 = uVar6;
      puVar12 = puVar13;
      if (uVar6 <= uVar11) {
LAB_00618758:
        *param_2 = (undefined1 *)((int)puVar13 + uVar14);
        param_2[1] = uVar11 - uVar14;
        puVar12 = puVar13;
        if (1 < uVar14) {
          puVar5 = (ushort *)((int)puVar13 + 2);
          uVar1 = (ushort)*puVar13;
          if ((uVar1 & 0xfffffffe) != 2) {
            bVar4 = 0x11;
            *puVar7 = (uint)uVar1;
            param_1[0x14] = 0;
            param_1[0x15] = 0;
            param_1[0x16] = 0;
            param_1[0x17] = 0;
            goto LAB_006187b4;
          }
          if (uVar6 < 0xfffffff0) {
            if (uVar14 - 2 < 4) goto LAB_0061885c;
            puVar5 = *(ushort **)((int)puVar13 + 2);
            puVar16 = (ushort *)((int)puVar13 + 6);
            iVar10 = uVar14 - 6;
          }
          else {
            if (uVar14 - 2 < 8) {
LAB_0061885c:
              uVar6 = 0;
              bVar4 = 0x13;
LAB_00618864:
              *(ushort **)(param_1 + 0xc) = puVar5;
              param_1[8] = bVar4;
              *puVar7 = (uint)puVar5;
              *(uint *)(param_1 + 0x14) = uVar6;
              param_1[1] = 3;
              return;
            }
            puVar5 = *(ushort **)puVar5;
            if (*(int *)((int)puVar13 + 6) != 0) {
              bVar4 = 0x38;
              goto LAB_00618864;
            }
            puVar16 = (ushort *)((int)puVar13 + 10);
            iVar10 = uVar14 - 10;
          }
          if (iVar10 == 0) {
            bVar15 = 0x13;
LAB_006188e0:
            *(ushort **)(param_1 + 0xc) = puVar16;
            *(ushort **)(param_1 + 0x10) = puVar16;
            param_1[0x14] = 0;
            param_1[0x15] = 0;
            param_1[0x16] = 0;
            param_1[0x17] = 0;
            param_1[9] = (byte)puVar13;
            param_1[8] = bVar15;
            param_1[1] = 3;
            return;
          }
          bVar15 = 0x19;
          uVar2 = *puVar16;
          puVar13 = (uint *)(uint)(byte)uVar2;
          if ((&DAT_00000008 < puVar13) || ((1 << (int)puVar13 & 0x116U) == 0)) goto LAB_006188e0;
          if (iVar10 == 1) {
            *(byte **)(param_1 + 0xc) = (byte *)((int)puVar16 + 1);
            *(byte **)(param_1 + 0x10) = (byte *)((int)puVar16 + 1);
            bVar4 = 0x13;
            param_1[0x14] = 0;
            param_1[0x15] = 0;
            param_1[0x16] = 0;
            param_1[0x17] = 0;
          }
          else if (*(byte *)((int)puVar16 + 1) == 0) {
            cVar3 = '\x06';
            if (0xffffffef < uVar6) {
              cVar3 = '\x0e';
            }
            FUN_0184606c(cVar3 + bVar4 + '\x02',((uint)puVar13 & 0x7f) << 1);
            uVar6 = 0;
            if (extraout_r1 != 0) {
              uVar6 = (int)puVar13 * 2 - extraout_r1;
            }
            uVar6 = uVar6 & 0xff;
            if (uVar6 <= iVar10 - 2U) {
              *(byte **)(param_1 + 4) = (byte *)((int)(puVar16 + 1) + uVar6);
              *(uint *)(param_1 + 8) = (iVar10 - 2U) - uVar6;
              *(undefined4 *)(param_1 + 0xc) = param_3;
              *(uint *)(param_1 + 0x10) = uVar14;
              *(ushort **)(param_1 + 0x14) = puVar5;
              *(ushort *)(param_1 + 2) = uVar1;
              param_1[1] = bVar4;
              *param_1 = (byte)uVar2;
              return;
            }
            *puVar7 = (uint)(puVar16 + 1);
            param_1[0x14] = 0;
            param_1[0x15] = 0;
            param_1[0x16] = 0;
            param_1[0x17] = 0;
            bVar4 = 0x13;
          }
          else {
            bVar4 = 0x44;
          }
          goto LAB_006187b4;
        }
      }
LAB_00618770:
      *(uint **)(param_1 + 0xc) = puVar12;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      bVar4 = 0x13;
      *(uint **)(param_1 + 0x10) = puVar12;
      goto LAB_006187b4;
    }
    uVar9 = 0;
    if (uVar6 == 0xffffffff) {
      if (uVar11 < 8) {
        uVar9 = (uint)puVar13 >> 8;
        bVar4 = 0x13;
        goto LAB_0061879c;
      }
      puVar12 = puVar8 + 3;
      puVar8 = (uint *)puVar8[2];
      uVar11 = uVar14 - 0xc;
      *param_2 = puVar12;
      param_2[1] = uVar11;
      if (puVar8 == (uint *)0x0) {
        uVar14 = *puVar13;
        bVar4 = 8;
        puVar13 = puVar12;
        if (uVar14 <= uVar11) goto LAB_00618758;
        goto LAB_00618770;
      }
      bVar4 = 0x38;
    }
    else {
      bVar4 = 0x10;
    }
    puVar13 = puVar8;
  }
LAB_0061879c:
  *(uint *)(param_1 + 0x11) = uVar9;
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x10] = (byte)puVar13;
  *(uint **)(param_1 + 0xc) = puVar13;
LAB_006187b4:
  param_1[8] = bVar4;
  param_1[1] = 3;
  return;
}

