// FUN_01b4c89c @ 01b4c89c size=640 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c

undefined4
FUN_01b4c89c(int param_1,int param_2,uint *param_3,int param_4,uint *param_5,int param_6,
            int *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_1 == 0) {
    uVar5 = 0x77;
  }
  else {
    if (*(int **)(param_1 + 0x14) != (int *)0x0) {
      iVar4 = **(int **)(param_1 + 0x14);
      if (iVar4 == 0) {
        if (*(int *)(param_1 + 8) != 0) {
          iVar4 = FUN_01b4c564(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
          goto LAB_01b4c978;
        }
        uVar5 = 0x7d;
        uVar2 = 0x7c;
      }
      else {
LAB_01b4c978:
        if (param_3 == (uint *)0x0 || (param_5 == (uint *)0x0 || param_7 == (int *)0x0)) {
          uVar5 = 0x85;
          uVar2 = 0x43;
        }
        else {
          if (param_4 == 0 && param_2 == 0) {
            if (param_6 == 0) {
              *param_3 = *(uint *)(iVar4 + 0x18);
              *param_5 = *(uint *)(iVar4 + 0x1c);
              *param_7 = *(int *)(iVar4 + 0x24);
              return 1;
            }
          }
          else if (param_2 != 0 && (param_6 != 0 && param_4 != 0)) {
            if ((*param_3 < *(uint *)(iVar4 + 0x18)) || (*param_5 < *(uint *)(iVar4 + 0x1c))) {
              uVar5 = 0x9b;
              uVar2 = 100;
            }
            else if (*param_7 == *(int *)(iVar4 + 0x24)) {
              iVar3 = *(int *)(param_1 + 8);
              if (((iVar3 == 0) || (*(int *)(iVar3 + 8) == 0)) || (*(int *)(iVar3 + 4) != 0x3ca)) {
                uVar5 = 0xa9;
                uVar2 = 0x7e;
              }
              else {
                iVar3 = *(int *)(*(int *)(iVar3 + 8) + 4);
                if (iVar3 != 0) {
                  iVar3 = (**(code **)(*(int *)(iVar4 + 0x28) + 8))
                                    (param_2,param_3,param_4,param_5,iVar3,param_6);
                  if (iVar3 == 0) {
                    return 0;
                  }
                  *param_3 = *(uint *)(iVar4 + 0x18);
                  *param_5 = *(uint *)(iVar4 + 0x1c);
                  return 1;
                }
                uVar5 = 0xb0;
                uVar2 = 0x78;
              }
            }
            else {
              uVar5 = 0xa1;
              uVar2 = 0x85;
            }
            goto LAB_01b4c95c;
          }
          uVar5 = 0x94;
          uVar2 = 0x76;
        }
      }
LAB_01b4c95c:
      uVar1 = 6;
      goto LAB_01b4c8e4;
    }
    uVar5 = 0x79;
  }
  uVar2 = 0x43;
  uVar1 = 0xe;
LAB_01b4c8e4:
  FUN_01b053d4(uVar1,0,uVar2,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",uVar5);
  return 0;
}

