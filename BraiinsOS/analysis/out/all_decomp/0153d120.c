// FUN_0153d120 @ 0153d120 size=192 calls_out=1 calls_in=1
// strings: 

undefined4 * FUN_0153d120(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  
  puVar11 = (undefined4 *)param_1[1];
  if ((undefined4 *)*param_1 != puVar11) {
    iVar9 = param_2[3];
    uVar6 = *param_2;
    iVar7 = param_2[1];
    uVar1 = param_2[2];
    puVar10 = (undefined4 *)*param_1;
    do {
      uVar4 = *puVar10;
      pcVar5 = *(code **)(puVar10[1] + 0x18);
      puVar8 = puVar10 + 2;
      *param_1 = puVar8;
      (*pcVar5)(&local_34,uVar4);
      if ((local_34 != 0) && (local_30 == iVar7)) {
        iVar2 = thunk_FUN_016dd50a(local_34,uVar6,iVar7);
        iVar3 = iVar2;
        if (iVar2 == 0) {
          iVar3 = local_28;
        }
        if ((iVar2 == 0 && iVar3 == iVar9) &&
           (iVar3 = thunk_FUN_016dd50a(local_2c,uVar1,iVar9), iVar3 == 0)) {
          return puVar10;
        }
      }
      puVar10 = puVar8;
    } while (puVar8 != puVar11);
  }
  return (undefined4 *)0x0;
}

