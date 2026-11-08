// FUN_006b0d68 @ 006b0d68 size=1616 calls_out=14 calls_in=4
// strings: 

void FUN_006b0d68(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  uint local_48;
  
  puVar10 = (undefined4 *)*param_2;
  iVar17 = param_2[1];
  iVar3 = FUN_006ceea8(puVar10,iVar17);
  if (iVar3 != 0) {
    return;
  }
  iVar3 = FUN_006c176c(*param_1,param_1[1],param_3,param_4);
  if (iVar3 == 0) {
    return;
  }
  if (puVar10 != (undefined4 *)0x0) {
    do {
      uVar1 = *(ushort *)((int)puVar10 + 0x5e);
      uVar13 = 0xffffffff;
      iVar16 = (uint)uVar1 << 3;
      puVar5 = puVar10;
      do {
        if (iVar16 == 0) {
          uVar13 = (uint)uVar1;
          goto LAB_006b0e4c;
        }
        uVar15 = puVar5[1];
        uVar11 = uVar15;
        if (param_4 < uVar15) {
          uVar11 = param_4;
        }
        iVar4 = FUN_01bed842(param_3,*puVar5,uVar11);
        if (iVar4 == 0) {
          iVar4 = param_4 - uVar15;
        }
        iVar16 = iVar16 + -8;
        uVar13 = uVar13 + 1;
        puVar5 = puVar5 + 2;
      } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
      if (0 < iVar4 == iVar4 < 0) goto LAB_006b0e94;
LAB_006b0e4c:
      if (iVar17 == 0) goto LAB_006b0fc8;
      iVar17 = iVar17 + -1;
      puVar10 = (undefined4 *)puVar10[uVar13 + 0x18];
    } while( true );
  }
  puVar10 = (undefined4 *)FUN_006c8e68();
  *puVar10 = param_3;
  *(undefined2 *)((int)puVar10 + 0x5e) = 1;
  puVar10[0x16] = 0;
  *param_2 = (int)puVar10;
  param_2[1] = 0;
  puVar10[1] = param_4;
  goto LAB_006b0e88;
LAB_006b0fc8:
  uVar1 = *(ushort *)((int)puVar10 + 0x5e);
  uVar11 = (uint)uVar1;
  if (uVar11 < 0xb) {
    if (uVar13 + 1 <= uVar11) {
      FUN_01bed864(puVar10 + (uVar13 + 1) * 2,puVar10 + uVar13 * 2,(uVar11 - uVar13) * 8);
    }
    puVar10[uVar13 * 2] = param_3;
    (puVar10 + uVar13 * 2)[1] = param_4;
    *(ushort *)((int)puVar10 + 0x5e) = uVar1 + 1;
  }
  else {
    uVar11 = 4;
    if (uVar13 < 5) {
      bVar2 = false;
    }
    else if (uVar13 == 5) {
      bVar2 = false;
      uVar11 = 5;
    }
    else {
      if (uVar13 == 6) {
        uVar11 = 5;
        uVar13 = 0;
      }
      else {
        uVar13 = uVar13 - 7;
        uVar11 = 6;
      }
      bVar2 = true;
    }
    puVar5 = (undefined4 *)FUN_006c8e68();
    *(undefined2 *)((int)puVar5 + 0x5e) = 0;
    puVar5[0x16] = 0;
    uVar15 = ~uVar11 + (uint)*(ushort *)((int)puVar10 + 0x5e);
    *(short *)((int)puVar5 + 0x5e) = (short)uVar15;
    if (0xb < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar15,0xb,&DAT_01d2ff10);
    }
    puVar12 = puVar10 + uVar11 * 2;
    uVar18 = *puVar12;
    uVar7 = puVar12[1];
    FUN_01bed4e2(puVar5,puVar12 + 2,uVar15 * 8);
    *(short *)((int)puVar10 + 0x5e) = (short)uVar11;
    puVar12 = puVar5;
    if (!bVar2) {
      puVar12 = puVar10;
    }
    uVar1 = *(ushort *)((int)puVar12 + 0x5e);
    if (uVar13 + 1 <= (uint)uVar1) {
      FUN_01bed864(puVar12 + (uVar13 + 1) * 2,puVar12 + uVar13 * 2,(uVar1 - uVar13) * 8);
    }
    puVar12[uVar13 * 2] = param_3;
    (puVar12 + uVar13 * 2)[1] = param_4;
    *(ushort *)((int)puVar12 + 0x5e) = uVar1 + 1;
    if (puVar10 != (undefined4 *)0x0) {
      uVar13 = 0;
      if ((undefined4 *)puVar10[0x16] != (undefined4 *)0x0) {
        puVar12 = (undefined4 *)puVar10[0x16];
        uVar8 = uVar18;
        uVar9 = uVar7;
        puVar14 = puVar5;
        do {
          puVar6 = puVar12;
          uVar1 = *(ushort *)((int)puVar6 + 0x5e);
          local_48 = (uint)*(ushort *)(puVar10 + 0x17);
          if (uVar1 < 0xb) {
            FUN_006b2d18(puVar6);
            goto LAB_006b0e88;
          }
          bVar2 = false;
          uVar11 = 4;
          if (4 < local_48) {
            if (local_48 == 5) {
              uVar11 = 5;
            }
            else if (local_48 == 6) {
              bVar2 = true;
              uVar11 = 5;
              local_48 = 0;
            }
            else {
              local_48 = local_48 - 7;
              bVar2 = true;
              uVar11 = 6;
            }
          }
          puVar5 = (undefined4 *)FUN_01264dc8();
          *(undefined2 *)((int)puVar5 + 0x5e) = 0;
          puVar5[0x16] = 0;
          uVar15 = ~uVar11 + (uint)*(ushort *)((int)puVar6 + 0x5e);
          *(short *)((int)puVar5 + 0x5e) = (short)uVar15;
          if (0xb < uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar15,0xb,&DAT_01d2ff10);
          }
          puVar10 = puVar6 + uVar11 * 2;
          uVar18 = *puVar10;
          uVar7 = puVar10[1];
          FUN_01bed4e2(puVar5,puVar10 + 2,uVar15 * 8);
          *(short *)((int)puVar6 + 0x5e) = (short)uVar11;
          uVar15 = (uint)*(ushort *)((int)puVar5 + 0x5e);
          iVar17 = uVar15 + 1;
          if (0xb < uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,iVar17,0xc,&DAT_01d2ff20);
          }
          if (uVar1 - uVar11 != iVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
          }
          uVar13 = uVar13 + 1;
          FUN_01bed4e2(puVar5 + 0x18,puVar6 + uVar11 + 0x19,iVar17 * 4);
          uVar11 = 0;
          do {
            iVar17 = (puVar5 + 0x18)[uVar11];
            *(short *)(iVar17 + 0x5c) = (short)uVar11;
            *(undefined4 **)(iVar17 + 0x58) = puVar5;
            if (uVar15 <= uVar11) break;
            uVar11 = uVar11 + 1;
          } while (uVar11 <= uVar15);
          puVar10 = puVar5;
          if (!bVar2) {
            puVar10 = puVar6;
          }
          FUN_006b2d18(puVar10,local_48,uVar8,uVar9,puVar14);
          puVar12 = (undefined4 *)puVar6[0x16];
          puVar10 = puVar6;
          uVar8 = uVar18;
          uVar9 = uVar7;
          puVar14 = puVar5;
        } while ((undefined4 *)puVar6[0x16] != (undefined4 *)0x0);
      }
      iVar17 = *param_2;
      if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2fee0);
      }
      uVar11 = param_2[1];
      puVar10 = (undefined4 *)FUN_01264dc8();
      puVar10[0x18] = iVar17;
      *(undefined2 *)((int)puVar10 + 0x5e) = 0;
      puVar10[0x16] = 0;
      if (0xfffffffe < uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d305e8);
      }
      *(undefined2 *)(iVar17 + 0x5c) = 0;
      *(undefined4 **)(iVar17 + 0x58) = puVar10;
      *param_2 = (int)puVar10;
      param_2[1] = uVar11 + 1;
      if (uVar13 != uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00533a41,0x30,&DAT_01d305c8);
      }
      *puVar10 = uVar18;
      puVar10[0x19] = puVar5;
      puVar10[1] = uVar7;
      *(undefined2 *)((int)puVar10 + 0x5e) = 1;
      *(undefined2 *)(puVar5 + 0x17) = 1;
      puVar5[0x16] = puVar10;
    }
  }
