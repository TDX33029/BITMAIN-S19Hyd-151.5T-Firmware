// FUN_0116bf20 @ 0116bf20 size=392 calls_out=3 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0116bf20(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_d0;
  int local_cc;
  int local_c8;
  int iStack_c4;
  int local_c0;
  int local_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int local_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar3 = *(undefined4 **)(param_2 + 0xc);
  if (*(undefined4 **)(param_2 + 4) != puVar3) {
    piVar1 = *(int **)(param_2 + 0x10);
    puVar4 = *(undefined4 **)(param_2 + 4);
    do {
      local_90 = *puVar4;
      uStack_8c = puVar4[1];
      uStack_88 = puVar4[2];
      uStack_84 = puVar4[3];
      uStack_80 = puVar4[4];
      uStack_7c = puVar4[5];
      puVar5 = puVar4 + 0xc;
      local_78 = puVar4[6];
      uStack_74 = puVar4[7];
      uStack_70 = puVar4[8];
      uStack_6c = puVar4[9];
      uStack_68 = puVar4[10];
      uStack_64 = puVar4[0xb];
      *(undefined4 **)(param_2 + 4) = puVar5;
      FUN_00917a9c(&local_d0);
      if (local_d0 == 2 && local_cc == 0) {
        iVar2 = *piVar1;
        if ((iVar2 != 2) && (FUN_019bb7e0(piVar1[4],piVar1[5]), iVar2 != 0)) {
          FUN_006c1148(piVar1 + 1);
        }
        *piVar1 = local_c8;
        piVar1[1] = iStack_c4;
        piVar1[2] = local_c0;
        piVar1[3] = local_bc;
        piVar1[4] = iStack_b8;
        piVar1[5] = iStack_b4;
        piVar1[6] = iStack_b0;
        break;
      }
      if (local_d0 != 3 || local_cc != 0) {
        param_1[2] = local_c8;
        param_1[3] = iStack_c4;
        param_1[4] = local_c0;
        param_1[5] = local_bc;
        param_1[6] = iStack_b8;
        param_1[7] = iStack_b4;
        param_1[8] = iStack_b0;
        param_1[9] = local_ac;
        param_1[10] = iStack_a8;
        param_1[0xb] = iStack_a4;
        param_1[0xc] = local_a0;
        param_1[0xd] = iStack_9c;
        param_1[0xe] = iStack_98;
        param_1[0xf] = iStack_94;
        goto LAB_0116c09c;
      }
      puVar4 = puVar5;
    } while (puVar5 != puVar3);
  }
  local_cc = 0;
  local_d0 = 2;
LAB_0116c09c:
  *param_1 = local_d0;
  param_1[1] = local_cc;
  return;
}

