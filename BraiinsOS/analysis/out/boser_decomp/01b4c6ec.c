// FUN_01b4c6ec @ 01b4c6ec size=412 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c

undefined4 FUN_01b4c6ec(int param_1,int param_2,uint *param_3,int param_4,uint *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = **(int **)(param_1 + 0x14);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      uVar4 = 0xc9;
      uVar1 = 0x7c;
      goto LAB_01b4c748;
    }
    iVar3 = FUN_01b4c564(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
  }
  if (param_4 == 0 && param_2 == 0) {
LAB_01b4c780:
    *param_3 = *(uint *)(iVar3 + 0x18);
    *param_5 = *(uint *)(iVar3 + 0x1c);
    return 1;
  }
  if (param_4 == 0 || param_2 == 0) {
    uVar4 = 0xd9;
    uVar1 = 0x76;
  }
  else if ((*param_3 < *(uint *)(iVar3 + 0x18)) || (*param_5 < *(uint *)(iVar3 + 0x1c))) {
    uVar4 = 0xe0;
    uVar1 = 100;
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
    if (((iVar2 == 0) || (*(int *)(iVar2 + 8) == 0)) || (*(int *)(iVar2 + 4) != 0x3ca)) {
      uVar4 = 0xe8;
      uVar1 = 0x7e;
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar2 + 8) + 4);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*(int *)(iVar3 + 0x28) + 0xc))(param_2,param_3,param_4,param_5,iVar2);
        if (iVar2 == 0) {
          return 0;
        }
        goto LAB_01b4c780;
      }
      uVar4 = 0xef;
      uVar1 = 0x78;
    }
  }
LAB_01b4c748:
  FUN_01b053d4(6,0,uVar1,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",uVar4);
  return 0;
}