LAB_006b0e88:
  param_2[2] = param_2[2] + 1;
LAB_006b0e94:
  uVar13 = 2;
  if ((int)*(uint *)(iVar3 + 0x10) < 0) {
    uVar13 = *(uint *)(iVar3 + 0x10) ^ 0x80000000;
  }
  switch(uVar13) {
  case 1:
    iVar17 = *(int *)(iVar3 + 0x2c);
    for (iVar3 = *(int *)(iVar3 + 0x30) * 0xc0; iVar3 != 0; iVar3 = iVar3 + -0xc0) {
      FUN_006b1490(param_1,param_2,iVar17);
      iVar17 = iVar17 + 0xc0;
    }
    break;
  case 2:
    iVar16 = *(int *)(iVar3 + 0x14);
    for (iVar17 = *(int *)(iVar3 + 0x18) * 0xc0; iVar17 != 0; iVar17 = iVar17 + -0xc0) {
      FUN_006b1490(param_1,param_2,iVar16);
      iVar16 = iVar16 + 0xc0;
    }
    iVar17 = *(int *)(iVar3 + 0x44);
    for (iVar3 = *(int *)(iVar3 + 0x48) << 4; iVar3 != 0; iVar3 = iVar3 + -0x10) {
      FUN_006b0d68(param_1,param_2,*(undefined4 *)(iVar17 + 4),*(undefined4 *)(iVar17 + 8));
      iVar17 = iVar17 + 0x10;
    }
    break;
  case 3:
    iVar17 = *(int *)(iVar3 + 0x34);
    for (iVar3 = *(int *)(iVar3 + 0x38) << 4; iVar3 != 0; iVar3 = iVar3 + -0x10) {
      FUN_006b0d68(param_1,param_2,*(undefined4 *)(iVar17 + 4),*(undefined4 *)(iVar17 + 8));
      iVar17 = iVar17 + 0x10;
    }
    break;
  case 5:
    iVar17 = *(int *)(iVar3 + 0x34);
    for (iVar3 = *(int *)(iVar3 + 0x38) * 0x6c; iVar3 != 0; iVar3 = iVar3 + -0x6c) {
      FUN_006b1430(param_1,param_2,iVar17 + 0xc);
      iVar17 = iVar17 + 0x6c;
    }
  }
  return;
}

