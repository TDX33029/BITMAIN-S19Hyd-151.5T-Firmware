// FUN_01aaa3e0 @ 01aaa3e0 size=340 calls_out=1 calls_in=77
// strings: 

int FUN_01aaa3e0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int *local_38;
  undefined1 local_34;
  undefined4 *local_30;
  undefined1 *local_2c;
  int **local_28;
  code *local_24;
  
  local_44 = param_2;
  if (*(uint *)(param_1 + 8) != 2) {
    if ((*(uint *)(param_1 + 8) & 1) == 0) {
      iVar1 = *(int *)(param_1 + 0xc);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x10);
      iVar1 = *(int *)(param_1 + 0xc) + (*(int *)(iVar2 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(iVar2 + 0x20))(iVar1,param_1,&local_44);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 != 0) && (DAT_01d51ae9 == '\0')) {
    uVar4 = 0xd;
    puVar5 = &DAT_005312cd;
    if (param_2[1] != 0) {
      iVar2 = param_2[1] * 0xc;
      piVar3 = (int *)(*param_2 + 4);
      do {
        if ((*piVar3 != 0) && (*(int *)(piVar3[-1] + 8) == *(int *)(param_2[2] + 8))) {
          puVar5 = *(undefined **)(iVar1 + 0x14);
          uVar4 = *(undefined4 *)(iVar1 + 0x18);
          break;
        }
        piVar3 = piVar3 + 3;
        iVar2 = iVar2 + -0xc;
      } while (iVar2 != 0);
    }
    local_40 = *(undefined4 *)(iVar1 + 0xc);
    local_3c = *(undefined4 *)(iVar1 + 0x10);
    local_34 = 0;
    local_28 = &local_38;
    local_24 = FUN_01aa9cf8;
    local_30 = &local_40;
    local_2c = &LAB_018a13b8;
    local_38 = param_2;
    FUN_01aa9d3c(param_1,puVar5,uVar4,5 - *(int *)(iVar1 + 8),&DAT_0059a258,&local_30);
  }
  return param_1;
}

