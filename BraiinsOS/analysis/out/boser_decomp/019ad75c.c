// FUN_019ad75c @ 019ad75c size=360 calls_out=3 calls_in=1
// strings: 

void FUN_019ad75c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  int local_2c;
  
  if (DAT_01d50348 != '\0') {
    uVar6 = 0;
    iVar7 = 0;
    while( true ) {
      uVar3 = 0x80000fff;
      if (0x80000fff < uVar6) {
        uVar3 = uVar6;
      }
      if (iVar7 != -1) {
        uVar3 = 0x80000fff;
      }
      uVar3 = FUN_01be3ef2(param_3,param_2,0,~uVar3);
      if (uVar3 == 0xffffffff) break;
      if (uVar3 == 0) goto LAB_019ad7f4;
      bVar8 = CARRY4(uVar6,uVar3);
      uVar6 = uVar6 + uVar3;
      iVar7 = iVar7 + ((int)uVar3 >> 0x1f) + (uint)bVar8;
      if (uVar6 == 0xffffffff && iVar7 == -1) {
        uVar6 = 0xffffffff;
        iVar7 = -1;
LAB_019ad7f4:
        uVar2 = 4;
LAB_019ad7f8:
        *(undefined1 *)param_1 = uVar2;
        param_1[2] = uVar6;
        param_1[3] = iVar7;
        return;
      }
    }
    local_38 = uVar6;
    iStack_34 = iVar7;
    piVar4 = (int *)FUN_01be3244();
    local_2c = *piVar4;
    local_30 = 0;
    if (local_2c < 0x26) {
      if (local_2c != 1) {
        if (local_2c != 0x16) {
LAB_019ad890:
          *param_1 = 0;
          param_1[1] = local_2c;
          param_1[2] = uVar6;
          param_1[3] = iVar7;
          return;
        }
        if (uVar6 != 0 || iVar7 != 0) {
          puVar5 = &DAT_01d27870;
          goto LAB_019ad8b0;
        }
        goto LAB_019ad844;
      }
    }
    else {
      if (local_2c == 0x4b) {
        uVar2 = 6;
        goto LAB_019ad7f8;
      }
      if (local_2c != 0x26) goto LAB_019ad890;
    }
    DAT_01d50348 = '\0';
    if (uVar6 != 0 || iVar7 != 0) {
      puVar5 = &DAT_01d27860;
LAB_019ad8b0:
      FUN_012ffdbc(&local_38,"",puVar5);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x19ad8c0);
      (*pcVar1)();
    }
  }
LAB_019ad844:
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)param_1 = 6;
  return;
}

