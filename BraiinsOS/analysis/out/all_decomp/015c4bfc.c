// FUN_015c4bfc @ 015c4bfc size=396 calls_out=7 calls_in=7
// strings: 

void FUN_015c4bfc(uint *param_1,uint *param_2,uint *param_3)

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
  FUN_016dd606(&local_98,0,0x68);
  uVar8 = FUN_016e03d2(uVar3,&local_98);
  if ((int)uVar8 == -1) {
LAB_015c4c8c:
    FUN_016d2bc8();
  }
  else {
    lVar9 = FUN_016e011a(uVar3,(int)((ulonglong)uVar8 >> 0x20),0,0,1);
    uVar2 = (uint)((ulonglong)lVar9 >> 0x20);
    if (lVar9 == -1) goto LAB_015c4c8c;
    uVar3 = local_68 - (uint)lVar9;
    iVar6 = 1;
    if (local_64 <= uVar2 && (uint)((uint)lVar9 <= local_68) <= local_64 - uVar2) {
      uVar3 = 0;
    }
  }
  uVar1 = *param_3;
  uVar5 = param_3[2];
  uVar2 = 0;
  if (iVar6 != 0) {
    uVar2 = uVar3;
  }
  if (uVar2 <= uVar1 - uVar5) {
LAB_015c4d00:
    puVar4 = &local_30;
    FUN_015e7540(puVar4,param_2,param_3,iVar6,uVar3);
    uVar3 = param_3[2];
    FUN_00fab1e0(&local_98,param_3[1] + uVar5,uVar3 - uVar5);
    if (local_98 != 0) {
      *param_1 = local_30;
      param_1[1] = local_2c;
      if ((local_30 & 0xff) != 4) {
        param_3[2] = uVar5;
        return;
      }
      puVar4 = &DAT_018aaaa8;
      uVar3 = uVar5;
    }
    uVar2 = puVar4[1];
    *param_1 = *puVar4;
    param_1[1] = uVar2;
    param_3[2] = uVar3;
    return;
  }
  uVar7 = uVar5 + uVar2;
  if (!CARRY4(uVar5,uVar2)) {
    if (uVar7 <= uVar1 * 2) {
      uVar7 = uVar1 << 1;
    }
    if (uVar7 < 9) {
      uVar7 = 8;
    }
    FUN_00600b74(&local_98,uVar1,param_3[1],uVar7);
    if (local_98 != 1) {
      *param_3 = uVar7;
      param_3[1] = local_94;
      goto LAB_015c4d00;
    }
  }
  *(undefined2 *)param_1 = 0x2601;
  return;
}

