// FUN_019123cc @ 019123cc size=200 calls_out=1 calls_in=1
// strings: 

undefined4 * FUN_019123cc(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  
  puVar11 = (undefined4 *)param_1[1];
  if ((undefined4 *)*param_1 != puVar11) {
    iVar8 = param_2[3];
    iVar6 = *param_2;
    iVar7 = param_2[1];
    iVar1 = param_2[2];
    puVar9 = (undefined4 *)*param_1;
    do {
      uVar4 = *puVar9;
      puVar10 = puVar9 + 2;
      pcVar5 = *(code **)(puVar9[1] + 0x18);
      *param_1 = puVar10;
      (*pcVar5)(&local_34,uVar4);
      if (iVar6 == 0 || local_34 == 0) {
        if (iVar6 == 0 && local_34 == 0) {
          return puVar9;
        }
      }
      else if (local_30 == iVar7) {
        iVar2 = thunk_FUN_01bed842(local_34,iVar6,iVar7);
        iVar3 = iVar2;
        if (iVar2 == 0) {
          iVar3 = local_28;
        }
        if ((iVar2 == 0 && iVar3 == iVar8) &&
           (iVar3 = thunk_FUN_01bed842(local_2c,iVar1,iVar8), iVar3 == 0)) {
          return puVar9;
        }
      }
      puVar9 = puVar10;
    } while (puVar10 != puVar11);
  }
  return (undefined4 *)0x0;
}

