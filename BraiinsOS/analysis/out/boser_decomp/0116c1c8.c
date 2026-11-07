// FUN_0116c1c8 @ 0116c1c8 size=268 calls_out=3 calls_in=1
// strings: 

void FUN_0116c1c8(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar1 = *(undefined4 **)(param_2 + 0xc);
  if (*(undefined4 **)(param_2 + 4) != puVar1) {
    piVar2 = *(int **)(param_2 + 0x10);
    puVar4 = *(undefined4 **)(param_2 + 4);
    do {
      local_58 = *puVar4;
      uStack_54 = puVar4[1];
      uStack_50 = puVar4[2];
      uStack_4c = puVar4[3];
      uStack_48 = puVar4[4];
      uStack_44 = puVar4[5];
      puVar5 = puVar4 + 0xc;
      local_40 = puVar4[6];
      uStack_3c = puVar4[7];
      uStack_38 = puVar4[8];
      uStack_34 = puVar4[9];
      uStack_30 = puVar4[10];
      uStack_2c = puVar4[0xb];
      *(undefined4 **)(param_2 + 4) = puVar5;
      FUN_006c8594(&local_78);
      if (local_78 != 2) {
        iVar3 = *piVar2;
        if ((iVar3 != 2) && (FUN_019bb7e0(piVar2[4],piVar2[5]), iVar3 != 0)) {
          FUN_006c1148(piVar2 + 1);
        }
        *piVar2 = local_78;
        piVar2[1] = local_74;
        piVar2[2] = local_70;
        piVar2[3] = local_6c;
        piVar2[4] = local_68;
        piVar2[5] = iStack_64;
        piVar2[6] = iStack_60;
        break;
      }
      if (-0x7fffffff < local_74) {
        *param_1 = local_74;
        param_1[1] = local_70;
        param_1[2] = local_6c;
        return;
      }
      puVar4 = puVar5;
    } while (puVar5 != puVar1);
  }
  *param_1 = -0x80000000;
  return;
}

