// FUN_016cbf84 @ 016cbf84 size=1092 calls_out=8 calls_in=1
// strings: 

void FUN_016cbf84(undefined4 *param_1,uint param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  bool bVar18;
  
  puVar17 = (undefined4 *)*param_1;
  if (puVar17 != (undefined4 *)0x0) {
    iVar4 = param_1[1];
    do {
      uVar16 = (uint)*(ushort *)((int)puVar17 + 0x32);
      iVar11 = uVar16 << 2;
      iVar3 = 1;
      do {
        iVar8 = iVar3;
        if (iVar11 == 0) goto LAB_016cbff4;
        iVar11 = iVar11 + -4;
        bVar18 = param_2 < (uint)puVar17[iVar8];
        bVar2 = !bVar18 && param_2 != puVar17[iVar8];
        iVar3 = iVar8 + 1;
      } while ((char)(bVar2 - bVar18) == '\x01');
      if (bVar2 == bVar18) {
        return;
      }
      uVar16 = iVar8 - 1;
LAB_016cbff4:
      if (iVar4 == 0) goto LAB_016cc038;
      iVar4 = iVar4 + -1;
      puVar17 = (undefined4 *)puVar17[uVar16 + 0xd];
    } while( true );
  }
  puVar17 = (undefined4 *)FUN_016ecaf4();
  *(undefined2 *)((int)puVar17 + 0x32) = 1;
  *param_1 = puVar17;
  param_1[1] = 0;
  *puVar17 = 0;
  puVar17[1] = param_2;
  goto LAB_016cc024;
LAB_016cc038:
  uVar1 = *(ushort *)((int)puVar17 + 0x32);
  uVar15 = (uint)uVar1;
  if (uVar15 < 0xb) {
    if (uVar16 + 1 <= uVar15) {
      FUN_01bed864(puVar17 + uVar16 + 2,puVar17 + uVar16 + 1,(uVar15 - uVar16) * 4);
    }
    puVar17[uVar16 + 1] = param_2;
    *(ushort *)((int)puVar17 + 0x32) = uVar1 + 1;
  }
  else {
    uVar15 = 4;
    if (uVar16 < 5) {
      bVar2 = false;
    }
    else if (uVar16 == 5) {
      bVar2 = false;
      uVar15 = 5;
    }
    else {
      if (uVar16 == 6) {
        uVar15 = 5;
        uVar16 = 0;
      }
      else {
        uVar16 = uVar16 - 7;
        uVar15 = 6;
      }
      bVar2 = true;
    }
    puVar5 = (undefined4 *)FUN_016ecaf4();
    *(undefined2 *)((int)puVar5 + 0x32) = 0;
    *puVar5 = 0;
    uVar9 = ~uVar15 + (uint)*(ushort *)((int)puVar17 + 0x32);
    *(short *)((int)puVar5 + 0x32) = (short)uVar9;
    if (0xb < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar9,0xb,&DAT_01d2ff10);
    }
    uVar12 = puVar17[uVar15 + 1];
    FUN_01bed4e2(puVar5 + 1,puVar17 + uVar15 + 2,uVar9 * 4);
    *(short *)((int)puVar17 + 0x32) = (short)uVar15;
    puVar7 = puVar5;
    if (!bVar2) {
      puVar7 = puVar17;
    }
    uVar1 = *(ushort *)((int)puVar7 + 0x32);
    if (uVar16 + 1 <= (uint)uVar1) {
      FUN_01bed864(puVar7 + uVar16 + 2,puVar7 + uVar16 + 1,(uVar1 - uVar16) * 4);
    }
    puVar7[uVar16 + 1] = param_2;
    *(ushort *)((int)puVar7 + 0x32) = uVar1 + 1;
    if (puVar17 != (undefined4 *)0x0) {
      uVar16 = 0;
      if ((undefined4 *)*puVar17 != (undefined4 *)0x0) {
        puVar7 = (undefined4 *)*puVar17;
        uVar13 = uVar12;
        puVar14 = puVar5;
        do {
          puVar6 = puVar7;
          uVar1 = *(ushort *)((int)puVar6 + 0x32);
          uVar15 = (uint)*(ushort *)(puVar17 + 0xc);
          if (uVar1 < 0xb) {
            FUN_0133b454(puVar6,uVar15);
            goto LAB_016cc024;
          }
          uVar9 = 4;
          if (uVar15 < 5) {
            bVar2 = false;
          }
          else if (uVar15 == 5) {
            bVar2 = false;
            uVar9 = 5;
          }
          else if (uVar15 == 6) {
            bVar2 = true;
            uVar15 = 0;
            uVar9 = 5;
          }
          else {
            uVar15 = uVar15 - 7;
            bVar2 = true;
            uVar9 = 6;
          }
          puVar5 = (undefined4 *)FUN_016c90b4();
          *(undefined2 *)((int)puVar5 + 0x32) = 0;
          *puVar5 = 0;
          uVar10 = ~uVar9 + (uint)*(ushort *)((int)puVar6 + 0x32);
          *(short *)((int)puVar5 + 0x32) = (short)uVar10;
          if (0xb < uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar10,0xb,&DAT_01d2ff10);
          }
          uVar12 = puVar6[uVar9 + 1];
          FUN_01bed4e2(puVar5 + 1,puVar6 + uVar9 + 2,uVar10 * 4);
          *(short *)((int)puVar6 + 0x32) = (short)uVar9;
          uVar10 = (uint)*(ushort *)((int)puVar5 + 0x32);
          iVar4 = uVar10 + 1;
          if (0xb < uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,iVar4,0xc,&DAT_01d2ff20);
          }
          if (uVar1 - uVar9 != iVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
          }
          uVar16 = uVar16 + 1;
          FUN_01bed4e2(puVar5 + 0xd,puVar6 + uVar9 + 0xe,iVar4 * 4);
          uVar9 = 0;
          do {
            puVar17 = (undefined4 *)(puVar5 + 0xd)[uVar9];
            *(short *)(puVar17 + 0xc) = (short)uVar9;
            *puVar17 = puVar5;
            if (uVar10 <= uVar9) break;
            uVar9 = uVar9 + 1;
          } while (uVar9 <= uVar10);
          puVar17 = puVar5;
          if (!bVar2) {
            puVar17 = puVar6;
          }
          FUN_0133b454(puVar17,uVar15,uVar13,puVar14);
          puVar7 = (undefined4 *)*puVar6;
          uVar13 = uVar12;
          puVar14 = puVar5;
          puVar17 = puVar6;
        } while ((undefined4 *)*puVar6 != (undefined4 *)0x0);
      }
      puVar17 = (undefined4 *)*param_1;
      if (puVar17 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2fee0);
      }
      uVar15 = param_1[1];
      puVar7 = (undefined4 *)FUN_016c90b4();
      puVar7[0xd] = puVar17;
      *(undefined2 *)((int)puVar7 + 0x32) = 0;
      *puVar7 = 0;
      if (0xfffffffe < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d305e8);
      }
      *param_1 = puVar7;
      *(undefined2 *)(puVar17 + 0xc) = 0;
      *puVar17 = puVar7;
      param_1[1] = uVar15 + 1;
      if (uVar16 != uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00533a41,0x30,&DAT_01d305c8);
      }
      puVar7[0xe] = puVar5;
      puVar7[1] = uVar12;
      *(undefined2 *)((int)puVar7 + 0x32) = 1;
      *(undefined2 *)(puVar5 + 0xc) = 1;
      *puVar5 = puVar7;
    }
  }
LAB_016cc024:
  param_1[2] = param_1[2] + 1;
  return;
}

