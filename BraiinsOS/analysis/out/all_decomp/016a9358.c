// FUN_016a9358 @ 016a9358 size=504 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_016a9358(int param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int local_34;
  int local_30;
  int *local_2c;
  code *local_28;
  
  if (*(int *)(param_1 + 0x1c) == -0x80000000) {
    bVar1 = false;
    if ((*(int *)(param_1 + 0x10) == -0x80000000) && (bVar1 = true, *(int *)(param_1 + 0xc) == 0))
    goto LAB_016a9534;
LAB_016a93d8:
    uVar4 = *param_2;
    iVar7 = param_2[1];
    pcVar5 = *(code **)(iVar7 + 0xc);
    iVar2 = (*pcVar5)(uVar4,&DAT_00418df9,1);
    if (iVar2 != 0) {
      return 1;
    }
    if ((!bVar1) &&
       (iVar2 = FUN_00faace8(param_2,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18)
                            ), iVar2 != 0)) {
      return 1;
    }
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 != 0) {
      iVar6 = *(int *)(param_1 + 8);
      local_28 = FUN_016a4570;
      local_2c = &local_34;
      local_34 = iVar6;
      iVar3 = FUN_00fa948c(uVar4,iVar7,&DAT_00588c4b,&local_2c);
      if (iVar3 != 0) {
        return 1;
      }
      if (iVar2 != 1) {
        iVar2 = iVar2 * 0x20 + -0x20;
        do {
          iVar6 = iVar6 + 0x20;
          local_28 = FUN_016a4570;
          local_2c = &local_30;
          local_30 = iVar6;
          iVar3 = FUN_00fa948c(uVar4,iVar7,&DAT_0057b596,&local_2c);
          if (iVar3 != 0) {
            return 1;
          }
          iVar2 = iVar2 + -0x20;
        } while (iVar2 != 0);
      }
      iVar2 = (*pcVar5)(uVar4,"}",1);
      if (iVar2 != 0) {
        return 1;
      }
    }
    iVar2 = (*pcVar5)(uVar4,&DAT_00418ec5,1);
    if (iVar2 != 0) {
      return 1;
    }
  }
  else {
    iVar2 = FUN_00faace8(param_2,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    if (iVar2 != 0) {
      return 1;
    }
    bVar1 = false;
    if ((*(int *)(param_1 + 0x10) != -0x80000000) || (bVar1 = true, *(int *)(param_1 + 0xc) != 0))
    goto LAB_016a93d8;
    uVar4 = *param_2;
    pcVar5 = *(code **)(param_2[1] + 0xc);
  }
  iVar2 = (*pcVar5)(uVar4,"=",1);
  if (iVar2 != 0) {
    return 1;
  }
LAB_016a9534:
  uVar4 = FUN_0169b714(param_1,param_2);
  return uVar4;
}

