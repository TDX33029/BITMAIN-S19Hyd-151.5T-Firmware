// FUN_01b4c574 @ 01b4c574 size=360 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c

undefined4 FUN_01b4c574(int param_1,int param_2,uint *param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = **(int **)(param_1 + 0x14);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      uVar4 = 0x108;
      uVar1 = 0x7c;
      goto LAB_01b4c5cc;
    }
    iVar3 = FUN_01b4c564(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
  }
  if (param_2 == 0) {
LAB_01b4c604:
    *param_3 = *(uint *)(iVar3 + 0x1c);
    return 1;
  }
  if ((*(int *)(iVar3 + 0x18) == param_5) && (*(uint *)(iVar3 + 0x1c) <= *param_3)) {
    iVar2 = *(int *)(param_1 + 8);
    if (((iVar2 == 0) || (*(int *)(iVar2 + 8) == 0)) || (*(int *)(iVar2 + 4) != 0x3ca)) {
      uVar4 = 0x11f;
      uVar1 = 0x7e;
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar2 + 8) + 8);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*(int *)(iVar3 + 0x28) + 0x10))(param_2,param_3,param_4,iVar2);
        if (iVar2 == 0) {
          return 0;
        }
        goto LAB_01b4c604;
      }
      uVar4 = 0x126;
      uVar1 = 0x78;
    }
  }
  else {
    uVar4 = 0x117;
    uVar1 = 0x89;
  }
LAB_01b4c5cc:
  FUN_01b053d4(6,0,uVar1,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",uVar4);
  return 0;
}

