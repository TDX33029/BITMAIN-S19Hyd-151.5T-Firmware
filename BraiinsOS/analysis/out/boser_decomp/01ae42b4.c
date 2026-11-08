// FUN_01ae42b4 @ 01ae42b4 size=304 calls_out=0 calls_in=2
// strings: 

void FUN_01ae42b4(uint *param_1,uint *param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  puVar5 = param_2 + -10;
  if (*param_2 == 0) {
    if ((*puVar5 & 1) != 0) {
      return;
    }
    cVar1 = (**(code **)((*(undefined4 **)*param_3)[1] + 0x10))
                      (**(undefined4 **)*param_3,param_2 + 2,param_2 + -8);
    if (cVar1 != -1) {
      return;
    }
  }
  else if ((*puVar5 & 1) != 0) {
    return;
  }
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uStack_48 = param_2[2];
  uStack_44 = param_2[3];
  uStack_40 = param_2[4];
  local_3c = param_2[5];
  uStack_38 = param_2[6];
  uStack_34 = param_2[7];
  uStack_30 = param_2[8];
  uStack_2c = param_2[9];
  *param_2 = *puVar5;
  param_2[1] = param_2[-9];
  param_2[2] = param_2[-8];
  param_2[3] = param_2[-7];
  param_2[4] = param_2[-6];
  param_2[5] = param_2[-5];
  param_2[6] = param_2[-4];
  param_2[7] = param_2[-3];
  param_2[8] = param_2[-2];
  param_2[9] = param_2[-1];
  if (puVar5 == param_1) {
LAB_01ae43c8:
    puVar4 = puVar5;
  }
  else {
    do {
      puVar4 = puVar5 + -10;
      if (uVar2 == 0) {
        if (((*puVar4 & 1) != 0) ||
           (cVar1 = (**(code **)((*(undefined4 **)*param_3)[1] + 0x10))
                              (**(undefined4 **)*param_3,&uStack_48,puVar5 + -8), cVar1 != -1))
        goto LAB_01ae43c8;
      }
      else if ((*puVar4 & 1) != 0) goto LAB_01ae43c8;
      *puVar5 = *puVar4;
      puVar5[1] = puVar5[-9];
      puVar5[2] = puVar5[-8];
      puVar5[3] = puVar5[-7];
      puVar5[4] = puVar5[-6];
      puVar5[5] = puVar5[-5];
      puVar5[6] = puVar5[-4];
      puVar5[7] = puVar5[-3];
      puVar5[8] = puVar5[-2];
      puVar5[9] = puVar5[-1];
      puVar5 = puVar4;
    } while (puVar4 != param_1);
  }
  *puVar4 = uVar2;
  puVar4[1] = uVar3;
  puVar4[2] = uStack_48;
  puVar4[3] = uStack_44;
  puVar4[4] = uStack_40;
  puVar4[5] = local_3c;
  puVar4[6] = uStack_38;
  puVar4[7] = uStack_34;
  puVar4[8] = uStack_30;
  puVar4[9] = uStack_2c;
  return;
}

