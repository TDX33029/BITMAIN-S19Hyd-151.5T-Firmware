// FUN_0130f1cc @ 0130f1cc size=1004 calls_out=10 calls_in=2
// strings: 

void FUN_0130f1cc(int *param_1,uint param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  bool bVar17;
  undefined8 uVar18;
  
  puVar15 = (undefined4 *)*param_1;
  if (puVar15 != (undefined4 *)0x0) {
    iVar4 = param_1[1];
    do {
      uVar13 = (uint)*(ushort *)((int)puVar15 + 0x32);
      iVar9 = uVar13 << 2;
      iVar3 = 1;
      do {
        iVar7 = iVar3;
        if (iVar9 == 0) goto LAB_0130f23c;
        iVar9 = iVar9 + -4;
        bVar17 = param_2 < (uint)puVar15[iVar7];
        bVar2 = !bVar17 && param_2 != puVar15[iVar7];
        iVar3 = iVar7 + 1;
      } while ((char)(bVar2 - bVar17) == '\x01');
      if (bVar2 == bVar17) {
        return;
      }
      uVar13 = iVar7 - 1;
LAB_0130f23c:
      if (iVar4 == 0) goto LAB_0130f280;
      iVar4 = iVar4 + -1;
      puVar15 = (undefined4 *)puVar15[uVar13 + 0xd];
    } while( true );
  }
  puVar15 = (undefined4 *)FUN_016ecaf4();
  *(undefined2 *)((int)puVar15 + 0x32) = 1;
  *param_1 = (int)puVar15;
  param_1[1] = 0;
  *puVar15 = 0;
  puVar15[1] = param_2;
  goto LAB_0130f26c;
LAB_0130f280:
  uVar1 = *(ushort *)((int)puVar15 + 0x32);
  uVar14 = (uint)uVar1;
  if (uVar14 < 0xb) {
    if (uVar13 + 1 <= uVar14) {
      FUN_01bed864(puVar15 + uVar13 + 2,puVar15 + uVar13 + 1,(uVar14 - uVar13) * 4);
    }
    puVar15[uVar13 + 1] = param_2;
    *(ushort *)((int)puVar15 + 0x32) = uVar1 + 1;
  }
  else {
    uVar14 = 4;
    if (uVar13 < 5) {
      bVar2 = false;
    }
    else if (uVar13 == 5) {
      bVar2 = false;
      uVar14 = 5;
    }
    else {
      if (uVar13 == 6) {
        uVar14 = 5;
        uVar13 = 0;
      }
      else {
        uVar13 = uVar13 - 7;
        uVar14 = 6;
      }
      bVar2 = true;
    }
    puVar5 = (undefined4 *)FUN_016ecaf4();
    *(undefined2 *)((int)puVar5 + 0x32) = 0;
    *puVar5 = 0;
    uVar8 = ~uVar14 + (uint)*(ushort *)((int)puVar15 + 0x32);
    *(short *)((int)puVar5 + 0x32) = (short)uVar8;
    if (0xb < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar8,0xb,&DAT_01d2ff10);
    }
    uVar10 = puVar15[uVar14 + 1];
    FUN_01bed4e2(puVar5 + 1,puVar15 + uVar14 + 2,uVar8 * 4);
    *(short *)((int)puVar15 + 0x32) = (short)uVar14;
    puVar16 = puVar5;
    if (!bVar2) {
      puVar16 = puVar15;
    }
    uVar1 = *(ushort *)((int)puVar16 + 0x32);
    if (uVar13 < uVar1) {
      FUN_01bed864(puVar16 + uVar13 + 1 + 1,puVar16 + uVar13 + 1,(uVar1 - uVar13) * 4);
    }
    puVar16[uVar13 + 1] = param_2;
    *(ushort *)((int)puVar16 + 0x32) = uVar1 + 1;
    if (puVar15 != (undefined4 *)0x0) {
      iVar4 = 0;
      if ((undefined4 *)*puVar15 != (undefined4 *)0x0) {
        puVar16 = (undefined4 *)*puVar15;
        uVar11 = uVar10;
        puVar12 = puVar5;
        do {
          puVar6 = puVar16;
          uVar1 = *(ushort *)((int)puVar6 + 0x32);
          uVar13 = (uint)*(ushort *)(puVar15 + 0xc);
          if (uVar1 < 0xb) {
            FUN_0130a8f0(puVar6,uVar13);
            goto LAB_0130f26c;
          }
          uVar14 = 4;
          if (uVar13 < 5) {
            bVar2 = false;
          }
          else if (uVar13 == 5) {
            bVar2 = false;
            uVar14 = 5;
          }
          else if (uVar13 == 6) {
            bVar2 = true;
            uVar13 = 0;
            uVar14 = 5;
          }
          else {
            uVar13 = uVar13 - 7;
            bVar2 = true;
            uVar14 = 6;
          }
          puVar5 = (undefined4 *)FUN_016c90b4();
          *(undefined2 *)((int)puVar5 + 0x32) = 0;
          *puVar5 = 0;
          uVar8 = ~uVar14 + (uint)*(ushort *)((int)puVar6 + 0x32);
          *(short *)((int)puVar5 + 0x32) = (short)uVar8;
          if (0xb < uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar8,0xb,&DAT_01d2ff10);
          }
          uVar10 = puVar6[uVar14 + 1];
          FUN_01bed4e2(puVar5 + 1,puVar6 + uVar14 + 2,uVar8 * 4);
          *(short *)((int)puVar6 + 0x32) = (short)uVar14;
          uVar8 = (uint)*(ushort *)((int)puVar5 + 0x32);
          iVar9 = uVar8 + 1;
          if (0xb < uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,iVar9,0xc,&DAT_01d2ff20);
          }
          if (uVar1 - uVar14 != iVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
          }
          iVar4 = iVar4 + 1;
          FUN_01bed4e2(puVar5 + 0xd,puVar6 + uVar14 + 0xe,iVar9 * 4);
          uVar14 = 0;
          do {
            puVar15 = (undefined4 *)(puVar5 + 0xd)[uVar14];
            *(short *)(puVar15 + 0xc) = (short)uVar14;
            *puVar15 = puVar5;
            if (uVar8 <= uVar14) break;
            uVar14 = uVar14 + 1;
          } while (uVar14 <= uVar8);
          puVar15 = puVar5;
          if (!bVar2) {
            puVar15 = puVar6;
          }
          FUN_0130a8f0(puVar15,uVar13,uVar11,puVar12);
          puVar16 = (undefined4 *)*puVar6;
          uVar11 = uVar10;
          puVar12 = puVar5;
          puVar15 = puVar6;
        } while ((undefined4 *)*puVar6 != (undefined4 *)0x0);
      }
      if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2fee0);
      }
      uVar18 = FUN_0130a890(*param_1,param_1[1]);
      *(undefined8 *)param_1 = uVar18;
      FUN_0130a810((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),uVar10,puVar5,iVar4);
    }
  }
LAB_0130f26c:
  param_1[2] = param_1[2] + 1;
  return;
}

