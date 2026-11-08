// FUN_0172d238 @ 0172d238 size=1604 calls_out=3 calls_in=6
// strings: 

undefined8
FUN_0172d238(int *param_1,int param_2,int param_3,int param_4,uint *param_5,uint *param_6,
            uint *param_7,int param_8,uint *param_9,uint *param_10,uint *param_11)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uStack_4f0;
  uint local_4ec [18];
  uint uStack_4a4;
  undefined1 local_4a0 [72];
  uint uStack_458;
  undefined1 local_454 [76];
  undefined1 auStack_408 [76];
  uint auStack_3bc [19];
  uint auStack_370 [19];
  undefined1 auStack_324 [76];
  undefined1 auStack_2d8 [76];
  undefined1 auStack_28c [76];
  undefined1 auStack_240 [76];
  undefined1 auStack_1f4 [76];
  undefined1 auStack_1a8 [76];
  undefined1 auStack_15c [76];
  undefined1 auStack_110 [76];
  undefined1 auStack_c4 [76];
  undefined1 auStack_78 [76];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  uVar2 = (*(code *)param_1[7])(param_7);
  uVar3 = (*(code *)param_1[7])(param_11);
  (*(code *)param_1[5])(auStack_408,param_7);
  if (param_8 == 0) {
    (*(code *)param_1[5])(auStack_78,param_11);
    (*(code *)param_1[4])(auStack_3bc,param_5,auStack_78);
    (*(code *)param_1[2])(auStack_324,param_7,param_11);
    (*(code *)param_1[5])(auStack_324,auStack_324);
    (*(code *)param_1[3])(auStack_324,auStack_324,auStack_408);
    (*(code *)param_1[3])(auStack_324,auStack_324,auStack_78);
    (*(code *)param_1[4])(auStack_370,param_11,auStack_78);
    (*(code *)param_1[4])(auStack_370,auStack_370,param_6);
  }
  else {
    iVar9 = *param_1;
    if (iVar9 * 4 != 0) {
      if ((((auStack_3bc < param_5) && (param_5 < auStack_3bc + iVar9)) ||
          ((param_5 < auStack_3bc && (auStack_3bc < param_5 + iVar9)))) ||
         (0x4c < (uint)(iVar9 * 4))) goto LAB_0172d864;
      FUN_016dd1aa(auStack_3bc,param_5);
    }
    (*(code *)param_1[2])(auStack_324,param_7);
    iVar9 = *param_1;
    if (iVar9 * 4 != 0) {
      if (((auStack_370 < param_6) && (param_6 < auStack_370 + iVar9)) ||
         (((param_6 < auStack_370 && (auStack_370 < param_6 + iVar9)) || (0x4c < (uint)(iVar9 * 4)))
         )) {
LAB_0172d864:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0,0x172d864);
        (*pcVar1)();
      }
      FUN_016dd1aa(auStack_370,param_6);
    }
  }
  (*(code *)param_1[4])(auStack_2d8,param_9,auStack_408);
  (*(code *)param_1[3])(auStack_28c,auStack_2d8,auStack_3bc);
  uVar4 = (*(code *)param_1[7])(auStack_28c);
  (*(code *)param_1[4])(local_454,auStack_28c,auStack_324);
  (*(code *)param_1[4])(auStack_240,param_7,auStack_408);
  (*(code *)param_1[4])(auStack_1f4,param_10,auStack_240);
  (*(code *)param_1[3])(auStack_1a8,auStack_1f4,auStack_370);
  (*(code *)param_1[2])(auStack_1a8,auStack_1a8,auStack_1a8);
  uVar5 = (*(code *)param_1[7])(auStack_1a8);
  uVar7 = uVar2 - 1 & ~uVar2;
  uVar2 = uVar3 - 1 & ~uVar3;
  if ((~((int)(uVar2 | uVar7) >> 0x1f) & (int)((uVar4 | uVar5) - 1 & ~(uVar4 | uVar5)) >> 0x1f) == 0
     ) {
    (*(code *)param_1[2])(auStack_15c,auStack_28c,auStack_28c);
    (*(code *)param_1[5])(auStack_15c,auStack_15c);
    (*(code *)param_1[4])(auStack_110,auStack_28c,auStack_15c);
    (*(code *)param_1[4])(auStack_c4,auStack_3bc,auStack_15c);
    (*(code *)param_1[5])(local_4ec,auStack_1a8);
    (*(code *)param_1[3])(local_4ec,local_4ec,auStack_110);
    (*(code *)param_1[3])(local_4ec,local_4ec,auStack_c4);
    (*(code *)param_1[3])(local_4ec,local_4ec,auStack_c4);
    (*(code *)param_1[3])(local_4a0,auStack_c4,local_4ec);
    (*(code *)param_1[4])(local_4a0,local_4a0,auStack_1a8);
    (*(code *)param_1[4])(auStack_78,auStack_370,auStack_110);
    (*(code *)param_1[3])(local_4a0,local_4a0,auStack_78);
    (*(code *)param_1[3])(local_4a0,local_4a0,auStack_78);
    iVar9 = *param_1;
    if (iVar9 != 0) {
      puVar6 = &uStack_4f0;
      uVar2 = (int)uVar2 >> 0x1f;
      uVar3 = ~uVar2;
      uVar7 = (int)uVar7 >> 0x1f;
      uVar4 = ~uVar7;
      puVar8 = puVar6;
      puVar10 = param_9;
      do {
        puVar13 = puVar10 + 1;
        puVar8 = puVar8 + 1;
        *puVar8 = *puVar8 & uVar4 | *puVar10 & uVar7;
        puVar10 = puVar13;
      } while (puVar13 != param_9 + iVar9);
      puVar13 = &uStack_4a4;
      puVar8 = param_10;
      puVar10 = puVar13;
      do {
        puVar12 = puVar8 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = *puVar10 & uVar4 | *puVar8 & uVar7;
        puVar8 = puVar12;
      } while (param_10 + iVar9 != puVar12);
      puVar12 = &uStack_458;
      puVar8 = param_11;
      puVar10 = puVar12;
      do {
        puVar11 = puVar8 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = *puVar10 & uVar4 | *puVar8 & uVar7;
        puVar8 = puVar11;
      } while (param_11 + iVar9 != puVar11);
      puVar10 = (uint *)(param_2 + -4);
      puVar8 = param_5;
      do {
        puVar11 = puVar8 + 1;
        puVar6 = puVar6 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = *puVar6 & uVar3 | *puVar8 & uVar2;
        puVar8 = puVar11;
      } while (param_5 + iVar9 != puVar11);
      iVar9 = *param_1;
      if (iVar9 != 0) {
        puVar10 = (uint *)(param_3 + -4);
        puVar8 = param_6;
        do {
          puVar6 = puVar8 + 1;
          puVar13 = puVar13 + 1;
          puVar10 = puVar10 + 1;
          *puVar10 = *puVar13 & uVar3 | *puVar8 & uVar2;
          puVar8 = puVar6;
        } while (puVar6 != param_6 + iVar9);
        iVar9 = *param_1;
        if (iVar9 != 0) {
          puVar10 = (uint *)(param_4 + -4);
          puVar8 = param_7;
          do {
            puVar6 = puVar8 + 1;
            puVar12 = puVar12 + 1;
            puVar10 = puVar10 + 1;
            *puVar10 = *puVar12 & uVar3 | *puVar8 & uVar2;
            puVar8 = puVar6;
          } while (param_7 + iVar9 != puVar6);
        }
      }
    }
  }
  else {
    FUN_0172cfc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

