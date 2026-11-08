// FUN_015db8e0 @ 015db8e0 size=656 calls_out=5 calls_in=0
// strings: 

void FUN_015db8e0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint local_104;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 auStack_c8 [164];
  
  uVar9 = param_3[1];
  uVar12 = param_3[2];
  uVar2 = FUN_01adafd4(param_2[4],param_2[5],param_2[6],param_2[7],uVar9,uVar12);
  if (param_2[2] == 0) {
    FUN_015d5310(param_2,param_2 + 4);
  }
  uVar6 = param_2[1];
  puVar7 = (uint *)*param_2;
  bVar8 = false;
  iVar13 = 0;
  uVar11 = uVar2;
  do {
    uVar11 = uVar6 & uVar11;
    uVar10 = *(uint *)((int)puVar7 + uVar11);
    uVar3 = uVar10 ^ (uVar2 >> 0x19) * 0x1010101;
    for (uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar4 = uVar11 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                      (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar6;
      if ((uVar12 == puVar7[uVar4 * -0x2c + -0x2a]) &&
         (iVar5 = thunk_FUN_01bed842(uVar9,puVar7[uVar4 * -0x2c + -0x2b],uVar12), iVar5 == 0)) {
        FUN_01bed4e2(param_1,puVar7 + uVar4 * -0x2c + -0x28,0xa0);
        FUN_01bed4e2(puVar7 + uVar4 * -0x2c + -0x28,param_4,0xa0);
        FUN_0134bd64(*param_3,uVar9);
        return;
      }
    }
    uVar3 = uVar10 & 0x80808080;
    if (bVar8) {
LAB_015dba40:
      if ((uVar3 & uVar10 << 1) != 0) {
        uVar12 = (uint)*(char *)((int)puVar7 + local_104);
        if (-1 < (int)uVar12) {
          uVar12 = *puVar7 & 0x80808080;
          uVar11 = LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                           (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18);
          uVar12 = (uint)*(byte *)((int)puVar7 + (uVar11 >> 3));
          local_104 = uVar11 >> 3;
        }
        local_d8 = *param_3;
        uStack_d4 = param_3[1];
        uStack_d0 = param_3[2];
        FUN_01bed4e2(auStack_c8,param_4,0xa0);
        iVar13 = param_2[2];
        iVar5 = param_2[3];
        bVar1 = (byte)(uVar2 >> 0x19);
        *(byte *)((int)puVar7 + local_104) = bVar1;
        *(byte *)((int)puVar7 + (uVar6 & local_104 - 4) + 4) = bVar1;
        param_2[2] = iVar13 - (uVar12 & 1);
        param_2[3] = iVar5 + 1;
        FUN_01bed4e2(puVar7 + local_104 * -0x2c + -0x2c,&local_d8,0xb0);
        *(undefined4 *)(param_1 + 0x84) = 0x80000000;
        return;
      }
      bVar8 = true;
    }
    else {
      if (uVar3 != 0) {
        local_104 = uVar11 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                            (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) &
                    uVar6;
        goto LAB_015dba40;
      }
      bVar8 = false;
    }
    iVar13 = iVar13 + 4;
    uVar11 = iVar13 + uVar11;
  } while( true );
}

