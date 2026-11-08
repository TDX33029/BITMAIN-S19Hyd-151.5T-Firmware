// FUN_00b33f58 @ 00b33f58 size=416 calls_out=6 calls_in=3
// strings: 

void FUN_00b33f58(undefined4 *param_1,int *param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int local_54;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  
  FUN_01bed4e2(&uStack_68,param_3,0x10);
  iVar7 = param_2[2];
  FUN_00a981d4();
  uStack_40 = uStack_68;
  uStack_3c = uStack_64;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  local_2f = 2;
  local_58 = 2;
  local_30 = param_5;
  local_54 = 0;
  local_2e = param_4;
  iVar3 = FUN_009dd3a4((uint *)(iVar7 + 0xa0));
  if (iVar3 == 0) {
    uVar6 = *(uint *)(iVar7 + 0xa0);
    uVar4 = 3;
    if ((uint)(uVar6 < 3) <= (uint)-*(int *)(iVar7 + 0xa4)) {
      uVar4 = uVar6 - 3;
    }
    if ((5 < uVar4) || (uVar4 == 2)) {
      FUN_019bb7e0(*(undefined4 *)(iVar7 + 0xa8),*(undefined4 *)(iVar7 + 0xac));
    }
    *(undefined4 *)(iVar7 + 0xa0) = 2;
    *(undefined4 *)(iVar7 + 0xa4) = 0;
    *(undefined4 *)(iVar7 + 0xb0) = local_70;
    *(undefined4 *)(iVar7 + 0xb4) = uStack_6c;
    *(undefined4 *)(iVar7 + 0xb8) = uStack_68;
    *(undefined4 *)(iVar7 + 0xbc) = uStack_64;
    *(undefined4 *)(iVar7 + 0xc0) = uStack_60;
    *(undefined4 *)(iVar7 + 0xc4) = uStack_5c;
    *(undefined1 *)(iVar7 + 200) = param_5;
    piVar5 = (int *)(iVar7 + 0xd0);
    *(undefined1 *)(iVar7 + 0xca) = param_4;
    *(undefined1 *)(iVar7 + 0xc9) = 2;
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = *piVar5 + 2;
    FUN_009dd354(iVar7 + 0x98);
    iVar3 = 0;
    do {
      FUN_019e03e8(iVar7 + 8 + iVar3);
      iVar3 = iVar3 + 0x10;
    } while (iVar3 != 0x80);
  }
  else {
    uVar4 = 3;
    iVar3 = -(local_54 + (uint)(local_58 >= 3));
    if ((uint)(local_58 < 3) <= (uint)-local_54) {
      uVar4 = local_58 - 3;
    }
    if (uVar4 < 6) {
      if (uVar4 == 2) {
        FUN_019bb7e0(2,local_58,iVar3,2 - local_58);
      }
    }
    else {
      FUN_019bb7e0(uVar4,local_58,iVar3,2 - local_58);
    }
    FUN_009dd354(iVar7 + 0x98);
  }
  do {
    iVar3 = *param_2;
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xb340f4);
    (*pcVar1)();
  }
  FUN_01bed4e2(param_1 + 1,param_3,0x10);
  *(undefined1 *)(param_1 + 5) = param_4;
  *param_1 = param_2;
  return;
}

