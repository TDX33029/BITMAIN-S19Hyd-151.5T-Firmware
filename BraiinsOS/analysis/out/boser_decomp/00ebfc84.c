// FUN_00ebfc84 @ 00ebfc84 size=544 calls_out=3 calls_in=3
// strings: a UUID string | assertion failed: !self.only_contains_attribute_certs | assertion failed: !self.only_contains_attribute_certs

undefined4 FUN_00ebfc84(int param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_30;
  undefined4 *local_2c;
  
  puVar6 = &DAT_0053340d;
  uVar3 = 1;
  iVar8 = param_1 + param_2 * 0xc;
  do {
    uVar7 = *(uint *)(param_3 + 4);
    uVar4 = uVar7 ^ 0x7fffffff;
    if (uVar3 < uVar4) {
      uVar4 = uVar3;
    }
    FUN_01284394(param_3,puVar6,uVar4);
    if (uVar7 == 0x7fffffff) goto LAB_00ebfe80;
    puVar6 = puVar6 + uVar4;
    uVar3 = uVar3 - uVar4;
  } while (uVar3 != 0);
  if (param_2 == 0) {
    uVar3 = 1;
    pcVar5 = "]";
    do {
      uVar7 = *(uint *)(param_3 + 4);
      uVar4 = uVar7 ^ 0x7fffffff;
      if (uVar3 < uVar4) {
        uVar4 = uVar3;
      }
      FUN_01284394(param_3,pcVar5,uVar4);
      if (uVar7 == 0x7fffffff) goto LAB_00ebfe80;
      pcVar5 = pcVar5 + uVar4;
      uVar3 = uVar3 - uVar4;
    } while (uVar3 != 0);
  }
  else {
    bVar1 = true;
    do {
      if (!bVar1) {
        uVar3 = 1;
        pcVar5 = ",";
        do {
          uVar7 = *(uint *)(param_3 + 4);
          uVar4 = uVar7 ^ 0x7fffffff;
          if (uVar3 < uVar4) {
            uVar4 = uVar3;
          }
          FUN_01284394(param_3,pcVar5,uVar4);
          if (uVar7 == 0x7fffffff) goto LAB_00ebfe50;
          pcVar5 = pcVar5 + uVar4;
          uVar3 = uVar3 - uVar4;
        } while (uVar3 != 0);
      }
      FUN_0096b2b0(&local_30,param_3,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
      if ((char)local_30 != '\x04') goto LAB_00ebfe98;
      param_1 = param_1 + 0xc;
      bVar1 = false;
    } while (param_1 != iVar8);
    uVar3 = 1;
    pcVar5 = "]";
    do {
      uVar7 = *(uint *)(param_3 + 4);
      uVar4 = uVar7 ^ 0x7fffffff;
      if (uVar3 < uVar4) {
        uVar4 = uVar3;
      }
      FUN_01284394(param_3,pcVar5,uVar4);
      if (uVar7 == 0x7fffffff) goto LAB_00ebfe50;
      pcVar5 = pcVar5 + uVar4;
      uVar3 = uVar3 - uVar4;
    } while (uVar3 != 0);
  }
  return 0;
LAB_00ebfe80:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
  goto LAB_00ebfe98;
LAB_00ebfe50:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
LAB_00ebfe98:
  uVar2 = FUN_01966f50(local_30,local_2c);
  return uVar2;
}

