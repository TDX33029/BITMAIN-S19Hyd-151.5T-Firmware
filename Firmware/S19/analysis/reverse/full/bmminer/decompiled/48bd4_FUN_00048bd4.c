// FUN_00048bd4 @ 00048bd4  size=636  callers=3
// program: bmminer


undefined4
FUN_00048bd4(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *local_28;
  void *local_24 [2];
  
  if (param_1 == (int *)0x0) {
    return 0x1f5;
  }
  puVar1 = (undefined4 *)*param_1;
  puVar2 = malloc(0x18);
  if (puVar2 == (void *)0x0) {
    uVar3 = 2;
  }
  else {
    puVar5 = puVar1 + 1;
    *puVar2 = puVar5;
    puVar2[1] = puVar5;
    puVar2[3] = 1;
    uVar3 = FUN_00049858(param_2,param_3);
    puVar2[4] = uVar3;
    if (param_4 == 0) {
      puVar2[5] = 0;
    }
    else {
      uVar3 = FUN_00049858(param_4,param_5);
      puVar2[5] = uVar3;
    }
    puVar6 = (undefined4 *)*puVar1;
    if (puVar5 == (undefined4 *)*puVar1) {
      *puVar1 = puVar2;
      puVar2[2] = 0;
      puVar5 = puVar2;
      goto LAB_000492d0;
    }
    while( true ) {
      FUN_000498b4(puVar6[4],&local_28);
      FUN_000498b4(puVar2[4],local_24);
      iVar4 = (*(code *)puVar1[9])(local_24[0],local_28);
      free(local_28);
      free(local_24[0]);
      if (iVar4 == 0) break;
      puVar7 = puVar6 + 1;
      if (iVar4 < 0) {
        puVar7 = puVar6;
      }
      if (puVar5 == (undefined4 *)*puVar7) {
        puVar2[2] = puVar6;
        FUN_000498b4(puVar6[4],&local_28);
        FUN_000498b4(puVar2[4],local_24);
        iVar4 = (*(code *)puVar1[9])(local_24[0],local_28);
        free(local_28);
        free(local_24[0]);
        puVar5 = (undefined4 *)*puVar1;
        if (iVar4 < 0) {
          *puVar6 = puVar2;
        }
        else {
          puVar6[1] = puVar2;
        }
        goto LAB_00049270;
      }
      puVar6 = (undefined4 *)*puVar7;
    }
    uVar3 = 0x191;
  }
  return uVar3;
LAB_00049270:
  puVar6 = puVar2;
  if (puVar2 != puVar5) {
    while( true ) {
      puVar7 = (undefined4 *)puVar6[2];
      if (puVar7[3] != 1) goto LAB_000492d0;
      puVar2 = (undefined4 *)puVar7[2];
      puVar8 = (undefined4 *)*puVar2;
      if (puVar7 == puVar8) {
        iVar4 = puVar2[1];
        if (*(int *)(iVar4 + 0xc) == 1) {
          puVar7[3] = 0;
          *(undefined4 *)(iVar4 + 0xc) = 0;
          puVar2[3] = 1;
        }
        else {
          if ((undefined4 *)puVar8[1] == puVar6) {
            FUN_00048d40(puVar1,puVar8);
            puVar8 = (undefined4 *)puVar8[2];
            puVar2 = (undefined4 *)puVar8[2];
            puVar6 = puVar7;
          }
          puVar8[3] = 0;
          puVar2[3] = 1;
          FUN_00048d94(puVar1,puVar2);
          puVar5 = (undefined4 *)*puVar1;
          puVar2 = puVar6;
        }
        goto LAB_00049270;
      }
      if (puVar8[3] == 1) break;
      puVar5 = puVar7;
      if (puVar6 == (undefined4 *)*puVar7) {
        FUN_00048d94(puVar1,puVar7);
        puVar5 = (undefined4 *)puVar7[2];
        puVar2 = (undefined4 *)puVar5[2];
        puVar6 = puVar7;
      }
      puVar5[3] = 0;
      puVar2[3] = 1;
      FUN_00048d40(puVar1,puVar2);
      puVar5 = (undefined4 *)*puVar1;
      if (puVar6 == puVar5) goto LAB_000492d0;
    }
    puVar7[3] = 0;
    puVar8[3] = 0;
    puVar2[3] = 1;
    goto LAB_00049270;
  }
LAB_000492d0:
  puVar5[3] = 0;
  FUN_00048fe0(puVar1);
  return 0;
}

