// FUN_0129c1e8 @ 0129c1e8 size=312 calls_out=4 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0129c1e8(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_40;
  int *local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int iStack_28;
  
  uVar5 = param_2[2];
  puVar6 = (undefined4 *)*param_2;
  puVar8 = (undefined4 *)param_2[1];
  do {
    if (puVar6 == puVar8) {
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      return;
    }
    uVar3 = *puVar6;
    uVar4 = puVar6[1];
    puVar6 = puVar6 + 2;
    *param_2 = puVar6;
    FUN_012a477c(&local_30,uVar5,uVar3,uVar4);
  } while (local_30 == -0x80000000);
  piVar1 = (int *)thunk_FUN_01be5118(0x30);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x30);
  }
  *piVar1 = local_30;
  piVar1[1] = local_2c;
  piVar1[2] = iStack_28;
  local_40 = 4;
  local_38 = 1;
  iVar7 = 1;
  local_3c = piVar1;
  while (puVar6 != puVar8) {
    FUN_012a477c(&local_30,uVar5,*puVar6,puVar6[1]);
    puVar6 = puVar6 + 2;
    if (local_30 != -0x80000000) {
      if (iVar7 == local_40) {
        FUN_006520b4(&local_40,iVar7,1,4,0xc);
        piVar1 = local_3c;
      }
      local_38 = iVar7 + 1;
      piVar2 = piVar1 + iVar7 * 3;
      *piVar2 = local_30;
      piVar2[1] = local_2c;
      piVar2[2] = iStack_28;
      iVar7 = local_38;
    }
  }
  *param_1 = local_40;
  param_1[1] = (int)local_3c;
  param_1[2] = local_38;
  return;
}

