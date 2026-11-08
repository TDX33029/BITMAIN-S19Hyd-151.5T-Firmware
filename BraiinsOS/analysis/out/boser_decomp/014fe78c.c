// FUN_014fe78c @ 014fe78c size=396 calls_out=4 calls_in=2
// strings: 

void FUN_014fe78c(int *param_1,undefined4 *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int local_f8;
  int local_f4;
  int *local_e8;
  int *piStack_e4;
  undefined4 uStack_e0;
  int *local_dc;
  int *local_d8;
  undefined1 auStack_d0 [172];
  
  if (param_3 == 0) {
    local_f4 = 8;
    local_f8 = 0;
  }
  else {
    local_f4 = FUN_01298504(param_3 * 0xc0,8);
    if (local_f4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(8,param_3 * 0xc0);
    }
    puVar8 = param_2;
    iVar9 = param_3;
    iVar10 = 0;
    do {
      local_f8 = param_3;
      if (puVar8 == param_2 + param_3 * 0x30) break;
      iVar9 = iVar9 + -1;
      piVar3 = (int *)*puVar8;
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + 1;
      if (iVar4 < 0) {
LAB_014fe908:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x14fe908);
        (*pcVar1)();
      }
      piVar5 = (int *)puVar8[1];
      do {
        iVar4 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar4 + 1;
      if (iVar4 < 0) goto LAB_014fe908;
      piVar6 = (int *)puVar8[4];
      uVar11 = puVar8[2];
      if (piVar6 != (int *)0x0) {
        do {
          iVar4 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_014fe908;
      }
      piVar7 = (int *)puVar8[3];
      do {
        iVar4 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar4 + 1;
      if (iVar4 < 0) goto LAB_014fe908;
      local_e8 = piVar3;
      piStack_e4 = piVar5;
      uStack_e0 = uVar11;
      local_dc = piVar7;
      local_d8 = piVar6;
      FUN_014fd200(auStack_d0,puVar8 + 6);
      FUN_01bed4e2(local_f4 + iVar10 * 0xc0,&local_e8,0xc0);
      puVar8 = puVar8 + 0x30;
      iVar10 = iVar10 + 1;
    } while (iVar9 != 0);
  }
  *param_1 = local_f8;
  param_1[1] = local_f4;
  param_1[2] = param_3;
  return;
}

