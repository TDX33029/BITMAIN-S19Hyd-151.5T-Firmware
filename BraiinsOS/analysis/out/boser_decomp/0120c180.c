// FUN_0120c180 @ 0120c180 size=2588 calls_out=11 calls_in=1
// strings: 

int FUN_0120c180(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  ushort *puVar19;
  uint uVar20;
  int iVar21;
  undefined4 uVar22;
  uint local_78;
  int local_74;
  undefined4 local_70;
  undefined4 *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  
  uVar3 = FUN_01298504(param_3,1);
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,param_3);
  }
  FUN_01bed4e2(uVar3,param_2,param_3);
  iVar4 = FUN_01298504(param_5,1);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,param_5);
  }
  FUN_01bed4e2(iVar4,param_4,param_5);
  puVar7 = *(undefined4 **)(param_1 + 0x48);
  if (puVar7 != (undefined4 *)0x0) {
    iVar21 = *(int *)(param_1 + 0x4c);
    do {
      puVar6 = puVar7 + 1;
      uVar1 = *(ushort *)((int)puVar7 + 0x10e);
      uVar15 = (uint)uVar1;
      uVar20 = 0xffffffff;
      iVar18 = uVar15 * 0xc;
      puVar16 = puVar6;
      do {
        if (iVar18 == 0) {
          uVar20 = uVar15;
          goto LAB_0120c288;
        }
        uVar17 = puVar16[2];
        uVar10 = uVar17;
        if (param_3 < uVar17) {
          uVar10 = param_3;
        }
        iVar5 = FUN_01bed842(uVar3,puVar16[1],uVar10);
        if (iVar5 == 0) {
          iVar5 = param_3 - uVar17;
        }
        iVar18 = iVar18 + -0xc;
        uVar20 = uVar20 + 1;
        puVar16 = puVar16 + 3;
      } while ((char)((0 < iVar5) - (iVar5 < 0)) == '\x01');
      if (0 < iVar5 == iVar5 < 0) {
        thunk_FUN_01be4678(uVar3);
        iVar21 = puVar7[uVar20 * 3 + 0x22];
        uVar8 = puVar7[uVar20 * 3 + 0x23];
        puVar7[uVar20 * 3 + 0x22] = param_5;
        puVar7[uVar20 * 3 + 0x23] = iVar4;
        puVar7[uVar20 * 3 + 0x24] = param_5;
        if (iVar21 < -0x7ffffffe) {
          return param_1;
        }
        if (iVar21 == 0) {
          return param_1;
        }
        thunk_FUN_01be4678(uVar8);
        return param_1;
      }
LAB_0120c288:
      if (iVar21 == 0) goto LAB_0120c340;
      iVar21 = iVar21 + -1;
      puVar7 = (undefined4 *)puVar7[uVar20 + 0x44];
    } while( true );
  }
  puVar7 = (undefined4 *)thunk_FUN_01be5118(0x110);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x110);
  }
  *(undefined2 *)((int)puVar7 + 0x10e) = 1;
  *(undefined4 **)(param_1 + 0x48) = puVar7;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  puVar7[0x22] = param_5;
  puVar7[0x23] = iVar4;
  puVar7[0x24] = param_5;
  *puVar7 = 0;
  puVar7[1] = param_3;
  puVar7[2] = uVar3;
  puVar7[3] = param_3;
  goto LAB_0120c328;
