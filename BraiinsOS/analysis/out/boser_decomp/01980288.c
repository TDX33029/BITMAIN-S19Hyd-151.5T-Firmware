// FUN_01980288 @ 01980288 size=388 calls_out=7 calls_in=10
// strings: 

void FUN_01980288(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int local_98;
  uint local_94;
  uint local_68;
  uint local_64;
  uint local_30;
  uint local_2c;
  
  uVar3 = *param_2;
  iVar6 = 0;
  FUN_01bed93e(&local_98,0,0x68);
  uVar8 = FUN_01bf05c2(uVar3,&local_98);
  if ((int)uVar8 == -1) {
LAB_01980318:
    FUN_01be3244();
  }
  else {
    lVar9 = FUN_01bf033e(uVar3,(int)((ulonglong)uVar8 >> 0x20),0,0,1);
    uVar1 = (uint)((ulonglong)lVar9 >> 0x20);
    if (lVar9 == -1) goto LAB_01980318;
    uVar3 = local_68 - (uint)lVar9;
    iVar6 = 1;
    if (local_64 <= uVar1 && (uint)((uint)lVar9 <= local_68) <= local_64 - uVar1) {
      uVar3 = 0;
    }
  }
  uVar2 = *param_3;
  uVar5 = param_3[2];
  uVar1 = 0;
  if (iVar6 != 0) {
    uVar1 = uVar3;
  }
  if (uVar2 - uVar5 < uVar1) {
    uVar7 = uVar5 + uVar1;
    if (CARRY4(uVar5,uVar1)) {
LAB_01980344:
      *(undefined2 *)param_1 = 0x2601;
      return;
    }
    if (uVar7 <= uVar2 * 2) {
      uVar7 = uVar2 << 1;
    }
    if (uVar7 < 9) {
      uVar7 = 8;
    }
    FUN_006646a0(&local_98,uVar2,param_3[1],uVar7);
    if (local_98 == 1) goto LAB_01980344;
    *param_3 = uVar7;
    param_3[1] = local_94;
  }
  puVar4 = &local_30;
  FUN_019a1428(puVar4,param_2,param_3,iVar6,uVar3);
  uVar3 = param_3[2];
  FUN_012fbd94(&local_98,param_3[1] + uVar5,uVar3 - uVar5);
  if (local_98 != 0) {
    *param_1 = local_30;
    param_1[1] = local_2c;
    if ((local_30 & 0xff) != 4) goto LAB_01980400;
    puVar4 = &DAT_01d276bc;
    uVar3 = uVar5;
  }
  uVar5 = uVar3;
  uVar3 = puVar4[1];
  *param_1 = *puVar4;
  param_1[1] = uVar3;
LAB_01980400:
  param_3[2] = uVar5;
  return;
}

