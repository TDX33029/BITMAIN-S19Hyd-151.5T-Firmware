// FUN_01b4639c @ 01b4639c size=1072 calls_out=5 calls_in=3
// strings: 

undefined8
FUN_01b4639c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  int iVar1;
  bool bVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_12d0 [76];
  undefined1 auStack_1284 [608];
  int *local_1024;
  char acStack_444 [524];
  char acStack_238 [524];
  int local_2c;
  
  local_2c = DAT_01d53560;
  iVar1 = *param_1 << 2;
  local_1024 = param_1;
  FUN_01b28374(param_1,auStack_1284,param_6,param_7,param_8);
  iVar4 = *param_1;
  iVar5 = param_1[0xb];
  FUN_01bed93e(acStack_444,0,0x20a);
  FUN_01bed93e(acStack_238,0,0x20a);
  FUN_01b460c8(acStack_444,param_9,param_1[1],5);
  bVar2 = true;
  FUN_01b460c8(acStack_238,param_5,param_1[1],5);
  for (iVar10 = param_1[1]; -1 < iVar10; iVar10 = iVar10 + -1) {
    if (!bVar2) {
      (*(code *)param_1[9])(param_2,param_3,param_4,param_2,param_3,param_4);
    }
    iVar6 = (int)acStack_444[iVar10];
    if (iVar6 != 0) {
      if (iVar6 < 0) {
        uVar7 = ~(iVar6 >> 1);
      }
      else {
        uVar7 = iVar6 + -1 >> 1;
      }
      iVar8 = iVar4 * 3 * uVar7;
      if (bVar2) {
        FUN_01b26974(param_2,auStack_1284 + iVar8 * 4,iVar1);
        FUN_01b26974(param_3,auStack_1284 + (iVar8 + *param_1) * 4,iVar1);
        FUN_01b26974(param_4,auStack_1284 + (iVar8 + *param_1 * 2) * 4,iVar1);
      }
      else {
        puVar3 = auStack_1284 + (iVar8 + *param_1) * 4;
        if (iVar6 < 0) {
          (*(code *)param_1[6])(auStack_12d0);
          puVar3 = auStack_12d0;
        }
        (*(code *)param_1[10])
                  (param_2,param_3,param_4,param_2,param_3,param_4,0,auStack_1284 + iVar8 * 4,puVar3
                   ,auStack_1284 + (iVar8 + *param_1 * 2) * 4);
      }
      bVar2 = false;
    }
    iVar6 = (int)acStack_238[iVar10];
    if (iVar6 != 0) {
      if (iVar6 < 0) {
        uVar7 = ~(iVar6 >> 1);
      }
      else {
        uVar7 = iVar6 + -1 >> 1;
      }
      iVar9 = iVar4 * uVar7;
      iVar8 = iVar5 + iVar9 * 8;
      if (bVar2) {
        FUN_01b26974(param_2,iVar8,iVar1);
        FUN_01b26974(param_3,iVar5 + (*param_1 + iVar9 * 2) * 4,iVar1);
        FUN_01b26974(param_4,param_1[8],iVar1);
      }
      else {
        puVar3 = (undefined1 *)(iVar5 + (*param_1 + iVar9 * 2) * 4);
        if (iVar6 < 0) {
          (*(code *)param_1[6])(auStack_12d0);
          puVar3 = auStack_12d0;
        }
        (*(code *)param_1[10])
                  (param_2,param_3,param_4,param_2,param_3,param_4,1,iVar8,puVar3,param_1[8]);
      }
      bVar2 = false;
    }
  }
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