LAB_0120c340:
  puVar19 = (ushort *)((int)puVar7 + 0x10e);
  if (uVar15 < 0xb) {
    puVar9 = puVar6 + uVar20 * 3;
    if (uVar20 < uVar15) {
      iVar21 = (uVar15 - uVar20) * 0xc;
      FUN_01bed864(puVar6 + uVar20 * 3 + 3,puVar9,iVar21);
      FUN_01bed864(puVar7 + uVar20 * 3 + 0x25,puVar7 + uVar20 * 3 + 0x22,iVar21);
    }
    *puVar9 = param_3;
    puVar9[1] = uVar3;
    puVar9[2] = param_3;
    puVar7[uVar20 * 3 + 0x22] = param_5;
    puVar7[uVar20 * 3 + 0x23] = iVar4;
    puVar7[uVar20 * 3 + 0x24] = param_5;
    *puVar19 = uVar1 + 1;
  }
  else {
    uVar15 = 4;
    if (uVar20 < 5) {
      bVar2 = false;
    }
    else if (uVar20 == 5) {
      bVar2 = false;
      uVar15 = 5;
    }
    else {
      if (uVar20 == 6) {
        uVar15 = 5;
        uVar20 = 0;
      }
      else {
        uVar20 = uVar20 - 7;
        uVar15 = 6;
      }
      bVar2 = true;
    }
    local_6c = (undefined4 *)thunk_FUN_01be5118(0x110);
    if (local_6c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x110);
    }
    *local_6c = 0;
    piVar12 = puVar6 + uVar15 * 3;
    local_60 = *piVar12;
    iVar21 = piVar12[1];
    puVar16 = puVar7 + uVar15 * 3 + 0x22;
    local_64 = *puVar16;
    uVar10 = (uint)*puVar19 + ~uVar15;
    local_68 = puVar16[1];
    *(short *)((int)local_6c + 0x10e) = (short)uVar10;
    if (0xb < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar10,0xb,&DAT_01d27f54);
    }
    local_74 = piVar12[2];
    local_70 = puVar16[2];
    FUN_01bed4e2(local_6c + 1,puVar6 + uVar15 * 3 + 3,uVar10 * 0xc);
    FUN_01bed4e2(local_6c + 0x22,puVar7 + uVar15 * 3 + 0x25,uVar10 * 0xc);
    *puVar19 = (ushort)uVar15;
    puVar16 = local_6c;
    if (!bVar2) {
      puVar16 = puVar7;
    }
    puVar9 = puVar16 + uVar20 * 3 + 1;
    uVar1 = *(ushort *)((int)puVar16 + 0x10e);
    if (uVar20 < uVar1) {
      iVar18 = (uVar1 - uVar20) * 0xc;
      FUN_01bed864(puVar16 + uVar20 * 3 + 4,puVar9,iVar18);
      FUN_01bed864(puVar16 + uVar20 * 3 + 0x25,puVar16 + uVar20 * 3 + 0x22,iVar18);
    }
    puVar16[uVar20 * 3 + 0x22] = param_5;
    puVar16[uVar20 * 3 + 0x23] = iVar4;
    puVar16[uVar20 * 3 + 0x24] = param_5;
    *puVar9 = param_3;
    puVar9[1] = uVar3;
    *(ushort *)((int)puVar16 + 0x10e) = uVar1 + 1;
    puVar9[2] = param_3;
    if (local_60 != -0x80000000) {
      local_78 = 0;
      do {
        puVar16 = (undefined4 *)*puVar7;
        if (puVar16 == (undefined4 *)0x0) {
          puVar7 = *(undefined4 **)(param_1 + 0x48);
          if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d27ee4);
          }
          uVar3 = *(uint *)(param_1 + 0x4c);
          puVar16 = (undefined4 *)thunk_FUN_01be5118(0x140);
          if (puVar16 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x140);
          }
          puVar16[0x44] = puVar7;
          *puVar16 = 0;
          *(undefined2 *)((int)puVar16 + 0x10e) = 0;
          if (0xfffffffe < uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d27f14);
          }
          *puVar7 = puVar16;
          *(undefined4 **)(param_1 + 0x48) = puVar16;
          *(undefined2 *)(puVar7 + 0x43) = 0;
          *(uint *)(param_1 + 0x4c) = uVar3 + 1;
          if (local_78 != uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00533a41,0x30,&DAT_01d27f04);
          }
          puVar16[0x22] = local_64;
          puVar16[0x23] = local_68;
          puVar16[0x24] = local_70;
          puVar16[0x45] = local_6c;
          puVar16[1] = local_60;
          puVar16[2] = iVar21;
          *local_6c = puVar16;
          puVar16[3] = local_74;
          *(undefined2 *)((int)puVar16 + 0x10e) = 1;
          *(undefined2 *)(local_6c + 0x43) = 1;
          break;
        }
        puVar19 = (ushort *)((int)puVar16 + 0x10e);
        uVar20 = (uint)*puVar19;
        uVar3 = (uint)*(ushort *)(puVar7 + 0x43);
        if (uVar20 < 0xb) {
          uVar15 = uVar3 + 1;
          piVar12 = puVar16 + uVar3 * 3 + 1;
          if (uVar3 < uVar20) {
            iVar4 = (uVar20 - uVar3) * 0xc;
            FUN_01bed864(puVar16 + uVar15 * 3 + 1,piVar12,iVar4);
            FUN_01bed864(puVar16 + uVar15 * 3 + 0x22,puVar16 + uVar3 * 3 + 0x22,iVar4);
          }
          *piVar12 = local_60;
          piVar12[1] = iVar21;
          piVar12[2] = local_74;
          puVar16[uVar3 * 3 + 0x22] = local_64;
          puVar16[uVar3 * 3 + 0x23] = local_68;
          puVar16[uVar3 * 3 + 0x24] = local_70;
          if (uVar3 < uVar20) {
            FUN_01bed864(puVar16 + uVar3 + 0x46,puVar16 + uVar3 + 0x45,(uVar20 - uVar3) * 4);
          }
          puVar16[uVar3 + 0x45] = local_6c;
          *puVar19 = (ushort)(uVar20 + 1);
          if (uVar15 < uVar20 + 2) {
            do {
              puVar7 = (undefined4 *)puVar16[uVar3 + 0x45];
              uVar3 = uVar3 + 1;
              *puVar7 = puVar16;
              *(short *)(puVar7 + 0x43) = (short)uVar3;
            } while (uVar20 + 1 != uVar3);
          }
          break;
        }
        uVar15 = 4;
        if (uVar3 < 5) {
          bVar2 = false;
        }
        else if (uVar3 == 5) {
          bVar2 = false;
          uVar15 = 5;
        }
        else if (uVar3 == 6) {
          bVar2 = true;
          uVar3 = 0;
          uVar15 = 5;
        }
        else {
          uVar3 = uVar3 - 7;
          bVar2 = true;
          uVar15 = 6;
        }
        puVar6 = (undefined4 *)thunk_FUN_01be5118(0x140);
        if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x140);
        }
        *puVar6 = 0;
        uVar10 = (uint)*puVar19 + ~uVar15;
        piVar12 = puVar16 + uVar15 * 3 + 1;
        iVar4 = *piVar12;
        *(ushort *)((int)puVar6 + 0x10e) = (ushort)uVar10;
        iVar18 = piVar12[1];
        puVar7 = puVar16 + uVar15 * 3 + 0x22;
        uVar22 = *puVar7;
        uVar8 = puVar7[1];
        if (0xb < uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar10,0xb,&DAT_01d27f54);
        }
        iVar13 = piVar12[2];
        uVar14 = puVar7[2];
        FUN_01bed4e2(puVar6 + 1,puVar16 + uVar15 * 3 + 4,uVar10 * 0xc);
        FUN_01bed4e2(puVar6 + 0x22,puVar16 + uVar15 * 3 + 0x25,uVar10 * 0xc);
        *puVar19 = (ushort)uVar15;
        uVar10 = (uint)*(ushort *)((int)puVar6 + 0x10e);
        iVar5 = uVar10 + 1;
        if (0xb < uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,iVar5,0xc,&DAT_01d27f64);
        }
        if (uVar20 - uVar15 != iVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d27f44);
        }
        local_78 = local_78 + 1;
        FUN_01bed4e2(puVar6 + 0x44,puVar16 + uVar15 + 0x45,iVar5 * 4);
        uVar20 = 0;
        do {
          puVar7 = (undefined4 *)(puVar6 + 0x44)[uVar20];
          *puVar7 = puVar6;
          *(short *)(puVar7 + 0x43) = (short)uVar20;
          if (uVar10 <= uVar20) break;
          uVar20 = uVar20 + 1;
        } while (uVar20 <= uVar10);
        uVar20 = uVar3 + 1;
        puVar7 = puVar6;
        if (!bVar2) {
          puVar7 = puVar16;
        }
        piVar12 = puVar7 + uVar3 * 3 + 1;
        uVar15 = (uint)*(ushort *)((int)puVar7 + 0x10e);
        if (uVar3 < uVar15) {
          FUN_01bed864(puVar7 + uVar20 * 3 + 1,piVar12);
          *piVar12 = local_60;
          piVar12[1] = iVar21;
          piVar12[2] = local_74;
          puVar11 = puVar7 + uVar3 * 3 + 0x22;
          FUN_01bed864(puVar7 + uVar20 * 3 + 0x22,puVar11,(uVar15 - uVar3) * 0xc);
          puVar7[uVar3 * 3 + 0x22] = local_64;
          puVar11[1] = local_68;
          puVar11[2] = local_70;
          FUN_01bed864(puVar7 + uVar3 + 0x46,puVar7 + uVar3 + 0x45,(uVar15 - uVar3) * 4);
        }
        else {
          *piVar12 = local_60;
          piVar12[1] = iVar21;
          piVar12[2] = local_74;
          puVar7[uVar3 * 3 + 0x22] = local_64;
          puVar7[uVar3 * 3 + 0x23] = local_68;
          puVar7[uVar3 * 3 + 0x24] = local_70;
        }
        puVar7[uVar3 + 0x45] = local_6c;
        *(ushort *)((int)puVar7 + 0x10e) = (ushort)(uVar15 + 1);
        if (uVar20 < uVar15 + 2) {
          do {
            uVar20 = uVar3 + 1;
            puVar11 = (undefined4 *)puVar7[uVar3 + 0x45];
            *puVar11 = puVar7;
            *(short *)(puVar11 + 0x43) = (short)uVar20;
            uVar3 = uVar20;
          } while (uVar15 + 1 != uVar20);
        }
        iVar21 = iVar18;
        puVar7 = puVar16;
        local_74 = iVar13;
        local_70 = uVar14;
        local_6c = puVar6;
        local_68 = uVar8;
        local_64 = uVar22;
        local_60 = iVar4;
      } while (iVar4 != -0x80000000);
    }
  }
LAB_0120c328:
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  return param_1;
}

