// FUN_012c03dc @ 012c03dc size=232 calls_out=0 calls_in=2
// strings: 

void FUN_012c03dc(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((*param_2 & 1) == 0) {
    if (param_2[10] != 0) {
      uVar3 = param_2[9];
      uVar1 = uVar3 + param_2[10] * 0xc;
      do {
        if (*(int *)(uVar3 + 8) != 0) {
          iVar2 = *(int *)(uVar3 + 4);
          iVar4 = *(int *)(uVar3 + 8) * 0x18;
          do {
            if ((*(uint *)(iVar2 + 8) != *param_3 || *(uint *)(iVar2 + 0x10) != param_3[2]) ||
                (*(uint *)(iVar2 + 0xc) != param_3[1] || *(uint *)(iVar2 + 0x14) != param_3[3])) {
              local_38 = *(uint *)(iVar2 + 8);
              uStack_34 = *(undefined4 *)(iVar2 + 0xc);
              uStack_30 = *(undefined4 *)(iVar2 + 0x10);
              uStack_2c = *(undefined4 *)(iVar2 + 0x14);
              param_3 = &local_48;
              local_48 = *(uint *)(iVar2 + 8);
              uStack_44 = *(undefined4 *)(iVar2 + 0xc);
              uStack_40 = *(undefined4 *)(iVar2 + 0x10);
              uStack_3c = *(undefined4 *)(iVar2 + 0x14);
              goto LAB_012c04b4;
            }
            iVar2 = iVar2 + 0x18;
            iVar4 = iVar4 + -0x18;
          } while (iVar4 != 0);
        }
        uVar3 = uVar3 + 0xc;
      } while (uVar3 != uVar1);
    }
  }
  else {
    param_3 = &local_48;
    local_48 = param_2[1];
    uStack_44 = param_2[2];
    uStack_40 = param_2[3];
    uStack_3c = param_2[4];
  }
LAB_012c04b4:
  uVar1 = param_3[1];
  uVar3 = param_3[2];
  uVar5 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  param_1[3] = uVar5;
  return;
}

