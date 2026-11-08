// FUN_0122d954 @ 0122d954 size=428 calls_out=6 calls_in=2
// strings: 

undefined4 FUN_0122d954(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_34;
  byte local_29 [5];
  
  if (*param_2 != '\x03') {
    return 0;
  }
  if (*(uint *)(param_2 + 0xc) < 0x10) {
    local_4c = *(undefined4 *)(param_2 + 8);
    local_48 = *(uint *)(param_2 + 0xc);
    FUN_00fb3af4(local_29,&local_4c);
    if ((local_48 == 0) && ((local_29[0] & 1) != 0)) {
      return 0;
    }
  }
  piVar6 = (int *)*param_1;
  do {
    iVar4 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar4 + 1;
  if (iVar4 < 0) {
LAB_0122dafc:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x122dafc);
    (*pcVar1)();
  }
  uVar8 = param_1[1];
  if (param_4 == 0) {
    local_4c = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar3 = *(int **)(param_4 + 0xc);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_0122dafc;
    uVar9 = *(undefined4 *)(param_4 + 0xc);
    uVar10 = *(undefined4 *)(param_4 + 0x10);
    uVar5 = 0;
    uVar7 = (*(int **)(param_4 + 4))[1];
    if (uVar7 <= uVar8) {
      iVar4 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar6 + 2,uVar7);
      uVar5 = uVar7;
      if (iVar4 != 0) {
        uVar5 = 0;
      }
    }
    local_34 = FUN_011e1508((int)(piVar6 + 2) + uVar5,uVar8 - uVar5);
    local_40 = 3;
    local_4c = 2;
    local_3c = uVar9;
    local_38 = uVar10;
  }
  uVar11 = FUN_01238114(param_3);
  uVar9 = FUN_011f18dc(piVar6,uVar8,&local_4c,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20),param_2,
                       &DAT_005686f4,4);
  return uVar9;
}

