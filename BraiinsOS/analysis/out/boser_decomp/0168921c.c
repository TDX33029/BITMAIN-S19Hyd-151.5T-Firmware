// FUN_0168921c @ 0168921c size=1564 calls_out=8 calls_in=1
// strings: 

void FUN_0168921c(undefined1 *param_1,int *param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  ushort uVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  uint local_3c;
  uint local_34;
  
  iVar15 = *param_2;
  if (iVar15 != 0) {
    iVar4 = param_2[1];
    do {
      uVar16 = (uint)*(ushort *)(iVar15 + 0x8a);
      iVar10 = uVar16 << 2;
      iVar7 = 0x17;
      do {
        iVar17 = iVar7;
        if (iVar10 == 0) goto LAB_0168929c;
        uVar14 = *(uint *)(iVar15 + iVar17 * 4);
        iVar10 = iVar10 + -4;
        bVar18 = param_3 < uVar14;
        bVar2 = !bVar18 && param_3 != uVar14;
        iVar7 = iVar17 + 1;
      } while ((char)(bVar2 - bVar18) == '\x01');
      if (bVar2 == bVar18) {
        puVar5 = (undefined4 *)(iVar15 + (iVar17 + -0x17) * 8);
        *(undefined4 *)(param_1 + 1) = *puVar5;
        *(undefined4 *)(param_1 + 5) = puVar5[1];
        uVar3 = 1;
        *puVar5 = param_5;
        puVar5[1] = param_6;
        goto LAB_01689308;
      }
      uVar16 = iVar17 - 0x17;
LAB_0168929c:
      if (iVar4 == 0) goto LAB_01689314;
      iVar4 = iVar4 + -1;
      iVar15 = *(int *)(iVar15 + uVar16 * 4 + 0x8c);
    } while( true );
  }
  puVar5 = (undefined4 *)FUN_01961624();
  *puVar5 = param_5;
  puVar5[1] = param_6;
  *(undefined2 *)((int)puVar5 + 0x8a) = 1;
  puVar5[0x16] = 0;
  *param_2 = (int)puVar5;
  param_2[1] = 0;
  puVar5[0x17] = param_3;
  goto LAB_016892f8;
LAB_01689314:
  uVar1 = *(ushort *)(iVar15 + 0x8a);
  uVar14 = (uint)uVar1;
  if (uVar14 < 0xb) {
    iVar4 = iVar15 + 0x5c;
    uVar11 = uVar16 + 1;
    puVar8 = (uint *)(iVar4 + uVar16 * 4);
    if (uVar14 < uVar11) {
      *puVar8 = param_3;
    }
    else {
      FUN_01bed864(iVar4 + uVar11 * 4,puVar8,(uVar14 - uVar16) * 4);
      *(uint *)(iVar4 + uVar16 * 4) = param_3;
      FUN_01bed864(iVar15 + uVar11 * 8,iVar15 + uVar16 * 8,(uVar14 - uVar16) * 8);
    }
    puVar5 = (undefined4 *)(iVar15 + uVar16 * 8);
    *puVar5 = param_5;
    puVar5[1] = param_6;
    *(ushort *)(iVar15 + 0x8a) = uVar1 + 1;
  }
  else {
    if (uVar16 < 5) {
      bVar2 = false;
      local_34 = 4;
    }
    else if (uVar16 == 5) {
      bVar2 = false;
      local_34 = 5;
    }
    else {
      if (uVar16 == 6) {
        local_34 = 5;
        uVar16 = 0;
      }
      else {
        local_34 = 6;
        uVar16 = uVar16 - 7;
      }
      bVar2 = true;
    }
    iVar4 = FUN_01961624();
    *(undefined2 *)(iVar4 + 0x8a) = 0;
    *(undefined4 *)(iVar4 + 0x58) = 0;
    uVar14 = ~local_34 + (uint)*(ushort *)(iVar15 + 0x8a);
    *(short *)(iVar4 + 0x8a) = (short)uVar14;
    if (0xb < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar14,0xb,&DAT_01d2ff10);
    }
    puVar5 = (undefined4 *)(iVar15 + local_34 * 8);
    uVar9 = *puVar5;
    uVar12 = *(undefined4 *)(iVar15 + 0x5c + local_34 * 4);
    uVar6 = puVar5[1];
    FUN_01bed4e2(iVar4 + 0x5c,iVar15 + 0x5c + (local_34 + 1) * 4,uVar14 * 4);
    FUN_01bed4e2(iVar4,iVar15 + (local_34 + 1) * 8,uVar14 * 8);
    *(short *)(iVar15 + 0x8a) = (short)local_34;
    iVar10 = iVar4;
    if (!bVar2) {
      iVar10 = iVar15;
    }
    iVar7 = iVar10 + 0x5c;
    uVar1 = *(ushort *)(iVar10 + 0x8a);
    puVar8 = (uint *)(iVar7 + uVar16 * 4);
    if (uVar16 < uVar1) {
      iVar17 = uVar1 - uVar16;
      FUN_01bed864(iVar7 + (uVar16 + 1) * 4,puVar8,iVar17 * 4);
      *(uint *)(iVar7 + uVar16 * 4) = param_3;
      FUN_01bed864(iVar10 + (uVar16 + 1) * 8,iVar10 + uVar16 * 8,iVar17 * 8);
    }
    else {
      *puVar8 = param_3;
    }
    puVar5 = (undefined4 *)(iVar10 + uVar16 * 8);
    *puVar5 = param_5;
    puVar5[1] = param_6;
    *(ushort *)(iVar10 + 0x8a) = uVar1 + 1;
    if (iVar15 != 0) {
      if (*(int *)(iVar15 + 0x58) == 0) {
        local_34 = 0;
      }
      else {
        local_34 = 0;
        iVar10 = *(int *)(iVar15 + 0x58);
        uVar13 = uVar12;
        do {
          iVar7 = iVar10;
          uVar1 = *(ushort *)(iVar7 + 0x8a);
          local_3c = (uint)*(ushort *)(iVar15 + 0x88);
          if (uVar1 < 0xb) {
            FUN_0167b9ec(iVar7);
            goto LAB_016892f8;
          }
          uVar16 = 4;
          if (local_3c < 5) {
            bVar2 = false;
          }
          else if (local_3c == 5) {
            bVar2 = false;
            uVar16 = 5;
          }
          else if (local_3c == 6) {
            uVar16 = 5;
            bVar2 = true;
            local_3c = 0;
          }
          else {
            bVar2 = true;
            local_3c = local_3c - 7;
            uVar16 = 6;
          }
          iVar4 = FUN_016c9094();
          *(undefined2 *)(iVar4 + 0x8a) = 0;
          *(undefined4 *)(iVar4 + 0x58) = 0;
          uVar14 = ~uVar16 + (uint)*(ushort *)(iVar7 + 0x8a);
          *(short *)(iVar4 + 0x8a) = (short)uVar14;
          if (0xb < uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar14,0xb,&DAT_01d2ff10);
          }
          puVar5 = (undefined4 *)(iVar7 + uVar16 * 8);
          uVar9 = *puVar5;
          uVar6 = puVar5[1];
          uVar12 = *(undefined4 *)(iVar7 + 0x5c + uVar16 * 4);
          FUN_01bed4e2(iVar4 + 0x5c,iVar7 + 0x5c + (uVar16 + 1) * 4,uVar14 * 4);
          FUN_01bed4e2(iVar4,iVar7 + (uVar16 + 1) * 8,uVar14 * 8);
          *(short *)(iVar7 + 0x8a) = (short)uVar16;
          uVar14 = (uint)*(ushort *)(iVar4 + 0x8a);
          iVar15 = uVar14 + 1;
          if (0xb < uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,iVar15,0xc,&DAT_01d2ff20);
          }
          if (uVar1 - uVar16 != iVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
          }
          local_34 = local_34 + 1;
          FUN_01bed4e2(iVar4 + 0x8c,iVar7 + uVar16 * 4 + 0x90,iVar15 * 4);
          uVar16 = 0;
          do {
            iVar15 = *(int *)(iVar4 + 0x8c + uVar16 * 4);
            *(short *)(iVar15 + 0x88) = (short)uVar16;
            *(int *)(iVar15 + 0x58) = iVar4;
            if (uVar14 <= uVar16) break;
            uVar16 = uVar16 + 1;
          } while (uVar16 <= uVar14);
          iVar15 = iVar4;
          if (!bVar2) {
            iVar15 = iVar7;
          }
          FUN_0167b9ec(iVar15,local_3c,uVar13);
          iVar10 = *(int *)(iVar7 + 0x58);
          uVar13 = uVar12;
          iVar15 = iVar7;
        } while (*(int *)(iVar7 + 0x58) != 0);
      }
      iVar15 = *param_2;
      if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2fee0);
      }
      uVar16 = param_2[1];
      puVar5 = (undefined4 *)FUN_016c9094();
      puVar5[0x23] = iVar15;
      *(undefined2 *)((int)puVar5 + 0x8a) = 0;
      puVar5[0x16] = 0;
      if (0xfffffffe < uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d305e8);
      }
      *(undefined2 *)(iVar15 + 0x88) = 0;
      *param_2 = (int)puVar5;
      *(undefined4 **)(iVar15 + 0x58) = puVar5;
      param_2[1] = uVar16 + 1;
      if (local_34 != uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00533a41,0x30,&DAT_01d305c8);
      }
      puVar5[0x17] = uVar12;
      *(undefined2 *)((int)puVar5 + 0x8a) = 1;
      puVar5[0x24] = iVar4;
      *(undefined2 *)(iVar4 + 0x88) = 1;
      *(undefined4 **)(iVar4 + 0x58) = puVar5;
      *puVar5 = uVar9;
      puVar5[1] = uVar6;
    }
  }
LAB_016892f8:
  param_2[2] = param_2[2] + 1;
  uVar3 = 0;
LAB_01689308:
  *param_1 = uVar3;
  return;
}

