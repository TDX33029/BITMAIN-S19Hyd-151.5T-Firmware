// FUN_016e4998 @ 016e4998 size=232 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_016e4998(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int unaff_lr;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  undefined4 local_14;
  
  if (*param_2 == -0x80000000) {
    if (*param_1 != -0x80000000) {
      unaff_lr = param_1[2];
    }
    if (*param_1 != -0x80000000 && unaff_lr != 0) {
      iVar6 = param_1[1];
      uVar4 = *(uint *)(iVar6 + 8);
      if (unaff_lr != 1) {
        uVar2 = unaff_lr - 1U & 0xfffffff;
        puVar5 = (uint *)(iVar6 + 0x18);
        do {
          if (*puVar5 <= uVar4) {
            uVar4 = *puVar5;
          }
          uVar2 = uVar2 - 1;
          puVar5 = puVar5 + 4;
        } while (uVar2 != 0);
      }
      if (uVar4 != 0) {
        iVar1 = unaff_lr << 4;
        param_1 = (int *)0x0;
        puVar3 = (undefined1 *)(iVar6 + 0xc);
        do {
          *puVar3 = 0;
          iVar1 = iVar1 + -0x10;
          puVar3 = puVar3 + 0x10;
        } while (iVar1 != 0);
        goto LAB_016e4a5c;
      }
      FUN_016c904c(param_1);
      *param_1 = -0x80000000;
    }
    param_1 = (int *)0x0;
  }
  else if (*param_1 == -0x80000000) {
    local_24 = param_2[1];
    local_18 = param_2[2];
    param_1 = (int *)0x0;
    local_20 = local_24 + local_18 * 0x10;
    param_2[2] = 0;
    local_14 = 0;
    local_1c = param_2;
    FUN_016f1e44(&local_24);
  }
LAB_016e4a5c:
  return CONCAT44(param_2,param_1);
}

