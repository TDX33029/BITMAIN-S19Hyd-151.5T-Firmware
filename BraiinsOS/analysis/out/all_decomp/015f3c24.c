// FUN_015f3c24 @ 015f3c24 size=304 calls_out=2 calls_in=104
// strings: 

void FUN_015f3c24(uint *param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint local_40 [2];
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  
  uVar2 = *param_3;
  uVar6 = param_3[1];
  uVar9 = param_3[2];
  uVar5 = param_2[1];
  uVar8 = param_2[2];
  uVar7 = *param_2;
  bVar1 = (int)(uVar5 - (uVar6 + (uVar7 < uVar2))) < 0 !=
          (SBORROW4(uVar5,uVar6) != SBORROW4(uVar5 - uVar6,(uint)(uVar7 < uVar2)));
  if (uVar7 == uVar2 && uVar5 == uVar6) {
    bVar1 = uVar8 < uVar9;
  }
  if (bVar1) {
    FUN_015f3c24(local_40,param_3,param_2);
    *param_1 = ~local_40[0] & 1;
    param_1[1] = 0;
    param_1[2] = local_38;
    param_1[3] = uStack_34;
    param_1[4] = uStack_30;
    return;
  }
  if (uVar8 < uVar9) {
    uVar4 = uVar7 + ~uVar2;
    uVar5 = uVar5 + ~uVar6 + (uint)CARRY4(uVar7,~uVar2);
    puVar3 = &DAT_3b9aca00 + (uVar8 - uVar9);
    if (puVar3 < &DAT_3b9aca00) goto LAB_015f3d20;
  }
  else {
    uVar4 = uVar7 - uVar2;
    uVar5 = uVar5 - (uVar6 + (uVar7 < uVar2));
    puVar3 = (undefined1 *)(uVar8 - uVar9);
    if (puVar3 < &DAT_3b9aca00) goto LAB_015f3d20;
  }
  bVar10 = 0xfffffffe < uVar4;
  uVar4 = uVar4 + 1;
  bVar1 = CARRY4(uVar5,(uint)bVar10);
  uVar5 = uVar5 + bVar10;
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00414854,0x19,&DAT_018ab258);
  }
  puVar3 = puVar3 + -1000000000;
LAB_015f3d20:
  param_1[3] = uVar5;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar4;
  param_1[4] = (uint)puVar3;
  return;
}

