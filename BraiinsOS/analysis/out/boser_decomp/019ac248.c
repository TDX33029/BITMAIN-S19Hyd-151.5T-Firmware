// FUN_019ac248 @ 019ac248 size=292 calls_out=2 calls_in=64
// strings: 

void FUN_019ac248(uint *param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  bool bVar9;
  uint local_40 [2];
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  
  uVar2 = *param_3;
  uVar5 = param_3[1];
  puVar8 = (undefined1 *)param_3[2];
  uVar4 = param_2[1];
  puVar7 = (undefined1 *)param_2[2];
  uVar6 = *param_2;
  bVar1 = (int)(uVar4 - (uVar5 + (uVar6 < uVar2))) < 0 !=
          (SBORROW4(uVar4,uVar5) != SBORROW4(uVar4 - uVar5,(uint)(uVar6 < uVar2)));
  if (uVar6 == uVar2 && uVar4 == uVar5) {
    bVar1 = puVar7 < puVar8;
  }
  if (bVar1) {
    FUN_019ac248(local_40,param_3,param_2);
    *param_1 = ~local_40[0] & 1;
    param_1[1] = 0;
    param_1[2] = local_38;
    param_1[3] = uStack_34;
    param_1[4] = uStack_30;
    return;
  }
  if (puVar7 < puVar8) {
    uVar3 = ~uVar2;
    uVar4 = uVar4 + ~uVar5 + (uint)CARRY4(uVar6,uVar3);
    puVar7 = &DAT_3b9aca00 + (int)puVar7;
  }
  else {
    uVar3 = -uVar2;
    uVar4 = uVar4 - (uVar5 + (uVar6 < uVar2));
  }
  uVar6 = uVar6 + uVar3;
  puVar7 = puVar7 + -(int)puVar8;
  if (&DAT_3b9ac9ff < puVar7) {
    bVar9 = 0xfffffffe < uVar6;
    uVar6 = uVar6 + 1;
    bVar1 = CARRY4(uVar4,(uint)bVar9);
    uVar4 = uVar4 + bVar9;
    if (bVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_005310af,0x19,&DAT_01d27e54);
    }
    puVar7 = puVar7 + -1000000000;
  }
  param_1[3] = uVar4;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar6;
  param_1[4] = (uint)puVar7;
  return;
}

