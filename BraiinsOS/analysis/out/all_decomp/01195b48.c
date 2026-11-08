// FUN_01195b48 @ 01195b48 size=344 calls_out=8 calls_in=1
// strings: oneOf

void FUN_01195b48(undefined4 *param_1,undefined4 param_2,undefined4 param_3,byte *param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  bool bVar8;
  undefined1 auStack_170 [56];
  int *local_138;
  int local_134;
  undefined1 auStack_e0 [136];
  undefined1 local_58;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int local_40;
  undefined *local_3c;
  int local_38;
  int local_34;
  int iStack_30;
  int *piStack_2c;
  int iStack_28;
  
  uVar3 = (uint)*param_4;
  bVar8 = uVar3 == 4;
  if (bVar8) {
    uVar3 = *(uint *)(param_4 + 0xc);
  }
  if (!bVar8 || uVar3 != 1) {
    FUN_011a1930(param_1 + 1,param_2,param_4);
    *param_1 = 1;
    return;
  }
  uVar6 = *(undefined4 *)(param_4 + 8);
  FUN_0119d4b4(auStack_170,param_2,"oneOf",5);
  FUN_0119f6cc(auStack_e0,auStack_170,0);
  uVar2 = FUN_01352d48(local_58,uVar6);
  FUN_0125acb4(&local_40,auStack_e0,uVar6,uVar2);
  if (local_40 == 0) {
    piVar4 = (int *)0x0;
    puVar7 = local_3c;
  }
  else {
    local_50 = local_38;
    iStack_4c = local_34;
    iStack_48 = iStack_30;
    do {
      iVar5 = *local_138;
      bVar8 = (bool)hasExclusiveAccess(local_138);
    } while (!bVar8);
    *local_138 = iVar5 + 1;
    if (iVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1195c9c);
      (*pcVar1)();
    }
    piStack_2c = local_138;
    iStack_28 = local_134;
    piVar4 = (int *)thunk_FUN_016d4a50(0x1c);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x1c);
    }
    *piVar4 = local_40;
    piVar4[1] = (int)local_3c;
    piVar4[2] = local_38;
    piVar4[3] = local_34;
    piVar4[4] = iStack_30;
    piVar4[5] = (int)piStack_2c;
    piVar4[6] = iStack_28;
    puVar7 = &DAT_01889a68;
  }
  FUN_01161600(auStack_e0);
  FUN_01161600(auStack_170);
  param_1[1] = piVar4;
  param_1[2] = puVar7;
  *param_1 = 1;
  return;
}

