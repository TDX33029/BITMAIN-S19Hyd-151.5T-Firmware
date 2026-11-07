// FUN_00b154bc @ 00b154bc size=336 calls_out=3 calls_in=1
// strings: 

void FUN_00b154bc(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_80;
  int local_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar5 = *(undefined4 **)(param_2 + 0xc);
  iVar2 = -0x80000000;
  if (*(undefined4 **)(param_2 + 4) != puVar5) {
    piVar1 = *(int **)(param_2 + 0x10);
    puVar3 = *(undefined4 **)(param_2 + 4);
    do {
      local_58 = *puVar3;
      uStack_54 = puVar3[1];
      uStack_50 = puVar3[2];
      local_4c = puVar3[3];
      uStack_48 = puVar3[4];
      uStack_44 = puVar3[5];
      puVar4 = puVar3 + 0xc;
      local_40 = puVar3[6];
      uStack_3c = puVar3[7];
      uStack_38 = puVar3[8];
      uStack_34 = puVar3[9];
      uStack_30 = puVar3[10];
      uStack_2c = puVar3[0xb];
      *(undefined4 **)(param_2 + 4) = puVar4;
      FUN_00920c54(&local_80,&local_58);
      if (local_80 == -0x80000000) {
        iVar2 = *piVar1;
        if ((iVar2 != 2) && (FUN_019bb7e0(piVar1[4],piVar1[5]), iVar2 != 0)) {
          FUN_006c1148(piVar1 + 1);
        }
        *piVar1 = local_7c;
        piVar1[1] = iStack_78;
        piVar1[2] = iStack_74;
        piVar1[3] = local_70;
        piVar1[4] = iStack_6c;
        piVar1[5] = iStack_68;
        piVar1[6] = iStack_64;
        break;
      }
      if (local_80 != -0x7fffffff) {
        param_1[1] = local_7c;
        param_1[2] = iStack_78;
        param_1[3] = iStack_74;
        param_1[4] = local_70;
        param_1[5] = iStack_6c;
        param_1[6] = iStack_68;
        param_1[7] = iStack_64;
        param_1[8] = local_60;
        param_1[9] = iStack_5c;
        iVar2 = local_80;
        goto LAB_00b15600;
      }
      puVar3 = puVar4;
    } while (puVar4 != puVar5);
    iVar2 = -0x80000000;
  }
LAB_00b15600:
  *param_1 = iVar2;
  return;
}

