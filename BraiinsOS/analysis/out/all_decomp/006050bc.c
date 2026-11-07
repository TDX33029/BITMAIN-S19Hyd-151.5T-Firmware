// FUN_006050bc @ 006050bc size=420 calls_out=8 calls_in=1
// strings: 

void FUN_006050bc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar3 = FUN_0177fabc(param_2,param_3);
  bVar1 = false;
  iVar7 = 0xf;
  bVar2 = false;
  if (iVar3 != 0) {
    iVar7 = FUN_01739ea4();
    if (iVar7 == 0) {
      iVar7 = 0xf;
    }
    else {
      iVar4 = FUN_0173a7a8(iVar7,iVar3);
      if (iVar4 == 1) {
        bVar2 = true;
        goto LAB_0060513c;
      }
      FUN_01739ee4(iVar7);
      iVar7 = 0xb;
    }
    FUN_0174ff8c(iVar3);
    bVar2 = false;
  }
LAB_0060513c:
  FUN_016e1d94(&local_28,param_2,param_3);
  local_30 = local_28;
  uStack_2c = local_24;
  iVar3 = FUN_016ea010(&local_30);
  if (iVar3 == 0) {
    iVar3 = 0xf;
  }
  else {
    iVar4 = FUN_0173a71c();
    if (iVar4 == 6) {
      bVar1 = true;
    }
    else {
      FUN_01739ee4(iVar3);
      iVar3 = 0xe;
    }
  }
  FUN_016e1d94(&local_28,param_2,param_3);
  local_30 = local_28;
  uStack_2c = local_24;
  iVar4 = FUN_016ea010(&local_30);
  if (iVar4 == 0) {
    iVar4 = 0xf;
    puVar6 = &DAT_0040b12b;
  }
  else {
    iVar5 = FUN_0173a71c();
    if (iVar5 == 0x390) {
      puVar6 = (undefined *)0x0;
      if (bVar1) {
        FUN_01739ee4(iVar4);
        iVar4 = iVar3;
      }
      goto joined_r0x006051ec;
    }
    FUN_01739ee4(iVar4);
    iVar4 = 0xe;
    puVar6 = &DAT_0033d8d2;
  }
  if (bVar1) {
    puVar6 = (undefined *)0x0;
    iVar4 = iVar3;
  }
joined_r0x006051ec:
  if (!bVar2) {
    *param_1 = puVar6;
    param_1[1] = iVar4;
    return;
  }
  *param_1 = 0;
  param_1[1] = iVar7;
  if (puVar6 == (undefined *)0x0) {
    FUN_01739ee4(iVar4);
    return;
  }
  return;
}

