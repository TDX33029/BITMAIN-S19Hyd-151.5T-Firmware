// FUN_01930aa8 @ 01930aa8 size=1128 calls_out=8 calls_in=4
// strings: 

undefined4 FUN_01930aa8(undefined4 *param_1,ushort param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined2 uVar14;
  ushort *puVar15;
  undefined4 *puVar16;
  bool bVar17;
  
  puVar16 = (undefined4 *)*param_1;
  if (puVar16 != (undefined4 *)0x0) {
    iVar4 = param_1[1];
    do {
      uVar8 = (uint)*(ushort *)((int)puVar16 + 6);
      uVar13 = 0xffffffff;
      iVar11 = uVar8 << 1;
      puVar15 = (ushort *)(puVar16 + 2);
      do {
        if (iVar11 == 0) goto LAB_01930b24;
        iVar11 = iVar11 + -2;
        uVar13 = uVar13 + 1;
        bVar17 = param_2 < *puVar15;
        bVar3 = !bVar17 && param_2 != *puVar15;
        puVar15 = puVar15 + 1;
      } while ((char)(bVar3 - bVar17) == '\x01');
      uVar8 = uVar13;
      if (bVar3 == bVar17) {
        return 0;
      }
LAB_01930b24:
      if (iVar4 == 0) goto LAB_01930b78;
      iVar4 = iVar4 + -1;
      puVar16 = (undefined4 *)puVar16[uVar8 + 8];
    } while( true );
  }
  puVar16 = (undefined4 *)FUN_01933678();
  *(ushort *)(puVar16 + 2) = param_2;
  *(undefined2 *)((int)puVar16 + 6) = 1;
  *puVar16 = 0;
  *param_1 = puVar16;
  param_1[1] = 0;
  goto LAB_01930b60;
LAB_01930b78:
  uVar1 = *(ushort *)((int)puVar16 + 6);
  uVar13 = (uint)uVar1;
  if (uVar13 < 0xb) {
    if (uVar8 + 1 <= uVar13) {
      FUN_01bed864((int)puVar16 + (uVar8 + 1) * 2 + 8,(int)puVar16 + uVar8 * 2 + 8,
                   (uVar13 - uVar8) * 2);
    }
    *(ushort *)((int)puVar16 + 6) = uVar1 + 1;
    *(ushort *)((int)puVar16 + uVar8 * 2 + 8) = param_2;
  }
  else {
    uVar13 = 4;
    if (uVar8 < 5) {
      bVar3 = false;
    }
    else if (uVar8 == 5) {
      bVar3 = false;
      uVar13 = 5;
    }
    else {
      if (uVar8 == 6) {
        uVar13 = 5;
        uVar8 = 0;
      }
      else {
        uVar8 = uVar8 - 7;
        uVar13 = 6;
      }
      bVar3 = true;
    }
    puVar5 = (undefined4 *)FUN_01933678();
    *(undefined2 *)((int)puVar5 + 6) = 0;
    *puVar5 = 0;
    uVar9 = ~uVar13 + (uint)*(ushort *)((int)puVar16 + 6);
    *(short *)((int)puVar5 + 6) = (short)uVar9;
    if (0xb < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar9,0xb,&DAT_01d2ff10);
    }
    uVar14 = *(undefined2 *)((int)puVar16 + uVar13 * 2 + 8);
    FUN_01bed4e2(puVar5 + 2,(int)puVar16 + uVar13 * 2 + 10,uVar9 * 2);
    puVar7 = puVar5;
    if (!bVar3) {
      puVar7 = puVar16;
    }
    *(short *)((int)puVar16 + 6) = (short)uVar13;
    uVar1 = *(ushort *)((int)puVar7 + 6);
    puVar15 = (ushort *)((int)puVar7 + uVar8 * 2 + 8);
    if (uVar8 < uVar1) {
      FUN_01bed864(puVar15 + 1,puVar15,(uVar1 - uVar8) * 2);
    }
    *(ushort *)((int)puVar7 + 6) = uVar1 + 1;
    *puVar15 = param_2;
    if (puVar16 != (undefined4 *)0x0) {
      uVar8 = 0;
      if ((undefined4 *)*puVar16 != (undefined4 *)0x0) {
        puVar7 = (undefined4 *)*puVar16;
        puVar12 = puVar5;
        uVar2 = uVar14;
        do {
          puVar6 = puVar7;
          uVar1 = *(ushort *)((int)puVar6 + 6);
          uVar13 = (uint)*(ushort *)(puVar16 + 1);
          if (uVar1 < 0xb) {
            FUN_018f02a4(puVar6,uVar13);
            goto LAB_01930b60;
          }
          uVar9 = 4;
          if (uVar13 < 5) {
            bVar3 = false;
          }
          else if (uVar13 == 5) {
            bVar3 = false;
            uVar9 = 5;
          }
          else if (uVar13 == 6) {
            bVar3 = true;
            uVar13 = 0;
            uVar9 = 5;
          }
          else {
            uVar13 = uVar13 - 7;
            bVar3 = true;
            uVar9 = 6;
          }
          puVar5 = (undefined4 *)FUN_01933698();
          *(undefined2 *)((int)puVar5 + 6) = 0;
          *puVar5 = 0;
          uVar10 = ~uVar9 + (uint)*(ushort *)((int)puVar6 + 6);
          *(short *)((int)puVar5 + 6) = (short)uVar10;
          if (0xb < uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar10,0xb,&DAT_01d2ff10);
          }
          uVar14 = *(undefined2 *)((int)puVar6 + uVar9 * 2 + 8);
          FUN_01bed4e2(puVar5 + 2,(int)puVar6 + uVar9 * 2 + 10,uVar10 * 2);
          *(short *)((int)puVar6 + 6) = (short)uVar9;
          uVar10 = (uint)*(ushort *)((int)puVar5 + 6);
          iVar4 = uVar10 + 1;
          if (0xb < uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,iVar4,0xc,&DAT_01d2ff20);
          }
          if (uVar1 - uVar9 != iVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
          }
          uVar8 = uVar8 + 1;
          FUN_01bed4e2(puVar5 + 8,puVar6 + uVar9 + 9,iVar4 * 4);
          uVar9 = 0;
          do {
            puVar16 = (undefined4 *)(puVar5 + 8)[uVar9];
            *(short *)(puVar16 + 1) = (short)uVar9;
            *puVar16 = puVar5;
            if (uVar10 <= uVar9) break;
            uVar9 = uVar9 + 1;
          } while (uVar9 <= uVar10);
          puVar16 = puVar5;
          if (!bVar3) {
            puVar16 = puVar6;
          }
          FUN_018f02a4(puVar16,uVar13,uVar2,puVar12);
          puVar7 = (undefined4 *)*puVar6;
          puVar12 = puVar5;
          puVar16 = puVar6;
          uVar2 = uVar14;
        } while ((undefined4 *)*puVar6 != (undefined4 *)0x0);
      }
      puVar16 = (undefined4 *)*param_1;
      if (puVar16 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2fee0);
      }
      uVar13 = param_1[1];
      puVar7 = (undefined4 *)FUN_01933698();
      puVar7[8] = puVar16;
      *(undefined2 *)((int)puVar7 + 6) = 0;
      *puVar7 = 0;
      if (0xfffffffe < uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d305e8);
      }
      *param_1 = puVar7;
      *(undefined2 *)(puVar16 + 1) = 0;
      *puVar16 = puVar7;
      param_1[1] = uVar13 + 1;
      if (uVar8 != uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00533a41,0x30,&DAT_01d305c8);
      }
      puVar7[9] = puVar5;
      *(undefined2 *)(puVar7 + 2) = uVar14;
      *(undefined2 *)((int)puVar7 + 6) = 1;
      *(undefined2 *)(puVar5 + 1) = 1;
      *puVar5 = puVar7;
    }
  }
LAB_01930b60:
  param_1[2] = param_1[2] + 1;
  return 1;
}

