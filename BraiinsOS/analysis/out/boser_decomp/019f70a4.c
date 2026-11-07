// FUN_019f70a4 @ 019f70a4 size=1840 calls_out=11 calls_in=1
// strings: 

uint FUN_019f70a4(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6,uint param_7)

{
  ushort uVar1;
  bool bVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  ushort *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined8 uVar23;
  uint *local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  undefined1 auStack_30 [12];
  
  puVar3 = (uint *)*param_1;
  if (puVar3 != (uint *)0x0) {
    iVar6 = param_1[1];
    do {
      uVar21 = 0xffffffff;
      iVar12 = (uint)*(ushort *)((int)puVar3 + 0x10e) << 4;
      puVar5 = puVar3;
      do {
        if (iVar12 == 0) {
          uVar21 = (uint)*(ushort *)((int)puVar3 + 0x10e);
          goto LAB_019f7168;
        }
        uVar18 = *puVar5;
        iVar12 = iVar12 + -0x10;
        uVar7 = puVar5[1];
        uVar21 = uVar21 + 1;
        uVar4 = puVar5[2];
        uVar22 = puVar5[3];
        puVar5 = puVar5 + 4;
        uVar4 = (uint)(uVar22 <= param_6 &&
                      (uint)(param_5 < uVar4 ||
                            uVar4 - param_5 <
                            (uint)(param_4 < uVar7 || uVar7 - param_4 < (uint)(param_3 <= uVar18)))
                      <= uVar22 - param_6) -
                (uint)(param_6 <= uVar22 &&
                      (uint)(uVar4 < param_5 ||
                            param_5 - uVar4 <
                            (uint)(uVar7 < param_4 || param_4 - uVar7 < (uint)(uVar18 <= param_3)))
                      <= param_6 - uVar22);
      } while (uVar4 == 1);
      if ((uVar4 & 0xff) == 0) {
        uVar4 = puVar3[uVar21 * 2 + 0x2c];
        puVar3[uVar21 * 2 + 0x2c] = param_7;
        puVar3[uVar21 * 2 + 0x2d] = (uint)&DAT_01d293a4;
        return uVar4;
      }
LAB_019f7168:
      if (iVar6 == 0) goto LAB_019f720c;
      iVar6 = iVar6 + -1;
      puVar3 = (uint *)puVar3[uVar21 + 0x44];
    } while( true );
  }
  iVar6 = FUN_0197949c();
  *(undefined2 *)(iVar6 + 0x10e) = 0;
  *(undefined4 *)(iVar6 + 0x108) = 0;
  *param_1 = iVar6;
  param_1[1] = 0;
  FUN_0197871c(auStack_30,iVar6,param_3,param_4,param_5,param_6,param_7,&DAT_01d293a4);
  goto LAB_019f71f4;
LAB_019f720c:
  puVar8 = (ushort *)((int)puVar3 + 0x10e);
  uVar1 = *puVar8;
  uVar4 = (uint)uVar1;
  if (uVar4 < 0xb) {
    uVar7 = uVar21 + 1;
    puVar5 = puVar3 + uVar21 * 4;
    if (uVar4 < uVar7) {
      *puVar5 = param_3;
      puVar5[1] = param_4;
      puVar5[2] = param_5;
      puVar5[3] = param_6;
    }
    else {
      FUN_01bed864(puVar3 + uVar7 * 4,puVar5,(uVar4 - uVar21) * 0x10);
      *puVar5 = param_3;
      puVar5[1] = param_4;
      puVar5[2] = param_5;
      puVar5[3] = param_6;
      FUN_01bed864(puVar3 + uVar7 * 2 + 0x2c,puVar3 + uVar21 * 2 + 0x2c,(uVar4 - uVar21) * 8);
    }
    puVar3[uVar21 * 2 + 0x2c] = param_7;
    puVar3[uVar21 * 2 + 0x2d] = (uint)&DAT_01d293a4;
    *puVar8 = uVar1 + 1;
  }
  else {
    uVar4 = 4;
    bVar2 = false;
    if (4 < uVar21) {
      if (uVar21 == 5) {
        uVar4 = 5;
      }
      else {
        if (uVar21 == 6) {
          uVar4 = 5;
          uVar21 = 0;
        }
        else {
          uVar21 = uVar21 - 7;
          uVar4 = 6;
        }
        bVar2 = true;
      }
    }
    puVar5 = (uint *)FUN_0197949c();
    *(undefined2 *)((int)puVar5 + 0x10e) = 0;
    puVar5[0x42] = 0;
    puVar13 = puVar3 + uVar4 * 4;
    uVar7 = *puVar13;
    uVar19 = puVar3[uVar4 * 2 + 0x2c];
    uVar18 = (puVar3 + uVar4 * 2 + 0x2c)[1];
    uVar15 = ~uVar4 + (uint)*puVar8;
    uVar22 = puVar13[1];
    uVar11 = puVar13[3];
    *(undefined2 *)((int)puVar5 + 0x10e) = (short)uVar15;
    if (0xb < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar15,0xb,&DAT_01d2ff10);
    }
    uVar9 = puVar13[2];
    FUN_01bed4e2(puVar5,puVar3 + (uVar4 + 1) * 4,uVar15 * 0x10);
    FUN_01bed4e2(puVar5 + 0x2c,puVar3 + (uVar4 + 1) * 2 + 0x2c,uVar15 * 8);
    *puVar8 = (ushort)uVar4;
    puVar13 = puVar5;
    if (!bVar2) {
      puVar13 = puVar3;
    }
    puVar16 = puVar13 + uVar21 * 4;
    uVar1 = *(ushort *)((int)puVar13 + 0x10e);
    if (uVar21 < uVar1) {
      iVar6 = uVar1 - uVar21;
      FUN_01bed864(puVar13 + (uVar21 + 1) * 4,puVar16,iVar6 * 0x10);
      *puVar16 = param_3;
      puVar16[1] = param_4;
      puVar16[2] = param_5;
      puVar16[3] = param_6;
      FUN_01bed864(puVar13 + (uVar21 + 1) * 2 + 0x2c,puVar13 + uVar21 * 2 + 0x2c,iVar6 * 8);
    }
    else {
      *puVar16 = param_3;
      puVar16[1] = param_4;
      puVar16[2] = param_5;
      puVar16[3] = param_6;
    }
    puVar13[uVar21 * 2 + 0x2c] = param_7;
    puVar13[uVar21 * 2 + 0x2d] = (uint)&DAT_01d293a4;
    *(ushort *)((int)puVar13 + 0x10e) = uVar1 + 1;
    if (puVar3 != (uint *)0x0) {
      if ((uint *)puVar3[0x42] == (uint *)0x0) {
        local_58 = 0;
      }
      else {
        local_58 = 0;
        puVar13 = (uint *)puVar3[0x42];
        uVar21 = uVar18;
        uVar4 = uVar19;
        local_6c = puVar5;
        local_68 = uVar11;
        local_64 = uVar9;
        local_60 = uVar22;
        local_5c = uVar7;
        do {
          puVar16 = puVar13;
          puVar8 = (ushort *)((int)puVar16 + 0x10e);
          uVar1 = *puVar8;
          uVar15 = (uint)(ushort)puVar3[0x43];
          if (uVar1 < 0xb) {
            FUN_019ddfd0(puVar16,uVar15,local_5c,local_60,local_64,local_68,uVar4,uVar21,local_6c);
            goto LAB_019f71f4;
          }
          bVar2 = false;
          uVar14 = 4;
          if (4 < uVar15) {
            if (uVar15 == 5) {
              uVar14 = 5;
            }
            else if (uVar15 == 6) {
              bVar2 = true;
              uVar15 = 0;
              uVar14 = 5;
            }
            else {
              uVar15 = uVar15 - 7;
              bVar2 = true;
              uVar14 = 6;
            }
          }
          puVar5 = (uint *)FUN_01498c44();
          puVar17 = (ushort *)((int)puVar5 + 0x10e);
          *puVar17 = 0;
          puVar5[0x42] = 0;
          puVar3 = puVar16 + uVar14 * 4;
          uVar7 = *puVar3;
          uVar19 = puVar16[uVar14 * 2 + 0x2c];
          uVar18 = (puVar16 + uVar14 * 2 + 0x2c)[1];
          uVar20 = ~uVar14 + (uint)*puVar8;
          uVar22 = puVar3[1];
          uVar9 = puVar3[2];
          uVar11 = puVar3[3];
          *puVar17 = (ushort)uVar20;
          if (0xb < uVar20) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar20,0xb,&DAT_01d2ff10);
          }
          FUN_01bed4e2(puVar5,puVar16 + (uVar14 + 1) * 4,uVar20 * 0x10);
          FUN_01bed4e2(puVar5 + 0x2c,puVar16 + (uVar14 + 1) * 2 + 0x2c,uVar20 * 8);
          *puVar8 = (ushort)uVar14;
          uVar20 = (uint)*puVar17;
          iVar6 = uVar20 + 1;
          if (0xb < uVar20) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,iVar6,0xc,&DAT_01d2ff20);
          }
          if (uVar1 - uVar14 != iVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
          }
          local_58 = local_58 + 1;
          FUN_01bed4e2(puVar5 + 0x44,puVar16 + uVar14 + 0x45,iVar6 * 4);
          uVar14 = 0;
          do {
            uVar10 = (puVar5 + 0x44)[uVar14];
            *(short *)(uVar10 + 0x10c) = (short)uVar14;
            *(uint **)(uVar10 + 0x108) = puVar5;
            if (uVar20 <= uVar14) break;
            uVar14 = uVar14 + 1;
          } while (uVar14 <= uVar20);
          puVar3 = puVar5;
          if (!bVar2) {
            puVar3 = puVar16;
          }
          FUN_019ddfd0(puVar3,uVar15,local_5c,local_60,local_64,local_68,uVar4,uVar21,local_6c);
          puVar13 = (uint *)puVar16[0x42];
          uVar21 = uVar18;
          puVar3 = puVar16;
          uVar4 = uVar19;
          local_6c = puVar5;
          local_68 = uVar11;
          local_64 = uVar9;
          local_60 = uVar22;
          local_5c = uVar7;
        } while ((uint *)puVar16[0x42] != (uint *)0x0);
      }
      if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2fee0);
      }
      uVar23 = FUN_019788d0(*param_1,param_1[1]);
      *(undefined8 *)param_1 = uVar23;
      FUN_019787d8((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),uVar7,uVar22,uVar9,uVar11,uVar19,
                   uVar18,puVar5,local_58);
    }
  }
LAB_019f71f4:
  param_1[2] = param_1[2] + 1;
  return 0;
}

