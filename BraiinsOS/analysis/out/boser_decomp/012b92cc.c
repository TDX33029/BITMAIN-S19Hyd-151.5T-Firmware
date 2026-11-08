// FUN_012b92cc @ 012b92cc size=264 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_012b92cc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_r3;
  undefined4 uVar7;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  
  if (*param_1 == 0) {
LAB_012b939c:
    puVar1 = (undefined4 *)param_1[10];
    uVar2 = 0;
    if ((puVar1 == (undefined4 *)0x0) || (puVar1 == (undefined4 *)param_1[0xb])) goto LAB_012b93c4;
    param_1[10] = (int)(puVar1 + 2);
  }
  else {
    piVar8 = param_1 + 3;
    if ((*piVar8 == 0) ||
       (puVar1 = (undefined4 *)FUN_012b0fa0(piVar8,param_1), param_4 = extraout_r3,
       puVar1 == (undefined4 *)0x0)) {
      puVar9 = (undefined4 *)param_1[7];
      param_1[3] = 0;
      if (puVar9 == (undefined4 *)0x0) {
LAB_012b936c:
        param_1[3] = 0;
        if ((param_1[5] == 0) ||
           (puVar1 = (undefined4 *)FUN_012b0fa0(param_1 + 5,param_1), param_4 = extraout_r3_02,
           puVar1 == (undefined4 *)0x0)) {
          *param_1 = 0;
          param_1[5] = 0;
          goto LAB_012b939c;
        }
      }
      else {
        puVar10 = (undefined4 *)param_1[8];
        iVar11 = param_1[9];
        do {
          if (puVar9 == puVar10) goto LAB_012b936c;
          uVar6 = *puVar9;
          uVar7 = puVar9[1];
          puVar9 = puVar9 + 2;
          uVar2 = *(undefined4 *)(iVar11 + 0x48);
          uVar5 = *(undefined4 *)(iVar11 + 0x4c);
          param_1[7] = (int)puVar9;
          iVar3 = FUN_012a4878(uVar2,uVar5,uVar6,uVar7);
          if (iVar3 == 0) {
            puVar1 = (undefined4 *)0x0;
            param_4 = extraout_r3_00;
          }
          else {
            iVar4 = *(int *)(iVar3 + 100);
            iVar3 = *(int *)(iVar3 + 0x68);
            param_1[3] = iVar4;
            param_1[4] = iVar4 + iVar3 * 0x10;
            puVar1 = (undefined4 *)FUN_012b0fa0(piVar8,param_1);
            param_4 = extraout_r3_01;
          }
        } while (puVar1 == (undefined4 *)0x0);
      }
    }
  }
  uVar2 = *puVar1;
  param_4 = puVar1[1];
LAB_012b93c4:
  return CONCAT44(param_4,uVar2);
}

