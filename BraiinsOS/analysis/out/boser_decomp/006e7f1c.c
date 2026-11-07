// FUN_006e7f1c @ 006e7f1c size=252 calls_out=2 calls_in=3
// strings: 

void FUN_006e7f1c(int param_1,undefined4 param_2,uint *param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  uVar2 = *(uint *)(param_1 + 0x88);
  if (param_4 == 0) {
    if (*(char *)(param_1 + 0x90) == '\x01') goto LAB_006e7ff4;
    uVar1 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x90) != '\x01') {
      if (*(uint *)(param_1 + 0x78) < uVar2) {
        iVar4 = *(int *)(param_1 + 0x68);
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(undefined4 *)(param_1 + 0x68) = 0;
        if (iVar4 != 0) {
          puVar3 = (undefined4 *)(*(int *)(param_1 + 100) + 4);
          do {
            if ((uint)puVar3[-1] < 2) {
              FUN_0134bd64(*puVar3,puVar3[1]);
            }
            puVar3 = puVar3 + 4;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        iVar4 = *(int *)(param_1 + 0x74);
        *(undefined4 *)(param_1 + 0x74) = 0;
        if (iVar4 != 0) {
          puVar3 = (undefined4 *)(*(int *)(param_1 + 0x70) + 4);
          do {
            if ((uint)puVar3[-1] < 2) {
              FUN_0134bd64(*puVar3,puVar3[1]);
            }
            puVar3 = puVar3 + 4;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        *(uint *)(param_1 + 0x78) = uVar2;
      }
LAB_006e7ff4:
      if (*param_3 < 2) {
        FUN_0134bd64(param_3[1],param_3[2]);
        return;
      }
      return;
    }
    uVar1 = 1;
  }
  FUN_006e8018(param_1 + 0x54,param_3,param_2,uVar2,uVar1);
  return;
}

