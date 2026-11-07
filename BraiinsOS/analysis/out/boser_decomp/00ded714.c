// FUN_00ded714 @ 00ded714 size=416 calls_out=4 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ded714(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 local_30 [12];
  
  puVar6 = (undefined4 *)*param_2;
  iVar1 = param_2[1];
  iVar3 = param_2[2];
  iVar4 = param_2[3];
  if (iVar1 == iVar4) {
    puVar8 = puVar6;
  }
  else {
    puVar5 = (undefined4 *)param_2[4];
    puVar7 = puVar6;
    do {
      iVar1 = iVar1 + 0x28;
      param_2[1] = iVar1;
      FUN_00b59df4(local_30,*puVar5);
      uVar2 = FUN_00b56a78();
      puVar8 = puVar7 + 1;
      *puVar7 = uVar2;
      puVar7 = puVar8;
    } while (iVar1 != iVar4);
  }
  *param_2 = 4;
  param_2[1] = 4;
  param_2[3] = 4;
  param_2[2] = 0;
  FUN_00b59b78(iVar1,((uint)(iVar4 - iVar1) >> 3) * -0x33333333);
  *param_1 = iVar3 * 10;
  param_1[1] = (int)puVar6;
  param_1[2] = (uint)((int)puVar8 - (int)puVar6) >> 2;
  FUN_00b59ba4(param_2);
  return;
}

