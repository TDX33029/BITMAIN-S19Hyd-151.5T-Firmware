// FUN_01688b98 @ 01688b98 size=1428 calls_out=8 calls_in=2
// strings: 

void FUN_01688b98(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 **ppuVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  int iVar18;
  uint local_64;
  int local_60;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 *local_28;
  
  puVar12 = (undefined4 *)*param_2;
  if (puVar12 != (undefined4 *)0x0) {
    iVar3 = param_2[1];
    do {
      local_44 = (uint)*(ushort *)((int)puVar12 + 0xb6);
      iVar10 = local_44 << 2;
      iVar18 = 1;
      do {
        iVar4 = iVar18;
        if (iVar10 == 0) goto LAB_01688c14;
        iVar10 = iVar10 + -4;
        bVar17 = param_3 < (uint)puVar12[iVar4];
        bVar2 = !bVar17 && param_3 != puVar12[iVar4];
        iVar18 = iVar4 + 1;
      } while ((char)(bVar2 - bVar17) == '\x01');
      if (bVar2 == bVar17) {
        iVar4 = iVar4 + -1;
        uVar6 = puVar12[iVar4 * 3 + 0xd];
        uVar13 = puVar12[iVar4 * 3 + 0xe];
        *param_1 = puVar12[iVar4 * 3 + 0xc];
        param_1[1] = uVar6;
        param_1[2] = uVar13;
        uVar6 = param_4[1];
        uVar13 = param_4[2];
        puVar12[iVar4 * 3 + 0xc] = *param_4;
        puVar12[iVar4 * 3 + 0xd] = uVar6;
        puVar12[iVar4 * 3 + 0xe] = uVar13;
        return;
      }
      local_44 = iVar4 - 1;
LAB_01688c14:
      if (iVar3 == 0) goto LAB_01688c94;
      iVar3 = iVar3 + -1;
      puVar12 = (undefined4 *)puVar12[local_44 + 0x2e];
    } while( true );
  }
  puVar12 = (undefined4 *)FUN_016c90f4();
  *(undefined2 *)((int)puVar12 + 0xb6) = 1;
  *param_2 = puVar12;
  param_2[1] = 0;
  *puVar12 = 0;
  puVar12[1] = param_3;
  uVar6 = param_4[1];
  uVar13 = param_4[2];
  puVar12[0xc] = *param_4;
  puVar12[0xd] = uVar6;
  puVar12[0xe] = uVar13;
  goto LAB_01688c78;
LAB_01688c94:
  bVar2 = false;
  local_48 = 0;
  local_4c = puVar12;
  if (*(ushort *)((int)puVar12 + 0xb6) < 0xb) {
    FUN_0167b80c(&local_34,&local_4c,param_3,param_4);
  }
  else {
    uVar7 = local_44;
    if (local_44 < 5) {
      uVar15 = 4;
    }
    else if (local_44 == 5) {
      uVar15 = 5;
    }
    else {
      if (local_44 == 6) {
        uVar15 = 5;
        uVar7 = 0;
      }
      else {
        uVar7 = local_44 - 7;
        uVar15 = 6;
      }
      bVar2 = true;
    }
    local_50 = (undefined4 *)FUN_016c90f4();
    *(undefined2 *)((int)local_50 + 0xb6) = 0;
    *local_50 = 0;
    piVar11 = puVar12 + uVar15 * 3 + 0xc;
    iVar3 = *piVar11;
    uVar16 = ~uVar15 + (uint)*(ushort *)((int)puVar12 + 0xb6);
    iVar10 = piVar11[1];
    *(short *)((int)local_50 + 0xb6) = (short)uVar16;
    if (0xb < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar16,0xb,&DAT_01d2ff10);
    }
    local_60 = piVar11[2];
    uVar6 = puVar12[uVar15 + 1];
    FUN_01bed4e2(local_50 + 1,puVar12 + uVar15 + 2,uVar16 * 4);
    FUN_01bed4e2(local_50 + 0xc,puVar12 + (uVar15 + 1) * 3 + 0xc,uVar16 * 0xc);
    *(short *)((int)puVar12 + 0xb6) = (short)uVar15;
    local_3c = 0;
    local_40 = local_50;
    if (!bVar2) {
      local_40 = puVar12;
    }
    local_38 = uVar7;
    FUN_0167b80c(&local_34,&local_40,param_3,param_4);
    if (iVar3 != -0x80000000) {
      puVar14 = (undefined4 *)*puVar12;
      if (puVar14 == (undefined4 *)0x0) {
        local_64 = 0;
      }
      else {
        local_64 = 0;
        uVar13 = uVar6;
        do {
          uVar7 = (uint)*(ushort *)(puVar12 + 0x2d);
          uVar1 = *(ushort *)((int)puVar14 + 0xb6);
          local_2c = local_60;
          local_34 = iVar3;
          local_30 = iVar10;
          if (uVar1 < 0xb) {
            FUN_0167bac0(puVar14,uVar7,uVar13,&local_34,local_50);
            goto LAB_01688c78;
          }
          ppuVar5 = &local_40;
          uVar15 = 4;
          if (4 < uVar7) {
            if (uVar7 == 5) {
              uVar15 = 5;
            }
            else if (uVar7 == 6) {
              ppuVar5 = &local_28;
              uVar7 = 0;
              uVar15 = 5;
            }
            else {
              uVar7 = uVar7 - 7;
              ppuVar5 = &local_28;
              uVar15 = 6;
            }
          }
          iVar18 = iVar10;
          iVar4 = iVar3;
          puVar12 = (undefined4 *)FUN_016c90d4();
          *(undefined2 *)((int)puVar12 + 0xb6) = 0;
          *puVar12 = 0;
          piVar11 = puVar14 + uVar15 * 3 + 0xc;
          iVar3 = *piVar11;
          uVar16 = ~uVar15 + (uint)*(ushort *)((int)puVar14 + 0xb6);
          iVar10 = piVar11[1];
          *(short *)((int)puVar12 + 0xb6) = (short)uVar16;
          if (0xb < uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar16,0xb,&DAT_01d2ff10);
          }
          local_60 = piVar11[2];
          uVar6 = puVar14[uVar15 + 1];
          FUN_01bed4e2(puVar12 + 1,puVar14 + uVar15 + 2,uVar16 * 4);
          FUN_01bed4e2(puVar12 + 0xc,puVar14 + (uVar15 + 1) * 3 + 0xc,uVar16 * 0xc);
          *(short *)((int)puVar14 + 0xb6) = (short)uVar15;
          uVar16 = (uint)*(ushort *)((int)puVar12 + 0xb6);
          iVar8 = uVar16 + 1;
          if (0xb < uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,iVar8,0xc,&DAT_01d2ff20);
          }
          if (uVar1 - uVar15 != iVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
          }
          local_64 = local_64 + 1;
          FUN_01bed4e2(puVar12 + 0x2e,puVar14 + uVar15 + 0x2f,iVar8 * 4);
          uVar15 = 0;
          do {
            puVar9 = (undefined4 *)(puVar12 + 0x2e)[uVar15];
            *(short *)(puVar9 + 0x2d) = (short)uVar15;
            *puVar9 = puVar12;
            if (uVar16 <= uVar15) break;
            uVar15 = uVar15 + 1;
          } while (uVar15 <= uVar16);
          local_40 = puVar14;
          local_28 = puVar12;
          FUN_0167bac0(*ppuVar5,uVar7,uVar13,&local_34,local_50,iVar18,iVar4);
          if (iVar3 == -0x80000000) goto LAB_01688c78;
          puVar14 = (undefined4 *)*local_40;
          local_50 = local_28;
          uVar13 = uVar6;
          puVar12 = local_40;
        } while (puVar14 != (undefined4 *)0x0);
      }
      puVar12 = (undefined4 *)*param_2;
      if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2fee0);
      }
      uVar7 = param_2[1];
      puVar14 = (undefined4 *)FUN_016c90d4();
      puVar14[0x2e] = puVar12;
      *(undefined2 *)((int)puVar14 + 0xb6) = 0;
      *puVar14 = 0;
      if (0xfffffffe < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d305e8);
      }
      *(undefined2 *)(puVar12 + 0x2d) = 0;
      *param_2 = puVar14;
      *puVar12 = puVar14;
      param_2[1] = uVar7 + 1;
      if (local_64 != uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00533a41,0x30,&DAT_01d305c8);
      }
      puVar14[0xe] = local_60;
      puVar14[0x2f] = local_50;
      puVar14[0xc] = iVar3;
      puVar14[0xd] = iVar10;
      puVar14[1] = uVar6;
      *(undefined2 *)((int)puVar14 + 0xb6) = 1;
      *(undefined2 *)(local_50 + 0x2d) = 1;
      *local_50 = puVar14;
    }
  }
LAB_01688c78:
  param_2[2] = param_2[2] + 1;
  *param_1 = 0x80000000;
  return;
}

