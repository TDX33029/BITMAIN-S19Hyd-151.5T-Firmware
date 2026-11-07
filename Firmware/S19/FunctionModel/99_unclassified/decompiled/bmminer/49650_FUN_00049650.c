// FUN_00049650 @ 00049650  size=264  callers=1
// program: bmminer


undefined4 FUN_00049650(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar4 = param_1 + 1;
  puVar3 = (undefined4 *)*param_1;
  while (puVar3 != puVar4) {
    if ((undefined4 *)*puVar3 == puVar4) {
      puVar5 = (undefined4 *)puVar3[1];
      if (puVar4 == puVar5) {
        uVar1 = puVar3[4];
        if (param_1[7] != 0) {
          FUN_000498b4(uVar1,&local_20);
          (*(code *)param_1[7])(local_20);
          uVar1 = puVar3[4];
        }
        FUN_00049928(uVar1);
        iVar2 = puVar3[5];
        if (iVar2 != 0) {
          if (param_1[8] != 0) {
            FUN_000498b4(iVar2,&local_1c);
            (*(code *)param_1[8])(local_1c);
            iVar2 = puVar3[5];
          }
          FUN_00049928(iVar2);
        }
        puVar6 = (undefined4 *)puVar3[2];
        if (puVar6 == (undefined4 *)0x0) {
          free(puVar3);
          puVar3 = puVar5;
        }
        else {
          puVar3 = puVar6;
          if (puVar5 == (undefined4 *)*puVar6) {
            if (puVar5 != (undefined4 *)puVar6[1]) {
              free((undefined4 *)puVar6[1]);
              puVar6[1] = puVar5;
            }
          }
          else {
            free((undefined4 *)*puVar6);
            *puVar6 = puVar5;
          }
        }
      }
      else {
        puVar3 = puVar5;
      }
    }
    else {
      puVar3 = (undefined4 *)*puVar3;
    }
  }
  free(param_1);
  return 0;
}

